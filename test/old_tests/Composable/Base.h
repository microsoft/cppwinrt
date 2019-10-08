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
        hstring OverridableMethod() ;
        virtual hstring OverridableVirtualMethod();

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
