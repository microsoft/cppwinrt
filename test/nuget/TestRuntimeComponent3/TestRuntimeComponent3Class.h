#pragma once
#include "TestRuntimeComponent3Class.g.h"

namespace winrt::TestRuntimeComponent3::implementation
{
    struct TestRuntimeComponent3Class : TestRuntimeComponent3ClassT<TestRuntimeComponent3Class>
    {
        TestRuntimeComponent3Class() = default;

        void Test();
    };
}
namespace winrt::TestRuntimeComponent3::factory_implementation
{
    struct TestRuntimeComponent3Class : TestRuntimeComponent3ClassT<TestRuntimeComponent3Class, implementation::TestRuntimeComponent3Class>
    {
    };
}
