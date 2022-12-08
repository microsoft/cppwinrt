file(GLOB TEST_SRCS
    LIST_DIRECTORIES false
    CONFIGURE_DEPENDS
    *.cpp
)
list(FILTER TEST_SRCS EXCLUDE REGEX "/(Main|pch)\\.cpp")


# We can't build custom Component for mingw-w64 because it doesn't have an
# alternative to midl that can produce winmd files.
list(APPEND BROKEN_TESTS
    Boxing2
    Composable
    Errors
    Events
    FastInput
    Parameters
    StructCodeGen
    Structures
    delegate_weak_strong
    factory_cache
    get_activation_factory
    smart_pointers
)

list(APPEND BROKEN_TESTS
    # Missing `Windows.Applicationmodel.Activation.h`
    constexpr

    # Missing `Windows.ApplicationModel.Appointments.h`
    enum_flags

    # Missing component `Reflect`.
    # Test is also not included in the VS project.
    reflect

    # Segfault in winrt::impl::natvis::abi_val.
    # Test is also not included in the VS project.
    natvis
)

# Exclude broken tests
foreach(TEST_SRCS_EXCLUDE_ITEM IN LISTS BROKEN_TESTS)
    list(FILTER TEST_SRCS EXCLUDE REGEX "/${TEST_SRCS_EXCLUDE_ITEM}\\.cpp")
endforeach()

add_executable(test_old Main.cpp ${TEST_SRCS})
target_link_libraries(test_old runtimeobject synchronization)

target_precompile_headers(test_old PRIVATE pch.h)
set_source_files_properties(
    conditional_implements_pure.cpp
    PROPERTIES SKIP_PRECOMPILE_HEADERS true
)

add_dependencies(test_old build-cppwinrt-projection)

add_test(
    NAME test_old
    COMMAND "$<TARGET_FILE:test_old>" ${TEST_COLOR_ARG}
)
