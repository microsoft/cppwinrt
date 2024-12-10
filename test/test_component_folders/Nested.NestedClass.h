#pragma once
#include "Nested/NestedClass.g.h"

namespace winrt::test_component_folders::Nested::implementation
{
    struct NestedClass : NestedClassT<NestedClass>
    {
        NestedClass() = default;

        void Method();
    };
} // namespace winrt::test_component_folders::Nested::implementation
namespace winrt::test_component_folders::Nested::factory_implementation
{
    struct NestedClass : NestedClassT<NestedClass, implementation::NestedClass>
    {};
} // namespace winrt::test_component_folders::Nested::factory_implementation
