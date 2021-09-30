#pragma once
#include "Optional.g.h"

namespace winrt::test_component::implementation
{
    struct Optional : OptionalT<Optional>
    {
        Optional() = default;

        Windows::Foundation::IReference<int32_t> Property()
        {
            return m_property;
        }

        void Property(Windows::Foundation::IReference<int32_t> const& value)
        {
            m_property = value;
        }

        std::optional<int32_t> m_property;
    };
}
namespace winrt::test_component::factory_implementation
{
    struct Optional : OptionalT<Optional, implementation::Optional>
    {
    };
}
