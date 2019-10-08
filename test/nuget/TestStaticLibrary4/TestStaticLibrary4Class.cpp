#include "pch.h"
#include "TestStaticLibrary4Class.h"
#if __has_include("TestStaticLibrary4Class.g.cpp")
#include "TestStaticLibrary4Class.g.cpp"
#endif

using namespace winrt;
using namespace winrt::Windows::UI::Xaml::Core::Direct;

namespace winrt::TestApp::implementation
{
    XamlDirect TestStaticLibrary4Class::Test()
    {
        return XamlDirect::GetDefault();
    }
}
