cmake_minimum_required(VERSION 3.9)

# The Microsoft.Windows.CppWinRT NuGet package is only targeted at Visual Studio (on Windows)
if (WIN32 AND ("$ENV{VSCMD_ARG_TGT_ARCH}" STREQUAL "x86"))

file(TO_NATIVE_PATH "${CMAKE_BINARY_DIR}/build_tools/nuget.exe" nuget_exe)
file(TO_NATIVE_PATH "${CMAKE_CURRENT_BINARY_DIR}" cppwinrt_nupkg_dir)
file(TO_NATIVE_PATH "${cppwinrt_nupkg_dir}/Microsoft.Windows.CppWinRT.${XLANG_BUILD_VERSION}.nupkg" cppwinrt_nupkg)

get_target_property(cppwinrt_exe cppwinrt "cppwinrt_exe")

get_target_property(cppwinrt_fast_fwd_x86 cppwinrt_fast_fwd "cppwinrt_fast_fwd_x86")
string(REGEX REPLACE "x86" "x64" cppwinrt_fast_fwd_x64 ${cppwinrt_fast_fwd_x86})
string(REGEX REPLACE "x86" "arm" cppwinrt_fast_fwd_arm ${cppwinrt_fast_fwd_x86})
string(REGEX REPLACE "x86" "arm64" cppwinrt_fast_fwd_arm64 ${cppwinrt_fast_fwd_x86})

file(DOWNLOAD https://dist.nuget.org/win-x86-commandline/latest/nuget.exe ${nuget_exe})

add_custom_command(OUTPUT ${cppwinrt_nupkg}
    COMMAND ${nuget_exe} pack ${CMAKE_CURRENT_SOURCE_DIR}/Microsoft.Windows.CppWinRT.nuspec -Properties cppwinrt_exe=${cppwinrt_exe} -Properties cppwinrt_fast_fwd_x86=${cppwinrt_fast_fwd_x86} -Properties cppwinrt_fast_fwd_x64=${cppwinrt_fast_fwd_x64} -Properties cppwinrt_fast_fwd_arm=${cppwinrt_fast_fwd_arm} -Properties cppwinrt_fast_fwd_arm64=${cppwinrt_fast_fwd_arm64};  -Version ${XLANG_BUILD_VERSION} -OutputDirectory ${CMAKE_CURRENT_BINARY_DIR} -NonInteractive -Verbosity Detailed
    DEPENDS ${cppwinrt_exe} ${CMAKE_CURRENT_SOURCE_DIR}/Microsoft.Windows.CppWinRT.nuspec
)

add_custom_target(make_cppwinrt_nupkg ALL DEPENDS cppwinrt ${cppwinrt_nupkg} cppwinrt_fast_fwd)

set_target_properties(make_cppwinrt_nupkg PROPERTIES "cppwinrt_nupkg_dir" ${cppwinrt_nupkg_dir})
set_target_properties(make_cppwinrt_nupkg PROPERTIES "cppwinrt_nupkg" ${cppwinrt_nupkg})

endif()

