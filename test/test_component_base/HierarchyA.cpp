#include "pch.h"
#include "HierarchyA.h"

namespace winrt::test_component_base::implementation
{
    HierarchyA::HierarchyA(hstring const& name)
    {
        throw hresult_not_implemented();
    }
    HierarchyA::HierarchyA(int32_t dummy, hstring const& name)
    {
        throw hresult_not_implemented();
    }
    void HierarchyA::HierarchyA_Method()
    {
        //test_component_base::HierarchyA a = *this;
        //assert(a);

        //test_component_base::IHierarchyA ia = *this;
        //assert(a);
    }
    int HierarchyA::HierarchyA_Protected()
    {
        return 42;
    }

    static_assert(!std::is_constructible_v<test_component_base::HierarchyA, int32_t, hstring const&>);
}
