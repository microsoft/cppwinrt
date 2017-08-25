// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Web {

enum class TokenBindingKeyType;

}

WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Web::Core {

struct WebProviderError;
struct WebTokenRequest;
struct WebTokenResponse;

}

WINRT_EXPORT namespace winrt::Windows::Security::Credentials {

struct WebAccount;

}

WINRT_EXPORT namespace winrt::Windows::Security::Cryptography::Core {

struct CryptographicKey;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;
struct IRandomAccessStream;

}

WINRT_EXPORT namespace winrt::Windows::System {

struct User;

}

WINRT_EXPORT namespace winrt::Windows::Web::Http {

struct HttpCookie;

}

WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Web::Provider {

enum class WebAccountClientViewType
{
    IdOnly = 0,
    IdAndProperties = 1,
};

enum class WebAccountProviderOperationKind
{
    RequestToken = 0,
    GetTokenSilently = 1,
    AddAccount = 2,
    ManageAccount = 3,
    DeleteAccount = 4,
    RetrieveCookies = 5,
    SignOutAccount = 6,
};

enum class WebAccountScope
{
    PerUser = 0,
    PerApplication = 1,
};

enum class WebAccountSelectionOptions : unsigned
{
    Default = 0x0,
    New = 0x1,
};

DEFINE_ENUM_FLAG_OPERATORS(WebAccountSelectionOptions)

struct IWebAccountClientView;
struct IWebAccountClientViewFactory;
struct IWebAccountManagerStatics;
struct IWebAccountManagerStatics2;
struct IWebAccountManagerStatics3;
struct IWebAccountMapManagerStatics;
struct IWebAccountProviderAddAccountOperation;
struct IWebAccountProviderBaseReportOperation;
struct IWebAccountProviderDeleteAccountOperation;
struct IWebAccountProviderManageAccountOperation;
struct IWebAccountProviderOperation;
struct IWebAccountProviderRetrieveCookiesOperation;
struct IWebAccountProviderSignOutAccountOperation;
struct IWebAccountProviderSilentReportOperation;
struct IWebAccountProviderTokenObjects;
struct IWebAccountProviderTokenObjects2;
struct IWebAccountProviderTokenOperation;
struct IWebAccountProviderUIReportOperation;
struct IWebAccountScopeManagerStatics;
struct IWebProviderTokenRequest;
struct IWebProviderTokenRequest2;
struct IWebProviderTokenResponse;
struct IWebProviderTokenResponseFactory;
struct WebAccountClientView;
struct WebAccountManager;
struct WebAccountProviderAddAccountOperation;
struct WebAccountProviderDeleteAccountOperation;
struct WebAccountProviderGetTokenSilentOperation;
struct WebAccountProviderManageAccountOperation;
struct WebAccountProviderRequestTokenOperation;
struct WebAccountProviderRetrieveCookiesOperation;
struct WebAccountProviderSignOutAccountOperation;
struct WebAccountProviderTriggerDetails;
struct WebProviderTokenRequest;
struct WebProviderTokenResponse;

}

namespace winrt::impl {

template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountClientView>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountClientViewFactory>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics2>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountProviderAddAccountOperation>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountProviderDeleteAccountOperation>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountProviderSilentReportOperation>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects2>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountProviderUIReportOperation>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::IWebAccountScopeManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest2>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponseFactory>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::WebAccountClientView>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::WebAccountManager>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::WebAccountProviderAddAccountOperation>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::WebAccountProviderDeleteAccountOperation>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::WebAccountProviderGetTokenSilentOperation>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::WebAccountProviderManageAccountOperation>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::WebAccountProviderRequestTokenOperation>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::WebAccountProviderRetrieveCookiesOperation>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::WebAccountProviderSignOutAccountOperation>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::WebAccountProviderTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::WebProviderTokenRequest>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::WebAccountClientViewType>{ using type = enum_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::WebAccountProviderOperationKind>{ using type = enum_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::WebAccountScope>{ using type = enum_category; };
template <> struct category<Windows::Security::Authentication::Web::Provider::WebAccountSelectionOptions>{ using type = enum_category; };
template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountClientView>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountClientView" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountClientViewFactory>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountClientViewFactory" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountManagerStatics" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics2>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountManagerStatics2" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountManagerStatics3" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountMapManagerStatics" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountProviderAddAccountOperation>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderAddAccountOperation" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderBaseReportOperation" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountProviderDeleteAccountOperation>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderDeleteAccountOperation" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderManageAccountOperation" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderOperation" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderRetrieveCookiesOperation" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderSignOutAccountOperation" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountProviderSilentReportOperation>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderSilentReportOperation" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderTokenObjects" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects2>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderTokenObjects2" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderTokenOperation" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountProviderUIReportOperation>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountProviderUIReportOperation" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::IWebAccountScopeManagerStatics>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebAccountScopeManagerStatics" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebProviderTokenRequest" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest2>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebProviderTokenRequest2" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebProviderTokenResponse" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponseFactory>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.IWebProviderTokenResponseFactory" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::WebAccountClientView>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.WebAccountClientView" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::WebAccountManager>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.WebAccountManager" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::WebAccountProviderAddAccountOperation>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.WebAccountProviderAddAccountOperation" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::WebAccountProviderDeleteAccountOperation>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.WebAccountProviderDeleteAccountOperation" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::WebAccountProviderGetTokenSilentOperation>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.WebAccountProviderGetTokenSilentOperation" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::WebAccountProviderManageAccountOperation>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.WebAccountProviderManageAccountOperation" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::WebAccountProviderRequestTokenOperation>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.WebAccountProviderRequestTokenOperation" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::WebAccountProviderRetrieveCookiesOperation>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.WebAccountProviderRetrieveCookiesOperation" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::WebAccountProviderSignOutAccountOperation>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.WebAccountProviderSignOutAccountOperation" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::WebAccountProviderTriggerDetails>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.WebAccountProviderTriggerDetails" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::WebProviderTokenRequest>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.WebProviderTokenRequest" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.WebProviderTokenResponse" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::WebAccountClientViewType>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.WebAccountClientViewType" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::WebAccountProviderOperationKind>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.WebAccountProviderOperationKind" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::WebAccountScope>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.WebAccountScope" }; };
template <> struct name<Windows::Security::Authentication::Web::Provider::WebAccountSelectionOptions>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Provider.WebAccountSelectionOptions" }; };
template <> struct guid<Windows::Security::Authentication::Web::Provider::IWebAccountClientView>{ static constexpr GUID value{ 0xE7BD66BA,0x0BC7,0x4C66,{ 0xBF,0xD4,0x65,0xD3,0x08,0x2C,0xBC,0xA8 } }; };
template <> struct guid<Windows::Security::Authentication::Web::Provider::IWebAccountClientViewFactory>{ static constexpr GUID value{ 0x616D16A4,0xDE22,0x4855,{ 0xA3,0x26,0x06,0xCE,0xBF,0x2A,0x3F,0x23 } }; };
template <> struct guid<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics>{ static constexpr GUID value{ 0xB2E8E1A6,0xD49A,0x4032,{ 0x84,0xBF,0x1A,0x28,0x47,0x74,0x7B,0xF1 } }; };
template <> struct guid<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics2>{ static constexpr GUID value{ 0x68A7A829,0x2D5F,0x4653,{ 0x8B,0xB0,0xBD,0x2F,0xA6,0xBD,0x2D,0x87 } }; };
template <> struct guid<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3>{ static constexpr GUID value{ 0xDD4523A6,0x8A4F,0x4AA2,{ 0xB1,0x5E,0x03,0xF5,0x50,0xAF,0x13,0x59 } }; };
template <> struct guid<Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics>{ static constexpr GUID value{ 0xE8FA446F,0x3A1B,0x48A4,{ 0x8E,0x90,0x1E,0x59,0xCA,0x6F,0x54,0xDB } }; };
template <> struct guid<Windows::Security::Authentication::Web::Provider::IWebAccountProviderAddAccountOperation>{ static constexpr GUID value{ 0x73EBDCCF,0x4378,0x4C79,{ 0x93,0x35,0xA5,0xD7,0xAB,0x81,0x59,0x4E } }; };
template <> struct guid<Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation>{ static constexpr GUID value{ 0xBBA4ACBB,0x993B,0x4D57,{ 0xBB,0xE4,0x14,0x21,0xE3,0x66,0x8B,0x4C } }; };
template <> struct guid<Windows::Security::Authentication::Web::Provider::IWebAccountProviderDeleteAccountOperation>{ static constexpr GUID value{ 0x0ABB48B8,0x9E01,0x49C9,{ 0xA3,0x55,0x7D,0x48,0xCA,0xF7,0xD6,0xCA } }; };
template <> struct guid<Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation>{ static constexpr GUID value{ 0xED20DC5C,0xD21B,0x463E,{ 0xA9,0xB7,0xC1,0xFD,0x0E,0xDA,0xE9,0x78 } }; };
template <> struct guid<Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>{ static constexpr GUID value{ 0x6D5D2426,0x10B1,0x419A,{ 0xA4,0x4E,0xF9,0xC5,0x16,0x15,0x74,0xE6 } }; };
template <> struct guid<Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation>{ static constexpr GUID value{ 0x5A040441,0x0FA3,0x4AB1,{ 0xA0,0x1C,0x20,0xB1,0x10,0x35,0x85,0x94 } }; };
template <> struct guid<Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation>{ static constexpr GUID value{ 0xB890E21D,0x0C55,0x47BC,{ 0x8C,0x72,0x04,0xA6,0xFC,0x7C,0xAC,0x07 } }; };
template <> struct guid<Windows::Security::Authentication::Web::Provider::IWebAccountProviderSilentReportOperation>{ static constexpr GUID value{ 0xE0B545F8,0x3B0F,0x44DA,{ 0x92,0x4C,0x7B,0x18,0xBA,0xAA,0x62,0xA9 } }; };
template <> struct guid<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects>{ static constexpr GUID value{ 0x408F284B,0x1328,0x42DB,{ 0x89,0xA4,0x0B,0xCE,0x7A,0x71,0x7D,0x8E } }; };
template <> struct guid<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects2>{ static constexpr GUID value{ 0x1020B893,0x5CA5,0x4FFF,{ 0x95,0xFB,0xB8,0x20,0x27,0x3F,0xC3,0x95 } }; };
template <> struct guid<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation>{ static constexpr GUID value{ 0x95C613BE,0x2034,0x4C38,{ 0x94,0x34,0xD2,0x6C,0x14,0xB2,0xB4,0xB2 } }; };
template <> struct guid<Windows::Security::Authentication::Web::Provider::IWebAccountProviderUIReportOperation>{ static constexpr GUID value{ 0x28FF92D3,0x8F80,0x42FB,{ 0x94,0x4F,0xB2,0x10,0x7B,0xBD,0x42,0xE6 } }; };
template <> struct guid<Windows::Security::Authentication::Web::Provider::IWebAccountScopeManagerStatics>{ static constexpr GUID value{ 0x5C6CE37C,0x12B2,0x423A,{ 0xBF,0x3D,0x85,0xB8,0xD7,0xE5,0x36,0x56 } }; };
template <> struct guid<Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest>{ static constexpr GUID value{ 0x1E18778B,0x8805,0x454B,{ 0x9F,0x11,0x46,0x8D,0x2A,0xF1,0x09,0x5A } }; };
template <> struct guid<Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest2>{ static constexpr GUID value{ 0xB5D72E4C,0x10B1,0x4AA6,{ 0x88,0xB1,0x0B,0x6C,0x9E,0x0C,0x1E,0x46 } }; };
template <> struct guid<Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse>{ static constexpr GUID value{ 0xEF213793,0xEF55,0x4186,{ 0xB7,0xCE,0x8C,0xB2,0xE7,0xF9,0x84,0x9E } }; };
template <> struct guid<Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponseFactory>{ static constexpr GUID value{ 0xFA49D99A,0x25BA,0x4077,{ 0x9C,0xFA,0x9D,0xB4,0xDE,0xA7,0xB7,0x1A } }; };
template <> struct default_interface<Windows::Security::Authentication::Web::Provider::WebAccountClientView>{ using type = Windows::Security::Authentication::Web::Provider::IWebAccountClientView; };
template <> struct default_interface<Windows::Security::Authentication::Web::Provider::WebAccountProviderAddAccountOperation>{ using type = Windows::Security::Authentication::Web::Provider::IWebAccountProviderAddAccountOperation; };
template <> struct default_interface<Windows::Security::Authentication::Web::Provider::WebAccountProviderDeleteAccountOperation>{ using type = Windows::Security::Authentication::Web::Provider::IWebAccountProviderDeleteAccountOperation; };
template <> struct default_interface<Windows::Security::Authentication::Web::Provider::WebAccountProviderGetTokenSilentOperation>{ using type = Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation; };
template <> struct default_interface<Windows::Security::Authentication::Web::Provider::WebAccountProviderManageAccountOperation>{ using type = Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation; };
template <> struct default_interface<Windows::Security::Authentication::Web::Provider::WebAccountProviderRequestTokenOperation>{ using type = Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation; };
template <> struct default_interface<Windows::Security::Authentication::Web::Provider::WebAccountProviderRetrieveCookiesOperation>{ using type = Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation; };
template <> struct default_interface<Windows::Security::Authentication::Web::Provider::WebAccountProviderSignOutAccountOperation>{ using type = Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation; };
template <> struct default_interface<Windows::Security::Authentication::Web::Provider::WebAccountProviderTriggerDetails>{ using type = Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects; };
template <> struct default_interface<Windows::Security::Authentication::Web::Provider::WebProviderTokenRequest>{ using type = Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest; };
template <> struct default_interface<Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse>{ using type = Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountClientView
{
    Windows::Foundation::Uri ApplicationCallbackUri() const;
    Windows::Security::Authentication::Web::Provider::WebAccountClientViewType Type() const;
    hstring AccountPairwiseId() const;
};
template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountClientView> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountClientView<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountClientViewFactory
{
    Windows::Security::Authentication::Web::Provider::WebAccountClientView Create(Windows::Security::Authentication::Web::Provider::WebAccountClientViewType const& viewType, Windows::Foundation::Uri const& applicationCallbackUri) const;
    Windows::Security::Authentication::Web::Provider::WebAccountClientView CreateWithPairwiseId(Windows::Security::Authentication::Web::Provider::WebAccountClientViewType const& viewType, Windows::Foundation::Uri const& applicationCallbackUri, param::hstring const& accountPairwiseId) const;
};
template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountClientViewFactory> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountClientViewFactory<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics
{
    Windows::Foundation::IAsyncAction UpdateWebAccountPropertiesAsync(Windows::Security::Credentials::WebAccount const& webAccount, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& additionalProperties) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> AddWebAccountAsync(param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props) const;
    Windows::Foundation::IAsyncAction DeleteWebAccountAsync(Windows::Security::Credentials::WebAccount const& webAccount) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount>> FindAllProviderWebAccountsAsync() const;
    Windows::Foundation::IAsyncAction PushCookiesAsync(Windows::Foundation::Uri const& uri, param::async_vector_view<Windows::Web::Http::HttpCookie> const& cookies) const;
    Windows::Foundation::IAsyncAction SetViewAsync(Windows::Security::Credentials::WebAccount const& webAccount, Windows::Security::Authentication::Web::Provider::WebAccountClientView const& view) const;
    Windows::Foundation::IAsyncAction ClearViewAsync(Windows::Security::Credentials::WebAccount const& webAccount, Windows::Foundation::Uri const& applicationCallbackUri) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Web::Provider::WebAccountClientView>> GetViewsAsync(Windows::Security::Credentials::WebAccount const& webAccount) const;
    Windows::Foundation::IAsyncAction SetWebAccountPictureAsync(Windows::Security::Credentials::WebAccount const& webAccount, Windows::Storage::Streams::IRandomAccessStream const& webAccountPicture) const;
    Windows::Foundation::IAsyncAction ClearWebAccountPictureAsync(Windows::Security::Credentials::WebAccount const& webAccount) const;
};
template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics2
{
    Windows::Foundation::IAsyncAction PullCookiesAsync(param::hstring const& uriString, param::hstring const& callerPFN) const;
};
template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics2> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics2<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics3
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount>> FindAllProviderWebAccountsForUserAsync(Windows::System::User const& user) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> AddWebAccountForUserAsync(Windows::System::User const& user, param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> AddWebAccountForUserAsync(Windows::System::User const& user, param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> AddWebAccountForUserAsync(Windows::System::User const& user, param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope, param::hstring const& perUserWebAccountId) const;
};
template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountManagerStatics3<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountMapManagerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> AddWebAccountAsync(param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope, param::hstring const& perUserWebAccountId) const;
    Windows::Foundation::IAsyncAction SetPerAppToPerUserAccountAsync(Windows::Security::Credentials::WebAccount const& perAppAccount, param::hstring const& perUserWebAccountId) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> GetPerUserFromPerAppAccountAsync(Windows::Security::Credentials::WebAccount const& perAppAccount) const;
    Windows::Foundation::IAsyncAction ClearPerUserFromPerAppAccountAsync(Windows::Security::Credentials::WebAccount const& perAppAccount) const;
};
template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountMapManagerStatics<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderAddAccountOperation
{
    void ReportCompleted() const;
};
template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountProviderAddAccountOperation> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderAddAccountOperation<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderBaseReportOperation
{
    void ReportCompleted() const;
    void ReportError(Windows::Security::Authentication::Web::Core::WebProviderError const& value) const;
};
template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderBaseReportOperation<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderDeleteAccountOperation
{
    Windows::Security::Credentials::WebAccount WebAccount() const;
};
template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountProviderDeleteAccountOperation> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderDeleteAccountOperation<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderManageAccountOperation
{
    Windows::Security::Credentials::WebAccount WebAccount() const;
    void ReportCompleted() const;
};
template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderManageAccountOperation<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderOperation
{
    Windows::Security::Authentication::Web::Provider::WebAccountProviderOperationKind Kind() const;
};
template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderOperation<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderRetrieveCookiesOperation
{
    Windows::Foundation::Uri Context() const;
    Windows::Foundation::Collections::IVector<Windows::Web::Http::HttpCookie> Cookies() const;
    void Uri(Windows::Foundation::Uri const& uri) const;
    Windows::Foundation::Uri Uri() const;
    Windows::Foundation::Uri ApplicationCallbackUri() const;
};
template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderRetrieveCookiesOperation<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderSignOutAccountOperation
{
    Windows::Security::Credentials::WebAccount WebAccount() const;
    Windows::Foundation::Uri ApplicationCallbackUri() const;
    hstring ClientId() const;
};
template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderSignOutAccountOperation<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderSilentReportOperation
{
    void ReportUserInteractionRequired() const;
    void ReportUserInteractionRequired(Windows::Security::Authentication::Web::Core::WebProviderError const& value) const;
};
template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountProviderSilentReportOperation> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderSilentReportOperation<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderTokenObjects
{
    Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation Operation() const;
};
template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderTokenObjects<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderTokenObjects2
{
    Windows::System::User User() const;
};
template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects2> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderTokenObjects2<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderTokenOperation
{
    Windows::Security::Authentication::Web::Provider::WebProviderTokenRequest ProviderRequest() const;
    Windows::Foundation::Collections::IVector<Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse> ProviderResponses() const;
    void CacheExpirationTime(Windows::Foundation::DateTime const& value) const;
    Windows::Foundation::DateTime CacheExpirationTime() const;
};
template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderTokenOperation<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderUIReportOperation
{
    void ReportUserCanceled() const;
};
template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountProviderUIReportOperation> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountProviderUIReportOperation<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Provider_IWebAccountScopeManagerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> AddWebAccountAsync(param::hstring const& webAccountId, param::hstring const& webAccountUserName, param::async_map_view<hstring, hstring> const& props, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope) const;
    Windows::Foundation::IAsyncAction SetScopeAsync(Windows::Security::Credentials::WebAccount const& webAccount, Windows::Security::Authentication::Web::Provider::WebAccountScope const& scope) const;
    Windows::Security::Authentication::Web::Provider::WebAccountScope GetScope(Windows::Security::Credentials::WebAccount const& webAccount) const;
};
template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebAccountScopeManagerStatics> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebAccountScopeManagerStatics<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenRequest
{
    Windows::Security::Authentication::Web::Core::WebTokenRequest ClientRequest() const;
    Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount> WebAccounts() const;
    Windows::Security::Authentication::Web::Provider::WebAccountSelectionOptions WebAccountSelectionOptions() const;
    Windows::Foundation::Uri ApplicationCallbackUri() const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Cryptography::Core::CryptographicKey> GetApplicationTokenBindingKeyAsync(Windows::Security::Authentication::Web::TokenBindingKeyType const& keyType, Windows::Foundation::Uri const& target) const;
};
template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenRequest<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenRequest2
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> GetApplicationTokenBindingKeyIdAsync(Windows::Security::Authentication::Web::TokenBindingKeyType const& keyType, Windows::Foundation::Uri const& target) const;
};
template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest2> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenRequest2<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenResponse
{
    Windows::Security::Authentication::Web::Core::WebTokenResponse ClientResponse() const;
};
template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenResponse<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenResponseFactory
{
    Windows::Security::Authentication::Web::Provider::WebProviderTokenResponse Create(Windows::Security::Authentication::Web::Core::WebTokenResponse const& webTokenResponse) const;
};
template <> struct consume<Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponseFactory> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Provider_IWebProviderTokenResponseFactory<D>; };

template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountClientView>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ApplicationCallbackUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Type(abi_t<Windows::Security::Authentication::Web::Provider::WebAccountClientViewType>* value) = 0;
    virtual HRESULT __stdcall get_AccountPairwiseId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountClientViewFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(abi_t<Windows::Security::Authentication::Web::Provider::WebAccountClientViewType> viewType, ::IUnknown* applicationCallbackUri, ::IUnknown** view) = 0;
    virtual HRESULT __stdcall CreateWithPairwiseId(abi_t<Windows::Security::Authentication::Web::Provider::WebAccountClientViewType> viewType, ::IUnknown* applicationCallbackUri, HSTRING accountPairwiseId, ::IUnknown** view) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall UpdateWebAccountPropertiesAsync(::IUnknown* webAccount, HSTRING webAccountUserName, ::IUnknown* additionalProperties, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall AddWebAccountAsync(HSTRING webAccountId, HSTRING webAccountUserName, ::IUnknown* props, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall DeleteWebAccountAsync(::IUnknown* webAccount, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall FindAllProviderWebAccountsAsync(::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall PushCookiesAsync(::IUnknown* uri, ::IUnknown* cookies, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall SetViewAsync(::IUnknown* webAccount, ::IUnknown* view, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall ClearViewAsync(::IUnknown* webAccount, ::IUnknown* applicationCallbackUri, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall GetViewsAsync(::IUnknown* webAccount, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall SetWebAccountPictureAsync(::IUnknown* webAccount, ::IUnknown* webAccountPicture, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall ClearWebAccountPictureAsync(::IUnknown* webAccount, ::IUnknown** asyncInfo) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall PullCookiesAsync(HSTRING uriString, HSTRING callerPFN, ::IUnknown** asyncInfo) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountManagerStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FindAllProviderWebAccountsForUserAsync(::IUnknown* user, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall AddWebAccountForUserAsync(::IUnknown* user, HSTRING webAccountId, HSTRING webAccountUserName, ::IUnknown* props, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall AddWebAccountWithScopeForUserAsync(::IUnknown* user, HSTRING webAccountId, HSTRING webAccountUserName, ::IUnknown* props, abi_t<Windows::Security::Authentication::Web::Provider::WebAccountScope> scope, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall AddWebAccountWithScopeAndMapForUserAsync(::IUnknown* user, HSTRING webAccountId, HSTRING webAccountUserName, ::IUnknown* props, abi_t<Windows::Security::Authentication::Web::Provider::WebAccountScope> scope, HSTRING perUserWebAccountId, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountMapManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AddWebAccountWithScopeAndMapAsync(HSTRING webAccountId, HSTRING webAccountUserName, ::IUnknown* props, abi_t<Windows::Security::Authentication::Web::Provider::WebAccountScope> scope, HSTRING perUserWebAccountId, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall SetPerAppToPerUserAccountAsync(::IUnknown* perAppAccount, HSTRING perUserWebAccountId, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall GetPerUserFromPerAppAccountAsync(::IUnknown* perAppAccount, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall ClearPerUserFromPerAppAccountAsync(::IUnknown* perAppAccount, ::IUnknown** asyncInfo) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountProviderAddAccountOperation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ReportCompleted() = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountProviderBaseReportOperation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ReportCompleted() = 0;
    virtual HRESULT __stdcall ReportError(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountProviderDeleteAccountOperation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_WebAccount(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountProviderManageAccountOperation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_WebAccount(::IUnknown** value) = 0;
    virtual HRESULT __stdcall ReportCompleted() = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountProviderOperation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Kind(abi_t<Windows::Security::Authentication::Web::Provider::WebAccountProviderOperationKind>* value) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountProviderRetrieveCookiesOperation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Context(::IUnknown** webCookieRequestContext) = 0;
    virtual HRESULT __stdcall get_Cookies(::IUnknown** cookies) = 0;
    virtual HRESULT __stdcall put_Uri(::IUnknown* uri) = 0;
    virtual HRESULT __stdcall get_Uri(::IUnknown** uri) = 0;
    virtual HRESULT __stdcall get_ApplicationCallbackUri(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountProviderSignOutAccountOperation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_WebAccount(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ApplicationCallbackUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ClientId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountProviderSilentReportOperation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ReportUserInteractionRequired() = 0;
    virtual HRESULT __stdcall ReportUserInteractionRequiredWithError(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Operation(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenObjects2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_User(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountProviderTokenOperation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ProviderRequest(::IUnknown** webTokenRequest) = 0;
    virtual HRESULT __stdcall get_ProviderResponses(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_CacheExpirationTime(abi_t<Windows::Foundation::DateTime> value) = 0;
    virtual HRESULT __stdcall get_CacheExpirationTime(abi_t<Windows::Foundation::DateTime>* value) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountProviderUIReportOperation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ReportUserCanceled() = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebAccountScopeManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AddWebAccountWithScopeAsync(HSTRING webAccountId, HSTRING webAccountUserName, ::IUnknown* props, abi_t<Windows::Security::Authentication::Web::Provider::WebAccountScope> scope, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall SetScopeAsync(::IUnknown* webAccount, abi_t<Windows::Security::Authentication::Web::Provider::WebAccountScope> scope, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall GetScope(::IUnknown* webAccount, abi_t<Windows::Security::Authentication::Web::Provider::WebAccountScope>* scope) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ClientRequest(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_WebAccounts(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_WebAccountSelectionOptions(abi_t<Windows::Security::Authentication::Web::Provider::WebAccountSelectionOptions>* value) = 0;
    virtual HRESULT __stdcall get_ApplicationCallbackUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetApplicationTokenBindingKeyAsync(abi_t<Windows::Security::Authentication::Web::TokenBindingKeyType> keyType, ::IUnknown* target, ::IUnknown** asyncInfo) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebProviderTokenRequest2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetApplicationTokenBindingKeyIdAsync(abi_t<Windows::Security::Authentication::Web::TokenBindingKeyType> keyType, ::IUnknown* target, ::IUnknown** asyncInfo) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponse>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ClientResponse(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Provider::IWebProviderTokenResponseFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* webTokenResponse, ::IUnknown** webProviderTokenResponse) = 0;
};};

}
