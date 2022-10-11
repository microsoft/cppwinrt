cmake_minimum_required(VERSION 3.20)
project(cppwinrt CXX)

include(ExternalProject)

ExternalProject_Add(WinMD
    GIT_REPOSITORY https://github.com/microsoft/winmd.git
    GIT_TAG 7abd21d4e9f1c84aca2c5c062ffe83370102b298
    BUILD_COMMAND ""
    INSTALL_COMMAND ""
    CONFIGURE_COMMAND ""
)
ExternalProject_Get_Property(WinMD SOURCE_DIR)

find_package(Threads)

add_executable(prebuild
    prebuild/main.cpp
)
target_compile_features(prebuild PRIVATE
    cxx_std_17
)
target_compile_definitions(prebuild PRIVATE
    "CPPWINRT_VERSION_STRING=\"0.0.0.0\""
)
target_include_directories(prebuild PRIVATE
    cppwinrt
)
target_precompile_headers(prebuild PRIVATE
    prebuild/pch.h
)

file(GLOB STRING_FILES LIST_DIRECTORIES false strings/*.h)

add_custom_command(
    OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/strings.cpp ${CMAKE_CURRENT_BINARY_DIR}/strings.h
    DEPENDS prebuild ${STRING_FILES}
    COMMAND prebuild ${CMAKE_CURRENT_SOURCE_DIR}/strings ${CMAKE_CURRENT_BINARY_DIR}
    VERBATIM
)

add_executable(cppwinrt
    cppwinrt/main.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/strings.cpp
)
target_compile_features(cppwinrt PRIVATE
    cxx_std_17
)
target_compile_definitions(cppwinrt PRIVATE
    "CPPWINRT_VERSION_STRING=\"0.0.0.0\""
)
target_compile_options(cppwinrt PRIVATE
    -fpermissive
)
target_include_directories(cppwinrt PRIVATE
    ${SOURCE_DIR}/src
    ${CMAKE_CURRENT_BINARY_DIR}/
)
target_precompile_headers(cppwinrt PRIVATE
    cppwinrt/pch.h
)
target_link_libraries(cppwinrt PRIVATE
    Threads::Threads
)

include(GNUInstallDirs)
install(TARGETS cppwinrt RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
