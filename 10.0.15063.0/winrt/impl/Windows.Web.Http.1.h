// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Networking.Sockets.0.h"
#include "winrt/impl/Windows.Security.Cryptography.Certificates.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Web.Http.Filters.0.h"
#include "winrt/impl/Windows.Web.Http.Headers.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Web.Http.0.h"

WINRT_EXPORT namespace winrt::Windows::Web::Http {

struct WINRT_EBO IHttpBufferContentFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpBufferContentFactory>
{
    IHttpBufferContentFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpClient :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpClient>,
    impl::require<IHttpClient, Windows::Foundation::IClosable>
{
    IHttpClient(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpClientFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpClientFactory>
{
    IHttpClientFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpContent :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpContent>,
    impl::require<IHttpContent, Windows::Foundation::IClosable>
{
    IHttpContent(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpCookie :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpCookie>
{
    IHttpCookie(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpCookieFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpCookieFactory>
{
    IHttpCookieFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpCookieManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpCookieManager>
{
    IHttpCookieManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpFormUrlEncodedContentFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpFormUrlEncodedContentFactory>
{
    IHttpFormUrlEncodedContentFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpMethod :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpMethod>
{
    IHttpMethod(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpMethodFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpMethodFactory>
{
    IHttpMethodFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpMethodStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpMethodStatics>
{
    IHttpMethodStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpMultipartContent :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpMultipartContent>,
    impl::require<IHttpMultipartContent, Windows::Foundation::Collections::IIterable<Windows::Web::Http::IHttpContent>>
{
    IHttpMultipartContent(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpMultipartContentFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpMultipartContentFactory>
{
    IHttpMultipartContentFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpMultipartFormDataContent :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpMultipartFormDataContent>,
    impl::require<IHttpMultipartFormDataContent, Windows::Foundation::Collections::IIterable<Windows::Web::Http::IHttpContent>>
{
    IHttpMultipartFormDataContent(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpMultipartFormDataContentFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpMultipartFormDataContentFactory>
{
    IHttpMultipartFormDataContentFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpRequestMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpRequestMessage>,
    impl::require<IHttpRequestMessage, Windows::Foundation::IClosable>
{
    IHttpRequestMessage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpRequestMessageFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpRequestMessageFactory>
{
    IHttpRequestMessageFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpResponseMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpResponseMessage>,
    impl::require<IHttpResponseMessage, Windows::Foundation::IClosable>
{
    IHttpResponseMessage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpResponseMessageFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpResponseMessageFactory>
{
    IHttpResponseMessageFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpStreamContentFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpStreamContentFactory>
{
    IHttpStreamContentFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpStringContentFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpStringContentFactory>
{
    IHttpStringContentFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpTransportInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpTransportInformation>
{
    IHttpTransportInformation(std::nullptr_t = nullptr) noexcept {}
};

}
