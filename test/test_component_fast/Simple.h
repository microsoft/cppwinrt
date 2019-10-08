#pragma once
#include "Simple.g.h"

namespace winrt::test_component_fast::implementation
{
    struct Simple : SimpleT<Simple>
    {
        Simple() = default;

        hstring Method1();
        hstring Method2();
        hstring Method3();
    };
}
namespace winrt::test_component_fast::factory_implementation
{
    struct Simple : SimpleT<Simple, implementation::Simple>
    {
    };
}
