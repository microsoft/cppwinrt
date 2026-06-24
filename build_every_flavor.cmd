@echo off
REM Builds the full matrix of flavors and configurations
setlocal

git clean -dfx .
set additional_msbuild_args=/v:m
call :build_one x86 Debug
call :build_one x86 Release
call :build_one x64 Debug
call :build_one x64 Release
call :build_one arm64 Debug
call :build_one arm64 Release
goto :eof

:build_one
echo ============================
echo Building %1 %2
call .\build_test_all.cmd %1 %2
goto :eof
