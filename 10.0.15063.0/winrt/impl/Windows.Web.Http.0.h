// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Networking::Sockets {

enum class SocketSslErrorSeverity;

}

WINRT_EXPORT namespace winrt::Windows::Security::Cryptography::Certificates {

enum class ChainValidationResult;
struct Certificate;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

enum class UnicodeEncoding;
struct IBuffer;
struct IInputStream;
struct IOutputStream;

}

WINRT_EXPORT namespace winrt::Windows::Web::Http::Filters {

struct IHttpFilter;

}

WINRT_EXPORT namespace winrt::Windows::Web::Http::Headers {

struct HttpContentHeaderCollection;
struct HttpRequestHeaderCollection;
struct HttpResponseHeaderCollection;

}

WINRT_EXPORT namespace winrt::Windows::Web::Http {

enum class HttpCompletionOption
{
    ResponseContentRead = 0,
    ResponseHeadersRead = 1,
};

enum class HttpProgressStage
{
    None = 0,
    DetectingProxy = 10,
    ResolvingName = 20,
    ConnectingToServer = 30,
    NegotiatingSsl = 40,
    SendingHeaders = 50,
    SendingContent = 60,
    WaitingForResponse = 70,
    ReceivingHeaders = 80,
    ReceivingContent = 90,
};

enum class HttpResponseMessageSource
{
    None = 0,
    Cache = 1,
    Network = 2,
};

enum class HttpStatusCode
{
    None = 0,
    Continue = 100,
    SwitchingProtocols = 101,
    Processing = 102,
    Ok = 200,
    Created = 201,
    Accepted = 202,
    NonAuthoritativeInformation = 203,
    NoContent = 204,
    ResetContent = 205,
    PartialContent = 206,
    MultiStatus = 207,
    AlreadyReported = 208,
    IMUsed = 226,
    MultipleChoices = 300,
    MovedPermanently = 301,
    Found = 302,
    SeeOther = 303,
    NotModified = 304,
    UseProxy = 305,
    TemporaryRedirect = 307,
    PermanentRedirect = 308,
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
    UnprocessableEntity = 422,
    Locked = 423,
    FailedDependency = 424,
    UpgradeRequired = 426,
    PreconditionRequired = 428,
    TooManyRequests = 429,
    RequestHeaderFieldsTooLarge = 431,
    InternalServerError = 500,
    NotImplemented = 501,
    BadGateway = 502,
    ServiceUnavailable = 503,
    GatewayTimeout = 504,
    HttpVersionNotSupported = 505,
    VariantAlsoNegotiates = 506,
    InsufficientStorage = 507,
    LoopDetected = 508,
    NotExtended = 510,
    NetworkAuthenticationRequired = 511,
};

enum class HttpVersion
{
    None = 0,
    Http10 = 1,
    Http11 = 2,
    Http20 = 3,
};

struct IHttpBufferContentFactory;
struct IHttpClient;
struct IHttpClientFactory;
struct IHttpContent;
struct IHttpCookie;
struct IHttpCookieFactory;
struct IHttpCookieManager;
struct IHttpFormUrlEncodedContentFactory;
struct IHttpMethod;
struct IHttpMethodFactory;
struct IHttpMethodStatics;
struct IHttpMultipartContent;
struct IHttpMultipartContentFactory;
struct IHttpMultipartFormDataContent;
struct IHttpMultipartFormDataContentFactory;
struct IHttpRequestMessage;
struct IHttpRequestMessageFactory;
struct IHttpResponseMessage;
struct IHttpResponseMessageFactory;
struct IHttpStreamContentFactory;
struct IHttpStringContentFactory;
struct IHttpTransportInformation;
struct HttpBufferContent;
struct HttpClient;
struct HttpCookie;
struct HttpCookieCollection;
struct HttpCookieManager;
struct HttpFormUrlEncodedContent;
struct HttpMethod;
struct HttpMultipartContent;
struct HttpMultipartFormDataContent;
struct HttpRequestMessage;
struct HttpResponseMessage;
struct HttpStreamContent;
struct HttpStringContent;
struct HttpTransportInformation;
struct HttpProgress;

}

namespace winrt::impl {

template <> struct category<Windows::Web::Http::IHttpBufferContentFactory>{ using type = interface_category; };
template <> struct category<Windows::Web::Http::IHttpClient>{ using type = interface_category; };
template <> struct category<Windows::Web::Http::IHttpClientFactory>{ using type = interface_category; };
template <> struct category<Windows::Web::Http::IHttpContent>{ using type = interface_category; };
template <> struct category<Windows::Web::Http::IHttpCookie>{ using type = interface_category; };
template <> struct category<Windows::Web::Http::IHttpCookieFactory>{ using type = interface_category; };
template <> struct category<Windows::Web::Http::IHttpCookieManager>{ using type = interface_category; };
template <> struct category<Windows::Web::Http::IHttpFormUrlEncodedContentFactory>{ using type = interface_category; };
template <> struct category<Windows::Web::Http::IHttpMethod>{ using type = interface_category; };
template <> struct category<Windows::Web::Http::IHttpMethodFactory>{ using type = interface_category; };
template <> struct category<Windows::Web::Http::IHttpMethodStatics>{ using type = interface_category; };
template <> struct category<Windows::Web::Http::IHttpMultipartContent>{ using type = interface_category; };
template <> struct category<Windows::Web::Http::IHttpMultipartContentFactory>{ using type = interface_category; };
template <> struct category<Windows::Web::Http::IHttpMultipartFormDataContent>{ using type = interface_category; };
template <> struct category<Windows::Web::Http::IHttpMultipartFormDataContentFactory>{ using type = interface_category; };
template <> struct category<Windows::Web::Http::IHttpRequestMessage>{ using type = interface_category; };
template <> struct category<Windows::Web::Http::IHttpRequestMessageFactory>{ using type = interface_category; };
template <> struct category<Windows::Web::Http::IHttpResponseMessage>{ using type = interface_category; };
template <> struct category<Windows::Web::Http::IHttpResponseMessageFactory>{ using type = interface_category; };
template <> struct category<Windows::Web::Http::IHttpStreamContentFactory>{ using type = interface_category; };
template <> struct category<Windows::Web::Http::IHttpStringContentFactory>{ using type = interface_category; };
template <> struct category<Windows::Web::Http::IHttpTransportInformation>{ using type = interface_category; };
template <> struct category<Windows::Web::Http::HttpBufferContent>{ using type = class_category; };
template <> struct category<Windows::Web::Http::HttpClient>{ using type = class_category; };
template <> struct category<Windows::Web::Http::HttpCookie>{ using type = class_category; };
template <> struct category<Windows::Web::Http::HttpCookieCollection>{ using type = class_category; };
template <> struct category<Windows::Web::Http::HttpCookieManager>{ using type = class_category; };
template <> struct category<Windows::Web::Http::HttpFormUrlEncodedContent>{ using type = class_category; };
template <> struct category<Windows::Web::Http::HttpMethod>{ using type = class_category; };
template <> struct category<Windows::Web::Http::HttpMultipartContent>{ using type = class_category; };
template <> struct category<Windows::Web::Http::HttpMultipartFormDataContent>{ using type = class_category; };
template <> struct category<Windows::Web::Http::HttpRequestMessage>{ using type = class_category; };
template <> struct category<Windows::Web::Http::HttpResponseMessage>{ using type = class_category; };
template <> struct category<Windows::Web::Http::HttpStreamContent>{ using type = class_category; };
template <> struct category<Windows::Web::Http::HttpStringContent>{ using type = class_category; };
template <> struct category<Windows::Web::Http::HttpTransportInformation>{ using type = class_category; };
template <> struct category<Windows::Web::Http::HttpCompletionOption>{ using type = enum_category; };
template <> struct category<Windows::Web::Http::HttpProgressStage>{ using type = enum_category; };
template <> struct category<Windows::Web::Http::HttpResponseMessageSource>{ using type = enum_category; };
template <> struct category<Windows::Web::Http::HttpStatusCode>{ using type = enum_category; };
template <> struct category<Windows::Web::Http::HttpVersion>{ using type = enum_category; };
template <> struct category<Windows::Web::Http::HttpProgress>{ using type = struct_category<Windows::Web::Http::HttpProgressStage,uint64_t,Windows::Foundation::IReference<uint64_t>,uint64_t,Windows::Foundation::IReference<uint64_t>,uint32_t>; };
template <> struct name<Windows::Web::Http::IHttpBufferContentFactory>{ static constexpr auto & value{ L"Windows.Web.Http.IHttpBufferContentFactory" }; };
template <> struct name<Windows::Web::Http::IHttpClient>{ static constexpr auto & value{ L"Windows.Web.Http.IHttpClient" }; };
template <> struct name<Windows::Web::Http::IHttpClientFactory>{ static constexpr auto & value{ L"Windows.Web.Http.IHttpClientFactory" }; };
template <> struct name<Windows::Web::Http::IHttpContent>{ static constexpr auto & value{ L"Windows.Web.Http.IHttpContent" }; };
template <> struct name<Windows::Web::Http::IHttpCookie>{ static constexpr auto & value{ L"Windows.Web.Http.IHttpCookie" }; };
template <> struct name<Windows::Web::Http::IHttpCookieFactory>{ static constexpr auto & value{ L"Windows.Web.Http.IHttpCookieFactory" }; };
template <> struct name<Windows::Web::Http::IHttpCookieManager>{ static constexpr auto & value{ L"Windows.Web.Http.IHttpCookieManager" }; };
template <> struct name<Windows::Web::Http::IHttpFormUrlEncodedContentFactory>{ static constexpr auto & value{ L"Windows.Web.Http.IHttpFormUrlEncodedContentFactory" }; };
template <> struct name<Windows::Web::Http::IHttpMethod>{ static constexpr auto & value{ L"Windows.Web.Http.IHttpMethod" }; };
template <> struct name<Windows::Web::Http::IHttpMethodFactory>{ static constexpr auto & value{ L"Windows.Web.Http.IHttpMethodFactory" }; };
template <> struct name<Windows::Web::Http::IHttpMethodStatics>{ static constexpr auto & value{ L"Windows.Web.Http.IHttpMethodStatics" }; };
template <> struct name<Windows::Web::Http::IHttpMultipartContent>{ static constexpr auto & value{ L"Windows.Web.Http.IHttpMultipartContent" }; };
template <> struct name<Windows::Web::Http::IHttpMultipartContentFactory>{ static constexpr auto & value{ L"Windows.Web.Http.IHttpMultipartContentFactory" }; };
template <> struct name<Windows::Web::Http::IHttpMultipartFormDataContent>{ static constexpr auto & value{ L"Windows.Web.Http.IHttpMultipartFormDataContent" }; };
template <> struct name<Windows::Web::Http::IHttpMultipartFormDataContentFactory>{ static constexpr auto & value{ L"Windows.Web.Http.IHttpMultipartFormDataContentFactory" }; };
template <> struct name<Windows::Web::Http::IHttpRequestMessage>{ static constexpr auto & value{ L"Windows.Web.Http.IHttpRequestMessage" }; };
template <> struct name<Windows::Web::Http::IHttpRequestMessageFactory>{ static constexpr auto & value{ L"Windows.Web.Http.IHttpRequestMessageFactory" }; };
template <> struct name<Windows::Web::Http::IHttpResponseMessage>{ static constexpr auto & value{ L"Windows.Web.Http.IHttpResponseMessage" }; };
template <> struct name<Windows::Web::Http::IHttpResponseMessageFactory>{ static constexpr auto & value{ L"Windows.Web.Http.IHttpResponseMessageFactory" }; };
template <> struct name<Windows::Web::Http::IHttpStreamContentFactory>{ static constexpr auto & value{ L"Windows.Web.Http.IHttpStreamContentFactory" }; };
template <> struct name<Windows::Web::Http::IHttpStringContentFactory>{ static constexpr auto & value{ L"Windows.Web.Http.IHttpStringContentFactory" }; };
template <> struct name<Windows::Web::Http::IHttpTransportInformation>{ static constexpr auto & value{ L"Windows.Web.Http.IHttpTransportInformation" }; };
template <> struct name<Windows::Web::Http::HttpBufferContent>{ static constexpr auto & value{ L"Windows.Web.Http.HttpBufferContent" }; };
template <> struct name<Windows::Web::Http::HttpClient>{ static constexpr auto & value{ L"Windows.Web.Http.HttpClient" }; };
template <> struct name<Windows::Web::Http::HttpCookie>{ static constexpr auto & value{ L"Windows.Web.Http.HttpCookie" }; };
template <> struct name<Windows::Web::Http::HttpCookieCollection>{ static constexpr auto & value{ L"Windows.Web.Http.HttpCookieCollection" }; };
template <> struct name<Windows::Web::Http::HttpCookieManager>{ static constexpr auto & value{ L"Windows.Web.Http.HttpCookieManager" }; };
template <> struct name<Windows::Web::Http::HttpFormUrlEncodedContent>{ static constexpr auto & value{ L"Windows.Web.Http.HttpFormUrlEncodedContent" }; };
template <> struct name<Windows::Web::Http::HttpMethod>{ static constexpr auto & value{ L"Windows.Web.Http.HttpMethod" }; };
template <> struct name<Windows::Web::Http::HttpMultipartContent>{ static constexpr auto & value{ L"Windows.Web.Http.HttpMultipartContent" }; };
template <> struct name<Windows::Web::Http::HttpMultipartFormDataContent>{ static constexpr auto & value{ L"Windows.Web.Http.HttpMultipartFormDataContent" }; };
template <> struct name<Windows::Web::Http::HttpRequestMessage>{ static constexpr auto & value{ L"Windows.Web.Http.HttpRequestMessage" }; };
template <> struct name<Windows::Web::Http::HttpResponseMessage>{ static constexpr auto & value{ L"Windows.Web.Http.HttpResponseMessage" }; };
template <> struct name<Windows::Web::Http::HttpStreamContent>{ static constexpr auto & value{ L"Windows.Web.Http.HttpStreamContent" }; };
template <> struct name<Windows::Web::Http::HttpStringContent>{ static constexpr auto & value{ L"Windows.Web.Http.HttpStringContent" }; };
template <> struct name<Windows::Web::Http::HttpTransportInformation>{ static constexpr auto & value{ L"Windows.Web.Http.HttpTransportInformation" }; };
template <> struct name<Windows::Web::Http::HttpCompletionOption>{ static constexpr auto & value{ L"Windows.Web.Http.HttpCompletionOption" }; };
template <> struct name<Windows::Web::Http::HttpProgressStage>{ static constexpr auto & value{ L"Windows.Web.Http.HttpProgressStage" }; };
template <> struct name<Windows::Web::Http::HttpResponseMessageSource>{ static constexpr auto & value{ L"Windows.Web.Http.HttpResponseMessageSource" }; };
template <> struct name<Windows::Web::Http::HttpStatusCode>{ static constexpr auto & value{ L"Windows.Web.Http.HttpStatusCode" }; };
template <> struct name<Windows::Web::Http::HttpVersion>{ static constexpr auto & value{ L"Windows.Web.Http.HttpVersion" }; };
template <> struct name<Windows::Web::Http::HttpProgress>{ static constexpr auto & value{ L"Windows.Web.Http.HttpProgress" }; };
template <> struct guid<Windows::Web::Http::IHttpBufferContentFactory>{ static constexpr GUID value{ 0xBC20C193,0xC41F,0x4FF7,{ 0x91,0x23,0x64,0x35,0x73,0x6E,0xAD,0xC2 } }; };
template <> struct guid<Windows::Web::Http::IHttpClient>{ static constexpr GUID value{ 0x7FDA1151,0x3574,0x4880,{ 0xA8,0xBA,0xE6,0xB1,0xE0,0x06,0x1F,0x3D } }; };
template <> struct guid<Windows::Web::Http::IHttpClientFactory>{ static constexpr GUID value{ 0xC30C4ECA,0xE3FA,0x4F99,{ 0xAF,0xB4,0x63,0xCC,0x65,0x00,0x94,0x62 } }; };
template <> struct guid<Windows::Web::Http::IHttpContent>{ static constexpr GUID value{ 0x6B14A441,0xFBA7,0x4BD2,{ 0xAF,0x0A,0x83,0x9D,0xE7,0xC2,0x95,0xDA } }; };
template <> struct guid<Windows::Web::Http::IHttpCookie>{ static constexpr GUID value{ 0x1F5488E2,0xCC2D,0x4779,{ 0x86,0xA7,0x88,0xF1,0x06,0x87,0xD2,0x49 } }; };
template <> struct guid<Windows::Web::Http::IHttpCookieFactory>{ static constexpr GUID value{ 0x6A0585A9,0x931C,0x4CD1,{ 0xA9,0x6D,0xC2,0x17,0x01,0x78,0x5C,0x5F } }; };
template <> struct guid<Windows::Web::Http::IHttpCookieManager>{ static constexpr GUID value{ 0x7A431780,0xCD4F,0x4E57,{ 0xA8,0x4A,0x5B,0x0A,0x53,0xD6,0xBB,0x96 } }; };
template <> struct guid<Windows::Web::Http::IHttpFormUrlEncodedContentFactory>{ static constexpr GUID value{ 0x43F0138C,0x2F73,0x4302,{ 0xB5,0xF3,0xEA,0xE9,0x23,0x8A,0x5E,0x01 } }; };
template <> struct guid<Windows::Web::Http::IHttpMethod>{ static constexpr GUID value{ 0x728D4022,0x700D,0x4FE0,{ 0xAF,0xA5,0x40,0x29,0x9C,0x58,0xDB,0xFD } }; };
template <> struct guid<Windows::Web::Http::IHttpMethodFactory>{ static constexpr GUID value{ 0x3C51D10D,0x36D7,0x40F8,{ 0xA8,0x6D,0xE7,0x59,0xCA,0xF2,0xF8,0x3F } }; };
template <> struct guid<Windows::Web::Http::IHttpMethodStatics>{ static constexpr GUID value{ 0x64D171F0,0xD99A,0x4153,{ 0x8D,0xC6,0xD6,0x8C,0xC4,0xCC,0xE3,0x17 } }; };
template <> struct guid<Windows::Web::Http::IHttpMultipartContent>{ static constexpr GUID value{ 0xDF916AFF,0x9926,0x4AC9,{ 0xAA,0xF1,0xE0,0xD0,0x4E,0xF0,0x9B,0xB9 } }; };
template <> struct guid<Windows::Web::Http::IHttpMultipartContentFactory>{ static constexpr GUID value{ 0x7EB42E62,0x0222,0x4F20,{ 0xB3,0x72,0x47,0xD5,0xDB,0x5D,0x33,0xB4 } }; };
template <> struct guid<Windows::Web::Http::IHttpMultipartFormDataContent>{ static constexpr GUID value{ 0x64D337E2,0xE967,0x4624,{ 0xB6,0xD1,0xCF,0x74,0x60,0x4A,0x4A,0x42 } }; };
template <> struct guid<Windows::Web::Http::IHttpMultipartFormDataContentFactory>{ static constexpr GUID value{ 0xA04D7311,0x5017,0x4622,{ 0x93,0xA8,0x49,0xB2,0x4A,0x4F,0xCB,0xFC } }; };
template <> struct guid<Windows::Web::Http::IHttpRequestMessage>{ static constexpr GUID value{ 0xF5762B3C,0x74D4,0x4811,{ 0xB5,0xDC,0x9F,0x8B,0x4E,0x2F,0x9A,0xBF } }; };
template <> struct guid<Windows::Web::Http::IHttpRequestMessageFactory>{ static constexpr GUID value{ 0x5BAC994E,0x3886,0x412E,{ 0xAE,0xC3,0x52,0xEC,0x7F,0x25,0x61,0x6F } }; };
template <> struct guid<Windows::Web::Http::IHttpResponseMessage>{ static constexpr GUID value{ 0xFEE200FB,0x8664,0x44E0,{ 0x95,0xD9,0x42,0x69,0x61,0x99,0xBF,0xFC } }; };
template <> struct guid<Windows::Web::Http::IHttpResponseMessageFactory>{ static constexpr GUID value{ 0x52A8AF99,0xF095,0x43DA,{ 0xB6,0x0F,0x7C,0xFC,0x2B,0xC7,0xEA,0x2F } }; };
template <> struct guid<Windows::Web::Http::IHttpStreamContentFactory>{ static constexpr GUID value{ 0xF3E64D9D,0xF725,0x407E,{ 0x94,0x2F,0x0E,0xDA,0x18,0x98,0x09,0xF4 } }; };
template <> struct guid<Windows::Web::Http::IHttpStringContentFactory>{ static constexpr GUID value{ 0x46649D5B,0x2E93,0x48EB,{ 0x8E,0x61,0x19,0x67,0x78,0x78,0xE5,0x7F } }; };
template <> struct guid<Windows::Web::Http::IHttpTransportInformation>{ static constexpr GUID value{ 0x70127198,0xC6A7,0x4ED0,{ 0x83,0x3A,0x83,0xFD,0x8B,0x8F,0x17,0x8D } }; };
template <> struct default_interface<Windows::Web::Http::HttpBufferContent>{ using type = Windows::Web::Http::IHttpContent; };
template <> struct default_interface<Windows::Web::Http::HttpClient>{ using type = Windows::Web::Http::IHttpClient; };
template <> struct default_interface<Windows::Web::Http::HttpCookie>{ using type = Windows::Web::Http::IHttpCookie; };
template <> struct default_interface<Windows::Web::Http::HttpCookieCollection>{ using type = Windows::Foundation::Collections::IVectorView<Windows::Web::Http::HttpCookie>; };
template <> struct default_interface<Windows::Web::Http::HttpCookieManager>{ using type = Windows::Web::Http::IHttpCookieManager; };
template <> struct default_interface<Windows::Web::Http::HttpFormUrlEncodedContent>{ using type = Windows::Web::Http::IHttpContent; };
template <> struct default_interface<Windows::Web::Http::HttpMethod>{ using type = Windows::Web::Http::IHttpMethod; };
template <> struct default_interface<Windows::Web::Http::HttpMultipartContent>{ using type = Windows::Web::Http::IHttpContent; };
template <> struct default_interface<Windows::Web::Http::HttpMultipartFormDataContent>{ using type = Windows::Web::Http::IHttpContent; };
template <> struct default_interface<Windows::Web::Http::HttpRequestMessage>{ using type = Windows::Web::Http::IHttpRequestMessage; };
template <> struct default_interface<Windows::Web::Http::HttpResponseMessage>{ using type = Windows::Web::Http::IHttpResponseMessage; };
template <> struct default_interface<Windows::Web::Http::HttpStreamContent>{ using type = Windows::Web::Http::IHttpContent; };
template <> struct default_interface<Windows::Web::Http::HttpStringContent>{ using type = Windows::Web::Http::IHttpContent; };
template <> struct default_interface<Windows::Web::Http::HttpTransportInformation>{ using type = Windows::Web::Http::IHttpTransportInformation; };

template <> struct abi<Windows::Web::Http::HttpProgress>{ struct type
{
    abi_t<Windows::Web::Http::HttpProgressStage> Stage;
    uint64_t BytesSent;
    ::IUnknown* TotalBytesToSend;
    uint64_t BytesReceived;
    ::IUnknown* TotalBytesToReceive;
    uint32_t Retries;
};};

template <typename D>
struct consume_Windows_Web_Http_IHttpBufferContentFactory
{
    Windows::Web::Http::HttpBufferContent CreateFromBuffer(Windows::Storage::Streams::IBuffer const& content) const;
    Windows::Web::Http::HttpBufferContent CreateFromBufferWithOffset(Windows::Storage::Streams::IBuffer const& content, uint32_t offset, uint32_t count) const;
};
template <> struct consume<Windows::Web::Http::IHttpBufferContentFactory> { template <typename D> using type = consume_Windows_Web_Http_IHttpBufferContentFactory<D>; };

template <typename D>
struct consume_Windows_Web_Http_IHttpClient
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> DeleteAsync(Windows::Foundation::Uri const& uri) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> GetAsync(Windows::Foundation::Uri const& uri) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> GetAsync(Windows::Foundation::Uri const& uri, Windows::Web::Http::HttpCompletionOption const& completionOption) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer, Windows::Web::Http::HttpProgress> GetBufferAsync(Windows::Foundation::Uri const& uri) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IInputStream, Windows::Web::Http::HttpProgress> GetInputStreamAsync(Windows::Foundation::Uri const& uri) const;
    Windows::Foundation::IAsyncOperationWithProgress<hstring, Windows::Web::Http::HttpProgress> GetStringAsync(Windows::Foundation::Uri const& uri) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> PostAsync(Windows::Foundation::Uri const& uri, Windows::Web::Http::IHttpContent const& content) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> PutAsync(Windows::Foundation::Uri const& uri, Windows::Web::Http::IHttpContent const& content) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> SendRequestAsync(Windows::Web::Http::HttpRequestMessage const& request) const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Web::Http::HttpResponseMessage, Windows::Web::Http::HttpProgress> SendRequestAsync(Windows::Web::Http::HttpRequestMessage const& request, Windows::Web::Http::HttpCompletionOption const& completionOption) const;
    Windows::Web::Http::Headers::HttpRequestHeaderCollection DefaultRequestHeaders() const;
};
template <> struct consume<Windows::Web::Http::IHttpClient> { template <typename D> using type = consume_Windows_Web_Http_IHttpClient<D>; };

template <typename D>
struct consume_Windows_Web_Http_IHttpClientFactory
{
    Windows::Web::Http::HttpClient Create(Windows::Web::Http::Filters::IHttpFilter const& filter) const;
};
template <> struct consume<Windows::Web::Http::IHttpClientFactory> { template <typename D> using type = consume_Windows_Web_Http_IHttpClientFactory<D>; };

template <typename D>
struct consume_Windows_Web_Http_IHttpContent
{
    Windows::Web::Http::Headers::HttpContentHeaderCollection Headers() const;
    Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> BufferAllAsync() const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer, uint64_t> ReadAsBufferAsync() const;
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IInputStream, uint64_t> ReadAsInputStreamAsync() const;
    Windows::Foundation::IAsyncOperationWithProgress<hstring, uint64_t> ReadAsStringAsync() const;
    bool TryComputeLength(uint64_t& length) const;
    Windows::Foundation::IAsyncOperationWithProgress<uint64_t, uint64_t> WriteToStreamAsync(Windows::Storage::Streams::IOutputStream const& outputStream) const;
};
template <> struct consume<Windows::Web::Http::IHttpContent> { template <typename D> using type = consume_Windows_Web_Http_IHttpContent<D>; };

template <typename D>
struct consume_Windows_Web_Http_IHttpCookie
{
    hstring Name() const;
    hstring Domain() const;
    hstring Path() const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> Expires() const;
    void Expires(optional<Windows::Foundation::DateTime> const& value) const;
    bool HttpOnly() const;
    void HttpOnly(bool value) const;
    bool Secure() const;
    void Secure(bool value) const;
    hstring Value() const;
    void Value(param::hstring const& value) const;
};
template <> struct consume<Windows::Web::Http::IHttpCookie> { template <typename D> using type = consume_Windows_Web_Http_IHttpCookie<D>; };

template <typename D>
struct consume_Windows_Web_Http_IHttpCookieFactory
{
    Windows::Web::Http::HttpCookie Create(param::hstring const& name, param::hstring const& domain, param::hstring const& path) const;
};
template <> struct consume<Windows::Web::Http::IHttpCookieFactory> { template <typename D> using type = consume_Windows_Web_Http_IHttpCookieFactory<D>; };

template <typename D>
struct consume_Windows_Web_Http_IHttpCookieManager
{
    bool SetCookie(Windows::Web::Http::HttpCookie const& cookie) const;
    bool SetCookie(Windows::Web::Http::HttpCookie const& cookie, bool thirdParty) const;
    void DeleteCookie(Windows::Web::Http::HttpCookie const& cookie) const;
    Windows::Web::Http::HttpCookieCollection GetCookies(Windows::Foundation::Uri const& uri) const;
};
template <> struct consume<Windows::Web::Http::IHttpCookieManager> { template <typename D> using type = consume_Windows_Web_Http_IHttpCookieManager<D>; };

template <typename D>
struct consume_Windows_Web_Http_IHttpFormUrlEncodedContentFactory
{
    Windows::Web::Http::HttpFormUrlEncodedContent Create(param::iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> const& content) const;
};
template <> struct consume<Windows::Web::Http::IHttpFormUrlEncodedContentFactory> { template <typename D> using type = consume_Windows_Web_Http_IHttpFormUrlEncodedContentFactory<D>; };

template <typename D>
struct consume_Windows_Web_Http_IHttpMethod
{
    hstring Method() const;
};
template <> struct consume<Windows::Web::Http::IHttpMethod> { template <typename D> using type = consume_Windows_Web_Http_IHttpMethod<D>; };

template <typename D>
struct consume_Windows_Web_Http_IHttpMethodFactory
{
    Windows::Web::Http::HttpMethod Create(param::hstring const& method) const;
};
template <> struct consume<Windows::Web::Http::IHttpMethodFactory> { template <typename D> using type = consume_Windows_Web_Http_IHttpMethodFactory<D>; };

template <typename D>
struct consume_Windows_Web_Http_IHttpMethodStatics
{
    Windows::Web::Http::HttpMethod Delete() const;
    Windows::Web::Http::HttpMethod Get() const;
    Windows::Web::Http::HttpMethod Head() const;
    Windows::Web::Http::HttpMethod Options() const;
    Windows::Web::Http::HttpMethod Patch() const;
    Windows::Web::Http::HttpMethod Post() const;
    Windows::Web::Http::HttpMethod Put() const;
};
template <> struct consume<Windows::Web::Http::IHttpMethodStatics> { template <typename D> using type = consume_Windows_Web_Http_IHttpMethodStatics<D>; };

template <typename D>
struct consume_Windows_Web_Http_IHttpMultipartContent
{
    void Add(Windows::Web::Http::IHttpContent const& content) const;
};
template <> struct consume<Windows::Web::Http::IHttpMultipartContent> { template <typename D> using type = consume_Windows_Web_Http_IHttpMultipartContent<D>; };

template <typename D>
struct consume_Windows_Web_Http_IHttpMultipartContentFactory
{
    Windows::Web::Http::HttpMultipartContent CreateWithSubtype(param::hstring const& subtype) const;
    Windows::Web::Http::HttpMultipartContent CreateWithSubtypeAndBoundary(param::hstring const& subtype, param::hstring const& boundary) const;
};
template <> struct consume<Windows::Web::Http::IHttpMultipartContentFactory> { template <typename D> using type = consume_Windows_Web_Http_IHttpMultipartContentFactory<D>; };

template <typename D>
struct consume_Windows_Web_Http_IHttpMultipartFormDataContent
{
    void Add(Windows::Web::Http::IHttpContent const& content) const;
    void Add(Windows::Web::Http::IHttpContent const& content, param::hstring const& name) const;
    void Add(Windows::Web::Http::IHttpContent const& content, param::hstring const& name, param::hstring const& fileName) const;
};
template <> struct consume<Windows::Web::Http::IHttpMultipartFormDataContent> { template <typename D> using type = consume_Windows_Web_Http_IHttpMultipartFormDataContent<D>; };

template <typename D>
struct consume_Windows_Web_Http_IHttpMultipartFormDataContentFactory
{
    Windows::Web::Http::HttpMultipartFormDataContent CreateWithBoundary(param::hstring const& boundary) const;
};
template <> struct consume<Windows::Web::Http::IHttpMultipartFormDataContentFactory> { template <typename D> using type = consume_Windows_Web_Http_IHttpMultipartFormDataContentFactory<D>; };

template <typename D>
struct consume_Windows_Web_Http_IHttpRequestMessage
{
    Windows::Web::Http::IHttpContent Content() const;
    void Content(Windows::Web::Http::IHttpContent const& value) const;
    Windows::Web::Http::Headers::HttpRequestHeaderCollection Headers() const;
    Windows::Web::Http::HttpMethod Method() const;
    void Method(Windows::Web::Http::HttpMethod const& value) const;
    Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::IInspectable> Properties() const;
    Windows::Foundation::Uri RequestUri() const;
    void RequestUri(Windows::Foundation::Uri const& value) const;
    Windows::Web::Http::HttpTransportInformation TransportInformation() const;
};
template <> struct consume<Windows::Web::Http::IHttpRequestMessage> { template <typename D> using type = consume_Windows_Web_Http_IHttpRequestMessage<D>; };

template <typename D>
struct consume_Windows_Web_Http_IHttpRequestMessageFactory
{
    Windows::Web::Http::HttpRequestMessage Create(Windows::Web::Http::HttpMethod const& method, Windows::Foundation::Uri const& uri) const;
};
template <> struct consume<Windows::Web::Http::IHttpRequestMessageFactory> { template <typename D> using type = consume_Windows_Web_Http_IHttpRequestMessageFactory<D>; };

template <typename D>
struct consume_Windows_Web_Http_IHttpResponseMessage
{
    Windows::Web::Http::IHttpContent Content() const;
    void Content(Windows::Web::Http::IHttpContent const& value) const;
    Windows::Web::Http::Headers::HttpResponseHeaderCollection Headers() const;
    bool IsSuccessStatusCode() const;
    hstring ReasonPhrase() const;
    void ReasonPhrase(param::hstring const& value) const;
    Windows::Web::Http::HttpRequestMessage RequestMessage() const;
    void RequestMessage(Windows::Web::Http::HttpRequestMessage const& value) const;
    Windows::Web::Http::HttpResponseMessageSource Source() const;
    void Source(Windows::Web::Http::HttpResponseMessageSource const& value) const;
    Windows::Web::Http::HttpStatusCode StatusCode() const;
    void StatusCode(Windows::Web::Http::HttpStatusCode const& value) const;
    Windows::Web::Http::HttpVersion Version() const;
    void Version(Windows::Web::Http::HttpVersion const& value) const;
    Windows::Web::Http::HttpResponseMessage EnsureSuccessStatusCode() const;
};
template <> struct consume<Windows::Web::Http::IHttpResponseMessage> { template <typename D> using type = consume_Windows_Web_Http_IHttpResponseMessage<D>; };

template <typename D>
struct consume_Windows_Web_Http_IHttpResponseMessageFactory
{
    Windows::Web::Http::HttpResponseMessage Create(Windows::Web::Http::HttpStatusCode const& statusCode) const;
};
template <> struct consume<Windows::Web::Http::IHttpResponseMessageFactory> { template <typename D> using type = consume_Windows_Web_Http_IHttpResponseMessageFactory<D>; };

template <typename D>
struct consume_Windows_Web_Http_IHttpStreamContentFactory
{
    Windows::Web::Http::HttpStreamContent CreateFromInputStream(Windows::Storage::Streams::IInputStream const& content) const;
};
template <> struct consume<Windows::Web::Http::IHttpStreamContentFactory> { template <typename D> using type = consume_Windows_Web_Http_IHttpStreamContentFactory<D>; };

template <typename D>
struct consume_Windows_Web_Http_IHttpStringContentFactory
{
    Windows::Web::Http::HttpStringContent CreateFromString(param::hstring const& content) const;
    Windows::Web::Http::HttpStringContent CreateFromStringWithEncoding(param::hstring const& content, Windows::Storage::Streams::UnicodeEncoding const& encoding) const;
    Windows::Web::Http::HttpStringContent CreateFromStringWithEncodingAndMediaType(param::hstring const& content, Windows::Storage::Streams::UnicodeEncoding const& encoding, param::hstring const& mediaType) const;
};
template <> struct consume<Windows::Web::Http::IHttpStringContentFactory> { template <typename D> using type = consume_Windows_Web_Http_IHttpStringContentFactory<D>; };

template <typename D>
struct consume_Windows_Web_Http_IHttpTransportInformation
{
    Windows::Security::Cryptography::Certificates::Certificate ServerCertificate() const;
    Windows::Networking::Sockets::SocketSslErrorSeverity ServerCertificateErrorSeverity() const;
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::ChainValidationResult> ServerCertificateErrors() const;
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> ServerIntermediateCertificates() const;
};
template <> struct consume<Windows::Web::Http::IHttpTransportInformation> { template <typename D> using type = consume_Windows_Web_Http_IHttpTransportInformation<D>; };

template <> struct abi<Windows::Web::Http::IHttpBufferContentFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateFromBuffer(::IUnknown* content, ::IUnknown** bufferContent) = 0;
    virtual HRESULT __stdcall CreateFromBufferWithOffset(::IUnknown* content, uint32_t offset, uint32_t count, ::IUnknown** bufferContent) = 0;
};};

template <> struct abi<Windows::Web::Http::IHttpClient>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall DeleteAsync(::IUnknown* uri, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetAsync(::IUnknown* uri, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetWithOptionAsync(::IUnknown* uri, abi_t<Windows::Web::Http::HttpCompletionOption> completionOption, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetBufferAsync(::IUnknown* uri, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetInputStreamAsync(::IUnknown* uri, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetStringAsync(::IUnknown* uri, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall PostAsync(::IUnknown* uri, ::IUnknown* content, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall PutAsync(::IUnknown* uri, ::IUnknown* content, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SendRequestAsync(::IUnknown* request, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SendRequestWithOptionAsync(::IUnknown* request, abi_t<Windows::Web::Http::HttpCompletionOption> completionOption, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall get_DefaultRequestHeaders(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Web::Http::IHttpClientFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* filter, ::IUnknown** client) = 0;
};};

template <> struct abi<Windows::Web::Http::IHttpContent>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Headers(::IUnknown** value) = 0;
    virtual HRESULT __stdcall BufferAllAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ReadAsBufferAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ReadAsInputStreamAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ReadAsStringAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall TryComputeLength(uint64_t* length, bool* succeeded) = 0;
    virtual HRESULT __stdcall WriteToStreamAsync(::IUnknown* outputStream, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Web::Http::IHttpCookie>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Domain(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Path(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Expires(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Expires(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_HttpOnly(bool* value) = 0;
    virtual HRESULT __stdcall put_HttpOnly(bool value) = 0;
    virtual HRESULT __stdcall get_Secure(bool* value) = 0;
    virtual HRESULT __stdcall put_Secure(bool value) = 0;
    virtual HRESULT __stdcall get_Value(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Value(HSTRING value) = 0;
};};

template <> struct abi<Windows::Web::Http::IHttpCookieFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING name, HSTRING domain, HSTRING path, ::IUnknown** cookie) = 0;
};};

template <> struct abi<Windows::Web::Http::IHttpCookieManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetCookie(::IUnknown* cookie, bool* replaced) = 0;
    virtual HRESULT __stdcall SetCookieWithThirdParty(::IUnknown* cookie, bool thirdParty, bool* replaced) = 0;
    virtual HRESULT __stdcall DeleteCookie(::IUnknown* cookie) = 0;
    virtual HRESULT __stdcall GetCookies(::IUnknown* uri, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Web::Http::IHttpFormUrlEncodedContentFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* content, ::IUnknown** formUrlEncodedContent) = 0;
};};

template <> struct abi<Windows::Web::Http::IHttpMethod>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Method(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Web::Http::IHttpMethodFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING method, ::IUnknown** httpMethod) = 0;
};};

template <> struct abi<Windows::Web::Http::IHttpMethodStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Delete(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Get(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Head(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Options(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Patch(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Post(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Put(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Web::Http::IHttpMultipartContent>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Add(::IUnknown* content) = 0;
};};

template <> struct abi<Windows::Web::Http::IHttpMultipartContentFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWithSubtype(HSTRING subtype, ::IUnknown** multipartContent) = 0;
    virtual HRESULT __stdcall CreateWithSubtypeAndBoundary(HSTRING subtype, HSTRING boundary, ::IUnknown** multipartContent) = 0;
};};

template <> struct abi<Windows::Web::Http::IHttpMultipartFormDataContent>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Add(::IUnknown* content) = 0;
    virtual HRESULT __stdcall AddWithName(::IUnknown* content, HSTRING name) = 0;
    virtual HRESULT __stdcall AddWithNameAndFileName(::IUnknown* content, HSTRING name, HSTRING fileName) = 0;
};};

template <> struct abi<Windows::Web::Http::IHttpMultipartFormDataContentFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWithBoundary(HSTRING boundary, ::IUnknown** multipartFormDataContent) = 0;
};};

template <> struct abi<Windows::Web::Http::IHttpRequestMessage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Content(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Content(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Headers(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Method(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Method(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RequestUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_RequestUri(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_TransportInformation(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Web::Http::IHttpRequestMessageFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* method, ::IUnknown* uri, ::IUnknown** httpRequestMessage) = 0;
};};

template <> struct abi<Windows::Web::Http::IHttpResponseMessage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Content(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Content(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Headers(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsSuccessStatusCode(bool* value) = 0;
    virtual HRESULT __stdcall get_ReasonPhrase(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_ReasonPhrase(HSTRING value) = 0;
    virtual HRESULT __stdcall get_RequestMessage(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_RequestMessage(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Source(abi_t<Windows::Web::Http::HttpResponseMessageSource>* value) = 0;
    virtual HRESULT __stdcall put_Source(abi_t<Windows::Web::Http::HttpResponseMessageSource> value) = 0;
    virtual HRESULT __stdcall get_StatusCode(abi_t<Windows::Web::Http::HttpStatusCode>* value) = 0;
    virtual HRESULT __stdcall put_StatusCode(abi_t<Windows::Web::Http::HttpStatusCode> value) = 0;
    virtual HRESULT __stdcall get_Version(abi_t<Windows::Web::Http::HttpVersion>* value) = 0;
    virtual HRESULT __stdcall put_Version(abi_t<Windows::Web::Http::HttpVersion> value) = 0;
    virtual HRESULT __stdcall EnsureSuccessStatusCode(::IUnknown** httpResponseMessage) = 0;
};};

template <> struct abi<Windows::Web::Http::IHttpResponseMessageFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(abi_t<Windows::Web::Http::HttpStatusCode> statusCode, ::IUnknown** httpResponseMessage) = 0;
};};

template <> struct abi<Windows::Web::Http::IHttpStreamContentFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateFromInputStream(::IUnknown* content, ::IUnknown** streamContent) = 0;
};};

template <> struct abi<Windows::Web::Http::IHttpStringContentFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateFromString(HSTRING content, ::IUnknown** stringContent) = 0;
    virtual HRESULT __stdcall CreateFromStringWithEncoding(HSTRING content, abi_t<Windows::Storage::Streams::UnicodeEncoding> encoding, ::IUnknown** stringContent) = 0;
    virtual HRESULT __stdcall CreateFromStringWithEncodingAndMediaType(HSTRING content, abi_t<Windows::Storage::Streams::UnicodeEncoding> encoding, HSTRING mediaType, ::IUnknown** stringContent) = 0;
};};

template <> struct abi<Windows::Web::Http::IHttpTransportInformation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ServerCertificate(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ServerCertificateErrorSeverity(abi_t<Windows::Networking::Sockets::SocketSslErrorSeverity>* value) = 0;
    virtual HRESULT __stdcall get_ServerCertificateErrors(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ServerIntermediateCertificates(::IUnknown** value) = 0;
};};

}
