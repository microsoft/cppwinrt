﻿#pragma once

#include "MainPage.g.h"

namespace winrt::TestApp::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
    };
} // namespace winrt::TestApp::implementation

namespace winrt::TestApp::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {};
} // namespace winrt::TestApp::factory_implementation
