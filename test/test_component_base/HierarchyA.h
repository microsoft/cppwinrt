#pragma once
#include "HierarchyA.g.h"

namespace winrt::test_component_base::implementation
{
    struct HierarchyA : HierarchyAT<HierarchyA>
    {
        HierarchyA() = default;

        HierarchyA(hstring const& name);
        HierarchyA(int32_t dummy, hstring const& name);
        void HierarchyA_Method();
        int HierarchyA_Protected();
    };
}
namespace winrt::test_component_base::factory_implementation
{
    struct HierarchyA : HierarchyAT<HierarchyA, implementation::HierarchyA>
    {
    };
}
