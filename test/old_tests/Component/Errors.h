#pragma once

#include "Errors.g.h"

namespace winrt::Component::implementation
{
    struct Errors : ErrorsT<Errors>
    {
        Errors() = default;

        void Fail(hstring const& message);
        void Propagate();

        void std_bad_alloc();
        void std_out_of_range();
        void std_invalid_argument();
        void std_exception();
    };
}

namespace winrt::Component::factory_implementation
{
    struct Errors : ErrorsT<Errors, implementation::Errors>
    {
    };
}
