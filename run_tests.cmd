@echo off
setlocal

set target_platform=%1
set target_configuration=%2
set target_version=%3

if "%target_platform%"=="" set target_platform=x64
if "%target_configuration%"=="" set target_configuration=Debug

call :run_test test
call :run_test test_win7
call :run_test test_fast
call :run_test test_slow
call :run_test test_old
call :run_test test_module_lock_custom
call :run_test test_module_lock_none
goto :eof

:run_test
if not "%target_version%"=="" set args=-o %1-%target_version%.xml -r junit
_build\%target_platform%\%target_configuration%\%1.exe %args%
goto :eof
