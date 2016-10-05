// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Security.Authentication.Web.Provider.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Security.Authentication.Web.0.h"
#include "Windows.Security.Authentication.Web.Core.0.h"
#include "Windows.Security.Credentials.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Security.Credentials.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Security.Cryptography.Core.1.h"
#include "Windows.Foundation.1.h"
#include "Windows.Storage.Streams.1.h"
#include "Windows.Web.Http.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Security::Authentication::Web::Provider {

struct __declspec(uuid("e7bd66ba-0bc7-4c66-bfd4-65d3082cbca8")) __declspec(novtable) IWebAccountClientView : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ApplicationCallbackUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall get_Type(winrt::Windows::Security::Authentication::Web::Provider::WebAccountClientViewType * value) = 0;
    virtual HRESULT __stdcall get_AccountPairwiseId(hstring * value) = 0;
};

struct __declspec(uuid("616d16a4-de22-4855-a326-06cebf2a3f23")) __declspec(novtable) IWebAccountClientViewFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(winrt::Windows::Security::Authentication::Web::Provider::WebAccountClientViewType viewType, Windows::Foundation::IUriRuntimeClass * applicationCallbackUri, Windows::Security::Authentication::Web::Provider::IWebAccountClientView ** view) = 0;
    virtual HRESULT __stdcall abi_CreateWithPairwiseId(winrt::Windows::Security::Authentication::Web::Provider::WebAccountClientViewType viewType, Windows::Foundation::IUriRuntimeClass * applicationCallbackUri, hstring accountPairwiseId, Windows::Security::Authentication::Web::Provider::IWebAccountClientView ** view) = 0;
};

struct __declspec(uuid("b2e8e1a6-d49a-4032-84bf-1a2847747bf1")) __declspec(novtable) IWebAccountManagerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_UpdateWebAccountPropertiesAsync(Windows::Security::Credentials::IWebAccount * webAccount, hstring webAccountUserName, Windows::Foundation::Collections::IMapView<hstring, hstring> * additionalProperties, Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_AddWebAccountAsync(hstring webAccountId, hstring webAccountUserName, Windows::Foundation::Collections::IMapView<hstring, hstring> * props, Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_DeleteWebAccountAsync(Windows::Security::Credentials::IWebAccount * webAccount, Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_FindAllProviderWebAccountsAsync(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount>> ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_PushCookiesAsync(Windows::Foundation::IUriRuntimeClass * uri, Windows::Foundation::Collections::IVectorView<Windows::Web::Http::HttpCookie> * cookies, Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_SetViewAsync(Windows::Security::Credentials::IWebAccount * webAccount, Windows::Security::Authentication::Web::Provider::IWebAccountClientView * view, Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_ClearViewAsync(Windows::Security::Credentials::IWebAccount * webAccount, Windows::Foundation::IUriRuntimeClass * applicationCallbackUri, Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_GetViewsAsync(Windows::Security::Credentials::IWebAccount * webAccount, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Web::Provider::WebAccountClientView>> ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_SetWebAccountPictureAsync(Windows::Security::Credentials::IWebAccount * webAccount, Windows::Storage::Streams::IRandomAccessStream * webAccountPicture, Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_ClearWebAccountPictureAsync(Windows::Security::Credentials::IWebAccount * webAccount, Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
};

struct __declspec(uuid("68a7a829-2d5f-4653-8bb0-bd2fa6bd2d87")) __declspec(novtable) IWebAccountManagerStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_PullCookiesAsync(hstring uriString, hstring callerPFN, Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
};

struct __declspec(uuid("e8fa446f-3a1b-48a4-8e90-1e59ca6f54db")) __declspec(novtable) IWebAccountMapManagerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_AddWebAccountWithScopeAndMapAsync(hstring webAccountId, hstring webAccountUserName, Windows::Foundation::Collections::IMapView<hstring, hstring> * props, winrt::Windows::Security::Authentication::Web::Provider::WebAccountScope scope, hstring perUserWebAccountId, Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_SetPerAppToPerUserAccountAsync(Windows::Security::Credentials::IWebAccount * perAppAccount, hstring perUserWebAccountId, Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_GetPerUserFromPerAppAccountAsync(Windows::Security::Credentials::IWebAccount * perAppAccount, Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_ClearPerUserFromPerAppAccountAsync(Windows::Security::Credentials::IWebAccount * perAppAccount, Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
};

struct __declspec(uuid("73ebdccf-4378-4c79-9335-a5d7ab81594e")) __declspec(novtable) IWebAccountProviderAddAccountOperation : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_ReportCompleted() = 0;
};

struct __declspec(uuid("bba4acbb-993b-4d57-bbe4-1421e3668b4c")) __declspec(novtable) IWebAccountProviderBaseReportOperation : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_ReportCompleted() = 0;
    virtual HRESULT __stdcall abi_ReportError(Windows::Security::Authentication::Web::Core::IWebProviderError * value) = 0;
};

struct __declspec(uuid("0abb48b8-9e01-49c9-a355-7d48caf7d6ca")) __declspec(novtable) IWebAccountProviderDeleteAccountOperation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_WebAccount(Windows::Security::Credentials::IWebAccount ** value) = 0;
};

struct __declspec(uuid("ed20dc5c-d21b-463e-a9b7-c1fd0edae978")) __declspec(novtable) IWebAccountProviderManageAccountOperation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_WebAccount(Windows::Security::Credentials::IWebAccount ** value) = 0;
    virtual HRESULT __stdcall abi_ReportCompleted() = 0;
};

struct __declspec(uuid("6d5d2426-10b1-419a-a44e-f9c5161574e6")) __declspec(novtable) IWebAccountProviderOperation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Kind(winrt::Windows::Security::Authentication::Web::Provider::WebAccountProviderOperationKind * value) = 0;
};

struct __declspec(uuid("5a040441-0fa3-4ab1-a01c-20b110358594")) __declspec(novtable) IWebAccountProviderRetrieveCookiesOperation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Context(Windows::Foundation::IUriRuntimeClass ** webCookieRequestContext) = 0;
    virtual HRESULT __stdcall get_Cookies(Windows::Foundation::Collections::IVector<Windows::Web::Http::HttpCookie> ** cookies) = 0;
    virtual HRESULT __stdcall put_Uri(Windows::Foundation::IUriRuntimeClass * uri) = 0;
    virtual HRESULT __stdcall get_Uri(Windows::Foundation::IUriRuntimeClass ** uri) = 0;
    virtual HRESULT __stdcall get_ApplicationCallbackUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
};

struct __declspec(uuid("b890e21d-0c55-47bc-8c72-04a6fc7cac07")) __declspec(novtable) IWebAccountProviderSignOutAccountOperation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_WebAccount(Windows::Security::Credentials::IWebAccount ** value) = 0;
    virtual HRESULT __stdcall get_ApplicationCallbackUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall get_ClientId(hstring * value) = 0;
};

struct __declspec(uuid("e0b545f8-3b0f-44da-924c-7b18baaa62a9")) __declspec(novtable) IWebAccountProviderSilentReportOperation : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_ReportUserInteractionRequired() = 0;
    virtual HRESULT __stdcall abi_ReportUserInteractionRequiredWithError(Windows::Security::Authentication::Web::Core::IWebProviderError * value) = 0;
};

struct __declspec(uuid("408f284b-1328-42db-89a4-0bce7a717d8e")) __declspec(novtable) IWebAccountProviderTokenObjects : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Operation(Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation ** value) = 0;
};

struct __declspec(uuid("95c613be-2034-4c38-9434-d26c14b2b4b2")) __declspec(novtable) IWebAccountProviderTokenOperation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ProviderRequest(Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest ** webTokenRequest) = 0;
    virtual HRESULT __stdcall get_ProviderResponses(Windows::Foundation::Collections::IVector<Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse> ** value) = 0;
    virtual HRESULT __stdcall put_CacheExpirationTime(Windows::Foundation::DateTime value) = 0;
    virtual HRESULT __stdcall get_CacheExpirationTime(Windows::Foundation::DateTime * value) = 0;
};

struct __declspec(uuid("28ff92d3-8f80-42fb-944f-b2107bbd42e6")) __declspec(novtable) IWebAccountProviderUIReportOperation : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_ReportUserCanceled() = 0;
};

struct __declspec(uuid("5c6ce37c-12b2-423a-bf3d-85b8d7e53656")) __declspec(novtable) IWebAccountScopeManagerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_AddWebAccountWithScopeAsync(hstring webAccountId, hstring webAccountUserName, Windows::Foundation::Collections::IMapView<hstring, hstring> * props, winrt::Windows::Security::Authentication::Web::Provider::WebAccountScope scope, Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_SetScopeAsync(Windows::Security::Credentials::IWebAccount * webAccount, winrt::Windows::Security::Authentication::Web::Provider::WebAccountScope scope, Windows::Foundation::IAsyncAction ** asyncInfo) = 0;
    virtual HRESULT __stdcall abi_GetScope(Windows::Security::Credentials::IWebAccount * webAccount, winrt::Windows::Security::Authentication::Web::Provider::WebAccountScope * scope) = 0;
};

struct __declspec(uuid("1e18778b-8805-454b-9f11-468d2af1095a")) __declspec(novtable) IWebProviderTokenRequest : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ClientRequest(Windows::Security::Authentication::Web::Core::IWebTokenRequest ** value) = 0;
    virtual HRESULT __stdcall get_WebAccounts(Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount> ** value) = 0;
    virtual HRESULT __stdcall get_WebAccountSelectionOptions(winrt::Windows::Security::Authentication::Web::Provider::WebAccountSelectionOptions * value) = 0;
    virtual HRESULT __stdcall get_ApplicationCallbackUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall abi_GetApplicationTokenBindingKeyAsync(winrt::Windows::Security::Authentication::Web::TokenBindingKeyType keyType, Windows::Foundation::IUriRuntimeClass * target, Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Core::CryptographicKey> ** asyncInfo) = 0;
};

struct __declspec(uuid("b5d72e4c-10b1-4aa6-88b1-0b6c9e0c1e46")) __declspec(novtable) IWebProviderTokenRequest2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetApplicationTokenBindingKeyIdAsync(winrt::Windows::Security::Authentication::Web::TokenBindingKeyType keyType, Windows::Foundation::IUriRuntimeClass * target, Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> ** asyncInfo) = 0;
};

struct __declspec(uuid("ef213793-ef55-4186-b7ce-8cb2e7f9849e")) __declspec(novtable) IWebProviderTokenResponse : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ClientResponse(Windows::Security::Authentication::Web::Core::IWebTokenResponse ** value) = 0;
};

struct __declspec(uuid("fa49d99a-25ba-4077-9cfa-9db4dea7b71a")) __declspec(novtable) IWebProviderTokenResponseFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Create(Windows::Security::Authentication::Web::Core::IWebTokenResponse * webTokenResponse, Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse ** webProviderTokenResponse) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Security::Authentication::Web::Provider::WebAccountClientView> { using default_interface = Windows::Security::Authentication::Web::Provider::IWebAccountClientView; };
template <> struct traits<Windows::Security::Authentication::Web::Provider::WebAccountProviderAddAccountOperation> { using default_interface = Windows::Security::Authentication::Web::Provider::IWebAccountProviderAddAccountOperation; };
template <> struct traits<Windows::Security::Authentication::Web::Provider::WebAccountProviderDeleteAccountOperation> { using default_interface = Windows::Security::Authentication::Web::Provider::IWebAccountProviderDeleteAccountOperation; };
template <> struct traits<Windows::Security::Authentication::Web::Provider::WebAccountProviderGetTokenSilentOperation> { using default_interface = Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation; };
template <> struct traits<Windows::Security::Authentication::Web::Provider::WebAccountProviderManageAccountOperation> { using default_interface = Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation; };
template <> struct traits<Windows::Security::Authentication::Web::Provider::WebAccountProviderRequestTokenOperation> { using default_interface = Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation; };
template <> struct traits<Windows::Security::Authentication::Web::Provider::WebAccountProviderRetrieveCookiesOperation> { using default_interface = Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation; };
template <> struct traits<Windows::Security::Authentication::Web::Provider::WebAccountProviderSignOutAccountOperation> { using default_interface = Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation; };
template <> struct traits<Windows::Security::Authentication::Web::Provider::WebAccountProviderTriggerDetails> { using default_interface = Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects; };
template <> struct traits<Windows::Security::Authentication::Web::Provider::WebProviderTokenRequest> { using default_interface = Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest; };
template <> struct traits<Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse> { using default_interface = Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse; };

}

namespace Windows::Security::Authentication::Web::Provider {

template <typename T> struct impl_IWebAccountClientView;
template <typename T> struct impl_IWebAccountClientViewFactory;
template <typename T> struct impl_IWebAccountManagerStatics;
template <typename T> struct impl_IWebAccountManagerStatics2;
template <typename T> struct impl_IWebAccountMapManagerStatics;
template <typename T> struct impl_IWebAccountProviderAddAccountOperation;
template <typename T> struct impl_IWebAccountProviderBaseReportOperation;
template <typename T> struct impl_IWebAccountProviderDeleteAccountOperation;
template <typename T> struct impl_IWebAccountProviderManageAccountOperation;
template <typename T> struct impl_IWebAccountProviderOperation;
template <typename T> struct impl_IWebAccountProviderRetrieveCookiesOperation;
template <typename T> struct impl_IWebAccountProviderSignOutAccountOperation;
template <typename T> struct impl_IWebAccountProviderSilentReportOperation;
template <typename T> struct impl_IWebAccountProviderTokenObjects;
template <typename T> struct impl_IWebAccountProviderTokenOperation;
template <typename T> struct impl_IWebAccountProviderUIReportOperation;
template <typename T> struct impl_IWebAccountScopeManagerStatics;
template <typename T> struct impl_IWebProviderTokenRequest;
template <typename T> struct impl_IWebProviderTokenRequest2;
template <typename T> struct impl_IWebProviderTokenResponse;
template <typename T> struct impl_IWebProviderTokenResponseFactory;

}

namespace impl {

template <> struct traits<Windows::Security::Authentication::Web::Provider::IWebAccountClientView>
{
    using abi = ABI::Windows::Security::Authentication::Web::Provider::IWebAccountClientView;
    template <typename D> using consume = Windows::Security::Authentication::Web::Provider::impl_IWebAccountClientView<D>;
};

template <> struct traits<Windows::Security::Authentication::Web::Provider::IWebAccountClientViewFactory>
{
    using abi = ABI::Windows::Security::Authentication::Web::Provider::IWebAccountClientViewFactory;
    template <typename D> using consume = Windows::Security::Authentication::Web::Provider::impl_IWebAccountClientViewFactory<D>;
};

template <> struct traits<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics>
{
    using abi = ABI::Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics;
    template <typename D> using consume = Windows::Security::Authentication::Web::Provider::impl_IWebAccountManagerStatics<D>;
};

template <> struct traits<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics2>
{
    using abi = ABI::Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics2;
    template <typename D> using consume = Windows::Security::Authentication::Web::Provider::impl_IWebAccountManagerStatics2<D>;
};

template <> struct traits<Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics>
{
    using abi = ABI::Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics;
    template <typename D> using consume = Windows::Security::Authentication::Web::Provider::impl_IWebAccountMapManagerStatics<D>;
};

template <> struct traits<Windows::Security::Authentication::Web::Provider::IWebAccountProviderAddAccountOperation>
{
    using abi = ABI::Windows::Security::Authentication::Web::Provider::IWebAccountProviderAddAccountOperation;
    template <typename D> using consume = Windows::Security::Authentication::Web::Provider::impl_IWebAccountProviderAddAccountOperation<D>;
};

template <> struct traits<Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation>
{
    using abi = ABI::Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation;
    template <typename D> using consume = Windows::Security::Authentication::Web::Provider::impl_IWebAccountProviderBaseReportOperation<D>;
};

template <> struct traits<Windows::Security::Authentication::Web::Provider::IWebAccountProviderDeleteAccountOperation>
{
    using abi = ABI::Windows::Security::Authentication::Web::Provider::IWebAccountProviderDeleteAccountOperation;
    template <typename D> using consume = Windows::Security::Authentication::Web::Provider::impl_IWebAccountProviderDeleteAccountOperation<D>;
};

template <> struct traits<Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation>
{
    using abi = ABI::Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation;
    template <typename D> using consume = Windows::Security::Authentication::Web::Provider::impl_IWebAccountProviderManageAccountOperation<D>;
};

template <> struct traits<Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>
{
    using abi = ABI::Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation;
    template <typename D> using consume = Windows::Security::Authentication::Web::Provider::impl_IWebAccountProviderOperation<D>;
};

template <> struct traits<Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation>
{
    using abi = ABI::Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation;
    template <typename D> using consume = Windows::Security::Authentication::Web::Provider::impl_IWebAccountProviderRetrieveCookiesOperation<D>;
};

template <> struct traits<Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation>
{
    using abi = ABI::Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation;
    template <typename D> using consume = Windows::Security::Authentication::Web::Provider::impl_IWebAccountProviderSignOutAccountOperation<D>;
};

template <> struct traits<Windows::Security::Authentication::Web::Provider::IWebAccountProviderSilentReportOperation>
{
    using abi = ABI::Windows::Security::Authentication::Web::Provider::IWebAccountProviderSilentReportOperation;
    template <typename D> using consume = Windows::Security::Authentication::Web::Provider::impl_IWebAccountProviderSilentReportOperation<D>;
};

template <> struct traits<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects>
{
    using abi = ABI::Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects;
    template <typename D> using consume = Windows::Security::Authentication::Web::Provider::impl_IWebAccountProviderTokenObjects<D>;
};

template <> struct traits<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation>
{
    using abi = ABI::Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation;
    template <typename D> using consume = Windows::Security::Authentication::Web::Provider::impl_IWebAccountProviderTokenOperation<D>;
};

template <> struct traits<Windows::Security::Authentication::Web::Provider::IWebAccountProviderUIReportOperation>
{
    using abi = ABI::Windows::Security::Authentication::Web::Provider::IWebAccountProviderUIReportOperation;
    template <typename D> using consume = Windows::Security::Authentication::Web::Provider::impl_IWebAccountProviderUIReportOperation<D>;
};

template <> struct traits<Windows::Security::Authentication::Web::Provider::IWebAccountScopeManagerStatics>
{
    using abi = ABI::Windows::Security::Authentication::Web::Provider::IWebAccountScopeManagerStatics;
    template <typename D> using consume = Windows::Security::Authentication::Web::Provider::impl_IWebAccountScopeManagerStatics<D>;
};

template <> struct traits<Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest>
{
    using abi = ABI::Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest;
    template <typename D> using consume = Windows::Security::Authentication::Web::Provider::impl_IWebProviderTokenRequest<D>;
};

template <> struct traits<Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest2>
{
    using abi = ABI::Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest2;
    template <typename D> using consume = Windows::Security::Authentication::Web::Provider::impl_IWebProviderTokenRequest2<D>;
};

template <> struct traits<Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse>
{
    using abi = ABI::Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse;
    template <typename D> using consume = Windows::Security::Authentication::Web::Provider::impl_IWebProviderTokenResponse<D>;
};

template <> struct traits<Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponseFactory>
{
    using abi = ABI::Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponseFactory;
    template <typename D> using consume = Windows::Security::Authentication::Web::Provider::impl_IWebProviderTokenResponseFactory<D>;
};

template <> struct traits<Windows::Security::Authentication::Web::Provider::WebAccountClientView>
{
    using abi = ABI::Windows::Security::Authentication::Web::Provider::WebAccountClientView;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Authentication.Web.Provider.WebAccountClientView"; }
};

template <> struct traits<Windows::Security::Authentication::Web::Provider::WebAccountManager>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Authentication.Web.Provider.WebAccountManager"; }
};

template <> struct traits<Windows::Security::Authentication::Web::Provider::WebAccountProviderAddAccountOperation>
{
    using abi = ABI::Windows::Security::Authentication::Web::Provider::WebAccountProviderAddAccountOperation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Authentication.Web.Provider.WebAccountProviderAddAccountOperation"; }
};

template <> struct traits<Windows::Security::Authentication::Web::Provider::WebAccountProviderDeleteAccountOperation>
{
    using abi = ABI::Windows::Security::Authentication::Web::Provider::WebAccountProviderDeleteAccountOperation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Authentication.Web.Provider.WebAccountProviderDeleteAccountOperation"; }
};

template <> struct traits<Windows::Security::Authentication::Web::Provider::WebAccountProviderGetTokenSilentOperation>
{
    using abi = ABI::Windows::Security::Authentication::Web::Provider::WebAccountProviderGetTokenSilentOperation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Authentication.Web.Provider.WebAccountProviderGetTokenSilentOperation"; }
};

template <> struct traits<Windows::Security::Authentication::Web::Provider::WebAccountProviderManageAccountOperation>
{
    using abi = ABI::Windows::Security::Authentication::Web::Provider::WebAccountProviderManageAccountOperation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Authentication.Web.Provider.WebAccountProviderManageAccountOperation"; }
};

template <> struct traits<Windows::Security::Authentication::Web::Provider::WebAccountProviderRequestTokenOperation>
{
    using abi = ABI::Windows::Security::Authentication::Web::Provider::WebAccountProviderRequestTokenOperation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Authentication.Web.Provider.WebAccountProviderRequestTokenOperation"; }
};

template <> struct traits<Windows::Security::Authentication::Web::Provider::WebAccountProviderRetrieveCookiesOperation>
{
    using abi = ABI::Windows::Security::Authentication::Web::Provider::WebAccountProviderRetrieveCookiesOperation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Authentication.Web.Provider.WebAccountProviderRetrieveCookiesOperation"; }
};

template <> struct traits<Windows::Security::Authentication::Web::Provider::WebAccountProviderSignOutAccountOperation>
{
    using abi = ABI::Windows::Security::Authentication::Web::Provider::WebAccountProviderSignOutAccountOperation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Authentication.Web.Provider.WebAccountProviderSignOutAccountOperation"; }
};

template <> struct traits<Windows::Security::Authentication::Web::Provider::WebAccountProviderTriggerDetails>
{
    using abi = ABI::Windows::Security::Authentication::Web::Provider::WebAccountProviderTriggerDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Authentication.Web.Provider.WebAccountProviderTriggerDetails"; }
};

template <> struct traits<Windows::Security::Authentication::Web::Provider::WebProviderTokenRequest>
{
    using abi = ABI::Windows::Security::Authentication::Web::Provider::WebProviderTokenRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Authentication.Web.Provider.WebProviderTokenRequest"; }
};

template <> struct traits<Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse>
{
    using abi = ABI::Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Security.Authentication.Web.Provider.WebProviderTokenResponse"; }
};

}

}
