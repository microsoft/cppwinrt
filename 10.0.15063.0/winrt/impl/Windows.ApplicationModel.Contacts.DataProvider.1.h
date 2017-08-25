// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Contacts.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.ApplicationModel.Contacts.DataProvider.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Contacts::DataProvider {

struct WINRT_EBO IContactDataProviderConnection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactDataProviderConnection>
{
    IContactDataProviderConnection(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactDataProviderTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactDataProviderTriggerDetails>
{
    IContactDataProviderTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactListServerSearchReadBatchRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactListServerSearchReadBatchRequest>
{
    IContactListServerSearchReadBatchRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactListServerSearchReadBatchRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactListServerSearchReadBatchRequestEventArgs>
{
    IContactListServerSearchReadBatchRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactListSyncManagerSyncRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactListSyncManagerSyncRequest>
{
    IContactListSyncManagerSyncRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContactListSyncManagerSyncRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContactListSyncManagerSyncRequestEventArgs>
{
    IContactListSyncManagerSyncRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}
