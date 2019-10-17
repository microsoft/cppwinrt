@echo off

set target_platform=%1
set target_configuration=%2
set target_version=%3

if "%target_platform%"=="" set target_platform=x64
if "%target_configuration%"=="" set target_configuration=Release
if "%target_version%"=="" set target_version=1.2.3.4

call msbuild /m /p:Configuration=%target_configuration%,Platform=%target_platform%,CppWinRTBuildVersion=%target_version% cppwinrt.sln /t:fast_fwd

if "%target_platform%"=="arm" goto :exit
if "%target_platform%"=="arm64" goto :exit

call msbuild /m /p:Configuration=%target_configuration%,Platform=%target_platform%,CppWinRTBuildVersion=%target_version% cppwinrt.sln /t:cppwinrt
_build\%target_platform%\%target_configuration%\cppwinrt.exe -in local -out _build\%target_platform%\%target_configuration% -verbose
call msbuild /m /p:Configuration=%target_configuration%,Platform=%target_platform%,CppWinRTBuildVersion=%target_version% cppwinrt.sln /t:test\test

call msbuild /p:Configuration=%target_configuration%,Platform=%target_platform%,CppWinRTBuildVersion=%target_version% natvis\cppwinrtvisualizer.sln
