// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.ApplicationModel.UserDataTasks.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.System.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::UserDataTasks {

struct __declspec(uuid("7c6585d1-e0d4-4f99-aee2-bc2d5ddadf4c")) __declspec(novtable) IUserDataTask : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
    virtual HRESULT __stdcall get_ListId(hstring * value) = 0;
    virtual HRESULT __stdcall get_RemoteId(hstring * value) = 0;
    virtual HRESULT __stdcall put_RemoteId(hstring value) = 0;
    virtual HRESULT __stdcall get_CompletedDate(Windows::Foundation::IReference<Windows::Foundation::DateTime> ** value) = 0;
    virtual HRESULT __stdcall put_CompletedDate(Windows::Foundation::IReference<Windows::Foundation::DateTime> * value) = 0;
    virtual HRESULT __stdcall get_Details(hstring * value) = 0;
    virtual HRESULT __stdcall put_Details(hstring value) = 0;
    virtual HRESULT __stdcall get_DetailsKind(winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskDetailsKind * value) = 0;
    virtual HRESULT __stdcall put_DetailsKind(winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskDetailsKind value) = 0;
    virtual HRESULT __stdcall get_DueDate(Windows::Foundation::IReference<Windows::Foundation::DateTime> ** value) = 0;
    virtual HRESULT __stdcall put_DueDate(Windows::Foundation::IReference<Windows::Foundation::DateTime> * value) = 0;
    virtual HRESULT __stdcall get_Kind(winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskKind * value) = 0;
    virtual HRESULT __stdcall get_Priority(winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskPriority * value) = 0;
    virtual HRESULT __stdcall put_Priority(winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskPriority value) = 0;
    virtual HRESULT __stdcall get_RecurrenceProperties(Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties ** value) = 0;
    virtual HRESULT __stdcall put_RecurrenceProperties(Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties * value) = 0;
    virtual HRESULT __stdcall get_RegenerationProperties(Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties ** value) = 0;
    virtual HRESULT __stdcall put_RegenerationProperties(Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties * value) = 0;
    virtual HRESULT __stdcall get_Reminder(Windows::Foundation::IReference<Windows::Foundation::DateTime> ** value) = 0;
    virtual HRESULT __stdcall put_Reminder(Windows::Foundation::IReference<Windows::Foundation::DateTime> * value) = 0;
    virtual HRESULT __stdcall get_Sensitivity(winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskSensitivity * value) = 0;
    virtual HRESULT __stdcall put_Sensitivity(winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskSensitivity value) = 0;
    virtual HRESULT __stdcall get_Subject(hstring * value) = 0;
    virtual HRESULT __stdcall put_Subject(hstring value) = 0;
    virtual HRESULT __stdcall get_StartDate(Windows::Foundation::IReference<Windows::Foundation::DateTime> ** value) = 0;
    virtual HRESULT __stdcall put_StartDate(Windows::Foundation::IReference<Windows::Foundation::DateTime> * value) = 0;
};

struct __declspec(uuid("382da5fe-20b5-431c-8f42-a5d292ec930c")) __declspec(novtable) IUserDataTaskBatch : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Tasks(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataTasks::UserDataTask> ** value) = 0;
};

struct __declspec(uuid("49412e39-7c1d-4df1-bed3-314b7cbf5e4e")) __declspec(novtable) IUserDataTaskList : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
    virtual HRESULT __stdcall get_UserDataAccountId(hstring * value) = 0;
    virtual HRESULT __stdcall get_DisplayName(hstring * value) = 0;
    virtual HRESULT __stdcall put_DisplayName(hstring value) = 0;
    virtual HRESULT __stdcall get_SourceDisplayName(hstring * value) = 0;
    virtual HRESULT __stdcall get_OtherAppReadAccess(winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppReadAccess * value) = 0;
    virtual HRESULT __stdcall put_OtherAppReadAccess(winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppReadAccess value) = 0;
    virtual HRESULT __stdcall get_OtherAppWriteAccess(winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppWriteAccess * value) = 0;
    virtual HRESULT __stdcall put_OtherAppWriteAccess(winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppWriteAccess value) = 0;
    virtual HRESULT __stdcall get_LimitedWriteOperations(Windows::ApplicationModel::UserDataTasks::IUserDataTaskListLimitedWriteOperations ** value) = 0;
    virtual HRESULT __stdcall get_SyncManager(Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager ** value) = 0;
    virtual HRESULT __stdcall abi_RegisterSyncManagerAsync(Windows::Foundation::IAsyncAction ** result) = 0;
    virtual HRESULT __stdcall abi_GetTaskReader(Windows::ApplicationModel::UserDataTasks::IUserDataTaskReader ** result) = 0;
    virtual HRESULT __stdcall abi_GetTaskReaderWithOptions(Windows::ApplicationModel::UserDataTasks::IUserDataTaskQueryOptions * options, Windows::ApplicationModel::UserDataTasks::IUserDataTaskReader ** value) = 0;
    virtual HRESULT __stdcall abi_GetTaskAsync(hstring userDataTask, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTask> ** operation) = 0;
    virtual HRESULT __stdcall abi_SaveTaskAsync(Windows::ApplicationModel::UserDataTasks::IUserDataTask * userDataTask, Windows::Foundation::IAsyncAction ** action) = 0;
    virtual HRESULT __stdcall abi_DeleteTaskAsync(hstring userDataTaskId, Windows::Foundation::IAsyncAction ** action) = 0;
    virtual HRESULT __stdcall abi_DeleteAsync(Windows::Foundation::IAsyncAction ** asyncAction) = 0;
    virtual HRESULT __stdcall abi_SaveAsync(Windows::Foundation::IAsyncAction ** asyncAction) = 0;
};

struct __declspec(uuid("7aa267f2-6078-4183-919e-4f29f19cfae9")) __declspec(novtable) IUserDataTaskListLimitedWriteOperations : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_TryCompleteTaskAsync(hstring userDataTaskId, Windows::Foundation::IAsyncOperation<hstring> ** operation) = 0;
    virtual HRESULT __stdcall abi_TryCreateOrUpdateTaskAsync(Windows::ApplicationModel::UserDataTasks::IUserDataTask * userDataTask, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_TryDeleteTaskAsync(hstring userDataTaskId, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_TrySkipOccurrenceAsync(hstring userDataTaskId, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
};

struct __declspec(uuid("8e591a95-1dcf-469f-93ec-ba48bb553c6b")) __declspec(novtable) IUserDataTaskListSyncManager : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_LastAttemptedSyncTime(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall put_LastAttemptedSyncTime(Windows::Foundation::DateTime value) = 0;
    virtual HRESULT __stdcall get_LastSuccessfulSyncTime(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall put_LastSuccessfulSyncTime(Windows::Foundation::DateTime value) = 0;
    virtual HRESULT __stdcall get_Status(winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncStatus * value) = 0;
    virtual HRESULT __stdcall put_Status(winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncStatus value) = 0;
    virtual HRESULT __stdcall abi_SyncAsync(Windows::Foundation::IAsyncOperation<bool> ** result) = 0;
    virtual HRESULT __stdcall add_SyncStatusChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager, Windows::Foundation::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_SyncStatusChanged(event_token token) = 0;
};

struct __declspec(uuid("8451c914-e60b-48a9-9211-7fb8a56cb84c")) __declspec(novtable) IUserDataTaskManager : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_RequestStoreAsync(winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskStoreAccessType accessType, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskStore> ** operation) = 0;
    virtual HRESULT __stdcall get_User(Windows::System::IUser ** value) = 0;
};

struct __declspec(uuid("b35539f8-c502-47fc-a81e-100883719d55")) __declspec(novtable) IUserDataTaskManagerStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_GetDefault(Windows::ApplicationModel::UserDataTasks::IUserDataTaskManager ** result) = 0;
    virtual HRESULT __stdcall abi_GetForUser(Windows::System::IUser * user, Windows::ApplicationModel::UserDataTasks::IUserDataTaskManager ** result) = 0;
};

struct __declspec(uuid("959f27ed-909a-4d30-8c1b-331d8fe667e2")) __declspec(novtable) IUserDataTaskQueryOptions : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_SortProperty(winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskQuerySortProperty * value) = 0;
    virtual HRESULT __stdcall put_SortProperty(winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskQuerySortProperty value) = 0;
    virtual HRESULT __stdcall get_Kind(winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryKind * value) = 0;
    virtual HRESULT __stdcall put_Kind(winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryKind value) = 0;
};

struct __declspec(uuid("03e688b1-4ccf-4500-883b-e76290cfed63")) __declspec(novtable) IUserDataTaskReader : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_ReadBatchAsync(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskBatch> ** result) = 0;
};

struct __declspec(uuid("73df80b0-27c6-40ce-b149-9cd41485a69e")) __declspec(novtable) IUserDataTaskRecurrenceProperties : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Unit(winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceUnit * value) = 0;
    virtual HRESULT __stdcall put_Unit(winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceUnit value) = 0;
    virtual HRESULT __stdcall get_Occurrences(Windows::Foundation::IReference<int32_t> ** value) = 0;
    virtual HRESULT __stdcall put_Occurrences(Windows::Foundation::IReference<int32_t> * value) = 0;
    virtual HRESULT __stdcall get_Until(Windows::Foundation::IReference<Windows::Foundation::DateTime> ** value) = 0;
    virtual HRESULT __stdcall put_Until(Windows::Foundation::IReference<Windows::Foundation::DateTime> * value) = 0;
    virtual HRESULT __stdcall get_Interval(int32_t * value) = 0;
    virtual HRESULT __stdcall put_Interval(int32_t value) = 0;
    virtual HRESULT __stdcall get_DaysOfWeek(Windows::Foundation::IReference<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskDaysOfWeek> ** value) = 0;
    virtual HRESULT __stdcall put_DaysOfWeek(Windows::Foundation::IReference<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskDaysOfWeek> * value) = 0;
    virtual HRESULT __stdcall get_WeekOfMonth(Windows::Foundation::IReference<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskWeekOfMonth> ** value) = 0;
    virtual HRESULT __stdcall put_WeekOfMonth(Windows::Foundation::IReference<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskWeekOfMonth> * value) = 0;
    virtual HRESULT __stdcall get_Month(Windows::Foundation::IReference<int32_t> ** value) = 0;
    virtual HRESULT __stdcall put_Month(Windows::Foundation::IReference<int32_t> * value) = 0;
    virtual HRESULT __stdcall get_Day(Windows::Foundation::IReference<int32_t> ** value) = 0;
    virtual HRESULT __stdcall put_Day(Windows::Foundation::IReference<int32_t> * value) = 0;
};

struct __declspec(uuid("92ab0007-090e-4704-bb5c-84fc0b0d9c31")) __declspec(novtable) IUserDataTaskRegenerationProperties : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Unit(winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationUnit * value) = 0;
    virtual HRESULT __stdcall put_Unit(winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationUnit value) = 0;
    virtual HRESULT __stdcall get_Occurrences(Windows::Foundation::IReference<int32_t> ** value) = 0;
    virtual HRESULT __stdcall put_Occurrences(Windows::Foundation::IReference<int32_t> * value) = 0;
    virtual HRESULT __stdcall get_Until(Windows::Foundation::IReference<Windows::Foundation::DateTime> ** value) = 0;
    virtual HRESULT __stdcall put_Until(Windows::Foundation::IReference<Windows::Foundation::DateTime> * value) = 0;
    virtual HRESULT __stdcall get_Interval(int32_t * value) = 0;
    virtual HRESULT __stdcall put_Interval(int32_t value) = 0;
};

struct __declspec(uuid("f06a9cb0-f1db-45ba-8a62-086004c0213d")) __declspec(novtable) IUserDataTaskStore : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_CreateListAsync(hstring name, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskList> ** operation) = 0;
    virtual HRESULT __stdcall abi_CreateListInAccountAsync(hstring name, hstring userDataAccountId, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskList> ** result) = 0;
    virtual HRESULT __stdcall abi_FindListsAsync(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataTasks::UserDataTaskList>> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetListAsync(hstring taskListId, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskList> ** operation) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::ApplicationModel::UserDataTasks::UserDataTask> { using default_interface = Windows::ApplicationModel::UserDataTasks::IUserDataTask; };
template <> struct traits<Windows::ApplicationModel::UserDataTasks::UserDataTaskBatch> { using default_interface = Windows::ApplicationModel::UserDataTasks::IUserDataTaskBatch; };
template <> struct traits<Windows::ApplicationModel::UserDataTasks::UserDataTaskList> { using default_interface = Windows::ApplicationModel::UserDataTasks::IUserDataTaskList; };
template <> struct traits<Windows::ApplicationModel::UserDataTasks::UserDataTaskListLimitedWriteOperations> { using default_interface = Windows::ApplicationModel::UserDataTasks::IUserDataTaskListLimitedWriteOperations; };
template <> struct traits<Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager> { using default_interface = Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager; };
template <> struct traits<Windows::ApplicationModel::UserDataTasks::UserDataTaskManager> { using default_interface = Windows::ApplicationModel::UserDataTasks::IUserDataTaskManager; };
template <> struct traits<Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryOptions> { using default_interface = Windows::ApplicationModel::UserDataTasks::IUserDataTaskQueryOptions; };
template <> struct traits<Windows::ApplicationModel::UserDataTasks::UserDataTaskReader> { using default_interface = Windows::ApplicationModel::UserDataTasks::IUserDataTaskReader; };
template <> struct traits<Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceProperties> { using default_interface = Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties; };
template <> struct traits<Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationProperties> { using default_interface = Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties; };
template <> struct traits<Windows::ApplicationModel::UserDataTasks::UserDataTaskStore> { using default_interface = Windows::ApplicationModel::UserDataTasks::IUserDataTaskStore; };

}

namespace Windows::ApplicationModel::UserDataTasks {

template <typename D>
struct WINRT_EBO impl_IUserDataTask
{
    hstring Id() const;
    hstring ListId() const;
    hstring RemoteId() const;
    void RemoteId(hstring_view value) const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> CompletedDate() const;
    void CompletedDate(const optional<Windows::Foundation::DateTime> & value) const;
    hstring Details() const;
    void Details(hstring_view value) const;
    Windows::ApplicationModel::UserDataTasks::UserDataTaskDetailsKind DetailsKind() const;
    void DetailsKind(Windows::ApplicationModel::UserDataTasks::UserDataTaskDetailsKind value) const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> DueDate() const;
    void DueDate(const optional<Windows::Foundation::DateTime> & value) const;
    Windows::ApplicationModel::UserDataTasks::UserDataTaskKind Kind() const;
    Windows::ApplicationModel::UserDataTasks::UserDataTaskPriority Priority() const;
    void Priority(Windows::ApplicationModel::UserDataTasks::UserDataTaskPriority value) const;
    Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceProperties RecurrenceProperties() const;
    void RecurrenceProperties(const Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceProperties & value) const;
    Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationProperties RegenerationProperties() const;
    void RegenerationProperties(const Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationProperties & value) const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> Reminder() const;
    void Reminder(const optional<Windows::Foundation::DateTime> & value) const;
    Windows::ApplicationModel::UserDataTasks::UserDataTaskSensitivity Sensitivity() const;
    void Sensitivity(Windows::ApplicationModel::UserDataTasks::UserDataTaskSensitivity value) const;
    hstring Subject() const;
    void Subject(hstring_view value) const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> StartDate() const;
    void StartDate(const optional<Windows::Foundation::DateTime> & value) const;
};

template <typename D>
struct WINRT_EBO impl_IUserDataTaskBatch
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataTasks::UserDataTask> Tasks() const;
};

template <typename D>
struct WINRT_EBO impl_IUserDataTaskList
{
    hstring Id() const;
    hstring UserDataAccountId() const;
    hstring DisplayName() const;
    void DisplayName(hstring_view value) const;
    hstring SourceDisplayName() const;
    Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppReadAccess OtherAppReadAccess() const;
    void OtherAppReadAccess(Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppReadAccess value) const;
    Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppWriteAccess OtherAppWriteAccess() const;
    void OtherAppWriteAccess(Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppWriteAccess value) const;
    Windows::ApplicationModel::UserDataTasks::UserDataTaskListLimitedWriteOperations LimitedWriteOperations() const;
    Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager SyncManager() const;
    Windows::Foundation::IAsyncAction RegisterSyncManagerAsync() const;
    Windows::ApplicationModel::UserDataTasks::UserDataTaskReader GetTaskReader() const;
    Windows::ApplicationModel::UserDataTasks::UserDataTaskReader GetTaskReader(const Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryOptions & options) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTask> GetTaskAsync(hstring_view userDataTask) const;
    Windows::Foundation::IAsyncAction SaveTaskAsync(const Windows::ApplicationModel::UserDataTasks::UserDataTask & userDataTask) const;
    Windows::Foundation::IAsyncAction DeleteTaskAsync(hstring_view userDataTaskId) const;
    Windows::Foundation::IAsyncAction DeleteAsync() const;
    Windows::Foundation::IAsyncAction SaveAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IUserDataTaskListLimitedWriteOperations
{
    Windows::Foundation::IAsyncOperation<hstring> TryCompleteTaskAsync(hstring_view userDataTaskId) const;
    Windows::Foundation::IAsyncOperation<bool> TryCreateOrUpdateTaskAsync(const Windows::ApplicationModel::UserDataTasks::UserDataTask & userDataTask) const;
    Windows::Foundation::IAsyncOperation<bool> TryDeleteTaskAsync(hstring_view userDataTaskId) const;
    Windows::Foundation::IAsyncOperation<bool> TrySkipOccurrenceAsync(hstring_view userDataTaskId) const;
};

template <typename D>
struct WINRT_EBO impl_IUserDataTaskListSyncManager
{
    Windows::Foundation::DateTime LastAttemptedSyncTime() const;
    void LastAttemptedSyncTime(const Windows::Foundation::DateTime & value) const;
    Windows::Foundation::DateTime LastSuccessfulSyncTime() const;
    void LastSuccessfulSyncTime(const Windows::Foundation::DateTime & value) const;
    Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncStatus Status() const;
    void Status(Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncStatus value) const;
    Windows::Foundation::IAsyncOperation<bool> SyncAsync() const;
    event_token SyncStatusChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager, Windows::Foundation::IInspectable> & handler) const;
    using SyncStatusChanged_revoker = event_revoker<IUserDataTaskListSyncManager>;
    SyncStatusChanged_revoker SyncStatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager, Windows::Foundation::IInspectable> & handler) const;
    void SyncStatusChanged(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IUserDataTaskManager
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskStore> RequestStoreAsync(Windows::ApplicationModel::UserDataTasks::UserDataTaskStoreAccessType accessType) const;
    Windows::System::User User() const;
};

template <typename D>
struct WINRT_EBO impl_IUserDataTaskManagerStatics
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskManager GetDefault() const;
    Windows::ApplicationModel::UserDataTasks::UserDataTaskManager GetForUser(const Windows::System::User & user) const;
};

template <typename D>
struct WINRT_EBO impl_IUserDataTaskQueryOptions
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskQuerySortProperty SortProperty() const;
    void SortProperty(Windows::ApplicationModel::UserDataTasks::UserDataTaskQuerySortProperty value) const;
    Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryKind Kind() const;
    void Kind(Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryKind value) const;
};

template <typename D>
struct WINRT_EBO impl_IUserDataTaskReader
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskBatch> ReadBatchAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IUserDataTaskRecurrenceProperties
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceUnit Unit() const;
    void Unit(Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceUnit value) const;
    Windows::Foundation::IReference<int32_t> Occurrences() const;
    void Occurrences(const optional<int32_t> & value) const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> Until() const;
    void Until(const optional<Windows::Foundation::DateTime> & value) const;
    int32_t Interval() const;
    void Interval(int32_t value) const;
    Windows::Foundation::IReference<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskDaysOfWeek> DaysOfWeek() const;
    void DaysOfWeek(const optional<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskDaysOfWeek> & value) const;
    Windows::Foundation::IReference<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskWeekOfMonth> WeekOfMonth() const;
    void WeekOfMonth(const optional<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskWeekOfMonth> & value) const;
    Windows::Foundation::IReference<int32_t> Month() const;
    void Month(const optional<int32_t> & value) const;
    Windows::Foundation::IReference<int32_t> Day() const;
    void Day(const optional<int32_t> & value) const;
};

template <typename D>
struct WINRT_EBO impl_IUserDataTaskRegenerationProperties
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationUnit Unit() const;
    void Unit(Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationUnit value) const;
    Windows::Foundation::IReference<int32_t> Occurrences() const;
    void Occurrences(const optional<int32_t> & value) const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> Until() const;
    void Until(const optional<Windows::Foundation::DateTime> & value) const;
    int32_t Interval() const;
    void Interval(int32_t value) const;
};

template <typename D>
struct WINRT_EBO impl_IUserDataTaskStore
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskList> CreateListAsync(hstring_view name) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskList> CreateListAsync(hstring_view name, hstring_view userDataAccountId) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataTasks::UserDataTaskList>> FindListsAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskList> GetListAsync(hstring_view taskListId) const;
};

}

namespace impl {

template <> struct traits<Windows::ApplicationModel::UserDataTasks::IUserDataTask>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::IUserDataTask;
    template <typename D> using consume = Windows::ApplicationModel::UserDataTasks::impl_IUserDataTask<D>;
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::IUserDataTaskBatch>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::IUserDataTaskBatch;
    template <typename D> using consume = Windows::ApplicationModel::UserDataTasks::impl_IUserDataTaskBatch<D>;
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::IUserDataTaskList>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::IUserDataTaskList;
    template <typename D> using consume = Windows::ApplicationModel::UserDataTasks::impl_IUserDataTaskList<D>;
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::IUserDataTaskListLimitedWriteOperations>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::IUserDataTaskListLimitedWriteOperations;
    template <typename D> using consume = Windows::ApplicationModel::UserDataTasks::impl_IUserDataTaskListLimitedWriteOperations<D>;
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager;
    template <typename D> using consume = Windows::ApplicationModel::UserDataTasks::impl_IUserDataTaskListSyncManager<D>;
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::IUserDataTaskManager>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::IUserDataTaskManager;
    template <typename D> using consume = Windows::ApplicationModel::UserDataTasks::impl_IUserDataTaskManager<D>;
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::IUserDataTaskManagerStatics>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::IUserDataTaskManagerStatics;
    template <typename D> using consume = Windows::ApplicationModel::UserDataTasks::impl_IUserDataTaskManagerStatics<D>;
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::IUserDataTaskQueryOptions>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::IUserDataTaskQueryOptions;
    template <typename D> using consume = Windows::ApplicationModel::UserDataTasks::impl_IUserDataTaskQueryOptions<D>;
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::IUserDataTaskReader>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::IUserDataTaskReader;
    template <typename D> using consume = Windows::ApplicationModel::UserDataTasks::impl_IUserDataTaskReader<D>;
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties;
    template <typename D> using consume = Windows::ApplicationModel::UserDataTasks::impl_IUserDataTaskRecurrenceProperties<D>;
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties;
    template <typename D> using consume = Windows::ApplicationModel::UserDataTasks::impl_IUserDataTaskRegenerationProperties<D>;
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::IUserDataTaskStore>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::IUserDataTaskStore;
    template <typename D> using consume = Windows::ApplicationModel::UserDataTasks::impl_IUserDataTaskStore<D>;
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::UserDataTask>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::UserDataTask;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.UserDataTasks.UserDataTask"; }
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::UserDataTaskBatch>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::UserDataTaskBatch;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.UserDataTasks.UserDataTaskBatch"; }
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::UserDataTaskList>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::UserDataTaskList;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.UserDataTasks.UserDataTaskList"; }
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::UserDataTaskListLimitedWriteOperations>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::UserDataTaskListLimitedWriteOperations;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.UserDataTasks.UserDataTaskListLimitedWriteOperations"; }
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.UserDataTasks.UserDataTaskListSyncManager"; }
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::UserDataTaskManager>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::UserDataTaskManager;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.UserDataTasks.UserDataTaskManager"; }
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryOptions>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryOptions;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.UserDataTasks.UserDataTaskQueryOptions"; }
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::UserDataTaskReader>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::UserDataTaskReader;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.UserDataTasks.UserDataTaskReader"; }
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceProperties>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceProperties;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.UserDataTasks.UserDataTaskRecurrenceProperties"; }
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationProperties>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationProperties;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.UserDataTasks.UserDataTaskRegenerationProperties"; }
};

template <> struct traits<Windows::ApplicationModel::UserDataTasks::UserDataTaskStore>
{
    using abi = ABI::Windows::ApplicationModel::UserDataTasks::UserDataTaskStore;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.UserDataTasks.UserDataTaskStore"; }
};

}

}
