#pragma once
#include "Class.g.h"

namespace winrt::test_component_folders::implementation
{
    struct Class : ClassT<Class>
    {
        Class() = default;

        void Method();
    };
} // namespace winrt::test_component_folders::implementation
namespace winrt::test_component_folders::factory_implementation
{
    struct Class : ClassT<Class, implementation::Class>
    {};
} // namespace winrt::test_component_folders::factory_implementation
