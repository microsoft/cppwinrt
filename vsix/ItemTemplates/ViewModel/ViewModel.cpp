﻿#include "pch.h"
#include "$safeitemname$.h"
#if __has_include("$safeitemname$.g.cpp")
#include "$safeitemname$.g.cpp"
#endif

namespace winrt::$rootnamespace$::implementation
{
    int32_t $safeitemname$::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void $safeitemname$::MyProperty(int32_t /*value*/)
    {
        throw hresult_not_implemented();
    }
} // namespace winrt::$rootnamespace$::implementation
