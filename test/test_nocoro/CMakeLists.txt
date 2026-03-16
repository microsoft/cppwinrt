set(CMAKE_CXX_STANDARD 17)

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

add_executable(test_nocoro main.cpp ${TEST_SRCS})

target_compile_definitions(test_nocoro PRIVATE WINRT_NO_SOURCE_LOCATION)

target_precompile_headers(test_nocoro PRIVATE pch.h)
set_source_files_properties(
    main.cpp
    PROPERTIES SKIP_PRECOMPILE_HEADERS true
)

add_dependencies(test_nocoro build-cppwinrt-projection)

add_test(
    NAME test_nocoro
    COMMAND "$<TARGET_FILE:test_nocoro>" ${TEST_COLOR_ARG}
)
