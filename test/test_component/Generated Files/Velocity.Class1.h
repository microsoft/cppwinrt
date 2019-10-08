#pragma once
#include "Velocity.Class1.g.h"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.
static_assert(false, "Do not compile generated C++/WinRT source files directly");

namespace winrt::test_component::Velocity::implementation
{
    struct Class1 : Class1T<Class1>
    {
        Class1() = default;

        void Class1_Method();
    };
}
namespace winrt::test_component::Velocity::factory_implementation
{
    struct Class1 : Class1T<Class1, implementation::Class1>
    {
    };
}
