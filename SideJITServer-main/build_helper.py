# build_helper.py - Nuitka build configuration helper
import os
import sys
import platform
import yaml
import subprocess
from pathlib import Path
from typing import Dict, List, Optional

class NuitkaBuildHelper:
    """Helper class to manage Nuitka compilation with platform-specific DLL handling"""
    
    def __init__(self, config_path: str = "sidejitserver-nuitka-package.config.yml"):
        self.config_path = Path(config_path)
        self.config = self._load_config()
        self.platform_info = self._get_platform_info()
        
    def _load_config(self) -> Dict:
        """Load the YAML configuration file"""
        try:
            with open(self.config_path, 'r') as f:
                return yaml.safe_load(f)
        except FileNotFoundError:
            print(f"Config file {self.config_path} not found!")
            return {}
    
    def _get_platform_info(self) -> Dict[str, bool]:
        """Detect current platform and architecture"""
        system = platform.system().lower()
        machine = platform.machine().lower()
        
        return {
            'win32': system == 'windows',
            'linux': system == 'linux',
            'darwin': system == 'darwin',
            'arch_x86': machine in ['i386', 'i686', 'x86'],
            'arch_amd64': machine in ['x86_64', 'amd64'],
            'arch_arm64': machine in ['arm64', 'aarch64']
        }
    
    def _evaluate_condition(self, condition: str) -> bool:
        """Evaluate a condition string like 'win32 and arch_x86'"""
        # Replace condition tokens with actual values
        expr = condition
        for key, value in self.platform_info.items():
            expr = expr.replace(key, str(value))
        
        # Simple evaluation (you might want to use ast.literal_eval for safety)
        try:
            return eval(expr)
        except:
            return False
    
    def get_required_dlls(self, module_name: str = 'pytun_pmd3') -> List[Dict]:
        """Get list of DLLs required for current platform"""
        required_dlls = []
        
        for module in self.config:
            if module.get('module-name') == module_name:
                for dll_config in module.get('dlls', []):
                    condition = dll_config.get('when', 'True')
                    if self._evaluate_condition(condition):
                        required_dlls.append(dll_config)
        
        return required_dlls
    
    def resolve_dll_paths(self, module_name: str = 'pytun_pmd3') -> List[str]:
        """Resolve actual DLL file paths for current platform"""
        dll_paths = []
        required_dlls = self.get_required_dlls(module_name)
        
        for dll_config in required_dlls:
            from_filenames = dll_config.get('from_filenames', {})
            relative_path = from_filenames.get('relative_path', '')
            prefixes = from_filenames.get('prefixes', [])
            
            dll_dir = Path(relative_path)
            if dll_dir.exists():
                for prefix in prefixes:
                    # Look for DLL files with the given prefix
                    for dll_file in dll_dir.glob(f"{prefix}*.dll"):
                        dll_paths.append(str(dll_file.absolute()))
        
        return dll_paths
    
    def generate_nuitka_args(self, 
                           main_script: str = "SideJITServer/launch.py",
                           output_name: str = "SideJITServer") -> List[str]:
        """Generate Nuitka compilation arguments"""
        
        args = [
            "--standalone",
            "--onefile",
            f"--output-filename={output_name}",
            "--disable-console",  # Remove if you need console output
            "--enable-plugin=tk-inter",  # Add plugins as needed
            "--follow-imports",
            "--assume-yes-for-downloads",
        ]
        
        # Add DLL inclusions for Windows
        if self.platform_info['win32']:
            dll_paths = self.resolve_dll_paths()
            for dll_path in dll_paths:
                args.append(f"--include-data-file={dll_path}=.")
        
        # Add hidden imports (customize based on your needs)
        hidden_imports = [
            "asyncio",
            "websockets",
            "json",
            "yaml",
            "pathlib",
            "platform",
            "subprocess",
            "threading",
            "socket",
            "ssl",
            "ctypes",
            "ctypes.util",
        ]
        
        for import_name in hidden_imports:
            args.append(f"--include-module={import_name}")
        
        # Add the main script
        args.append(main_script)
        
        return args
    
    def compile(self, main_script: str = "SideJITServer/launch.py", 
                output_name: str = "SideJITServer") -> bool:
        """Run Nuitka compilation"""
        args = ["python", "-m", "nuitka"] + self.generate_nuitka_args(main_script, output_name)
        
        print("Running Nuitka compilation...")
        print("Command:", " ".join(args))
        print("This may take 25-50 minutes...")
        
        try:
            result = subprocess.run(args, check=True, capture_output=True, text=True)
            print("Compilation successful!")
            print(result.stdout)
            return True
        except subprocess.CalledProcessError as e:
            print(f"Compilation failed with error: {e}")
            print("STDOUT:", e.stdout)
            print("STDERR:", e.stderr)
            return False
    
    def verify_dependencies(self) -> bool:
        """Verify all required dependencies are available"""
        missing_deps = []
        
        # Check if Nuitka is installed
        try:
            subprocess.run(["python", "-m", "nuitka", "--version"], 
                         check=True, capture_output=True)
        except subprocess.CalledProcessError:
            missing_deps.append("nuitka")
        
        # Check if required DLLs exist
        if self.platform_info['win32']:
            dll_paths = self.resolve_dll_paths()
            for dll_path in dll_paths:
                if not Path(dll_path).exists():
                    missing_deps.append(f"DLL: {dll_path}")
        
        if missing_deps:
            print("Missing dependencies:")
            for dep in missing_deps:
                print(f"  - {dep}")
            return False
        
        return True
    
    def print_build_info(self):
        """Print build information"""
        print("=== Nuitka Build Configuration ===")
        print(f"Platform: {platform.system()} {platform.machine()}")
        print(f"Config file: {self.config_path}")
        print(f"Platform flags: {self.platform_info}")
        
        if self.platform_info['win32']:
            print("\nRequired DLLs:")
            dll_paths = self.resolve_dll_paths()
            for dll_path in dll_paths:
                exists = "✓" if Path(dll_path).exists() else "✗"
                print(f"  {exists} {dll_path}")
        
        print("\nNuitka arguments:")
        args = self.generate_nuitka_args()
        for arg in args:
            print(f"  {arg}")


def main():
    """Main entry point for build helper"""
    import argparse
    
    parser = argparse.ArgumentParser(description="Nuitka build helper for SideJITServer")
    parser.add_argument("--config", default="sidejitserver-nuitka-package.config.yml",
                       help="Path to config file")
    parser.add_argument("--main-script", default="SideJITServer/launch.py",
                       help="Main Python script to compile")
    parser.add_argument("--output", default="SideJITServer",
                       help="Output executable name")
    parser.add_argument("--info", action="store_true",
                       help="Show build information only")
    parser.add_argument("--verify", action="store_true",
                       help="Verify dependencies only")
    parser.add_argument("--compile", action="store_true",
                       help="Run compilation")
    
    args = parser.parse_args()
    
    builder = NuitkaBuildHelper(args.config)
    
    if args.info:
        builder.print_build_info()
    elif args.verify:
        if builder.verify_dependencies():
            print("✓ All dependencies are available")
        else:
            print("✗ Some dependencies are missing")
            sys.exit(1)
    elif args.compile:
        if not builder.verify_dependencies():
            print("Cannot compile: missing dependencies")
            sys.exit(1)
        
        success = builder.compile(args.main_script, args.output)
        sys.exit(0 if success else 1)
    else:
        parser.print_help()


if __name__ == "__main__":
    main()