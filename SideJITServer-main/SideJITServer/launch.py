# configuration and launch file for nuitka compilation
# Make executable standalone
# nuitka-project-if: {OS} in ("Windows", "Linux", "Darwin", "FreeBSD"):
#    nuitka-project: --mode=onefile
#    nuitka-project: --onefile-tempdir-spec="{CACHE_DIR}/SideJITServer"
# nuitka-project-else:
#    nuitka-project: --mode=standalone
# nuitka-project-if: {OS} == "Windows":
#    nuitka-project: --output-filename=SideJITServer-windows-x86_64.exe
#    nuitka-project: --include-module=jinxed.terminfo.vtwin10
#    nuitka-project: --include-module=jinxed.terminfo.ansicon
#    nuitka-project: --include-module=jinxed.terminfo.xterm
#    nuitka-project: --include-module=jinxed.terminfo.xterm_256color
#    nuitka-project: --include-module=click
#    nuitka-project: --include-module=zeroconf
#    nuitka-project: --include-module=pymobiledevice3
#    nuitka-project: --follow-stdlib
#    nuitka-project: --assume-yes-for-downloads
# nuitka-project-if: {OS} == "Linux":
#    nuitka-project: --output-filename=SideJITServer-linux-x86_64.bin
# nuitka-project-if: {OS} == "Darwin":
#    nuitka-project: --output-filename=SideJITServer-mac-arm64.bin
# nuitka-project: --report=compilation-report.xml

import sys
import traceback

def main():
    try:
        print("SideJITServer starting...")
        print("Python version:", sys.version)
        print("Current working directory:", sys.argv[0] if sys.argv else "unknown")
        
        # Import and run the actual server
        from SideJITServer import start_server
        print("Successfully imported start_server")
        
        print("Starting server...")
        start_server()
        
    except ImportError as e:
        print(f"Import error: {e}")
        print("This might be a missing dependency or path issue")
        traceback.print_exc()
    except Exception as e:
        print(f"Error: {e}")
        traceback.print_exc()
    finally:
        input("Press Enter to exit...")

if __name__ == '__main__':
    main()
