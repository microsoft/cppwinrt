#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    static bool s_loggerCalled = false;

    void __stdcall logger(uint32_t lineNumber, char const* fileName, char const* functionName, void* returnAddress, winrt::hresult const result) noexcept
    {
        lineNumber; fileName; functionName;
        REQUIRE(returnAddress);
        REQUIRE(result == 0x80000018); // E_ILLEGAL_DELEGATE_ASSIGNMENT)
        s_loggerCalled = true;
    }
}

TEST_CASE("custom_error_logger")
{
    // Set up global handler
    REQUIRE(!s_loggerCalled);
    REQUIRE(!winrt_throw_hresult_handler);
    winrt_throw_hresult_handler = logger;

    // Validate that handler translated exception
    REQUIRE_THROWS_AS(check_hresult(0x80000018), hresult_illegal_delegate_assignment);
    REQUIRE(s_loggerCalled);

    // Remove global handler
    winrt_throw_hresult_handler = nullptr;
    s_loggerCalled = false;
}
