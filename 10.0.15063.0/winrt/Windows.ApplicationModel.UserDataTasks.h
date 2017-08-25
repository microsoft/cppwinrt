// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.ApplicationModel.UserDataTasks.2.h"
#include "winrt/Windows.ApplicationModel.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_ApplicationModel_UserDataTasks_IUserDataTask<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTask)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_UserDataTasks_IUserDataTask<D>::ListId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTask)->get_ListId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_UserDataTasks_IUserDataTask<D>::RemoteId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTask)->get_RemoteId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataTasks_IUserDataTask<D>::RemoteId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTask)->put_RemoteId(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_ApplicationModel_UserDataTasks_IUserDataTask<D>::CompletedDate() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTask)->get_CompletedDate(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataTasks_IUserDataTask<D>::CompletedDate(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTask)->put_CompletedDate(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_UserDataTasks_IUserDataTask<D>::Details() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTask)->get_Details(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataTasks_IUserDataTask<D>::Details(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTask)->put_Details(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskDetailsKind consume_Windows_ApplicationModel_UserDataTasks_IUserDataTask<D>::DetailsKind() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskDetailsKind value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTask)->get_DetailsKind(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataTasks_IUserDataTask<D>::DetailsKind(Windows::ApplicationModel::UserDataTasks::UserDataTaskDetailsKind const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTask)->put_DetailsKind(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_ApplicationModel_UserDataTasks_IUserDataTask<D>::DueDate() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTask)->get_DueDate(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataTasks_IUserDataTask<D>::DueDate(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTask)->put_DueDate(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskKind consume_Windows_ApplicationModel_UserDataTasks_IUserDataTask<D>::Kind() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskKind value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTask)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskPriority consume_Windows_ApplicationModel_UserDataTasks_IUserDataTask<D>::Priority() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskPriority value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTask)->get_Priority(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataTasks_IUserDataTask<D>::Priority(Windows::ApplicationModel::UserDataTasks::UserDataTaskPriority const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTask)->put_Priority(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceProperties consume_Windows_ApplicationModel_UserDataTasks_IUserDataTask<D>::RecurrenceProperties() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTask)->get_RecurrenceProperties(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataTasks_IUserDataTask<D>::RecurrenceProperties(Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceProperties const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTask)->put_RecurrenceProperties(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationProperties consume_Windows_ApplicationModel_UserDataTasks_IUserDataTask<D>::RegenerationProperties() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTask)->get_RegenerationProperties(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataTasks_IUserDataTask<D>::RegenerationProperties(Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationProperties const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTask)->put_RegenerationProperties(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_ApplicationModel_UserDataTasks_IUserDataTask<D>::Reminder() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTask)->get_Reminder(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataTasks_IUserDataTask<D>::Reminder(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTask)->put_Reminder(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskSensitivity consume_Windows_ApplicationModel_UserDataTasks_IUserDataTask<D>::Sensitivity() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskSensitivity value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTask)->get_Sensitivity(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataTasks_IUserDataTask<D>::Sensitivity(Windows::ApplicationModel::UserDataTasks::UserDataTaskSensitivity const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTask)->put_Sensitivity(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_UserDataTasks_IUserDataTask<D>::Subject() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTask)->get_Subject(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataTasks_IUserDataTask<D>::Subject(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTask)->put_Subject(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_ApplicationModel_UserDataTasks_IUserDataTask<D>::StartDate() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTask)->get_StartDate(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataTasks_IUserDataTask<D>::StartDate(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTask)->put_StartDate(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataTasks::UserDataTask> consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskBatch<D>::Tasks() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataTasks::UserDataTask> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskBatch)->get_Tasks(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskList<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskList)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskList<D>::UserDataAccountId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskList)->get_UserDataAccountId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskList<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskList)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskList<D>::DisplayName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskList)->put_DisplayName(get_abi(value)));
}

template <typename D> hstring consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskList<D>::SourceDisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskList)->get_SourceDisplayName(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppReadAccess consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskList<D>::OtherAppReadAccess() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppReadAccess value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskList)->get_OtherAppReadAccess(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskList<D>::OtherAppReadAccess(Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppReadAccess const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskList)->put_OtherAppReadAccess(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppWriteAccess consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskList<D>::OtherAppWriteAccess() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppWriteAccess value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskList)->get_OtherAppWriteAccess(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskList<D>::OtherAppWriteAccess(Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppWriteAccess const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskList)->put_OtherAppWriteAccess(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskListLimitedWriteOperations consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskList<D>::LimitedWriteOperations() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskListLimitedWriteOperations value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskList)->get_LimitedWriteOperations(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskList<D>::SyncManager() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskList)->get_SyncManager(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskList<D>::RegisterSyncManagerAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskList)->RegisterSyncManagerAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskReader consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskList<D>::GetTaskReader() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskReader result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskList)->GetTaskReader(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskReader consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskList<D>::GetTaskReader(Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryOptions const& options) const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskReader value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskList)->GetTaskReaderWithOptions(get_abi(options), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTask> consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskList<D>::GetTaskAsync(param::hstring const& userDataTask) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTask> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskList)->GetTaskAsync(get_abi(userDataTask), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskList<D>::SaveTaskAsync(Windows::ApplicationModel::UserDataTasks::UserDataTask const& userDataTask) const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskList)->SaveTaskAsync(get_abi(userDataTask), put_abi(action)));
    return action;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskList<D>::DeleteTaskAsync(param::hstring const& userDataTaskId) const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskList)->DeleteTaskAsync(get_abi(userDataTaskId), put_abi(action)));
    return action;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskList<D>::DeleteAsync() const
{
    Windows::Foundation::IAsyncAction asyncAction{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskList)->DeleteAsync(put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskList<D>::SaveAsync() const
{
    Windows::Foundation::IAsyncAction asyncAction{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskList)->SaveAsync(put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskListLimitedWriteOperations<D>::TryCompleteTaskAsync(param::hstring const& userDataTaskId) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskListLimitedWriteOperations)->TryCompleteTaskAsync(get_abi(userDataTaskId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskListLimitedWriteOperations<D>::TryCreateOrUpdateTaskAsync(Windows::ApplicationModel::UserDataTasks::UserDataTask const& userDataTask) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskListLimitedWriteOperations)->TryCreateOrUpdateTaskAsync(get_abi(userDataTask), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskListLimitedWriteOperations<D>::TryDeleteTaskAsync(param::hstring const& userDataTaskId) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskListLimitedWriteOperations)->TryDeleteTaskAsync(get_abi(userDataTaskId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskListLimitedWriteOperations<D>::TrySkipOccurrenceAsync(param::hstring const& userDataTaskId) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskListLimitedWriteOperations)->TrySkipOccurrenceAsync(get_abi(userDataTaskId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskListSyncManager<D>::LastAttemptedSyncTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager)->get_LastAttemptedSyncTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskListSyncManager<D>::LastAttemptedSyncTime(Windows::Foundation::DateTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager)->put_LastAttemptedSyncTime(get_abi(value)));
}

template <typename D> Windows::Foundation::DateTime consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskListSyncManager<D>::LastSuccessfulSyncTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager)->get_LastSuccessfulSyncTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskListSyncManager<D>::LastSuccessfulSyncTime(Windows::Foundation::DateTime const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager)->put_LastSuccessfulSyncTime(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncStatus consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskListSyncManager<D>::Status() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncStatus value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager)->get_Status(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskListSyncManager<D>::Status(Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncStatus const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager)->put_Status(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskListSyncManager<D>::SyncAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager)->SyncAsync(put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskListSyncManager<D>::SyncStatusChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager)->add_SyncStatusChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager> consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskListSyncManager<D>::SyncStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager>(this, &abi_t<Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager>::remove_SyncStatusChanged, SyncStatusChanged(handler));
}

template <typename D> void consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskListSyncManager<D>::SyncStatusChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager)->remove_SyncStatusChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskStore> consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskManager<D>::RequestStoreAsync(Windows::ApplicationModel::UserDataTasks::UserDataTaskStoreAccessType const& accessType) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskStore> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskManager)->RequestStoreAsync(get_abi(accessType), put_abi(operation)));
    return operation;
}

template <typename D> Windows::System::User consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskManager<D>::User() const
{
    Windows::System::User value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskManager)->get_User(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskManager consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskManagerStatics<D>::GetDefault() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskManager result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskManagerStatics)->GetDefault(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskManager consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskManagerStatics<D>::GetForUser(Windows::System::User const& user) const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskManager result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskManagerStatics)->GetForUser(get_abi(user), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskQuerySortProperty consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskQueryOptions<D>::SortProperty() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskQuerySortProperty value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskQueryOptions)->get_SortProperty(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskQueryOptions<D>::SortProperty(Windows::ApplicationModel::UserDataTasks::UserDataTaskQuerySortProperty const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskQueryOptions)->put_SortProperty(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryKind consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskQueryOptions<D>::Kind() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryKind value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskQueryOptions)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskQueryOptions<D>::Kind(Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryKind const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskQueryOptions)->put_Kind(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskBatch> consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskReader<D>::ReadBatchAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskBatch> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskReader)->ReadBatchAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceUnit consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRecurrenceProperties<D>::Unit() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceUnit value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties)->get_Unit(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRecurrenceProperties<D>::Unit(Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceUnit const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties)->put_Unit(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRecurrenceProperties<D>::Occurrences() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties)->get_Occurrences(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRecurrenceProperties<D>::Occurrences(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties)->put_Occurrences(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRecurrenceProperties<D>::Until() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties)->get_Until(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRecurrenceProperties<D>::Until(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties)->put_Until(get_abi(value)));
}

template <typename D> int32_t consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRecurrenceProperties<D>::Interval() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties)->get_Interval(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRecurrenceProperties<D>::Interval(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties)->put_Interval(value));
}

template <typename D> Windows::Foundation::IReference<Windows::ApplicationModel::UserDataTasks::UserDataTaskDaysOfWeek> consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRecurrenceProperties<D>::DaysOfWeek() const
{
    Windows::Foundation::IReference<Windows::ApplicationModel::UserDataTasks::UserDataTaskDaysOfWeek> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties)->get_DaysOfWeek(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRecurrenceProperties<D>::DaysOfWeek(optional<Windows::ApplicationModel::UserDataTasks::UserDataTaskDaysOfWeek> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties)->put_DaysOfWeek(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::ApplicationModel::UserDataTasks::UserDataTaskWeekOfMonth> consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRecurrenceProperties<D>::WeekOfMonth() const
{
    Windows::Foundation::IReference<Windows::ApplicationModel::UserDataTasks::UserDataTaskWeekOfMonth> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties)->get_WeekOfMonth(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRecurrenceProperties<D>::WeekOfMonth(optional<Windows::ApplicationModel::UserDataTasks::UserDataTaskWeekOfMonth> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties)->put_WeekOfMonth(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRecurrenceProperties<D>::Month() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties)->get_Month(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRecurrenceProperties<D>::Month(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties)->put_Month(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRecurrenceProperties<D>::Day() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties)->get_Day(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRecurrenceProperties<D>::Day(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties)->put_Day(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationUnit consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRegenerationProperties<D>::Unit() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationUnit value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties)->get_Unit(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRegenerationProperties<D>::Unit(Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationUnit const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties)->put_Unit(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRegenerationProperties<D>::Occurrences() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties)->get_Occurrences(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRegenerationProperties<D>::Occurrences(optional<int32_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties)->put_Occurrences(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRegenerationProperties<D>::Until() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties)->get_Until(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRegenerationProperties<D>::Until(optional<Windows::Foundation::DateTime> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties)->put_Until(get_abi(value)));
}

template <typename D> int32_t consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRegenerationProperties<D>::Interval() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties)->get_Interval(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskRegenerationProperties<D>::Interval(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties)->put_Interval(value));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskList> consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskStore<D>::CreateListAsync(param::hstring const& name) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskList> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskStore)->CreateListAsync(get_abi(name), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskList> consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskStore<D>::CreateListAsync(param::hstring const& name, param::hstring const& userDataAccountId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskList> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskStore)->CreateListInAccountAsync(get_abi(name), get_abi(userDataAccountId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataTasks::UserDataTaskList>> consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskStore<D>::FindListsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataTasks::UserDataTaskList>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskStore)->FindListsAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskList> consume_Windows_ApplicationModel_UserDataTasks_IUserDataTaskStore<D>::GetListAsync(param::hstring const& taskListId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskList> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataTasks::IUserDataTaskStore)->GetListAsync(get_abi(taskListId), put_abi(operation)));
    return operation;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::UserDataTasks::IUserDataTask> : produce_base<D, Windows::ApplicationModel::UserDataTasks::IUserDataTask>
{
    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ListId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ListId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RemoteId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RemoteId(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoteId(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CompletedDate(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CompletedDate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CompletedDate(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CompletedDate(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Details(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Details());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Details(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Details(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DetailsKind(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskDetailsKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DetailsKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DetailsKind(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskDetailsKind> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DetailsKind(*reinterpret_cast<Windows::ApplicationModel::UserDataTasks::UserDataTaskDetailsKind const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DueDate(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DueDate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DueDate(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DueDate(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Priority(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskPriority>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Priority());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Priority(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskPriority> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Priority(*reinterpret_cast<Windows::ApplicationModel::UserDataTasks::UserDataTaskPriority const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RecurrenceProperties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RecurrenceProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RecurrenceProperties(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RecurrenceProperties(*reinterpret_cast<Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceProperties const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RegenerationProperties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RegenerationProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RegenerationProperties(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegenerationProperties(*reinterpret_cast<Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationProperties const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Reminder(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Reminder());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Reminder(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Reminder(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sensitivity(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskSensitivity>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Sensitivity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Sensitivity(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskSensitivity> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Sensitivity(*reinterpret_cast<Windows::ApplicationModel::UserDataTasks::UserDataTaskSensitivity const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Subject(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Subject());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Subject(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Subject(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StartDate(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StartDate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StartDate(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartDate(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::UserDataTasks::IUserDataTaskBatch> : produce_base<D, Windows::ApplicationModel::UserDataTasks::IUserDataTaskBatch>
{
    HRESULT __stdcall get_Tasks(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Tasks());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::UserDataTasks::IUserDataTaskList> : produce_base<D, Windows::ApplicationModel::UserDataTasks::IUserDataTaskList>
{
    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserDataAccountId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UserDataAccountId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourceDisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SourceDisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OtherAppReadAccess(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppReadAccess>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OtherAppReadAccess());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OtherAppReadAccess(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppReadAccess> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OtherAppReadAccess(*reinterpret_cast<Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppReadAccess const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OtherAppWriteAccess(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppWriteAccess>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OtherAppWriteAccess());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OtherAppWriteAccess(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppWriteAccess> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OtherAppWriteAccess(*reinterpret_cast<Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppWriteAccess const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LimitedWriteOperations(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LimitedWriteOperations());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SyncManager(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SyncManager());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RegisterSyncManagerAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RegisterSyncManagerAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetTaskReader(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetTaskReader());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetTaskReaderWithOptions(::IUnknown* options, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetTaskReader(*reinterpret_cast<Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetTaskAsync(HSTRING userDataTask, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetTaskAsync(*reinterpret_cast<hstring const*>(&userDataTask)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SaveTaskAsync(::IUnknown* userDataTask, ::IUnknown** action) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *action = detach_abi(this->shim().SaveTaskAsync(*reinterpret_cast<Windows::ApplicationModel::UserDataTasks::UserDataTask const*>(&userDataTask)));
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeleteTaskAsync(HSTRING userDataTaskId, ::IUnknown** action) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *action = detach_abi(this->shim().DeleteTaskAsync(*reinterpret_cast<hstring const*>(&userDataTaskId)));
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeleteAsync(::IUnknown** asyncAction) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_abi(this->shim().DeleteAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SaveAsync(::IUnknown** asyncAction) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncAction = detach_abi(this->shim().SaveAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncAction = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::UserDataTasks::IUserDataTaskListLimitedWriteOperations> : produce_base<D, Windows::ApplicationModel::UserDataTasks::IUserDataTaskListLimitedWriteOperations>
{
    HRESULT __stdcall TryCompleteTaskAsync(HSTRING userDataTaskId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TryCompleteTaskAsync(*reinterpret_cast<hstring const*>(&userDataTaskId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryCreateOrUpdateTaskAsync(::IUnknown* userDataTask, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TryCreateOrUpdateTaskAsync(*reinterpret_cast<Windows::ApplicationModel::UserDataTasks::UserDataTask const*>(&userDataTask)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryDeleteTaskAsync(HSTRING userDataTaskId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TryDeleteTaskAsync(*reinterpret_cast<hstring const*>(&userDataTaskId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TrySkipOccurrenceAsync(HSTRING userDataTaskId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TrySkipOccurrenceAsync(*reinterpret_cast<hstring const*>(&userDataTaskId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager> : produce_base<D, Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager>
{
    HRESULT __stdcall get_LastAttemptedSyncTime(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LastAttemptedSyncTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LastAttemptedSyncTime(abi_t<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LastAttemptedSyncTime(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastSuccessfulSyncTime(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LastSuccessfulSyncTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LastSuccessfulSyncTime(abi_t<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LastSuccessfulSyncTime(*reinterpret_cast<Windows::Foundation::DateTime const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Status(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncStatus> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Status(*reinterpret_cast<Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncStatus const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SyncAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SyncAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SyncStatusChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SyncStatusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SyncStatusChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SyncStatusChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::UserDataTasks::IUserDataTaskManager> : produce_base<D, Windows::ApplicationModel::UserDataTasks::IUserDataTaskManager>
{
    HRESULT __stdcall RequestStoreAsync(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskStoreAccessType> accessType, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestStoreAsync(*reinterpret_cast<Windows::ApplicationModel::UserDataTasks::UserDataTaskStoreAccessType const*>(&accessType)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_User(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().User());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::UserDataTasks::IUserDataTaskManagerStatics> : produce_base<D, Windows::ApplicationModel::UserDataTasks::IUserDataTaskManagerStatics>
{
    HRESULT __stdcall GetDefault(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetForUser(::IUnknown* user, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetForUser(*reinterpret_cast<Windows::System::User const*>(&user)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::UserDataTasks::IUserDataTaskQueryOptions> : produce_base<D, Windows::ApplicationModel::UserDataTasks::IUserDataTaskQueryOptions>
{
    HRESULT __stdcall get_SortProperty(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskQuerySortProperty>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SortProperty());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SortProperty(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskQuerySortProperty> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SortProperty(*reinterpret_cast<Windows::ApplicationModel::UserDataTasks::UserDataTaskQuerySortProperty const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Kind(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryKind> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Kind(*reinterpret_cast<Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryKind const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::UserDataTasks::IUserDataTaskReader> : produce_base<D, Windows::ApplicationModel::UserDataTasks::IUserDataTaskReader>
{
    HRESULT __stdcall ReadBatchAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReadBatchAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties> : produce_base<D, Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties>
{
    HRESULT __stdcall get_Unit(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceUnit>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Unit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Unit(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceUnit> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Unit(*reinterpret_cast<Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceUnit const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Occurrences(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Occurrences());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Occurrences(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Occurrences(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Until(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Until());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Until(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Until(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Interval(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Interval());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Interval(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Interval(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DaysOfWeek(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DaysOfWeek());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DaysOfWeek(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DaysOfWeek(*reinterpret_cast<Windows::Foundation::IReference<Windows::ApplicationModel::UserDataTasks::UserDataTaskDaysOfWeek> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WeekOfMonth(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WeekOfMonth());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_WeekOfMonth(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WeekOfMonth(*reinterpret_cast<Windows::Foundation::IReference<Windows::ApplicationModel::UserDataTasks::UserDataTaskWeekOfMonth> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Month(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Month());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Month(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Month(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Day(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Day());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Day(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Day(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties> : produce_base<D, Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties>
{
    HRESULT __stdcall get_Unit(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationUnit>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Unit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Unit(abi_t<Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationUnit> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Unit(*reinterpret_cast<Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationUnit const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Occurrences(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Occurrences());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Occurrences(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Occurrences(*reinterpret_cast<Windows::Foundation::IReference<int32_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Until(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Until());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Until(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Until(*reinterpret_cast<Windows::Foundation::IReference<Windows::Foundation::DateTime> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Interval(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Interval());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Interval(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Interval(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::UserDataTasks::IUserDataTaskStore> : produce_base<D, Windows::ApplicationModel::UserDataTasks::IUserDataTaskStore>
{
    HRESULT __stdcall CreateListAsync(HSTRING name, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateListAsync(*reinterpret_cast<hstring const*>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateListInAccountAsync(HSTRING name, HSTRING userDataAccountId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateListAsync(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&userDataAccountId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindListsAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FindListsAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetListAsync(HSTRING taskListId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetListAsync(*reinterpret_cast<hstring const*>(&taskListId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserDataTasks {

inline UserDataTask::UserDataTask() :
    UserDataTask(activate_instance<UserDataTask>())
{}

inline Windows::ApplicationModel::UserDataTasks::UserDataTaskManager UserDataTaskManager::GetDefault()
{
    return get_activation_factory<UserDataTaskManager, Windows::ApplicationModel::UserDataTasks::IUserDataTaskManagerStatics>().GetDefault();
}

inline Windows::ApplicationModel::UserDataTasks::UserDataTaskManager UserDataTaskManager::GetForUser(Windows::System::User const& user)
{
    return get_activation_factory<UserDataTaskManager, Windows::ApplicationModel::UserDataTasks::IUserDataTaskManagerStatics>().GetForUser(user);
}

inline UserDataTaskQueryOptions::UserDataTaskQueryOptions() :
    UserDataTaskQueryOptions(activate_instance<UserDataTaskQueryOptions>())
{}

inline UserDataTaskRecurrenceProperties::UserDataTaskRecurrenceProperties() :
    UserDataTaskRecurrenceProperties(activate_instance<UserDataTaskRecurrenceProperties>())
{}

inline UserDataTaskRegenerationProperties::UserDataTaskRegenerationProperties() :
    UserDataTaskRegenerationProperties(activate_instance<UserDataTaskRegenerationProperties>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTask> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTask> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskBatch> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskBatch> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskList> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskList> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskListLimitedWriteOperations> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskListLimitedWriteOperations> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskManager> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskManagerStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskQueryOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskQueryOptions> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskReader> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskStore> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskStore> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTask> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTask> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskBatch> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskBatch> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskList> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskList> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskListLimitedWriteOperations> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskListLimitedWriteOperations> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskManager> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryOptions> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskReader> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceProperties> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationProperties> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskStore> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskStore> {};

}

WINRT_WARNING_POP
