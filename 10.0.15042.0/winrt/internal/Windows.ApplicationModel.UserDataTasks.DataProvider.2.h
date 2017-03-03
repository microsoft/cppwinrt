// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.UserDataTasks.DataProvider.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_28adf45c_6807_5590_a7f1_934747937592
#define WINRT_GENERIC_28adf45c_6807_5590_a7f1_934747937592
template <> struct __declspec(uuid("28adf45c-6807-5590-a7f1-934747937592")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequestEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequestEventArgs> {};
#endif

#ifndef WINRT_GENERIC_b164e8ef_167c_5852_a792_0930b4001871
#define WINRT_GENERIC_b164e8ef_167c_5852_a792_0930b4001871
template <> struct __declspec(uuid("b164e8ef-167c-5852-a792-0930b4001871")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequestEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequestEventArgs> {};
#endif

#ifndef WINRT_GENERIC_0887b178_c546_5ac8_ae10_3292ab5265bc
#define WINRT_GENERIC_0887b178_c546_5ac8_ae10_3292ab5265bc
template <> struct __declspec(uuid("0887b178-c546-5ac8-ae10-3292ab5265bc")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequestEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequestEventArgs> {};
#endif

#ifndef WINRT_GENERIC_6035f9f7_d4c5_5394_b0e3_5d606987ba47
#define WINRT_GENERIC_6035f9f7_d4c5_5394_b0e3_5d606987ba47
template <> struct __declspec(uuid("6035f9f7-d4c5-5394-b0e3-5d606987ba47")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequestEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequestEventArgs> {};
#endif

#ifndef WINRT_GENERIC_0b18e688_b269_5ca2_a8f3_d6d10f0fb320
#define WINRT_GENERIC_0b18e688_b269_5ca2_a8f3_d6d10f0fb320
template <> struct __declspec(uuid("0b18e688-b269-5ca2-a8f3-d6d10f0fb320")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequestEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequestEventArgs> {};
#endif


}

namespace Windows::ApplicationModel::UserDataTasks::DataProvider {

struct IUserDataTaskDataProviderConnection :
    Windows::Foundation::IInspectable,
    impl::consume<IUserDataTaskDataProviderConnection>
{
    IUserDataTaskDataProviderConnection(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataTaskDataProviderTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume<IUserDataTaskDataProviderTriggerDetails>
{
    IUserDataTaskDataProviderTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataTaskListCompleteTaskRequest :
    Windows::Foundation::IInspectable,
    impl::consume<IUserDataTaskListCompleteTaskRequest>
{
    IUserDataTaskListCompleteTaskRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataTaskListCompleteTaskRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume<IUserDataTaskListCompleteTaskRequestEventArgs>
{
    IUserDataTaskListCompleteTaskRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataTaskListCreateOrUpdateTaskRequest :
    Windows::Foundation::IInspectable,
    impl::consume<IUserDataTaskListCreateOrUpdateTaskRequest>
{
    IUserDataTaskListCreateOrUpdateTaskRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataTaskListCreateOrUpdateTaskRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume<IUserDataTaskListCreateOrUpdateTaskRequestEventArgs>
{
    IUserDataTaskListCreateOrUpdateTaskRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataTaskListDeleteTaskRequest :
    Windows::Foundation::IInspectable,
    impl::consume<IUserDataTaskListDeleteTaskRequest>
{
    IUserDataTaskListDeleteTaskRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataTaskListDeleteTaskRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume<IUserDataTaskListDeleteTaskRequestEventArgs>
{
    IUserDataTaskListDeleteTaskRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataTaskListSkipOccurrenceRequest :
    Windows::Foundation::IInspectable,
    impl::consume<IUserDataTaskListSkipOccurrenceRequest>
{
    IUserDataTaskListSkipOccurrenceRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataTaskListSkipOccurrenceRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume<IUserDataTaskListSkipOccurrenceRequestEventArgs>
{
    IUserDataTaskListSkipOccurrenceRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataTaskListSyncManagerSyncRequest :
    Windows::Foundation::IInspectable,
    impl::consume<IUserDataTaskListSyncManagerSyncRequest>
{
    IUserDataTaskListSyncManagerSyncRequest(std::nullptr_t = nullptr) noexcept {}
};

struct IUserDataTaskListSyncManagerSyncRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume<IUserDataTaskListSyncManagerSyncRequestEventArgs>
{
    IUserDataTaskListSyncManagerSyncRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}

}
