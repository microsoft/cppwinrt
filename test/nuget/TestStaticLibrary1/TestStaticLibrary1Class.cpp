#include "pch.h"
#include "TestStaticLibrary1Class.h"
#include "TestStaticLibrary1Class.g.cpp"

using namespace winrt::TestApp::Library4;

namespace winrt::TestApp::Library1::implementation
{
    void TestStaticLibrary1Class::Test(TestStaticLibrary4Class const& c)
    {
        c.Test();
    }
}
