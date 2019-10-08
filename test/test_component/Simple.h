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
    };
}
namespace winrt::test_component::factory_implementation
{
    struct Simple : SimpleT<Simple, implementation::Simple>
    {
    };
}
