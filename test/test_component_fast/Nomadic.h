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
        hstring FifthMethod();
        hstring SixthMethod();
        hstring SeventhMethod();
    };
} // namespace winrt::test_component_fast::implementation
namespace winrt::test_component_fast::factory_implementation
{
    struct Nomadic : NomadicT<Nomadic, implementation::Nomadic>
    {};
} // namespace winrt::test_component_fast::factory_implementation
