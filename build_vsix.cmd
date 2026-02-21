@echo off

set this_dir=%~dp0
set target_configuration=%1
set target_version=%2
set target_deployment=%3

if "%target_configuration%"=="" set target_configuration=Release
if "%target_version%"=="" set target_version=1.2.3.4
if "%target_deployment%"=="" set target_deployment=Standalone

if not exist ".\.nuget" mkdir ".\.nuget"
if not exist ".\.nuget\nuget.exe" powershell -Command "Invoke-WebRequest https://dist.nuget.org/win-x86-commandline/latest/nuget.exe -OutFile .\.nuget\nuget.exe"

call .nuget\nuget.exe restore cppwinrt.slnx"
call .nuget\nuget.exe restore natvis\cppwinrtvisualizer.slnx
call .nuget\nuget.exe restore test\nuget\NugetTest.slnx

rem Build fast forwarder libs or all arches
call msbuild /m /p:Configuration=%target_configuration%,Platform=x86,CppWinRTBuildVersion=%target_version% cppwinrt.slnx /t:fast_fwd
call msbuild /m /p:Configuration=%target_configuration%,Platform=x64,CppWinRTBuildVersion=%target_version% cppwinrt.slnx /t:fast_fwd
call msbuild /m /p:Configuration=%target_configuration%,Platform=arm64,CppWinRTBuildVersion=%target_version% cppwinrt.slnx /t:fast_fwd

rem Build cppwinrt.exe for x86 only
call msbuild /m /p:Configuration=%target_configuration%,Platform=x86,CppWinRTBuildVersion=%target_version% cppwinrt.slnx /t:cppwinrt

rem Build cppwinrt visualizer dll for x86, x64, and arm64
call msbuild /p:Configuration=%target_configuration%,Platform=x64,Deployment=%target_deployment%,CppWinRTBuildVersion=%target_version% natvis\cppwinrtvisualizer.slnx
call msbuild /p:Configuration=%target_configuration%,Platform=x86,Deployment=%target_deployment%,CppWinRTBuildVersion=%target_version% natvis\cppwinrtvisualizer.slnx
call msbuild /p:Configuration=%target_configuration%,Platform=arm64,Deployment=%target_deployment%,CppWinRTBuildVersion=%target_version% natvis\cppwinrtvisualizer.slnx

rem Build nuget 
.nuget\nuget.exe pack nuget\Microsoft.Windows.CppWinRT.nuspec -NonInteractive -OutputDirectory %this_dir%_build -Properties Configuration=%target_configuration%;cppwinrt_exe=%this_dir%_build\x86\%target_configuration%\cppwinrt.exe;cppwinrt_fast_fwd_x86=%this_dir%_build\x86\%target_configuration%\cppwinrt_fast_forwarder.lib;cppwinrt_fast_fwd_x64=%this_dir%_build\x64\%target_configuration%\cppwinrt_fast_forwarder.lib;cppwinrt_fast_fwd_arm64=%this_dir%_build\arm64\%target_configuration%\cppwinrt_fast_forwarder.lib;target_version=%target_version%  -version %target_version% -Verbosity Detailed

rem Build vsix
call msbuild /restore /p:Configuration=%target_configuration%,Platform="Any CPU",Deployment=%target_deployment%,CppWinRTVersion=%target_version%,NugetPackageVersion=%target_version%,NatvisDirx86=%this_dir%natvis\x86\%target_configuration%\%target_deployment%,NatvisDirx64=%this_dir%natvis\x64\%target_configuration%\%target_deployment%,NatvisDirarm64=%this_dir%natvis\arm64\%target_configuration%\%target_deployment%,NupkgDir=%this_dir%_build vsix\vsix.slnx
