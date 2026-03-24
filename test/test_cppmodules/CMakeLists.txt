cmake_minimum_required(VERSION 3.28)

set(CMAKE_CXX_STANDARD 20)

file(GLOB TEST_SRCS
    LIST_DIRECTORIES false
    CONFIGURE_DEPENDS
    *.cpp
)
list(FILTER TEST_SRCS EXCLUDE REGEX "/(main|pch)\\.cpp")


list(APPEND BROKEN_TESTS
    # No broken tests.
)

# Exclude broken tests
foreach(TEST_SRCS_EXCLUDE_ITEM IN LISTS BROKEN_TESTS)
    list(FILTER TEST_SRCS EXCLUDE REGEX "/${TEST_SRCS_EXCLUDE_ITEM}\\.cpp")
endforeach()

add_executable(test_cppmodules main.cpp ${TEST_SRCS})

add_dependencies(test_cppmodules build-cppwinrt-projection)

add_test(
    NAME test_cppmodules
    COMMAND "$<TARGET_FILE:test_cppmodules>" ${TEST_COLOR_ARG}
)
