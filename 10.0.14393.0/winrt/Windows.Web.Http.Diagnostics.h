// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Web.Http.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.System.Diagnostics.3.h"
#include "internal/Windows.Web.Http.Diagnostics.3.h"
#include "Windows.Web.Http.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider> : produce_base<D, Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider>
{
    HRESULT __stdcall abi_Start() noexcept override
    {
        try
        {
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Stop() noexcept override
    {
        try
        {
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RequestSent(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestSentEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().RequestSent(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestSentEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RequestSent(event_token token) noexcept override
    {
        try
        {
            this->shim().RequestSent(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ResponseReceived(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderResponseReceivedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ResponseReceived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderResponseReceivedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ResponseReceived(event_token token) noexcept override
    {
        try
        {
            this->shim().ResponseReceived(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RequestResponseCompleted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseCompletedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().RequestResponseCompleted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseCompletedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RequestResponseCompleted(event_token token) noexcept override
    {
        try
        {
            this->shim().RequestResponseCompleted(token);
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
    HRESULT __stdcall get_ActivityId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ActivityId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Timestamps(abi_arg_out<Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseTimestamps> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Timestamps());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequestedUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RequestedUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProcessId(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProcessId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ThreadId(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ThreadId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Initiator(Windows::Web::Http::Diagnostics::HttpDiagnosticRequestInitiator * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Initiator());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourceLocations(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SourceLocations());
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
    HRESULT __stdcall get_CacheCheckedTimestamp(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CacheCheckedTimestamp());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConnectionInitiatedTimestamp(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ConnectionInitiatedTimestamp());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NameResolvedTimestamp(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NameResolvedTimestamp());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SslNegotiatedTimestamp(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SslNegotiatedTimestamp());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConnectionCompletedTimestamp(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ConnectionCompletedTimestamp());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequestSentTimestamp(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RequestSentTimestamp());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RequestCompletedTimestamp(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RequestCompletedTimestamp());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResponseReceivedTimestamp(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResponseReceivedTimestamp());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResponseCompletedTimestamp(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResponseCompletedTimestamp());
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
    HRESULT __stdcall get_Timestamp(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ActivityId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ActivityId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Message(abi_arg_out<Windows::Web::Http::IHttpRequestMessage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Message());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProcessId(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProcessId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ThreadId(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ThreadId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Initiator(Windows::Web::Http::Diagnostics::HttpDiagnosticRequestInitiator * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Initiator());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourceLocations(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SourceLocations());
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
    HRESULT __stdcall get_Timestamp(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ActivityId(GUID * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ActivityId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Message(abi_arg_out<Windows::Web::Http::IHttpResponseMessage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Message());
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
    HRESULT __stdcall abi_CreateFromProcessDiagnosticInfo(abi_arg_in<Windows::System::Diagnostics::IProcessDiagnosticInfo> processDiagnosticInfo, abi_arg_out<Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateFromProcessDiagnosticInfo(*reinterpret_cast<const Windows::System::Diagnostics::ProcessDiagnosticInfo *>(&processDiagnosticInfo)));
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
    HRESULT __stdcall get_SourceUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SourceUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LineNumber(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LineNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ColumnNumber(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ColumnNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Web::Http::Diagnostics {

template <typename D> Windows::Foundation::Uri impl_IHttpDiagnosticSourceLocation<D>::SourceUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IHttpDiagnosticSourceLocation &>(static_cast<const D &>(*this))->get_SourceUri(put(value)));
    return value;
}

template <typename D> uint64_t impl_IHttpDiagnosticSourceLocation<D>::LineNumber() const
{
    uint64_t value {};
    check_hresult(static_cast<const IHttpDiagnosticSourceLocation &>(static_cast<const D &>(*this))->get_LineNumber(&value));
    return value;
}

template <typename D> uint64_t impl_IHttpDiagnosticSourceLocation<D>::ColumnNumber() const
{
    uint64_t value {};
    check_hresult(static_cast<const IHttpDiagnosticSourceLocation &>(static_cast<const D &>(*this))->get_ColumnNumber(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IHttpDiagnosticProviderRequestSentEventArgs<D>::Timestamp() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IHttpDiagnosticProviderRequestSentEventArgs &>(static_cast<const D &>(*this))->get_Timestamp(put(value)));
    return value;
}

template <typename D> GUID impl_IHttpDiagnosticProviderRequestSentEventArgs<D>::ActivityId() const
{
    GUID value {};
    check_hresult(static_cast<const IHttpDiagnosticProviderRequestSentEventArgs &>(static_cast<const D &>(*this))->get_ActivityId(&value));
    return value;
}

template <typename D> Windows::Web::Http::HttpRequestMessage impl_IHttpDiagnosticProviderRequestSentEventArgs<D>::Message() const
{
    Windows::Web::Http::HttpRequestMessage value { nullptr };
    check_hresult(static_cast<const IHttpDiagnosticProviderRequestSentEventArgs &>(static_cast<const D &>(*this))->get_Message(put(value)));
    return value;
}

template <typename D> uint32_t impl_IHttpDiagnosticProviderRequestSentEventArgs<D>::ProcessId() const
{
    uint32_t value {};
    check_hresult(static_cast<const IHttpDiagnosticProviderRequestSentEventArgs &>(static_cast<const D &>(*this))->get_ProcessId(&value));
    return value;
}

template <typename D> uint32_t impl_IHttpDiagnosticProviderRequestSentEventArgs<D>::ThreadId() const
{
    uint32_t value {};
    check_hresult(static_cast<const IHttpDiagnosticProviderRequestSentEventArgs &>(static_cast<const D &>(*this))->get_ThreadId(&value));
    return value;
}

template <typename D> Windows::Web::Http::Diagnostics::HttpDiagnosticRequestInitiator impl_IHttpDiagnosticProviderRequestSentEventArgs<D>::Initiator() const
{
    Windows::Web::Http::Diagnostics::HttpDiagnosticRequestInitiator value {};
    check_hresult(static_cast<const IHttpDiagnosticProviderRequestSentEventArgs &>(static_cast<const D &>(*this))->get_Initiator(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation> impl_IHttpDiagnosticProviderRequestSentEventArgs<D>::SourceLocations() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation> value;
    check_hresult(static_cast<const IHttpDiagnosticProviderRequestSentEventArgs &>(static_cast<const D &>(*this))->get_SourceLocations(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IHttpDiagnosticProviderResponseReceivedEventArgs<D>::Timestamp() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IHttpDiagnosticProviderResponseReceivedEventArgs &>(static_cast<const D &>(*this))->get_Timestamp(put(value)));
    return value;
}

template <typename D> GUID impl_IHttpDiagnosticProviderResponseReceivedEventArgs<D>::ActivityId() const
{
    GUID value {};
    check_hresult(static_cast<const IHttpDiagnosticProviderResponseReceivedEventArgs &>(static_cast<const D &>(*this))->get_ActivityId(&value));
    return value;
}

template <typename D> Windows::Web::Http::HttpResponseMessage impl_IHttpDiagnosticProviderResponseReceivedEventArgs<D>::Message() const
{
    Windows::Web::Http::HttpResponseMessage value { nullptr };
    check_hresult(static_cast<const IHttpDiagnosticProviderResponseReceivedEventArgs &>(static_cast<const D &>(*this))->get_Message(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IHttpDiagnosticProviderRequestResponseTimestamps<D>::CacheCheckedTimestamp() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const IHttpDiagnosticProviderRequestResponseTimestamps &>(static_cast<const D &>(*this))->get_CacheCheckedTimestamp(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IHttpDiagnosticProviderRequestResponseTimestamps<D>::ConnectionInitiatedTimestamp() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const IHttpDiagnosticProviderRequestResponseTimestamps &>(static_cast<const D &>(*this))->get_ConnectionInitiatedTimestamp(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IHttpDiagnosticProviderRequestResponseTimestamps<D>::NameResolvedTimestamp() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const IHttpDiagnosticProviderRequestResponseTimestamps &>(static_cast<const D &>(*this))->get_NameResolvedTimestamp(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IHttpDiagnosticProviderRequestResponseTimestamps<D>::SslNegotiatedTimestamp() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const IHttpDiagnosticProviderRequestResponseTimestamps &>(static_cast<const D &>(*this))->get_SslNegotiatedTimestamp(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IHttpDiagnosticProviderRequestResponseTimestamps<D>::ConnectionCompletedTimestamp() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const IHttpDiagnosticProviderRequestResponseTimestamps &>(static_cast<const D &>(*this))->get_ConnectionCompletedTimestamp(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IHttpDiagnosticProviderRequestResponseTimestamps<D>::RequestSentTimestamp() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const IHttpDiagnosticProviderRequestResponseTimestamps &>(static_cast<const D &>(*this))->get_RequestSentTimestamp(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IHttpDiagnosticProviderRequestResponseTimestamps<D>::RequestCompletedTimestamp() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const IHttpDiagnosticProviderRequestResponseTimestamps &>(static_cast<const D &>(*this))->get_RequestCompletedTimestamp(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IHttpDiagnosticProviderRequestResponseTimestamps<D>::ResponseReceivedTimestamp() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const IHttpDiagnosticProviderRequestResponseTimestamps &>(static_cast<const D &>(*this))->get_ResponseReceivedTimestamp(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IHttpDiagnosticProviderRequestResponseTimestamps<D>::ResponseCompletedTimestamp() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(static_cast<const IHttpDiagnosticProviderRequestResponseTimestamps &>(static_cast<const D &>(*this))->get_ResponseCompletedTimestamp(put(value)));
    return value;
}

template <typename D> GUID impl_IHttpDiagnosticProviderRequestResponseCompletedEventArgs<D>::ActivityId() const
{
    GUID value {};
    check_hresult(static_cast<const IHttpDiagnosticProviderRequestResponseCompletedEventArgs &>(static_cast<const D &>(*this))->get_ActivityId(&value));
    return value;
}

template <typename D> Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseTimestamps impl_IHttpDiagnosticProviderRequestResponseCompletedEventArgs<D>::Timestamps() const
{
    Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseTimestamps value { nullptr };
    check_hresult(static_cast<const IHttpDiagnosticProviderRequestResponseCompletedEventArgs &>(static_cast<const D &>(*this))->get_Timestamps(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_IHttpDiagnosticProviderRequestResponseCompletedEventArgs<D>::RequestedUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IHttpDiagnosticProviderRequestResponseCompletedEventArgs &>(static_cast<const D &>(*this))->get_RequestedUri(put(value)));
    return value;
}

template <typename D> uint32_t impl_IHttpDiagnosticProviderRequestResponseCompletedEventArgs<D>::ProcessId() const
{
    uint32_t value {};
    check_hresult(static_cast<const IHttpDiagnosticProviderRequestResponseCompletedEventArgs &>(static_cast<const D &>(*this))->get_ProcessId(&value));
    return value;
}

template <typename D> uint32_t impl_IHttpDiagnosticProviderRequestResponseCompletedEventArgs<D>::ThreadId() const
{
    uint32_t value {};
    check_hresult(static_cast<const IHttpDiagnosticProviderRequestResponseCompletedEventArgs &>(static_cast<const D &>(*this))->get_ThreadId(&value));
    return value;
}

template <typename D> Windows::Web::Http::Diagnostics::HttpDiagnosticRequestInitiator impl_IHttpDiagnosticProviderRequestResponseCompletedEventArgs<D>::Initiator() const
{
    Windows::Web::Http::Diagnostics::HttpDiagnosticRequestInitiator value {};
    check_hresult(static_cast<const IHttpDiagnosticProviderRequestResponseCompletedEventArgs &>(static_cast<const D &>(*this))->get_Initiator(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation> impl_IHttpDiagnosticProviderRequestResponseCompletedEventArgs<D>::SourceLocations() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Web::Http::Diagnostics::HttpDiagnosticSourceLocation> value;
    check_hresult(static_cast<const IHttpDiagnosticProviderRequestResponseCompletedEventArgs &>(static_cast<const D &>(*this))->get_SourceLocations(put(value)));
    return value;
}

template <typename D> Windows::Web::Http::Diagnostics::HttpDiagnosticProvider impl_IHttpDiagnosticProviderStatics<D>::CreateFromProcessDiagnosticInfo(const Windows::System::Diagnostics::ProcessDiagnosticInfo & processDiagnosticInfo) const
{
    Windows::Web::Http::Diagnostics::HttpDiagnosticProvider value { nullptr };
    check_hresult(static_cast<const IHttpDiagnosticProviderStatics &>(static_cast<const D &>(*this))->abi_CreateFromProcessDiagnosticInfo(get(processDiagnosticInfo), put(value)));
    return value;
}

template <typename D> void impl_IHttpDiagnosticProvider<D>::Start() const
{
    check_hresult(static_cast<const IHttpDiagnosticProvider &>(static_cast<const D &>(*this))->abi_Start());
}

template <typename D> void impl_IHttpDiagnosticProvider<D>::Stop() const
{
    check_hresult(static_cast<const IHttpDiagnosticProvider &>(static_cast<const D &>(*this))->abi_Stop());
}

template <typename D> event_token impl_IHttpDiagnosticProvider<D>::RequestSent(const Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestSentEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IHttpDiagnosticProvider &>(static_cast<const D &>(*this))->add_RequestSent(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IHttpDiagnosticProvider> impl_IHttpDiagnosticProvider<D>::RequestSent(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestSentEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IHttpDiagnosticProvider>(this, &ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider::remove_RequestSent, RequestSent(handler));
}

template <typename D> void impl_IHttpDiagnosticProvider<D>::RequestSent(event_token token) const
{
    check_hresult(static_cast<const IHttpDiagnosticProvider &>(static_cast<const D &>(*this))->remove_RequestSent(token));
}

template <typename D> event_token impl_IHttpDiagnosticProvider<D>::ResponseReceived(const Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderResponseReceivedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IHttpDiagnosticProvider &>(static_cast<const D &>(*this))->add_ResponseReceived(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IHttpDiagnosticProvider> impl_IHttpDiagnosticProvider<D>::ResponseReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderResponseReceivedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IHttpDiagnosticProvider>(this, &ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider::remove_ResponseReceived, ResponseReceived(handler));
}

template <typename D> void impl_IHttpDiagnosticProvider<D>::ResponseReceived(event_token token) const
{
    check_hresult(static_cast<const IHttpDiagnosticProvider &>(static_cast<const D &>(*this))->remove_ResponseReceived(token));
}

template <typename D> event_token impl_IHttpDiagnosticProvider<D>::RequestResponseCompleted(const Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseCompletedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IHttpDiagnosticProvider &>(static_cast<const D &>(*this))->add_RequestResponseCompleted(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IHttpDiagnosticProvider> impl_IHttpDiagnosticProvider<D>::RequestResponseCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Web::Http::Diagnostics::HttpDiagnosticProvider, Windows::Web::Http::Diagnostics::HttpDiagnosticProviderRequestResponseCompletedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IHttpDiagnosticProvider>(this, &ABI::Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider::remove_RequestResponseCompleted, RequestResponseCompleted(handler));
}

template <typename D> void impl_IHttpDiagnosticProvider<D>::RequestResponseCompleted(event_token token) const
{
    check_hresult(static_cast<const IHttpDiagnosticProvider &>(static_cast<const D &>(*this))->remove_RequestResponseCompleted(token));
}

inline Windows::Web::Http::Diagnostics::HttpDiagnosticProvider HttpDiagnosticProvider::CreateFromProcessDiagnosticInfo(const Windows::System::Diagnostics::ProcessDiagnosticInfo & processDiagnosticInfo)
{
    return get_activation_factory<HttpDiagnosticProvider, IHttpDiagnosticProviderStatics>().CreateFromProcessDiagnosticInfo(processDiagnosticInfo);
}

}

}
