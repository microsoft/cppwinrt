#include "pch.h"
#include "$safeitemname$.h"
#if __has_include("$safeitemname$.g.cpp")
#include "$safeitemname$.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::$rootnamespace$::implementation
{
    $safeitemname$::$safeitemname$()
    {
        InitializeComponent();
    }
}
