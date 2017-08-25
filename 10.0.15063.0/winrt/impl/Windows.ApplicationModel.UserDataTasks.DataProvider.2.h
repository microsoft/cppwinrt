// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.UserDataTasks.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.ApplicationModel.UserDataTasks.DataProvider.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserDataTasks::DataProvider {

struct WINRT_EBO UserDataTaskDataProviderConnection :
    Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection
{
    UserDataTaskDataProviderConnection(std::nullptr_t) noexcept {}
};

struct WINRT_EBO UserDataTaskDataProviderTriggerDetails :
    Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderTriggerDetails
{
    UserDataTaskDataProviderTriggerDetails(std::nullptr_t) noexcept {}
};

struct WINRT_EBO UserDataTaskListCompleteTaskRequest :
    Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequest
{
    UserDataTaskListCompleteTaskRequest(std::nullptr_t) noexcept {}
};

struct WINRT_EBO UserDataTaskListCompleteTaskRequestEventArgs :
    Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequestEventArgs
{
    UserDataTaskListCompleteTaskRequestEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO UserDataTaskListCreateOrUpdateTaskRequest :
    Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequest
{
    UserDataTaskListCreateOrUpdateTaskRequest(std::nullptr_t) noexcept {}
};

struct WINRT_EBO UserDataTaskListCreateOrUpdateTaskRequestEventArgs :
    Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequestEventArgs
{
    UserDataTaskListCreateOrUpdateTaskRequestEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO UserDataTaskListDeleteTaskRequest :
    Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequest
{
    UserDataTaskListDeleteTaskRequest(std::nullptr_t) noexcept {}
};

struct WINRT_EBO UserDataTaskListDeleteTaskRequestEventArgs :
    Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequestEventArgs
{
    UserDataTaskListDeleteTaskRequestEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO UserDataTaskListSkipOccurrenceRequest :
    Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequest
{
    UserDataTaskListSkipOccurrenceRequest(std::nullptr_t) noexcept {}
};

struct WINRT_EBO UserDataTaskListSkipOccurrenceRequestEventArgs :
    Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequestEventArgs
{
    UserDataTaskListSkipOccurrenceRequestEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO UserDataTaskListSyncManagerSyncRequest :
    Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequest
{
    UserDataTaskListSyncManagerSyncRequest(std::nullptr_t) noexcept {}
};

struct WINRT_EBO UserDataTaskListSyncManagerSyncRequestEventArgs :
    Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequestEventArgs
{
    UserDataTaskListSyncManagerSyncRequestEventArgs(std::nullptr_t) noexcept {}
};

}
