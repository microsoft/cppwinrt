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
    # error: use 'template' keyword to treat 'try_as' as a dependent template name
    box_array

    # error: implicit instantiation of undefined template 'winrt::impl::produce<(anonymous namespace)::custom_factory, winrt::Windows::Foundation::IUriRuntimeClassFactory>'
    custom_activation

    # missing CLSID_ContextSwitcher, IID_ICallbackWithNoReentrancyToApplicationSTA and __uuidof(IContextCallback)
    disconnected

    # broken due to lack of winrt::Windows::Foundation::Numerics::float2
    generic_type_names
    generic_types
    # broken due to lack of winrt::Windows::Foundation::Numerics::float4
    numerics

    # blocked by classic_com_guid_error
    get_activation_factory

    # Uses MS extension std::exception(const char* const &, int)
    initialize
    # Uses MS extension std::exception(const char* const &)
    variadic_delegate

    # depends on pplawait.h
    when

    # uses WindowsCreateString from combase, which is missing import lib
    out_params_bad
    # uses WindowsDuplicateString from combase, which is missing import lib
    tearoff
)

# Exclude broken tests
foreach(TEST_SRCS_EXCLUDE_ITEM IN LISTS BROKEN_TESTS)
    list(FILTER TEST_SRCS EXCLUDE REGEX "/${TEST_SRCS_EXCLUDE_ITEM}\\.cpp")
endforeach()

add_executable(test-vanilla main.cpp ${TEST_SRCS})
set_target_properties(test-vanilla PROPERTIES OUTPUT_NAME "test")

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

add_dependencies(test-vanilla build-cppwinrt-projection)

add_test(
    NAME test
    COMMAND "$<TARGET_FILE:test-vanilla>"
)
