#include "pch.h"
#include <roerrorapi.h>

TEST_CASE("suppress_error_info")
{
    winrt::check_hresult(RoSetErrorReportingFlags(RO_ERROR_REPORTING_SUPPRESSSETERRORINFO));

    // Since the error information is suppressed, the best we can hope for is that C++/WinRT
    // will provide a generic message for the HRESULT.
    REQUIRE(winrt::hresult_error(E_FAIL, L"message").message() == L"Unspecified error");

    winrt::check_hresult(RoSetErrorReportingFlags(RO_ERROR_REPORTING_USESETERRORINFO));

    // The default behavior has been restored, so C++/WinRT can faithfully provide error
    // information as usual.
    REQUIRE(winrt::hresult_error(E_FAIL, L"message").message() == L"message");
}
