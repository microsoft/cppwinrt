#pragma once
#include "Windows.Class.g.h"

namespace winrt::test_component::Windows::implementation
{
    struct Class : ClassT<Class>
    {
        Class() = default;

        static void StaticMethod();
        void Method();
    };
}
namespace winrt::test_component::Windows::factory_implementation
{
    struct Class : ClassT<Class, implementation::Class>
    {
    };
}
