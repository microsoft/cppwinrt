#include "pch.h"
#include "catch.hpp"
#include "winrt/Component.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace Component;

template <typename T>
void test_exception(HRESULT const code, std::wstring_view message)
{
    REQUIRE_THROWS_AS(check_hresult(code), T);

    try
    {
        throw T();
    }
    catch (T const& e)
    {
        REQUIRE(code == e.code());
        REQUIRE(message == e.message());
    }

    try
    {
        throw T(hresult_error::from_abi);
    }
    catch (T const& e)
    {
        REQUIRE(code == e.code());
        REQUIRE(message == e.message());
    }

    try
    {
        throw T(L"custom message");
    }
    catch (T const& e)
    {
        REQUIRE(code == e.code());
        REQUIRE(L"custom message" == e.message());
    }

    try
    {
        WINRT_RoOriginateLanguageException(code, get_abi(hstring(L"Correctly matched error info")), nullptr);
        throw T(hresult_error::from_abi);
    }
    catch (T const& e)
    {
        REQUIRE(code == e.code());
        REQUIRE(L"Correctly matched error info" == e.message());
    }

    try
    {
        WINRT_RoOriginateLanguageException(E_FAIL, get_abi(hstring(L"Incorrectly matched error info")), nullptr);
        throw T(hresult_error::from_abi);
    }
    catch (T const& e)
    {
        REQUIRE(code == e.code());
        REQUIRE(message == e.message());
    }
}

#pragma warning(disable: 4702)  // unreachable code
TEST_CASE("Errors")
{
    // These won't throw.
    check_hresult(S_OK);
    check_hresult(S_FALSE);

    // These are our HRESULT mappings.
    test_exception<hresult_access_denied>(E_ACCESSDENIED, L"Access is denied.");
    test_exception<hresult_class_not_available>(CLASS_E_CLASSNOTAVAILABLE, L"ClassFactory cannot supply requested class");
    test_exception<hresult_wrong_thread>(RPC_E_WRONG_THREAD, L"The application called an interface that was marshalled for a different thread.");
    test_exception<hresult_not_implemented>(E_NOTIMPL, L"Not implemented");
    test_exception<hresult_invalid_argument>(E_INVALIDARG, L"The parameter is incorrect.");
    test_exception<hresult_out_of_bounds>(E_BOUNDS, L"The operation attempted to access data outside the valid range");
    test_exception<hresult_no_interface>(E_NOINTERFACE, L"No such interface supported");
    test_exception<hresult_changed_state>(E_CHANGED_STATE, L"A concurrent or interleaved operation changed the state of the object, invalidating this operation.");
    test_exception<hresult_illegal_method_call>(E_ILLEGAL_METHOD_CALL, L"A method was called at an unexpected time.");
    test_exception<hresult_illegal_state_change>(E_ILLEGAL_STATE_CHANGE, L"An illegal state change was requested.");
    test_exception<hresult_illegal_delegate_assignment>(E_ILLEGAL_DELEGATE_ASSIGNMENT, L"A delegate was assigned when not allowed.");
    test_exception<hresult_canceled>(HRESULT_FROM_WIN32(ERROR_CANCELLED), L"The operation was canceled by the user.");

    // Basic validation of init_apartment (from an MTA).
    init_apartment();

    try
    {
        init_apartment(apartment_type::single_threaded);
        FAIL(L"Previous line should throw");
    }
    catch (hresult_error const & e)
    {
        REQUIRE(e.code() == RPC_E_CHANGED_MODE);
    }

    // An error originates in a component and is consumed within C++/WinRT.
    try
    {
        Uri uri(L"BAD");
        FAIL(L"Previous line should throw");
    }
    catch (hresult_invalid_argument const & e) // catching specific exception type
    {
        REQUIRE(L"BAD is not a valid absolute URI." == e.message());
    }

    // The same with catching base exception type.
    try
    {
        Uri uri(L"BAD");
        FAIL(L"Previous line should throw");
    }
    catch (hresult_error const& e)
    {
        REQUIRE(E_INVALIDARG == e.code());
        REQUIRE(L"BAD is not a valid absolute URI." == e.message());
    }

    // The same but flying all the way through the projection through a WinRT component written in C++/WinRT.
    try
    {
        Errors errors;
        errors.Propagate();
        FAIL(L"Previous line should throw");
    }
    catch (hresult_invalid_argument const & e) // catching specific exception type
    {
        REQUIRE(L"BAD is not a valid absolute URI." == e.message());
    }

    // An error originating in the C++/WinRT component.
    try
    {
        Errors errors;
        errors.Fail(L"Failure message");
        FAIL(L"Previous line should throw");
    }
    catch (hresult_not_implemented const& e)
    {
        REQUIRE(L"Failure message" == e.message());
    }

    // Support for C++ standard library exceptions.

    {
        Errors errors;
        REQUIRE_THROWS_AS(errors.std_bad_alloc(), std::bad_alloc);
    }

    try
    {
        Errors errors;
        errors.std_out_of_range();
        FAIL(L"Previous line should throw");
    }
    catch (hresult_out_of_bounds const& e)
    {
        REQUIRE(e.message() == L"std_out_of_range");
    }

    try
    {
        Errors errors;
        errors.std_invalid_argument();
        FAIL(L"Previous line should throw");
    }
    catch (hresult_invalid_argument const& e)
    {
        REQUIRE(e.message() == L"std_invalid_argument");
    }

    try
    {
        Errors errors;
        errors.std_exception();
        FAIL(L"Previous line should throw");
    }
    catch (hresult_error const& e)
    {
        REQUIRE(e.code() == E_FAIL);
        REQUIRE(e.message() == L"std_exception");
    }

    SetLastError(ERROR_CANCELLED);
    REQUIRE_THROWS_AS(throw_last_error(), hresult_canceled);

    SetLastError(ERROR_CANCELLED);
    REQUIRE_THROWS_AS(check_bool(false), hresult_canceled);

    SetLastError(ERROR_CANCELLED);
    REQUIRE_THROWS_AS(check_bool(static_cast<BOOLEAN>(false)), hresult_canceled);

    SetLastError(ERROR_CANCELLED);
    REQUIRE_THROWS_AS(check_bool(static_cast<BOOL>(false)), hresult_canceled);

    // Support for Win32 errors.
    check_win32(ERROR_SUCCESS);
    REQUIRE_THROWS_AS(check_win32(ERROR_CANCELLED), hresult_canceled);

    try
    {
        check_win32(ERROR_NO_NETWORK);
        FAIL(L"Previous line should throw");
    }
    catch (hresult_error const& e)
    {
        REQUIRE(e.code() == HRESULT_FROM_WIN32(ERROR_NO_NETWORK));
    }

    // Support for NT errors.
    check_nt(0);

    try
    {
        check_nt(STATUS_STACK_OVERFLOW);
        FAIL(L"Previous line should throw");
    }
    catch (hresult_error const& e)
    {
        REQUIRE(e.code() == HRESULT_FROM_NT(STATUS_STACK_OVERFLOW));
    }

    // Make sure trimming works.
    hresult_error e(E_FAIL, L":) is \u263A \n \t ");
    REQUIRE(e.message() == L":) is \u263A");

    // Make sure delegates propagate correctly.

    {
        EventHandler<int> d = [](IInspectable const&, int)
        {
            throw hresult_no_interface();
        };

        REQUIRE_THROWS_AS(d(nullptr, 2), hresult_no_interface);
    }

    {
        TypedEventHandler<int, int> d = [](int, int)
        {
            throw hresult_no_interface();
        };

        REQUIRE_THROWS_AS(d(1,2), hresult_no_interface);
    }

    {
        ReturnDelegate d = []()-> hstring
        {
            throw hresult_no_interface();
        };

        REQUIRE_THROWS_AS(d(), hresult_no_interface);
    }
}
