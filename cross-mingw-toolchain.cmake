# This is a cmake-toolchain(5) file that can be used to cross-build
# cppwinrt.exe fron Linux or other operating systems using a mingw-w64 cross
# toolchain. This should work with both GCC-based and llvm-mingw toolchains.
#
# Example usage with external toolchain:
#
#   $ cmake -S . -B build/cross_x64/ \
#       --toolchain cross-mingw-toolchain.cmake \
#       -DMINGW_BIN_PATH=/opt/llvm-mingw/bin \
#       -DCMAKE_BUILD_TYPE=RelWithDebInfo \
#       -DCMAKE_INSTALL_PREFIX=$PWD/install/
#
# Example usage with toolchain installed system-wide:
#
#   $ cmake -S . -B build/cross_i686/ \
#       --toolchain cross-mingw-toolchain.cmake \
#       -DCMAKE_SYSTEM_PROCESSOR=i686 \
#       -DCMAKE_BUILD_TYPE=RelWithDebInfo \
#       -DCMAKE_INSTALL_PREFIX=$PWD/install/


set(CMAKE_SYSTEM_NAME Windows)
if(NOT DEFINED CMAKE_SYSTEM_PROCESSOR)
    set(CMAKE_SYSTEM_PROCESSOR x86_64)
endif()

set(TOOLCHAIN_PREFIX ${CMAKE_SYSTEM_PROCESSOR}-w64-mingw32)

if(DEFINED MINGW_BIN_PATH)
    set(TOOLCHAIN_PREFIX "${MINGW_BIN_PATH}/${TOOLCHAIN_PREFIX}")
endif()

set(CMAKE_C_COMPILER "${TOOLCHAIN_PREFIX}-gcc")
set(CMAKE_CXX_COMPILER "${TOOLCHAIN_PREFIX}-g++")
set(CMAKE_RC_COMPILER "${TOOLCHAIN_PREFIX}-windres")

set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)

unset(TOOLCHAIN_PREFIX)
