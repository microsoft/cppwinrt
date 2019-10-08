#include "pch.h"
#include "TestStaticLibrary6Class.h"
#if __has_include("SubNamespace1.TestStaticLibrary6Class.g.cpp")
#include "SubNamespace1.TestStaticLibrary6Class.g.cpp"
#endif

using namespace winrt;
using namespace winrt::Windows::UI::Xaml::Core::Direct;

namespace winrt::TestRuntimeComponentEmpty::SubNamespace1::implementation
{
    XamlDirect TestStaticLibrary6Class::Test()
    {
        return XamlDirect::GetDefault();
    }
}
