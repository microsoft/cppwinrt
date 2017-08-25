// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserDataTasks {

struct UserDataTask;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Deferral;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserDataTasks::DataProvider {

struct IUserDataTaskDataProviderConnection;
struct IUserDataTaskDataProviderTriggerDetails;
struct IUserDataTaskListCompleteTaskRequest;
struct IUserDataTaskListCompleteTaskRequestEventArgs;
struct IUserDataTaskListCreateOrUpdateTaskRequest;
struct IUserDataTaskListCreateOrUpdateTaskRequestEventArgs;
struct IUserDataTaskListDeleteTaskRequest;
struct IUserDataTaskListDeleteTaskRequestEventArgs;
struct IUserDataTaskListSkipOccurrenceRequest;
struct IUserDataTaskListSkipOccurrenceRequestEventArgs;
struct IUserDataTaskListSyncManagerSyncRequest;
struct IUserDataTaskListSyncManagerSyncRequestEventArgs;
struct UserDataTaskDataProviderConnection;
struct UserDataTaskDataProviderTriggerDetails;
struct UserDataTaskListCompleteTaskRequest;
struct UserDataTaskListCompleteTaskRequestEventArgs;
struct UserDataTaskListCreateOrUpdateTaskRequest;
struct UserDataTaskListCreateOrUpdateTaskRequestEventArgs;
struct UserDataTaskListDeleteTaskRequest;
struct UserDataTaskListDeleteTaskRequestEventArgs;
struct UserDataTaskListSkipOccurrenceRequest;
struct UserDataTaskListSkipOccurrenceRequestEventArgs;
struct UserDataTaskListSyncManagerSyncRequest;
struct UserDataTaskListSyncManagerSyncRequestEventArgs;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequest>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequestEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequest>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequestEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequest>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequestEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequest>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequestEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequest>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequestEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequest>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequestEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequest>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequestEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequest>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequestEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequest>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequestEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequest>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequestEventArgs>{ using type = class_category; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskDataProviderConnection" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderTriggerDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskDataProviderTriggerDetails" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListCompleteTaskRequest" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequestEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListCompleteTaskRequestEventArgs" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListCreateOrUpdateTaskRequest" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequestEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListCreateOrUpdateTaskRequestEventArgs" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListDeleteTaskRequest" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequestEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListDeleteTaskRequestEventArgs" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListSkipOccurrenceRequest" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequestEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListSkipOccurrenceRequestEventArgs" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListSyncManagerSyncRequest" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequestEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.DataProvider.IUserDataTaskListSyncManagerSyncRequestEventArgs" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskDataProviderConnection" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderTriggerDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskDataProviderTriggerDetails" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCompleteTaskRequest" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequestEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCompleteTaskRequestEventArgs" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCreateOrUpdateTaskRequest" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequestEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListCreateOrUpdateTaskRequestEventArgs" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListDeleteTaskRequest" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequestEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListDeleteTaskRequestEventArgs" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSkipOccurrenceRequest" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequestEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSkipOccurrenceRequestEventArgs" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSyncManagerSyncRequest" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequestEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.DataProvider.UserDataTaskListSyncManagerSyncRequestEventArgs" }; };
template <> struct guid<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection>{ static constexpr GUID value{ 0x9FF39D1D,0xA447,0x428B,{ 0xAF,0xE9,0xE5,0x40,0x2B,0xDE,0xB0,0x41 } }; };
template <> struct guid<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderTriggerDetails>{ static constexpr GUID value{ 0xAE273202,0xB1C9,0x453E,{ 0xAF,0xC5,0xB3,0x0A,0xF3,0xBD,0x21,0x7D } }; };
template <> struct guid<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequest>{ static constexpr GUID value{ 0xF65E14A3,0x1A42,0x49DA,{ 0x85,0x52,0x28,0x73,0xE5,0x2C,0x55,0xEB } }; };
template <> struct guid<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequestEventArgs>{ static constexpr GUID value{ 0xD77C393D,0x4CF2,0x48AD,{ 0x87,0xFD,0x96,0x3F,0x0E,0xAA,0x7A,0x95 } }; };
template <> struct guid<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequest>{ static constexpr GUID value{ 0x2133772C,0x55C2,0x4300,{ 0x82,0x79,0x04,0x32,0x6E,0x07,0xCC,0xE4 } }; };
template <> struct guid<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequestEventArgs>{ static constexpr GUID value{ 0x12C55A52,0xE378,0x419B,{ 0xAE,0x38,0xA5,0xE9,0xE6,0x04,0x47,0x6E } }; };
template <> struct guid<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequest>{ static constexpr GUID value{ 0x4B863C68,0x7657,0x4F3D,{ 0xB0,0x74,0xD4,0x7E,0xC8,0xDF,0x07,0xE7 } }; };
template <> struct guid<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequestEventArgs>{ static constexpr GUID value{ 0x6063DAD9,0xF562,0x4145,{ 0x8E,0xFE,0xD5,0x00,0x78,0xC9,0x2B,0x7F } }; };
template <> struct guid<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequest>{ static constexpr GUID value{ 0xAB87E34D,0x1CD3,0x431C,{ 0x9F,0x58,0x08,0x9A,0xA4,0x33,0x8D,0x85 } }; };
template <> struct guid<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequestEventArgs>{ static constexpr GUID value{ 0x7A3B924A,0xCC2F,0x4E7B,{ 0xAA,0xCD,0xA5,0xB9,0xD2,0x9C,0xFA,0x4E } }; };
template <> struct guid<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequest>{ static constexpr GUID value{ 0x40A73807,0x7590,0x4149,{ 0xAE,0x19,0xB2,0x11,0x43,0x1A,0x9F,0x48 } }; };
template <> struct guid<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequestEventArgs>{ static constexpr GUID value{ 0x8EAD1C12,0x768E,0x43BD,{ 0x83,0x85,0x5C,0xDC,0x35,0x1F,0xFD,0xEA } }; };
template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection>{ using type = Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection; };
template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderTriggerDetails>{ using type = Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderTriggerDetails; };
template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequest>{ using type = Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequest; };
template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequestEventArgs>{ using type = Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequestEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequest>{ using type = Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequest; };
template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequestEventArgs>{ using type = Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequestEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequest>{ using type = Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequest; };
template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequestEventArgs>{ using type = Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequestEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequest>{ using type = Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequest; };
template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequestEventArgs>{ using type = Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequestEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequest>{ using type = Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequest; };
template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequestEventArgs>{ using type = Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequestEventArgs; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskDataProviderConnection
{
    event_token CreateOrUpdateTaskRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequestEventArgs> const& handler) const;
    using CreateOrUpdateTaskRequested_revoker = event_revoker<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection>;
    CreateOrUpdateTaskRequested_revoker CreateOrUpdateTaskRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequestEventArgs> const& handler) const;
    void CreateOrUpdateTaskRequested(event_token const& token) const;
    event_token SyncRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequestEventArgs> const& handler) const;
    using SyncRequested_revoker = event_revoker<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection>;
    SyncRequested_revoker SyncRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequestEventArgs> const& handler) const;
    void SyncRequested(event_token const& token) const;
    event_token SkipOccurrenceRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequestEventArgs> const& handler) const;
    using SkipOccurrenceRequested_revoker = event_revoker<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection>;
    SkipOccurrenceRequested_revoker SkipOccurrenceRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequestEventArgs> const& handler) const;
    void SkipOccurrenceRequested(event_token const& token) const;
    event_token CompleteTaskRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequestEventArgs> const& handler) const;
    using CompleteTaskRequested_revoker = event_revoker<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection>;
    CompleteTaskRequested_revoker CompleteTaskRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequestEventArgs> const& handler) const;
    void CompleteTaskRequested(event_token const& token) const;
    event_token DeleteTaskRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequestEventArgs> const& handler) const;
    using DeleteTaskRequested_revoker = event_revoker<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection>;
    DeleteTaskRequested_revoker DeleteTaskRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequestEventArgs> const& handler) const;
    void DeleteTaskRequested(event_token const& token) const;
    void Start() const;
};
template <> struct consume<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskDataProviderConnection<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskDataProviderTriggerDetails
{
    Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection Connection() const;
};
template <> struct consume<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderTriggerDetails> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskDataProviderTriggerDetails<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListCompleteTaskRequest
{
    hstring TaskListId() const;
    hstring TaskId() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync(param::hstring const& completedTaskId) const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};
template <> struct consume<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequest> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListCompleteTaskRequest<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListCompleteTaskRequestEventArgs
{
    Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequestEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListCompleteTaskRequestEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListCreateOrUpdateTaskRequest
{
    hstring TaskListId() const;
    Windows::ApplicationModel::UserDataTasks::UserDataTask Task() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync(Windows::ApplicationModel::UserDataTasks::UserDataTask const& createdOrUpdatedUserDataTask) const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};
template <> struct consume<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequest> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListCreateOrUpdateTaskRequest<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListCreateOrUpdateTaskRequestEventArgs
{
    Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequestEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListCreateOrUpdateTaskRequestEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListDeleteTaskRequest
{
    hstring TaskListId() const;
    hstring TaskId() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync() const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};
template <> struct consume<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequest> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListDeleteTaskRequest<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListDeleteTaskRequestEventArgs
{
    Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequestEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListDeleteTaskRequestEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListSkipOccurrenceRequest
{
    hstring TaskListId() const;
    hstring TaskId() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync() const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};
template <> struct consume<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequest> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListSkipOccurrenceRequest<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListSkipOccurrenceRequestEventArgs
{
    Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequestEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListSkipOccurrenceRequestEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListSyncManagerSyncRequest
{
    hstring TaskListId() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync() const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};
template <> struct consume<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequest> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListSyncManagerSyncRequest<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListSyncManagerSyncRequestEventArgs
{
    Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequestEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_DataProvider_IUserDataTaskListSyncManagerSyncRequestEventArgs<D>; };

template <> struct abi<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_CreateOrUpdateTaskRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_CreateOrUpdateTaskRequested(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_SyncRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_SyncRequested(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_SkipOccurrenceRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_SkipOccurrenceRequested(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_CompleteTaskRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_CompleteTaskRequested(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_DeleteTaskRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_DeleteTaskRequested(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall Start() = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderTriggerDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Connection(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TaskListId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TaskId(HSTRING* value) = 0;
    virtual HRESULT __stdcall ReportCompletedAsync(HSTRING completedTaskId, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall ReportFailedAsync(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequestEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Request(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TaskListId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Task(::IUnknown** value) = 0;
    virtual HRESULT __stdcall ReportCompletedAsync(::IUnknown* createdOrUpdatedUserDataTask, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall ReportFailedAsync(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequestEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Request(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TaskListId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TaskId(HSTRING* value) = 0;
    virtual HRESULT __stdcall ReportCompletedAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall ReportFailedAsync(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequestEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Request(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TaskListId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TaskId(HSTRING* value) = 0;
    virtual HRESULT __stdcall ReportCompletedAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall ReportFailedAsync(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequestEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Request(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TaskListId(HSTRING* value) = 0;
    virtual HRESULT __stdcall ReportCompletedAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall ReportFailedAsync(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequestEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Request(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
};};

}
