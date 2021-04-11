#pragma once
#include "winrt/Windows.UI.Xaml.Data.h"
#include "$safeitemname$.g.h"

namespace winrt::$rootnamespace$::implementation
{
    struct $safeitemname$ : $safeitemname$T<$safeitemname$>
    {
        $safeitemname$() = default;
        event_token PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler);
        void PropertyChanged(event_token token) noexcept;
    private:
        event<Windows::UI::Xaml::Data::PropertyChangedEventHandler> m_PropertyChanged;
    };
}

namespace winrt::$rootnamespace$::factory_implementation
{
    struct $safeitemname$ : $safeitemname$T<$safeitemname$, implementation::$safeitemname$>
    {
    };
}
