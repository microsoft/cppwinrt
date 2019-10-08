#include "pch.h"
#include "TestStaticLibrary1Class.h"
#include "TestStaticLibrary1Class.g.cpp"

namespace winrt::TestApp::implementation
{
    void TestStaticLibrary1Class::Test()
    {
        TestStaticLibrary4Class c{};
        c.Test();
    }
}
