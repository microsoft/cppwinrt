﻿#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"

using namespace winrt;
using namespace Windows::UI::Xaml;

using namespace winrt::TestApp::Library1;
using namespace winrt::TestApp::Library4;
using namespace winrt::TestRuntimeComponent1;
using namespace winrt::TestRuntimeComponent2;
using namespace winrt::TestRuntimeComponentCX;
using namespace winrt::TestRuntimeComponentEmpty;
using namespace winrt::TestRuntimeComponentEmpty::SubNamespace1;
using namespace winrt::TestRuntimeComponent_NamespaceUnderscore;

namespace winrt::TestApp::implementation
{
    MainPage::MainPage()
    {
        InitializeComponent();

        TestRuntimeComponent1Class c1{};
        c1.Test();

        TestRuntimeComponent2Class c2{};
        c2.Test();

        TestRuntimeComponentCXClass c3{};
        c3.Test();

        TestRuntimeComponentNamespaceUnderscoreClass cUnderscore{};
        cUnderscore.Test();

        TestStaticLibrary4Class cStatic4{};
        cStatic4.Test();

        TestStaticLibrary1Class cStatic1{};
        cStatic1.Test(cStatic4);

        TestStaticLibrary5Class cStatic5{};
        cStatic5.Test();

        TestStaticLibrary6Class cStatic6{};
        cStatic6.Test();
    }

    int32_t MainPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void MainPage::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        myButton().Content(box_value(L"Clicked"));
    }
} // namespace winrt::TestApp::implementation
