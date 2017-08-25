// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.System.Diagnostics.2.h"
#include "winrt/impl/Windows.Web.Http.2.h"
#include "winrt/impl/Windows.Web.Http.Diagnostics.2.h"
#include "winrt/Windows.Web.Http.h"

namespace winrt::impl {

template <typename D> void consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProvider<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider)->Start());
}

template <typename D> void consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProvider<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider)->Stop());
}

template <typename D> event_token consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProvider<D>::RequestSent(Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestSentEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider)->add_RequestSent(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider> consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProvider<D>::RequestSent(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestSentEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider>(this, &abi_t<Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider>::remove_RequestSent, RequestSent(handler));
}

template <typename D> void consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProvider<D>::RequestSent(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider)->remove_RequestSent(get_abi(token)));
}

template <typename D> event_token consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProvider<D>::ResponseReceived(Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderResponseReceivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider)->add_ResponseReceived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider> consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProvider<D>::ResponseReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderResponseReceivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider>(this, &abi_t<Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider>::remove_ResponseReceived, ResponseReceived(handler));
}

template <typename D> void consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProvider<D>::ResponseReceived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider)->remove_ResponseReceived(get_abi(token)));
}

template <typename D> event_token consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProvider<D>::RequestResponseCompleted(Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseCompletedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider)->add_RequestResponseCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider> consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProvider<D>::RequestResponseCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseCompletedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider>(this, &abi_t<Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider>::remove_RequestResponseCompleted, RequestResponseCompleted(handler));
}

template <typename D> void consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProvider<D>::RequestResponseCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider)->remove_RequestResponseCompleted(get_abi(token)));
}

template <typename D> GUID consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestResponseCompletedEventArgs<D>::ActivityId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseCompletedEventArgs)->get_ActivityId(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseTimestamps consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestResponseCompletedEventArgs<D>::Timestamps() const
{
    Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseTimestamps value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseCompletedEventArgs)->get_Timestamps(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestResponseCompletedEventArgs<D>::RequestedUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseCompletedEventArgs)->get_RequestedUri(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestResponseCompletedEventArgs<D>::ProcessId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseCompletedEventArgs)->get_ProcessId(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestResponseCompletedEventArgs<D>::ThreadId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseCompletedEventArgs)->get_ThreadId(&value));
    return value;
}

template <typename D> Windows::Web::Http::Diagnostics::HttpDiagnosticRequestInitiator consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestResponseCompletedEventArgs<D>::Initiator() const
{
    Windows::Web::Http::Diagnostics::HttpDiagnosticRequestInitiator value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseCompletedEventArgs)->get_Initiator(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation> consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestResponseCompletedEventArgs<D>::SourceLocations() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseCompletedEventArgs)->get_SourceLocations(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestResponseTimestamps<D>::CacheCheckedTimestamp() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseTimestamps)->get_CacheCheckedTimestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestResponseTimestamps<D>::ConnectionInitiatedTimestamp() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseTimestamps)->get_ConnectionInitiatedTimestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestResponseTimestamps<D>::NameResolvedTimestamp() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseTimestamps)->get_NameResolvedTimestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestResponseTimestamps<D>::SslNegotiatedTimestamp() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseTimestamps)->get_SslNegotiatedTimestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestResponseTimestamps<D>::ConnectionCompletedTimestamp() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseTimestamps)->get_ConnectionCompletedTimestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestResponseTimestamps<D>::RequestSentTimestamp() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseTimestamps)->get_RequestSentTimestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestResponseTimestamps<D>::RequestCompletedTimestamp() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseTimestamps)->get_RequestCompletedTimestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestResponseTimestamps<D>::ResponseReceivedTimestamp() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseTimestamps)->get_ResponseReceivedTimestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestResponseTimestamps<D>::ResponseCompletedTimestamp() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseTimestamps)->get_ResponseCompletedTimestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestSentEventArgs<D>::Timestamp() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestSentEventArgs)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestSentEventArgs<D>::ActivityId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestSentEventArgs)->get_ActivityId(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpRequestMessage consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestSentEventArgs<D>::Message() const
{
    Windows::Web::Http::HttpRequestMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestSentEventArgs)->get_Message(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestSentEventArgs<D>::ProcessId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestSentEventArgs)->get_ProcessId(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestSentEventArgs<D>::ThreadId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestSentEventArgs)->get_ThreadId(&value));
    return value;
}

template <typename D> Windows::Web::Http::Diagnostics::HttpDiagnosticRequestInitiator consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestSentEventArgs<D>::Initiator() const
{
    Windows::Web::Http::Diagnostics::HttpDiagnosticRequestInitiator value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestSentEventArgs)->get_Initiator(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation> consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderRequestSentEventArgs<D>::SourceLocations() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestSentEventArgs)->get_SourceLocations(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderResponseReceivedEventArgs<D>::Timestamp() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderResponseReceivedEventArgs)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> GUID consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderResponseReceivedEventArgs<D>::ActivityId() const
{
    GUID value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderResponseReceivedEventArgs)->get_ActivityId(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpResponseMessage consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderResponseReceivedEventArgs<D>::Message() const
{
    Windows::Web::Http::HttpResponseMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderResponseReceivedEventArgs)->get_Message(put_abi(value)));
    return value;
}

template <typename D> Windows::Web::Http::Diagnostics::HttpDiagnosticProvider consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticProviderStatics<D>::CreateFromProcessDiagnosticInfo(Windows::System::Diagnostics::ProcessDiagnosticInfo const& processDiagnosticInfo) const
{
    Windows::Web::Http::Diagnostics::HttpDiagnosticProvider value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderStatics)->CreateFromProcessDiagnosticInfo(get_abi(processDiagnosticInfo), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticSourceLocation<D>::SourceUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticSourceLocation)->get_SourceUri(put_abi(value)));
    return value;
}

template <typename D> uint64_t consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticSourceLocation<D>::LineNumber() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticSourceLocation)->get_LineNumber(&value));
    return value;
}

template <typename D> uint64_t consume_Windows_Web_Http_Diagnostics_IHttpDiagnosticSourceLocation<D>::ColumnNumber() const
{
    uint64_t value{};
    check_hresult(WINRT_SHIM(Windows::Web::Http::Diagnostics::IHttpDiagnosticSourceLocation)->get_ColumnNumber(&value));
    return value;
}

template <typename D>
struct produce<D, Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider> : produce_base<D, Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider>
{
    HRESULT __stdcall Start() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Stop() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RequestSent(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RequestSent(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestSentEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RequestSent(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestSent(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ResponseReceived(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ResponseReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderResponseReceivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ResponseReceived(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ResponseReceived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RequestResponseCompleted(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RequestResponseCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseCompletedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RequestResponseCompleted(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestResponseCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseCompletedEventArgs> : produce_base<D, Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseCompletedEventArgs>
{
    HRESULT __stdcall get_ActivityId(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ActivityId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Timestamps(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Timestamps());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequestedUri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestedUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProcessId(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProcessId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ThreadId(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ThreadId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Initiator(abi_t<Windows::Web::Http::Diagnostics::HttpDiagnosticRequestInitiator>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Initiator());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourceLocations(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourceLocations());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseTimestamps> : produce_base<D, Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseTimestamps>
{
    HRESULT __stdcall get_CacheCheckedTimestamp(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CacheCheckedTimestamp());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConnectionInitiatedTimestamp(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ConnectionInitiatedTimestamp());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NameResolvedTimestamp(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NameResolvedTimestamp());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SslNegotiatedTimestamp(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SslNegotiatedTimestamp());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConnectionCompletedTimestamp(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ConnectionCompletedTimestamp());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequestSentTimestamp(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestSentTimestamp());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequestCompletedTimestamp(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestCompletedTimestamp());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResponseReceivedTimestamp(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResponseReceivedTimestamp());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResponseCompletedTimestamp(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ResponseCompletedTimestamp());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestSentEventArgs> : produce_base<D, Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestSentEventArgs>
{
    HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ActivityId(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ActivityId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Message(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Message());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProcessId(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProcessId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ThreadId(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ThreadId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Initiator(abi_t<Windows::Web::Http::Diagnostics::HttpDiagnosticRequestInitiator>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Initiator());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourceLocations(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourceLocations());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderResponseReceivedEventArgs> : produce_base<D, Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderResponseReceivedEventArgs>
{
    HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ActivityId(abi_t<GUID>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ActivityId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Message(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Message());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderStatics> : produce_base<D, Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderStatics>
{
    HRESULT __stdcall CreateFromProcessDiagnosticInfo(::IUnknown* processDiagnosticInfo, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateFromProcessDiagnosticInfo(*reinterpret_cast<Windows::System::Diagnostics::ProcessDiagnosticInfo const*>(&processDiagnosticInfo)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Web::Http::Diagnostics::IHttpDiagnosticSourceLocation> : produce_base<D, Windows::Web::Http::Diagnostics::IHttpDiagnosticSourceLocation>
{
    HRESULT __stdcall get_SourceUri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourceUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LineNumber(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LineNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ColumnNumber(uint64_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ColumnNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Web::Http::Diagnostics {

inline Windows::Web::Http::Diagnostics::HttpDiagnosticProvider HttpDiagnosticProvider::CreateFromProcessDiagnosticInfo(Windows::System::Diagnostics::ProcessDiagnosticInfo const& processDiagnosticInfo)
{
    return get_activation_factory<HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderStatics>().CreateFromProcessDiagnosticInfo(processDiagnosticInfo);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider> {};

template<> struct hash<winrt::Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseCompletedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseCompletedEventArgs> {};

template<> struct hash<winrt::Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseTimestamps> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseTimestamps> {};

template<> struct hash<winrt::Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestSentEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestSentEventArgs> {};

template<> struct hash<winrt::Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderResponseReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderResponseReceivedEventArgs> {};

template<> struct hash<winrt::Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderStatics> {};

template<> struct hash<winrt::Windows::Web::Http::Diagnostics::IHttpDiagnosticSourceLocation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Diagnostics::IHttpDiagnosticSourceLocation> {};

template<> struct hash<winrt::Windows::Web::Http::Diagnostics::HttpDiagnosticProvider> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Diagnostics::HttpDiagnosticProvider> {};

template<> struct hash<winrt::Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseCompletedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseCompletedEventArgs> {};

template<> struct hash<winrt::Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseTimestamps> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseTimestamps> {};

template<> struct hash<winrt::Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestSentEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestSentEventArgs> {};

template<> struct hash<winrt::Windows::Web::Http::Diagnostics::HttpDiagnosticProviderResponseReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Diagnostics::HttpDiagnosticProviderResponseReceivedEventArgs> {};

template<> struct hash<winrt::Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation> {};

}

WINRT_WARNING_POP
