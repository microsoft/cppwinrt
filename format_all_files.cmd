@echo off
setlocal
setlocal EnableDelayedExpansion

:: This script is a more invasive version of formatting all files in the repo with clang-format.  It will format files that have not
:: been modified locally.  It is mainly intended to be a "reformat everything" script for when .clang-format is modified.

call "%~dp0/find_clang_format.cmd"
if %ERRORLEVEL% neq 0 exit /b %ERRORLEVEL%

if exist ".\test\nuget\obj" (
    echo Warning: test\nuget\obj subfolder exists and will have large numbers of header files. It is recommended to delete that folder before running this script.
    pause
)

set DIRS=cppwinrt fast_fwd natvis prebuild scratch strings test vsix
set EXTS=.cpp .h
for %%d in (%DIRS%) do call :format_files %~dp0%%d

:format_files
    for %%e in (%EXTS%) do (
        for /R %1 %%f in (*%%e) do call :run_clang_format "%%f"
    )
    goto :eof

:run_clang_format
    set filePath=%1
    :: The test subfolder has obj directories with many redundant copies of generated cppwinrt headers.  The
    :: cost of formatting these files is vastly higher than the cost of formatting the code that is checked in
    :: to this repo.  Skip any file path with "obj" as a substring.
    set IGNORED=
    for /F "tokens=*" %%g in ('git check-ignore %1') do (set IGNORED=%%g)
    if not [!IGNORED!]==[] (
        echo %1 is ignored by git, skipping
        goto :eof
    )
    echo Formatting !filePath!
    "%CLANG_FORMAT%" -style=file -i %1
    goto :eof
