file(GLOB TEST_SRCS
    LIST_DIRECTORIES false
    CONFIGURE_DEPENDS
    *.cpp
)
list(FILTER TEST_SRCS EXCLUDE REGEX "/(main|pch)\\.cpp")


# We can't build test_component[*] for mingw-w64 because it doesn't have an
# alternative to midl that can produce winmd files. Also, even if we do manage
# to reuse the MSVC-compiled binaries, mingw-w64 is still missing
# windowsnumerics.impl.h which is needed to provide the types
# winrt::Windows::Foundation::Numerics::float2 and friends that the components
# use.
list(APPEND BROKEN_TESTS
    agility
    delegates
    enum
    event_deferral
    in_params
    in_params_abi
    no_make_detection
    noexcept
    optional
    out_params
    out_params_abi
    parent_includes
    rational
    return_params
    return_params_abi
    struct_delegate
    structs
    uniform_in_params
    velocity
)

list(APPEND BROKEN_TESTS
    # depends on pplawait.h
    when
)

# Exclude broken tests
foreach(TEST_SRCS_EXCLUDE_ITEM IN LISTS BROKEN_TESTS)
    list(FILTER TEST_SRCS EXCLUDE REGEX "/${TEST_SRCS_EXCLUDE_ITEM}\\.cpp")
endforeach()

add_executable(test-vanilla main.cpp ${TEST_SRCS})
set_target_properties(test-vanilla PROPERTIES OUTPUT_NAME "test")
target_link_libraries(test-vanilla runtimeobject synchronization)

target_precompile_headers(test-vanilla PRIVATE pch.h)
set_source_files_properties(
    main.cpp
    coro_foundation.cpp
    coro_system.cpp
    coro_threadpool.cpp
    coro_uicore.cpp
    custom_activation.cpp
    generic_type_names.cpp
    guid_include.cpp
    inspectable_interop.cpp
    module_lock_dll.cpp
    PROPERTIES SKIP_PRECOMPILE_HEADERS true
)

if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    # GCC seems to miscompile out_params_bad.cpp if -fdevirtualize is enabled.
    # https://gcc.gnu.org/bugzilla/show_bug.cgi?id=108040
    set_source_files_properties(out_params_bad.cpp PROPERTIES COMPILE_OPTIONS "-fno-devirtualize")
endif()

add_dependencies(test-vanilla build-cppwinrt-projection)

add_test(
    NAME test
    COMMAND "$<TARGET_FILE:test-vanilla>"
)
