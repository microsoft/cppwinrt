#pragma once
#include "HierarchyA.g.h"

namespace winrt::test_component_fluent::implementation
{
    struct HierarchyA : HierarchyAT<HierarchyA>
    {
        HierarchyA() = default;

        int32_t PropertyA() { return 42; }
        void PropertyA(int32_t) { }
        double DoubleProperty() { return 0.5; }
        void DoubleProperty(double) {}
    };
}
namespace winrt::test_component_fluent::factory_implementation
{
    struct HierarchyA : HierarchyAT<HierarchyA, implementation::HierarchyA>
    {
    };
}
