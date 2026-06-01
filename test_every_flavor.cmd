@echo off
REM Runs every built test flavor under AppVerifier and per-image WER local dumps.
setlocal EnableExtensions EnableDelayedExpansion

set "script_root=%~dp0"
pushd "%script_root%" >nul || exit /b 1

set "list_only=false"
if /i "%~1"=="-list" set "list_only=true"

set "run_list=%TEMP%\cppwinrt-test-runs-%RANDOM%-%RANDOM%.txt"
set "exe_list=%TEMP%\cppwinrt-test-exes-%RANDOM%-%RANDOM%.txt"
set "state_root=%script_root%_build\appverifier\state"
set "dump_root=%script_root%_build\appverifier\dumps"
set "results_root=%script_root%_build\appverifier\results"
set "failures_file=%results_root%\test_failures.txt"

if not exist "%state_root%" mkdir "%state_root%"
if not exist "%dump_root%" mkdir "%dump_root%"
if not exist "%results_root%" mkdir "%results_root%"

type nul > "%run_list%"
type nul > "%exe_list%"

call :collect_runs
if errorlevel 1 goto :fail

for %%I in ("%run_list%") do if %%~zI EQU 0 (
    echo No built test*.exe binaries were found under _build.
    goto :fail
)

echo ========================================
echo Test executables to run:
for /f "usebackq tokens=1,2,* delims=|" %%A in ("%run_list%") do echo   %%A %%B %%C
echo ========================================

echo AppVerifier image names:
for /f "usebackq delims=" %%A in ("%exe_list%") do echo   %%A
echo ========================================

if /i "%list_only%"=="true" goto :success

call :locate_appverif
if errorlevel 1 goto :fail

call :require_admin
if errorlevel 1 goto :fail

call :backup_registry_state
if errorlevel 1 goto :cleanup_fail

call :configure_appverifier
if errorlevel 1 goto :cleanup_fail

call :configure_local_dumps
if errorlevel 1 goto :cleanup_fail

call :run_all
set "exit_code=%ERRORLEVEL%"
goto :cleanup

:collect_runs
for %%P in (x86 x64 arm64) do (
    for %%C in (Debug Release) do (
        if exist "_build\%%P\%%C\test*.exe" (
            for /f "delims=" %%F in ('dir /b /a-d /on "_build\%%P\%%C\test*.exe"') do (
                >> "%run_list%" echo %%P^|%%C^|_build\%%P\%%C\%%F
                findstr /ixc:"%%F" "%exe_list%" >nul 2>&1 || >> "%exe_list%" echo %%F
            )
        )
    )
)
exit /b 0

:locate_appverif
set "appverif_exe="
for /f "delims=" %%I in ('where.exe appverif.exe 2^>nul') do if not defined appverif_exe set "appverif_exe=%%~fI"
if defined appverif_exe (
    echo Using AppVerifier at "%appverif_exe%"
    exit /b 0
)

for /f "usebackq delims=" %%I in (`powershell -NoProfile -Command "$roots = @($env:ProgramFiles, ${env:ProgramFiles(x86)}) | Where-Object { $_ }; $match = foreach ($root in $roots) { if (Test-Path $root) { Get-ChildItem -Path $root -Filter appverif.exe -Recurse -ErrorAction SilentlyContinue | Select-Object -First 1 -ExpandProperty FullName } } | Select-Object -First 1; if ($match) { $match }"`) do if not defined appverif_exe set "appverif_exe=%%~fI"

if not defined appverif_exe (
    echo Could not locate appverif.exe. Install Application Verifier from the Windows SDK.
    exit /b 1
)

echo Using AppVerifier at "%appverif_exe%"
exit /b 0

:require_admin
fltmc >nul 2>&1
if errorlevel 1 (
    echo This script must run from an elevated command prompt.
    exit /b 1
)
exit /b 0

:backup_registry_state
for /f "usebackq delims=" %%E in ("%exe_list%") do (
    del "%state_root%\%%E.ifeo.reg" >nul 2>&1
    del "%state_root%\%%E.localdumps.reg" >nul 2>&1
    call :backup_key "HKLM\SOFTWARE\Microsoft\Windows NT\CurrentVersion\Image File Execution Options\%%E" "%state_root%\%%E.ifeo.reg"
    if errorlevel 1 exit /b 1
    call :backup_key "HKLM\SOFTWARE\Microsoft\Windows\Windows Error Reporting\LocalDumps\%%E" "%state_root%\%%E.localdumps.reg"
    if errorlevel 1 exit /b 1
)
exit /b 0

:backup_key
reg query "%~1" >nul 2>&1
if errorlevel 1 exit /b 0
reg export "%~1" "%~2" /y >nul
if errorlevel 1 (
    echo Failed to export %~1
    exit /b 1
)
exit /b 0

:configure_appverifier
for /f "usebackq delims=" %%E in ("%exe_list%") do (
    echo Enabling AppVerifier for %%E
    "%appverif_exe%" -delete settings -for %%E >nul 2>&1
    "%appverif_exe%" /verify %%E >nul
    if errorlevel 1 (
        echo Failed to enable Application Verifier basics for %%E
        exit /b 1
    )
    "%appverif_exe%" -enable * -for %%E >nul
    if errorlevel 1 (
        echo Failed to enable Application Verifier layers for %%E
        exit /b 1
    )
)
exit /b 0

:configure_local_dumps
for /f "usebackq delims=" %%E in ("%exe_list%") do (
    echo Configuring WER LocalDumps for %%E
    reg add "HKLM\SOFTWARE\Microsoft\Windows\Windows Error Reporting\LocalDumps\%%E" /v DumpFolder /t REG_SZ /d "%dump_root%" /f >nul
    if errorlevel 1 exit /b 1
    reg add "HKLM\SOFTWARE\Microsoft\Windows\Windows Error Reporting\LocalDumps\%%E" /v DumpCount /t REG_DWORD /d 20 /f >nul
    if errorlevel 1 exit /b 1
    reg add "HKLM\SOFTWARE\Microsoft\Windows\Windows Error Reporting\LocalDumps\%%E" /v DumpType /t REG_DWORD /d 2 /f >nul
    if errorlevel 1 exit /b 1
)
exit /b 0

:run_all
set "any_failed=false"
type nul > "%failures_file%"
for /f "usebackq tokens=1,2,* delims=|" %%A in ("%run_list%") do (
    call :run_one %%A %%B "%%C"
)

if /i "%any_failed%"=="true" exit /b 1
exit /b 0

:run_one
set "platform=%~1"
set "configuration=%~2"
set "exe_path=%~3"

for %%F in ("%exe_path%") do set "exe_name=%%~nF"

set "result_dir=%results_root%\%platform%\%configuration%"
if not exist "%result_dir%" mkdir "%result_dir%"
set "result_file=%result_dir%\%exe_name%_results.txt"

echo ========================================
echo Running %platform% %configuration% %exe_name%
"%exe_path%" > "%result_file%" 2>&1
if %ERRORLEVEL% EQU 0 (
    type "%result_file%"
    exit /b 0
)

type "%result_file%" >&2
>> "%failures_file%" echo %platform% %configuration% %exe_name%
set "any_failed=true"
exit /b 0

:cleanup
call :restore_registry_state
if errorlevel 1 set "exit_code=1"
goto :finish

:cleanup_fail
set "exit_code=1"
call :restore_registry_state
goto :finish

:restore_registry_state
for /f "usebackq delims=" %%E in ("%exe_list%") do (
    "%appverif_exe%" -delete settings -for %%E >nul 2>&1
    call :restore_key "HKLM\SOFTWARE\Microsoft\Windows NT\CurrentVersion\Image File Execution Options\%%E" "%state_root%\%%E.ifeo.reg"
    if errorlevel 1 exit /b 1
    call :restore_key "HKLM\SOFTWARE\Microsoft\Windows\Windows Error Reporting\LocalDumps\%%E" "%state_root%\%%E.localdumps.reg"
    if errorlevel 1 exit /b 1
)
exit /b 0

:restore_key
reg delete "%~1" /f >nul 2>&1
if not exist "%~2" exit /b 0
reg import "%~2" >nul
if errorlevel 1 (
    echo Failed to restore %~1
    exit /b 1
)
exit /b 0

:fail
set "exit_code=1"
goto :finish

:success
set "exit_code=0"

:finish
del "%run_list%" >nul 2>&1
del "%exe_list%" >nul 2>&1
popd >nul
exit /b %exit_code%