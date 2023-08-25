@echo off
setlocal

set target_platform=%1
set target_configuration=%2
set target_version=%3

if "%target_platform%"=="" set target_platform=x64
if "%target_configuration%"=="" set target_configuration=Debug

call :run_test test
call :run_test test_cpp20
call :run_test test_cpp20_no_sourcelocation
call :run_test test_fast
call :run_test test_slow
call :run_test test_old
call :run_test test_module_lock_custom
call :run_test test_module_lock_none
goto :eof

:run_test
if not "%target_version%"=="" set args=-o %1-%target_version%.xml -r junit
rem Buffer output and redirect to stdout/stderr depending whether the test executable exits successfully. Pipeline will fail if there's any output to stderr.
_build\%target_platform%\%target_configuration%\%1.exe %args% > %1_results.txt
if %ERRORLEVEL% EQU 0 (
    type %1_results.txt
) else (
    type %1_results.txt >&2
    echo %1 >> test_failures.txt
)
goto :eof
