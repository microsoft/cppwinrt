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

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::$rootnamespace$::factory_implementation
{
    struct $safeitemname$ : $safeitemname$T<$safeitemname$, implementation::$safeitemname$>
    {
    };
}
