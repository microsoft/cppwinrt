#include "pch.h"
#include "Simple.h"
#include "Simple.g.cpp"

namespace winrt::test_component::implementation
{
    void Simple::Method()
    {
        throw hresult_not_implemented();
    }
    Windows::Foundation::IReference<int32_t> Simple::Reference(Windows::Foundation::DateTime const&)
    {
        throw hresult_not_implemented();
    }
    Windows::Foundation::IAsyncOperation<int32_t> Simple::Operation(Windows::Foundation::DateTime)
    {
        throw hresult_not_implemented();
    }
    Windows::Foundation::IAsyncAction Simple::Action(Windows::Foundation::DateTime)
    {
        throw hresult_not_implemented();
    }
    Windows::Foundation::IInspectable Simple::Object(Windows::Foundation::DateTime const&)
    {
        throw hresult_not_implemented();
    }
}
