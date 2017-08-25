// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Security::Credentials {

struct WebAccount;
struct WebAccountProvider;

}

WINRT_EXPORT namespace winrt::Windows::System {

struct User;

}

WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Web::Core {

enum class WebTokenRequestPromptType
{
    Default = 0,
    ForceAuthentication = 1,
};

enum class WebTokenRequestStatus
{
    Success = 0,
    UserCancel = 1,
    AccountSwitch = 2,
    UserInteractionRequired = 3,
    AccountProviderNotAvailable = 4,
    ProviderError = 5,
};

struct IWebAccountEventArgs;
struct IWebAccountMonitor;
struct IWebAuthenticationCoreManagerStatics;
struct IWebAuthenticationCoreManagerStatics2;
struct IWebAuthenticationCoreManagerStatics3;
struct IWebProviderError;
struct IWebProviderErrorFactory;
struct IWebTokenRequest;
struct IWebTokenRequest2;
struct IWebTokenRequest3;
struct IWebTokenRequestFactory;
struct IWebTokenRequestResult;
struct IWebTokenResponse;
struct IWebTokenResponseFactory;
struct WebAccountEventArgs;
struct WebAccountMonitor;
struct WebAuthenticationCoreManager;
struct WebProviderError;
struct WebTokenRequest;
struct WebTokenRequestResult;
struct WebTokenResponse;

}

namespace winrt::impl {

template <> struct category<Windows::Security::Authentication::Web::Core::IWebAccountEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Core::IWebAccountMonitor>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics2>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics3>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Core::IWebProviderError>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Core::IWebProviderErrorFactory>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Core::IWebTokenRequest>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Core::IWebTokenRequest2>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Core::IWebTokenRequest3>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Core::IWebTokenRequestResult>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Core::IWebTokenResponse>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Core::IWebTokenResponseFactory>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::Core::WebAccountEventArgs>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Web::Core::WebAccountMonitor>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Web::Core::WebAuthenticationCoreManager>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Web::Core::WebProviderError>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Web::Core::WebTokenRequest>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Web::Core::WebTokenRequestResult>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Web::Core::WebTokenResponse>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType>{ using type = enum_category; };
template <> struct category<Windows::Security::Authentication::Web::Core::WebTokenRequestStatus>{ using type = enum_category; };
template <> struct name<Windows::Security::Authentication::Web::Core::IWebAccountEventArgs>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.IWebAccountEventArgs" }; };
template <> struct name<Windows::Security::Authentication::Web::Core::IWebAccountMonitor>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.IWebAccountMonitor" }; };
template <> struct name<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.IWebAuthenticationCoreManagerStatics" }; };
template <> struct name<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics2>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.IWebAuthenticationCoreManagerStatics2" }; };
template <> struct name<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics3>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.IWebAuthenticationCoreManagerStatics3" }; };
template <> struct name<Windows::Security::Authentication::Web::Core::IWebProviderError>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.IWebProviderError" }; };
template <> struct name<Windows::Security::Authentication::Web::Core::IWebProviderErrorFactory>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.IWebProviderErrorFactory" }; };
template <> struct name<Windows::Security::Authentication::Web::Core::IWebTokenRequest>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.IWebTokenRequest" }; };
template <> struct name<Windows::Security::Authentication::Web::Core::IWebTokenRequest2>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.IWebTokenRequest2" }; };
template <> struct name<Windows::Security::Authentication::Web::Core::IWebTokenRequest3>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.IWebTokenRequest3" }; };
template <> struct name<Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.IWebTokenRequestFactory" }; };
template <> struct name<Windows::Security::Authentication::Web::Core::IWebTokenRequestResult>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.IWebTokenRequestResult" }; };
template <> struct name<Windows::Security::Authentication::Web::Core::IWebTokenResponse>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.IWebTokenResponse" }; };
template <> struct name<Windows::Security::Authentication::Web::Core::IWebTokenResponseFactory>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.IWebTokenResponseFactory" }; };
template <> struct name<Windows::Security::Authentication::Web::Core::WebAccountEventArgs>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.WebAccountEventArgs" }; };
template <> struct name<Windows::Security::Authentication::Web::Core::WebAccountMonitor>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.WebAccountMonitor" }; };
template <> struct name<Windows::Security::Authentication::Web::Core::WebAuthenticationCoreManager>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.WebAuthenticationCoreManager" }; };
template <> struct name<Windows::Security::Authentication::Web::Core::WebProviderError>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.WebProviderError" }; };
template <> struct name<Windows::Security::Authentication::Web::Core::WebTokenRequest>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.WebTokenRequest" }; };
template <> struct name<Windows::Security::Authentication::Web::Core::WebTokenRequestResult>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.WebTokenRequestResult" }; };
template <> struct name<Windows::Security::Authentication::Web::Core::WebTokenResponse>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.WebTokenResponse" }; };
template <> struct name<Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.WebTokenRequestPromptType" }; };
template <> struct name<Windows::Security::Authentication::Web::Core::WebTokenRequestStatus>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.Core.WebTokenRequestStatus" }; };
template <> struct guid<Windows::Security::Authentication::Web::Core::IWebAccountEventArgs>{ static constexpr GUID value{ 0x6FB7037D,0x424E,0x44EC,{ 0x97,0x7C,0xEF,0x24,0x15,0x46,0x2A,0x5A } }; };
template <> struct guid<Windows::Security::Authentication::Web::Core::IWebAccountMonitor>{ static constexpr GUID value{ 0x7445F5FD,0xAA9D,0x4619,{ 0x8D,0x5D,0xC1,0x38,0xA4,0xED,0xE3,0xE5 } }; };
template <> struct guid<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>{ static constexpr GUID value{ 0x6ACA7C92,0xA581,0x4479,{ 0x9C,0x10,0x75,0x2E,0xFF,0x44,0xFD,0x34 } }; };
template <> struct guid<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics2>{ static constexpr GUID value{ 0xF584184A,0x8B57,0x4820,{ 0xB6,0xA4,0x70,0xA5,0xB6,0xFC,0xF4,0x4A } }; };
template <> struct guid<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics3>{ static constexpr GUID value{ 0x2404EEB2,0x8924,0x4D93,{ 0xAB,0x3A,0x99,0x68,0x8B,0x41,0x9D,0x56 } }; };
template <> struct guid<Windows::Security::Authentication::Web::Core::IWebProviderError>{ static constexpr GUID value{ 0xDB191BB1,0x50C5,0x4809,{ 0x8D,0xCA,0x09,0xC9,0x94,0x10,0x24,0x5C } }; };
template <> struct guid<Windows::Security::Authentication::Web::Core::IWebProviderErrorFactory>{ static constexpr GUID value{ 0xE3C40A2D,0x89EF,0x4E37,{ 0x84,0x7F,0xA8,0xB9,0xD5,0xA3,0x29,0x10 } }; };
template <> struct guid<Windows::Security::Authentication::Web::Core::IWebTokenRequest>{ static constexpr GUID value{ 0xB77B4D68,0xADCB,0x4673,{ 0xB3,0x64,0x0C,0xF7,0xB3,0x5C,0xAF,0x97 } }; };
template <> struct guid<Windows::Security::Authentication::Web::Core::IWebTokenRequest2>{ static constexpr GUID value{ 0xD700C079,0x30C8,0x4397,{ 0x96,0x54,0x96,0x1C,0x3B,0xE8,0xB8,0x55 } }; };
template <> struct guid<Windows::Security::Authentication::Web::Core::IWebTokenRequest3>{ static constexpr GUID value{ 0x5A755B51,0x3BB1,0x41A5,{ 0xA6,0x3D,0x90,0xBC,0x32,0xC7,0xDB,0x9A } }; };
template <> struct guid<Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory>{ static constexpr GUID value{ 0x6CF2141C,0x0FF0,0x4C67,{ 0xB8,0x4F,0x99,0xDD,0xBE,0x4A,0x72,0xC9 } }; };
template <> struct guid<Windows::Security::Authentication::Web::Core::IWebTokenRequestResult>{ static constexpr GUID value{ 0xC12A8305,0xD1F8,0x4483,{ 0x8D,0x54,0x38,0xFE,0x29,0x27,0x84,0xFF } }; };
template <> struct guid<Windows::Security::Authentication::Web::Core::IWebTokenResponse>{ static constexpr GUID value{ 0x67A7C5CA,0x83F6,0x44C6,{ 0xA3,0xB1,0x0E,0xB6,0x9E,0x41,0xFA,0x8A } }; };
template <> struct guid<Windows::Security::Authentication::Web::Core::IWebTokenResponseFactory>{ static constexpr GUID value{ 0xAB6BF7F8,0x5450,0x4EF6,{ 0x97,0xF7,0x05,0x2B,0x04,0x31,0xC0,0xF0 } }; };
template <> struct default_interface<Windows::Security::Authentication::Web::Core::WebAccountEventArgs>{ using type = Windows::Security::Authentication::Web::Core::IWebAccountEventArgs; };
template <> struct default_interface<Windows::Security::Authentication::Web::Core::WebAccountMonitor>{ using type = Windows::Security::Authentication::Web::Core::IWebAccountMonitor; };
template <> struct default_interface<Windows::Security::Authentication::Web::Core::WebProviderError>{ using type = Windows::Security::Authentication::Web::Core::IWebProviderError; };
template <> struct default_interface<Windows::Security::Authentication::Web::Core::WebTokenRequest>{ using type = Windows::Security::Authentication::Web::Core::IWebTokenRequest; };
template <> struct default_interface<Windows::Security::Authentication::Web::Core::WebTokenRequestResult>{ using type = Windows::Security::Authentication::Web::Core::IWebTokenRequestResult; };
template <> struct default_interface<Windows::Security::Authentication::Web::Core::WebTokenResponse>{ using type = Windows::Security::Authentication::Web::Core::IWebTokenResponse; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Core_IWebAccountEventArgs
{
    Windows::Security::Credentials::WebAccount Account() const;
};
template <> struct consume<Windows::Security::Authentication::Web::Core::IWebAccountEventArgs> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Core_IWebAccountEventArgs<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Core_IWebAccountMonitor
{
    event_token Updated(Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> const& handler) const;
    using Updated_revoker = event_revoker<Windows::Security::Authentication::Web::Core::IWebAccountMonitor>;
    Updated_revoker Updated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> const& handler) const;
    void Updated(event_token const& token) const;
    event_token Removed(Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> const& handler) const;
    using Removed_revoker = event_revoker<Windows::Security::Authentication::Web::Core::IWebAccountMonitor>;
    Removed_revoker Removed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Security::Authentication::Web::Core::WebAccountEventArgs> const& handler) const;
    void Removed(event_token const& token) const;
    event_token DefaultSignInAccountChanged(Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Foundation::IInspectable> const& handler) const;
    using DefaultSignInAccountChanged_revoker = event_revoker<Windows::Security::Authentication::Web::Core::IWebAccountMonitor>;
    DefaultSignInAccountChanged_revoker DefaultSignInAccountChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Security::Authentication::Web::Core::WebAccountMonitor, Windows::Foundation::IInspectable> const& handler) const;
    void DefaultSignInAccountChanged(event_token const& token) const;
};
template <> struct consume<Windows::Security::Authentication::Web::Core::IWebAccountMonitor> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Core_IWebAccountMonitor<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> GetTokenSilentlyAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> GetTokenSilentlyAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request, Windows::Security::Credentials::WebAccount const& webAccount) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> RequestTokenAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult> RequestTokenAsync(Windows::Security::Authentication::Web::Core::WebTokenRequest const& request, Windows::Security::Credentials::WebAccount const& webAccount) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccount> FindAccountAsync(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& webAccountId) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> FindAccountProviderAsync(param::hstring const& webAccountProviderId) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> FindAccountProviderAsync(param::hstring const& webAccountProviderId, param::hstring const& authority) const;
};
template <> struct consume<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics2
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider> FindAccountProviderAsync(param::hstring const& webAccountProviderId, param::hstring const& authority, Windows::System::User const& user) const;
};
template <> struct consume<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics2> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics2<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics3
{
    Windows::Security::Authentication::Web::Core::WebAccountMonitor CreateWebAccountMonitor(param::iterable<Windows::Security::Credentials::WebAccount> const& webAccounts) const;
};
template <> struct consume<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics3> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Core_IWebAuthenticationCoreManagerStatics3<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Core_IWebProviderError
{
    uint32_t ErrorCode() const;
    hstring ErrorMessage() const;
    Windows::Foundation::Collections::IMap<hstring, hstring> Properties() const;
};
template <> struct consume<Windows::Security::Authentication::Web::Core::IWebProviderError> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Core_IWebProviderError<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Core_IWebProviderErrorFactory
{
    Windows::Security::Authentication::Web::Core::WebProviderError Create(uint32_t errorCode, param::hstring const& errorMessage) const;
};
template <> struct consume<Windows::Security::Authentication::Web::Core::IWebProviderErrorFactory> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Core_IWebProviderErrorFactory<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Core_IWebTokenRequest
{
    Windows::Security::Credentials::WebAccountProvider WebAccountProvider() const;
    hstring Scope() const;
    hstring ClientId() const;
    Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType PromptType() const;
    Windows::Foundation::Collections::IMap<hstring, hstring> Properties() const;
};
template <> struct consume<Windows::Security::Authentication::Web::Core::IWebTokenRequest> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Core_IWebTokenRequest<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Core_IWebTokenRequest2
{
    Windows::Foundation::Collections::IMap<hstring, hstring> AppProperties() const;
};
template <> struct consume<Windows::Security::Authentication::Web::Core::IWebTokenRequest2> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Core_IWebTokenRequest2<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Core_IWebTokenRequest3
{
    hstring CorrelationId() const;
    void CorrelationId(param::hstring const& value) const;
};
template <> struct consume<Windows::Security::Authentication::Web::Core::IWebTokenRequest3> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Core_IWebTokenRequest3<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Core_IWebTokenRequestFactory
{
    Windows::Security::Authentication::Web::Core::WebTokenRequest Create(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& scope, param::hstring const& clientId) const;
    Windows::Security::Authentication::Web::Core::WebTokenRequest CreateWithPromptType(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& scope, param::hstring const& clientId, Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType const& promptType) const;
    Windows::Security::Authentication::Web::Core::WebTokenRequest CreateWithProvider(Windows::Security::Credentials::WebAccountProvider const& provider) const;
    Windows::Security::Authentication::Web::Core::WebTokenRequest CreateWithScope(Windows::Security::Credentials::WebAccountProvider const& provider, param::hstring const& scope) const;
};
template <> struct consume<Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Core_IWebTokenRequestFactory<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Core_IWebTokenRequestResult
{
    Windows::Foundation::Collections::IVectorView<Windows::Security::Authentication::Web::Core::WebTokenResponse> ResponseData() const;
    Windows::Security::Authentication::Web::Core::WebTokenRequestStatus ResponseStatus() const;
    Windows::Security::Authentication::Web::Core::WebProviderError ResponseError() const;
    Windows::Foundation::IAsyncAction InvalidateCacheAsync() const;
};
template <> struct consume<Windows::Security::Authentication::Web::Core::IWebTokenRequestResult> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Core_IWebTokenRequestResult<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Core_IWebTokenResponse
{
    hstring Token() const;
    Windows::Security::Authentication::Web::Core::WebProviderError ProviderError() const;
    Windows::Security::Credentials::WebAccount WebAccount() const;
    Windows::Foundation::Collections::IMap<hstring, hstring> Properties() const;
};
template <> struct consume<Windows::Security::Authentication::Web::Core::IWebTokenResponse> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Core_IWebTokenResponse<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_Core_IWebTokenResponseFactory
{
    Windows::Security::Authentication::Web::Core::WebTokenResponse CreateWithToken(param::hstring const& token) const;
    Windows::Security::Authentication::Web::Core::WebTokenResponse CreateWithTokenAndAccount(param::hstring const& token, Windows::Security::Credentials::WebAccount const& webAccount) const;
    Windows::Security::Authentication::Web::Core::WebTokenResponse CreateWithTokenAccountAndError(param::hstring const& token, Windows::Security::Credentials::WebAccount const& webAccount, Windows::Security::Authentication::Web::Core::WebProviderError const& error) const;
};
template <> struct consume<Windows::Security::Authentication::Web::Core::IWebTokenResponseFactory> { template <typename D> using type = consume_Windows_Security_Authentication_Web_Core_IWebTokenResponseFactory<D>; };

template <> struct abi<Windows::Security::Authentication::Web::Core::IWebAccountEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Account(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Core::IWebAccountMonitor>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_Updated(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Updated(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_Removed(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Removed(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_DefaultSignInAccountChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_DefaultSignInAccountChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetTokenSilentlyAsync(::IUnknown* request, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall GetTokenSilentlyWithWebAccountAsync(::IUnknown* request, ::IUnknown* webAccount, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall RequestTokenAsync(::IUnknown* request, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall RequestTokenWithWebAccountAsync(::IUnknown* request, ::IUnknown* webAccount, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall FindAccountAsync(::IUnknown* provider, HSTRING webAccountId, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall FindAccountProviderAsync(HSTRING webAccountProviderId, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall FindAccountProviderWithAuthorityAsync(HSTRING webAccountProviderId, HSTRING authority, ::IUnknown** asyncInfo) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FindAccountProviderWithAuthorityForUserAsync(HSTRING webAccountProviderId, HSTRING authority, ::IUnknown* user, ::IUnknown** asyncInfo) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWebAccountMonitor(::IUnknown* webAccounts, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Core::IWebProviderError>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ErrorCode(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_ErrorMessage(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Core::IWebProviderErrorFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(uint32_t errorCode, HSTRING errorMessage, ::IUnknown** webProviderError) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Core::IWebTokenRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_WebAccountProvider(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Scope(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ClientId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PromptType(abi_t<Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType>* value) = 0;
    virtual HRESULT __stdcall get_Properties(::IUnknown** requestProperties) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Core::IWebTokenRequest2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AppProperties(::IUnknown** requestProperties) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Core::IWebTokenRequest3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CorrelationId(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_CorrelationId(HSTRING value) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Core::IWebTokenRequestFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* provider, HSTRING scope, HSTRING clientId, ::IUnknown** webTokenRequest) = 0;
    virtual HRESULT __stdcall CreateWithPromptType(::IUnknown* provider, HSTRING scope, HSTRING clientId, abi_t<Windows::Security::Authentication::Web::Core::WebTokenRequestPromptType> promptType, ::IUnknown** webTokenRequest) = 0;
    virtual HRESULT __stdcall CreateWithProvider(::IUnknown* provider, ::IUnknown** webTokenRequest) = 0;
    virtual HRESULT __stdcall CreateWithScope(::IUnknown* provider, HSTRING scope, ::IUnknown** webTokenRequest) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Core::IWebTokenRequestResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ResponseData(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ResponseStatus(abi_t<Windows::Security::Authentication::Web::Core::WebTokenRequestStatus>* value) = 0;
    virtual HRESULT __stdcall get_ResponseError(::IUnknown** value) = 0;
    virtual HRESULT __stdcall InvalidateCacheAsync(::IUnknown** asyncInfo) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Core::IWebTokenResponse>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Token(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ProviderError(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_WebAccount(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::Core::IWebTokenResponseFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWithToken(HSTRING token, ::IUnknown** webTokenResponse) = 0;
    virtual HRESULT __stdcall CreateWithTokenAndAccount(HSTRING token, ::IUnknown* webAccount, ::IUnknown** webTokenResponse) = 0;
    virtual HRESULT __stdcall CreateWithTokenAccountAndError(HSTRING token, ::IUnknown* webAccount, ::IUnknown* error, ::IUnknown** webTokenResponse) = 0;
};};

}
