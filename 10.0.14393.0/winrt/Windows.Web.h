// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Web.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Web::IUriToStreamResolver> : produce_base<D, Windows::Web::IUriToStreamResolver>
{
    HRESULT __stdcall abi_UriToStreamAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IInputStream>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().UriToStreamAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri)));
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
    HRESULT __stdcall abi_GetStatus(int32_t hresult, Windows::Web::WebErrorStatus * status) noexcept override
    {
        try
        {
            *status = detach(this->shim().GetStatus(hresult));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Web {

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IInputStream> impl_IUriToStreamResolver<D>::UriToStreamAsync(const Windows::Foundation::Uri & uri) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IInputStream> operation;
    check_hresult(static_cast<const IUriToStreamResolver &>(static_cast<const D &>(*this))->abi_UriToStreamAsync(get(uri), put(operation)));
    return operation;
}

template <typename D> Windows::Web::WebErrorStatus impl_IWebErrorStatics<D>::GetStatus(int32_t hresult) const
{
    Windows::Web::WebErrorStatus status {};
    check_hresult(static_cast<const IWebErrorStatics &>(static_cast<const D &>(*this))->abi_GetStatus(hresult, &status));
    return status;
}

inline Windows::Web::WebErrorStatus WebError::GetStatus(int32_t hresult)
{
    return get_activation_factory<WebError, IWebErrorStatics>().GetStatus(hresult);
}

}

}
