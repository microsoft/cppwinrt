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


# Some tests requires windowsnumerics.impl.h, but mingw-w64 didn't have this
# header until very recently. In case it is not present, download a copy if
# DOWNLOAD_WINDOWSNUMERICS is true, otherwise skip the tests which depend on
# this header.
function(TestHasWindowsnumerics OUTPUT_VARNAME)
    include(CheckCXXSourceCompiles)
    check_cxx_source_compiles("
#define _WINDOWS_NUMERICS_NAMESPACE_ winrt::Windows::Foundation::Numerics
#define _WINDOWS_NUMERICS_BEGIN_NAMESPACE_ namespace winrt::Windows::Foundation::Numerics
#define _WINDOWS_NUMERICS_END_NAMESPACE_
#include <windowsnumerics.impl.h>
int main() {}
    " ${OUTPUT_VARNAME})
endfunction()
TestHasWindowsnumerics(HAS_WINDOWSNUMERICS)
set(DOWNLOAD_WINDOWSNUMERICS FALSE CACHE BOOL "Whether to download a copy of mingw-w64's windowsnumerics.impl.h if not available.")
if(NOT HAS_WINDOWSNUMERICS AND DOWNLOAD_WINDOWSNUMERICS)
    file(
        DOWNLOAD https://github.com/mingw-w64/mingw-w64/raw/2b6272b31132e156dd1fc3722c1aa96b705a90dd/mingw-w64-headers/include/windowsnumerics.impl.h
        "${CMAKE_CURRENT_BINARY_DIR}/windowsnumerics/windowsnumerics.impl.h"
        EXPECTED_HASH SHA256=aff42491e57583c8ad8ca8e71d417a553bd1215ee9a71378679400ecded4b1ab
        SHOW_PROGRESS
    )
    include_directories("${CMAKE_CURRENT_BINARY_DIR}/windowsnumerics")
    set(HAS_WINDOWSNUMERICS TRUE)
    message(STATUS "Using windowsnumerics.impl.h downloaded from mingw-w64")
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


set(ENABLE_TEST_SANITIZERS FALSE CACHE BOOL "Enable ASan and UBSan for the tests.")
if(ENABLE_TEST_SANITIZERS)
    # Disable the 'vptr' check because it seems to produce false-positives when using COM classes.
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=undefined,address -fno-sanitize=vptr")
endif()


add_subdirectory(test)
add_subdirectory(test_cpp20)
add_subdirectory(test_win7)

if(HAS_WINDOWSNUMERICS)
    add_subdirectory(old_tests)
endif()
