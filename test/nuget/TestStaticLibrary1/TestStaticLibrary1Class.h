#pragma once
#include "TestStaticLibrary1Class.g.h"

namespace winrt::TestApp::Library1::implementation
{
    struct TestStaticLibrary1Class : TestStaticLibrary1ClassT<TestStaticLibrary1Class>
    {
        TestStaticLibrary1Class() = default;

        void Test(TestApp::Library4::TestStaticLibrary4Class const& c);
    };
}
namespace winrt::TestApp::Library1::factory_implementation
{
    struct TestStaticLibrary1Class : TestStaticLibrary1ClassT<TestStaticLibrary1Class, implementation::TestStaticLibrary1Class>
    {
    };
}
