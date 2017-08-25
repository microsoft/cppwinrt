// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.UserDataTasks.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.ApplicationModel.UserDataTasks.DataProvider.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserDataTasks::DataProvider {

struct WINRT_EBO IUserDataTaskDataProviderConnection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskDataProviderConnection>
{
    IUserDataTaskDataProviderConnection(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataTaskDataProviderTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskDataProviderTriggerDetails>
{
    IUserDataTaskDataProviderTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataTaskListCompleteTaskRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskListCompleteTaskRequest>
{
    IUserDataTaskListCompleteTaskRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataTaskListCompleteTaskRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskListCompleteTaskRequestEventArgs>
{
    IUserDataTaskListCompleteTaskRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataTaskListCreateOrUpdateTaskRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskListCreateOrUpdateTaskRequest>
{
    IUserDataTaskListCreateOrUpdateTaskRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataTaskListCreateOrUpdateTaskRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskListCreateOrUpdateTaskRequestEventArgs>
{
    IUserDataTaskListCreateOrUpdateTaskRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataTaskListDeleteTaskRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskListDeleteTaskRequest>
{
    IUserDataTaskListDeleteTaskRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataTaskListDeleteTaskRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskListDeleteTaskRequestEventArgs>
{
    IUserDataTaskListDeleteTaskRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataTaskListSkipOccurrenceRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskListSkipOccurrenceRequest>
{
    IUserDataTaskListSkipOccurrenceRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataTaskListSkipOccurrenceRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskListSkipOccurrenceRequestEventArgs>
{
    IUserDataTaskListSkipOccurrenceRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataTaskListSyncManagerSyncRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskListSyncManagerSyncRequest>
{
    IUserDataTaskListSyncManagerSyncRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataTaskListSyncManagerSyncRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskListSyncManagerSyncRequestEventArgs>
{
    IUserDataTaskListSyncManagerSyncRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}
