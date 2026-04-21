#pragma once
#include "CustomDependencyObject.g.h"

namespace winrt::test_component_module::implementation
{
    struct CustomDependencyObject : CustomDependencyObjectT<CustomDependencyObject>
    {
        CustomDependencyObject() = default;
    };
}

namespace winrt::test_component_module::factory_implementation
{
    struct CustomDependencyObject : CustomDependencyObjectT<CustomDependencyObject, implementation::CustomDependencyObject>
    {
    };
}
