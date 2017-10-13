// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.ApplicationModel.Activation.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Graphics.Printing.PrintTicket.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.Graphics.Printing.Workflow.2.h"
#include "winrt/Windows.Graphics.Printing.h"

namespace winrt::impl {

template <typename D> event_token consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSession<D>::SetupRequested(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSetupRequestedEventArgs> const& setupEventHandler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession)->add_SetupRequested(get_abi(setupEventHandler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession> consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSession<D>::SetupRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSetupRequestedEventArgs> const& setupEventHandler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession>(this, &abi_t<Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession>::remove_SetupRequested, SetupRequested(setupEventHandler));
}

template <typename D> void consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSession<D>::SetupRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession)->remove_SetupRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSession<D>::Submitted(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedEventArgs> const& submittedEventHandler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession)->add_Submitted(get_abi(submittedEventHandler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession> consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSession<D>::Submitted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedEventArgs> const& submittedEventHandler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession>(this, &abi_t<Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession>::remove_Submitted, Submitted(submittedEventHandler));
}

template <typename D> void consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSession<D>::Submitted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession)->remove_Submitted(get_abi(token)));
}

template <typename D> Windows::Graphics::Printing::Workflow::PrintWorkflowSessionStatus consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSession<D>::Status() const noexcept
{
    Windows::Graphics::Printing::Workflow::PrintWorkflowSessionStatus value{};
    check_terminate(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession)->get_Status(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSession<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession)->Start());
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket> consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSetupRequestedEventArgs<D>::GetUserPrintTicketAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSetupRequestedEventArgs)->GetUserPrintTicketAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSetupRequestedEventArgs<D>::Configuration() const noexcept
{
    Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration configuration{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSetupRequestedEventArgs)->get_Configuration(put_abi(configuration)));
    return configuration;
}

template <typename D> void consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSetupRequestedEventArgs<D>::SetRequiresUI() const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSetupRequestedEventArgs)->SetRequiresUI());
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSetupRequestedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSetupRequestedEventArgs)->GetDeferral(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowConfiguration<D>::SourceAppDisplayName() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration)->get_SourceAppDisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowConfiguration<D>::JobTitle() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration)->get_JobTitle(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowConfiguration<D>::SessionId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration)->get_SessionId(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSession<D>::SetupRequested(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSetupRequestedEventArgs> const& setupEventHandler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession)->add_SetupRequested(get_abi(setupEventHandler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession> consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSession<D>::SetupRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSetupRequestedEventArgs> const& setupEventHandler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession>(this, &abi_t<Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession>::remove_SetupRequested, SetupRequested(setupEventHandler));
}

template <typename D> void consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSession<D>::SetupRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession)->remove_SetupRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSession<D>::XpsDataAvailable(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowXpsDataAvailableEventArgs> const& xpsDataAvailableEventHandler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession)->add_XpsDataAvailable(get_abi(xpsDataAvailableEventHandler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession> consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSession<D>::XpsDataAvailable(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowXpsDataAvailableEventArgs> const& xpsDataAvailableEventHandler) const
{
    return impl::make_event_revoker<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession>(this, &abi_t<Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession>::remove_XpsDataAvailable, XpsDataAvailable(xpsDataAvailableEventHandler));
}

template <typename D> void consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSession<D>::XpsDataAvailable(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession)->remove_XpsDataAvailable(get_abi(token)));
}

template <typename D> Windows::Graphics::Printing::Workflow::PrintWorkflowSessionStatus consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSession<D>::Status() const noexcept
{
    Windows::Graphics::Printing::Workflow::PrintWorkflowSessionStatus value{};
    check_terminate(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession)->get_Status(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSession<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession)->Start());
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket> consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSetupRequestedEventArgs<D>::GetUserPrintTicketAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSetupRequestedEventArgs)->GetUserPrintTicketAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSetupRequestedEventArgs<D>::Configuration() const noexcept
{
    Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSetupRequestedEventArgs)->get_Configuration(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSetupRequestedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSetupRequestedEventArgs)->GetDeferral(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket> consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSourceContent<D>::GetJobPrintTicketAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowSourceContent)->GetJobPrintTicketAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Graphics::Printing::Workflow::PrintWorkflowSpoolStreamContent consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSourceContent<D>::GetSourceSpoolDataAsStreamContent() const
{
    Windows::Graphics::Printing::Workflow::PrintWorkflowSpoolStreamContent result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowSourceContent)->GetSourceSpoolDataAsStreamContent(put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Printing::Workflow::PrintWorkflowObjectModelSourceFileContent consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSourceContent<D>::GetSourceSpoolDataAsXpsObjectModel() const
{
    Windows::Graphics::Printing::Workflow::PrintWorkflowObjectModelSourceFileContent result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowSourceContent)->GetSourceSpoolDataAsXpsObjectModel(put_abi(result)));
    return result;
}

template <typename D> Windows::Storage::Streams::IInputStream consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSpoolStreamContent<D>::GetInputStream() const
{
    Windows::Storage::Streams::IInputStream result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowSpoolStreamContent)->GetInputStream(put_abi(result)));
    return result;
}

template <typename D> Windows::Storage::Streams::IOutputStream consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowStreamTarget<D>::GetOutputStream() const
{
    Windows::Storage::Streams::IOutputStream result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowStreamTarget)->GetOutputStream(put_abi(result)));
    return result;
}

template <typename D> Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedOperation consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSubmittedEventArgs<D>::Operation() const noexcept
{
    Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedOperation value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedEventArgs)->get_Operation(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::Workflow::PrintWorkflowTarget consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSubmittedEventArgs<D>::GetTarget(Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket const& jobPrintTicket) const
{
    Windows::Graphics::Printing::Workflow::PrintWorkflowTarget result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedEventArgs)->GetTarget(get_abi(jobPrintTicket), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSubmittedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedEventArgs)->GetDeferral(put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSubmittedOperation<D>::Complete(Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedStatus const& status) const
{
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedOperation)->Complete(get_abi(status)));
}

template <typename D> Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSubmittedOperation<D>::Configuration() const noexcept
{
    Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedOperation)->get_Configuration(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::Workflow::PrintWorkflowSourceContent consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSubmittedOperation<D>::XpsContent() const noexcept
{
    Windows::Graphics::Printing::Workflow::PrintWorkflowSourceContent value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedOperation)->get_XpsContent(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::Workflow::PrintWorkflowStreamTarget consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowTarget<D>::TargetAsStream() const noexcept
{
    Windows::Graphics::Printing::Workflow::PrintWorkflowStreamTarget value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowTarget)->get_TargetAsStream(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::Workflow::PrintWorkflowObjectModelTargetPackage consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowTarget<D>::TargetAsXpsObjectModelPackage() const noexcept
{
    Windows::Graphics::Printing::Workflow::PrintWorkflowObjectModelTargetPackage value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowTarget)->get_TargetAsXpsObjectModelPackage(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowTriggerDetails<D>::PrintWorkflowSession() const noexcept
{
    Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowTriggerDetails)->get_PrintWorkflowSession(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowUIActivatedEventArgs<D>::PrintWorkflowSession() const noexcept
{
    Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowUIActivatedEventArgs)->get_PrintWorkflowSession(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedOperation consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowXpsDataAvailableEventArgs<D>::Operation() const noexcept
{
    Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedOperation value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowXpsDataAvailableEventArgs)->get_Operation(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowXpsDataAvailableEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Graphics::Printing::Workflow::IPrintWorkflowXpsDataAvailableEventArgs)->GetDeferral(put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession>
{
    HRESULT __stdcall add_SetupRequested(::IUnknown* setupEventHandler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SetupRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSetupRequestedEventArgs> const*>(&setupEventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SetupRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetupRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Submitted(::IUnknown* submittedEventHandler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Submitted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedEventArgs> const*>(&submittedEventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Submitted(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Submitted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Graphics::Printing::Workflow::PrintWorkflowSessionStatus* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Status());
        return S_OK;
    }

    HRESULT __stdcall Start() noexcept final
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
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSetupRequestedEventArgs> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSetupRequestedEventArgs>
{
    HRESULT __stdcall GetUserPrintTicketAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetUserPrintTicketAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Configuration(::IUnknown** configuration) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *configuration = detach_abi(this->shim().Configuration());
        return S_OK;
    }

    HRESULT __stdcall SetRequiresUI() noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetRequiresUI();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration>
{
    HRESULT __stdcall get_SourceAppDisplayName(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SourceAppDisplayName());
        return S_OK;
    }

    HRESULT __stdcall get_JobTitle(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().JobTitle());
        return S_OK;
    }

    HRESULT __stdcall get_SessionId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SessionId());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession>
{
    HRESULT __stdcall add_SetupRequested(::IUnknown* setupEventHandler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SetupRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSetupRequestedEventArgs> const*>(&setupEventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SetupRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetupRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_XpsDataAvailable(::IUnknown* xpsDataAvailableEventHandler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().XpsDataAvailable(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowXpsDataAvailableEventArgs> const*>(&xpsDataAvailableEventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_XpsDataAvailable(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().XpsDataAvailable(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Graphics::Printing::Workflow::PrintWorkflowSessionStatus* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Status());
        return S_OK;
    }

    HRESULT __stdcall Start() noexcept final
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
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSetupRequestedEventArgs> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSetupRequestedEventArgs>
{
    HRESULT __stdcall GetUserPrintTicketAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetUserPrintTicketAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Configuration(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Configuration());
        return S_OK;
    }

    HRESULT __stdcall GetDeferral(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelSourceFileContent> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelSourceFileContent>
{};

template <typename D>
struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelTargetPackage> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelTargetPackage>
{};

template <typename D>
struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowSourceContent> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowSourceContent>
{
    HRESULT __stdcall GetJobPrintTicketAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetJobPrintTicketAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSourceSpoolDataAsStreamContent(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetSourceSpoolDataAsStreamContent());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSourceSpoolDataAsXpsObjectModel(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetSourceSpoolDataAsXpsObjectModel());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowSpoolStreamContent> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowSpoolStreamContent>
{
    HRESULT __stdcall GetInputStream(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetInputStream());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowStreamTarget> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowStreamTarget>
{
    HRESULT __stdcall GetOutputStream(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetOutputStream());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedEventArgs> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedEventArgs>
{
    HRESULT __stdcall get_Operation(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Operation());
        return S_OK;
    }

    HRESULT __stdcall GetTarget(::IUnknown* jobPrintTicket, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetTarget(*reinterpret_cast<Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket const*>(&jobPrintTicket)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedOperation> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedOperation>
{
    HRESULT __stdcall Complete(Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedStatus status) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete(*reinterpret_cast<Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedStatus const*>(&status));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Configuration(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Configuration());
        return S_OK;
    }

    HRESULT __stdcall get_XpsContent(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().XpsContent());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowTarget> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowTarget>
{
    HRESULT __stdcall get_TargetAsStream(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().TargetAsStream());
        return S_OK;
    }

    HRESULT __stdcall get_TargetAsXpsObjectModelPackage(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().TargetAsXpsObjectModelPackage());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowTriggerDetails> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowTriggerDetails>
{
    HRESULT __stdcall get_PrintWorkflowSession(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PrintWorkflowSession());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowUIActivatedEventArgs> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowUIActivatedEventArgs>
{
    HRESULT __stdcall get_PrintWorkflowSession(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PrintWorkflowSession());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowXpsDataAvailableEventArgs> : produce_base<D, Windows::Graphics::Printing::Workflow::IPrintWorkflowXpsDataAvailableEventArgs>
{
    HRESULT __stdcall get_Operation(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Operation());
        return S_OK;
    }

    HRESULT __stdcall GetDeferral(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Printing::Workflow {

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession> {};

template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSetupRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSetupRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration> {};

template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession> {};

template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSetupRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSetupRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelSourceFileContent> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelSourceFileContent> {};

template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelTargetPackage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelTargetPackage> {};

template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowSourceContent> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowSourceContent> {};

template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowSpoolStreamContent> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowSpoolStreamContent> {};

template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowStreamTarget> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowStreamTarget> {};

template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedEventArgs> {};

template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedOperation> {};

template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowTarget> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowTarget> {};

template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowTriggerDetails> {};

template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowUIActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowUIActivatedEventArgs> {};

template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowXpsDataAvailableEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::Workflow::IPrintWorkflowXpsDataAvailableEventArgs> {};

template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession> {};

template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSetupRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSetupRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration> {};

template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession> {};

template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSetupRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSetupRequestedEventArgs> {};

template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowObjectModelSourceFileContent> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowObjectModelSourceFileContent> {};

template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowObjectModelTargetPackage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowObjectModelTargetPackage> {};

template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowSourceContent> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowSourceContent> {};

template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowSpoolStreamContent> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowSpoolStreamContent> {};

template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowStreamTarget> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowStreamTarget> {};

template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedEventArgs> {};

template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedOperation> {};

template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowTarget> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowTarget> {};

template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowTriggerDetails> {};

template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowUIActivatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowUIActivatedEventArgs> {};

template<> struct hash<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowXpsDataAvailableEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Graphics::Printing::Workflow::PrintWorkflowXpsDataAvailableEventArgs> {};

}

WINRT_WARNING_POP
