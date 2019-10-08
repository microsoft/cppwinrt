#pragma once
#include "Velocity.Class2.g.h"

namespace winrt::test_component::Velocity::implementation
{
    struct Class2 : Class2T<Class2>
    {
        Class2() = default;

        void Class2_Method();
    };
}
namespace winrt::test_component::Velocity::factory_implementation
{
    struct Class2 : Class2T<Class2, implementation::Class2>
    {
    };
}
