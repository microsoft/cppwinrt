#include "pch.h"
#include "TestStaticLibrary2Class.h"
#include "TestStaticLibrary2Class.g.cpp"

using namespace winrt::TestRuntimeComponent3;

namespace winrt::TestRuntimeComponent2::implementation
{
    void TestStaticLibrary2Class::Test()
    {
        TestRuntimeComponent3Class c{};
        c.Test();
    }
}
