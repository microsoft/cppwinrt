#pragma once

#include "TestStaticLibrary7Class.g.h"

namespace winrt::TestRuntimeComponentCXLibrary::implementation
{
    struct TestStaticLibrary7Class : TestStaticLibrary7ClassT<TestStaticLibrary7Class>
    {
        TestStaticLibrary7Class() = default;

        Windows::UI::Xaml::Core::Direct::XamlDirect Test();
    };
}

namespace winrt::TestRuntimeComponentCXLibrary::factory_implementation
{
    struct TestStaticLibrary7Class : TestStaticLibrary7ClassT<TestStaticLibrary7Class, implementation::TestStaticLibrary7Class>
    {
    };
}
