@echo off

set target_platform=%1
set target_configuration=%2
set target_version=%3

if "%target_platform%"=="" set target_platform=x64
if "%target_configuration%"=="" set target_configuration=Release
if "%target_version%"=="" set target_version=1.2.3.4

call nuget restore cppwinrt.sln
call nuget restore natvis\cppwinrtvisualizer.sln
call nuget restore test\nuget\NugetTest.sln

call msbuild /m /p:Configuration=%target_configuration%,Platform=%target_platform%,CppWinRTBuildVersion=%target_version% cppwinrt.sln /t:fast_fwd

if "%target_platform%"=="arm" goto :eof
if "%target_platform%"=="arm64" goto :eof

call msbuild /m /p:Configuration=%target_configuration%,Platform=%target_platform%,CppWinRTBuildVersion=%target_version% cppwinrt.sln /t:cppwinrt
_build\%target_platform%\%target_configuration%\cppwinrt.exe -in local -out _build\%target_platform%\%target_configuration% -verbose
call msbuild /p:Configuration=%target_configuration%,Platform=%target_platform%,CppWinRTBuildVersion=%target_version% natvis\cppwinrtvisualizer.sln
call msbuild /p:Configuration=%target_configuration%,Platform=%target_platform%,CppWinRTBuildVersion=%target_version% test\nuget\NugetTest.sln

call msbuild /m /p:Configuration=%target_configuration%,Platform=%target_platform%,CppWinRTBuildVersion=%target_version% cppwinrt.sln /t:test\test
call msbuild /m /p:Configuration=%target_configuration%,Platform=%target_platform%,CppWinRTBuildVersion=%target_version% cppwinrt.sln /t:test\test_win7
call msbuild /m /p:Configuration=%target_configuration%,Platform=%target_platform%,CppWinRTBuildVersion=%target_version% cppwinrt.sln /t:test\test_fast
call msbuild /m /p:Configuration=%target_configuration%,Platform=%target_platform%,CppWinRTBuildVersion=%target_version% cppwinrt.sln /t:test\test_slow
call msbuild /m /p:Configuration=%target_configuration%,Platform=%target_platform%,CppWinRTBuildVersion=%target_version% cppwinrt.sln /t:test\test_module_lock_custom
call msbuild /m /p:Configuration=%target_configuration%,Platform=%target_platform%,CppWinRTBuildVersion=%target_version% cppwinrt.sln /t:test\test_module_lock_none
call msbuild /m /p:Configuration=%target_configuration%,Platform=%target_platform%,CppWinRTBuildVersion=%target_version% cppwinrt.sln /t:test\old_tests\test_old

call run_tests.cmd %target_platform% %target_configuration%
