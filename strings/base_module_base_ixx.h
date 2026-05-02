
#ifdef WINRT_ENABLE_LEGACY_COM
#include <unknwn.h>
#include <inspectable.h>
#undef GetCurrentTime
#endif

export module winrt_base;

import std;
export import winrt_numerics;

#if __has_include(<windowsnumerics.impl.h>)
#define WINRT_IMPL_NUMERICS
#endif

#include "winrt/base.h"
