// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Security.Credentials.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.Security.Authentication.Web.Core.2.h"
#include "winrt/Windows.Security.Authentication.Web.h"

namespace winrt::impl {

template <typename D> Windows::Security::Credentials::WebAccount consume_Windows_Security_Authentication_Web_Core_IWebAccountEventArgs<D>::Account() const
{
    Windows::Security::Credentials::WebAccount value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAccountEventArgs)->get_Account(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Security_Authentication_Web_Core_IWebAccountMonitor<D>::Updated(Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAccountMonitor)->add_Updated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Security::Authentication::Web::Core::IWebAccountMonitor> consume_Windows_Security_Authentication_Web_Core_IWebAccountMonitor<D>::Updated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Security::Authentication::Web::Core::IWebAccountMonitor>(this, &abi_t<Windows::Security::Authentication::Web::Core::IWebAccountMonitor>::remove_Updated, Updated(handler));
}

template <typename D> void consume_Windows_Security_Authentication_Web_Core_IWebAccountMonitor<D>::Updated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAccountMonitor)->remove_Updated(get_abi(token)));
}

template <typename D> event_token consume_Windows_Security_Authentication_Web_Core_IWebAccountMonitor<D>::Removed(Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAccountMonitor)->add_Removed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Security::Authentication::Web::Core::IWebAccountMonitor> consume_Windows_Security_Authentication_Web_Core_IWebAccountMonitor<D>::Removed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Security::Authentication::Web::Core::IWebAccountMonitor>(this, &abi_t<Windows::Security::Authentication::Web::Core::IWebAccountMonitor>::remove_Removed, Removed(handler));
}

template <typename D> void consume_Windows_Security_Authentication_Web_Core_IWebAccountMonitor<D>::Removed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAccountMonitor)->remove_Removed(get_abi(token)));
}

template <typename D> event_token consume_Windows_Security_Authentication_Web_Core_IWebAccountMonitor<D>::DefaultSignInAccountChanged(Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAccountMonitor)->add_DefaultSignInAccountChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Security::Authentication::Web::Core::IWebAccountMonitor> consume_Windows_Security_Authentication_Web_Core_IWebAccountMonitor<D>::DefaultSignInAccountChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Security::Authentication::Web::Core::IWebAccountMonitor>(this, &abi_t<Windows::Security::Authentication::Web::Core::IWebAccountMonitor>::remove_DefaultSignInAccountChanged, DefaultSignInAccountChanged(handler));
}

template <typename D> void consume_Windows_Security_Authentication_Web_Core_IWebAccountMonitor<D>::DefaultSignInAccountChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAccountMonitor)->remove_DefaultSignInAccountChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics<D>::GetTokenSilentlyAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics)->GetTokenSilentlyAsync(get_abi(request), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics<D>::GetTokenSilentlyAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request, Windows::Security::Credentials::WebAccount const& webAccount) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics)->GetTokenSilentlyWithWebAccountAsync(get_abi(request), get_abi(webAccount), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics<D>::RequestTokenAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics)->RequestTokenAsync(get_abi(request), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics<D>::RequestTokenAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request, Windows::Security::Credentials::WebAccount const& webAccount) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics)->RequestTokenWithWebAccountAsync(get_abi(request), get_abi(webAccount), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics<D>::FindAccountAsync(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& webAccountId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics)->FindAccountAsync(get_abi(provider), get_abi(webAccountId), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics<D>::FindAccountProviderAsync(param::hstring const& webAccountProviderId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics)->FindAccountProviderAsync(get_abi(webAccountProviderId), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics<D>::FindAccountProviderAsync(param::hstring const& webAccountProviderId, param::hstring const& authority) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics)->FindAccountProviderWithAuthorityAsync(get_abi(webAccountProviderId), get_abi(authority), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics2<D>::FindAccountProviderAsync(param::hstring const& webAccountProviderId, param::hstring const& authority, Windows::System::User const& user) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics2)->FindAccountProviderWithAuthorityForUserAsync(get_abi(webAccountProviderId), get_abi(authority), get_abi(user), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebAccountMonitor consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics3<D>::CreateWebAccountMonitor(param::iterable<Windows::Security::Credentials::WebAccount> const& webAccounts) const
{
    Windows::Security::Authentication::Web::Core::WebAccountMonitor result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics3)->CreateWebAccountMonitor(get_abi(webAccounts), put_abi(result)));
    return result;
}

template <typename D> uint32_t consume_Windows_Security_Authentication_Web_Core_IWebProviderError<D>::ErrorCode() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebProviderError)->get_ErrorCode(&value));
    return value;
}

template <typename D> hstring consume_Windows_Security_Authentication_Web_Core_IWebProviderError<D>::ErrorMessage() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebProviderError)->get_ErrorMessage(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> consume_Windows_Security_Authentication_Web_Core_IWebProviderError<D>::Properties() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebProviderError)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebProviderError consume_Windows_Security_Authentication_Web_Core_IWebProviderErrorFactory<D>::Create(uint32_t errorCode, param::hstring const& errorMessage) const
{
    Windows::Security::Authentication::Web::Core::WebProviderError webProviderError{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebProviderErrorFactory)->Create(errorCode, get_abi(errorMessage), put_abi(webProviderError)));
    return webProviderError;
}

template <typename D> Windows::Security::Credentials::WebAccountProvider consume_Windows_Security_Authentication_Web_Core_IWebTokenRequest<D>::WebAccountProvider() const
{
    Windows::Security::Credentials::WebAccountProvider value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenRequest)->get_WebAccountProvider(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Authentication_Web_Core_IWebTokenRequest<D>::Scope() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenRequest)->get_Scope(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Authentication_Web_Core_IWebTokenRequest<D>::ClientId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenRequest)->get_ClientId(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType consume_Windows_Security_Authentication_Web_Core_IWebTokenRequest<D>::PromptType() const
{
    Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenRequest)->get_PromptType(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> consume_Windows_Security_Authentication_Web_Core_IWebTokenRequest<D>::Properties() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> requestProperties{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenRequest)->get_Properties(put_abi(requestProperties)));
    return requestProperties;
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> consume_Windows_Security_Authentication_Web_Core_IWebTokenRequest2<D>::AppProperties() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> requestProperties{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenRequest2)->get_AppProperties(put_abi(requestProperties)));
    return requestProperties;
}

template <typename D> hstring consume_Windows_Security_Authentication_Web_Core_IWebTokenRequest3<D>::CorrelationId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenRequest3)->get_CorrelationId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Authentication_Web_Core_IWebTokenRequest3<D>::CorrelationId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenRequest3)->put_CorrelationId(get_abi(value)));
}

template <typename D> Windows::Security::Authentication::Web::Core::WebTokenRequest consume_Windows_Security_Authentication_Web_Core_IWebTokenRequestFactory<D>::Create(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& scope, param::hstring const& clientId) const
{
    Windows::Security::Authentication::Web::Core::WebTokenRequest webTokenRequest{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory)->Create(get_abi(provider), get_abi(scope), get_abi(clientId), put_abi(webTokenRequest)));
    return webTokenRequest;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebTokenRequest consume_Windows_Security_Authentication_Web_Core_IWebTokenRequestFactory<D>::CreateWithPromptType(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& scope, param::hstring const& clientId, Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType const& promptType) const
{
    Windows::Security::Authentication::Web::Core::WebTokenRequest webTokenRequest{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory)->CreateWithPromptType(get_abi(provider), get_abi(scope), get_abi(clientId), get_abi(promptType), put_abi(webTokenRequest)));
    return webTokenRequest;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebTokenRequest consume_Windows_Security_Authentication_Web_Core_IWebTokenRequestFactory<D>::CreateWithProvider(Windows::Security::Credentials::WebAccountProvider const& provider) const
{
    Windows::Security::Authentication::Web::Core::WebTokenRequest webTokenRequest{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory)->CreateWithProvider(get_abi(provider), put_abi(webTokenRequest)));
    return webTokenRequest;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebTokenRequest consume_Windows_Security_Authentication_Web_Core_IWebTokenRequestFactory<D>::CreateWithScope(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& scope) const
{
    Windows::Security::Authentication::Web::Core::WebTokenRequest webTokenRequest{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory)->CreateWithScope(get_abi(provider), get_abi(scope), put_abi(webTokenRequest)));
    return webTokenRequest;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Web::Core::WebTokenResponse> consume_Windows_Security_Authentication_Web_Core_IWebTokenRequestResult<D>::ResponseData() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Web::Core::WebTokenResponse> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenRequestResult)->get_ResponseData(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebTokenRequestStatus consume_Windows_Security_Authentication_Web_Core_IWebTokenRequestResult<D>::ResponseStatus() const
{
    Windows::Security::Authentication::Web::Core::WebTokenRequestStatus value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenRequestResult)->get_ResponseStatus(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebProviderError consume_Windows_Security_Authentication_Web_Core_IWebTokenRequestResult<D>::ResponseError() const
{
    Windows::Security::Authentication::Web::Core::WebProviderError value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenRequestResult)->get_ResponseError(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Authentication_Web_Core_IWebTokenRequestResult<D>::InvalidateCacheAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenRequestResult)->InvalidateCacheAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> hstring consume_Windows_Security_Authentication_Web_Core_IWebTokenResponse<D>::Token() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenResponse)->get_Token(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebProviderError consume_Windows_Security_Authentication_Web_Core_IWebTokenResponse<D>::ProviderError() const
{
    Windows::Security::Authentication::Web::Core::WebProviderError value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenResponse)->get_ProviderError(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Credentials::WebAccount consume_Windows_Security_Authentication_Web_Core_IWebTokenResponse<D>::WebAccount() const
{
    Windows::Security::Credentials::WebAccount value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenResponse)->get_WebAccount(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> consume_Windows_Security_Authentication_Web_Core_IWebTokenResponse<D>::Properties() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenResponse)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebTokenResponse consume_Windows_Security_Authentication_Web_Core_IWebTokenResponseFactory<D>::CreateWithToken(param::hstring const& token) const
{
    Windows::Security::Authentication::Web::Core::WebTokenResponse webTokenResponse{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenResponseFactory)->CreateWithToken(get_abi(token), put_abi(webTokenResponse)));
    return webTokenResponse;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebTokenResponse consume_Windows_Security_Authentication_Web_Core_IWebTokenResponseFactory<D>::CreateWithTokenAndAccount(param::hstring const& token, Windows::Security::Credentials::WebAccount const& webAccount) const
{
    Windows::Security::Authentication::Web::Core::WebTokenResponse webTokenResponse{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenResponseFactory)->CreateWithTokenAndAccount(get_abi(token), get_abi(webAccount), put_abi(webTokenResponse)));
    return webTokenResponse;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebTokenResponse consume_Windows_Security_Authentication_Web_Core_IWebTokenResponseFactory<D>::CreateWithTokenAccountAndError(param::hstring const& token, Windows::Security::Credentials::WebAccount const& webAccount, Windows::Security::Authentication::Web::Core::WebProviderError const& error) const
{
    Windows::Security::Authentication::Web::Core::WebTokenResponse webTokenResponse{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Core::IWebTokenResponseFactory)->CreateWithTokenAccountAndError(get_abi(token), get_abi(webAccount), get_abi(error), put_abi(webTokenResponse)));
    return webTokenResponse;
}

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Core::IWebAccountEventArgs> : produce_base<D, Windows::Security::Authentication::Web::Core::IWebAccountEventArgs>
{
    HRESULT __stdcall get_Account(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Account());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Core::IWebAccountMonitor> : produce_base<D, Windows::Security::Authentication::Web::Core::IWebAccountMonitor>
{
    HRESULT __stdcall add_Updated(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Updated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Updated(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Updated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Removed(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Removed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Removed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Removed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DefaultSignInAccountChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DefaultSignInAccountChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DefaultSignInAccountChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultSignInAccountChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics> : produce_base<D, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>
{
    HRESULT __stdcall GetTokenSilentlyAsync(::IUnknown* request, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().GetTokenSilentlyAsync(*reinterpret_cast<Windows::Security::Authentication::Web::Core::WebTokenRequest const*>(&request)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetTokenSilentlyWithWebAccountAsync(::IUnknown* request, ::IUnknown* webAccount, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().GetTokenSilentlyAsync(*reinterpret_cast<Windows::Security::Authentication::Web::Core::WebTokenRequest const*>(&request), *reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&webAccount)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestTokenAsync(::IUnknown* request, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().RequestTokenAsync(*reinterpret_cast<Windows::Security::Authentication::Web::Core::WebTokenRequest const*>(&request)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestTokenWithWebAccountAsync(::IUnknown* request, ::IUnknown* webAccount, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().RequestTokenAsync(*reinterpret_cast<Windows::Security::Authentication::Web::Core::WebTokenRequest const*>(&request), *reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&webAccount)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAccountAsync(::IUnknown* provider, HSTRING webAccountId, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().FindAccountAsync(*reinterpret_cast<Windows::Security::Credentials::WebAccountProvider const*>(&provider), *reinterpret_cast<hstring const*>(&webAccountId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAccountProviderAsync(HSTRING webAccountProviderId, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().FindAccountProviderAsync(*reinterpret_cast<hstring const*>(&webAccountProviderId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAccountProviderWithAuthorityAsync(HSTRING webAccountProviderId, HSTRING authority, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().FindAccountProviderAsync(*reinterpret_cast<hstring const*>(&webAccountProviderId), *reinterpret_cast<hstring const*>(&authority)));
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
struct produce<D, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics2> : produce_base<D, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics2>
{
    HRESULT __stdcall FindAccountProviderWithAuthorityForUserAsync(HSTRING webAccountProviderId, HSTRING authority, ::IUnknown* user, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().FindAccountProviderAsync(*reinterpret_cast<hstring const*>(&webAccountProviderId), *reinterpret_cast<hstring const*>(&authority), *reinterpret_cast<Windows::System::User const*>(&user)));
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
struct produce<D, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics3> : produce_base<D, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics3>
{
    HRESULT __stdcall CreateWebAccountMonitor(::IUnknown* webAccounts, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWebAccountMonitor(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Security::Credentials::WebAccount> const*>(&webAccounts)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Core::IWebProviderError> : produce_base<D, Windows::Security::Authentication::Web::Core::IWebProviderError>
{
    HRESULT __stdcall get_ErrorCode(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorMessage(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ErrorMessage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Core::IWebProviderErrorFactory> : produce_base<D, Windows::Security::Authentication::Web::Core::IWebProviderErrorFactory>
{
    HRESULT __stdcall Create(uint32_t errorCode, HSTRING errorMessage, ::IUnknown** webProviderError) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *webProviderError = detach_abi(this->shim().Create(errorCode, *reinterpret_cast<hstring const*>(&errorMessage)));
            return S_OK;
        }
        catch (...)
        {
            *webProviderError = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Core::IWebTokenRequest> : produce_base<D, Windows::Security::Authentication::Web::Core::IWebTokenRequest>
{
    HRESULT __stdcall get_WebAccountProvider(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WebAccountProvider());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Scope(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Scope());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClientId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClientId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PromptType(abi_t<Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PromptType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(::IUnknown** requestProperties) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *requestProperties = detach_abi(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *requestProperties = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Core::IWebTokenRequest2> : produce_base<D, Windows::Security::Authentication::Web::Core::IWebTokenRequest2>
{
    HRESULT __stdcall get_AppProperties(::IUnknown** requestProperties) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *requestProperties = detach_abi(this->shim().AppProperties());
            return S_OK;
        }
        catch (...)
        {
            *requestProperties = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Core::IWebTokenRequest3> : produce_base<D, Windows::Security::Authentication::Web::Core::IWebTokenRequest3>
{
    HRESULT __stdcall get_CorrelationId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CorrelationId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CorrelationId(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CorrelationId(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory> : produce_base<D, Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory>
{
    HRESULT __stdcall Create(::IUnknown* provider, HSTRING scope, HSTRING clientId, ::IUnknown** webTokenRequest) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *webTokenRequest = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Security::Credentials::WebAccountProvider const*>(&provider), *reinterpret_cast<hstring const*>(&scope), *reinterpret_cast<hstring const*>(&clientId)));
            return S_OK;
        }
        catch (...)
        {
            *webTokenRequest = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithPromptType(::IUnknown* provider, HSTRING scope, HSTRING clientId, abi_t<Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType> promptType, ::IUnknown** webTokenRequest) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *webTokenRequest = detach_abi(this->shim().CreateWithPromptType(*reinterpret_cast<Windows::Security::Credentials::WebAccountProvider const*>(&provider), *reinterpret_cast<hstring const*>(&scope), *reinterpret_cast<hstring const*>(&clientId), *reinterpret_cast<Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType const*>(&promptType)));
            return S_OK;
        }
        catch (...)
        {
            *webTokenRequest = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithProvider(::IUnknown* provider, ::IUnknown** webTokenRequest) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *webTokenRequest = detach_abi(this->shim().CreateWithProvider(*reinterpret_cast<Windows::Security::Credentials::WebAccountProvider const*>(&provider)));
            return S_OK;
        }
        catch (...)
        {
            *webTokenRequest = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithScope(::IUnknown* provider, HSTRING scope, ::IUnknown** webTokenRequest) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *webTokenRequest = detach_abi(this->shim().CreateWithScope(*reinterpret_cast<Windows::Security::Credentials::WebAccountProvider const*>(&provider), *reinterpret_cast<hstring const*>(&scope)));
            return S_OK;
        }
        catch (...)
        {
            *webTokenRequest = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Core::IWebTokenRequestResult> : produce_base<D, Windows::Security::Authentication::Web::Core::IWebTokenRequestResult>
{
    HRESULT __stdcall get_ResponseData(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_ResponseStatus(abi_t<Windows::Security::Authentication::Web::Core::WebTokenRequestStatus>* value) noexcept override
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

    HRESULT __stdcall get_ResponseError(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResponseError());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InvalidateCacheAsync(::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().InvalidateCacheAsync());
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
struct produce<D, Windows::Security::Authentication::Web::Core::IWebTokenResponse> : produce_base<D, Windows::Security::Authentication::Web::Core::IWebTokenResponse>
{
    HRESULT __stdcall get_Token(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Token());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProviderError(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProviderError());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WebAccount(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WebAccount());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Core::IWebTokenResponseFactory> : produce_base<D, Windows::Security::Authentication::Web::Core::IWebTokenResponseFactory>
{
    HRESULT __stdcall CreateWithToken(HSTRING token, ::IUnknown** webTokenResponse) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *webTokenResponse = detach_abi(this->shim().CreateWithToken(*reinterpret_cast<hstring const*>(&token)));
            return S_OK;
        }
        catch (...)
        {
            *webTokenResponse = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithTokenAndAccount(HSTRING token, ::IUnknown* webAccount, ::IUnknown** webTokenResponse) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *webTokenResponse = detach_abi(this->shim().CreateWithTokenAndAccount(*reinterpret_cast<hstring const*>(&token), *reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&webAccount)));
            return S_OK;
        }
        catch (...)
        {
            *webTokenResponse = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithTokenAccountAndError(HSTRING token, ::IUnknown* webAccount, ::IUnknown* error, ::IUnknown** webTokenResponse) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *webTokenResponse = detach_abi(this->shim().CreateWithTokenAccountAndError(*reinterpret_cast<hstring const*>(&token), *reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&webAccount), *reinterpret_cast<Windows::Security::Authentication::Web::Core::WebProviderError const*>(&error)));
            return S_OK;
        }
        catch (...)
        {
            *webTokenResponse = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Web::Core {

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> WebAuthenticationCoreManager::GetTokenSilentlyAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request)
{
    return get_activation_factory<WebAuthenticationCoreManager, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>().GetTokenSilentlyAsync(request);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> WebAuthenticationCoreManager::GetTokenSilentlyAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request, Windows::Security::Credentials::WebAccount const& webAccount)
{
    return get_activation_factory<WebAuthenticationCoreManager, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>().GetTokenSilentlyAsync(request, webAccount);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> WebAuthenticationCoreManager::RequestTokenAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request)
{
    return get_activation_factory<WebAuthenticationCoreManager, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>().RequestTokenAsync(request);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> WebAuthenticationCoreManager::RequestTokenAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request, Windows::Security::Credentials::WebAccount const& webAccount)
{
    return get_activation_factory<WebAuthenticationCoreManager, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>().RequestTokenAsync(request, webAccount);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> WebAuthenticationCoreManager::FindAccountAsync(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& webAccountId)
{
    return get_activation_factory<WebAuthenticationCoreManager, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>().FindAccountAsync(provider, webAccountId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> WebAuthenticationCoreManager::FindAccountProviderAsync(param::hstring const& webAccountProviderId)
{
    return get_activation_factory<WebAuthenticationCoreManager, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>().FindAccountProviderAsync(webAccountProviderId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> WebAuthenticationCoreManager::FindAccountProviderAsync(param::hstring const& webAccountProviderId, param::hstring const& authority)
{
    return get_activation_factory<WebAuthenticationCoreManager, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>().FindAccountProviderAsync(webAccountProviderId, authority);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> WebAuthenticationCoreManager::FindAccountProviderAsync(param::hstring const& webAccountProviderId, param::hstring const& authority, Windows::System::User const& user)
{
    return get_activation_factory<WebAuthenticationCoreManager, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics2>().FindAccountProviderAsync(webAccountProviderId, authority, user);
}

inline Windows::Security::Authentication::Web::Core::WebAccountMonitor WebAuthenticationCoreManager::CreateWebAccountMonitor(param::iterable<Windows::Security::Credentials::WebAccount> const& webAccounts)
{
    return get_activation_factory<WebAuthenticationCoreManager, Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics3>().CreateWebAccountMonitor(webAccounts);
}

inline WebProviderError::WebProviderError(uint32_t errorCode, param::hstring const& errorMessage) :
    WebProviderError(get_activation_factory<WebProviderError, Windows::Security::Authentication::Web::Core::IWebProviderErrorFactory>().Create(errorCode, errorMessage))
{}

inline WebTokenRequest::WebTokenRequest(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& scope, param::hstring const& clientId) :
    WebTokenRequest(get_activation_factory<WebTokenRequest, Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory>().Create(provider, scope, clientId))
{}

inline WebTokenRequest::WebTokenRequest(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& scope, param::hstring const& clientId, Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType const& promptType) :
    WebTokenRequest(get_activation_factory<WebTokenRequest, Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory>().CreateWithPromptType(provider, scope, clientId, promptType))
{}

inline WebTokenRequest::WebTokenRequest(Windows::Security::Credentials::WebAccountProvider const& provider) :
    WebTokenRequest(get_activation_factory<WebTokenRequest, Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory>().CreateWithProvider(provider))
{}

inline WebTokenRequest::WebTokenRequest(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& scope) :
    WebTokenRequest(get_activation_factory<WebTokenRequest, Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory>().CreateWithScope(provider, scope))
{}

inline WebTokenResponse::WebTokenResponse() :
    WebTokenResponse(activate_instance<WebTokenResponse>())
{}

inline WebTokenResponse::WebTokenResponse(param::hstring const& token) :
    WebTokenResponse(get_activation_factory<WebTokenResponse, Windows::Security::Authentication::Web::Core::IWebTokenResponseFactory>().CreateWithToken(token))
{}

inline WebTokenResponse::WebTokenResponse(param::hstring const& token, Windows::Security::Credentials::WebAccount const& webAccount) :
    WebTokenResponse(get_activation_factory<WebTokenResponse, Windows::Security::Authentication::Web::Core::IWebTokenResponseFactory>().CreateWithTokenAndAccount(token, webAccount))
{}

inline WebTokenResponse::WebTokenResponse(param::hstring const& token, Windows::Security::Credentials::WebAccount const& webAccount, Windows::Security::Authentication::Web::Core::WebProviderError const& error) :
    WebTokenResponse(get_activation_factory<WebTokenResponse, Windows::Security::Authentication::Web::Core::IWebTokenResponseFactory>().CreateWithTokenAccountAndError(token, webAccount, error))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::IWebAccountEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Core::IWebAccountEventArgs> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::IWebAccountMonitor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Core::IWebAccountMonitor> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics2> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics3> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::IWebProviderError> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Core::IWebProviderError> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::IWebProviderErrorFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Core::IWebProviderErrorFactory> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::IWebTokenRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Core::IWebTokenRequest> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::IWebTokenRequest2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Core::IWebTokenRequest2> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::IWebTokenRequest3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Core::IWebTokenRequest3> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::IWebTokenRequestResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Core::IWebTokenRequestResult> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::IWebTokenResponse> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Core::IWebTokenResponse> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::IWebTokenResponseFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Core::IWebTokenResponseFactory> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::WebAccountEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Core::WebAccountEventArgs> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::WebAccountMonitor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Core::WebAccountMonitor> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::WebAuthenticationCoreManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Core::WebAuthenticationCoreManager> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::WebProviderError> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Core::WebProviderError> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::WebTokenRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Core::WebTokenRequest> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::WebTokenRequestResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Core::WebTokenRequestResult> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Core::WebTokenResponse> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Core::WebTokenResponse> {};

}

WINRT_WARNING_POP
