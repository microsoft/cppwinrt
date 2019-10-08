#include "pch.h"
#include "TestRuntimeComponent3Class.h"
#include "TestRuntimeComponent3Class.g.cpp"

namespace winrt::TestRuntimeComponent3::implementation
{
    void TestRuntimeComponent3Class::Test()
    {
        TestStaticLibrary3Class c{};
        c.Test();
    }
}
