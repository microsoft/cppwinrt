#pragma once

#define WINRT_NO_MODULE_LOCK
#include "winrt/base.h"

// get_module_lock will always return true if WINRT_NO_MODULE_LOCK is defined.
// This ensures that if the DLL unnecessarily exports DllCanUnloadNow that it
// will in turn return S_FALSE.
static_assert(winrt::get_module_lock());
