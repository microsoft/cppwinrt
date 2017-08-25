// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Security.Credentials.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Security.Authentication.Web.Core.1.h"

WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Web::Core {

struct WINRT_EBO WebAccountEventArgs :
    Windows::Security::Authentication::Web::Core::IWebAccountEventArgs
{
    WebAccountEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebAccountMonitor :
    Windows::Security::Authentication::Web::Core::IWebAccountMonitor
{
    WebAccountMonitor(std::nullptr_t) noexcept {}
};

struct WebAuthenticationCoreManager
{
    WebAuthenticationCoreManager() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> GetTokenSilentlyAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request);
    static Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> GetTokenSilentlyAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request, Windows::Security::Credentials::WebAccount const& webAccount);
    static Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> RequestTokenAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request);
    static Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> RequestTokenAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request, Windows::Security::Credentials::WebAccount const& webAccount);
    static Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> FindAccountAsync(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& webAccountId);
    static Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> FindAccountProviderAsync(param::hstring const& webAccountProviderId);
    static Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> FindAccountProviderAsync(param::hstring const& webAccountProviderId, param::hstring const& authority);
    static Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> FindAccountProviderAsync(param::hstring const& webAccountProviderId, param::hstring const& authority, Windows::System::User const& user);
    static Windows::Security::Authentication::Web::Core::WebAccountMonitor CreateWebAccountMonitor(param::iterable<Windows::Security::Credentials::WebAccount> const& webAccounts);
};

struct WINRT_EBO WebProviderError :
    Windows::Security::Authentication::Web::Core::IWebProviderError
{
    WebProviderError(std::nullptr_t) noexcept {}
    WebProviderError(uint32_t errorCode, param::hstring const& errorMessage);
};

struct WINRT_EBO WebTokenRequest :
    Windows::Security::Authentication::Web::Core::IWebTokenRequest,
    impl::require<WebTokenRequest, Windows::Security::Authentication::Web::Core::IWebTokenRequest2, Windows::Security::Authentication::Web::Core::IWebTokenRequest3>
{
    WebTokenRequest(std::nullptr_t) noexcept {}
    WebTokenRequest(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& scope, param::hstring const& clientId);
    WebTokenRequest(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& scope, param::hstring const& clientId, Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType const& promptType);
    WebTokenRequest(Windows::Security::Credentials::WebAccountProvider const& provider);
    WebTokenRequest(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& scope);
};

struct WINRT_EBO WebTokenRequestResult :
    Windows::Security::Authentication::Web::Core::IWebTokenRequestResult
{
    WebTokenRequestResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebTokenResponse :
    Windows::Security::Authentication::Web::Core::IWebTokenResponse
{
    WebTokenResponse(std::nullptr_t) noexcept {}
    WebTokenResponse();
    WebTokenResponse(param::hstring const& token);
    WebTokenResponse(param::hstring const& token, Windows::Security::Credentials::WebAccount const& webAccount);
    WebTokenResponse(param::hstring const& token, Windows::Security::Credentials::WebAccount const& webAccount, Windows::Security::Authentication::Web::Core::WebProviderError const& error);
};

}
