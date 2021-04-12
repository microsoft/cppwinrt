#include "pch.h"
#include "$safeitemname$.h"
#if __has_include("$safeitemname$.g.cpp")
#include "$safeitemname$.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml::Data;

namespace winrt::$rootnamespace$::implementation
{
    event_token $safeitemname$::PropertyChanged(PropertyChangedEventHandler const& handler)
    {
        return m_PropertyChanged.add(handler);
    }

    void $safeitemname$::PropertyChanged(event_token token) noexcept
    {
        m_PropertyChanged.remove(token);
    }
}
