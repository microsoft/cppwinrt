// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Security.Authentication.Web.2.h"
#include "winrt/impl/Windows.Security.Authentication.Web.Core.2.h"
#include "winrt/impl/Windows.Security.Credentials.2.h"
#include "winrt/impl/Windows.Security.Cryptography.Core.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.Web.Http.2.h"
#include "winrt/impl/Windows.Security.Authentication.Web.Provider.2.h"
#include "winrt/Windows.Security.Authentication.Web.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::Uri consume_Windows_Security_Authentication_Web_Provider_IWebAccountClientView<D>::ApplicationCallbackUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountClientView)->get_ApplicationCallbackUri(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::Provider::WebAccountClientViewType consume_Windows_Security_Authentication_Web_Provider_IWebAccountClientView<D>::Type() const
{
    Windows::Security::Authentication::Web::Provider::WebAccountClientViewType value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountClientView)->get_Type(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Authentication_Web_Provider_IWebAccountClientView<D>::AccountPairwiseId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountClientView)->get_AccountPairwiseId(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::Provider::WebAccountClientView consume_Windows_Security_Authentication_Web_Provider_IWebAccountClientViewFactory<D>::Create(Windows::Security::Authentication::Web::Provider::WebAccountClientViewType const& viewType, Windows::Foundation::Uri const& applicationCallbackUri) const
{
    Windows::Security::Authentication::Web::Provider::WebAccountClientView view{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountClientViewFactory)->Create(get_abi(viewType), get_abi(applicationCallbackUri), put_abi(view)));
    return view;
}

template <typename D> Windows::Security::Authentication::Web::Provider::WebAccountClientView consume_Windows_Security_Authentication_Web_Provider_IWebAccountClientViewFactory<D>::CreateWithPairwiseId(Windows::Security::Authentication::Web::Provider::WebAccountClientViewType const& viewType, Windows::Foundation::Uri const& applicationCallbackUri, param::hstring const& accountPairwiseId) const
{
    Windows::Security::Authentication::Web::Provider::WebAccountClientView view{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountClientViewFactory)->CreateWithPairwiseId(get_abi(viewType), get_abi(applicationCallbackUri), get_abi(accountPairwiseId), put_abi(view)));
    return view;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics<D>::UpdateWebAccountPropertiesAsync(Windows::Security::Credentials::WebAccount const& webAccount, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& additionalProperties) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics)->UpdateWebAccountPropertiesAsync(get_abi(webAccount), get_abi(webAccountUserName), get_abi(additionalProperties), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics<D>::AddWebAccountAsync(param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics)->AddWebAccountAsync(get_abi(webAccountId), get_abi(webAccountUserName), get_abi(props), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics<D>::DeleteWebAccountAsync(Windows::Security::Credentials::WebAccount const& webAccount) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics)->DeleteWebAccountAsync(get_abi(webAccount), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount>> consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics<D>::FindAllProviderWebAccountsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount>> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics)->FindAllProviderWebAccountsAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics<D>::PushCookiesAsync(Windows::Foundation::Uri const& uri, param::async_vector_view<Windows::Web::Http::HttpCookie> const& cookies) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics)->PushCookiesAsync(get_abi(uri), get_abi(cookies), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics<D>::SetViewAsync(Windows::Security::Credentials::WebAccount const& webAccount, Windows::Security::Authentication::Web::Provider::WebAccountClientView const& view) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics)->SetViewAsync(get_abi(webAccount), get_abi(view), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics<D>::ClearViewAsync(Windows::Security::Credentials::WebAccount const& webAccount, Windows::Foundation::Uri const& applicationCallbackUri) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics)->ClearViewAsync(get_abi(webAccount), get_abi(applicationCallbackUri), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Web::Provider::WebAccountClientView>> consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics<D>::GetViewsAsync(Windows::Security::Credentials::WebAccount const& webAccount) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Web::Provider::WebAccountClientView>> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics)->GetViewsAsync(get_abi(webAccount), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics<D>::SetWebAccountPictureAsync(Windows::Security::Credentials::WebAccount const& webAccount, Windows::Storage::Streams::IRandomAccessStream const& webAccountPicture) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics)->SetWebAccountPictureAsync(get_abi(webAccount), get_abi(webAccountPicture), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics<D>::ClearWebAccountPictureAsync(Windows::Security::Credentials::WebAccount const& webAccount) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics)->ClearWebAccountPictureAsync(get_abi(webAccount), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics2<D>::PullCookiesAsync(param::hstring const& uriString, param::hstring const& callerPFN) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics2)->PullCookiesAsync(get_abi(uriString), get_abi(callerPFN), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount>> consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics3<D>::FindAllProviderWebAccountsForUserAsync(Windows::System::User const& user) const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3)->FindAllProviderWebAccountsForUserAsync(get_abi(user), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics3<D>::AddWebAccountForUserAsync(Windows::System::User const& user, param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3)->AddWebAccountForUserAsync(get_abi(user), get_abi(webAccountId), get_abi(webAccountUserName), get_abi(props), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics3<D>::AddWebAccountForUserAsync(Windows::System::User const& user, param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3)->AddWebAccountWithScopeForUserAsync(get_abi(user), get_abi(webAccountId), get_abi(webAccountUserName), get_abi(props), get_abi(scope), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics3<D>::AddWebAccountForUserAsync(Windows::System::User const& user, param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope, param::hstring const& perUserWebAccountId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3)->AddWebAccountWithScopeAndMapForUserAsync(get_abi(user), get_abi(webAccountId), get_abi(webAccountUserName), get_abi(props), get_abi(scope), get_abi(perUserWebAccountId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> consume_Windows_Security_Authentication_Web_Provider_IWebAccountMapManagerStatics<D>::AddWebAccountAsync(param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope, param::hstring const& perUserWebAccountId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics)->AddWebAccountWithScopeAndMapAsync(get_abi(webAccountId), get_abi(webAccountUserName), get_abi(props), get_abi(scope), get_abi(perUserWebAccountId), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Authentication_Web_Provider_IWebAccountMapManagerStatics<D>::SetPerAppToPerUserAccountAsync(Windows::Security::Credentials::WebAccount const& perAppAccount, param::hstring const& perUserWebAccountId) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics)->SetPerAppToPerUserAccountAsync(get_abi(perAppAccount), get_abi(perUserWebAccountId), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> consume_Windows_Security_Authentication_Web_Provider_IWebAccountMapManagerStatics<D>::GetPerUserFromPerAppAccountAsync(Windows::Security::Credentials::WebAccount const& perAppAccount) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics)->GetPerUserFromPerAppAccountAsync(get_abi(perAppAccount), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Authentication_Web_Provider_IWebAccountMapManagerStatics<D>::ClearPerUserFromPerAppAccountAsync(Windows::Security::Credentials::WebAccount const& perAppAccount) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics)->ClearPerUserFromPerAppAccountAsync(get_abi(perAppAccount), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> void consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderAddAccountOperation<D>::ReportCompleted() const
{
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderAddAccountOperation)->ReportCompleted());
}

template <typename D> void consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderBaseReportOperation<D>::ReportCompleted() const
{
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation)->ReportCompleted());
}

template <typename D> void consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderBaseReportOperation<D>::ReportError(Windows::Security::Authentication::Web::Core::WebProviderError const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation)->ReportError(get_abi(value)));
}

template <typename D> Windows::Security::Credentials::WebAccount consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderDeleteAccountOperation<D>::WebAccount() const
{
    Windows::Security::Credentials::WebAccount value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderDeleteAccountOperation)->get_WebAccount(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Credentials::WebAccount consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderManageAccountOperation<D>::WebAccount() const
{
    Windows::Security::Credentials::WebAccount value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation)->get_WebAccount(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderManageAccountOperation<D>::ReportCompleted() const
{
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation)->ReportCompleted());
}

template <typename D> Windows::Security::Authentication::Web::Provider::WebAccountProviderOperationKind consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderOperation<D>::Kind() const
{
    Windows::Security::Authentication::Web::Provider::WebAccountProviderOperationKind value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderRetrieveCookiesOperation<D>::Context() const
{
    Windows::Foundation::Uri webCookieRequestContext{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation)->get_Context(put_abi(webCookieRequestContext)));
    return webCookieRequestContext;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Web::Http::HttpCookie> consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderRetrieveCookiesOperation<D>::Cookies() const
{
    Windows::Foundation::Collections::IVector<Windows::Web::Http::HttpCookie> cookies{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation)->get_Cookies(put_abi(cookies)));
    return cookies;
}

template <typename D> void consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderRetrieveCookiesOperation<D>::Uri(Windows::Foundation::Uri const& uri) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation)->put_Uri(get_abi(uri)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderRetrieveCookiesOperation<D>::Uri() const
{
    Windows::Foundation::Uri uri{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation)->get_Uri(put_abi(uri)));
    return uri;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderRetrieveCookiesOperation<D>::ApplicationCallbackUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation)->get_ApplicationCallbackUri(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Credentials::WebAccount consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderSignOutAccountOperation<D>::WebAccount() const
{
    Windows::Security::Credentials::WebAccount value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation)->get_WebAccount(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderSignOutAccountOperation<D>::ApplicationCallbackUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation)->get_ApplicationCallbackUri(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderSignOutAccountOperation<D>::ClientId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation)->get_ClientId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderSilentReportOperation<D>::ReportUserInteractionRequired() const
{
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderSilentReportOperation)->ReportUserInteractionRequired());
}

template <typename D> void consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderSilentReportOperation<D>::ReportUserInteractionRequired(Windows::Security::Authentication::Web::Core::WebProviderError const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderSilentReportOperation)->ReportUserInteractionRequiredWithError(get_abi(value)));
}

template <typename D> Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderTokenObjects<D>::Operation() const
{
    Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects)->get_Operation(put_abi(value)));
    return value;
}

template <typename D> Windows::System::User consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderTokenObjects2<D>::User() const
{
    Windows::System::User value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects2)->get_User(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::Provider::WebProviderTokenRequest consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderTokenOperation<D>::ProviderRequest() const
{
    Windows::Security::Authentication::Web::Provider::WebProviderTokenRequest webTokenRequest{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation)->get_ProviderRequest(put_abi(webTokenRequest)));
    return webTokenRequest;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse> consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderTokenOperation<D>::ProviderResponses() const
{
    Windows::Foundation::Collections::IVector<Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation)->get_ProviderResponses(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderTokenOperation<D>::CacheExpirationTime(Windows::Foundation::DateTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation)->put_CacheExpirationTime(get_abi(value)));
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderTokenOperation<D>::CacheExpirationTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation)->get_CacheExpirationTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderUIReportOperation<D>::ReportUserCanceled() const
{
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountProviderUIReportOperation)->ReportUserCanceled());
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> consume_Windows_Security_Authentication_Web_Provider_IWebAccountScopeManagerStatics<D>::AddWebAccountAsync(param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountScopeManagerStatics)->AddWebAccountWithScopeAsync(get_abi(webAccountId), get_abi(webAccountUserName), get_abi(props), get_abi(scope), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Security_Authentication_Web_Provider_IWebAccountScopeManagerStatics<D>::SetScopeAsync(Windows::Security::Credentials::WebAccount const& webAccount, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountScopeManagerStatics)->SetScopeAsync(get_abi(webAccount), get_abi(scope), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Security::Authentication::Web::Provider::WebAccountScope consume_Windows_Security_Authentication_Web_Provider_IWebAccountScopeManagerStatics<D>::GetScope(Windows::Security::Credentials::WebAccount const& webAccount) const
{
    Windows::Security::Authentication::Web::Provider::WebAccountScope scope{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebAccountScopeManagerStatics)->GetScope(get_abi(webAccount), put_abi(scope)));
    return scope;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebTokenRequest consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenRequest<D>::ClientRequest() const
{
    Windows::Security::Authentication::Web::Core::WebTokenRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest)->get_ClientRequest(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount> consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenRequest<D>::WebAccounts() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest)->get_WebAccounts(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::Provider::WebAccountSelectionOptions consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenRequest<D>::WebAccountSelectionOptions() const
{
    Windows::Security::Authentication::Web::Provider::WebAccountSelectionOptions value{};
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest)->get_WebAccountSelectionOptions(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenRequest<D>::ApplicationCallbackUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest)->get_ApplicationCallbackUri(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Core::CryptographicKey> consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenRequest<D>::GetApplicationTokenBindingKeyAsync(Windows::Security::Authentication::Web::TokenBindingKeyType const& keyType, Windows::Foundation::Uri const& target) const
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Core::CryptographicKey> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest)->GetApplicationTokenBindingKeyAsync(get_abi(keyType), get_abi(target), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenRequest2<D>::GetApplicationTokenBindingKeyIdAsync(Windows::Security::Authentication::Web::TokenBindingKeyType const& keyType, Windows::Foundation::Uri const& target) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest2)->GetApplicationTokenBindingKeyIdAsync(get_abi(keyType), get_abi(target), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Security::Authentication::Web::Core::WebTokenResponse consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenResponse<D>::ClientResponse() const
{
    Windows::Security::Authentication::Web::Core::WebTokenResponse value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse)->get_ClientResponse(put_abi(value)));
    return value;
}

template <typename D> Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenResponseFactory<D>::Create(Windows::Security::Authentication::Web::Core::WebTokenResponse const& webTokenResponse) const
{
    Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse webProviderTokenResponse{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponseFactory)->Create(get_abi(webTokenResponse), put_abi(webProviderTokenResponse)));
    return webProviderTokenResponse;
}

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountClientView> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountClientView>
{
    HRESULT __stdcall get_ApplicationCallbackUri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ApplicationCallbackUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Type(abi_t<Windows::Security::Authentication::Web::Provider::WebAccountClientViewType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AccountPairwiseId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AccountPairwiseId());
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
struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountClientViewFactory> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountClientViewFactory>
{
    HRESULT __stdcall Create(abi_t<Windows::Security::Authentication::Web::Provider::WebAccountClientViewType> viewType, ::IUnknown* applicationCallbackUri, ::IUnknown** view) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *view = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Security::Authentication::Web::Provider::WebAccountClientViewType const*>(&viewType), *reinterpret_cast<Windows::Foundation::Uri const*>(&applicationCallbackUri)));
            return S_OK;
        }
        catch (...)
        {
            *view = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithPairwiseId(abi_t<Windows::Security::Authentication::Web::Provider::WebAccountClientViewType> viewType, ::IUnknown* applicationCallbackUri, HSTRING accountPairwiseId, ::IUnknown** view) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *view = detach_abi(this->shim().CreateWithPairwiseId(*reinterpret_cast<Windows::Security::Authentication::Web::Provider::WebAccountClientViewType const*>(&viewType), *reinterpret_cast<Windows::Foundation::Uri const*>(&applicationCallbackUri), *reinterpret_cast<hstring const*>(&accountPairwiseId)));
            return S_OK;
        }
        catch (...)
        {
            *view = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics>
{
    HRESULT __stdcall UpdateWebAccountPropertiesAsync(::IUnknown* webAccount, HSTRING webAccountUserName, ::IUnknown* additionalProperties, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().UpdateWebAccountPropertiesAsync(*reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&webAccount), *reinterpret_cast<hstring const*>(&webAccountUserName), *reinterpret_cast<Windows::Foundation::Collections::IMapView<hstring, hstring> const*>(&additionalProperties)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddWebAccountAsync(HSTRING webAccountId, HSTRING webAccountUserName, ::IUnknown* props, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().AddWebAccountAsync(*reinterpret_cast<hstring const*>(&webAccountId), *reinterpret_cast<hstring const*>(&webAccountUserName), *reinterpret_cast<Windows::Foundation::Collections::IMapView<hstring, hstring> const*>(&props)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeleteWebAccountAsync(::IUnknown* webAccount, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().DeleteWebAccountAsync(*reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&webAccount)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAllProviderWebAccountsAsync(::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().FindAllProviderWebAccountsAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PushCookiesAsync(::IUnknown* uri, ::IUnknown* cookies, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().PushCookiesAsync(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri), *reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::Web::Http::HttpCookie> const*>(&cookies)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetViewAsync(::IUnknown* webAccount, ::IUnknown* view, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().SetViewAsync(*reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&webAccount), *reinterpret_cast<Windows::Security::Authentication::Web::Provider::WebAccountClientView const*>(&view)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ClearViewAsync(::IUnknown* webAccount, ::IUnknown* applicationCallbackUri, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().ClearViewAsync(*reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&webAccount), *reinterpret_cast<Windows::Foundation::Uri const*>(&applicationCallbackUri)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetViewsAsync(::IUnknown* webAccount, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().GetViewsAsync(*reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&webAccount)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetWebAccountPictureAsync(::IUnknown* webAccount, ::IUnknown* webAccountPicture, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().SetWebAccountPictureAsync(*reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&webAccount), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&webAccountPicture)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ClearWebAccountPictureAsync(::IUnknown* webAccount, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().ClearWebAccountPictureAsync(*reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&webAccount)));
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
struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics2> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics2>
{
    HRESULT __stdcall PullCookiesAsync(HSTRING uriString, HSTRING callerPFN, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().PullCookiesAsync(*reinterpret_cast<hstring const*>(&uriString), *reinterpret_cast<hstring const*>(&callerPFN)));
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
struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3>
{
    HRESULT __stdcall FindAllProviderWebAccountsForUserAsync(::IUnknown* user, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FindAllProviderWebAccountsForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddWebAccountForUserAsync(::IUnknown* user, HSTRING webAccountId, HSTRING webAccountUserName, ::IUnknown* props, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().AddWebAccountForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<hstring const*>(&webAccountId), *reinterpret_cast<hstring const*>(&webAccountUserName), *reinterpret_cast<Windows::Foundation::Collections::IMapView<hstring, hstring> const*>(&props)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddWebAccountWithScopeForUserAsync(::IUnknown* user, HSTRING webAccountId, HSTRING webAccountUserName, ::IUnknown* props, abi_t<Windows::Security::Authentication::Web::Provider::WebAccountScope> scope, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().AddWebAccountForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<hstring const*>(&webAccountId), *reinterpret_cast<hstring const*>(&webAccountUserName), *reinterpret_cast<Windows::Foundation::Collections::IMapView<hstring, hstring> const*>(&props), *reinterpret_cast<Windows::Security::Authentication::Web::Provider::WebAccountScope const*>(&scope)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddWebAccountWithScopeAndMapForUserAsync(::IUnknown* user, HSTRING webAccountId, HSTRING webAccountUserName, ::IUnknown* props, abi_t<Windows::Security::Authentication::Web::Provider::WebAccountScope> scope, HSTRING perUserWebAccountId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().AddWebAccountForUserAsync(*reinterpret_cast<Windows::System::User const*>(&user), *reinterpret_cast<hstring const*>(&webAccountId), *reinterpret_cast<hstring const*>(&webAccountUserName), *reinterpret_cast<Windows::Foundation::Collections::IMapView<hstring, hstring> const*>(&props), *reinterpret_cast<Windows::Security::Authentication::Web::Provider::WebAccountScope const*>(&scope), *reinterpret_cast<hstring const*>(&perUserWebAccountId)));
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
struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics>
{
    HRESULT __stdcall AddWebAccountWithScopeAndMapAsync(HSTRING webAccountId, HSTRING webAccountUserName, ::IUnknown* props, abi_t<Windows::Security::Authentication::Web::Provider::WebAccountScope> scope, HSTRING perUserWebAccountId, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().AddWebAccountAsync(*reinterpret_cast<hstring const*>(&webAccountId), *reinterpret_cast<hstring const*>(&webAccountUserName), *reinterpret_cast<Windows::Foundation::Collections::IMapView<hstring, hstring> const*>(&props), *reinterpret_cast<Windows::Security::Authentication::Web::Provider::WebAccountScope const*>(&scope), *reinterpret_cast<hstring const*>(&perUserWebAccountId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPerAppToPerUserAccountAsync(::IUnknown* perAppAccount, HSTRING perUserWebAccountId, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().SetPerAppToPerUserAccountAsync(*reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&perAppAccount), *reinterpret_cast<hstring const*>(&perUserWebAccountId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPerUserFromPerAppAccountAsync(::IUnknown* perAppAccount, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().GetPerUserFromPerAppAccountAsync(*reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&perAppAccount)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ClearPerUserFromPerAppAccountAsync(::IUnknown* perAppAccount, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().ClearPerUserFromPerAppAccountAsync(*reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&perAppAccount)));
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
struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderAddAccountOperation> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderAddAccountOperation>
{
    HRESULT __stdcall ReportCompleted() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportCompleted();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation>
{
    HRESULT __stdcall ReportCompleted() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportCompleted();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportError(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportError(*reinterpret_cast<Windows::Security::Authentication::Web::Core::WebProviderError const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderDeleteAccountOperation> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderDeleteAccountOperation>
{
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
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation>
{
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

    HRESULT __stdcall ReportCompleted() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportCompleted();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>
{
    HRESULT __stdcall get_Kind(abi_t<Windows::Security::Authentication::Web::Provider::WebAccountProviderOperationKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation>
{
    HRESULT __stdcall get_Context(::IUnknown** webCookieRequestContext) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *webCookieRequestContext = detach_abi(this->shim().Context());
            return S_OK;
        }
        catch (...)
        {
            *webCookieRequestContext = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Cookies(::IUnknown** cookies) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *cookies = detach_abi(this->shim().Cookies());
            return S_OK;
        }
        catch (...)
        {
            *cookies = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Uri(::IUnknown* uri) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Uri(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Uri(::IUnknown** uri) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *uri = detach_abi(this->shim().Uri());
            return S_OK;
        }
        catch (...)
        {
            *uri = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ApplicationCallbackUri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ApplicationCallbackUri());
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
struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation>
{
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

    HRESULT __stdcall get_ApplicationCallbackUri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ApplicationCallbackUri());
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
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderSilentReportOperation> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderSilentReportOperation>
{
    HRESULT __stdcall ReportUserInteractionRequired() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportUserInteractionRequired();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportUserInteractionRequiredWithError(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportUserInteractionRequired(*reinterpret_cast<Windows::Security::Authentication::Web::Core::WebProviderError const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects>
{
    HRESULT __stdcall get_Operation(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Operation());
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
struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects2> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects2>
{
    HRESULT __stdcall get_User(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().User());
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
struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation>
{
    HRESULT __stdcall get_ProviderRequest(::IUnknown** webTokenRequest) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *webTokenRequest = detach_abi(this->shim().ProviderRequest());
            return S_OK;
        }
        catch (...)
        {
            *webTokenRequest = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProviderResponses(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProviderResponses());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CacheExpirationTime(abi_t<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CacheExpirationTime(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CacheExpirationTime(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CacheExpirationTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderUIReportOperation> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountProviderUIReportOperation>
{
    HRESULT __stdcall ReportUserCanceled() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportUserCanceled();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Provider::IWebAccountScopeManagerStatics> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebAccountScopeManagerStatics>
{
    HRESULT __stdcall AddWebAccountWithScopeAsync(HSTRING webAccountId, HSTRING webAccountUserName, ::IUnknown* props, abi_t<Windows::Security::Authentication::Web::Provider::WebAccountScope> scope, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().AddWebAccountAsync(*reinterpret_cast<hstring const*>(&webAccountId), *reinterpret_cast<hstring const*>(&webAccountUserName), *reinterpret_cast<Windows::Foundation::Collections::IMapView<hstring, hstring> const*>(&props), *reinterpret_cast<Windows::Security::Authentication::Web::Provider::WebAccountScope const*>(&scope)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetScopeAsync(::IUnknown* webAccount, abi_t<Windows::Security::Authentication::Web::Provider::WebAccountScope> scope, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().SetScopeAsync(*reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&webAccount), *reinterpret_cast<Windows::Security::Authentication::Web::Provider::WebAccountScope const*>(&scope)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetScope(::IUnknown* webAccount, abi_t<Windows::Security::Authentication::Web::Provider::WebAccountScope>* scope) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *scope = detach_abi(this->shim().GetScope(*reinterpret_cast<Windows::Security::Credentials::WebAccount const*>(&webAccount)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest>
{
    HRESULT __stdcall get_ClientRequest(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClientRequest());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WebAccounts(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WebAccounts());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WebAccountSelectionOptions(abi_t<Windows::Security::Authentication::Web::Provider::WebAccountSelectionOptions>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WebAccountSelectionOptions());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ApplicationCallbackUri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ApplicationCallbackUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetApplicationTokenBindingKeyAsync(abi_t<Windows::Security::Authentication::Web::TokenBindingKeyType> keyType, ::IUnknown* target, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().GetApplicationTokenBindingKeyAsync(*reinterpret_cast<Windows::Security::Authentication::Web::TokenBindingKeyType const*>(&keyType), *reinterpret_cast<Windows::Foundation::Uri const*>(&target)));
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
struct produce<D, Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest2> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest2>
{
    HRESULT __stdcall GetApplicationTokenBindingKeyIdAsync(abi_t<Windows::Security::Authentication::Web::TokenBindingKeyType> keyType, ::IUnknown* target, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().GetApplicationTokenBindingKeyIdAsync(*reinterpret_cast<Windows::Security::Authentication::Web::TokenBindingKeyType const*>(&keyType), *reinterpret_cast<Windows::Foundation::Uri const*>(&target)));
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
struct produce<D, Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse>
{
    HRESULT __stdcall get_ClientResponse(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClientResponse());
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
struct produce<D, Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponseFactory> : produce_base<D, Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponseFactory>
{
    HRESULT __stdcall Create(::IUnknown* webTokenResponse, ::IUnknown** webProviderTokenResponse) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *webProviderTokenResponse = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Security::Authentication::Web::Core::WebTokenResponse const*>(&webTokenResponse)));
            return S_OK;
        }
        catch (...)
        {
            *webProviderTokenResponse = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Web::Provider {

inline WebAccountClientView::WebAccountClientView(Windows::Security::Authentication::Web::Provider::WebAccountClientViewType const& viewType, Windows::Foundation::Uri const& applicationCallbackUri) :
    WebAccountClientView(get_activation_factory<WebAccountClientView, Windows::Security::Authentication::Web::Provider::IWebAccountClientViewFactory>().Create(viewType, applicationCallbackUri))
{}

inline WebAccountClientView::WebAccountClientView(Windows::Security::Authentication::Web::Provider::WebAccountClientViewType const& viewType, Windows::Foundation::Uri const& applicationCallbackUri, param::hstring const& accountPairwiseId) :
    WebAccountClientView(get_activation_factory<WebAccountClientView, Windows::Security::Authentication::Web::Provider::IWebAccountClientViewFactory>().CreateWithPairwiseId(viewType, applicationCallbackUri, accountPairwiseId))
{}

inline Windows::Foundation::IAsyncAction WebAccountManager::UpdateWebAccountPropertiesAsync(Windows::Security::Credentials::WebAccount const& webAccount, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& additionalProperties)
{
    return get_activation_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics>().UpdateWebAccountPropertiesAsync(webAccount, webAccountUserName, additionalProperties);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> WebAccountManager::AddWebAccountAsync(param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props)
{
    return get_activation_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics>().AddWebAccountAsync(webAccountId, webAccountUserName, props);
}

inline Windows::Foundation::IAsyncAction WebAccountManager::DeleteWebAccountAsync(Windows::Security::Credentials::WebAccount const& webAccount)
{
    return get_activation_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics>().DeleteWebAccountAsync(webAccount);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount>> WebAccountManager::FindAllProviderWebAccountsAsync()
{
    return get_activation_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics>().FindAllProviderWebAccountsAsync();
}

inline Windows::Foundation::IAsyncAction WebAccountManager::PushCookiesAsync(Windows::Foundation::Uri const& uri, param::async_vector_view<Windows::Web::Http::HttpCookie> const& cookies)
{
    return get_activation_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics>().PushCookiesAsync(uri, cookies);
}

inline Windows::Foundation::IAsyncAction WebAccountManager::SetViewAsync(Windows::Security::Credentials::WebAccount const& webAccount, Windows::Security::Authentication::Web::Provider::WebAccountClientView const& view)
{
    return get_activation_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics>().SetViewAsync(webAccount, view);
}

inline Windows::Foundation::IAsyncAction WebAccountManager::ClearViewAsync(Windows::Security::Credentials::WebAccount const& webAccount, Windows::Foundation::Uri const& applicationCallbackUri)
{
    return get_activation_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics>().ClearViewAsync(webAccount, applicationCallbackUri);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Web::Provider::WebAccountClientView>> WebAccountManager::GetViewsAsync(Windows::Security::Credentials::WebAccount const& webAccount)
{
    return get_activation_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics>().GetViewsAsync(webAccount);
}

inline Windows::Foundation::IAsyncAction WebAccountManager::SetWebAccountPictureAsync(Windows::Security::Credentials::WebAccount const& webAccount, Windows::Storage::Streams::IRandomAccessStream const& webAccountPicture)
{
    return get_activation_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics>().SetWebAccountPictureAsync(webAccount, webAccountPicture);
}

inline Windows::Foundation::IAsyncAction WebAccountManager::ClearWebAccountPictureAsync(Windows::Security::Credentials::WebAccount const& webAccount)
{
    return get_activation_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics>().ClearWebAccountPictureAsync(webAccount);
}

inline Windows::Foundation::IAsyncAction WebAccountManager::PullCookiesAsync(param::hstring const& uriString, param::hstring const& callerPFN)
{
    return get_activation_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics2>().PullCookiesAsync(uriString, callerPFN);
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount>> WebAccountManager::FindAllProviderWebAccountsForUserAsync(Windows::System::User const& user)
{
    return get_activation_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3>().FindAllProviderWebAccountsForUserAsync(user);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> WebAccountManager::AddWebAccountForUserAsync(Windows::System::User const& user, param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props)
{
    return get_activation_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3>().AddWebAccountForUserAsync(user, webAccountId, webAccountUserName, props);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> WebAccountManager::AddWebAccountForUserAsync(Windows::System::User const& user, param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope)
{
    return get_activation_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3>().AddWebAccountForUserAsync(user, webAccountId, webAccountUserName, props, scope);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> WebAccountManager::AddWebAccountForUserAsync(Windows::System::User const& user, param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope, param::hstring const& perUserWebAccountId)
{
    return get_activation_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3>().AddWebAccountForUserAsync(user, webAccountId, webAccountUserName, props, scope, perUserWebAccountId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> WebAccountManager::AddWebAccountAsync(param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope, param::hstring const& perUserWebAccountId)
{
    return get_activation_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics>().AddWebAccountAsync(webAccountId, webAccountUserName, props, scope, perUserWebAccountId);
}

inline Windows::Foundation::IAsyncAction WebAccountManager::SetPerAppToPerUserAccountAsync(Windows::Security::Credentials::WebAccount const& perAppAccount, param::hstring const& perUserWebAccountId)
{
    return get_activation_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics>().SetPerAppToPerUserAccountAsync(perAppAccount, perUserWebAccountId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> WebAccountManager::GetPerUserFromPerAppAccountAsync(Windows::Security::Credentials::WebAccount const& perAppAccount)
{
    return get_activation_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics>().GetPerUserFromPerAppAccountAsync(perAppAccount);
}

inline Windows::Foundation::IAsyncAction WebAccountManager::ClearPerUserFromPerAppAccountAsync(Windows::Security::Credentials::WebAccount const& perAppAccount)
{
    return get_activation_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics>().ClearPerUserFromPerAppAccountAsync(perAppAccount);
}

inline Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> WebAccountManager::AddWebAccountAsync(param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope)
{
    return get_activation_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountScopeManagerStatics>().AddWebAccountAsync(webAccountId, webAccountUserName, props, scope);
}

inline Windows::Foundation::IAsyncAction WebAccountManager::SetScopeAsync(Windows::Security::Credentials::WebAccount const& webAccount, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope)
{
    return get_activation_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountScopeManagerStatics>().SetScopeAsync(webAccount, scope);
}

inline Windows::Security::Authentication::Web::Provider::WebAccountScope WebAccountManager::GetScope(Windows::Security::Credentials::WebAccount const& webAccount)
{
    return get_activation_factory<WebAccountManager, Windows::Security::Authentication::Web::Provider::IWebAccountScopeManagerStatics>().GetScope(webAccount);
}

inline WebProviderTokenResponse::WebProviderTokenResponse(Windows::Security::Authentication::Web::Core::WebTokenResponse const& webTokenResponse) :
    WebProviderTokenResponse(get_activation_factory<WebProviderTokenResponse, Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponseFactory>().Create(webTokenResponse))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountClientView> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountClientView> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountClientViewFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountClientViewFactory> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics2> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderAddAccountOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderAddAccountOperation> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderDeleteAccountOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderDeleteAccountOperation> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderSilentReportOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderSilentReportOperation> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects2> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderUIReportOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountProviderUIReportOperation> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountScopeManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::IWebAccountScopeManagerStatics> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest2> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponseFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponseFactory> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::WebAccountClientView> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::WebAccountClientView> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::WebAccountManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::WebAccountManager> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderAddAccountOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderAddAccountOperation> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderDeleteAccountOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderDeleteAccountOperation> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderGetTokenSilentOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderGetTokenSilentOperation> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderManageAccountOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderManageAccountOperation> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderRequestTokenOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderRequestTokenOperation> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderRetrieveCookiesOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderRetrieveCookiesOperation> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderSignOutAccountOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderSignOutAccountOperation> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderTriggerDetails> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::WebProviderTokenRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::WebProviderTokenRequest> {};

template<> struct hash<winrt::Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse> {};

}

WINRT_WARNING_POP
