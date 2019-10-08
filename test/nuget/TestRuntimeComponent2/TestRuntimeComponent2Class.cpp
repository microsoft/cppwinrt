#include "pch.h"
#include "TestRuntimeComponent2Class.h"
#include "TestRuntimeComponent2Class.g.cpp"

namespace winrt::TestRuntimeComponent2::implementation
{
    void TestRuntimeComponent2Class::Test()
    {
        TestStaticLibrary2Class c{};
        c.Test();
    }
}
