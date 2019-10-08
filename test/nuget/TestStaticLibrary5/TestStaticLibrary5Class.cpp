#include "pch.h"
#include "TestStaticLibrary5Class.h"
#if __has_include("TestStaticLibrary5Class.g.cpp")
#include "TestStaticLibrary5Class.g.cpp"
#endif

using namespace winrt;
using namespace winrt::Windows::UI::Xaml::Core::Direct;

namespace winrt::TestRuntimeComponentEmpty::implementation
{
    XamlDirect TestStaticLibrary5Class::Test()
    {
        return XamlDirect::GetDefault();
    }
}
