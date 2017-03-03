// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.ApplicationModel.UserDataTasks.DataProvider.0.h"
#include "Windows.ApplicationModel.UserDataTasks.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::UserDataTasks::DataProvider {

struct __declspec(uuid("9ff39d1d-a447-428b-afe9-e5402bdeb041")) __declspec(novtable) IUserDataTaskDataProviderConnection : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall add_CreateOrUpdateTaskRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequestEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_CreateOrUpdateTaskRequested(event_token token) = 0;
    virtual HRESULT __stdcall add_SyncRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequestEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_SyncRequested(event_token token) = 0;
    virtual HRESULT __stdcall add_SkipOccurrenceRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequestEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_SkipOccurrenceRequested(event_token token) = 0;
    virtual HRESULT __stdcall add_CompleteTaskRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequestEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_CompleteTaskRequested(event_token token) = 0;
    virtual HRESULT __stdcall add_DeleteTaskRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequestEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_DeleteTaskRequested(event_token token) = 0;
    virtual HRESULT __stdcall abi_Start() = 0;
};

struct __declspec(uuid("ae273202-b1c9-453e-afc5-b30af3bd217d")) __declspec(novtable) IUserDataTaskDataProviderTriggerDetails : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Connection(Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection ** value) = 0;
};

struct __declspec(uuid("f65e14a3-1a42-49da-8552-2873e52c55eb")) __declspec(novtable) IUserDataTaskListCompleteTaskRequest : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_TaskListId(hstring * value) = 0;
    virtual HRESULT __stdcall get_TaskId(hstring * value) = 0;
    virtual HRESULT __stdcall abi_ReportCompletedAsync(hstring completedTaskId, Windows::Foundation::IAsyncAction ** result) = 0;
    virtual HRESULT __stdcall abi_ReportFailedAsync(Windows::Foundation::IAsyncAction ** result) = 0;
};

struct __declspec(uuid("d77c393d-4cf2-48ad-87fd-963f0eaa7a95")) __declspec(novtable) IUserDataTaskListCompleteTaskRequestEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Request(Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequest ** value) = 0;
    virtual HRESULT __stdcall abi_GetDeferral(Windows::Foundation::IDeferral ** value) = 0;
};

struct __declspec(uuid("2133772c-55c2-4300-8279-04326e07cce4")) __declspec(novtable) IUserDataTaskListCreateOrUpdateTaskRequest : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_TaskListId(hstring * value) = 0;
    virtual HRESULT __stdcall get_Task(Windows::ApplicationModel::UserDataTasks::IUserDataTask ** value) = 0;
    virtual HRESULT __stdcall abi_ReportCompletedAsync(Windows::ApplicationModel::UserDataTasks::IUserDataTask * createdOrUpdatedUserDataTask, Windows::Foundation::IAsyncAction ** result) = 0;
    virtual HRESULT __stdcall abi_ReportFailedAsync(Windows::Foundation::IAsyncAction ** result) = 0;
};

struct __declspec(uuid("12c55a52-e378-419b-ae38-a5e9e604476e")) __declspec(novtable) IUserDataTaskListCreateOrUpdateTaskRequestEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Request(Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequest ** value) = 0;
    virtual HRESULT __stdcall abi_GetDeferral(Windows::Foundation::IDeferral ** value) = 0;
};

struct __declspec(uuid("4b863c68-7657-4f3d-b074-d47ec8df07e7")) __declspec(novtable) IUserDataTaskListDeleteTaskRequest : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_TaskListId(hstring * value) = 0;
    virtual HRESULT __stdcall get_TaskId(hstring * value) = 0;
    virtual HRESULT __stdcall abi_ReportCompletedAsync(Windows::Foundation::IAsyncAction ** result) = 0;
    virtual HRESULT __stdcall abi_ReportFailedAsync(Windows::Foundation::IAsyncAction ** result) = 0;
};

struct __declspec(uuid("6063dad9-f562-4145-8efe-d50078c92b7f")) __declspec(novtable) IUserDataTaskListDeleteTaskRequestEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Request(Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequest ** value) = 0;
    virtual HRESULT __stdcall abi_GetDeferral(Windows::Foundation::IDeferral ** value) = 0;
};

struct __declspec(uuid("ab87e34d-1cd3-431c-9f58-089aa4338d85")) __declspec(novtable) IUserDataTaskListSkipOccurrenceRequest : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_TaskListId(hstring * value) = 0;
    virtual HRESULT __stdcall get_TaskId(hstring * value) = 0;
    virtual HRESULT __stdcall abi_ReportCompletedAsync(Windows::Foundation::IAsyncAction ** result) = 0;
    virtual HRESULT __stdcall abi_ReportFailedAsync(Windows::Foundation::IAsyncAction ** result) = 0;
};

struct __declspec(uuid("7a3b924a-cc2f-4e7b-aacd-a5b9d29cfa4e")) __declspec(novtable) IUserDataTaskListSkipOccurrenceRequestEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Request(Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequest ** value) = 0;
    virtual HRESULT __stdcall abi_GetDeferral(Windows::Foundation::IDeferral ** value) = 0;
};

struct __declspec(uuid("40a73807-7590-4149-ae19-b211431a9f48")) __declspec(novtable) IUserDataTaskListSyncManagerSyncRequest : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_TaskListId(hstring * value) = 0;
    virtual HRESULT __stdcall abi_ReportCompletedAsync(Windows::Foundation::IAsyncAction ** result) = 0;
    virtual HRESULT __stdcall abi_ReportFailedAsync(Windows::Foundation::IAsyncAction ** result) = 0;
};

struct __declspec(uuid("8ead1c12-768e-43bd-8385-5cdc351ffdea")) __declspec(novtable) IUserDataTaskListSyncManagerSyncRequestEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Request(Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequest ** value) = 0;
    virtual HRESULT __stdcall abi_GetDeferral(Windows::Foundation::IDeferral ** value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection> { using default_interface = Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection; };
template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderTriggerDetails> { using default_interface = Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderTriggerDetails; };
template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequest> { using default_interface = Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequest; };
template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequestEventArgs> { using default_interface = Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequestEventArgs; };
template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequest> { using default_interface = Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequest; };
template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequestEventArgs> { using default_interface = Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequestEventArgs; };
template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequest> { using default_interface = Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequest; };
template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequestEventArgs> { using default_interface = Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequestEventArgs; };
template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequest> { using default_interface = Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequest; };
template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequestEventArgs> { using default_interface = Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequestEventArgs; };
template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequest> { using default_interface = Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequest; };
template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequestEventArgs> { using default_interface = Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequestEventArgs; };

}

namespace Windows::ApplicationModel::UserDataTasks::DataProvider {

template <typename D>
struct WINRT_EBO impl_IUserDataTaskDataProviderConnection
{
    event_token CreateOrUpdateTaskRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequestEventArgs> & handler) const;
    using CreateOrUpdateTaskRequested_revoker = event_revoker<IUserDataTaskDataProviderConnection>;
    CreateOrUpdateTaskRequested_revoker CreateOrUpdateTaskRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequestEventArgs> & handler) const;
    void CreateOrUpdateTaskRequested(event_token token) const;
    event_token SyncRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequestEventArgs> & handler) const;
    using SyncRequested_revoker = event_revoker<IUserDataTaskDataProviderConnection>;
    SyncRequested_revoker SyncRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequestEventArgs> & handler) const;
    void SyncRequested(event_token token) const;
    event_token SkipOccurrenceRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequestEventArgs> & handler) const;
    using SkipOccurrenceRequested_revoker = event_revoker<IUserDataTaskDataProviderConnection>;
    SkipOccurrenceRequested_revoker SkipOccurrenceRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequestEventArgs> & handler) const;
    void SkipOccurrenceRequested(event_token token) const;
    event_token CompleteTaskRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequestEventArgs> & handler) const;
    using CompleteTaskRequested_revoker = event_revoker<IUserDataTaskDataProviderConnection>;
    CompleteTaskRequested_revoker CompleteTaskRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequestEventArgs> & handler) const;
    void CompleteTaskRequested(event_token token) const;
    event_token DeleteTaskRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequestEventArgs> & handler) const;
    using DeleteTaskRequested_revoker = event_revoker<IUserDataTaskDataProviderConnection>;
    DeleteTaskRequested_revoker DeleteTaskRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequestEventArgs> & handler) const;
    void DeleteTaskRequested(event_token token) const;
    void Start() const;
};

template <typename D>
struct WINRT_EBO impl_IUserDataTaskDataProviderTriggerDetails
{
    Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection Connection() const;
};

template <typename D>
struct WINRT_EBO impl_IUserDataTaskListCompleteTaskRequest
{
    hstring TaskListId() const;
    hstring TaskId() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync(hstring_view completedTaskId) const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IUserDataTaskListCompleteTaskRequestEventArgs
{
    Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IUserDataTaskListCreateOrUpdateTaskRequest
{
    hstring TaskListId() const;
    Windows::ApplicationModel::UserDataTasks::UserDataTask Task() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync(const Windows::ApplicationModel::UserDataTasks::UserDataTask & createdOrUpdatedUserDataTask) const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IUserDataTaskListCreateOrUpdateTaskRequestEventArgs
{
    Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IUserDataTaskListDeleteTaskRequest
{
    hstring TaskListId() const;
    hstring TaskId() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync() const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IUserDataTaskListDeleteTaskRequestEventArgs
{
    Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IUserDataTaskListSkipOccurrenceRequest
{
    hstring TaskListId() const;
    hstring TaskId() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync() const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IUserDataTaskListSkipOccurrenceRequestEventArgs
{
    Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IUserDataTaskListSyncManagerSyncRequest
{
    hstring TaskListId() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync() const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IUserDataTaskListSyncManagerSyncRequestEventArgs
{
    Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};

}

namespace impl {

template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection;
    template <typename D> using consume = Windows::ApplicationModel::UserDataTasks::DataProvider::impl_IUserDataTaskDataProviderConnection<D>;
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderTriggerDetails>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderTriggerDetails;
    template <typename D> using consume = Windows::ApplicationModel::UserDataTasks::DataProvider::impl_IUserDataTaskDataProviderTriggerDetails<D>;
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequest>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequest;
    template <typename D> using consume = Windows::ApplicationModel::UserDataTasks::DataProvider::impl_IUserDataTaskListCompleteTaskRequest<D>;
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequestEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequestEventArgs;
    template <typename D> using consume = Windows::ApplicationModel::UserDataTasks::DataProvider::impl_IUserDataTaskListCompleteTaskRequestEventArgs<D>;
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequest>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequest;
    template <typename D> using consume = Windows::ApplicationModel::UserDataTasks::DataProvider::impl_IUserDataTaskListCreateOrUpdateTaskRequest<D>;
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequestEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequestEventArgs;
    template <typename D> using consume = Windows::ApplicationModel::UserDataTasks::DataProvider::impl_IUserDataTaskListCreateOrUpdateTaskRequestEventArgs<D>;
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequest>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequest;
    template <typename D> using consume = Windows::ApplicationModel::UserDataTasks::DataProvider::impl_IUserDataTaskListDeleteTaskRequest<D>;
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequestEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequestEventArgs;
    template <typename D> using consume = Windows::ApplicationModel::UserDataTasks::DataProvider::impl_IUserDataTaskListDeleteTaskRequestEventArgs<D>;
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequest>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequest;
    template <typename D> using consume = Windows::ApplicationModel::UserDataTasks::DataProvider::impl_IUserDataTaskListSkipOccurrenceRequest<D>;
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequestEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequestEventArgs;
    template <typename D> using consume = Windows::ApplicationModel::UserDataTasks::DataProvider::impl_IUserDataTaskListSkipOccurrenceRequestEventArgs<D>;
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequest>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequest;
    template <typename D> using consume = Windows::ApplicationModel::UserDataTasks::DataProvider::impl_IUserDataTaskListSyncManagerSyncRequest<D>;
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequestEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequestEventArgs;
    template <typename D> using consume = Windows::ApplicationModel::UserDataTasks::DataProvider::impl_IUserDataTaskListSyncManagerSyncRequestEventArgs<D>;
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskDataProviderConnection"; }
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderTriggerDetails>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderTriggerDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskDataProviderTriggerDetails"; }
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequest>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCompleteTaskRequest"; }
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequestEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequestEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCompleteTaskRequestEventArgs"; }
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequest>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCreateOrUpdateTaskRequest"; }
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequestEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequestEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCreateOrUpdateTaskRequestEventArgs"; }
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequest>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListDeleteTaskRequest"; }
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequestEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequestEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListDeleteTaskRequestEventArgs"; }
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequest>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSkipOccurrenceRequest"; }
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequestEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequestEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSkipOccurrenceRequestEventArgs"; }
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequest>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSyncManagerSyncRequest"; }
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequestEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequestEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSyncManagerSyncRequestEventArgs"; }
};

}

}
