cmake_minimum_required(VERSION 3.9)

# The C++/WinRT VSIX package is only targeted at Visual Studio (on Windows)
if (WIN32 AND ("$ENV{VSCMD_ARG_TGT_ARCH}" STREQUAL "x86"))

get_target_property(cppwinrt_natvis_dir_x86 cppwinrtvisualizer "cppwinrt_natvis_dir_x86")
string(REGEX REPLACE "x86" "x64" cppwinrt_natvis_dir_x64 ${cppwinrt_natvis_dir_x86})

get_target_property(cppwinrt_nupkg_dir make_cppwinrt_nupkg "cppwinrt_nupkg_dir")
get_target_property(cppwinrt_nupkg make_cppwinrt_nupkg "cppwinrt_nupkg")

file(TO_NATIVE_PATH "${CMAKE_BINARY_DIR}/build_tools/nuget.exe" nuget_exe)
file(TO_NATIVE_PATH ${CMAKE_CURRENT_BINARY_DIR}/Microsoft.Windows.CppWinRT.vsix cppwinrt_vsix)

file(DOWNLOAD https://dist.nuget.org/win-x86-commandline/latest/nuget.exe ${nuget_exe})

set(build_vsix msbuild ${CMAKE_CURRENT_SOURCE_DIR}/vsix.csproj /nologo /m /p:Configuration=${CMAKE_BUILD_TYPE},Platform=$ENV{VSCMD_ARG_TGT_ARCH})

add_custom_command(OUTPUT ${cppwinrt_vsix}
    COMMAND cd ${CMAKE_CURRENT_SOURCE_DIR} & ${nuget_exe} restore
    COMMAND ${build_vsix} /p:CppWinRTVersion=${XLANG_BUILD_VERSION},NatvisDirx86=${cppwinrt_natvis_dir_x86},NatvisDirx64=${cppwinrt_natvis_dir_x64},NupkgDir=${cppwinrt_nupkg_dir}
    DEPENDS cppwinrtvisualizer ${cppwinrt_nupkg}
)

add_custom_target(make_cppwinrt_vsix ALL DEPENDS ${cppwinrt_vsix})

endif()