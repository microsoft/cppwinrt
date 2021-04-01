#pragma once

#include "Base.g.h"

namespace winrt::Composable::implementation
{
    struct Base : BaseT<Base>
    {
        Base() = default;
        explicit Base(const hstring& name)
            : m_name(name)
        {}

        virtual hstring VirtualMethod();
        hstring CallOverridableMethod();
        hstring CallOverridableVirtualMethod();
        int32_t CallOverridableNoexceptMethod() noexcept;
        hstring OverridableMethod() ;
        virtual hstring OverridableVirtualMethod();
        int32_t OverridableNoexceptMethod() noexcept;

        hstring Name() const;

    private:
        hstring m_name;
    };
}

namespace winrt::Composable::factory_implementation
{
    struct Base : BaseT<Base, implementation::Base>
    {
    };
}
