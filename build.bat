@echo off

set local="%~dp0"
set path=%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\

call vcbuild.bat

msbuild /t:Build /p:Configuration=Release /p:Platform=x86 /verbosity:minimal .

msbuild /t:Build /p:Configuration=Release /p:Platform=x64 /verbosity:minimal .

pause