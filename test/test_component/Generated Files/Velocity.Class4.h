#pragma once
#include "Velocity.Class4.g.h"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.
static_assert(false, "Do not compile generated C++/WinRT source files directly");

namespace winrt::test_component::Velocity::implementation
{
    struct Class4 : Class4T<Class4>
    {
        Class4() = default;

        Class4(int32_t one);
        Class4(int32_t one, int32_t two);
        static void Class4_Static1();
        static void Class4_Static2();
        void Class4_Method();
        void IInterface1_Method();
        void IInterface2_Method();
    };
}
namespace winrt::test_component::Velocity::factory_implementation
{
    struct Class4 : Class4T<Class4, implementation::Class4>
    {
    };
}
