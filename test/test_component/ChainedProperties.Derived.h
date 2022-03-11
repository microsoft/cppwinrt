#pragma once
#include "ChainedProperties.Derived.g.h"
#include "ChainedProperties.Base.h"

namespace winrt::test_component::ChainedProperties::implementation
{
    struct Derived : DerivedT<Derived, test_component::ChainedProperties::implementation::Base>
    {
        Derived() = default;

        int32_t Fourth();
        void Fourth(int32_t value);
        int32_t Third();
        void Third(int32_t value);

        int32_t m_third{};
        int32_t m_fourth{};
    };
}
namespace winrt::test_component::ChainedProperties::factory_implementation
{
    struct Derived : DerivedT<Derived, implementation::Derived>
    {
    };
}
