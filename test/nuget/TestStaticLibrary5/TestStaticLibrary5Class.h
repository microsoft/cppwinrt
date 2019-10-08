#pragma once

#include "TestStaticLibrary5Class.g.h"

namespace winrt::TestRuntimeComponentEmpty::implementation
{
    struct TestStaticLibrary5Class : TestStaticLibrary5ClassT<TestStaticLibrary5Class>
    {
        TestStaticLibrary5Class() = default;

        Windows::UI::Xaml::Core::Direct::XamlDirect Test();
    };
}

namespace winrt::TestRuntimeComponentEmpty::factory_implementation
{
    struct TestStaticLibrary5Class : TestStaticLibrary5ClassT<TestStaticLibrary5Class, implementation::TestStaticLibrary5Class>
    {
    };
}
