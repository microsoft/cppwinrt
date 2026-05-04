// winrt_thunk_resolve.cpp - Bridge from ASM thunk stubs to C++ resolve logic
//
// This file provides the extern "C" function called by the architecture-specific
// ASM thunk stubs. It must be compiled into the same static library as the stubs.

#include <winrt/base.h>

extern "C" void* winrt_fast_resolve_thunk(winrt::impl::interface_thunk const* thunk)
{
    return thunk->resolve();
}
