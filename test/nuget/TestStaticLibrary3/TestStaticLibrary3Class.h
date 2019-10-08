#pragma once
#include "TestStaticLibrary3Class.g.h"

namespace winrt::TestRuntimeComponent3::implementation
{
    struct TestStaticLibrary3Class : TestStaticLibrary3ClassT<TestStaticLibrary3Class>
    {
        TestStaticLibrary3Class() = default;

        void Test();
    };
}
namespace winrt::TestRuntimeComponent3::factory_implementation
{
    struct TestStaticLibrary3Class : TestStaticLibrary3ClassT<TestStaticLibrary3Class, implementation::TestStaticLibrary3Class>
    {
    };
}
