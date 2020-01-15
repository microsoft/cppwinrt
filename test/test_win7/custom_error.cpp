#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    // Some custom exception type unknown to C++/WinRT
    struct CustomError
    {
    };

    struct Sample : implements<Sample, IStringable>
    {
        hstring ToString()
        {
            // Throw custom exception inside C++/WinRT projection
            throw CustomError();
        }
    };

    // Global handler to translate custom exception
    int32_t __stdcall handler(void* address) noexcept
    {
        REQUIRE(address);

        try
        {
            throw;
        }
        catch (CustomError)
        {
            return 0x80000018; // E_ILLEGAL_DELEGATE_ASSIGNMENT
        }

        REQUIRE(false);
        return 0;
    }
}

TEST_CASE("custom_error")
{
    // Set up global handler
    REQUIRE(!winrt_to_hresult_handler);
    winrt_to_hresult_handler = handler;

    // Validate that handler translated exception
    REQUIRE_THROWS_AS(make<Sample>().ToString(), hresult_illegal_delegate_assignment);

    // Remove global handler
    winrt_to_hresult_handler = nullptr;
}
