#pragma once
#include "Nomadic.g.h"

namespace winrt::test_component_fast::implementation
{
    struct Nomadic : NomadicT<Nomadic>
    {
        Nomadic() = default;

        hstring FirstMethod();
        hstring SecondMethod();
        hstring ThirdMethod();
        hstring FourthMethod();
    };
}
namespace winrt::test_component_fast::factory_implementation
{
    struct Nomadic : NomadicT<Nomadic, implementation::Nomadic>
    {
    };
}
