#include "pch.h"
#include "HierarchyB.h"

#pragma warning(disable: 4702)

namespace winrt::test_component_base::implementation
{
    HierarchyB::HierarchyB(hstring const& name)
    {
        throw hresult_not_implemented();
    }
    HierarchyB::HierarchyB(int32_t dummy, hstring const& name) : HierarchyB_base(dummy, name)
    {
        throw hresult_not_implemented();
    }
    void HierarchyB::HierarchyB_Method()
    {
        throw hresult_not_implemented();
    }
    void HierarchyB::HierarchyB_TestInnerProtected()
    {
        assert(HierarchyA_Protected() == 42);
    }
}
