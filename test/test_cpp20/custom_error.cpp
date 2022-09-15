#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    static bool s_loggerCalled = false;

    // Note that we are checking that the source line number matches expectations.  If lines above this are changed
    // then this value needs to change as well.
    void FailOnLine15()
    {
        // Validate that handler translated exception
        REQUIRE_THROWS_AS(check_hresult(0x80000018), hresult_illegal_delegate_assignment);
    }

    void __stdcall logger(uint32_t lineNumber, char const* fileName, char const* functionName, void* returnAddress, winrt::hresult const result) noexcept
    {
        // In C++20 these fields should be filled in by std::source_location
        REQUIRE(lineNumber == 15);
        const auto fileNameSv = std::string_view(fileName);
        REQUIRE(!fileNameSv.empty());
        REQUIRE(fileNameSv.find("custom_error.cpp") != std::string::npos);
        const auto functionNameSv = std::string_view(functionName);
        REQUIRE(!functionNameSv.empty());
        REQUIRE(functionNameSv == "FailOnLine15");

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

    FailOnLine15();
    REQUIRE(s_loggerCalled);

    // Remove global handler
    winrt_throw_hresult_handler = nullptr;
    s_loggerCalled = false;
}
