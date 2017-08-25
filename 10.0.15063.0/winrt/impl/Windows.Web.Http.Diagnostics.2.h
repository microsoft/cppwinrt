// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.System.Diagnostics.1.h"
#include "winrt/impl/Windows.Web.Http.1.h"
#include "winrt/impl/Windows.Web.Http.Diagnostics.1.h"

WINRT_EXPORT namespace winrt::Windows::Web::Http::Diagnostics {

struct WINRT_EBO HttpDiagnosticProvider :
    Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider
{
    HttpDiagnosticProvider(std::nullptr_t) noexcept {}
    static Windows::Web::Http::Diagnostics::HttpDiagnosticProvider CreateFromProcessDiagnosticInfo(Windows::System::Diagnostics::ProcessDiagnosticInfo const& processDiagnosticInfo);
};

struct WINRT_EBO HttpDiagnosticProviderRequestResponseCompletedEventArgs :
    Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseCompletedEventArgs
{
    HttpDiagnosticProviderRequestResponseCompletedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO HttpDiagnosticProviderRequestResponseTimestamps :
    Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseTimestamps
{
    HttpDiagnosticProviderRequestResponseTimestamps(std::nullptr_t) noexcept {}
};

struct WINRT_EBO HttpDiagnosticProviderRequestSentEventArgs :
    Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestSentEventArgs
{
    HttpDiagnosticProviderRequestSentEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO HttpDiagnosticProviderResponseReceivedEventArgs :
    Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderResponseReceivedEventArgs
{
    HttpDiagnosticProviderResponseReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO HttpDiagnosticSourceLocation :
    Windows::Web::Http::Diagnostics::IHttpDiagnosticSourceLocation
{
    HttpDiagnosticSourceLocation(std::nullptr_t) noexcept {}
};

}
