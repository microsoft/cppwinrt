#include "pch.h"
#include "TestRuntimeComponent3Class.h"
#include "TestRuntimeComponent3Class.g.cpp"

using namespace winrt::TestRuntimeComponentCSharp;

namespace winrt::TestRuntimeComponent3::implementation
{
    void TestRuntimeComponent3Class::Test()
    {
        TestStaticLibrary3Class c{};
        c.Test();

        TestRuntimeComponentCSharpClass csharp{};
        csharp.Test();
    }
} // namespace winrt::TestRuntimeComponent3::implementation
