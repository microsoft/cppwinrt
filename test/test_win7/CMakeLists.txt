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
    in_params
    no_make_detection
    noexcept
    out_params
    parent_includes
    return_params
    structs
    uniform_in_params
    velocity
)

list(APPEND BROKEN_TESTS
    # depends on pplawait.h
    when
)

if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    # FIXME: GCC does not compile co_await on thread_pool because it wants
    # a copy constructor. Disabling this test for now.
    # This might be related to upstream bug:
    # https://gcc.gnu.org/bugzilla/show_bug.cgi?id=103963
    list(APPEND BROKEN_TESTS
        thread_pool
    )
endif()

# Exclude broken tests
foreach(TEST_SRCS_EXCLUDE_ITEM IN LISTS BROKEN_TESTS)
    list(FILTER TEST_SRCS EXCLUDE REGEX "/${TEST_SRCS_EXCLUDE_ITEM}\\.cpp")
endforeach()

add_executable(test_win7 main.cpp ${TEST_SRCS})

target_precompile_headers(test_win7 PRIVATE pch.h)
set_source_files_properties(
    main.cpp
    coro_foundation.cpp
    coro_threadpool.cpp
    generic_type_names.cpp
    inspectable_interop.cpp
    module_lock_dll.cpp
    PROPERTIES SKIP_PRECOMPILE_HEADERS true
)

add_dependencies(test_win7 build-cppwinrt-projection)

add_test(
    NAME test_win7
    COMMAND "$<TARGET_FILE:test_win7>" ${TEST_COLOR_ARG}
)
