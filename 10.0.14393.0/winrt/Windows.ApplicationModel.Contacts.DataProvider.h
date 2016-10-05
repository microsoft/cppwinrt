// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.ApplicationModel.Contacts.3.h"
#include "internal/Windows.ApplicationModel.Contacts.DataProvider.3.h"
#include "Windows.ApplicationModel.Contacts.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection> : produce_base<D, Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection>
{
    HRESULT __stdcall add_SyncRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequestEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().SyncRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequestEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SyncRequested(event_token token) noexcept override
    {
        try
        {
            this->shim().SyncRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ServerSearchReadBatchRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequestEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ServerSearchReadBatchRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequestEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ServerSearchReadBatchRequested(event_token token) noexcept override
    {
        try
        {
            this->shim().ServerSearchReadBatchRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderTriggerDetails> : produce_base<D, Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderTriggerDetails>
{
    HRESULT __stdcall get_Connection(abi_arg_out<Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Connection());
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
struct produce<D, Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest> : produce_base<D, Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest>
{
    HRESULT __stdcall get_SessionId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SessionId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContactListId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContactListId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Options(abi_arg_out<Windows::ApplicationModel::Contacts::IContactQueryOptions> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Options());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SuggestedBatchSize(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SuggestedBatchSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SaveContactAsync(abi_arg_in<Windows::ApplicationModel::Contacts::IContact> contact, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().SaveContactAsync(*reinterpret_cast<const Windows::ApplicationModel::Contacts::Contact *>(&contact)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCompletedAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportFailedAsync(Windows::ApplicationModel::Contacts::ContactBatchStatus batchStatus, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ReportFailedAsync(batchStatus));
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
    HRESULT __stdcall get_Request(abi_arg_out<Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeferral());
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
    HRESULT __stdcall get_ContactListId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContactListId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCompletedAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportFailedAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ReportFailedAsync());
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
    HRESULT __stdcall get_Request(abi_arg_out<Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequest> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeferral());
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

namespace Windows::ApplicationModel::Contacts::DataProvider {

template <typename D> Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection impl_IContactDataProviderTriggerDetails<D>::Connection() const
{
    Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection value { nullptr };
    check_hresult(static_cast<const IContactDataProviderTriggerDetails &>(static_cast<const D &>(*this))->get_Connection(put(value)));
    return value;
}

template <typename D> event_token impl_IContactDataProviderConnection<D>::SyncRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequestEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IContactDataProviderConnection &>(static_cast<const D &>(*this))->add_SyncRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IContactDataProviderConnection> impl_IContactDataProviderConnection<D>::SyncRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequestEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IContactDataProviderConnection>(this, &ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection::remove_SyncRequested, SyncRequested(handler));
}

template <typename D> void impl_IContactDataProviderConnection<D>::SyncRequested(event_token token) const
{
    check_hresult(static_cast<const IContactDataProviderConnection &>(static_cast<const D &>(*this))->remove_SyncRequested(token));
}

template <typename D> event_token impl_IContactDataProviderConnection<D>::ServerSearchReadBatchRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequestEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IContactDataProviderConnection &>(static_cast<const D &>(*this))->add_ServerSearchReadBatchRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IContactDataProviderConnection> impl_IContactDataProviderConnection<D>::ServerSearchReadBatchRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequestEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IContactDataProviderConnection>(this, &ABI::Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection::remove_ServerSearchReadBatchRequested, ServerSearchReadBatchRequested(handler));
}

template <typename D> void impl_IContactDataProviderConnection<D>::ServerSearchReadBatchRequested(event_token token) const
{
    check_hresult(static_cast<const IContactDataProviderConnection &>(static_cast<const D &>(*this))->remove_ServerSearchReadBatchRequested(token));
}

template <typename D> void impl_IContactDataProviderConnection<D>::Start() const
{
    check_hresult(static_cast<const IContactDataProviderConnection &>(static_cast<const D &>(*this))->abi_Start());
}

template <typename D> hstring impl_IContactListSyncManagerSyncRequest<D>::ContactListId() const
{
    hstring value;
    check_hresult(static_cast<const IContactListSyncManagerSyncRequest &>(static_cast<const D &>(*this))->get_ContactListId(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IContactListSyncManagerSyncRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IContactListSyncManagerSyncRequest &>(static_cast<const D &>(*this))->abi_ReportCompletedAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IContactListSyncManagerSyncRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IContactListSyncManagerSyncRequest &>(static_cast<const D &>(*this))->abi_ReportFailedAsync(put(result)));
    return result;
}

template <typename D> hstring impl_IContactListServerSearchReadBatchRequest<D>::SessionId() const
{
    hstring value;
    check_hresult(static_cast<const IContactListServerSearchReadBatchRequest &>(static_cast<const D &>(*this))->get_SessionId(put(value)));
    return value;
}

template <typename D> hstring impl_IContactListServerSearchReadBatchRequest<D>::ContactListId() const
{
    hstring value;
    check_hresult(static_cast<const IContactListServerSearchReadBatchRequest &>(static_cast<const D &>(*this))->get_ContactListId(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactQueryOptions impl_IContactListServerSearchReadBatchRequest<D>::Options() const
{
    Windows::ApplicationModel::Contacts::ContactQueryOptions value { nullptr };
    check_hresult(static_cast<const IContactListServerSearchReadBatchRequest &>(static_cast<const D &>(*this))->get_Options(put(value)));
    return value;
}

template <typename D> uint32_t impl_IContactListServerSearchReadBatchRequest<D>::SuggestedBatchSize() const
{
    uint32_t value {};
    check_hresult(static_cast<const IContactListServerSearchReadBatchRequest &>(static_cast<const D &>(*this))->get_SuggestedBatchSize(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IContactListServerSearchReadBatchRequest<D>::SaveContactAsync(const Windows::ApplicationModel::Contacts::Contact & contact) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IContactListServerSearchReadBatchRequest &>(static_cast<const D &>(*this))->abi_SaveContactAsync(get(contact), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IContactListServerSearchReadBatchRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IContactListServerSearchReadBatchRequest &>(static_cast<const D &>(*this))->abi_ReportCompletedAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IContactListServerSearchReadBatchRequest<D>::ReportFailedAsync(Windows::ApplicationModel::Contacts::ContactBatchStatus batchStatus) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IContactListServerSearchReadBatchRequest &>(static_cast<const D &>(*this))->abi_ReportFailedAsync(batchStatus, put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequest impl_IContactListSyncManagerSyncRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequest value { nullptr };
    check_hresult(static_cast<const IContactListSyncManagerSyncRequestEventArgs &>(static_cast<const D &>(*this))->get_Request(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IContactListSyncManagerSyncRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(static_cast<const IContactListSyncManagerSyncRequestEventArgs &>(static_cast<const D &>(*this))->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequest impl_IContactListServerSearchReadBatchRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequest value { nullptr };
    check_hresult(static_cast<const IContactListServerSearchReadBatchRequestEventArgs &>(static_cast<const D &>(*this))->get_Request(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IContactListServerSearchReadBatchRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(static_cast<const IContactListServerSearchReadBatchRequestEventArgs &>(static_cast<const D &>(*this))->abi_GetDeferral(put(value)));
    return value;
}

}

}
