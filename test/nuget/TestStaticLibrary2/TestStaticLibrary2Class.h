#pragma once
#include "TestStaticLibrary2Class.g.h"

namespace winrt::TestRuntimeComponent2::implementation
{
    struct TestStaticLibrary2Class : TestStaticLibrary2ClassT<TestStaticLibrary2Class>
    {
        TestStaticLibrary2Class() = default;

        void Test();
    };
}
namespace winrt::TestRuntimeComponent2::factory_implementation
{
    struct TestStaticLibrary2Class : TestStaticLibrary2ClassT<TestStaticLibrary2Class, implementation::TestStaticLibrary2Class>
    {
    };
}
