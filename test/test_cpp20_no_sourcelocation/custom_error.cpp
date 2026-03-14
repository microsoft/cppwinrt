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

    static struct {
        uint32_t lineNumber;
        char const* fileName;
        char const* functionName;
        void* returnAddress;
        winrt::hresult result;
    } s_loggerArgs{};

    void __stdcall logger(uint32_t lineNumber, char const* fileName, char const* functionName, void* returnAddress, winrt::hresult const result) noexcept
    {
        s_loggerArgs = {
            .lineNumber = lineNumber,
            .fileName = fileName,
            .functionName = functionName,
            .returnAddress = returnAddress,
            .result = result,
        };
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
    // In C++20 these fields should be filled in by std::source_location.  However, this binary has
    // specified WINRT_NO_SOURCE_LOCATION so that support should be removed.  As a result these should
    // return the same (empty) values as C++17.
    REQUIRE(s_loggerArgs.lineNumber == 0);
    REQUIRE(s_loggerArgs.fileName == nullptr);
    REQUIRE(s_loggerArgs.functionName == nullptr);

    REQUIRE(s_loggerArgs.returnAddress);
    REQUIRE(s_loggerArgs.result == static_cast<int32_t>(0x80000018)); // E_ILLEGAL_DELEGATE_ASSIGNMENT)

    // Remove global handler
    winrt_throw_hresult_handler = nullptr;
    s_loggerCalled = false;
}
