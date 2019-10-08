#pragma once
#include "TestRuntimeComponent2Class.g.h"

namespace winrt::TestRuntimeComponent2::implementation
{
    struct TestRuntimeComponent2Class : TestRuntimeComponent2ClassT<TestRuntimeComponent2Class>
    {
        TestRuntimeComponent2Class() = default;

        void Test();
    };
}
namespace winrt::TestRuntimeComponent2::factory_implementation
{
    struct TestRuntimeComponent2Class : TestRuntimeComponent2ClassT<TestRuntimeComponent2Class, implementation::TestRuntimeComponent2Class>
    {
    };
}
