rem @echo off

set target_version=%1
if "%target_version%"=="" set target_version=999.999.999.999

call msbuild /m /p:Configuration=Release,Platform=x86,CppWinRTBuildVersion=%target_version% cppwinrt.sln /t:fast_fwd;cached_thunks
call msbuild /m /p:Configuration=Release,Platform=x64,CppWinRTBuildVersion=%target_version% cppwinrt.sln /t:fast_fwd;cached_thunks
call msbuild /m /p:Configuration=Release,Platform=arm64,CppWinRTBuildVersion=%target_version% cppwinrt.sln /t:fast_fwd;cached_thunks
call msbuild /m /p:Configuration=Release,Platform=arm64ec,CppWinRTBuildVersion=%target_version%,OutDir=%cd%\_build\arm64ec\Release\,IntDir=%cd%\_build\arm64ec\Release\temp\cached_thunks\ cached_thunks\cached_thunks.vcxproj

call msbuild /m /p:Configuration=Release,Platform=x86,CppWinRTBuildVersion=%target_version% cppwinrt.sln /t:cppwinrt

nuget pack nuget\Microsoft.Windows.CppWinRT.nuspec -Properties target_version=%target_version%;cppwinrt_exe=%cd%\_build\x86\Release\cppwinrt.exe;cppwinrt_fast_fwd_x86=%cd%\_build\x86\Release\cppwinrt_fast_forwarder.lib;cppwinrt_fast_fwd_x64=%cd%\_build\x64\Release\cppwinrt_fast_forwarder.lib;cppwinrt_fast_fwd_arm64=%cd%\_build\arm64\Release\cppwinrt_fast_forwarder.lib;cppwinrt_cached_thunks_x86=%cd%\_build\x86\Release\cppwinrt_cached_thunks.lib;cppwinrt_cached_thunks_x64=%cd%\_build\x64\Release\cppwinrt_cached_thunks.lib;cppwinrt_cached_thunks_arm64=%cd%\_build\arm64\Release\cppwinrt_cached_thunks.lib;cppwinrt_cached_thunks_arm64ec=%cd%\_build\arm64ec\Release\cppwinrt_cached_thunks.lib 
