#pragma once
#include "HierarchyB.g.h"
#include "HierarchyA.h"

namespace winrt::test_component_fluent::implementation
{
    struct HierarchyB : HierarchyBT<HierarchyB, test_component_fluent::implementation::HierarchyA>
    {
        HierarchyB() = default;

        int32_t PropertyB() { return 53; }
        void PropertyB(int32_t) {}
    };
}
namespace winrt::test_component_fluent ::factory_implementation
{
    struct HierarchyB : HierarchyBT<HierarchyB, implementation::HierarchyB>
    {
    };
}
