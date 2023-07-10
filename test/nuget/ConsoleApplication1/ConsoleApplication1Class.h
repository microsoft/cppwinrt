#pragma once
#include "ConsoleApplication1Class.g.h"

namespace winrt::ConsoleApplication1::implementation
{
    struct ConsoleApplication1Class : ConsoleApplication1ClassT<ConsoleApplication1Class>
    {
        ConsoleApplication1Class() = default;

        void Test();
    };
}
namespace winrt::ConsoleApplication1::factory_implementation
{
    struct ConsoleApplication1Class : ConsoleApplication1ClassT<ConsoleApplication1Class, implementation::ConsoleApplication1Class>
    {
    };
}
