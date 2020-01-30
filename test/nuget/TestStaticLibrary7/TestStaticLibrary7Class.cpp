#include "pch.h"
#include "TestStaticLibrary7Class.h"
#include "TestStaticLibrary7Class.g.cpp"

using namespace winrt;
using namespace winrt::Windows::UI::Xaml::Core::Direct;

namespace winrt::TestRuntimeComponentCXLibrary::implementation
{
    XamlDirect TestStaticLibrary7Class::Test()
    {
        return XamlDirect::GetDefault();
    }
}
