#include "pch.h"
#include "Windows.Class.h"
#include "Windows.Class.g.cpp"

namespace winrt::test_component::Windows::implementation
{
    void Class::StaticMethod()
    {
        throw hresult_not_implemented();
    }
    void Class::Method()
    {
        throw hresult_not_implemented();
    }
}
