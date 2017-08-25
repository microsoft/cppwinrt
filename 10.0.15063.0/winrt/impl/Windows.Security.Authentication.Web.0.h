// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {

struct ValueSet;

}

WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Web {

enum class TokenBindingKeyType
{
    Rsa2048 = 0,
    EcdsaP256 = 1,
    AnyExisting = 2,
};

enum class WebAuthenticationOptions : unsigned
{
    None = 0x0,
    SilentMode = 0x1,
    UseTitle = 0x2,
    UseHttpPost = 0x4,
    UseCorporateNetwork = 0x8,
};

DEFINE_ENUM_FLAG_OPERATORS(WebAuthenticationOptions)

enum class WebAuthenticationStatus
{
    Success = 0,
    UserCancel = 1,
    ErrorHttp = 2,
};

struct IWebAuthenticationBrokerStatics;
struct IWebAuthenticationBrokerStatics2;
struct IWebAuthenticationResult;
struct WebAuthenticationBroker;
struct WebAuthenticationResult;

}

namespace winrt::impl {

template <> struct category<Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics2>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::IWebAuthenticationResult>{ using type = interface_category; };
template <> struct category<Windows::Security::Authentication::Web::WebAuthenticationBroker>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Web::WebAuthenticationResult>{ using type = class_category; };
template <> struct category<Windows::Security::Authentication::Web::TokenBindingKeyType>{ using type = enum_category; };
template <> struct category<Windows::Security::Authentication::Web::WebAuthenticationOptions>{ using type = enum_category; };
template <> struct category<Windows::Security::Authentication::Web::WebAuthenticationStatus>{ using type = enum_category; };
template <> struct name<Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.IWebAuthenticationBrokerStatics" }; };
template <> struct name<Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics2>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.IWebAuthenticationBrokerStatics2" }; };
template <> struct name<Windows::Security::Authentication::Web::IWebAuthenticationResult>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.IWebAuthenticationResult" }; };
template <> struct name<Windows::Security::Authentication::Web::WebAuthenticationBroker>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.WebAuthenticationBroker" }; };
template <> struct name<Windows::Security::Authentication::Web::WebAuthenticationResult>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.WebAuthenticationResult" }; };
template <> struct name<Windows::Security::Authentication::Web::TokenBindingKeyType>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.TokenBindingKeyType" }; };
template <> struct name<Windows::Security::Authentication::Web::WebAuthenticationOptions>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.WebAuthenticationOptions" }; };
template <> struct name<Windows::Security::Authentication::Web::WebAuthenticationStatus>{ static constexpr auto & value{ L"Windows.Security.Authentication.Web.WebAuthenticationStatus" }; };
template <> struct guid<Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics>{ static constexpr GUID value{ 0x2F149F1A,0xE673,0x40B5,{ 0xBC,0x22,0x20,0x1A,0x68,0x64,0xA3,0x7B } }; };
template <> struct guid<Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics2>{ static constexpr GUID value{ 0x73CDFB9E,0x14E7,0x41DA,{ 0xA9,0x71,0xAA,0xF4,0x41,0x0B,0x62,0x1E } }; };
template <> struct guid<Windows::Security::Authentication::Web::IWebAuthenticationResult>{ static constexpr GUID value{ 0x64002B4B,0xEDE9,0x470A,{ 0xA5,0xCD,0x03,0x23,0xFA,0xF6,0xE2,0x62 } }; };
template <> struct default_interface<Windows::Security::Authentication::Web::WebAuthenticationResult>{ using type = Windows::Security::Authentication::Web::IWebAuthenticationResult; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_IWebAuthenticationBrokerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> AuthenticateAsync(Windows::Security::Authentication::Web::WebAuthenticationOptions const& options, Windows::Foundation::Uri const& requestUri, Windows::Foundation::Uri const& callbackUri) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> AuthenticateAsync(Windows::Security::Authentication::Web::WebAuthenticationOptions const& options, Windows::Foundation::Uri const& requestUri) const;
    Windows::Foundation::Uri GetCurrentApplicationCallbackUri() const;
};
template <> struct consume<Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics> { template <typename D> using type = consume_Windows_Security_Authentication_Web_IWebAuthenticationBrokerStatics<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_IWebAuthenticationBrokerStatics2
{
    void AuthenticateAndContinue(Windows::Foundation::Uri const& requestUri) const;
    void AuthenticateAndContinue(Windows::Foundation::Uri const& requestUri, Windows::Foundation::Uri const& callbackUri) const;
    void AuthenticateAndContinue(Windows::Foundation::Uri const& requestUri, Windows::Foundation::Uri const& callbackUri, Windows::Foundation::Collections::ValueSet const& continuationData, Windows::Security::Authentication::Web::WebAuthenticationOptions const& options) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> AuthenticateSilentlyAsync(Windows::Foundation::Uri const& requestUri) const;
    Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::WebAuthenticationResult> AuthenticateSilentlyAsync(Windows::Foundation::Uri const& requestUri, Windows::Security::Authentication::Web::WebAuthenticationOptions const& options) const;
};
template <> struct consume<Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics2> { template <typename D> using type = consume_Windows_Security_Authentication_Web_IWebAuthenticationBrokerStatics2<D>; };

template <typename D>
struct consume_Windows_Security_Authentication_Web_IWebAuthenticationResult
{
    hstring ResponseData() const;
    Windows::Security::Authentication::Web::WebAuthenticationStatus ResponseStatus() const;
    uint32_t ResponseErrorDetail() const;
};
template <> struct consume<Windows::Security::Authentication::Web::IWebAuthenticationResult> { template <typename D> using type = consume_Windows_Security_Authentication_Web_IWebAuthenticationResult<D>; };

template <> struct abi<Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AuthenticateWithCallbackUriAsync(abi_t<Windows::Security::Authentication::Web::WebAuthenticationOptions> options, ::IUnknown* requestUri, ::IUnknown* callbackUri, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall AuthenticateWithoutCallbackUriAsync(abi_t<Windows::Security::Authentication::Web::WebAuthenticationOptions> options, ::IUnknown* requestUri, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall GetCurrentApplicationCallbackUri(::IUnknown** callbackUri) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::IWebAuthenticationBrokerStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AuthenticateAndContinue(::IUnknown* requestUri) = 0;
    virtual HRESULT __stdcall AuthenticateWithCallbackUriAndContinue(::IUnknown* requestUri, ::IUnknown* callbackUri) = 0;
    virtual HRESULT __stdcall AuthenticateWithCallbackUriContinuationDataAndOptionsAndContinue(::IUnknown* requestUri, ::IUnknown* callbackUri, ::IUnknown* continuationData, abi_t<Windows::Security::Authentication::Web::WebAuthenticationOptions> options) = 0;
    virtual HRESULT __stdcall AuthenticateSilentlyAsync(::IUnknown* requestUri, ::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall AuthenticateSilentlyWithOptionsAsync(::IUnknown* requestUri, abi_t<Windows::Security::Authentication::Web::WebAuthenticationOptions> options, ::IUnknown** asyncInfo) = 0;
};};

template <> struct abi<Windows::Security::Authentication::Web::IWebAuthenticationResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ResponseData(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ResponseStatus(abi_t<Windows::Security::Authentication::Web::WebAuthenticationStatus>* value) = 0;
    virtual HRESULT __stdcall get_ResponseErrorDetail(uint32_t* value) = 0;
};};

}
