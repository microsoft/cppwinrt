// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.System.Diagnostics.0.h"
#include "winrt/impl/Windows.Web.Http.0.h"
#include "winrt/impl/Windows.Web.Http.Diagnostics.0.h"

WINRT_EXPORT namespace winrt::Windows::Web::Http::Diagnostics {

struct WINRT_EBO IHttpDiagnosticProvider :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpDiagnosticProvider>
{
    IHttpDiagnosticProvider(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpDiagnosticProviderRequestResponseCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpDiagnosticProviderRequestResponseCompletedEventArgs>
{
    IHttpDiagnosticProviderRequestResponseCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpDiagnosticProviderRequestResponseTimestamps :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpDiagnosticProviderRequestResponseTimestamps>
{
    IHttpDiagnosticProviderRequestResponseTimestamps(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpDiagnosticProviderRequestSentEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpDiagnosticProviderRequestSentEventArgs>
{
    IHttpDiagnosticProviderRequestSentEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpDiagnosticProviderResponseReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpDiagnosticProviderResponseReceivedEventArgs>
{
    IHttpDiagnosticProviderResponseReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpDiagnosticProviderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpDiagnosticProviderStatics>
{
    IHttpDiagnosticProviderStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IHttpDiagnosticSourceLocation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IHttpDiagnosticSourceLocation>
{
    IHttpDiagnosticSourceLocation(std::nullptr_t = nullptr) noexcept {}
};

}
