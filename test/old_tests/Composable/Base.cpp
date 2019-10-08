#include "precomp.hpp"
#include "Base.h"

namespace winrt::Composable::implementation
{
    hstring Base::VirtualMethod()
    {
        //Composable::Base b = *this;
        //Composable::IBase ib = *this;

        return L"Base::VirtualMethod";
    }

    hstring Base::CallOverridableMethod()
    {
        return overridable().OverridableMethod();
    }

    hstring Base::CallOverridableVirtualMethod()
    {
        return overridable().OverridableVirtualMethod();
    }

    hstring Base::OverridableMethod()
    {
        return L"Base::OverridableMethod";
    }

    hstring Base::OverridableVirtualMethod()
    {
        return L"Base::OverridableVirtualMethod";
    }

    hstring Base::Name() const
    {
        return m_name;
    }
}
