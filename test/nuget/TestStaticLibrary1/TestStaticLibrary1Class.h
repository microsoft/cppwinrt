#pragma once
#include "TestStaticLibrary1Class.g.h"

namespace winrt::TestApp::implementation
{
    struct TestStaticLibrary1Class : TestStaticLibrary1ClassT<TestStaticLibrary1Class>
    {
        TestStaticLibrary1Class() = default;

        void Test();
    };
}
namespace winrt::TestApp::factory_implementation
{
    struct TestStaticLibrary1Class : TestStaticLibrary1ClassT<TestStaticLibrary1Class, implementation::TestStaticLibrary1Class>
    {
    };
}
