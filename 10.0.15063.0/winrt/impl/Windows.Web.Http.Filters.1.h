// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Networking.Sockets.0.h"
#include "winrt/impl/Windows.Security.Credentials.0.h"
#include "winrt/impl/Windows.Security.Cryptography.Certificates.0.h"
#include "winrt/impl/Windows.Web.Http.0.h"
#include "winrt/impl/Windows.Web.Http.Filters.0.h"

WINRT_EXPORT namespace winrt::Windows::Web::Http::Filters {

struct WINRT_EBO IHttpBaseProtocolFilter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpBaseProtocolFilter>,
    impl::require<IHttpBaseProtocolFilter, Windows::Foundation::IClosable, Windows::Web::Http::Filters::IHttpFilter>
{
    IHttpBaseProtocolFilter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpBaseProtocolFilter2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpBaseProtocolFilter2>,
    impl::require<IHttpBaseProtocolFilter2, Windows::Foundation::IClosable, Windows::Web::Http::Filters::IHttpFilter>
{
    IHttpBaseProtocolFilter2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpBaseProtocolFilter3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpBaseProtocolFilter3>,
    impl::require<IHttpBaseProtocolFilter3, Windows::Foundation::IClosable, Windows::Web::Http::Filters::IHttpFilter>
{
    IHttpBaseProtocolFilter3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpBaseProtocolFilter4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpBaseProtocolFilter4>,
    impl::require<IHttpBaseProtocolFilter4, Windows::Foundation::IClosable, Windows::Web::Http::Filters::IHttpFilter>
{
    IHttpBaseProtocolFilter4(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpCacheControl :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpCacheControl>
{
    IHttpCacheControl(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpFilter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpFilter>,
    impl::require<IHttpFilter, Windows::Foundation::IClosable>
{
    IHttpFilter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpServerCustomValidationRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpServerCustomValidationRequestedEventArgs>
{
    IHttpServerCustomValidationRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}
