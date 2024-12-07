#pragma once
#include "TestRuntimeComponent1Class.g.h"

namespace winrt::TestRuntimeComponent1::implementation
{
    struct TestRuntimeComponent1Class : TestRuntimeComponent1ClassT<TestRuntimeComponent1Class>
    {
        TestRuntimeComponent1Class() = default;

        void Test();
    };
} // namespace winrt::TestRuntimeComponent1::implementation
namespace winrt::TestRuntimeComponent1::factory_implementation
{
    struct TestRuntimeComponent1Class
        : TestRuntimeComponent1ClassT<TestRuntimeComponent1Class, implementation::TestRuntimeComponent1Class>
    {};
} // namespace winrt::TestRuntimeComponent1::factory_implementation
