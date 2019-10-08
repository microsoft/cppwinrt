#include "pch.h"
#include "winrt/Windows.Data.Xml.Dom.h"

using namespace winrt;

namespace
{
    HRESULT winrt_error_info() noexcept
    {
        return hresult_invalid_argument(L"winrt_error_info").to_abi();
    }

    HRESULT com_error_info() noexcept
    {
        com_ptr<ICreateErrorInfo> creator;
        CreateErrorInfo(creator.put());
        creator->SetDescription(const_cast<wchar_t*>(L"com_error_info"));

        SetErrorInfo(0, creator.as<IErrorInfo>().get());
        return E_INVALIDARG;
    }

    HRESULT no_error_info() noexcept
    {
        // This just makes sure there's no error info connected to the thread.
        com_ptr<IErrorInfo> info;
        GetErrorInfo(0, info.put());

        return E_INVALIDARG;
    }
}

TEST_CASE("error_info")
{
    try
    {
        check_hresult(winrt_error_info());
        FAIL(L"Previous line should throw");
    }
    catch (hresult_invalid_argument const& e)
    {
        REQUIRE(e.message() == L"winrt_error_info");
    }

    try
    {
        check_hresult(com_error_info());
        FAIL(L"Previous line should throw");
    }
    catch (hresult_invalid_argument const& e)
    {
        REQUIRE(e.message() == L"com_error_info");
    }

    try
    {
        check_hresult(no_error_info());
        FAIL(L"Previous line should throw");
    }
    catch (hresult_invalid_argument const& e)
    {
        REQUIRE(e.message() == L"The parameter is incorrect.");
    }

    try
    {
        // This API reports using WinRT error info.
        Windows::Foundation::Uri(L"bad");
        FAIL(L"Previous line should throw");
    }
    catch (hresult_invalid_argument const& e)
    {
        REQUIRE(e.message() == L"bad is not a valid absolute URI.");
    }

    try
    {
        // This API reports using COM error info.
        Windows::Data::Xml::Dom::XmlDocument doc;
        doc.LoadXml(L"bad");
        FAIL(L"Previous line should throw");
    }
    catch (hresult_error const& e)
    {
        REQUIRE(e.message() == L"Invalid at the top level of the document.");
    }
}
