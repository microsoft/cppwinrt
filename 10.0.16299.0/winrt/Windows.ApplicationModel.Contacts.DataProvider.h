// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.ApplicationModel.Contacts.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.ApplicationModel.Contacts.DataProvider.2.h"
#include "winrt/Windows.ApplicationModel.Contacts.h"

namespace winrt::impl {

template <typename D> event_token consume_Windows_ApplicationModel_Contacts_DataProvider_IContactDataProviderConnection<D>::SyncRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequestEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection)->add_SyncRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection> consume_Windows_ApplicationModel_Contacts_DataProvider_IContactDataProviderConnection<D>::SyncRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequestEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection>(this, &abi_t<Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection>::remove_SyncRequested, SyncRequested(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_DataProvider_IContactDataProviderConnection<D>::SyncRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection)->remove_SyncRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Contacts_DataProvider_IContactDataProviderConnection<D>::ServerSearchReadBatchRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequestEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection)->add_ServerSearchReadBatchRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection> consume_Windows_ApplicationModel_Contacts_DataProvider_IContactDataProviderConnection<D>::ServerSearchReadBatchRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequestEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection>(this, &abi_t<Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection>::remove_ServerSearchReadBatchRequested, ServerSearchReadBatchRequested(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_DataProvider_IContactDataProviderConnection<D>::ServerSearchReadBatchRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection)->remove_ServerSearchReadBatchRequested(get_abi(token)));
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_DataProvider_IContactDataProviderConnection<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection)->Start());
}

template <typename D> event_token consume_Windows_ApplicationModel_Contacts_DataProvider_IContactDataProviderConnection2<D>::CreateOrUpdateContactRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, Windows::ApplicationModel::Contacts::DataProvider::ContactListCreateOrUpdateContactRequestEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection2)->add_CreateOrUpdateContactRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection2> consume_Windows_ApplicationModel_Contacts_DataProvider_IContactDataProviderConnection2<D>::CreateOrUpdateContactRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, Windows::ApplicationModel::Contacts::DataProvider::ContactListCreateOrUpdateContactRequestEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection2>(this, &abi_t<Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection2>::remove_CreateOrUpdateContactRequested, CreateOrUpdateContactRequested(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_DataProvider_IContactDataProviderConnection2<D>::CreateOrUpdateContactRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection2)->remove_CreateOrUpdateContactRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_ApplicationModel_Contacts_DataProvider_IContactDataProviderConnection2<D>::DeleteContactRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, Windows::ApplicationModel::Contacts::DataProvider::ContactListDeleteContactRequestEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection2)->add_DeleteContactRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection2> consume_Windows_ApplicationModel_Contacts_DataProvider_IContactDataProviderConnection2<D>::DeleteContactRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, Windows::ApplicationModel::Contacts::DataProvider::ContactListDeleteContactRequestEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection2>(this, &abi_t<Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection2>::remove_DeleteContactRequested, DeleteContactRequested(handler));
}

template <typename D> void consume_Windows_ApplicationModel_Contacts_DataProvider_IContactDataProviderConnection2<D>::DeleteContactRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection2)->remove_DeleteContactRequested(get_abi(token)));
}

template <typename D> Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection consume_Windows_ApplicationModel_Contacts_DataProvider_IContactDataProviderTriggerDetails<D>::Connection() const noexcept
{
    Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderTriggerDetails)->get_Connection(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListCreateOrUpdateContactRequest<D>::ContactListId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequest)->get_ContactListId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::Contact consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListCreateOrUpdateContactRequest<D>::Contact() const noexcept
{
    Windows::ApplicationModel::Contacts::Contact value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequest)->get_Contact(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListCreateOrUpdateContactRequest<D>::ReportCompletedAsync(Windows::ApplicationModel::Contacts::Contact const& createdOrUpdatedContact) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequest)->ReportCompletedAsync(get_abi(createdOrUpdatedContact), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListCreateOrUpdateContactRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequest)->ReportFailedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Contacts::DataProvider::ContactListCreateOrUpdateContactRequest consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListCreateOrUpdateContactRequestEventArgs<D>::Request() const noexcept
{
    Windows::ApplicationModel::Contacts::DataProvider::ContactListCreateOrUpdateContactRequest value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequestEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListCreateOrUpdateContactRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequestEventArgs)->GetDeferral(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListDeleteContactRequest<D>::ContactListId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequest)->get_ContactListId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListDeleteContactRequest<D>::ContactId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequest)->get_ContactId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListDeleteContactRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequest)->ReportCompletedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListDeleteContactRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequest)->ReportFailedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Contacts::DataProvider::ContactListDeleteContactRequest consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListDeleteContactRequestEventArgs<D>::Request() const noexcept
{
    Windows::ApplicationModel::Contacts::DataProvider::ContactListDeleteContactRequest value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequestEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListDeleteContactRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequestEventArgs)->GetDeferral(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListServerSearchReadBatchRequest<D>::SessionId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest)->get_SessionId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListServerSearchReadBatchRequest<D>::ContactListId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest)->get_ContactListId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactQueryOptions consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListServerSearchReadBatchRequest<D>::Options() const noexcept
{
    Windows::ApplicationModel::Contacts::ContactQueryOptions value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest)->get_Options(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListServerSearchReadBatchRequest<D>::SuggestedBatchSize() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest)->get_SuggestedBatchSize(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListServerSearchReadBatchRequest<D>::SaveContactAsync(Windows::ApplicationModel::Contacts::Contact const& contact) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest)->SaveContactAsync(get_abi(contact), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListServerSearchReadBatchRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest)->ReportCompletedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListServerSearchReadBatchRequest<D>::ReportFailedAsync(Windows::ApplicationModel::Contacts::ContactBatchStatus const& batchStatus) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest)->ReportFailedAsync(get_abi(batchStatus), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequest consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListServerSearchReadBatchRequestEventArgs<D>::Request() const noexcept
{
    Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequest value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequestEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListServerSearchReadBatchRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequestEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListSyncManagerSyncRequest<D>::ContactListId() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequest)->get_ContactListId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListSyncManagerSyncRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequest)->ReportCompletedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListSyncManagerSyncRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequest)->ReportFailedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequest consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListSyncManagerSyncRequestEventArgs<D>::Request() const noexcept
{
    Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequest value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequestEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListSyncManagerSyncRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequestEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection> : produce_base<D, Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection>
{
    HRESULT __stdcall add_SyncRequested(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SyncRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequestEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SyncRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SyncRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ServerSearchReadBatchRequested(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ServerSearchReadBatchRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequestEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ServerSearchReadBatchRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ServerSearchReadBatchRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
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
struct produce<D, Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection2> : produce_base<D, Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection2>
{
    HRESULT __stdcall add_CreateOrUpdateContactRequested(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().CreateOrUpdateContactRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, Windows::ApplicationModel::Contacts::DataProvider::ContactListCreateOrUpdateContactRequestEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CreateOrUpdateContactRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CreateOrUpdateContactRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DeleteContactRequested(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DeleteContactRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, Windows::ApplicationModel::Contacts::DataProvider::ContactListDeleteContactRequestEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DeleteContactRequested(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeleteContactRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderTriggerDetails> : produce_base<D, Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderTriggerDetails>
{
    HRESULT __stdcall get_Connection(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Connection());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequest> : produce_base<D, Windows::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequest>
{
    HRESULT __stdcall get_ContactListId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ContactListId());
        return S_OK;
    }

    HRESULT __stdcall get_Contact(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Contact());
        return S_OK;
    }

    HRESULT __stdcall ReportCompletedAsync(::IUnknown* createdOrUpdatedContact, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportCompletedAsync(*reinterpret_cast<Windows::ApplicationModel::Contacts::Contact const*>(&createdOrUpdatedContact)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportFailedAsync(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportFailedAsync());
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
struct produce<D, Windows::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequestEventArgs>
{
    HRESULT __stdcall get_Request(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Request());
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
struct produce<D, Windows::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequest> : produce_base<D, Windows::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequest>
{
    HRESULT __stdcall get_ContactListId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ContactListId());
        return S_OK;
    }

    HRESULT __stdcall get_ContactId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ContactId());
        return S_OK;
    }

    HRESULT __stdcall ReportCompletedAsync(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportFailedAsync(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportFailedAsync());
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
struct produce<D, Windows::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequestEventArgs>
{
    HRESULT __stdcall get_Request(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Request());
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
struct produce<D, Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest> : produce_base<D, Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest>
{
    HRESULT __stdcall get_SessionId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SessionId());
        return S_OK;
    }

    HRESULT __stdcall get_ContactListId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ContactListId());
        return S_OK;
    }

    HRESULT __stdcall get_Options(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Options());
        return S_OK;
    }

    HRESULT __stdcall get_SuggestedBatchSize(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SuggestedBatchSize());
        return S_OK;
    }

    HRESULT __stdcall SaveContactAsync(::IUnknown* contact, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SaveContactAsync(*reinterpret_cast<Windows::ApplicationModel::Contacts::Contact const*>(&contact)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportCompletedAsync(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportFailedAsync(Windows::ApplicationModel::Contacts::ContactBatchStatus batchStatus, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportFailedAsync(*reinterpret_cast<Windows::ApplicationModel::Contacts::ContactBatchStatus const*>(&batchStatus)));
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
struct produce<D, Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequestEventArgs>
{
    HRESULT __stdcall get_Request(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Request());
        return S_OK;
    }

    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
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
struct produce<D, Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequest> : produce_base<D, Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequest>
{
    HRESULT __stdcall get_ContactListId(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ContactListId());
        return S_OK;
    }

    HRESULT __stdcall ReportCompletedAsync(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportFailedAsync(::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportFailedAsync());
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
struct produce<D, Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequestEventArgs> : produce_base<D, Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequestEventArgs>
{
    HRESULT __stdcall get_Request(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Request());
        return S_OK;
    }

    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Contacts::DataProvider {

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection2> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderTriggerDetails> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderTriggerDetails> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactListCreateOrUpdateContactRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactListCreateOrUpdateContactRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactListCreateOrUpdateContactRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactListCreateOrUpdateContactRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactListDeleteContactRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactListDeleteContactRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactListDeleteContactRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactListDeleteContactRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequestEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequest> {};

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequestEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequestEventArgs> {};

}

WINRT_WARNING_POP
