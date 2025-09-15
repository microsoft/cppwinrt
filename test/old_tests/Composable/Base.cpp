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

    int32_t Base::CallOverridableNoexceptMethod() noexcept
    {
        return overridable().OverridableNoexceptMethod();
    }

    hstring Base::OverridableMethod()
    {
        return L"Base::OverridableMethod";
    }

    hstring Base::OverridableVirtualMethod()
    {
        return L"Base::OverridableVirtualMethod";
    }

    int32_t Base::OverridableNoexceptMethod() noexcept
    {
        return 42;
    }

    int32_t Base::ProtectedMethod()
    {
        return static_cast<int32_t>(0xDEADBEEF);
    }

    hstring Base::Name() const
    {
        return m_name;
    }
}
