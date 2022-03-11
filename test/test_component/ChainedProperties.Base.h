#pragma once
#include "ChainedProperties.Base.g.h"

namespace winrt::test_component::ChainedProperties::implementation
{
    struct Base : BaseT<Base>
    {
        Base() = default;

        int32_t Second();
        void Second(int32_t value);
        int32_t First();
        void First(int32_t value);

        int32_t m_first{};
        int32_t m_second{};
    };
}
namespace winrt::test_component::ChainedProperties::factory_implementation
{
    struct Base : BaseT<Base, implementation::Base>
    {
    };
}
