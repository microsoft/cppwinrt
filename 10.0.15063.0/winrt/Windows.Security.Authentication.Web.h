// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Security.Authentication.Web.2.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> consume_Windows_Security_Authentication_Web_IWebAuthenticationBrokerStatics<D>::AuthenticateAsync(Windows::Security::Authentication::Web::WebAuthenticationOptions const& options, Windows::Foundation::Uri const& requestUri, Windows::Foundation::Uri const& callbackUri) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics)->AuthenticateWithCallbackUriAsync(get_abi(options), get_abi(requestUri), get_abi(callbackUri), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> consume_Windows_Security_Authentication_Web_IWebAuthenticationBrokerStatics<D>::AuthenticateAsync(Windows::Security::Authentication::Web::WebAuthenticationOptions const& options, Windows::Foundation::Uri const& requestUri) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics)->AuthenticateWithoutCallbackUriAsync(get_abi(options), get_abi(requestUri), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Security_Authentication_Web_IWebAuthenticationBrokerStatics<D>::GetCurrentApplicationCallbackUri() const
{
    Windows::Foundation::Uri callbackUri{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics)->GetCurrentApplicationCallbackUri(put_abi(callbackUri)));
    return callbackUri;
}

template <typename D> void consume_Windows_Security_Authentication_Web_IWebAuthenticationBrokerStatics2<D>::AuthenticateAndContinue(Windows::Foundation::Uri const& requestUri) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics2)->AuthenticateAndContinue(get_abi(requestUri)));
}

template <typename D> void consume_Windows_Security_Authentication_Web_IWebAuthenticationBrokerStatics2<D>::AuthenticateAndContinue(Windows::Foundation::Uri const& requestUri, Windows::Foundation::Uri const& callbackUri) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics2)->AuthenticateWithCallbackUriAndContinue(get_abi(requestUri), get_abi(callbackUri)));
}

template <typename D> void consume_Windows_Security_Authentication_Web_IWebAuthenticationBrokerStatics2<D>::AuthenticateAndContinue(Windows::Foundation::Uri const& requestUri, Windows::Foundation::Uri const& callbackUri, Windows::Foundation::Collections::ValueSet const& continuationData, Windows::Security::Authentication::Web::WebAuthenticationOptions const& options) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics2)->AuthenticateWithCallbackUriContinuationDataAndOptionsAndContinue(get_abi(requestUri), get_abi(callbackUri), get_abi(continuationData), get_abi(options)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> consume_Windows_Security_Authentication_Web_IWebAuthenticationBrokerStatics2<D>::AuthenticateSilentlyAsync(Windows::Foundation::Uri const& requestUri) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics2)->AuthenticateSilentlyAsync(get_abi(requestUri), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> consume_Windows_Security_Authentication_Web_IWebAuthenticationBrokerStatics2<D>::AuthenticateSilentlyAsync(Windows::Foundation::Uri const& requestUri, Windows::Security::Authentication::Web::WebAuthenticationOptions const& options) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics2)->AuthenticateSilentlyWithOptionsAsync(get_abi(requestUri), get_abi(options), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> hstring consume_Windows_Security_Authentication_Web_IWebAuthenticationResult<D>::ResponseData() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::IWebAuthenticationResult)->get_ResponseData(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::WebAuthenticationStatus consume_Windows_Security_Authentication_Web_IWebAuthenticationResult<D>::ResponseStatus() const
{
    Windows::Security::Authentication::Web::WebAuthenticationStatus value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::IWebAuthenticationResult)->get_ResponseStatus(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Security_Authentication_Web_IWebAuthenticationResult<D>::ResponseErrorDetail() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::IWebAuthenticationResult)->get_ResponseErrorDetail(&value));
    return value;
}

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics> : produce_base<D, Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics>
{
    HRESULT __stdcall AuthenticateWithCallbackUriAsync(abi_t<Windows::Security::Authentication::Web::WebAuthenticationOptions> options, ::IUnknown* requestUri, ::IUnknown* callbackUri, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().AuthenticateAsync(*reinterpret_cast<Windows::Security::Authentication::Web::WebAuthenticationOptions const*>(&options), *reinterpret_cast<Windows::Foundation::Uri const*>(&requestUri), *reinterpret_cast<Windows::Foundation::Uri const*>(&callbackUri)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AuthenticateWithoutCallbackUriAsync(abi_t<Windows::Security::Authentication::Web::WebAuthenticationOptions> options, ::IUnknown* requestUri, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().AuthenticateAsync(*reinterpret_cast<Windows::Security::Authentication::Web::WebAuthenticationOptions const*>(&options), *reinterpret_cast<Windows::Foundation::Uri const*>(&requestUri)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCurrentApplicationCallbackUri(::IUnknown** callbackUri) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *callbackUri = detach_abi(this->shim().GetCurrentApplicationCallbackUri());
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
    HRESULT __stdcall AuthenticateAndContinue(::IUnknown* requestUri) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AuthenticateAndContinue(*reinterpret_cast<Windows::Foundation::Uri const*>(&requestUri));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AuthenticateWithCallbackUriAndContinue(::IUnknown* requestUri, ::IUnknown* callbackUri) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AuthenticateAndContinue(*reinterpret_cast<Windows::Foundation::Uri const*>(&requestUri), *reinterpret_cast<Windows::Foundation::Uri const*>(&callbackUri));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AuthenticateWithCallbackUriContinuationDataAndOptionsAndContinue(::IUnknown* requestUri, ::IUnknown* callbackUri, ::IUnknown* continuationData, abi_t<Windows::Security::Authentication::Web::WebAuthenticationOptions> options) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AuthenticateAndContinue(*reinterpret_cast<Windows::Foundation::Uri const*>(&requestUri), *reinterpret_cast<Windows::Foundation::Uri const*>(&callbackUri), *reinterpret_cast<Windows::Foundation::Collections::ValueSet const*>(&continuationData), *reinterpret_cast<Windows::Security::Authentication::Web::WebAuthenticationOptions const*>(&options));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AuthenticateSilentlyAsync(::IUnknown* requestUri, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().AuthenticateSilentlyAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&requestUri)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AuthenticateSilentlyWithOptionsAsync(::IUnknown* requestUri, abi_t<Windows::Security::Authentication::Web::WebAuthenticationOptions> options, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().AuthenticateSilentlyAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&requestUri), *reinterpret_cast<Windows::Security::Authentication::Web::WebAuthenticationOptions const*>(&options)));
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
    HRESULT __stdcall get_ResponseData(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResponseData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResponseStatus(abi_t<Windows::Security::Authentication::Web::WebAuthenticationStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResponseStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResponseErrorDetail(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResponseErrorDetail());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Web {

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> WebAuthenticationBroker::AuthenticateAsync(Windows::Security::Authentication::Web::WebAuthenticationOptions const& options, Windows::Foundation::Uri const& requestUri, Windows::Foundation::Uri const& callbackUri)
{
    return get_activation_factory<WebAuthenticationBroker, Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics>().AuthenticateAsync(options, requestUri, callbackUri);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> WebAuthenticationBroker::AuthenticateAsync(Windows::Security::Authentication::Web::WebAuthenticationOptions const& options, Windows::Foundation::Uri const& requestUri)
{
    return get_activation_factory<WebAuthenticationBroker, Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics>().AuthenticateAsync(options, requestUri);
}

inline Windows::Foundation::Uri WebAuthenticationBroker::GetCurrentApplicationCallbackUri()
{
    return get_activation_factory<WebAuthenticationBroker, Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics>().GetCurrentApplicationCallbackUri();
}

inline void WebAuthenticationBroker::AuthenticateAndContinue(Windows::Foundation::Uri const& requestUri)
{
    get_activation_factory<WebAuthenticationBroker, Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics2>().AuthenticateAndContinue(requestUri);
}

inline void WebAuthenticationBroker::AuthenticateAndContinue(Windows::Foundation::Uri const& requestUri, Windows::Foundation::Uri const& callbackUri)
{
    get_activation_factory<WebAuthenticationBroker, Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics2>().AuthenticateAndContinue(requestUri, callbackUri);
}

inline void WebAuthenticationBroker::AuthenticateAndContinue(Windows::Foundation::Uri const& requestUri, Windows::Foundation::Uri const& callbackUri, Windows::Foundation::Collections::ValueSet const& continuationData, Windows::Security::Authentication::Web::WebAuthenticationOptions const& options)
{
    get_activation_factory<WebAuthenticationBroker, Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics2>().AuthenticateAndContinue(requestUri, callbackUri, continuationData, options);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> WebAuthenticationBroker::AuthenticateSilentlyAsync(Windows::Foundation::Uri const& requestUri)
{
    return get_activation_factory<WebAuthenticationBroker, Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics2>().AuthenticateSilentlyAsync(requestUri);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> WebAuthenticationBroker::AuthenticateSilentlyAsync(Windows::Foundation::Uri const& requestUri, Windows::Security::Authentication::Web::WebAuthenticationOptions const& options)
{
    return get_activation_factory<WebAuthenticationBroker, Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics2>().AuthenticateSilentlyAsync(requestUri, options);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics2> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::IWebAuthenticationResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::IWebAuthenticationResult> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::WebAuthenticationBroker> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::WebAuthenticationBroker> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::WebAuthenticationResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::WebAuthenticationResult> {};

}

WINRT_WARNING_POP
