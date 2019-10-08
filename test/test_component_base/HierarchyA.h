#pragma once
#include "HierarchyA.g.h"

namespace winrt::test_component_base::implementation
{
    struct HierarchyA : HierarchyAT<HierarchyA>
    {
        HierarchyA() = default;

        HierarchyA(hstring const& name);
        void HierarchyA_Method();
    };
}
namespace winrt::test_component_base::factory_implementation
{
    struct HierarchyA : HierarchyAT<HierarchyA, implementation::HierarchyA>
    {
    };
}
