#pragma once
#include "Nested/HierarchyD.g.h"
#include "Nested.HierarchyC.h"
#include <windows.ui.xaml.hosting.referencetracker.h>

namespace winrt::test_component_derived::Nested::implementation
{
    struct HierarchyD : HierarchyDT<HierarchyD, test_component_derived::Nested::implementation::HierarchyC, IReferenceTrackerExtension>
    {
        HierarchyD() = default;

        HierarchyD(hstring const& name);
        void HierarchyD_Method();
    };
}
namespace winrt::test_component_derived::Nested::factory_implementation
{
    struct HierarchyD : HierarchyDT<HierarchyD, implementation::HierarchyD>
    {
    };
}
