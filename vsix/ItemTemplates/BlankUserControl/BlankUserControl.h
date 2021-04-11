#pragma once
#include "winrt/Windows.UI.Xaml.h"
#include "winrt/Windows.UI.Xaml.Markup.h"
#include "winrt/Windows.UI.Xaml.Interop.h"
#include "winrt/Windows.UI.Xaml.Controls.Primitives.h"
#include "$safeitemname$.g.h"

namespace winrt::$rootnamespace$::implementation
{
    struct $safeitemname$ : $safeitemname$T<$safeitemname$>
    {
        $safeitemname$();
    };
}

namespace winrt::$rootnamespace$::factory_implementation
{
    struct $safeitemname$ : $safeitemname$T<$safeitemname$, implementation::$safeitemname$>
    {
    };
}
