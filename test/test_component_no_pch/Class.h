#pragma once
#include "Class.g.h"

namespace winrt::test_component_no_pch::implementation
{
    struct Class : ClassT<Class>
    {
        Class() = default;

        void Method();
    };
} // namespace winrt::test_component_no_pch::implementation
namespace winrt::test_component_no_pch::factory_implementation
{
    struct Class : ClassT<Class, implementation::Class>
    {};
} // namespace winrt::test_component_no_pch::factory_implementation
