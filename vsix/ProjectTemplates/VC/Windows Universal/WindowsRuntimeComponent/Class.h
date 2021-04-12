#pragma once
#include "Class.g.h"

namespace winrt::$safeprojectname$::implementation
{
    struct Class : ClassT<Class>
    {
        Class() = default;
        int MyProperty();
        void MyProperty(int value);
    };
}

namespace winrt::$safeprojectname$::factory_implementation
{
    struct Class : ClassT<Class, implementation::Class>
    {
    };
}
