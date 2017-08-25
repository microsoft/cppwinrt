// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.System.0.h"
#include "winrt/impl/Windows.ApplicationModel.UserDataTasks.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserDataTasks {

struct WINRT_EBO IUserDataTask :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTask>
{
    IUserDataTask(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataTaskBatch :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskBatch>
{
    IUserDataTaskBatch(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataTaskList :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskList>
{
    IUserDataTaskList(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataTaskListLimitedWriteOperations :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskListLimitedWriteOperations>
{
    IUserDataTaskListLimitedWriteOperations(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataTaskListSyncManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskListSyncManager>
{
    IUserDataTaskListSyncManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataTaskManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskManager>
{
    IUserDataTaskManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataTaskManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskManagerStatics>
{
    IUserDataTaskManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataTaskQueryOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskQueryOptions>
{
    IUserDataTaskQueryOptions(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataTaskReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskReader>
{
    IUserDataTaskReader(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataTaskRecurrenceProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskRecurrenceProperties>
{
    IUserDataTaskRecurrenceProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataTaskRegenerationProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskRegenerationProperties>
{
    IUserDataTaskRegenerationProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUserDataTaskStore :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUserDataTaskStore>
{
    IUserDataTaskStore(std::nullptr_t = nullptr) noexcept {}
};

}
