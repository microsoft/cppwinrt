set(CMAKE_CXX_STANDARD 20)
if(CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    # std::format, std::ranges::is_heap, std::views::reverse, std::ranges::max
    # are experimental in libc++ as of Clang 15.
    # FIXME: Should probably use compile test instead?
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fexperimental-library")
endif()

if(ENABLE_TEST_SANITIZERS)
    # As of LLVM 15, custom_error.cpp doesn't build with ASAN due to:
    # error: cannot make section .ASAN$GL associative with sectionless symbol _ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE4nposE
    set_source_files_properties(custom_error.cpp PROPERTIES COMPILE_OPTIONS "-fno-sanitize=address")
    set_source_files_properties(custom_error.cpp PROPERTIES SKIP_PRECOMPILE_HEADERS true)
endif()

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

add_executable(test_cpp20_no_sourcelocation main.cpp ${TEST_SRCS})

target_compile_definitions(test_cpp20_no_sourcelocation PRIVATE WINRT_NO_SOURCE_LOCATION)

target_precompile_headers(test_cpp20_no_sourcelocation PRIVATE pch.h)
set_source_files_properties(
    main.cpp
    PROPERTIES SKIP_PRECOMPILE_HEADERS true
)

add_dependencies(test_cpp20_no_sourcelocation build-cppwinrt-projection)

add_test(
    NAME test_cpp20_no_sourcelocation
    COMMAND "$<TARGET_FILE:test_cpp20_no_sourcelocation>" ${TEST_COLOR_ARG}
)
