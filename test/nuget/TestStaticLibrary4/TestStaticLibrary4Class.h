#pragma once

#include "TestStaticLibrary4Class.g.h"

namespace winrt::TestApp::implementation
{
    struct TestStaticLibrary4Class : TestStaticLibrary4ClassT<TestStaticLibrary4Class>
    {
        TestStaticLibrary4Class() = default;

        Windows::UI::Xaml::Core::Direct::XamlDirect Test();
    };
}

namespace winrt::TestApp::factory_implementation
{
    struct TestStaticLibrary4Class : TestStaticLibrary4ClassT<TestStaticLibrary4Class, implementation::TestStaticLibrary4Class>
    {
    };
}
