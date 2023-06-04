#include "pch.h"
#include "Nested.HierarchyC.h"

namespace winrt::test_component_derived::Nested::implementation
{
    HierarchyC::HierarchyC(hstring const& name)
    {
        throw hresult_not_implemented();
    }
    void HierarchyC::HierarchyC_Method()
    {
        throw hresult_not_implemented();
    }

    static_assert(!std::is_convertible_v<HierarchyC, winrt::test_component_base::IHierarchyAProtected>);
}
