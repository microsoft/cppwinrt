// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.UserDataTasks.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::ApplicationModel::UserDataTasks {

struct WINRT_EBO UserDataTask :
    Windows::ApplicationModel::UserDataTasks::IUserDataTask
{
    UserDataTask(std::nullptr_t) noexcept {}
    UserDataTask();
};

struct WINRT_EBO UserDataTaskBatch :
    Windows::ApplicationModel::UserDataTasks::IUserDataTaskBatch
{
    UserDataTaskBatch(std::nullptr_t) noexcept {}
};

struct WINRT_EBO UserDataTaskList :
    Windows::ApplicationModel::UserDataTasks::IUserDataTaskList
{
    UserDataTaskList(std::nullptr_t) noexcept {}
};

struct WINRT_EBO UserDataTaskListLimitedWriteOperations :
    Windows::ApplicationModel::UserDataTasks::IUserDataTaskListLimitedWriteOperations
{
    UserDataTaskListLimitedWriteOperations(std::nullptr_t) noexcept {}
};

struct WINRT_EBO UserDataTaskListSyncManager :
    Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager
{
    UserDataTaskListSyncManager(std::nullptr_t) noexcept {}
};

struct WINRT_EBO UserDataTaskManager :
    Windows::ApplicationModel::UserDataTasks::IUserDataTaskManager
{
    UserDataTaskManager(std::nullptr_t) noexcept {}
    static Windows::ApplicationModel::UserDataTasks::UserDataTaskManager GetDefault();
    static Windows::ApplicationModel::UserDataTasks::UserDataTaskManager GetForUser(const Windows::System::User & user);
};

struct WINRT_EBO UserDataTaskQueryOptions :
    Windows::ApplicationModel::UserDataTasks::IUserDataTaskQueryOptions
{
    UserDataTaskQueryOptions(std::nullptr_t) noexcept {}
    UserDataTaskQueryOptions();
};

struct WINRT_EBO UserDataTaskReader :
    Windows::ApplicationModel::UserDataTasks::IUserDataTaskReader
{
    UserDataTaskReader(std::nullptr_t) noexcept {}
};

struct WINRT_EBO UserDataTaskRecurrenceProperties :
    Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties
{
    UserDataTaskRecurrenceProperties(std::nullptr_t) noexcept {}
    UserDataTaskRecurrenceProperties();
};

struct WINRT_EBO UserDataTaskRegenerationProperties :
    Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties
{
    UserDataTaskRegenerationProperties(std::nullptr_t) noexcept {}
    UserDataTaskRegenerationProperties();
};

struct WINRT_EBO UserDataTaskStore :
    Windows::ApplicationModel::UserDataTasks::IUserDataTaskStore
{
    UserDataTaskStore(std::nullptr_t) noexcept {}
};

}

}
