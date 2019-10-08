file(TO_NATIVE_PATH "${CMAKE_CURRENT_BINARY_DIR}/cppwinrt.exe" cppwinrt_exe)
file(TO_NATIVE_PATH "${CMAKE_CURRENT_BINARY_DIR}" CmakeOutDir)

set(build msbuild /nologo /m /p:Configuration=${CMAKE_BUILD_TYPE},Platform=$ENV{VSCMD_ARG_TGT_ARCH},XlangBuildVersion=${XLANG_BUILD_VERSION},CmakeOutDir=${CmakeOutDir} ${CMAKE_CURRENT_SOURCE_DIR}/cppwinrt.sln)

add_custom_command(OUTPUT ${cppwinrt_exe}
    COMMAND ${build} /t:cppwinrt
)

add_custom_target(cppwinrt ALL DEPENDS ${cppwinrt_exe})

add_custom_target(cppwinrt_test ALL DEPENDS cppwinrt 
    COMMAND ${cppwinrt_exe} -in sdk -out ${CMAKE_CURRENT_BINARY_DIR} -verbose
    COMMAND ${build} /t:fast_fwd
    COMMAND ${build} /t:test
    COMMAND ${build} /t:test_fast
    COMMAND ${build} /t:test_fast_fwd
    COMMAND ${build} /t:old_tests\\test_old
)

set_target_properties(cppwinrt PROPERTIES "cppwinrt_exe" ${cppwinrt_exe})

# For x86, build all arches of fast forwarder lib for NuGet dependency
if (WIN32 AND ("$ENV{VSCMD_ARG_TGT_ARCH}" STREQUAL "x86"))

set(ffbuild msbuild /nologo /m /p:Configuration=${CMAKE_BUILD_TYPE},XlangBuildVersion=${XLANG_BUILD_VERSION} ${CMAKE_CURRENT_SOURCE_DIR}/cppwinrt.sln /t:fast_fwd) 

file(TO_NATIVE_PATH "${CMAKE_CURRENT_BINARY_DIR}/cppwinrt_fast_forwarder.lib" cppwinrt_fast_fwd_x86)

set(CmakeOutDir_x86 ${CmakeOutDir})
string(REGEX REPLACE "x86" "x64" CmakeOutDir_x64 ${CmakeOutDir})
string(REGEX REPLACE "x86" "arm" CmakeOutDir_arm ${CmakeOutDir})
string(REGEX REPLACE "x86" "arm64" CmakeOutDir_arm64 ${CmakeOutDir})

add_custom_command(OUTPUT ${cppwinrt_fast_fwd_x86}
    COMMAND ${ffbuild} /p:Platform=x86,CmakeOutDir=${CmakeOutDir_x86}
	COMMAND ${CMAKE_COMMAND} -E make_directory ${CmakeOutDir_x64}
    COMMAND cd /d ${CmakeOutDir_x64} 
	COMMAND ${ffbuild} /p:Platform=x64,CmakeOutDir=${CmakeOutDir_x64}
	COMMAND ${CMAKE_COMMAND} -E make_directory ${CmakeOutDir_arm}
    COMMAND cd /d ${CmakeOutDir_arm} 
	COMMAND ${ffbuild} /p:Platform=arm,CmakeOutDir=${CmakeOutDir_arm}
	COMMAND ${CMAKE_COMMAND} -E make_directory ${CmakeOutDir_arm64}
    COMMAND cd /d ${CmakeOutDir_arm64} 
	COMMAND ${ffbuild} /p:Platform=arm64,CmakeOutDir=${CmakeOutDir_arm64}
)

add_custom_target(cppwinrt_fast_fwd ALL DEPENDS ${cppwinrt_fast_fwd_x86})

set_target_properties(cppwinrt_fast_fwd PROPERTIES "cppwinrt_fast_fwd_x86" ${cppwinrt_fast_fwd_x86})

endif()
