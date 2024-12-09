﻿#pragma once

#include "$safeitemname$.g.h"

namespace winrt::$rootnamespace$::implementation
{
    struct $safeitemname$ : $safeitemname$T<$safeitemname$>
    {
        $safeitemname$() = default;

        int32_t MyProperty();
        void MyProperty(int32_t value);
    };
} // namespace winrt::$rootnamespace$::implementation

namespace winrt::$rootnamespace$::factory_implementation
{
    struct $safeitemname$ : $safeitemname$T<$safeitemname$, implementation::$safeitemname$>
    {};
} // namespace winrt::$rootnamespace$::factory_implementation
