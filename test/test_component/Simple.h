#pragma once
#include "Simple.g.h"

namespace winrt::test_component::implementation
{
    struct Simple : SimpleT<Simple>
    {
        Simple() = default;

        void Method();
        Windows::Foundation::IReference<int32_t> Reference(Windows::Foundation::DateTime const& value);
        Windows::Foundation::IAsyncOperation<int32_t> Operation(Windows::Foundation::DateTime value);
        Windows::Foundation::IAsyncAction Action(Windows::Foundation::DateTime value);
        Windows::Foundation::IInspectable Object(Windows::Foundation::DateTime const& value);

        // All we care about static events (for now) is that they build.
        static event_token StaticEvent(Windows::Foundation::EventHandler<IInspectable> const&)
        {
            return {};
        }
        static void StaticEvent(event_token)
        {}

        Windows::Foundation::Numerics::float2 ReturnVector2()
        {
            return { 123.0, 456.0 };
        }

        Windows::Foundation::Numerics::Rational ReturnRational()
        {
            return { 123, 456 };
        }
    };
} // namespace winrt::test_component::implementation
namespace winrt::test_component::factory_implementation
{
    struct Simple : SimpleT<Simple, implementation::Simple>
    {};
} // namespace winrt::test_component::factory_implementation
