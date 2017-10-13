// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Contacts.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.ApplicationModel.Contacts.DataProvider.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Contacts::DataProvider {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Contacts::DataProvider {

struct WINRT_EBO ContactDataProviderConnection :
    Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection,
    impl::require<ContactDataProviderConnection, Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection2>
{
    ContactDataProviderConnection(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContactDataProviderTriggerDetails :
    Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderTriggerDetails
{
    ContactDataProviderTriggerDetails(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContactListCreateOrUpdateContactRequest :
    Windows::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequest
{
    ContactListCreateOrUpdateContactRequest(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContactListCreateOrUpdateContactRequestEventArgs :
    Windows::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequestEventArgs
{
    ContactListCreateOrUpdateContactRequestEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContactListDeleteContactRequest :
    Windows::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequest
{
    ContactListDeleteContactRequest(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContactListDeleteContactRequestEventArgs :
    Windows::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequestEventArgs
{
    ContactListDeleteContactRequestEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContactListServerSearchReadBatchRequest :
    Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest
{
    ContactListServerSearchReadBatchRequest(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContactListServerSearchReadBatchRequestEventArgs :
    Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequestEventArgs
{
    ContactListServerSearchReadBatchRequestEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContactListSyncManagerSyncRequest :
    Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequest
{
    ContactListSyncManagerSyncRequest(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ContactListSyncManagerSyncRequestEventArgs :
    Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequestEventArgs
{
    ContactListSyncManagerSyncRequestEventArgs(std::nullptr_t) noexcept {}
};

}
