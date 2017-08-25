// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IInputStream;

}

WINRT_EXPORT namespace winrt::Windows::Web {

enum class WebErrorStatus
{
    Unknown = 0,
    CertificateCommonNameIsIncorrect = 1,
    CertificateExpired = 2,
    CertificateContainsErrors = 3,
    CertificateRevoked = 4,
    CertificateIsInvalid = 5,
    ServerUnreachable = 6,
    Timeout = 7,
    ErrorHttpInvalidServerResponse = 8,
    ConnectionAborted = 9,
    ConnectionReset = 10,
    Disconnected = 11,
    HttpToHttpsOnRedirection = 12,
    HttpsToHttpOnRedirection = 13,
    CannotConnect = 14,
    HostNameNotResolved = 15,
    OperationCanceled = 16,
    RedirectFailed = 17,
    UnexpectedStatusCode = 18,
    UnexpectedRedirection = 19,
    UnexpectedClientError = 20,
    UnexpectedServerError = 21,
    MultipleChoices = 300,
    MovedPermanently = 301,
    Found = 302,
    SeeOther = 303,
    NotModified = 304,
    UseProxy = 305,
    TemporaryRedirect = 307,
    BadRequest = 400,
    Unauthorized = 401,
    PaymentRequired = 402,
    Forbidden = 403,
    NotFound = 404,
    MethodNotAllowed = 405,
    NotAcceptable = 406,
    ProxyAuthenticationRequired = 407,
    RequestTimeout = 408,
    Conflict = 409,
    Gone = 410,
    LengthRequired = 411,
    PreconditionFailed = 412,
    RequestEntityTooLarge = 413,
    RequestUriTooLong = 414,
    UnsupportedMediaType = 415,
    RequestedRangeNotSatisfiable = 416,
    ExpectationFailed = 417,
    InternalServerError = 500,
    NotImplemented = 501,
    BadGateway = 502,
    ServiceUnavailable = 503,
    GatewayTimeout = 504,
    HttpVersionNotSupported = 505,
};

struct IUriToStreamResolver;
struct IWebErrorStatics;
struct WebError;

}

namespace winrt::impl {

template <> struct category<Windows::Web::IUriToStreamResolver>{ using type = interface_category; };
template <> struct category<Windows::Web::IWebErrorStatics>{ using type = interface_category; };
template <> struct category<Windows::Web::WebError>{ using type = class_category; };
template <> struct category<Windows::Web::WebErrorStatus>{ using type = enum_category; };
template <> struct name<Windows::Web::IUriToStreamResolver>{ static constexpr auto & value{ L"Windows.Web.IUriToStreamResolver" }; };
template <> struct name<Windows::Web::IWebErrorStatics>{ static constexpr auto & value{ L"Windows.Web.IWebErrorStatics" }; };
template <> struct name<Windows::Web::WebError>{ static constexpr auto & value{ L"Windows.Web.WebError" }; };
template <> struct name<Windows::Web::WebErrorStatus>{ static constexpr auto & value{ L"Windows.Web.WebErrorStatus" }; };
template <> struct guid<Windows::Web::IUriToStreamResolver>{ static constexpr GUID value{ 0xB0ABA86A,0x9AEB,0x4D3A,{ 0x95,0x90,0x00,0x3E,0x3C,0xA7,0xE2,0x90 } }; };
template <> struct guid<Windows::Web::IWebErrorStatics>{ static constexpr GUID value{ 0xFE616766,0xBF27,0x4064,{ 0x87,0xB7,0x65,0x63,0xBB,0x11,0xCE,0x2E } }; };

template <typename D>
struct consume_Windows_Web_IUriToStreamResolver
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IInputStream> UriToStreamAsync(Windows::Foundation::Uri const& uri) const;
};
template <> struct consume<Windows::Web::IUriToStreamResolver> { template <typename D> using type = consume_Windows_Web_IUriToStreamResolver<D>; };

template <typename D>
struct consume_Windows_Web_IWebErrorStatics
{
    Windows::Web::WebErrorStatus GetStatus(int32_t hresult) const;
};
template <> struct consume<Windows::Web::IWebErrorStatics> { template <typename D> using type = consume_Windows_Web_IWebErrorStatics<D>; };

template <> struct abi<Windows::Web::IUriToStreamResolver>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall UriToStreamAsync(::IUnknown* uri, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Web::IWebErrorStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetStatus(int32_t hresult, abi_t<Windows::Web::WebErrorStatus>* status) = 0;
};};

}
