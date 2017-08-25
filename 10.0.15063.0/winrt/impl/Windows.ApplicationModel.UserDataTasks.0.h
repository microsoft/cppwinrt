// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::System {

struct User;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserDataTasks {

enum class UserDataTaskDaysOfWeek : unsigned
{
    None = 0x0,
    Sunday = 0x1,
    Monday = 0x2,
    Tuesday = 0x4,
    Wednesday = 0x8,
    Thursday = 0x10,
    Friday = 0x20,
    Saturday = 0x40,
};

DEFINE_ENUM_FLAG_OPERATORS(UserDataTaskDaysOfWeek)

enum class UserDataTaskDetailsKind
{
    PlainText = 0,
    Html = 1,
};

enum class UserDataTaskKind
{
    Single = 0,
    Recurring = 1,
    Regenerating = 2,
};

enum class UserDataTaskListOtherAppReadAccess
{
    Full = 0,
    SystemOnly = 1,
    None = 2,
};

enum class UserDataTaskListOtherAppWriteAccess
{
    Limited = 0,
    None = 1,
};

enum class UserDataTaskListSyncStatus
{
    Idle = 0,
    Syncing = 1,
    UpToDate = 2,
    AuthenticationError = 3,
    PolicyError = 4,
    UnknownError = 5,
};

enum class UserDataTaskPriority
{
    Normal = 0,
    Low = -1,
    High = 1,
};

enum class UserDataTaskQueryKind
{
    All = 0,
    Incomplete = 1,
    Complete = 2,
};

enum class UserDataTaskQuerySortProperty
{
    DueDate = 0,
};

enum class UserDataTaskRecurrenceUnit
{
    Daily = 0,
    Weekly = 1,
    Monthly = 2,
    MonthlyOnDay = 3,
    Yearly = 4,
    YearlyOnDay = 5,
};

enum class UserDataTaskRegenerationUnit
{
    Daily = 0,
    Weekly = 1,
    Monthly = 2,
    Yearly = 4,
};

enum class UserDataTaskSensitivity
{
    Public = 0,
    Private = 1,
};

enum class UserDataTaskStoreAccessType
{
    AppTasksReadWrite = 0,
    AllTasksLimitedReadWrite = 1,
};

enum class UserDataTaskWeekOfMonth
{
    First = 0,
    Second = 1,
    Third = 2,
    Fourth = 3,
    Last = 4,
};

struct IUserDataTask;
struct IUserDataTaskBatch;
struct IUserDataTaskList;
struct IUserDataTaskListLimitedWriteOperations;
struct IUserDataTaskListSyncManager;
struct IUserDataTaskManager;
struct IUserDataTaskManagerStatics;
struct IUserDataTaskQueryOptions;
struct IUserDataTaskReader;
struct IUserDataTaskRecurrenceProperties;
struct IUserDataTaskRegenerationProperties;
struct IUserDataTaskStore;
struct UserDataTask;
struct UserDataTaskBatch;
struct UserDataTaskList;
struct UserDataTaskListLimitedWriteOperations;
struct UserDataTaskListSyncManager;
struct UserDataTaskManager;
struct UserDataTaskQueryOptions;
struct UserDataTaskReader;
struct UserDataTaskRecurrenceProperties;
struct UserDataTaskRegenerationProperties;
struct UserDataTaskStore;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::UserDataTasks::IUserDataTask>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::IUserDataTaskBatch>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::IUserDataTaskList>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::IUserDataTaskListLimitedWriteOperations>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::IUserDataTaskManager>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::IUserDataTaskManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::IUserDataTaskQueryOptions>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::IUserDataTaskReader>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::IUserDataTaskStore>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTask>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskBatch>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskList>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskListLimitedWriteOperations>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskManager>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryOptions>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskReader>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceProperties>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationProperties>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskStore>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskDaysOfWeek>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskDetailsKind>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskKind>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppReadAccess>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppWriteAccess>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncStatus>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskPriority>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryKind>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskQuerySortProperty>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceUnit>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationUnit>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskSensitivity>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskStoreAccessType>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::UserDataTasks::UserDataTaskWeekOfMonth>{ using type = enum_category; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::IUserDataTask>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.IUserDataTask" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::IUserDataTaskBatch>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.IUserDataTaskBatch" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::IUserDataTaskList>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.IUserDataTaskList" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::IUserDataTaskListLimitedWriteOperations>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.IUserDataTaskListLimitedWriteOperations" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.IUserDataTaskListSyncManager" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::IUserDataTaskManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.IUserDataTaskManager" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::IUserDataTaskManagerStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.IUserDataTaskManagerStatics" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::IUserDataTaskQueryOptions>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.IUserDataTaskQueryOptions" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::IUserDataTaskReader>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.IUserDataTaskReader" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.IUserDataTaskRecurrenceProperties" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.IUserDataTaskRegenerationProperties" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::IUserDataTaskStore>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.IUserDataTaskStore" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::UserDataTask>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.UserDataTask" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::UserDataTaskBatch>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.UserDataTaskBatch" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::UserDataTaskList>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.UserDataTaskList" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::UserDataTaskListLimitedWriteOperations>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.UserDataTaskListLimitedWriteOperations" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.UserDataTaskListSyncManager" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::UserDataTaskManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.UserDataTaskManager" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryOptions>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.UserDataTaskQueryOptions" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::UserDataTaskReader>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.UserDataTaskReader" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceProperties>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.UserDataTaskRecurrenceProperties" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationProperties>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.UserDataTaskRegenerationProperties" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::UserDataTaskStore>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.UserDataTaskStore" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::UserDataTaskDaysOfWeek>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.UserDataTaskDaysOfWeek" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::UserDataTaskDetailsKind>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.UserDataTaskDetailsKind" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::UserDataTaskKind>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.UserDataTaskKind" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppReadAccess>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.UserDataTaskListOtherAppReadAccess" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppWriteAccess>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.UserDataTaskListOtherAppWriteAccess" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncStatus>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.UserDataTaskListSyncStatus" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::UserDataTaskPriority>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.UserDataTaskPriority" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryKind>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.UserDataTaskQueryKind" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::UserDataTaskQuerySortProperty>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.UserDataTaskQuerySortProperty" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceUnit>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.UserDataTaskRecurrenceUnit" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationUnit>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.UserDataTaskRegenerationUnit" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::UserDataTaskSensitivity>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.UserDataTaskSensitivity" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::UserDataTaskStoreAccessType>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.UserDataTaskStoreAccessType" }; };
template <> struct name<Windows::ApplicationModel::UserDataTasks::UserDataTaskWeekOfMonth>{ static constexpr auto & value{ L"Windows.ApplicationModel.UserDataTasks.UserDataTaskWeekOfMonth" }; };
template <> struct guid<Windows::ApplicationModel::UserDataTasks::IUserDataTask>{ static constexpr GUID value{ 0x7C6585D1,0xE0D4,0x4F99,{ 0xAE,0xE2,0xBC,0x2D,0x5D,0xDA,0xDF,0x4C } }; };
template <> struct guid<Windows::ApplicationModel::UserDataTasks::IUserDataTaskBatch>{ static constexpr GUID value{ 0x382DA5FE,0x20B5,0x431C,{ 0x8F,0x42,0xA5,0xD2,0x92,0xEC,0x93,0x0C } }; };
template <> struct guid<Windows::ApplicationModel::UserDataTasks::IUserDataTaskList>{ static constexpr GUID value{ 0x49412E39,0x7C1D,0x4DF1,{ 0xBE,0xD3,0x31,0x4B,0x7C,0xBF,0x5E,0x4E } }; };
template <> struct guid<Windows::ApplicationModel::UserDataTasks::IUserDataTaskListLimitedWriteOperations>{ static constexpr GUID value{ 0x7AA267F2,0x6078,0x4183,{ 0x91,0x9E,0x4F,0x29,0xF1,0x9C,0xFA,0xE9 } }; };
template <> struct guid<Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager>{ static constexpr GUID value{ 0x8E591A95,0x1DCF,0x469F,{ 0x93,0xEC,0xBA,0x48,0xBB,0x55,0x3C,0x6B } }; };
template <> struct guid<Windows::ApplicationModel::UserDataTasks::IUserDataTaskManager>{ static constexpr GUID value{ 0x8451C914,0xE60B,0x48A9,{ 0x92,0x11,0x7F,0xB8,0xA5,0x6C,0xB8,0x4C } }; };
template <> struct guid<Windows::ApplicationModel::UserDataTasks::IUserDataTaskManagerStatics>{ static constexpr GUID value{ 0xB35539F8,0xC502,0x47FC,{ 0xA8,0x1E,0x10,0x08,0x83,0x71,0x9D,0x55 } }; };
template <> struct guid<Windows::ApplicationModel::UserDataTasks::IUserDataTaskQueryOptions>{ static constexpr GUID value{ 0x959F27ED,0x909A,0x4D30,{ 0x8C,0x1B,0x33,0x1D,0x8F,0xE6,0x67,0xE2 } }; };
template <> struct guid<Windows::ApplicationModel::UserDataTasks::IUserDataTaskReader>{ static constexpr GUID value{ 0x03E688B1,0x4CCF,0x4500,{ 0x88,0x3B,0xE7,0x62,0x90,0xCF,0xED,0x63 } }; };
template <> struct guid<Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties>{ static constexpr GUID value{ 0x73DF80B0,0x27C6,0x40CE,{ 0xB1,0x49,0x9C,0xD4,0x14,0x85,0xA6,0x9E } }; };
template <> struct guid<Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties>{ static constexpr GUID value{ 0x92AB0007,0x090E,0x4704,{ 0xBB,0x5C,0x84,0xFC,0x0B,0x0D,0x9C,0x31 } }; };
template <> struct guid<Windows::ApplicationModel::UserDataTasks::IUserDataTaskStore>{ static constexpr GUID value{ 0xF06A9CB0,0xF1DB,0x45BA,{ 0x8A,0x62,0x08,0x60,0x04,0xC0,0x21,0x3D } }; };
template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::UserDataTask>{ using type = Windows::ApplicationModel::UserDataTasks::IUserDataTask; };
template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::UserDataTaskBatch>{ using type = Windows::ApplicationModel::UserDataTasks::IUserDataTaskBatch; };
template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::UserDataTaskList>{ using type = Windows::ApplicationModel::UserDataTasks::IUserDataTaskList; };
template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::UserDataTaskListLimitedWriteOperations>{ using type = Windows::ApplicationModel::UserDataTasks::IUserDataTaskListLimitedWriteOperations; };
template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager>{ using type = Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager; };
template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::UserDataTaskManager>{ using type = Windows::ApplicationModel::UserDataTasks::IUserDataTaskManager; };
template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryOptions>{ using type = Windows::ApplicationModel::UserDataTasks::IUserDataTaskQueryOptions; };
template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::UserDataTaskReader>{ using type = Windows::ApplicationModel::UserDataTasks::IUserDataTaskReader; };
template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceProperties>{ using type = Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties; };
template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationProperties>{ using type = Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties; };
template <> struct default_interface<Windows::ApplicationModel::UserDataTasks::UserDataTaskStore>{ using type = Windows::ApplicationModel::UserDataTasks::IUserDataTaskStore; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataTasks_IUserDataTask
{
    hstring Id() const;
    hstring ListId() const;
    hstring RemoteId() const;
    void RemoteId(param::hstring const& value) const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> CompletedDate() const;
    void CompletedDate(optional<Windows::Foundation::DateTime> const& value) const;
    hstring Details() const;
    void Details(param::hstring const& value) const;
    Windows::ApplicationModel::UserDataTasks::UserDataTaskDetailsKind DetailsKind() const;
    void DetailsKind(Windows::ApplicationModel::UserDataTasks::UserDataTaskDetailsKind const& value) const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> DueDate() const;
    void DueDate(optional<Windows::Foundation::DateTime> const& value) const;
    Windows::ApplicationModel::UserDataTasks::UserDataTaskKind Kind() const;
    Windows::ApplicationModel::UserDataTasks::UserDataTaskPriority Priority() const;
    void Priority(Windows::ApplicationModel::UserDataTasks::UserDataTaskPriority const& value) const;
    Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceProperties RecurrenceProperties() const;
    void RecurrenceProperties(Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceProperties const& value) const;
    Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationProperties RegenerationProperties() const;
    void RegenerationProperties(Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationProperties const& value) const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> Reminder() const;
    void Reminder(optional<Windows::Foundation::DateTime> const& value) const;
    Windows::ApplicationModel::UserDataTasks::UserDataTaskSensitivity Sensitivity() const;
    void Sensitivity(Windows::ApplicationModel::UserDataTasks::UserDataTaskSensitivity const& value) const;
    hstring Subject() const;
    void Subject(param::hstring const& value) const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> StartDate() const;
    void StartDate(optional<Windows::Foundation::DateTime> const& value) const;
};
template <> struct consume<Windows::ApplicationModel::UserDataTasks::IUserDataTask> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_IUserDataTask<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskBatch
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataTasks::UserDataTask> Tasks() const;
};
template <> struct consume<Windows::ApplicationModel::UserDataTasks::IUserDataTaskBatch> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskBatch<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskList
{
    hstring Id() const;
    hstring UserDataAccountId() const;
    hstring DisplayName() const;
    void DisplayName(param::hstring const& value) const;
    hstring SourceDisplayName() const;
    Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppReadAccess OtherAppReadAccess() const;
    void OtherAppReadAccess(Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppReadAccess const& value) const;
    Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppWriteAccess OtherAppWriteAccess() const;
    void OtherAppWriteAccess(Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppWriteAccess const& value) const;
    Windows::ApplicationModel::UserDataTasks::UserDataTaskListLimitedWriteOperations LimitedWriteOperations() const;
    Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager SyncManager() const;
    Windows::Foundation::IAsyncAction RegisterSyncManagerAsync() const;
    Windows::ApplicationModel::UserDataTasks::UserDataTaskReader GetTaskReader() const;
    Windows::ApplicationModel::UserDataTasks::UserDataTaskReader GetTaskReader(Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryOptions const& options) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTask> GetTaskAsync(param::hstring const& userDataTask) const;
    Windows::Foundation::IAsyncAction SaveTaskAsync(Windows::ApplicationModel::UserDataTasks::UserDataTask const& userDataTask) const;
    Windows::Foundation::IAsyncAction DeleteTaskAsync(param::hstring const& userDataTaskId) const;
    Windows::Foundation::IAsyncAction DeleteAsync() const;
    Windows::Foundation::IAsyncAction SaveAsync() const;
};
template <> struct consume<Windows::ApplicationModel::UserDataTasks::IUserDataTaskList> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskList<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskListLimitedWriteOperations
{
    Windows::Foundation::IAsyncOperation<hstring> TryCompleteTaskAsync(param::hstring const& userDataTaskId) const;
    Windows::Foundation::IAsyncOperation<bool> TryCreateOrUpdateTaskAsync(Windows::ApplicationModel::UserDataTasks::UserDataTask const& userDataTask) const;
    Windows::Foundation::IAsyncOperation<bool> TryDeleteTaskAsync(param::hstring const& userDataTaskId) const;
    Windows::Foundation::IAsyncOperation<bool> TrySkipOccurrenceAsync(param::hstring const& userDataTaskId) const;
};
template <> struct consume<Windows::ApplicationModel::UserDataTasks::IUserDataTaskListLimitedWriteOperations> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskListLimitedWriteOperations<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskListSyncManager
{
    Windows::Foundation::DateTime LastAttemptedSyncTime() const;
    void LastAttemptedSyncTime(Windows::Foundation::DateTime const& value) const;
    Windows::Foundation::DateTime LastSuccessfulSyncTime() const;
    void LastSuccessfulSyncTime(Windows::Foundation::DateTime const& value) const;
    Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncStatus Status() const;
    void Status(Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncStatus const& value) const;
    Windows::Foundation::IAsyncOperation<bool> SyncAsync() const;
    event_token SyncStatusChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager, Windows::Foundation::IInspectable> const& handler) const;
    using SyncStatusChanged_revoker = event_revoker<Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager>;
    SyncStatusChanged_revoker SyncStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager, Windows::Foundation::IInspectable> const& handler) const;
    void SyncStatusChanged(event_token const& token) const;
};
template <> struct consume<Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskListSyncManager<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskManager
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskStore> RequestStoreAsync(Windows::ApplicationModel::UserDataTasks::UserDataTaskStoreAccessType const& accessType) const;
    Windows::System::User User() const;
};
template <> struct consume<Windows::ApplicationModel::UserDataTasks::IUserDataTaskManager> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskManager<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskManagerStatics
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskManager GetDefault() const;
    Windows::ApplicationModel::UserDataTasks::UserDataTaskManager GetForUser(Windows::System::User const& user) const;
};
template <> struct consume<Windows::ApplicationModel::UserDataTasks::IUserDataTaskManagerStatics> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskManagerStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskQueryOptions
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskQuerySortProperty SortProperty() const;
    void SortProperty(Windows::ApplicationModel::UserDataTasks::UserDataTaskQuerySortProperty const& value) const;
    Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryKind Kind() const;
    void Kind(Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryKind const& value) const;
};
template <> struct consume<Windows::ApplicationModel::UserDataTasks::IUserDataTaskQueryOptions> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskQueryOptions<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskReader
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskBatch> ReadBatchAsync() const;
};
template <> struct consume<Windows::ApplicationModel::UserDataTasks::IUserDataTaskReader> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskReader<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRecurrenceProperties
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceUnit Unit() const;
    void Unit(Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceUnit const& value) const;
    Windows::Foundation::IReference<int32_t> Occurrences() const;
    void Occurrences(optional<int32_t> const& value) const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> Until() const;
    void Until(optional<Windows::Foundation::DateTime> const& value) const;
    int32_t Interval() const;
    void Interval(int32_t value) const;
    Windows::Foundation::IReference<Windows::ApplicationModel::UserDataTasks::UserDataTaskDaysOfWeek> DaysOfWeek() const;
    void DaysOfWeek(optional<Windows::ApplicationModel::UserDataTasks::UserDataTaskDaysOfWeek> const& value) const;
    Windows::Foundation::IReference<Windows::ApplicationModel::UserDataTasks::UserDataTaskWeekOfMonth> WeekOfMonth() const;
    void WeekOfMonth(optional<Windows::ApplicationModel::UserDataTasks::UserDataTaskWeekOfMonth> const& value) const;
    Windows::Foundation::IReference<int32_t> Month() const;
    void Month(optional<int32_t> const& value) const;
    Windows::Foundation::IReference<int32_t> Day() const;
    void Day(optional<int32_t> const& value) const;
};
template <> struct consume<Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRecurrenceProperties<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRegenerationProperties
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationUnit Unit() const;
    void Unit(Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationUnit const& value) const;
    Windows::Foundation::IReference<int32_t> Occurrences() const;
    void Occurrences(optional<int32_t> const& value) const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> Until() const;
    void Until(optional<Windows::Foundation::DateTime> const& value) const;
    int32_t Interval() const;
    void Interval(int32_t value) const;
};
template <> struct consume<Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRegenerationProperties<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskStore
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskList> CreateListAsync(param::hstring const& name) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskList> CreateListAsync(param::hstring const& name, param::hstring const& userDataAccountId) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataTasks::UserDataTaskList>> FindListsAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskList> GetListAsync(param::hstring const& taskListId) const;
};
template <> struct consume<Windows::ApplicationModel::UserDataTasks::IUserDataTaskStore> { template <typename D> using type = consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskStore<D>; };

template <> struct abi<Windows::ApplicationModel::UserDataTasks::IUserDataTask>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ListId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RemoteId(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_RemoteId(HSTRING value) = 0;
    virtual HRESULT __stdcall get_CompletedDate(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_CompletedDate(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Details(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Details(HSTRING value) = 0;
    virtual HRESULT __stdcall get_DetailsKind(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskDetailsKind>* value) = 0;
    virtual HRESULT __stdcall put_DetailsKind(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskDetailsKind> value) = 0;
    virtual HRESULT __stdcall get_DueDate(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_DueDate(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Kind(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskKind>* value) = 0;
    virtual HRESULT __stdcall get_Priority(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskPriority>* value) = 0;
    virtual HRESULT __stdcall put_Priority(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskPriority> value) = 0;
    virtual HRESULT __stdcall get_RecurrenceProperties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_RecurrenceProperties(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_RegenerationProperties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_RegenerationProperties(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Reminder(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Reminder(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Sensitivity(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskSensitivity>* value) = 0;
    virtual HRESULT __stdcall put_Sensitivity(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskSensitivity> value) = 0;
    virtual HRESULT __stdcall get_Subject(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Subject(HSTRING value) = 0;
    virtual HRESULT __stdcall get_StartDate(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_StartDate(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataTasks::IUserDataTaskBatch>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Tasks(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataTasks::IUserDataTaskList>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_UserDataAccountId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_DisplayName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_SourceDisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_OtherAppReadAccess(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppReadAccess>* value) = 0;
    virtual HRESULT __stdcall put_OtherAppReadAccess(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppReadAccess> value) = 0;
    virtual HRESULT __stdcall get_OtherAppWriteAccess(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppWriteAccess>* value) = 0;
    virtual HRESULT __stdcall put_OtherAppWriteAccess(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppWriteAccess> value) = 0;
    virtual HRESULT __stdcall get_LimitedWriteOperations(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SyncManager(::IUnknown** value) = 0;
    virtual HRESULT __stdcall RegisterSyncManagerAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetTaskReader(::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetTaskReaderWithOptions(::IUnknown* options, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetTaskAsync(HSTRING userDataTask, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SaveTaskAsync(::IUnknown* userDataTask, ::IUnknown** action) = 0;
    virtual HRESULT __stdcall DeleteTaskAsync(HSTRING userDataTaskId, ::IUnknown** action) = 0;
    virtual HRESULT __stdcall DeleteAsync(::IUnknown** asyncAction) = 0;
    virtual HRESULT __stdcall SaveAsync(::IUnknown** asyncAction) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataTasks::IUserDataTaskListLimitedWriteOperations>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall TryCompleteTaskAsync(HSTRING userDataTaskId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall TryCreateOrUpdateTaskAsync(::IUnknown* userDataTask, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall TryDeleteTaskAsync(HSTRING userDataTaskId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall TrySkipOccurrenceAsync(HSTRING userDataTaskId, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LastAttemptedSyncTime(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall put_LastAttemptedSyncTime(abi_t<Windows::Foundation::DateTime> value) = 0;
    virtual HRESULT __stdcall get_LastSuccessfulSyncTime(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall put_LastSuccessfulSyncTime(abi_t<Windows::Foundation::DateTime> value) = 0;
    virtual HRESULT __stdcall get_Status(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncStatus>* value) = 0;
    virtual HRESULT __stdcall put_Status(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncStatus> value) = 0;
    virtual HRESULT __stdcall SyncAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall add_SyncStatusChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_SyncStatusChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataTasks::IUserDataTaskManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RequestStoreAsync(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskStoreAccessType> accessType, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall get_User(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataTasks::IUserDataTaskManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetForUser(::IUnknown* user, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataTasks::IUserDataTaskQueryOptions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SortProperty(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskQuerySortProperty>* value) = 0;
    virtual HRESULT __stdcall put_SortProperty(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskQuerySortProperty> value) = 0;
    virtual HRESULT __stdcall get_Kind(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryKind>* value) = 0;
    virtual HRESULT __stdcall put_Kind(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryKind> value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataTasks::IUserDataTaskReader>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ReadBatchAsync(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Unit(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceUnit>* value) = 0;
    virtual HRESULT __stdcall put_Unit(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceUnit> value) = 0;
    virtual HRESULT __stdcall get_Occurrences(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Occurrences(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Until(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Until(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Interval(int32_t* value) = 0;
    virtual HRESULT __stdcall put_Interval(int32_t value) = 0;
    virtual HRESULT __stdcall get_DaysOfWeek(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_DaysOfWeek(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_WeekOfMonth(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_WeekOfMonth(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Month(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Month(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Day(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Day(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Unit(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationUnit>* value) = 0;
    virtual HRESULT __stdcall put_Unit(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationUnit> value) = 0;
    virtual HRESULT __stdcall get_Occurrences(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Occurrences(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Until(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Until(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Interval(int32_t* value) = 0;
    virtual HRESULT __stdcall put_Interval(int32_t value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::UserDataTasks::IUserDataTaskStore>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateListAsync(HSTRING name, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateListInAccountAsync(HSTRING name, HSTRING userDataAccountId, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall FindListsAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetListAsync(HSTRING taskListId, ::IUnknown** operation) = 0;
};};

}
