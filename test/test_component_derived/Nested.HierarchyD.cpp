#include "pch.h"
#include "Nested.HierarchyD.h"

namespace winrt::test_component_derived::Nested::implementation
{
    HierarchyD::HierarchyD(hstring const& name)
    {
        throw hresult_not_implemented();
    }
    void HierarchyD::HierarchyD_Method()
    {
        Nested::HierarchyD d = *this;
        assert(d);

        Nested::HierarchyC c = *this;
        assert(c);

        test_component_base::HierarchyB b = *this;
        assert(b);

        test_component_base::HierarchyA a = *this;
        assert(a);

        Nested::IHierarchyD id = *this;
        assert(id);

        Nested::IHierarchyC ic = *this;
        assert(ic);

        test_component_base::IHierarchyB ib = *this;
        assert(ib);

        test_component_base::IHierarchyA ia = *this;
        assert(ia);
    }
}
