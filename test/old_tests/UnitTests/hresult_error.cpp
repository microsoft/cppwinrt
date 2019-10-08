#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows::Foundation;

TEST_CASE("hresult,S_OK")
{
    // This won't throw

    check_hresult(S_OK);
}

TEST_CASE("hresult,S_FALSE")
{
    // This won't throw (unless you define WINRT_STRICT_HRESULT)

#ifndef WINRT_STRICT_HRESULT
    check_hresult(S_FALSE);
#else
    try
    {
        check_hresult(S_FALSE);
        FAIL(L"Previous line should throw");
    }
    catch (hresult_error const & e)
    {
        REQUIRE(S_FALSE == e.code());
    }
#endif
}

TEST_CASE("hresult,init_apartment")
{
    init_apartment();
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
}

TEST_CASE("hresult,restricted,consuming")
{
    // An error originates in a component and is consumed within C++/WinRT

    try
    {
        Uri uri(L"BAD");
        FAIL(L"Previous line should throw");
    }
    catch (hresult_invalid_argument const & e) // catching specific exception type
    {
        REQUIRE(E_INVALIDARG == e.code());
        REQUIRE(L"BAD is not a valid absolute URI." == e.message());
    }

    try
    {
        Uri uri(L"BAD");
        FAIL(L"Previous line should throw");
    }
    catch (hresult_error const & e) // catching generic exception type
    {
        REQUIRE(E_INVALIDARG == e.code());
        REQUIRE(L"BAD is not a valid absolute URI." == e.message());
    }
}

TEST_CASE("hresult,restricted,producing")
{
    // An original error raised within C++/WinRT

    try
    {
        throw hresult_invalid_argument(); // default restricted error info message
    }
    catch (hresult_invalid_argument const & e)
    {
        REQUIRE(E_INVALIDARG == e.code());
        REQUIRE(L"The parameter is incorrect." == e.message());
    }

    try
    {
        throw hresult_invalid_argument(hresult_error::from_abi); // no restricted error info at all
    }
    catch (hresult_invalid_argument const & e)
    {
        REQUIRE(E_INVALIDARG == e.code());
        REQUIRE(L"The parameter is incorrect." == e.message());
    }

    try
    {
        throw hresult_invalid_argument(L"Better luck next time!"); // custom message for restricted error info message
    }
    catch (hresult_invalid_argument const & e)
    {
        REQUIRE(E_INVALIDARG == e.code());
        REQUIRE(L"Better luck next time!" == e.message());
    }

    try
    {
        WINRT_RoOriginateLanguageException(E_INVALIDARG, get_abi(hstring(L"Correctly matched error info")), nullptr);
        throw hresult_invalid_argument(hresult_error::from_abi); // no restricted error info at all
    }
    catch (hresult_invalid_argument const & e)
    {
        REQUIRE(E_INVALIDARG == e.code());
        REQUIRE(L"Correctly matched error info" == e.message());
    }

    try
    {
        WINRT_RoOriginateLanguageException(E_FAIL, get_abi(hstring(L"Incorrectly matched error info")), nullptr);
        throw hresult_invalid_argument(hresult_error::from_abi); // no restricted error info at all
    }
    catch (hresult_invalid_argument const & e)
    {
        REQUIRE(E_INVALIDARG == e.code());
        REQUIRE(L"The parameter is incorrect." == e.message());
    }
}

struct SamplePropagate : implements<SamplePropagate, IStringable>
{
    hstring ToString()
    {
        Uri uri(L"BAD");
        return uri.ToString();
    }
};

TEST_CASE("hresult,propagate,implements")
{
    // An error raised within an implementation (component) that crosses the ABI and consumed within C++/WinRT.
    // This is the same as the URI case above, but implemented purely within the projection.

    try
    {
        IStringable value = make<SamplePropagate>();
        value.ToString();
    }
    catch (hresult_invalid_argument const & e)
    {
        REQUIRE(E_INVALIDARG == e.code());
        REQUIRE(L"BAD is not a valid absolute URI." == e.message());
    }
}

struct SampleOriginate : implements<SampleOriginate, IStringable>
{
    hstring ToString()
    {
        throw hresult_access_denied(L"Not so fast!");
    }
};

TEST_CASE("hresult,originate,implements")
{
    // An error raised within an implementation (component) that crosses the ABI and consumed within C++/WinRT.
    // In this case we're not merely propagating an error. We're actually raising an original error originating
    // in this implementation.

    try
    {
        IStringable value = make<SampleOriginate>();
        value.ToString();
    }
    catch (hresult_access_denied const & e)
    {
        REQUIRE(E_ACCESSDENIED == e.code());
        REQUIRE(L"Not so fast!" == e.message());
    }
}

TEST_CASE("hresult_access_denied")
{
    REQUIRE_THROWS_AS(check_hresult(E_ACCESSDENIED), hresult_access_denied);

    try
    {
        throw hresult_access_denied(); // default restricted error info message
    }
    catch (hresult_access_denied const & e)
    {
        REQUIRE(E_ACCESSDENIED == e.code());
        REQUIRE(L"Access is denied." == e.message());
    }

    try
    {
        throw hresult_access_denied(hresult_error::from_abi); // no restricted error info at all
    }
    catch (hresult_access_denied const & e)
    {
        REQUIRE(E_ACCESSDENIED == e.code());
        REQUIRE(L"Access is denied." == e.message());
    }

    try
    {
        throw hresult_access_denied(L"test message"); // custom message for restricted error info message
    }
    catch (hresult_access_denied const & e)
    {
        REQUIRE(E_ACCESSDENIED == e.code());
        REQUIRE(L"test message" == e.message());
    }
}

TEST_CASE("hresult_wrong_thread")
{
    REQUIRE_THROWS_AS(check_hresult(RPC_E_WRONG_THREAD), hresult_wrong_thread);

    try
    {
        throw hresult_wrong_thread(); // default restricted error info message
    }
    catch (hresult_wrong_thread const & e)
    {
        REQUIRE(RPC_E_WRONG_THREAD == e.code());
        REQUIRE(L"The application called an interface that was marshalled for a different thread." == e.message());
    }

    try
    {
        throw hresult_wrong_thread(hresult_error::from_abi); // no restricted error info at all
    }
    catch (hresult_wrong_thread const & e)
    {
        REQUIRE(RPC_E_WRONG_THREAD == e.code());
        REQUIRE(L"The application called an interface that was marshalled for a different thread." == e.message());
    }

    try
    {
        throw hresult_wrong_thread(L"test message"); // custom message for restricted error info message
    }
    catch (hresult_wrong_thread const & e)
    {
        REQUIRE(RPC_E_WRONG_THREAD == e.code());
        REQUIRE(L"test message" == e.message());
    }
}

TEST_CASE("hresult_not_implemented")
{
    REQUIRE_THROWS_AS(check_hresult(E_NOTIMPL), hresult_not_implemented);

    try
    {
        throw hresult_not_implemented(); // default restricted error info message
    }
    catch (hresult_not_implemented const & e)
    {
        REQUIRE(E_NOTIMPL == e.code());
        REQUIRE(L"Not implemented" == e.message());
    }

    try
    {
        throw hresult_not_implemented(hresult_error::from_abi); // no restricted error info at all
    }
    catch (hresult_not_implemented const & e)
    {
        REQUIRE(E_NOTIMPL == e.code());
        REQUIRE(L"Not implemented" == e.message());
    }

    try
    {
        throw hresult_not_implemented(L"test message"); // custom message for restricted error info message
    }
    catch (hresult_not_implemented const & e)
    {
        REQUIRE(E_NOTIMPL == e.code());
        REQUIRE(L"test message" == e.message());
    }
}

TEST_CASE("hresult_invalid_argument")
{
    REQUIRE_THROWS_AS(check_hresult(E_INVALIDARG), hresult_invalid_argument);

    try
    {
        throw hresult_invalid_argument(); // default restricted error info message
    }
    catch (hresult_invalid_argument const & e)
    {
        REQUIRE(E_INVALIDARG == e.code());
        REQUIRE(L"The parameter is incorrect." == e.message());
    }

    try
    {
        throw hresult_invalid_argument(hresult_error::from_abi); // no restricted error info at all
    }
    catch (hresult_invalid_argument const & e)
    {
        REQUIRE(E_INVALIDARG == e.code());
        REQUIRE(L"The parameter is incorrect." == e.message());
    }

    try
    {
        throw hresult_invalid_argument(L"test message"); // custom message for restricted error info message
    }
    catch (hresult_invalid_argument const & e)
    {
        REQUIRE(E_INVALIDARG == e.code());
        REQUIRE(L"test message" == e.message());
    }
}

TEST_CASE("hresult_out_of_bounds")
{
    REQUIRE_THROWS_AS(check_hresult(E_BOUNDS), hresult_out_of_bounds);

    try
    {
        throw hresult_out_of_bounds(); // default restricted error info message
    }
    catch (hresult_out_of_bounds const & e)
    {
        REQUIRE(E_BOUNDS == e.code());
        REQUIRE(L"The operation attempted to access data outside the valid range" == e.message());
    }

    try
    {
        throw hresult_out_of_bounds(hresult_error::from_abi); // no restricted error info at all
    }
    catch (hresult_out_of_bounds const & e)
    {
        REQUIRE(E_BOUNDS == e.code());
        REQUIRE(L"The operation attempted to access data outside the valid range" == e.message());
    }

    try
    {
        throw hresult_out_of_bounds(L"test message"); // custom message for restricted error info message
    }
    catch (hresult_out_of_bounds const & e)
    {
        REQUIRE(E_BOUNDS == e.code());
        REQUIRE(L"test message" == e.message());
    }
}

TEST_CASE("hresult_no_interface")
{
    REQUIRE_THROWS_AS(check_hresult(E_NOINTERFACE), hresult_no_interface);

    try
    {
        throw hresult_no_interface(); // default restricted error info message
    }
    catch (hresult_no_interface const & e)
    {
        REQUIRE(E_NOINTERFACE == e.code());
        REQUIRE(L"No such interface supported" == e.message());
    }

    try
    {
        throw hresult_no_interface(hresult_error::from_abi); // no restricted error info at all
    }
    catch (hresult_no_interface const & e)
    {
        REQUIRE(E_NOINTERFACE == e.code());
        REQUIRE(L"No such interface supported" == e.message());
    }

    try
    {
        throw hresult_no_interface(L"test message"); // custom message for restricted error info message
    }
    catch (hresult_no_interface const & e)
    {
        REQUIRE(E_NOINTERFACE == e.code());
        REQUIRE(L"test message" == e.message());
    }
}

TEST_CASE("hresult_class_not_available")
{
    REQUIRE_THROWS_AS(check_hresult(CLASS_E_CLASSNOTAVAILABLE), hresult_class_not_available);

    try
    {
        throw hresult_class_not_available(); // default restricted error info message
    }
    catch (hresult_class_not_available const & e)
    {
        REQUIRE(CLASS_E_CLASSNOTAVAILABLE == e.code());
        REQUIRE(L"ClassFactory cannot supply requested class" == e.message());
    }

    try
    {
        throw hresult_class_not_available(hresult_error::from_abi); // no restricted error info at all
    }
    catch (hresult_class_not_available const & e)
    {
        REQUIRE(CLASS_E_CLASSNOTAVAILABLE == e.code());
        REQUIRE(L"ClassFactory cannot supply requested class" == e.message());
    }

    try
    {
        throw hresult_class_not_available(L"test message"); // custom message for restricted error info message
    }
    catch (hresult_class_not_available const & e)
    {
        REQUIRE(CLASS_E_CLASSNOTAVAILABLE == e.code());
        REQUIRE(L"test message" == e.message());
    }
}

TEST_CASE("hresult, bad_alloc")
{
    try
    {
        throw std::bad_alloc();
    }
    catch (...)
    {
        REQUIRE(E_OUTOFMEMORY == to_hresult());
    }
}

TEST_CASE("hresult, out_of_range")
{
    try
    {
        throw std::out_of_range("");
    }
    catch (...)
    {
        REQUIRE(E_BOUNDS == to_hresult());
    }
}

TEST_CASE("hresult, invalid_argument")
{
    try
    {
        throw std::invalid_argument("");
    }
    catch (...)
    {
        REQUIRE(E_INVALIDARG == to_hresult());
    }
}

TEST_CASE("hresult, exception")
{
    try
    {
        throw std::exception();
    }
    catch (...)
    {
        REQUIRE(E_FAIL == to_hresult());
    }
}

#pragma warning(disable: 4702)  // unreachable code
TEST_CASE("hresult, throw_last_error")
{
    SetLastError(ERROR_CANCELLED);
    REQUIRE_THROWS_AS(throw_last_error(), hresult_canceled);
}

TEST_CASE("hresult, trim_hresult_message")
{
    hresult_error e(E_FAIL, L":) is \u263A \n \t ");

    REQUIRE(e.message() == L":) is \u263A");
}

TEST_CASE("hresult, std abi support")
{
    try
    {
        EventHandler<int> handler = [](auto&& ...)
        {
            throw std::exception("std__exception");
        };

        handler(nullptr, 0);
        FAIL(L"Previous line should throw");
    }
    catch (hresult_error const& e)
    {
        REQUIRE(E_FAIL == e.code());
        REQUIRE(L"std__exception" == e.message());
    }

    try
    {
        EventHandler<int> handler = [](auto&& ...)
        {
            throw std::bad_alloc();
        };

        handler(nullptr, 0);
        FAIL(L"Previous line should throw");
    }
    catch (std::bad_alloc const&)
    {
    }

    try
    {
        EventHandler<int> handler = [](auto&& ...)
        {
            throw std::out_of_range("std__out_of_range");
        };

        handler(nullptr, 0);
        FAIL(L"Previous line should throw");
    }
    catch (hresult_out_of_bounds const& e)
    {
        REQUIRE(E_BOUNDS == e.code());
        REQUIRE(L"std__out_of_range" == e.message());
    }

    try
    {
        EventHandler<int> handler = [](auto&& ...)
        {
            throw std::invalid_argument("std__invalid_argument");
        };

        handler(nullptr, 0);
        FAIL(L"Previous line should throw");
    }
    catch (hresult_invalid_argument const& e)
    {
        REQUIRE(E_INVALIDARG == e.code());
        REQUIRE(L"std__invalid_argument" == e.message());
    }
}

