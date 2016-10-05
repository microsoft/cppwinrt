// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Web.Http.Diagnostics.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_5541d8a7_497c_5aa4_86fc_7713adbf2a2c
#define WINRT_GENERIC_5541d8a7_497c_5aa4_86fc_7713adbf2a2c
template <> struct __declspec(uuid("5541d8a7-497c-5aa4-86fc-7713adbf2a2c")) __declspec(novtable) IReference<Windows::Foundation::DateTime> : impl_IReference<Windows::Foundation::DateTime> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_e9af27d3_80e8_5aff_a7e5_1b221787f096
#define WINRT_GENERIC_e9af27d3_80e8_5aff_a7e5_1b221787f096
template <> struct __declspec(uuid("e9af27d3-80e8-5aff-a7e5-1b221787f096")) __declspec(novtable) IVectorView<Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation> : impl_IVectorView<Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_f8e10321_47bd_526a_a9b2_3bf12f725f8b
#define WINRT_GENERIC_f8e10321_47bd_526a_a9b2_3bf12f725f8b
template <> struct __declspec(uuid("f8e10321-47bd-526a-a9b2-3bf12f725f8b")) __declspec(novtable) TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestSentEventArgs> : impl_TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestSentEventArgs> {};
#endif

#ifndef WINRT_GENERIC_2eef1846_8176_52af_8d2b_e0c932512e9f
#define WINRT_GENERIC_2eef1846_8176_52af_8d2b_e0c932512e9f
template <> struct __declspec(uuid("2eef1846-8176-52af-8d2b-e0c932512e9f")) __declspec(novtable) TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderResponseReceivedEventArgs> : impl_TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderResponseReceivedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_2281ad23_9c8d_5d82_9b20_bcf157b04fd9
#define WINRT_GENERIC_2281ad23_9c8d_5d82_9b20_bcf157b04fd9
template <> struct __declspec(uuid("2281ad23-9c8d-5d82-9b20-bcf157b04fd9")) __declspec(novtable) TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseCompletedEventArgs> : impl_TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseCompletedEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_807b6ed4_5f42_5199_b231_60cce2c76940
#define WINRT_GENERIC_807b6ed4_5f42_5199_b231_60cce2c76940
template <> struct __declspec(uuid("807b6ed4-5f42-5199-b231-60cce2c76940")) __declspec(novtable) IIterator<Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation> : impl_IIterator<Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation> {};
#endif

#ifndef WINRT_GENERIC_4286ca1a_a4c5_5ae8_9da9_5bfa24768e22
#define WINRT_GENERIC_4286ca1a_a4c5_5ae8_9da9_5bfa24768e22
template <> struct __declspec(uuid("4286ca1a-a4c5-5ae8-9da9-5bfa24768e22")) __declspec(novtable) IIterable<Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation> : impl_IIterable<Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation> {};
#endif


}

namespace Windows::Web::Http::Diagnostics {

template <typename D>
struct WINRT_EBO impl_IHttpDiagnosticProvider
{
    void Start() const;
    void Stop() const;
    event_token RequestSent(const Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestSentEventArgs> & handler) const;
    using RequestSent_revoker = event_revoker<IHttpDiagnosticProvider>;
    RequestSent_revoker RequestSent(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestSentEventArgs> & handler) const;
    void RequestSent(event_token token) const;
    event_token ResponseReceived(const Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderResponseReceivedEventArgs> & handler) const;
    using ResponseReceived_revoker = event_revoker<IHttpDiagnosticProvider>;
    ResponseReceived_revoker ResponseReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderResponseReceivedEventArgs> & handler) const;
    void ResponseReceived(event_token token) const;
    event_token RequestResponseCompleted(const Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseCompletedEventArgs> & handler) const;
    using RequestResponseCompleted_revoker = event_revoker<IHttpDiagnosticProvider>;
    RequestResponseCompleted_revoker RequestResponseCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseCompletedEventArgs> & handler) const;
    void RequestResponseCompleted(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IHttpDiagnosticProviderRequestResponseCompletedEventArgs
{
    GUID ActivityId() const;
    Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseTimestamps Timestamps() const;
    Windows::Foundation::Uri RequestedUri() const;
    uint32_t ProcessId() const;
    uint32_t ThreadId() const;
    Windows::Web::Http::Diagnostics::HttpDiagnosticRequestInitiator Initiator() const;
    Windows::Foundation::Collections::IVectorView<Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation> SourceLocations() const;
};

template <typename D>
struct WINRT_EBO impl_IHttpDiagnosticProviderRequestResponseTimestamps
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> CacheCheckedTimestamp() const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> ConnectionInitiatedTimestamp() const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> NameResolvedTimestamp() const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> SslNegotiatedTimestamp() const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> ConnectionCompletedTimestamp() const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> RequestSentTimestamp() const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> RequestCompletedTimestamp() const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> ResponseReceivedTimestamp() const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> ResponseCompletedTimestamp() const;
};

template <typename D>
struct WINRT_EBO impl_IHttpDiagnosticProviderRequestSentEventArgs
{
    Windows::Foundation::DateTime Timestamp() const;
    GUID ActivityId() const;
    Windows::Web::Http::HttpRequestMessage Message() const;
    uint32_t ProcessId() const;
    uint32_t ThreadId() const;
    Windows::Web::Http::Diagnostics::HttpDiagnosticRequestInitiator Initiator() const;
    Windows::Foundation::Collections::IVectorView<Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation> SourceLocations() const;
};

template <typename D>
struct WINRT_EBO impl_IHttpDiagnosticProviderResponseReceivedEventArgs
{
    Windows::Foundation::DateTime Timestamp() const;
    GUID ActivityId() const;
    Windows::Web::Http::HttpResponseMessage Message() const;
};

template <typename D>
struct WINRT_EBO impl_IHttpDiagnosticProviderStatics
{
    Windows::Web::Http::Diagnostics::HttpDiagnosticProvider CreateFromProcessDiagnosticInfo(const Windows::System::Diagnostics::ProcessDiagnosticInfo & processDiagnosticInfo) const;
};

template <typename D>
struct WINRT_EBO impl_IHttpDiagnosticSourceLocation
{
    Windows::Foundation::Uri SourceUri() const;
    uint64_t LineNumber() const;
    uint64_t ColumnNumber() const;
};

struct IHttpDiagnosticProvider :
    Windows::IInspectable,
    impl::consume<IHttpDiagnosticProvider>
{
    IHttpDiagnosticProvider(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHttpDiagnosticProvider>(m_ptr); }
};

struct IHttpDiagnosticProviderRequestResponseCompletedEventArgs :
    Windows::IInspectable,
    impl::consume<IHttpDiagnosticProviderRequestResponseCompletedEventArgs>
{
    IHttpDiagnosticProviderRequestResponseCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHttpDiagnosticProviderRequestResponseCompletedEventArgs>(m_ptr); }
};

struct IHttpDiagnosticProviderRequestResponseTimestamps :
    Windows::IInspectable,
    impl::consume<IHttpDiagnosticProviderRequestResponseTimestamps>
{
    IHttpDiagnosticProviderRequestResponseTimestamps(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHttpDiagnosticProviderRequestResponseTimestamps>(m_ptr); }
};

struct IHttpDiagnosticProviderRequestSentEventArgs :
    Windows::IInspectable,
    impl::consume<IHttpDiagnosticProviderRequestSentEventArgs>
{
    IHttpDiagnosticProviderRequestSentEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHttpDiagnosticProviderRequestSentEventArgs>(m_ptr); }
};

struct IHttpDiagnosticProviderResponseReceivedEventArgs :
    Windows::IInspectable,
    impl::consume<IHttpDiagnosticProviderResponseReceivedEventArgs>
{
    IHttpDiagnosticProviderResponseReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHttpDiagnosticProviderResponseReceivedEventArgs>(m_ptr); }
};

struct IHttpDiagnosticProviderStatics :
    Windows::IInspectable,
    impl::consume<IHttpDiagnosticProviderStatics>
{
    IHttpDiagnosticProviderStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHttpDiagnosticProviderStatics>(m_ptr); }
};

struct IHttpDiagnosticSourceLocation :
    Windows::IInspectable,
    impl::consume<IHttpDiagnosticSourceLocation>
{
    IHttpDiagnosticSourceLocation(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHttpDiagnosticSourceLocation>(m_ptr); }
};

}

}
