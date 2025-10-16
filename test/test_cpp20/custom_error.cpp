#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    static bool s_loggerCalled = false;

    void FailOnLine15()
    {
        // Validate that handler translated exception
#line 15 // Force next line to be reported as line number 15
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

#if defined(_LIBCPP_VERSION) && _LIBCPP_VERSION < 170000
// <source_location> not available in libc++ before LLVM 16
TEST_CASE("custom_error_logger_on_throw", "[!shouldfail]")
#else
TEST_CASE("custom_error_logger_on_throw")
#endif
{
    // Set up global handler
    REQUIRE(!s_loggerCalled);
    REQUIRE(!winrt_throw_hresult_handler);
    winrt_throw_hresult_handler = logger;

    FailOnLine15();
    REQUIRE(s_loggerCalled);
    // In C++20 these fields should be filled in by std::source_location
    REQUIRE(s_loggerArgs.lineNumber == 15);
    const auto fileNameSv = std::string_view(s_loggerArgs.fileName);
    REQUIRE(!fileNameSv.empty());
    REQUIRE(fileNameSv.find("custom_error.cpp") != std::string::npos);
#ifdef _DEBUG
    const auto functionNameSv = std::string_view(s_loggerArgs.functionName);
    REQUIRE(!functionNameSv.empty());
    // Every compiler has a slightly different naming approach for this function, and even the same
    // compiler can change its mind over time.  Instead of matching the entire function name just
    // match against the part we care about.
    REQUIRE((functionNameSv.find("FailOnLine15") != std::string_view::npos));
#else
    REQUIRE(s_loggerArgs.functionName == nullptr);
#endif // _DEBUG

    REQUIRE(s_loggerArgs.returnAddress);
    REQUIRE(s_loggerArgs.result == static_cast<int32_t>(0x80000018)); // E_ILLEGAL_DELEGATE_ASSIGNMENT)

    // Remove global handler
    winrt_throw_hresult_handler = nullptr;
    s_loggerCalled = false;
}
template<typename... Args>
void HresultOnLine80(Args... args)
{
    // Validate that handler translated on creating an HRESULT
#line 80 // Force next line to be reported as line number 80
    winrt::hresult_canceled(std::forward<Args>(args)...);
}

#if defined(_LIBCPP_VERSION) && _LIBCPP_VERSION < 170000
// <source_location> not available in libc++ before LLVM 16
TEST_CASE("custom_error_logger_on_originate", "[!shouldfail]")
#else
TEST_CASE("custom_error_logger_on_originate")
#endif
{
    // Set up global handler
    REQUIRE(!s_loggerCalled);
    REQUIRE(!winrt_throw_hresult_handler);
    winrt_throw_hresult_handler = logger;

    HresultOnLine80();
    REQUIRE(s_loggerCalled);
    // In C++20 these fields should be filled in by std::source_location
    REQUIRE(s_loggerArgs.lineNumber == 80);
    const auto fileNameSv = std::string_view(s_loggerArgs.fileName);
    REQUIRE(!fileNameSv.empty());
    REQUIRE(fileNameSv.find("custom_error.cpp") != std::string::npos);
#ifdef _DEBUG
    const auto functionNameSv = std::string_view(s_loggerArgs.functionName);
    REQUIRE(!functionNameSv.empty());
    // Every compiler has a slightly different naming approach for this function, and even the same
    // compiler can change its mind over time.  Instead of matching the entire function name just
    // match against the part we care about.
    REQUIRE((functionNameSv.find("HresultOnLine80") != std::string_view::npos));
#else
    REQUIRE(s_loggerArgs.functionName == nullptr);
#endif // _DEBUG

    REQUIRE(s_loggerArgs.returnAddress);
    REQUIRE(s_loggerArgs.result == HRESULT_FROM_WIN32(ERROR_CANCELLED)); // E_ILLEGAL_DELEGATE_ASSIGNMENT)

    s_loggerCalled = false;
    s_loggerArgs.lineNumber = 0;
    // verify HRESULT with a custom message
    HresultOnLine80(L"with custom message");
    REQUIRE(s_loggerCalled);
    REQUIRE(s_loggerArgs.lineNumber == 80);

    s_loggerCalled = false;
    s_loggerArgs.lineNumber = 0;
    // verify that no_originate does _not_ call the logger.
    HresultOnLine80(winrt::hresult_error::no_originate);
    REQUIRE(!s_loggerCalled);
    REQUIRE(s_loggerArgs.lineNumber == 0);

    // Remove global handler
    winrt_throw_hresult_handler = nullptr;
    s_loggerCalled = false;
}
