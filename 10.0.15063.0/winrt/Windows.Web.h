// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Web.2.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IInputStream> consume_Windows_Web_IUriToStreamResolver<D>::UriToStreamAsync(Windows::Foundation::Uri const& uri) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IInputStream> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::IUriToStreamResolver)->UriToStreamAsync(get_abi(uri), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Web::WebErrorStatus consume_Windows_Web_IWebErrorStatics<D>::GetStatus(int32_t hresult) const
{
    Windows::Web::WebErrorStatus status{};
    check_hresult(WINRT_SHIM(Windows::Web::IWebErrorStatics)->GetStatus(hresult, put_abi(status)));
    return status;
}

template <typename D>
struct produce<D, Windows::Web::IUriToStreamResolver> : produce_base<D, Windows::Web::IUriToStreamResolver>
{
    HRESULT __stdcall UriToStreamAsync(::IUnknown* uri, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().UriToStreamAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::IWebErrorStatics> : produce_base<D, Windows::Web::IWebErrorStatics>
{
    HRESULT __stdcall GetStatus(int32_t hresult, abi_t<Windows::Web::WebErrorStatus>* status) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *status = detach_abi(this->shim().GetStatus(hresult));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Web {

inline Windows::Web::WebErrorStatus WebError::GetStatus(int32_t hresult)
{
    return get_activation_factory<WebError, Windows::Web::IWebErrorStatics>().GetStatus(hresult);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Web::IUriToStreamResolver> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::IUriToStreamResolver> {};

template<> struct hash<winrt::Windows::Web::IWebErrorStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::IWebErrorStatics> {};

template<> struct hash<winrt::Windows::Web::WebError> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::WebError> {};

}

WINRT_WARNING_POP
