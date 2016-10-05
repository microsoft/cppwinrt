// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Security.Authentication.Web.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics> : produce_base<D, Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics>
{
    HRESULT __stdcall abi_AuthenticateWithCallbackUriAsync(Windows::Security::Authentication::Web::WebAuthenticationOptions options, abi_arg_in<Windows::Foundation::IUriRuntimeClass> requestUri, abi_arg_in<Windows::Foundation::IUriRuntimeClass> callbackUri, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().AuthenticateAsync(options, *reinterpret_cast<const Windows::Foundation::Uri *>(&requestUri), *reinterpret_cast<const Windows::Foundation::Uri *>(&callbackUri)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AuthenticateWithoutCallbackUriAsync(Windows::Security::Authentication::Web::WebAuthenticationOptions options, abi_arg_in<Windows::Foundation::IUriRuntimeClass> requestUri, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().AuthenticateAsync(options, *reinterpret_cast<const Windows::Foundation::Uri *>(&requestUri)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetCurrentApplicationCallbackUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> callbackUri) noexcept override
    {
        try
        {
            *callbackUri = detach(this->shim().GetCurrentApplicationCallbackUri());
            return S_OK;
        }
        catch (...)
        {
            *callbackUri = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics2> : produce_base<D, Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics2>
{
    HRESULT __stdcall abi_AuthenticateAndContinue(abi_arg_in<Windows::Foundation::IUriRuntimeClass> requestUri) noexcept override
    {
        try
        {
            this->shim().AuthenticateAndContinue(*reinterpret_cast<const Windows::Foundation::Uri *>(&requestUri));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AuthenticateWithCallbackUriAndContinue(abi_arg_in<Windows::Foundation::IUriRuntimeClass> requestUri, abi_arg_in<Windows::Foundation::IUriRuntimeClass> callbackUri) noexcept override
    {
        try
        {
            this->shim().AuthenticateAndContinue(*reinterpret_cast<const Windows::Foundation::Uri *>(&requestUri), *reinterpret_cast<const Windows::Foundation::Uri *>(&callbackUri));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AuthenticateWithCallbackUriContinuationDataAndOptionsAndContinue(abi_arg_in<Windows::Foundation::IUriRuntimeClass> requestUri, abi_arg_in<Windows::Foundation::IUriRuntimeClass> callbackUri, abi_arg_in<Windows::Foundation::Collections::IPropertySet> continuationData, Windows::Security::Authentication::Web::WebAuthenticationOptions options) noexcept override
    {
        try
        {
            this->shim().AuthenticateAndContinue(*reinterpret_cast<const Windows::Foundation::Uri *>(&requestUri), *reinterpret_cast<const Windows::Foundation::Uri *>(&callbackUri), *reinterpret_cast<const Windows::Foundation::Collections::ValueSet *>(&continuationData), options);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AuthenticateSilentlyAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> requestUri, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().AuthenticateSilentlyAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&requestUri)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AuthenticateSilentlyWithOptionsAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> requestUri, Windows::Security::Authentication::Web::WebAuthenticationOptions options, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().AuthenticateSilentlyAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&requestUri), options));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::IWebAuthenticationResult> : produce_base<D, Windows::Security::Authentication::Web::IWebAuthenticationResult>
{
    HRESULT __stdcall get_ResponseData(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResponseData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResponseStatus(Windows::Security::Authentication::Web::WebAuthenticationStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResponseStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResponseErrorDetail(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResponseErrorDetail());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Security::Authentication::Web {

template <typename D> hstring impl_IWebAuthenticationResult<D>::ResponseData() const
{
    hstring value;
    check_hresult(static_cast<const IWebAuthenticationResult &>(static_cast<const D &>(*this))->get_ResponseData(put(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::WebAuthenticationStatus impl_IWebAuthenticationResult<D>::ResponseStatus() const
{
    Windows::Security::Authentication::Web::WebAuthenticationStatus value {};
    check_hresult(static_cast<const IWebAuthenticationResult &>(static_cast<const D &>(*this))->get_ResponseStatus(&value));
    return value;
}

template <typename D> uint32_t impl_IWebAuthenticationResult<D>::ResponseErrorDetail() const
{
    uint32_t value {};
    check_hresult(static_cast<const IWebAuthenticationResult &>(static_cast<const D &>(*this))->get_ResponseErrorDetail(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> impl_IWebAuthenticationBrokerStatics<D>::AuthenticateAsync(Windows::Security::Authentication::Web::WebAuthenticationOptions options, const Windows::Foundation::Uri & requestUri, const Windows::Foundation::Uri & callbackUri) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> asyncInfo;
    check_hresult(static_cast<const IWebAuthenticationBrokerStatics &>(static_cast<const D &>(*this))->abi_AuthenticateWithCallbackUriAsync(options, get(requestUri), get(callbackUri), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> impl_IWebAuthenticationBrokerStatics<D>::AuthenticateAsync(Windows::Security::Authentication::Web::WebAuthenticationOptions options, const Windows::Foundation::Uri & requestUri) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> asyncInfo;
    check_hresult(static_cast<const IWebAuthenticationBrokerStatics &>(static_cast<const D &>(*this))->abi_AuthenticateWithoutCallbackUriAsync(options, get(requestUri), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::Uri impl_IWebAuthenticationBrokerStatics<D>::GetCurrentApplicationCallbackUri() const
{
    Windows::Foundation::Uri callbackUri { nullptr };
    check_hresult(static_cast<const IWebAuthenticationBrokerStatics &>(static_cast<const D &>(*this))->abi_GetCurrentApplicationCallbackUri(put(callbackUri)));
    return callbackUri;
}

template <typename D> void impl_IWebAuthenticationBrokerStatics2<D>::AuthenticateAndContinue(const Windows::Foundation::Uri & requestUri) const
{
    check_hresult(static_cast<const IWebAuthenticationBrokerStatics2 &>(static_cast<const D &>(*this))->abi_AuthenticateAndContinue(get(requestUri)));
}

template <typename D> void impl_IWebAuthenticationBrokerStatics2<D>::AuthenticateAndContinue(const Windows::Foundation::Uri & requestUri, const Windows::Foundation::Uri & callbackUri) const
{
    check_hresult(static_cast<const IWebAuthenticationBrokerStatics2 &>(static_cast<const D &>(*this))->abi_AuthenticateWithCallbackUriAndContinue(get(requestUri), get(callbackUri)));
}

template <typename D> void impl_IWebAuthenticationBrokerStatics2<D>::AuthenticateAndContinue(const Windows::Foundation::Uri & requestUri, const Windows::Foundation::Uri & callbackUri, const Windows::Foundation::Collections::ValueSet & continuationData, Windows::Security::Authentication::Web::WebAuthenticationOptions options) const
{
    check_hresult(static_cast<const IWebAuthenticationBrokerStatics2 &>(static_cast<const D &>(*this))->abi_AuthenticateWithCallbackUriContinuationDataAndOptionsAndContinue(get(requestUri), get(callbackUri), get(continuationData), options));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> impl_IWebAuthenticationBrokerStatics2<D>::AuthenticateSilentlyAsync(const Windows::Foundation::Uri & requestUri) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> asyncInfo;
    check_hresult(static_cast<const IWebAuthenticationBrokerStatics2 &>(static_cast<const D &>(*this))->abi_AuthenticateSilentlyAsync(get(requestUri), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> impl_IWebAuthenticationBrokerStatics2<D>::AuthenticateSilentlyAsync(const Windows::Foundation::Uri & requestUri, Windows::Security::Authentication::Web::WebAuthenticationOptions options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> asyncInfo;
    check_hresult(static_cast<const IWebAuthenticationBrokerStatics2 &>(static_cast<const D &>(*this))->abi_AuthenticateSilentlyWithOptionsAsync(get(requestUri), options, put(asyncInfo)));
    return asyncInfo;
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> WebAuthenticationBroker::AuthenticateAsync(Windows::Security::Authentication::Web::WebAuthenticationOptions options, const Windows::Foundation::Uri & requestUri, const Windows::Foundation::Uri & callbackUri)
{
    return get_activation_factory<WebAuthenticationBroker, IWebAuthenticationBrokerStatics>().AuthenticateAsync(options, requestUri, callbackUri);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> WebAuthenticationBroker::AuthenticateAsync(Windows::Security::Authentication::Web::WebAuthenticationOptions options, const Windows::Foundation::Uri & requestUri)
{
    return get_activation_factory<WebAuthenticationBroker, IWebAuthenticationBrokerStatics>().AuthenticateAsync(options, requestUri);
}

inline Windows::Foundation::Uri WebAuthenticationBroker::GetCurrentApplicationCallbackUri()
{
    return get_activation_factory<WebAuthenticationBroker, IWebAuthenticationBrokerStatics>().GetCurrentApplicationCallbackUri();
}

inline void WebAuthenticationBroker::AuthenticateAndContinue(const Windows::Foundation::Uri & requestUri)
{
    get_activation_factory<WebAuthenticationBroker, IWebAuthenticationBrokerStatics2>().AuthenticateAndContinue(requestUri);
}

inline void WebAuthenticationBroker::AuthenticateAndContinue(const Windows::Foundation::Uri & requestUri, const Windows::Foundation::Uri & callbackUri)
{
    get_activation_factory<WebAuthenticationBroker, IWebAuthenticationBrokerStatics2>().AuthenticateAndContinue(requestUri, callbackUri);
}

inline void WebAuthenticationBroker::AuthenticateAndContinue(const Windows::Foundation::Uri & requestUri, const Windows::Foundation::Uri & callbackUri, const Windows::Foundation::Collections::ValueSet & continuationData, Windows::Security::Authentication::Web::WebAuthenticationOptions options)
{
    get_activation_factory<WebAuthenticationBroker, IWebAuthenticationBrokerStatics2>().AuthenticateAndContinue(requestUri, callbackUri, continuationData, options);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> WebAuthenticationBroker::AuthenticateSilentlyAsync(const Windows::Foundation::Uri & requestUri)
{
    return get_activation_factory<WebAuthenticationBroker, IWebAuthenticationBrokerStatics2>().AuthenticateSilentlyAsync(requestUri);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> WebAuthenticationBroker::AuthenticateSilentlyAsync(const Windows::Foundation::Uri & requestUri, Windows::Security::Authentication::Web::WebAuthenticationOptions options)
{
    return get_activation_factory<WebAuthenticationBroker, IWebAuthenticationBrokerStatics2>().AuthenticateSilentlyAsync(requestUri, options);
}

}

}
