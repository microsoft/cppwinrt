#pragma once
#include "RemovedClass.g.h"

namespace winrt::test_component::implementation
{
    struct RemovedClass : RemovedClassT<RemovedClass>
    {
        RemovedClass() = default;

        static void ActiveStaticMethod();
        static void RemovedStaticMethod();
        void ActiveMethod();
        void RemovedMethod();
    };
}
namespace winrt::test_component::factory_implementation
{
    struct RemovedClass : RemovedClassT<RemovedClass, implementation::RemovedClass>
    {
    };
}
