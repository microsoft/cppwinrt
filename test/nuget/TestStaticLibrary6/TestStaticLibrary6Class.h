#pragma once

#include "SubNamespace1.TestStaticLibrary6Class.g.h"

namespace winrt::TestRuntimeComponentEmpty::SubNamespace1::implementation
{
    struct TestStaticLibrary6Class : TestStaticLibrary6ClassT<TestStaticLibrary6Class>
    {
        TestStaticLibrary6Class() = default;

        Windows::UI::Xaml::Core::Direct::XamlDirect Test();
    };
}

namespace winrt::TestRuntimeComponentEmpty::SubNamespace1::factory_implementation
{
    struct TestStaticLibrary6Class : TestStaticLibrary6ClassT<TestStaticLibrary6Class, implementation::TestStaticLibrary6Class>
    {
    };
}
