@echo off

set target_platform=%1
set target_configuration=%2
set target_version=%3
set clean_intermediate_files=%4

if "%target_platform%"=="" set target_platform=x64
if "%target_configuration%"=="" set target_configuration=Release
if "%target_version%"=="" set target_version=999.999.999.999

if not exist ".\.nuget" mkdir ".\.nuget"
if not exist ".\.nuget\nuget.exe" powershell -Command "$ProgressPreference = 'SilentlyContinue' ; Invoke-WebRequest https://dist.nuget.org/win-x86-commandline/latest/nuget.exe -OutFile .\.nuget\nuget.exe"

call .nuget\nuget.exe restore test\nuget\NugetTest.sln
call .nuget\nuget.exe restore cppwinrt.sln
call .nuget\nuget.exe restore natvis\cppwinrtvisualizer.sln

if /I "%target_platform%" NEQ "arm64" goto skip_x86_build
set build_targets=cppwinrt;fast_fwd;cached_thunks
call msbuild %additional_msbuild_args% /m /p:Configuration=%target_configuration%,Platform=x86,CppWinRTBuildVersion=%target_version% cppwinrt.sln /t:%build_targets%
if errorlevel 1 exit /b 1

:skip_x86_build

set build_targets=cppwinrt;fast_fwd;cached_thunks
set build_targets=%build_targets%;test\test
set build_targets=%build_targets%;test\test_cachedrtc
set build_targets=%build_targets%;test\test_nocoro
set build_targets=%build_targets%;test\test_cpp20
set build_targets=%build_targets%;test\test_cpp20_no_sourcelocation
set build_targets=%build_targets%;test\test_fast
set build_targets=%build_targets%;test\test_slow
set build_targets=%build_targets%;test\test_module_lock_custom
set build_targets=%build_targets%;test\test_module_lock_none
set build_targets=%build_targets%;test\old_tests\test_old

call msbuild %additional_msbuild_args% /m /p:Configuration=%target_configuration%,Platform=%target_platform%,CppWinRTBuildVersion=%target_version% cppwinrt.sln "/t:%build_targets%"
if errorlevel 1 exit /b 1

if /I "%target_platform%" EQU "arm64" goto skip_nuget_test
call msbuild %additional_msbuild_args% /m /p:Configuration=%target_configuration%,Platform=%target_platform%,CppWinRTBuildVersion=%target_version% test\nuget\NugetTest.sln
if errorlevel 1 exit /b 1
:skip_nuget_test

call msbuild %additional_msbuild_args% /p:Configuration=%target_configuration%,Platform=%target_platform%,Deployment=Component;CppWinRTBuildVersion=%target_version% natvis\cppwinrtvisualizer.sln
if errorlevel 1 exit /b 1

call msbuild %additional_msbuild_args% /p:Configuration=%target_configuration%,Platform=%target_platform%,Deployment=Standalone;CppWinRTBuildVersion=%target_version% natvis\cppwinrtvisualizer.sln
if errorlevel 1 exit /b 1

REM On x64, it's OK to run x86 and x64 tests.
REM On x86, only run x86 tests.
REM On arm64, run any flavor of tests

if "%processor_architecture%"=="AMD64" (
    if "%target_platform%"=="x86" goto run_tests
    if "%target_platform%"=="x64" goto run_tests
)
if "%processor_architecture%"=="x86" (
    if "%target_platform%"=="x86" goto run_tests
)
if "%processor_architecture%"=="ARM64" (
    if "%target_platform%"=="arm64" goto run_tests
    if "%target_platform%"=="x86" goto run_tests
    if "%target_platform%"=="x64" goto run_tests
)
echo Skipping tests for platform %target_platform% on host architecture %processor_architecture%
goto :eof

:run_tests
call run_tests.cmd %target_platform% %target_configuration%
if errorlevel 1 exit /b 1
