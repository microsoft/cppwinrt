file(GLOB TEST_SRCS
    LIST_DIRECTORIES false
    CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/../test/*.cpp"
)
list(FILTER TEST_SRCS EXCLUDE REGEX "/(main|pch)\\.cpp")


# Match the exclusions used by the vanilla test target.
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

if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    list(APPEND BROKEN_TESTS
        thread_pool
    )
endif()

foreach(TEST_SRCS_EXCLUDE_ITEM IN LISTS BROKEN_TESTS)
    list(FILTER TEST_SRCS EXCLUDE REGEX "/${TEST_SRCS_EXCLUDE_ITEM}\\.cpp")
endforeach()

add_executable(test_cachedrtc "${CMAKE_CURRENT_SOURCE_DIR}/../test/main.cpp" ${TEST_SRCS} thunked_dispatch.cpp)
target_link_libraries(test_cachedrtc runtimeobject synchronization)
target_include_directories(test_cachedrtc PRIVATE "${CPPWINRT_CACHED_PROJECTION_INCLUDE_DIR}")

target_precompile_headers(test_cachedrtc PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/../test/pch.h")
set_source_files_properties(
    "${CMAKE_CURRENT_SOURCE_DIR}/../test/main.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/../test/coro_foundation.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/../test/coro_system.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/../test/coro_threadpool.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/../test/coro_ui_core.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/../test/custom_activation.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/../test/generic_type_names.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/../test/guid_include.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/../test/inspectable_interop.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/../test/module_lock_dll.cpp"
    PROPERTIES SKIP_PRECOMPILE_HEADERS true
)

if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    set_source_files_properties("${CMAKE_CURRENT_SOURCE_DIR}/../test/out_params_bad.cpp" PROPERTIES COMPILE_OPTIONS "-fno-devirtualize")

    if(CMAKE_BUILD_TYPE STREQUAL "Release")
        set_source_files_properties("${CMAKE_CURRENT_SOURCE_DIR}/../test/multi_threaded_vector.cpp" PROPERTIES COMPILE_OPTIONS "-O2")
    endif()
endif()

add_dependencies(test_cachedrtc build-cppwinrt-cached-projection)

add_test(
    NAME test_cachedrtc
    COMMAND "$<TARGET_FILE:test_cachedrtc>" ${TEST_COLOR_ARG}
)