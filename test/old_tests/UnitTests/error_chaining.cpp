#include "pch.h"
#include "catch.hpp"

using namespace winrt;
using namespace Windows::Foundation;

//namespace
//{
//    struct ErrorInfo : implements<ErrorInfo, IStringable>
//    {
//        ErrorInfo(std::string_view const& file, uint32_t const line) :
//            m_string(file)
//        {
//            m_string += " (" + std::to_string(line) + ")";
//        }
//
//        hstring ToString()
//        {
//            return impl::to_hstring(m_string);
//        }
//
//        std::string m_string;
//    };
//}
//
//TEST_CASE("error_chaining")
//{
//    try
//    {
//        IStringable object = make<ErrorInfo>(__FILE__, __LINE__);
//
//        hresult_error(E_FAIL, L"message", get_abi(object)).to_abi(); // Simulate returning error across ABI
//        hresult_error(E_FAIL, hresult_error::from_abi).to_abi(); // From ABI and back to ABI
//        hresult_error(E_FAIL, hresult_error::from_abi).to_abi(); // One more time...
//        throw hresult_error(E_FAIL, hresult_error::from_abi);
//    }
//    catch (hresult_error const& e)
//    {
//        REQUIRE(e.message() == L"message");
//        REQUIRE(e.code() == E_FAIL);
//
//        com_ptr<ILanguageExceptionErrorInfo2> info2 = e.info().as<ILanguageExceptionErrorInfo2>();
//
//        {
//            com_ptr<::IUnknown> object_unknown;
//            check_hresult(info2->GetLanguageException(object_unknown.put()));
//
//            IStringable object = object_unknown.as<IStringable>();
//            REQUIRE(object.ToString() == L"error_chaining.cpp (30)");
//        }
//
//        int links = 0;
//
//        com_ptr<ILanguageExceptionErrorInfo2> iterator;
//        check_hresult(info2->GetPropagationContextHead(iterator.put()));
//
//        while (iterator != nullptr)
//        {
//            ++links;
//
//            com_ptr<IRestrictedErrorInfo> info = iterator.as<IRestrictedErrorInfo>();
//
//            HRESULT hresult{};
//            impl::handle<impl::bstr_traits> fallback;
//            impl::handle<impl::bstr_traits> description;
//            impl::handle<impl::bstr_traits> unused;
//            check_hresult(info->GetErrorDetails(fallback.put(), &hresult, description.put(), unused.put()));
//            REQUIRE(hresult == E_FAIL);
//            REQUIRE(0 == wcscmp(description.get(), L"message"));
//
//            com_ptr<::IUnknown> object_unknown;
//            check_hresult(iterator->GetLanguageException(object_unknown.put()));
//            REQUIRE(object_unknown == nullptr); // object lives on original error info
//
//            com_ptr<ILanguageExceptionErrorInfo2> previous;
//            iterator->GetPreviousLanguageExceptionErrorInfo(previous.put());
//            iterator = previous;
//        }
//
//        REQUIRE(links == 3);
//    }
//}
//
