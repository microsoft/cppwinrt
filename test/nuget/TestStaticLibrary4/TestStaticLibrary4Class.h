#pragma once

#include "TestStaticLibrary4Class.g.h"

namespace winrt::TestApp::Library4::implementation
{
    struct TestStaticLibrary4Class : TestStaticLibrary4ClassT<TestStaticLibrary4Class>
    {
        TestStaticLibrary4Class() = default;

        Windows::UI::Xaml::Core::Direct::XamlDirect Test();
    };
} // namespace winrt::TestApp::Library4::implementation

namespace winrt::TestApp::Library4::factory_implementation
{
    struct TestStaticLibrary4Class : TestStaticLibrary4ClassT<TestStaticLibrary4Class, implementation::TestStaticLibrary4Class>
    {};
} // namespace winrt::TestApp::Library4::factory_implementation
