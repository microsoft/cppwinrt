@echo off

set target_platform=%1
set target_configuration=%2
set target_version=%3
set clean_intermediate_files=%4

if "%target_platform%"=="" set target_platform=x64
if "%target_configuration%"=="" set target_configuration=Release
if "%target_version%"=="" set target_version=999.999.999.999

call "%~dp0ensure_vsbuild.cmd" "%target_platform%"
if errorlevel 1 exit /b %errorlevel%

if not exist ".\.nuget" mkdir ".\.nuget"
if not exist ".\.nuget\nuget.exe" powershell -Command "$ProgressPreference = 'SilentlyContinue' ; Invoke-WebRequest https://dist.nuget.org/win-x86-commandline/latest/nuget.exe -OutFile .\.nuget\nuget.exe"

call .nuget\nuget.exe restore cppwinrt.sln
call .nuget\nuget.exe restore natvis\cppwinrtvisualizer.sln
call .nuget\nuget.exe restore test\nuget\NugetTest.sln

call msbuild /m /p:Configuration=%target_configuration%,Platform=%target_platform%,CppWinRTBuildVersion=%target_version% cppwinrt.sln /t:fast_fwd
if errorlevel 1 exit /b %errorlevel%

call msbuild /p:Configuration=%target_configuration%,Platform=%target_platform%,Deployment=Component;CppWinRTBuildVersion=%target_version% natvis\cppwinrtvisualizer.sln
if errorlevel 1 exit /b %errorlevel%

call msbuild /p:Configuration=%target_configuration%,Platform=%target_platform%,Deployment=Standalone;CppWinRTBuildVersion=%target_version% natvis\cppwinrtvisualizer.sln
if errorlevel 1 exit /b %errorlevel%

if "%target_platform%"=="arm64" goto :eof

set cppwinrt_targets=cppwinrt
set cppwinrt_targets=%cppwinrt_targets%;test\test
set cppwinrt_targets=%cppwinrt_targets%;test\test_nocoro
set cppwinrt_targets=%cppwinrt_targets%;test\test_cpp20
set cppwinrt_targets=%cppwinrt_targets%;test\test_cpp20_no_sourcelocation
set cppwinrt_targets=%cppwinrt_targets%;test\test_fast
set cppwinrt_targets=%cppwinrt_targets%;test\test_slow
set cppwinrt_targets=%cppwinrt_targets%;test\test_module_lock_custom
set cppwinrt_targets=%cppwinrt_targets%;test\test_module_lock_none
set cppwinrt_targets=%cppwinrt_targets%;test\old_tests\test_old
call msbuild /m /p:Configuration=%target_configuration%,Platform=%target_platform%,CppWinRTBuildVersion=%target_version% cppwinrt.sln "/t:%cppwinrt_targets%"
if errorlevel 1 exit /b %errorlevel%

call msbuild /p:Configuration=%target_configuration%,Platform=%target_platform%,CppWinRTBuildVersion=%target_version% test\nuget\NugetTest.sln
if errorlevel 1 exit /b %errorlevel%

call run_tests.cmd %target_platform% %target_configuration%
