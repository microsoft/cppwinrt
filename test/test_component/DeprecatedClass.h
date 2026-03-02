#pragma once
#include "DeprecatedClass.g.h"

namespace winrt::test_component::implementation
{
    struct DeprecatedClass : DeprecatedClassT<DeprecatedClass>
    {
        DeprecatedClass() = default;

        static void StaticMethod();
        static void OldStaticMethod();
        void Method();
        void OldMethod();
    };
}
namespace winrt::test_component::factory_implementation
{
    struct DeprecatedClass : DeprecatedClassT<DeprecatedClass, implementation::DeprecatedClass>
    {
    };
}
