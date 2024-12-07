#include "pch.h"

using namespace winrt;
using namespace Windows::Foundation;

namespace
{
    // Some custom exception type unknown to C++/WinRT
    struct CustomError
    {};

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

    // Global handler to translate custom exception to message
    hstring __stdcall message_handler(void* address)
    {
        REQUIRE(address);

        try
        {
            throw;
        }
        catch (CustomError)
        {
            return L"a custom error";
        }

        REQUIRE(false);
        return {};
    }

    static bool s_loggerCalled = false;

    static struct
    {
        uint32_t lineNumber;
        char const* fileName;
        char const* functionName;
        void* returnAddress;
        winrt::hresult result;
    } s_loggerArgs{};

    void __stdcall logger(
        uint32_t lineNumber, char const* fileName, char const* functionName, void* returnAddress, winrt::hresult const result) noexcept
    {
        s_loggerArgs = {
            /*.lineNumber =*/lineNumber,
            /*.fileName =*/fileName,
            /*.functionName =*/functionName,
            /*.returnAddress =*/returnAddress,
            /*.result =*/result,
        };
        s_loggerCalled = true;
    }

} // namespace

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

TEST_CASE("custom_error_logger")
{
    // Set up global handler
    REQUIRE(!s_loggerCalled);
    REQUIRE(!winrt_throw_hresult_handler);
    winrt_throw_hresult_handler = logger;

    // Validate that handler translated exception
    REQUIRE_THROWS_AS(check_hresult(0x80000018), hresult_illegal_delegate_assignment);
    REQUIRE(s_loggerCalled);
#ifndef __cpp_lib_source_location
    // In C++17 these fields cannot be filled in so they are expected to be empty.
    REQUIRE(s_loggerArgs.lineNumber == 0);
    REQUIRE(s_loggerArgs.fileName == nullptr);
    REQUIRE(s_loggerArgs.functionName == nullptr);
#else
    // GCC/Clang can only compile these tests in C++20 mode. If source_location
    // is available these fields will be filled in. Don't do any checks here
    // because these are already tested in `test_cpp20/custom_error.cpp`.
#endif

    REQUIRE(s_loggerArgs.returnAddress);
    REQUIRE(s_loggerArgs.result == static_cast<int32_t>(0x80000018)); // E_ILLEGAL_DELEGATE_ASSIGNMENT)

    // Remove global handler
    winrt_throw_hresult_handler = nullptr;
    s_loggerCalled = false;
}

TEST_CASE("custom_error_message")
{
    // Set up global handler
    REQUIRE(!winrt_to_message_handler);
    winrt_to_message_handler = message_handler;

    try
    {
        throw CustomError();
    }
    catch (...)
    {
        REQUIRE(to_message() == L"a custom error");
    }

    // Remove global handler
    winrt_to_message_handler = nullptr;
}
