// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::UserDataTasks {

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

namespace Windows::ApplicationModel::UserDataTasks {

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

namespace Windows::ApplicationModel::UserDataTasks {

template <typename T> struct impl_IUserDataTask;
template <typename T> struct impl_IUserDataTaskBatch;
template <typename T> struct impl_IUserDataTaskList;
template <typename T> struct impl_IUserDataTaskListLimitedWriteOperations;
template <typename T> struct impl_IUserDataTaskListSyncManager;
template <typename T> struct impl_IUserDataTaskManager;
template <typename T> struct impl_IUserDataTaskManagerStatics;
template <typename T> struct impl_IUserDataTaskQueryOptions;
template <typename T> struct impl_IUserDataTaskReader;
template <typename T> struct impl_IUserDataTaskRecurrenceProperties;
template <typename T> struct impl_IUserDataTaskRegenerationProperties;
template <typename T> struct impl_IUserDataTaskStore;

}

namespace Windows::ApplicationModel::UserDataTasks {

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

}

}
