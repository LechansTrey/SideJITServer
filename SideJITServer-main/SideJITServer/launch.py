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
#    nuitka-project: --include-module=plistlib
#    nuitka-project: --include-module=asyncio
#    nuitka-project: --include-module=socket
#    nuitka-project: --include-module=logging
#    nuitka-project: --include-module=json
#    nuitka-project: --include-module=http.server
#    nuitka-project: --include-module=urllib.parse
#    nuitka-project: --include-module=sys
#    nuitka-project: --include-module=multiprocessing
#    nuitka-project: --include-module=time
#    nuitka-project: --include-module=zeroconf
#    nuitka-project: --include-module=pymobiledevice3
#    nuitka-project: --follow-stdlib
#    nuitka-project: --assume-yes-for-downloads
## nuitka-project: --user-package-configuration-file=../sidejitserver-nuitka-package.config.yml
# nuitka-project-if: {OS} == "Linux":
#    nuitka-project: --output-filename=SideJITServer-linux-x86_64.bin
# nuitka-project-if: {OS} == "Darwin":
#    nuitka-project: --output-filename=SideJITServer-mac-arm64.bin

# nuitka-project: --report=compilation-report.xml

from SideJITServer import start_server

if __name__ == '__main__':
    start_server()
