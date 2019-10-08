#pragma once
#include "Velocity.Class3.g.h"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.
static_assert(false, "Do not compile generated C++/WinRT source files directly");

namespace winrt::test_component::Velocity::implementation
{
    struct Class3 : Class3T<Class3>
    {
        Class3() = default;

        void Class3_Method();
    };
}
namespace winrt::test_component::Velocity::factory_implementation
{
    struct Class3 : Class3T<Class3, implementation::Class3>
    {
    };
}
