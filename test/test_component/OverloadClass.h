#pragma once
#include "OverloadClass.g.h"

namespace winrt::test_component::implementation
{
    struct OverloadClass : OverloadClassT<OverloadClass>
    {
        OverloadClass() = default;

        void Overload();
        void Overload(int a);
        void Overload(int a, int b);
        void Overload(int a, int b, int c);
    };
}
namespace winrt::test_component::factory_implementation
{
    struct OverloadClass : OverloadClassT<OverloadClass, implementation::OverloadClass>
    {
    };
}
