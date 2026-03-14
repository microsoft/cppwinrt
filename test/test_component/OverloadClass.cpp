#include "pch.h"
#include "OverloadClass.h"
#include "OverloadClass.g.cpp"

namespace winrt::test_component::implementation
{
    void OverloadClass::Overload()
    {
        throw hresult_not_implemented();
    }
    void OverloadClass::Overload(int /*a*/)
    {
        throw hresult_not_implemented();
    }
    void OverloadClass::Overload(int /*a*/, int /*b*/)
    {
        throw hresult_not_implemented();
    }
    void OverloadClass::Overload(int /*a*/, int /*b*/, int /*c*/)
    {
        throw hresult_not_implemented();
    }
}
