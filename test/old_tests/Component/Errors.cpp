#include "pch.h"
#include "Errors.h"

namespace winrt::Component::implementation
{
    using namespace Windows::Foundation;

    void Errors::Fail(hstring const& message)
    {
        throw hresult_not_implemented(message);
    }

    void Errors::Propagate()
    {
        Uri(L"BAD");
    }

    void Errors::std_bad_alloc()
    {
        throw std::bad_alloc();
    }

    void Errors::std_out_of_range()
    {
        throw std::out_of_range("std_out_of_range");
    }

    void Errors::std_invalid_argument()
    {
        throw std::invalid_argument("std_invalid_argument");
    }

    void Errors::std_exception()
    {
        // Some unsupported exception that is still rooted in std::exception.
        throw std::range_error("std_exception");
    }
}
