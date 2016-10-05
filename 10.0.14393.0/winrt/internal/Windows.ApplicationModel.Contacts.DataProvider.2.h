// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.Contacts.DataProvider.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_bb9f410f_a739_5280_9bb7_b6a938c7a620
#define WINRT_GENERIC_bb9f410f_a739_5280_9bb7_b6a938c7a620
template <> struct __declspec(uuid("bb9f410f-a739-5280-9bb7-b6a938c7a620")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequestEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequestEventArgs> {};
#endif

#ifndef WINRT_GENERIC_baee1b2f_a5b6_5a03_ae59_fb18f3e025b7
#define WINRT_GENERIC_baee1b2f_a5b6_5a03_ae59_fb18f3e025b7
template <> struct __declspec(uuid("baee1b2f-a5b6-5a03-ae59-fb18f3e025b7")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequestEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequestEventArgs> {};
#endif


}

namespace Windows::ApplicationModel::Contacts::DataProvider {

template <typename D>
struct WINRT_EBO impl_IContactDataProviderConnection
{
    event_token SyncRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequestEventArgs> & handler) const;
    using SyncRequested_revoker = event_revoker<IContactDataProviderConnection>;
    SyncRequested_revoker SyncRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequestEventArgs> & handler) const;
    void SyncRequested(event_token token) const;
    event_token ServerSearchReadBatchRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequestEventArgs> & handler) const;
    using ServerSearchReadBatchRequested_revoker = event_revoker<IContactDataProviderConnection>;
    ServerSearchReadBatchRequested_revoker ServerSearchReadBatchRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection, Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequestEventArgs> & handler) const;
    void ServerSearchReadBatchRequested(event_token token) const;
    void Start() const;
};

template <typename D>
struct WINRT_EBO impl_IContactDataProviderTriggerDetails
{
    Windows::ApplicationModel::Contacts::DataProvider::ContactDataProviderConnection Connection() const;
};

template <typename D>
struct WINRT_EBO impl_IContactListServerSearchReadBatchRequest
{
    hstring SessionId() const;
    hstring ContactListId() const;
    Windows::ApplicationModel::Contacts::ContactQueryOptions Options() const;
    uint32_t SuggestedBatchSize() const;
    Windows::Foundation::IAsyncAction SaveContactAsync(const Windows::ApplicationModel::Contacts::Contact & contact) const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync() const;
    Windows::Foundation::IAsyncAction ReportFailedAsync(Windows::ApplicationModel::Contacts::ContactBatchStatus batchStatus) const;
};

template <typename D>
struct WINRT_EBO impl_IContactListServerSearchReadBatchRequestEventArgs
{
    Windows::ApplicationModel::Contacts::DataProvider::ContactListServerSearchReadBatchRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IContactListSyncManagerSyncRequest
{
    hstring ContactListId() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync() const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IContactListSyncManagerSyncRequestEventArgs
{
    Windows::ApplicationModel::Contacts::DataProvider::ContactListSyncManagerSyncRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};

struct IContactDataProviderConnection :
    Windows::IInspectable,
    impl::consume<IContactDataProviderConnection>
{
    IContactDataProviderConnection(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IContactDataProviderConnection>(m_ptr); }
};

struct IContactDataProviderTriggerDetails :
    Windows::IInspectable,
    impl::consume<IContactDataProviderTriggerDetails>
{
    IContactDataProviderTriggerDetails(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IContactDataProviderTriggerDetails>(m_ptr); }
};

struct IContactListServerSearchReadBatchRequest :
    Windows::IInspectable,
    impl::consume<IContactListServerSearchReadBatchRequest>
{
    IContactListServerSearchReadBatchRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IContactListServerSearchReadBatchRequest>(m_ptr); }
};

struct IContactListServerSearchReadBatchRequestEventArgs :
    Windows::IInspectable,
    impl::consume<IContactListServerSearchReadBatchRequestEventArgs>
{
    IContactListServerSearchReadBatchRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IContactListServerSearchReadBatchRequestEventArgs>(m_ptr); }
};

struct IContactListSyncManagerSyncRequest :
    Windows::IInspectable,
    impl::consume<IContactListSyncManagerSyncRequest>
{
    IContactListSyncManagerSyncRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IContactListSyncManagerSyncRequest>(m_ptr); }
};

struct IContactListSyncManagerSyncRequestEventArgs :
    Windows::IInspectable,
    impl::consume<IContactListSyncManagerSyncRequestEventArgs>
{
    IContactListSyncManagerSyncRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IContactListSyncManagerSyncRequestEventArgs>(m_ptr); }
};

}

}
