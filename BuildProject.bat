@echo off

set local="%~dp0"
rem set PATH=%PATH%;%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\
set PATH=%PATH%;%local%\vendor\vswhere\

call vcbuild.bat
rem call vcbuild.bat -arch=x86 -host_arch=x64

msbuild /t:Build /p:Configuration=Release /p:Platform=Win32 /verbosity:minimal .
msbuild /t:Build /p:Configuration=Release /p:Platform=x64 /verbosity:minimal .

pause


