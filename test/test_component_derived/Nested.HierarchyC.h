#pragma once
#include "Nested/HierarchyC.g.h"

namespace winrt::test_component_derived::Nested::implementation
{
    struct HierarchyC : HierarchyCT<HierarchyC>
    {
        HierarchyC() = default;

        HierarchyC(hstring const& name);
        void HierarchyC_Method();
    };
}
namespace winrt::test_component_derived::Nested::factory_implementation
{
    struct HierarchyC : HierarchyCT<HierarchyC, implementation::HierarchyC>
    {
    };
}
