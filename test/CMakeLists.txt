# The tests use newer C++ features.
set(CMAKE_CXX_STANDARD 20)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}")

include_directories("${CMAKE_CURRENT_SOURCE_DIR}")
include_directories("${PROJECT_SOURCE_DIR}/cppwinrt")
include_directories("${CMAKE_CURRENT_BINARY_DIR}/cppwinrt")

function(TestIsX64 OUTPUT_VARNAME)
    include(CheckCXXSourceCompiles)
    check_cxx_source_compiles("
#if !defined(__x86_64__) && !defined(_M_X64)
#  error Not x86_64
#endif
int main() {}
    " ${OUTPUT_VARNAME})
endfunction()
TestIsX64(TARGET_IS_X64)
if(TARGET_IS_X64)
    add_compile_options(-mcx16)
endif()


add_custom_command(
    OUTPUT
        "${CMAKE_CURRENT_BINARY_DIR}/cppwinrt/winrt/base.h"
    COMMAND "${PROJECT_BINARY_DIR}/cppwinrt" -input local -output "${CMAKE_CURRENT_BINARY_DIR}/cppwinrt" -verbose
    DEPENDS
        cppwinrt
    VERBATIM
)
add_custom_target(build-cppwinrt-projection
    DEPENDS
        "${CMAKE_CURRENT_BINARY_DIR}/cppwinrt/winrt/base.h"
)


add_subdirectory(test)
add_subdirectory(test_cpp20)
add_subdirectory(test_win7)
add_subdirectory(old_tests)
