@echo off

set local="%~dp0"
set PATH=%PATH%;%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\

call vcbuild.bat
rem call vcbuild.bat -arch=x86 -host_arch=x64

msbuild /t:Build /p:Configuration=Release /p:Platform=x86 /verbosity:minimal .
msbuild /t:Build /p:Configuration=Release /p:Platform=x64 /verbosity:minimal .

pause


