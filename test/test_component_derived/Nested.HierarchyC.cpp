#include "pch.h"
#include "Nested.HierarchyC.h"

namespace winrt::test_component_derived::Nested::implementation
{
    HierarchyC::HierarchyC(hstring const& name) : HierarchyC_base(10, name)
    {
        throw hresult_not_implemented();
    }
    void HierarchyC::HierarchyC_Method()
    {
        throw hresult_not_implemented();
    }

    static_assert(!std::is_convertible_v<HierarchyC, winrt::test_component_base::IHierarchyAProtected>);
    static_assert(!std::is_constructible_v<winrt::test_component_base::HierarchyA, int32_t, hstring const&>);
}
