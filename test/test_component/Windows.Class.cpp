#include "pch.h"
#include "Windows.Class.h"
#include "Windows.Class.g.cpp"

namespace winrt::test_component::Windows::implementation
{
    void Class::StaticMethod(winrt::test_component::Windows::Struct const&)
    {
        throw hresult_not_implemented();
    }
    void Class::Method(winrt::Windows::Foundation::Uri const&)
    {
        throw hresult_not_implemented();
    }
} // namespace winrt::test_component::Windows::implementation
