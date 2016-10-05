// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Web::Http::Diagnostics {

struct IHttpDiagnosticProvider;
struct IHttpDiagnosticProviderRequestResponseCompletedEventArgs;
struct IHttpDiagnosticProviderRequestResponseTimestamps;
struct IHttpDiagnosticProviderRequestSentEventArgs;
struct IHttpDiagnosticProviderResponseReceivedEventArgs;
struct IHttpDiagnosticProviderStatics;
struct IHttpDiagnosticSourceLocation;
struct HttpDiagnosticProvider;
struct HttpDiagnosticProviderRequestResponseCompletedEventArgs;
struct HttpDiagnosticProviderRequestResponseTimestamps;
struct HttpDiagnosticProviderRequestSentEventArgs;
struct HttpDiagnosticProviderResponseReceivedEventArgs;
struct HttpDiagnosticSourceLocation;

}

namespace Windows::Web::Http::Diagnostics {

struct IHttpDiagnosticProvider;
struct IHttpDiagnosticProviderRequestResponseCompletedEventArgs;
struct IHttpDiagnosticProviderRequestResponseTimestamps;
struct IHttpDiagnosticProviderRequestSentEventArgs;
struct IHttpDiagnosticProviderResponseReceivedEventArgs;
struct IHttpDiagnosticProviderStatics;
struct IHttpDiagnosticSourceLocation;
struct HttpDiagnosticProvider;
struct HttpDiagnosticProviderRequestResponseCompletedEventArgs;
struct HttpDiagnosticProviderRequestResponseTimestamps;
struct HttpDiagnosticProviderRequestSentEventArgs;
struct HttpDiagnosticProviderResponseReceivedEventArgs;
struct HttpDiagnosticSourceLocation;

}

namespace Windows::Web::Http::Diagnostics {

enum class HttpDiagnosticRequestInitiator
{
    ParsedElement = 0,
    Script = 1,
    Image = 2,
    Link = 3,
    Style = 4,
    XmlHttpRequest = 5,
    Media = 6,
    HtmlDownload = 7,
    Prefetch = 8,
    Other = 9,
    CrossOriginPreFlight = 10,
    Fetch = 11,
    Beacon = 12,
};

}

}
