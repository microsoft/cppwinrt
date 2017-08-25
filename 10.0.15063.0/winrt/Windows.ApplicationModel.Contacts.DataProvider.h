// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
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

template <typename D> Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection consume_Windows_ApplicationModel_Contacts_DataProvider_IContactDataProviderTriggerDetails<D>::Connection() const
{
    Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderTriggerDetails)->get_Connection(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListServerSearchReadBatchRequest<D>::SessionId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest)->get_SessionId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListServerSearchReadBatchRequest<D>::ContactListId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest)->get_ContactListId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::Contacts::ContactQueryOptions consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListServerSearchReadBatchRequest<D>::Options() const
{
    Windows::ApplicationModel::Contacts::ContactQueryOptions value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest)->get_Options(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListServerSearchReadBatchRequest<D>::SuggestedBatchSize() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest)->get_SuggestedBatchSize(&value));
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

template <typename D> Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequest consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListServerSearchReadBatchRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequestEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListServerSearchReadBatchRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequestEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListSyncManagerSyncRequest<D>::ContactListId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequest)->get_ContactListId(put_abi(value)));
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

template <typename D> Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequest consume_Windows_ApplicationModel_Contacts_DataProvider_IContactListSyncManagerSyncRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequestEventArgs)->get_Request(put_abi(value)));
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
    HRESULT __stdcall add_SyncRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
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

    HRESULT __stdcall remove_SyncRequested(abi_t<event_token> token) noexcept override
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

    HRESULT __stdcall add_ServerSearchReadBatchRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
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

    HRESULT __stdcall remove_ServerSearchReadBatchRequested(abi_t<event_token> token) noexcept override
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
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderTriggerDetails> : produce_base<D, Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderTriggerDetails>
{
    HRESULT __stdcall get_Connection(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Connection());
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
    HRESULT __stdcall get_SessionId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SessionId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContactListId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContactListId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Options(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Options());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SuggestedBatchSize(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SuggestedBatchSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SaveContactAsync(::IUnknown* contact, ::IUnknown** result) noexcept override
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

    HRESULT __stdcall ReportCompletedAsync(::IUnknown** result) noexcept override
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

    HRESULT __stdcall ReportFailedAsync(abi_t<Windows::ApplicationModel::Contacts::ContactBatchStatus> batchStatus, ::IUnknown** result) noexcept override
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
    HRESULT __stdcall get_Request(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept override
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
    HRESULT __stdcall get_ContactListId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContactListId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportCompletedAsync(::IUnknown** result) noexcept override
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

    HRESULT __stdcall ReportFailedAsync(::IUnknown** result) noexcept override
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
    HRESULT __stdcall get_Request(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept override
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

template<> struct hash<winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderTriggerDetails> {};

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
