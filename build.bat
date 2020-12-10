@echo off

set local="%~dp0"

call vcbuild.bat

cd /D %local%

msbuild /p:Configuration=Release /p:Platform=x64 /verbosity:minimal
