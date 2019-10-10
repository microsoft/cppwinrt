@echo off

setlocal
set my_dir=%~dp0
set build_dir=%my_dir%..\build

set configuration=%1
if "%configuration%" == "" (
	set configuration=Release
)

set package_version=%2
if "%package_version%" == "" (
	set package_version=2.3.4.5
)

if not exist "%build_dir%\nuget.exe" (
	echo Downloading NuGet.exe...
	curl.exe -L# -o %build_dir%\nuget.exe "https://dist.nuget.org/win-x86-commandline/v5.3.0/nuget.exe"
)

rem Yes, this must be all on one line.
%build_dir%\nuget.exe pack Microsoft.Windows.CppWinRT.nuspec -Version %package_version% -Properties cppwinrt_exe=%build_dir%\x86\%configuration%\cppwinrt.exe;cppwinrt_fast_fwd_x86=%build_dir%\x86\%configuration%\cppwinrt_fast_forwarder.lib;cppwinrt_fast_fwd_x64=%build_dir%\x64\%configuration%\cppwinrt_fast_forwarder.lib;cppwinrt_fast_fwd_arm=%build_dir%\ARM\%configuration%\cppwinrt_fast_forwarder.lib;cppwinrt_fast_fwd_arm64=%build_dir%\ARM64\%configuration%\cppwinrt_fast_forwarder.lib

endlocal
