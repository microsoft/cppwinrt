#include "pch.h"
#include "Simple.h"
#include "Simple.g.cpp"

// Note: Remove this static_assert after copying these generated source files to your project.
// This assertion exists to avoid compiling these generated source files directly.
static_assert(false, "Do not compile generated C++/WinRT source files directly");

namespace winrt::test_component::implementation
{
    void Simple::Method()
    {
        throw hresult_not_implemented();
    }
    Windows::Foundation::IReference<int32_t> Simple::Reference(Windows::Foundation::DateTime const& value)
    {
        throw hresult_not_implemented();
    }
    Windows::Foundation::IAsyncOperation<int32_t> Simple::Operation(Windows::Foundation::DateTime value)
    {
        throw hresult_not_implemented();
    }
    Windows::Foundation::IAsyncAction Simple::Action(Windows::Foundation::DateTime value)
    {
        throw hresult_not_implemented();
    }
    Windows::Foundation::IInspectable Simple::Object(Windows::Foundation::DateTime const& value)
    {
        throw hresult_not_implemented();
    }
}
