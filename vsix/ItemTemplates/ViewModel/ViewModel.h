#pragma once

#include "$safeitemname$.g.h"

namespace winrt::$cpprootnamespace$::implementation
{
    struct $safeitemname$ : $safeitemname$T<$safeitemname$>
    {
        $safeitemname$() = default;

        int32_t MyProperty();
        void MyProperty(int32_t value);
    };
}

namespace winrt::$cpprootnamespace$::factory_implementation
{
    struct $safeitemname$ : $safeitemname$T<$safeitemname$, implementation::$safeitemname$>
    {
    };
}
