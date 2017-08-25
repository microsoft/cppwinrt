// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Security.Authentication.Web.1.h"
#include "winrt/impl/Windows.Security.Authentication.Web.Core.1.h"
#include "winrt/impl/Windows.Security.Credentials.1.h"
#include "winrt/impl/Windows.Security.Cryptography.Core.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Web.Http.1.h"
#include "winrt/impl/Windows.Security.Authentication.Web.Provider.1.h"

WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Web::Provider {

struct WINRT_EBO WebAccountClientView :
    Windows::Security::Authentication::Web::Provider::IWebAccountClientView
{
    WebAccountClientView(std::nullptr_t) noexcept {}
    WebAccountClientView(Windows::Security::Authentication::Web::Provider::WebAccountClientViewType const& viewType, Windows::Foundation::Uri const& applicationCallbackUri);
    WebAccountClientView(Windows::Security::Authentication::Web::Provider::WebAccountClientViewType const& viewType, Windows::Foundation::Uri const& applicationCallbackUri, param::hstring const& accountPairwiseId);
};

struct WebAccountManager
{
    WebAccountManager() = delete;
    static Windows::Foundation::IAsyncAction UpdateWebAccountPropertiesAsync(Windows::Security::Credentials::WebAccount const& webAccount, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& additionalProperties);
    static Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> AddWebAccountAsync(param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props);
    static Windows::Foundation::IAsyncAction DeleteWebAccountAsync(Windows::Security::Credentials::WebAccount const& webAccount);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount>> FindAllProviderWebAccountsAsync();
    static Windows::Foundation::IAsyncAction PushCookiesAsync(Windows::Foundation::Uri const& uri, param::async_vector_view<Windows::Web::Http::HttpCookie> const& cookies);
    static Windows::Foundation::IAsyncAction SetViewAsync(Windows::Security::Credentials::WebAccount const& webAccount, Windows::Security::Authentication::Web::Provider::WebAccountClientView const& view);
    static Windows::Foundation::IAsyncAction ClearViewAsync(Windows::Security::Credentials::WebAccount const& webAccount, Windows::Foundation::Uri const& applicationCallbackUri);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Web::Provider::WebAccountClientView>> GetViewsAsync(Windows::Security::Credentials::WebAccount const& webAccount);
    static Windows::Foundation::IAsyncAction SetWebAccountPictureAsync(Windows::Security::Credentials::WebAccount const& webAccount, Windows::Storage::Streams::IRandomAccessStream const& webAccountPicture);
    static Windows::Foundation::IAsyncAction ClearWebAccountPictureAsync(Windows::Security::Credentials::WebAccount const& webAccount);
    static Windows::Foundation::IAsyncAction PullCookiesAsync(param::hstring const& uriString, param::hstring const& callerPFN);
    static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount>> FindAllProviderWebAccountsForUserAsync(Windows::System::User const& user);
    static Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> AddWebAccountForUserAsync(Windows::System::User const& user, param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props);
    static Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> AddWebAccountForUserAsync(Windows::System::User const& user, param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope);
    static Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> AddWebAccountForUserAsync(Windows::System::User const& user, param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope, param::hstring const& perUserWebAccountId);
    static Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> AddWebAccountAsync(param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope, param::hstring const& perUserWebAccountId);
    static Windows::Foundation::IAsyncAction SetPerAppToPerUserAccountAsync(Windows::Security::Credentials::WebAccount const& perAppAccount, param::hstring const& perUserWebAccountId);
    static Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> GetPerUserFromPerAppAccountAsync(Windows::Security::Credentials::WebAccount const& perAppAccount);
    static Windows::Foundation::IAsyncAction ClearPerUserFromPerAppAccountAsync(Windows::Security::Credentials::WebAccount const& perAppAccount);
    static Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> AddWebAccountAsync(param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope);
    static Windows::Foundation::IAsyncAction SetScopeAsync(Windows::Security::Credentials::WebAccount const& webAccount, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope);
    static Windows::Security::Authentication::Web::Provider::WebAccountScope GetScope(Windows::Security::Credentials::WebAccount const& webAccount);
};

struct WINRT_EBO WebAccountProviderAddAccountOperation :
    Windows::Security::Authentication::Web::Provider::IWebAccountProviderAddAccountOperation
{
    WebAccountProviderAddAccountOperation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebAccountProviderDeleteAccountOperation :
    Windows::Security::Authentication::Web::Provider::IWebAccountProviderDeleteAccountOperation,
    impl::require<WebAccountProviderDeleteAccountOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation>
{
    WebAccountProviderDeleteAccountOperation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebAccountProviderGetTokenSilentOperation :
    Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation,
    impl::require<WebAccountProviderGetTokenSilentOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderSilentReportOperation>
{
    WebAccountProviderGetTokenSilentOperation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebAccountProviderManageAccountOperation :
    Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation
{
    WebAccountProviderManageAccountOperation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebAccountProviderRequestTokenOperation :
    Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation,
    impl::require<WebAccountProviderRequestTokenOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderUIReportOperation>
{
    WebAccountProviderRequestTokenOperation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebAccountProviderRetrieveCookiesOperation :
    Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation,
    impl::require<WebAccountProviderRetrieveCookiesOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation>
{
    WebAccountProviderRetrieveCookiesOperation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebAccountProviderSignOutAccountOperation :
    Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation,
    impl::require<WebAccountProviderSignOutAccountOperation, Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation>
{
    WebAccountProviderSignOutAccountOperation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebAccountProviderTriggerDetails :
    Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects,
    impl::require<WebAccountProviderTriggerDetails, Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects2>
{
    WebAccountProviderTriggerDetails(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebProviderTokenRequest :
    Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest,
    impl::require<WebProviderTokenRequest, Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest2>
{
    WebProviderTokenRequest(std::nullptr_t) noexcept {}
};

struct WINRT_EBO WebProviderTokenResponse :
    Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse
{
    WebProviderTokenResponse(std::nullptr_t) noexcept {}
    WebProviderTokenResponse(Windows::Security::Authentication::Web::Core::WebTokenResponse const& webTokenResponse);
};

}
