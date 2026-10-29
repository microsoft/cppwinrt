set(CMAKE_CXX_STANDARD 23)

file(GLOB TEST_SRCS
    LIST_DIRECTORIES false
    CONFIGURE_DEPENDS
    *.cpp
)
list(FILTER TEST_SRCS EXCLUDE REGEX "/(main|pch)\\.cpp")

add_executable(test_cpp23 main.cpp ${TEST_SRCS})

target_precompile_headers(test_cpp23 PRIVATE pch.h)
set_source_files_properties(
    main.cpp
    PROPERTIES SKIP_PRECOMPILE_HEADERS true
)

add_dependencies(test_cpp23 build-cppwinrt-projection)

add_test(
    NAME test_cpp23
    COMMAND "$<TARGET_FILE:test_cpp23>" ${TEST_COLOR_ARG}
)
