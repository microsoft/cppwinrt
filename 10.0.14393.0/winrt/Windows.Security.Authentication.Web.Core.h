// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Security.Credentials.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.System.3.h"
#include "internal/Windows.Security.Authentication.Web.Core.3.h"
#include "Windows.Security.Authentication.Web.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Core::IWebAccountEventArgs> : produce_base<D, Windows::Security::Authentication::Web::Core::IWebAccountEventArgs>
{
    HRESULT __stdcall get_Account(abi_arg_out<Windows::Security::Credentials::IWebAccount> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Account());
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
    HRESULT __stdcall add_Updated(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Updated(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Updated(event_token token) noexcept override
    {
        try
        {
            this->shim().Updated(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Removed(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Removed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Removed(event_token token) noexcept override
    {
        try
        {
            this->shim().Removed(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DefaultSignInAccountChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().DefaultSignInAccountChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DefaultSignInAccountChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().DefaultSignInAccountChanged(token);
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
    HRESULT __stdcall abi_GetTokenSilentlyAsync(abi_arg_in<Windows::Security::Authentication::Web::Core::IWebTokenRequest> request, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().GetTokenSilentlyAsync(*reinterpret_cast<const Windows::Security::Authentication::Web::Core::WebTokenRequest *>(&request)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetTokenSilentlyWithWebAccountAsync(abi_arg_in<Windows::Security::Authentication::Web::Core::IWebTokenRequest> request, abi_arg_in<Windows::Security::Credentials::IWebAccount> webAccount, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().GetTokenSilentlyAsync(*reinterpret_cast<const Windows::Security::Authentication::Web::Core::WebTokenRequest *>(&request), *reinterpret_cast<const Windows::Security::Credentials::WebAccount *>(&webAccount)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestTokenAsync(abi_arg_in<Windows::Security::Authentication::Web::Core::IWebTokenRequest> request, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().RequestTokenAsync(*reinterpret_cast<const Windows::Security::Authentication::Web::Core::WebTokenRequest *>(&request)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestTokenWithWebAccountAsync(abi_arg_in<Windows::Security::Authentication::Web::Core::IWebTokenRequest> request, abi_arg_in<Windows::Security::Credentials::IWebAccount> webAccount, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().RequestTokenAsync(*reinterpret_cast<const Windows::Security::Authentication::Web::Core::WebTokenRequest *>(&request), *reinterpret_cast<const Windows::Security::Credentials::WebAccount *>(&webAccount)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAccountAsync(abi_arg_in<Windows::Security::Credentials::IWebAccountProvider> provider, abi_arg_in<hstring> webAccountId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().FindAccountAsync(*reinterpret_cast<const Windows::Security::Credentials::WebAccountProvider *>(&provider), *reinterpret_cast<const hstring *>(&webAccountId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAccountProviderAsync(abi_arg_in<hstring> webAccountProviderId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().FindAccountProviderAsync(*reinterpret_cast<const hstring *>(&webAccountProviderId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAccountProviderWithAuthorityAsync(abi_arg_in<hstring> webAccountProviderId, abi_arg_in<hstring> authority, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().FindAccountProviderAsync(*reinterpret_cast<const hstring *>(&webAccountProviderId), *reinterpret_cast<const hstring *>(&authority)));
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
    HRESULT __stdcall abi_FindAccountProviderWithAuthorityForUserAsync(abi_arg_in<hstring> webAccountProviderId, abi_arg_in<hstring> authority, abi_arg_in<Windows::System::IUser> user, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider>> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().FindAccountProviderAsync(*reinterpret_cast<const hstring *>(&webAccountProviderId), *reinterpret_cast<const hstring *>(&authority), *reinterpret_cast<const Windows::System::User *>(&user)));
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
    HRESULT __stdcall abi_CreateWebAccountMonitor(abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::Security::Credentials::WebAccount>> webAccounts, abi_arg_out<Windows::Security::Authentication::Web::Core::IWebAccountMonitor> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateWebAccountMonitor(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::Security::Credentials::WebAccount> *>(&webAccounts)));
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
    HRESULT __stdcall get_ErrorCode(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ErrorMessage(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ErrorMessage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(abi_arg_out<Windows::Foundation::Collections::IMap<hstring, hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Properties());
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
    HRESULT __stdcall abi_Create(uint32_t errorCode, abi_arg_in<hstring> errorMessage, abi_arg_out<Windows::Security::Authentication::Web::Core::IWebProviderError> webProviderError) noexcept override
    {
        try
        {
            *webProviderError = detach(this->shim().Create(errorCode, *reinterpret_cast<const hstring *>(&errorMessage)));
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
    HRESULT __stdcall get_WebAccountProvider(abi_arg_out<Windows::Security::Credentials::IWebAccountProvider> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WebAccountProvider());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Scope(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Scope());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClientId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ClientId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PromptType(Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PromptType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(abi_arg_out<Windows::Foundation::Collections::IMap<hstring, hstring>> requestProperties) noexcept override
    {
        try
        {
            *requestProperties = detach(this->shim().Properties());
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
    HRESULT __stdcall get_AppProperties(abi_arg_out<Windows::Foundation::Collections::IMap<hstring, hstring>> requestProperties) noexcept override
    {
        try
        {
            *requestProperties = detach(this->shim().AppProperties());
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
struct produce<D, Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory> : produce_base<D, Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory>
{
    HRESULT __stdcall abi_Create(abi_arg_in<Windows::Security::Credentials::IWebAccountProvider> provider, abi_arg_in<hstring> scope, abi_arg_in<hstring> clientId, abi_arg_out<Windows::Security::Authentication::Web::Core::IWebTokenRequest> webTokenRequest) noexcept override
    {
        try
        {
            *webTokenRequest = detach(this->shim().Create(*reinterpret_cast<const Windows::Security::Credentials::WebAccountProvider *>(&provider), *reinterpret_cast<const hstring *>(&scope), *reinterpret_cast<const hstring *>(&clientId)));
            return S_OK;
        }
        catch (...)
        {
            *webTokenRequest = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithPromptType(abi_arg_in<Windows::Security::Credentials::IWebAccountProvider> provider, abi_arg_in<hstring> scope, abi_arg_in<hstring> clientId, Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType promptType, abi_arg_out<Windows::Security::Authentication::Web::Core::IWebTokenRequest> webTokenRequest) noexcept override
    {
        try
        {
            *webTokenRequest = detach(this->shim().CreateWithPromptType(*reinterpret_cast<const Windows::Security::Credentials::WebAccountProvider *>(&provider), *reinterpret_cast<const hstring *>(&scope), *reinterpret_cast<const hstring *>(&clientId), promptType));
            return S_OK;
        }
        catch (...)
        {
            *webTokenRequest = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithProvider(abi_arg_in<Windows::Security::Credentials::IWebAccountProvider> provider, abi_arg_out<Windows::Security::Authentication::Web::Core::IWebTokenRequest> webTokenRequest) noexcept override
    {
        try
        {
            *webTokenRequest = detach(this->shim().CreateWithProvider(*reinterpret_cast<const Windows::Security::Credentials::WebAccountProvider *>(&provider)));
            return S_OK;
        }
        catch (...)
        {
            *webTokenRequest = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithScope(abi_arg_in<Windows::Security::Credentials::IWebAccountProvider> provider, abi_arg_in<hstring> scope, abi_arg_out<Windows::Security::Authentication::Web::Core::IWebTokenRequest> webTokenRequest) noexcept override
    {
        try
        {
            *webTokenRequest = detach(this->shim().CreateWithScope(*reinterpret_cast<const Windows::Security::Credentials::WebAccountProvider *>(&provider), *reinterpret_cast<const hstring *>(&scope)));
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
    HRESULT __stdcall get_ResponseData(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Web::Core::WebTokenResponse>> value) noexcept override
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

    HRESULT __stdcall get_ResponseStatus(Windows::Security::Authentication::Web::Core::WebTokenRequestStatus * value) noexcept override
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

    HRESULT __stdcall get_ResponseError(abi_arg_out<Windows::Security::Authentication::Web::Core::IWebProviderError> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResponseError());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_InvalidateCacheAsync(abi_arg_out<Windows::Foundation::IAsyncAction> asyncInfo) noexcept override
    {
        try
        {
            *asyncInfo = detach(this->shim().InvalidateCacheAsync());
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
    HRESULT __stdcall get_Token(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Token());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProviderError(abi_arg_out<Windows::Security::Authentication::Web::Core::IWebProviderError> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProviderError());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WebAccount(abi_arg_out<Windows::Security::Credentials::IWebAccount> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WebAccount());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(abi_arg_out<Windows::Foundation::Collections::IMap<hstring, hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Properties());
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
    HRESULT __stdcall abi_CreateWithToken(abi_arg_in<hstring> token, abi_arg_out<Windows::Security::Authentication::Web::Core::IWebTokenResponse> webTokenResponse) noexcept override
    {
        try
        {
            *webTokenResponse = detach(this->shim().CreateWithToken(*reinterpret_cast<const hstring *>(&token)));
            return S_OK;
        }
        catch (...)
        {
            *webTokenResponse = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithTokenAndAccount(abi_arg_in<hstring> token, abi_arg_in<Windows::Security::Credentials::IWebAccount> webAccount, abi_arg_out<Windows::Security::Authentication::Web::Core::IWebTokenResponse> webTokenResponse) noexcept override
    {
        try
        {
            *webTokenResponse = detach(this->shim().CreateWithTokenAndAccount(*reinterpret_cast<const hstring *>(&token), *reinterpret_cast<const Windows::Security::Credentials::WebAccount *>(&webAccount)));
            return S_OK;
        }
        catch (...)
        {
            *webTokenResponse = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithTokenAccountAndError(abi_arg_in<hstring> token, abi_arg_in<Windows::Security::Credentials::IWebAccount> webAccount, abi_arg_in<Windows::Security::Authentication::Web::Core::IWebProviderError> error, abi_arg_out<Windows::Security::Authentication::Web::Core::IWebTokenResponse> webTokenResponse) noexcept override
    {
        try
        {
            *webTokenResponse = detach(this->shim().CreateWithTokenAccountAndError(*reinterpret_cast<const hstring *>(&token), *reinterpret_cast<const Windows::Security::Credentials::WebAccount *>(&webAccount), *reinterpret_cast<const Windows::Security::Authentication::Web::Core::WebProviderError *>(&error)));
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

namespace Windows::Security::Authentication::Web::Core {

template <typename D> Windows::Security::Credentials::WebAccountProvider impl_IWebTokenRequest<D>::WebAccountProvider() const
{
    Windows::Security::Credentials::WebAccountProvider value { nullptr };
    check_hresult(static_cast<const IWebTokenRequest &>(static_cast<const D &>(*this))->get_WebAccountProvider(put(value)));
    return value;
}

template <typename D> hstring impl_IWebTokenRequest<D>::Scope() const
{
    hstring value;
    check_hresult(static_cast<const IWebTokenRequest &>(static_cast<const D &>(*this))->get_Scope(put(value)));
    return value;
}

template <typename D> hstring impl_IWebTokenRequest<D>::ClientId() const
{
    hstring value;
    check_hresult(static_cast<const IWebTokenRequest &>(static_cast<const D &>(*this))->get_ClientId(put(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType impl_IWebTokenRequest<D>::PromptType() const
{
    Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType value {};
    check_hresult(static_cast<const IWebTokenRequest &>(static_cast<const D &>(*this))->get_PromptType(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> impl_IWebTokenRequest<D>::Properties() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> requestProperties;
    check_hresult(static_cast<const IWebTokenRequest &>(static_cast<const D &>(*this))->get_Properties(put(requestProperties)));
    return requestProperties;
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> impl_IWebTokenRequest2<D>::AppProperties() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> requestProperties;
    check_hresult(static_cast<const IWebTokenRequest2 &>(static_cast<const D &>(*this))->get_AppProperties(put(requestProperties)));
    return requestProperties;
}

template <typename D> Windows::Security::Credentials::WebAccount impl_IWebAccountEventArgs<D>::Account() const
{
    Windows::Security::Credentials::WebAccount value { nullptr };
    check_hresult(static_cast<const IWebAccountEventArgs &>(static_cast<const D &>(*this))->get_Account(put(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebTokenRequest impl_IWebTokenRequestFactory<D>::Create(const Windows::Security::Credentials::WebAccountProvider & provider, hstring_ref scope, hstring_ref clientId) const
{
    Windows::Security::Authentication::Web::Core::WebTokenRequest webTokenRequest { nullptr };
    check_hresult(static_cast<const IWebTokenRequestFactory &>(static_cast<const D &>(*this))->abi_Create(get(provider), get(scope), get(clientId), put(webTokenRequest)));
    return webTokenRequest;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebTokenRequest impl_IWebTokenRequestFactory<D>::CreateWithPromptType(const Windows::Security::Credentials::WebAccountProvider & provider, hstring_ref scope, hstring_ref clientId, Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType promptType) const
{
    Windows::Security::Authentication::Web::Core::WebTokenRequest webTokenRequest { nullptr };
    check_hresult(static_cast<const IWebTokenRequestFactory &>(static_cast<const D &>(*this))->abi_CreateWithPromptType(get(provider), get(scope), get(clientId), promptType, put(webTokenRequest)));
    return webTokenRequest;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebTokenRequest impl_IWebTokenRequestFactory<D>::CreateWithProvider(const Windows::Security::Credentials::WebAccountProvider & provider) const
{
    Windows::Security::Authentication::Web::Core::WebTokenRequest webTokenRequest { nullptr };
    check_hresult(static_cast<const IWebTokenRequestFactory &>(static_cast<const D &>(*this))->abi_CreateWithProvider(get(provider), put(webTokenRequest)));
    return webTokenRequest;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebTokenRequest impl_IWebTokenRequestFactory<D>::CreateWithScope(const Windows::Security::Credentials::WebAccountProvider & provider, hstring_ref scope) const
{
    Windows::Security::Authentication::Web::Core::WebTokenRequest webTokenRequest { nullptr };
    check_hresult(static_cast<const IWebTokenRequestFactory &>(static_cast<const D &>(*this))->abi_CreateWithScope(get(provider), get(scope), put(webTokenRequest)));
    return webTokenRequest;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> impl_IWebAuthenticationCoreManagerStatics<D>::GetTokenSilentlyAsync(const Windows::Security::Authentication::Web::Core::WebTokenRequest & request) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> asyncInfo;
    check_hresult(static_cast<const IWebAuthenticationCoreManagerStatics &>(static_cast<const D &>(*this))->abi_GetTokenSilentlyAsync(get(request), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> impl_IWebAuthenticationCoreManagerStatics<D>::GetTokenSilentlyAsync(const Windows::Security::Authentication::Web::Core::WebTokenRequest & request, const Windows::Security::Credentials::WebAccount & webAccount) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> asyncInfo;
    check_hresult(static_cast<const IWebAuthenticationCoreManagerStatics &>(static_cast<const D &>(*this))->abi_GetTokenSilentlyWithWebAccountAsync(get(request), get(webAccount), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> impl_IWebAuthenticationCoreManagerStatics<D>::RequestTokenAsync(const Windows::Security::Authentication::Web::Core::WebTokenRequest & request) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> asyncInfo;
    check_hresult(static_cast<const IWebAuthenticationCoreManagerStatics &>(static_cast<const D &>(*this))->abi_RequestTokenAsync(get(request), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> impl_IWebAuthenticationCoreManagerStatics<D>::RequestTokenAsync(const Windows::Security::Authentication::Web::Core::WebTokenRequest & request, const Windows::Security::Credentials::WebAccount & webAccount) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> asyncInfo;
    check_hresult(static_cast<const IWebAuthenticationCoreManagerStatics &>(static_cast<const D &>(*this))->abi_RequestTokenWithWebAccountAsync(get(request), get(webAccount), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> impl_IWebAuthenticationCoreManagerStatics<D>::FindAccountAsync(const Windows::Security::Credentials::WebAccountProvider & provider, hstring_ref webAccountId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> asyncInfo;
    check_hresult(static_cast<const IWebAuthenticationCoreManagerStatics &>(static_cast<const D &>(*this))->abi_FindAccountAsync(get(provider), get(webAccountId), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> impl_IWebAuthenticationCoreManagerStatics<D>::FindAccountProviderAsync(hstring_ref webAccountProviderId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> asyncInfo;
    check_hresult(static_cast<const IWebAuthenticationCoreManagerStatics &>(static_cast<const D &>(*this))->abi_FindAccountProviderAsync(get(webAccountProviderId), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> impl_IWebAuthenticationCoreManagerStatics<D>::FindAccountProviderAsync(hstring_ref webAccountProviderId, hstring_ref authority) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> asyncInfo;
    check_hresult(static_cast<const IWebAuthenticationCoreManagerStatics &>(static_cast<const D &>(*this))->abi_FindAccountProviderWithAuthorityAsync(get(webAccountProviderId), get(authority), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> impl_IWebAuthenticationCoreManagerStatics2<D>::FindAccountProviderAsync(hstring_ref webAccountProviderId, hstring_ref authority, const Windows::System::User & user) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> asyncInfo;
    check_hresult(static_cast<const IWebAuthenticationCoreManagerStatics2 &>(static_cast<const D &>(*this))->abi_FindAccountProviderWithAuthorityForUserAsync(get(webAccountProviderId), get(authority), get(user), put(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebAccountMonitor impl_IWebAuthenticationCoreManagerStatics3<D>::CreateWebAccountMonitor(const Windows::Foundation::Collections::IIterable<Windows::Security::Credentials::WebAccount> & webAccounts) const
{
    Windows::Security::Authentication::Web::Core::WebAccountMonitor result { nullptr };
    check_hresult(static_cast<const IWebAuthenticationCoreManagerStatics3 &>(static_cast<const D &>(*this))->abi_CreateWebAccountMonitor(get(webAccounts), put(result)));
    return result;
}

template <typename D> event_token impl_IWebAccountMonitor<D>::Updated(const Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IWebAccountMonitor &>(static_cast<const D &>(*this))->add_Updated(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IWebAccountMonitor> impl_IWebAccountMonitor<D>::Updated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IWebAccountMonitor>(this, &ABI::Windows::Security::Authentication::Web::Core::IWebAccountMonitor::remove_Updated, Updated(handler));
}

template <typename D> void impl_IWebAccountMonitor<D>::Updated(event_token token) const
{
    check_hresult(static_cast<const IWebAccountMonitor &>(static_cast<const D &>(*this))->remove_Updated(token));
}

template <typename D> event_token impl_IWebAccountMonitor<D>::Removed(const Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IWebAccountMonitor &>(static_cast<const D &>(*this))->add_Removed(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IWebAccountMonitor> impl_IWebAccountMonitor<D>::Removed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IWebAccountMonitor>(this, &ABI::Windows::Security::Authentication::Web::Core::IWebAccountMonitor::remove_Removed, Removed(handler));
}

template <typename D> void impl_IWebAccountMonitor<D>::Removed(event_token token) const
{
    check_hresult(static_cast<const IWebAccountMonitor &>(static_cast<const D &>(*this))->remove_Removed(token));
}

template <typename D> event_token impl_IWebAccountMonitor<D>::DefaultSignInAccountChanged(const Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IWebAccountMonitor &>(static_cast<const D &>(*this))->add_DefaultSignInAccountChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IWebAccountMonitor> impl_IWebAccountMonitor<D>::DefaultSignInAccountChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IWebAccountMonitor>(this, &ABI::Windows::Security::Authentication::Web::Core::IWebAccountMonitor::remove_DefaultSignInAccountChanged, DefaultSignInAccountChanged(handler));
}

template <typename D> void impl_IWebAccountMonitor<D>::DefaultSignInAccountChanged(event_token token) const
{
    check_hresult(static_cast<const IWebAccountMonitor &>(static_cast<const D &>(*this))->remove_DefaultSignInAccountChanged(token));
}

template <typename D> uint32_t impl_IWebProviderError<D>::ErrorCode() const
{
    uint32_t value {};
    check_hresult(static_cast<const IWebProviderError &>(static_cast<const D &>(*this))->get_ErrorCode(&value));
    return value;
}

template <typename D> hstring impl_IWebProviderError<D>::ErrorMessage() const
{
    hstring value;
    check_hresult(static_cast<const IWebProviderError &>(static_cast<const D &>(*this))->get_ErrorMessage(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> impl_IWebProviderError<D>::Properties() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> value;
    check_hresult(static_cast<const IWebProviderError &>(static_cast<const D &>(*this))->get_Properties(put(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebProviderError impl_IWebProviderErrorFactory<D>::Create(uint32_t errorCode, hstring_ref errorMessage) const
{
    Windows::Security::Authentication::Web::Core::WebProviderError webProviderError { nullptr };
    check_hresult(static_cast<const IWebProviderErrorFactory &>(static_cast<const D &>(*this))->abi_Create(errorCode, get(errorMessage), put(webProviderError)));
    return webProviderError;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Web::Core::WebTokenResponse> impl_IWebTokenRequestResult<D>::ResponseData() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Web::Core::WebTokenResponse> value;
    check_hresult(static_cast<const IWebTokenRequestResult &>(static_cast<const D &>(*this))->get_ResponseData(put(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebTokenRequestStatus impl_IWebTokenRequestResult<D>::ResponseStatus() const
{
    Windows::Security::Authentication::Web::Core::WebTokenRequestStatus value {};
    check_hresult(static_cast<const IWebTokenRequestResult &>(static_cast<const D &>(*this))->get_ResponseStatus(&value));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebProviderError impl_IWebTokenRequestResult<D>::ResponseError() const
{
    Windows::Security::Authentication::Web::Core::WebProviderError value { nullptr };
    check_hresult(static_cast<const IWebTokenRequestResult &>(static_cast<const D &>(*this))->get_ResponseError(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IWebTokenRequestResult<D>::InvalidateCacheAsync() const
{
    Windows::Foundation::IAsyncAction asyncInfo;
    check_hresult(static_cast<const IWebTokenRequestResult &>(static_cast<const D &>(*this))->abi_InvalidateCacheAsync(put(asyncInfo)));
    return asyncInfo;
}

template <typename D> hstring impl_IWebTokenResponse<D>::Token() const
{
    hstring value;
    check_hresult(static_cast<const IWebTokenResponse &>(static_cast<const D &>(*this))->get_Token(put(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebProviderError impl_IWebTokenResponse<D>::ProviderError() const
{
    Windows::Security::Authentication::Web::Core::WebProviderError value { nullptr };
    check_hresult(static_cast<const IWebTokenResponse &>(static_cast<const D &>(*this))->get_ProviderError(put(value)));
    return value;
}

template <typename D> Windows::Security::Credentials::WebAccount impl_IWebTokenResponse<D>::WebAccount() const
{
    Windows::Security::Credentials::WebAccount value { nullptr };
    check_hresult(static_cast<const IWebTokenResponse &>(static_cast<const D &>(*this))->get_WebAccount(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> impl_IWebTokenResponse<D>::Properties() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> value;
    check_hresult(static_cast<const IWebTokenResponse &>(static_cast<const D &>(*this))->get_Properties(put(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebTokenResponse impl_IWebTokenResponseFactory<D>::CreateWithToken(hstring_ref token) const
{
    Windows::Security::Authentication::Web::Core::WebTokenResponse webTokenResponse { nullptr };
    check_hresult(static_cast<const IWebTokenResponseFactory &>(static_cast<const D &>(*this))->abi_CreateWithToken(get(token), put(webTokenResponse)));
    return webTokenResponse;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebTokenResponse impl_IWebTokenResponseFactory<D>::CreateWithTokenAndAccount(hstring_ref token, const Windows::Security::Credentials::WebAccount & webAccount) const
{
    Windows::Security::Authentication::Web::Core::WebTokenResponse webTokenResponse { nullptr };
    check_hresult(static_cast<const IWebTokenResponseFactory &>(static_cast<const D &>(*this))->abi_CreateWithTokenAndAccount(get(token), get(webAccount), put(webTokenResponse)));
    return webTokenResponse;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebTokenResponse impl_IWebTokenResponseFactory<D>::CreateWithTokenAccountAndError(hstring_ref token, const Windows::Security::Credentials::WebAccount & webAccount, const Windows::Security::Authentication::Web::Core::WebProviderError & error) const
{
    Windows::Security::Authentication::Web::Core::WebTokenResponse webTokenResponse { nullptr };
    check_hresult(static_cast<const IWebTokenResponseFactory &>(static_cast<const D &>(*this))->abi_CreateWithTokenAccountAndError(get(token), get(webAccount), get(error), put(webTokenResponse)));
    return webTokenResponse;
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> WebAuthenticationCoreManager::GetTokenSilentlyAsync(const Windows::Security::Authentication::Web::Core::WebTokenRequest & request)
{
    return get_activation_factory<WebAuthenticationCoreManager, IWebAuthenticationCoreManagerStatics>().GetTokenSilentlyAsync(request);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> WebAuthenticationCoreManager::GetTokenSilentlyAsync(const Windows::Security::Authentication::Web::Core::WebTokenRequest & request, const Windows::Security::Credentials::WebAccount & webAccount)
{
    return get_activation_factory<WebAuthenticationCoreManager, IWebAuthenticationCoreManagerStatics>().GetTokenSilentlyAsync(request, webAccount);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> WebAuthenticationCoreManager::RequestTokenAsync(const Windows::Security::Authentication::Web::Core::WebTokenRequest & request)
{
    return get_activation_factory<WebAuthenticationCoreManager, IWebAuthenticationCoreManagerStatics>().RequestTokenAsync(request);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> WebAuthenticationCoreManager::RequestTokenAsync(const Windows::Security::Authentication::Web::Core::WebTokenRequest & request, const Windows::Security::Credentials::WebAccount & webAccount)
{
    return get_activation_factory<WebAuthenticationCoreManager, IWebAuthenticationCoreManagerStatics>().RequestTokenAsync(request, webAccount);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> WebAuthenticationCoreManager::FindAccountAsync(const Windows::Security::Credentials::WebAccountProvider & provider, hstring_ref webAccountId)
{
    return get_activation_factory<WebAuthenticationCoreManager, IWebAuthenticationCoreManagerStatics>().FindAccountAsync(provider, webAccountId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> WebAuthenticationCoreManager::FindAccountProviderAsync(hstring_ref webAccountProviderId)
{
    return get_activation_factory<WebAuthenticationCoreManager, IWebAuthenticationCoreManagerStatics>().FindAccountProviderAsync(webAccountProviderId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> WebAuthenticationCoreManager::FindAccountProviderAsync(hstring_ref webAccountProviderId, hstring_ref authority)
{
    return get_activation_factory<WebAuthenticationCoreManager, IWebAuthenticationCoreManagerStatics>().FindAccountProviderAsync(webAccountProviderId, authority);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> WebAuthenticationCoreManager::FindAccountProviderAsync(hstring_ref webAccountProviderId, hstring_ref authority, const Windows::System::User & user)
{
    return get_activation_factory<WebAuthenticationCoreManager, IWebAuthenticationCoreManagerStatics2>().FindAccountProviderAsync(webAccountProviderId, authority, user);
}

inline Windows::Security::Authentication::Web::Core::WebAccountMonitor WebAuthenticationCoreManager::CreateWebAccountMonitor(const Windows::Foundation::Collections::IIterable<Windows::Security::Credentials::WebAccount> & webAccounts)
{
    return get_activation_factory<WebAuthenticationCoreManager, IWebAuthenticationCoreManagerStatics3>().CreateWebAccountMonitor(webAccounts);
}

inline WebProviderError::WebProviderError(uint32_t errorCode, hstring_ref errorMessage) :
    WebProviderError(get_activation_factory<WebProviderError, IWebProviderErrorFactory>().Create(errorCode, errorMessage))
{}

inline WebTokenRequest::WebTokenRequest(const Windows::Security::Credentials::WebAccountProvider & provider, hstring_ref scope, hstring_ref clientId) :
    WebTokenRequest(get_activation_factory<WebTokenRequest, IWebTokenRequestFactory>().Create(provider, scope, clientId))
{}

inline WebTokenRequest::WebTokenRequest(const Windows::Security::Credentials::WebAccountProvider & provider, hstring_ref scope, hstring_ref clientId, Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType promptType) :
    WebTokenRequest(get_activation_factory<WebTokenRequest, IWebTokenRequestFactory>().CreateWithPromptType(provider, scope, clientId, promptType))
{}

inline WebTokenRequest::WebTokenRequest(const Windows::Security::Credentials::WebAccountProvider & provider) :
    WebTokenRequest(get_activation_factory<WebTokenRequest, IWebTokenRequestFactory>().CreateWithProvider(provider))
{}

inline WebTokenRequest::WebTokenRequest(const Windows::Security::Credentials::WebAccountProvider & provider, hstring_ref scope) :
    WebTokenRequest(get_activation_factory<WebTokenRequest, IWebTokenRequestFactory>().CreateWithScope(provider, scope))
{}

inline WebTokenResponse::WebTokenResponse() :
    WebTokenResponse(activate_instance<WebTokenResponse>())
{}

inline WebTokenResponse::WebTokenResponse(hstring_ref token) :
    WebTokenResponse(get_activation_factory<WebTokenResponse, IWebTokenResponseFactory>().CreateWithToken(token))
{}

inline WebTokenResponse::WebTokenResponse(hstring_ref token, const Windows::Security::Credentials::WebAccount & webAccount) :
    WebTokenResponse(get_activation_factory<WebTokenResponse, IWebTokenResponseFactory>().CreateWithTokenAndAccount(token, webAccount))
{}

inline WebTokenResponse::WebTokenResponse(hstring_ref token, const Windows::Security::Credentials::WebAccount & webAccount, const Windows::Security::Authentication::Web::Core::WebProviderError & error) :
    WebTokenResponse(get_activation_factory<WebTokenResponse, IWebTokenResponseFactory>().CreateWithTokenAccountAndError(token, webAccount, error))
{}

}

}
