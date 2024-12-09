#pragma once
#include "HierarchyB.g.h"
#include "HierarchyA.h"

namespace winrt::test_component_base::implementation
{
    struct HierarchyB : HierarchyBT<HierarchyB, test_component_base::implementation::HierarchyA>
    {
        HierarchyB() = default;

        HierarchyB(hstring const& name);
        HierarchyB(int32_t dummy, hstring const& name);
        void HierarchyB_Method();
        void HierarchyB_TestInnerProtected();
    };
} // namespace winrt::test_component_base::implementation
namespace winrt::test_component_base::factory_implementation
{
    struct HierarchyB : HierarchyBT<HierarchyB, implementation::HierarchyB>
    {};
} // namespace winrt::test_component_base::factory_implementation
