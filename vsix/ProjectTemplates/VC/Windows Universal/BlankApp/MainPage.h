#pragma once
#include "MainPage.g.h"

namespace winrt::$safeprojectname$::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage();
        int MyProperty();
        void MyProperty(int value);
        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::$safeprojectname$::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
