# The tests use newer C++ features.
set(CMAKE_CXX_STANDARD 20)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}")

include_directories("${CMAKE_CURRENT_SOURCE_DIR}")
include_directories("${PROJECT_SOURCE_DIR}/cppwinrt")
include_directories("${CMAKE_CURRENT_BINARY_DIR}/cppwinrt")


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
