// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.System.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.ApplicationModel.UserDataTasks.3.h"
#include "Windows.ApplicationModel.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::UserDataTasks::IUserDataTask> : produce_base<D, Windows::ApplicationModel::UserDataTasks::IUserDataTask>
{
    HRESULT __stdcall get_Id(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_ListId(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_RemoteId(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall put_RemoteId(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoteId(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CompletedDate(impl::abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
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

    HRESULT __stdcall put_CompletedDate(impl::abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CompletedDate(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::DateTime> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Details(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall put_Details(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Details(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DetailsKind(Windows::ApplicationModel::UserDataTasks::UserDataTaskDetailsKind * value) noexcept override
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

    HRESULT __stdcall put_DetailsKind(Windows::ApplicationModel::UserDataTasks::UserDataTaskDetailsKind value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DetailsKind(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DueDate(impl::abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
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

    HRESULT __stdcall put_DueDate(impl::abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DueDate(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::DateTime> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(Windows::ApplicationModel::UserDataTasks::UserDataTaskKind * value) noexcept override
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

    HRESULT __stdcall get_Priority(Windows::ApplicationModel::UserDataTasks::UserDataTaskPriority * value) noexcept override
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

    HRESULT __stdcall put_Priority(Windows::ApplicationModel::UserDataTasks::UserDataTaskPriority value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Priority(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RecurrenceProperties(impl::abi_arg_out<Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties> value) noexcept override
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

    HRESULT __stdcall put_RecurrenceProperties(impl::abi_arg_in<Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RecurrenceProperties(*reinterpret_cast<const Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceProperties *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RegenerationProperties(impl::abi_arg_out<Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties> value) noexcept override
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

    HRESULT __stdcall put_RegenerationProperties(impl::abi_arg_in<Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegenerationProperties(*reinterpret_cast<const Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationProperties *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Reminder(impl::abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
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

    HRESULT __stdcall put_Reminder(impl::abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Reminder(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::DateTime> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sensitivity(Windows::ApplicationModel::UserDataTasks::UserDataTaskSensitivity * value) noexcept override
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

    HRESULT __stdcall put_Sensitivity(Windows::ApplicationModel::UserDataTasks::UserDataTaskSensitivity value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Sensitivity(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Subject(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall put_Subject(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Subject(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StartDate(impl::abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
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

    HRESULT __stdcall put_StartDate(impl::abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartDate(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::DateTime> *>(&value));
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
    HRESULT __stdcall get_Tasks(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataTasks::UserDataTask>> value) noexcept override
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
    HRESULT __stdcall get_Id(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_UserDataAccountId(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_DisplayName(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall put_DisplayName(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourceDisplayName(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_OtherAppReadAccess(Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppReadAccess * value) noexcept override
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

    HRESULT __stdcall put_OtherAppReadAccess(Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppReadAccess value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OtherAppReadAccess(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OtherAppWriteAccess(Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppWriteAccess * value) noexcept override
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

    HRESULT __stdcall put_OtherAppWriteAccess(Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppWriteAccess value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OtherAppWriteAccess(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LimitedWriteOperations(impl::abi_arg_out<Windows::ApplicationModel::UserDataTasks::IUserDataTaskListLimitedWriteOperations> value) noexcept override
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

    HRESULT __stdcall get_SyncManager(impl::abi_arg_out<Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager> value) noexcept override
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

    HRESULT __stdcall abi_RegisterSyncManagerAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
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

    HRESULT __stdcall abi_GetTaskReader(impl::abi_arg_out<Windows::ApplicationModel::UserDataTasks::IUserDataTaskReader> result) noexcept override
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

    HRESULT __stdcall abi_GetTaskReaderWithOptions(impl::abi_arg_in<Windows::ApplicationModel::UserDataTasks::IUserDataTaskQueryOptions> options, impl::abi_arg_out<Windows::ApplicationModel::UserDataTasks::IUserDataTaskReader> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetTaskReader(*reinterpret_cast<const Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryOptions *>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetTaskAsync(impl::abi_arg_in<hstring> userDataTask, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTask>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetTaskAsync(*reinterpret_cast<const hstring *>(&userDataTask)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SaveTaskAsync(impl::abi_arg_in<Windows::ApplicationModel::UserDataTasks::IUserDataTask> userDataTask, impl::abi_arg_out<Windows::Foundation::IAsyncAction> action) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *action = detach_abi(this->shim().SaveTaskAsync(*reinterpret_cast<const Windows::ApplicationModel::UserDataTasks::UserDataTask *>(&userDataTask)));
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteTaskAsync(impl::abi_arg_in<hstring> userDataTaskId, impl::abi_arg_out<Windows::Foundation::IAsyncAction> action) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *action = detach_abi(this->shim().DeleteTaskAsync(*reinterpret_cast<const hstring *>(&userDataTaskId)));
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> asyncAction) noexcept override
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

    HRESULT __stdcall abi_SaveAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> asyncAction) noexcept override
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
    HRESULT __stdcall abi_TryCompleteTaskAsync(impl::abi_arg_in<hstring> userDataTaskId, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TryCompleteTaskAsync(*reinterpret_cast<const hstring *>(&userDataTaskId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryCreateOrUpdateTaskAsync(impl::abi_arg_in<Windows::ApplicationModel::UserDataTasks::IUserDataTask> userDataTask, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TryCreateOrUpdateTaskAsync(*reinterpret_cast<const Windows::ApplicationModel::UserDataTasks::UserDataTask *>(&userDataTask)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryDeleteTaskAsync(impl::abi_arg_in<hstring> userDataTaskId, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TryDeleteTaskAsync(*reinterpret_cast<const hstring *>(&userDataTaskId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TrySkipOccurrenceAsync(impl::abi_arg_in<hstring> userDataTaskId, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TrySkipOccurrenceAsync(*reinterpret_cast<const hstring *>(&userDataTaskId)));
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
    HRESULT __stdcall get_LastAttemptedSyncTime(impl::abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
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

    HRESULT __stdcall put_LastAttemptedSyncTime(impl::abi_arg_in<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LastAttemptedSyncTime(*reinterpret_cast<const Windows::Foundation::DateTime *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LastSuccessfulSyncTime(impl::abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
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

    HRESULT __stdcall put_LastSuccessfulSyncTime(impl::abi_arg_in<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LastSuccessfulSyncTime(*reinterpret_cast<const Windows::Foundation::DateTime *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncStatus * value) noexcept override
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

    HRESULT __stdcall put_Status(Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncStatus value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Status(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SyncAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> result) noexcept override
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

    HRESULT __stdcall add_SyncStatusChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager, Windows::Foundation::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SyncStatusChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager, Windows::Foundation::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SyncStatusChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SyncStatusChanged(token);
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
    HRESULT __stdcall abi_RequestStoreAsync(Windows::ApplicationModel::UserDataTasks::UserDataTaskStoreAccessType accessType, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskStore>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestStoreAsync(accessType));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_User(impl::abi_arg_out<Windows::System::IUser> value) noexcept override
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
    HRESULT __stdcall abi_GetDefault(impl::abi_arg_out<Windows::ApplicationModel::UserDataTasks::IUserDataTaskManager> result) noexcept override
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

    HRESULT __stdcall abi_GetForUser(impl::abi_arg_in<Windows::System::IUser> user, impl::abi_arg_out<Windows::ApplicationModel::UserDataTasks::IUserDataTaskManager> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetForUser(*reinterpret_cast<const Windows::System::User *>(&user)));
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
    HRESULT __stdcall get_SortProperty(Windows::ApplicationModel::UserDataTasks::UserDataTaskQuerySortProperty * value) noexcept override
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

    HRESULT __stdcall put_SortProperty(Windows::ApplicationModel::UserDataTasks::UserDataTaskQuerySortProperty value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SortProperty(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryKind * value) noexcept override
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

    HRESULT __stdcall put_Kind(Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryKind value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Kind(value);
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
    HRESULT __stdcall abi_ReadBatchAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskBatch>> result) noexcept override
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
    HRESULT __stdcall get_Unit(Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceUnit * value) noexcept override
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

    HRESULT __stdcall put_Unit(Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceUnit value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Unit(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Occurrences(impl::abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
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

    HRESULT __stdcall put_Occurrences(impl::abi_arg_in<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Occurrences(*reinterpret_cast<const Windows::Foundation::IReference<int32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Until(impl::abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
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

    HRESULT __stdcall put_Until(impl::abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Until(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::DateTime> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Interval(int32_t * value) noexcept override
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

    HRESULT __stdcall get_DaysOfWeek(impl::abi_arg_out<Windows::Foundation::IReference<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskDaysOfWeek>> value) noexcept override
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

    HRESULT __stdcall put_DaysOfWeek(impl::abi_arg_in<Windows::Foundation::IReference<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskDaysOfWeek>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DaysOfWeek(*reinterpret_cast<const Windows::Foundation::IReference<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskDaysOfWeek> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WeekOfMonth(impl::abi_arg_out<Windows::Foundation::IReference<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskWeekOfMonth>> value) noexcept override
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

    HRESULT __stdcall put_WeekOfMonth(impl::abi_arg_in<Windows::Foundation::IReference<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskWeekOfMonth>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WeekOfMonth(*reinterpret_cast<const Windows::Foundation::IReference<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskWeekOfMonth> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Month(impl::abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
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

    HRESULT __stdcall put_Month(impl::abi_arg_in<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Month(*reinterpret_cast<const Windows::Foundation::IReference<int32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Day(impl::abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
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

    HRESULT __stdcall put_Day(impl::abi_arg_in<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Day(*reinterpret_cast<const Windows::Foundation::IReference<int32_t> *>(&value));
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
    HRESULT __stdcall get_Unit(Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationUnit * value) noexcept override
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

    HRESULT __stdcall put_Unit(Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationUnit value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Unit(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Occurrences(impl::abi_arg_out<Windows::Foundation::IReference<int32_t>> value) noexcept override
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

    HRESULT __stdcall put_Occurrences(impl::abi_arg_in<Windows::Foundation::IReference<int32_t>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Occurrences(*reinterpret_cast<const Windows::Foundation::IReference<int32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Until(impl::abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
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

    HRESULT __stdcall put_Until(impl::abi_arg_in<Windows::Foundation::IReference<Windows::Foundation::DateTime>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Until(*reinterpret_cast<const Windows::Foundation::IReference<Windows::Foundation::DateTime> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Interval(int32_t * value) noexcept override
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
    HRESULT __stdcall abi_CreateListAsync(impl::abi_arg_in<hstring> name, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskList>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateListAsync(*reinterpret_cast<const hstring *>(&name)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateListInAccountAsync(impl::abi_arg_in<hstring> name, impl::abi_arg_in<hstring> userDataAccountId, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskList>> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateListAsync(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const hstring *>(&userDataAccountId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindListsAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataTasks::UserDataTaskList>>> operation) noexcept override
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

    HRESULT __stdcall abi_GetListAsync(impl::abi_arg_in<hstring> taskListId, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskList>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetListAsync(*reinterpret_cast<const hstring *>(&taskListId)));
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

namespace Windows::ApplicationModel::UserDataTasks {

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskManager impl_IUserDataTaskManagerStatics<D>::GetDefault() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskManager result { nullptr };
    check_hresult(WINRT_SHIM(IUserDataTaskManagerStatics)->abi_GetDefault(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskManager impl_IUserDataTaskManagerStatics<D>::GetForUser(const Windows::System::User & user) const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskManager result { nullptr };
    check_hresult(WINRT_SHIM(IUserDataTaskManagerStatics)->abi_GetForUser(get_abi(user), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskStore> impl_IUserDataTaskManager<D>::RequestStoreAsync(Windows::ApplicationModel::UserDataTasks::UserDataTaskStoreAccessType accessType) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskStore> operation;
    check_hresult(WINRT_SHIM(IUserDataTaskManager)->abi_RequestStoreAsync(accessType, put_abi(operation)));
    return operation;
}

template <typename D> Windows::System::User impl_IUserDataTaskManager<D>::User() const
{
    Windows::System::User value { nullptr };
    check_hresult(WINRT_SHIM(IUserDataTaskManager)->get_User(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskList> impl_IUserDataTaskStore<D>::CreateListAsync(hstring_view name) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskList> operation;
    check_hresult(WINRT_SHIM(IUserDataTaskStore)->abi_CreateListAsync(get_abi(name), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskList> impl_IUserDataTaskStore<D>::CreateListAsync(hstring_view name, hstring_view userDataAccountId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskList> result;
    check_hresult(WINRT_SHIM(IUserDataTaskStore)->abi_CreateListInAccountAsync(get_abi(name), get_abi(userDataAccountId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataTasks::UserDataTaskList>> impl_IUserDataTaskStore<D>::FindListsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataTasks::UserDataTaskList>> operation;
    check_hresult(WINRT_SHIM(IUserDataTaskStore)->abi_FindListsAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskList> impl_IUserDataTaskStore<D>::GetListAsync(hstring_view taskListId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskList> operation;
    check_hresult(WINRT_SHIM(IUserDataTaskStore)->abi_GetListAsync(get_abi(taskListId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskQuerySortProperty impl_IUserDataTaskQueryOptions<D>::SortProperty() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskQuerySortProperty value {};
    check_hresult(WINRT_SHIM(IUserDataTaskQueryOptions)->get_SortProperty(&value));
    return value;
}

template <typename D> void impl_IUserDataTaskQueryOptions<D>::SortProperty(Windows::ApplicationModel::UserDataTasks::UserDataTaskQuerySortProperty value) const
{
    check_hresult(WINRT_SHIM(IUserDataTaskQueryOptions)->put_SortProperty(value));
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryKind impl_IUserDataTaskQueryOptions<D>::Kind() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryKind value {};
    check_hresult(WINRT_SHIM(IUserDataTaskQueryOptions)->get_Kind(&value));
    return value;
}

template <typename D> void impl_IUserDataTaskQueryOptions<D>::Kind(Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryKind value) const
{
    check_hresult(WINRT_SHIM(IUserDataTaskQueryOptions)->put_Kind(value));
}

template <typename D> hstring impl_IUserDataTaskList<D>::Id() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IUserDataTaskList)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IUserDataTaskList<D>::UserDataAccountId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IUserDataTaskList)->get_UserDataAccountId(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IUserDataTaskList<D>::DisplayName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IUserDataTaskList)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> void impl_IUserDataTaskList<D>::DisplayName(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IUserDataTaskList)->put_DisplayName(get_abi(value)));
}

template <typename D> hstring impl_IUserDataTaskList<D>::SourceDisplayName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IUserDataTaskList)->get_SourceDisplayName(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppReadAccess impl_IUserDataTaskList<D>::OtherAppReadAccess() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppReadAccess value {};
    check_hresult(WINRT_SHIM(IUserDataTaskList)->get_OtherAppReadAccess(&value));
    return value;
}

template <typename D> void impl_IUserDataTaskList<D>::OtherAppReadAccess(Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppReadAccess value) const
{
    check_hresult(WINRT_SHIM(IUserDataTaskList)->put_OtherAppReadAccess(value));
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppWriteAccess impl_IUserDataTaskList<D>::OtherAppWriteAccess() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppWriteAccess value {};
    check_hresult(WINRT_SHIM(IUserDataTaskList)->get_OtherAppWriteAccess(&value));
    return value;
}

template <typename D> void impl_IUserDataTaskList<D>::OtherAppWriteAccess(Windows::ApplicationModel::UserDataTasks::UserDataTaskListOtherAppWriteAccess value) const
{
    check_hresult(WINRT_SHIM(IUserDataTaskList)->put_OtherAppWriteAccess(value));
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskListLimitedWriteOperations impl_IUserDataTaskList<D>::LimitedWriteOperations() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskListLimitedWriteOperations value { nullptr };
    check_hresult(WINRT_SHIM(IUserDataTaskList)->get_LimitedWriteOperations(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager impl_IUserDataTaskList<D>::SyncManager() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager value { nullptr };
    check_hresult(WINRT_SHIM(IUserDataTaskList)->get_SyncManager(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IUserDataTaskList<D>::RegisterSyncManagerAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(WINRT_SHIM(IUserDataTaskList)->abi_RegisterSyncManagerAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskReader impl_IUserDataTaskList<D>::GetTaskReader() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskReader result { nullptr };
    check_hresult(WINRT_SHIM(IUserDataTaskList)->abi_GetTaskReader(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskReader impl_IUserDataTaskList<D>::GetTaskReader(const Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryOptions & options) const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskReader value { nullptr };
    check_hresult(WINRT_SHIM(IUserDataTaskList)->abi_GetTaskReaderWithOptions(get_abi(options), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTask> impl_IUserDataTaskList<D>::GetTaskAsync(hstring_view userDataTask) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTask> operation;
    check_hresult(WINRT_SHIM(IUserDataTaskList)->abi_GetTaskAsync(get_abi(userDataTask), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IUserDataTaskList<D>::SaveTaskAsync(const Windows::ApplicationModel::UserDataTasks::UserDataTask & userDataTask) const
{
    Windows::Foundation::IAsyncAction action;
    check_hresult(WINRT_SHIM(IUserDataTaskList)->abi_SaveTaskAsync(get_abi(userDataTask), put_abi(action)));
    return action;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IUserDataTaskList<D>::DeleteTaskAsync(hstring_view userDataTaskId) const
{
    Windows::Foundation::IAsyncAction action;
    check_hresult(WINRT_SHIM(IUserDataTaskList)->abi_DeleteTaskAsync(get_abi(userDataTaskId), put_abi(action)));
    return action;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IUserDataTaskList<D>::DeleteAsync() const
{
    Windows::Foundation::IAsyncAction asyncAction;
    check_hresult(WINRT_SHIM(IUserDataTaskList)->abi_DeleteAsync(put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IUserDataTaskList<D>::SaveAsync() const
{
    Windows::Foundation::IAsyncAction asyncAction;
    check_hresult(WINRT_SHIM(IUserDataTaskList)->abi_SaveAsync(put_abi(asyncAction)));
    return asyncAction;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IUserDataTaskListLimitedWriteOperations<D>::TryCompleteTaskAsync(hstring_view userDataTaskId) const
{
    Windows::Foundation::IAsyncOperation<hstring> operation;
    check_hresult(WINRT_SHIM(IUserDataTaskListLimitedWriteOperations)->abi_TryCompleteTaskAsync(get_abi(userDataTaskId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IUserDataTaskListLimitedWriteOperations<D>::TryCreateOrUpdateTaskAsync(const Windows::ApplicationModel::UserDataTasks::UserDataTask & userDataTask) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(WINRT_SHIM(IUserDataTaskListLimitedWriteOperations)->abi_TryCreateOrUpdateTaskAsync(get_abi(userDataTask), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IUserDataTaskListLimitedWriteOperations<D>::TryDeleteTaskAsync(hstring_view userDataTaskId) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(WINRT_SHIM(IUserDataTaskListLimitedWriteOperations)->abi_TryDeleteTaskAsync(get_abi(userDataTaskId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IUserDataTaskListLimitedWriteOperations<D>::TrySkipOccurrenceAsync(hstring_view userDataTaskId) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(WINRT_SHIM(IUserDataTaskListLimitedWriteOperations)->abi_TrySkipOccurrenceAsync(get_abi(userDataTaskId), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataTasks::UserDataTask> impl_IUserDataTaskBatch<D>::Tasks() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataTasks::UserDataTask> value;
    check_hresult(WINRT_SHIM(IUserDataTaskBatch)->get_Tasks(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskBatch> impl_IUserDataTaskReader<D>::ReadBatchAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataTasks::UserDataTaskBatch> result;
    check_hresult(WINRT_SHIM(IUserDataTaskReader)->abi_ReadBatchAsync(put_abi(result)));
    return result;
}

template <typename D> hstring impl_IUserDataTask<D>::Id() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IUserDataTask)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IUserDataTask<D>::ListId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IUserDataTask)->get_ListId(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IUserDataTask<D>::RemoteId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IUserDataTask)->get_RemoteId(put_abi(value)));
    return value;
}

template <typename D> void impl_IUserDataTask<D>::RemoteId(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IUserDataTask)->put_RemoteId(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IUserDataTask<D>::CompletedDate() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(WINRT_SHIM(IUserDataTask)->get_CompletedDate(put_abi(value)));
    return value;
}

template <typename D> void impl_IUserDataTask<D>::CompletedDate(const optional<Windows::Foundation::DateTime> & value) const
{
    check_hresult(WINRT_SHIM(IUserDataTask)->put_CompletedDate(get_abi(value)));
}

template <typename D> hstring impl_IUserDataTask<D>::Details() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IUserDataTask)->get_Details(put_abi(value)));
    return value;
}

template <typename D> void impl_IUserDataTask<D>::Details(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IUserDataTask)->put_Details(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskDetailsKind impl_IUserDataTask<D>::DetailsKind() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskDetailsKind value {};
    check_hresult(WINRT_SHIM(IUserDataTask)->get_DetailsKind(&value));
    return value;
}

template <typename D> void impl_IUserDataTask<D>::DetailsKind(Windows::ApplicationModel::UserDataTasks::UserDataTaskDetailsKind value) const
{
    check_hresult(WINRT_SHIM(IUserDataTask)->put_DetailsKind(value));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IUserDataTask<D>::DueDate() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(WINRT_SHIM(IUserDataTask)->get_DueDate(put_abi(value)));
    return value;
}

template <typename D> void impl_IUserDataTask<D>::DueDate(const optional<Windows::Foundation::DateTime> & value) const
{
    check_hresult(WINRT_SHIM(IUserDataTask)->put_DueDate(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskKind impl_IUserDataTask<D>::Kind() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskKind value {};
    check_hresult(WINRT_SHIM(IUserDataTask)->get_Kind(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskPriority impl_IUserDataTask<D>::Priority() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskPriority value {};
    check_hresult(WINRT_SHIM(IUserDataTask)->get_Priority(&value));
    return value;
}

template <typename D> void impl_IUserDataTask<D>::Priority(Windows::ApplicationModel::UserDataTasks::UserDataTaskPriority value) const
{
    check_hresult(WINRT_SHIM(IUserDataTask)->put_Priority(value));
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceProperties impl_IUserDataTask<D>::RecurrenceProperties() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceProperties value { nullptr };
    check_hresult(WINRT_SHIM(IUserDataTask)->get_RecurrenceProperties(put_abi(value)));
    return value;
}

template <typename D> void impl_IUserDataTask<D>::RecurrenceProperties(const Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceProperties & value) const
{
    check_hresult(WINRT_SHIM(IUserDataTask)->put_RecurrenceProperties(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationProperties impl_IUserDataTask<D>::RegenerationProperties() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationProperties value { nullptr };
    check_hresult(WINRT_SHIM(IUserDataTask)->get_RegenerationProperties(put_abi(value)));
    return value;
}

template <typename D> void impl_IUserDataTask<D>::RegenerationProperties(const Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationProperties & value) const
{
    check_hresult(WINRT_SHIM(IUserDataTask)->put_RegenerationProperties(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IUserDataTask<D>::Reminder() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(WINRT_SHIM(IUserDataTask)->get_Reminder(put_abi(value)));
    return value;
}

template <typename D> void impl_IUserDataTask<D>::Reminder(const optional<Windows::Foundation::DateTime> & value) const
{
    check_hresult(WINRT_SHIM(IUserDataTask)->put_Reminder(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskSensitivity impl_IUserDataTask<D>::Sensitivity() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskSensitivity value {};
    check_hresult(WINRT_SHIM(IUserDataTask)->get_Sensitivity(&value));
    return value;
}

template <typename D> void impl_IUserDataTask<D>::Sensitivity(Windows::ApplicationModel::UserDataTasks::UserDataTaskSensitivity value) const
{
    check_hresult(WINRT_SHIM(IUserDataTask)->put_Sensitivity(value));
}

template <typename D> hstring impl_IUserDataTask<D>::Subject() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IUserDataTask)->get_Subject(put_abi(value)));
    return value;
}

template <typename D> void impl_IUserDataTask<D>::Subject(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IUserDataTask)->put_Subject(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IUserDataTask<D>::StartDate() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(WINRT_SHIM(IUserDataTask)->get_StartDate(put_abi(value)));
    return value;
}

template <typename D> void impl_IUserDataTask<D>::StartDate(const optional<Windows::Foundation::DateTime> & value) const
{
    check_hresult(WINRT_SHIM(IUserDataTask)->put_StartDate(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceUnit impl_IUserDataTaskRecurrenceProperties<D>::Unit() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceUnit value {};
    check_hresult(WINRT_SHIM(IUserDataTaskRecurrenceProperties)->get_Unit(&value));
    return value;
}

template <typename D> void impl_IUserDataTaskRecurrenceProperties<D>::Unit(Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceUnit value) const
{
    check_hresult(WINRT_SHIM(IUserDataTaskRecurrenceProperties)->put_Unit(value));
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IUserDataTaskRecurrenceProperties<D>::Occurrences() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(WINRT_SHIM(IUserDataTaskRecurrenceProperties)->get_Occurrences(put_abi(value)));
    return value;
}

template <typename D> void impl_IUserDataTaskRecurrenceProperties<D>::Occurrences(const optional<int32_t> & value) const
{
    check_hresult(WINRT_SHIM(IUserDataTaskRecurrenceProperties)->put_Occurrences(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IUserDataTaskRecurrenceProperties<D>::Until() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(WINRT_SHIM(IUserDataTaskRecurrenceProperties)->get_Until(put_abi(value)));
    return value;
}

template <typename D> void impl_IUserDataTaskRecurrenceProperties<D>::Until(const optional<Windows::Foundation::DateTime> & value) const
{
    check_hresult(WINRT_SHIM(IUserDataTaskRecurrenceProperties)->put_Until(get_abi(value)));
}

template <typename D> int32_t impl_IUserDataTaskRecurrenceProperties<D>::Interval() const
{
    int32_t value {};
    check_hresult(WINRT_SHIM(IUserDataTaskRecurrenceProperties)->get_Interval(&value));
    return value;
}

template <typename D> void impl_IUserDataTaskRecurrenceProperties<D>::Interval(int32_t value) const
{
    check_hresult(WINRT_SHIM(IUserDataTaskRecurrenceProperties)->put_Interval(value));
}

template <typename D> Windows::Foundation::IReference<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskDaysOfWeek> impl_IUserDataTaskRecurrenceProperties<D>::DaysOfWeek() const
{
    Windows::Foundation::IReference<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskDaysOfWeek> value;
    check_hresult(WINRT_SHIM(IUserDataTaskRecurrenceProperties)->get_DaysOfWeek(put_abi(value)));
    return value;
}

template <typename D> void impl_IUserDataTaskRecurrenceProperties<D>::DaysOfWeek(const optional<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskDaysOfWeek> & value) const
{
    check_hresult(WINRT_SHIM(IUserDataTaskRecurrenceProperties)->put_DaysOfWeek(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskWeekOfMonth> impl_IUserDataTaskRecurrenceProperties<D>::WeekOfMonth() const
{
    Windows::Foundation::IReference<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskWeekOfMonth> value;
    check_hresult(WINRT_SHIM(IUserDataTaskRecurrenceProperties)->get_WeekOfMonth(put_abi(value)));
    return value;
}

template <typename D> void impl_IUserDataTaskRecurrenceProperties<D>::WeekOfMonth(const optional<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskWeekOfMonth> & value) const
{
    check_hresult(WINRT_SHIM(IUserDataTaskRecurrenceProperties)->put_WeekOfMonth(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IUserDataTaskRecurrenceProperties<D>::Month() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(WINRT_SHIM(IUserDataTaskRecurrenceProperties)->get_Month(put_abi(value)));
    return value;
}

template <typename D> void impl_IUserDataTaskRecurrenceProperties<D>::Month(const optional<int32_t> & value) const
{
    check_hresult(WINRT_SHIM(IUserDataTaskRecurrenceProperties)->put_Month(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IUserDataTaskRecurrenceProperties<D>::Day() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(WINRT_SHIM(IUserDataTaskRecurrenceProperties)->get_Day(put_abi(value)));
    return value;
}

template <typename D> void impl_IUserDataTaskRecurrenceProperties<D>::Day(const optional<int32_t> & value) const
{
    check_hresult(WINRT_SHIM(IUserDataTaskRecurrenceProperties)->put_Day(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationUnit impl_IUserDataTaskRegenerationProperties<D>::Unit() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationUnit value {};
    check_hresult(WINRT_SHIM(IUserDataTaskRegenerationProperties)->get_Unit(&value));
    return value;
}

template <typename D> void impl_IUserDataTaskRegenerationProperties<D>::Unit(Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationUnit value) const
{
    check_hresult(WINRT_SHIM(IUserDataTaskRegenerationProperties)->put_Unit(value));
}

template <typename D> Windows::Foundation::IReference<int32_t> impl_IUserDataTaskRegenerationProperties<D>::Occurrences() const
{
    Windows::Foundation::IReference<int32_t> value;
    check_hresult(WINRT_SHIM(IUserDataTaskRegenerationProperties)->get_Occurrences(put_abi(value)));
    return value;
}

template <typename D> void impl_IUserDataTaskRegenerationProperties<D>::Occurrences(const optional<int32_t> & value) const
{
    check_hresult(WINRT_SHIM(IUserDataTaskRegenerationProperties)->put_Occurrences(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::DateTime> impl_IUserDataTaskRegenerationProperties<D>::Until() const
{
    Windows::Foundation::IReference<Windows::Foundation::DateTime> value;
    check_hresult(WINRT_SHIM(IUserDataTaskRegenerationProperties)->get_Until(put_abi(value)));
    return value;
}

template <typename D> void impl_IUserDataTaskRegenerationProperties<D>::Until(const optional<Windows::Foundation::DateTime> & value) const
{
    check_hresult(WINRT_SHIM(IUserDataTaskRegenerationProperties)->put_Until(get_abi(value)));
}

template <typename D> int32_t impl_IUserDataTaskRegenerationProperties<D>::Interval() const
{
    int32_t value {};
    check_hresult(WINRT_SHIM(IUserDataTaskRegenerationProperties)->get_Interval(&value));
    return value;
}

template <typename D> void impl_IUserDataTaskRegenerationProperties<D>::Interval(int32_t value) const
{
    check_hresult(WINRT_SHIM(IUserDataTaskRegenerationProperties)->put_Interval(value));
}

template <typename D> Windows::Foundation::DateTime impl_IUserDataTaskListSyncManager<D>::LastAttemptedSyncTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(WINRT_SHIM(IUserDataTaskListSyncManager)->get_LastAttemptedSyncTime(put_abi(value)));
    return value;
}

template <typename D> void impl_IUserDataTaskListSyncManager<D>::LastAttemptedSyncTime(const Windows::Foundation::DateTime & value) const
{
    check_hresult(WINRT_SHIM(IUserDataTaskListSyncManager)->put_LastAttemptedSyncTime(get_abi(value)));
}

template <typename D> Windows::Foundation::DateTime impl_IUserDataTaskListSyncManager<D>::LastSuccessfulSyncTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(WINRT_SHIM(IUserDataTaskListSyncManager)->get_LastSuccessfulSyncTime(put_abi(value)));
    return value;
}

template <typename D> void impl_IUserDataTaskListSyncManager<D>::LastSuccessfulSyncTime(const Windows::Foundation::DateTime & value) const
{
    check_hresult(WINRT_SHIM(IUserDataTaskListSyncManager)->put_LastSuccessfulSyncTime(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncStatus impl_IUserDataTaskListSyncManager<D>::Status() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncStatus value {};
    check_hresult(WINRT_SHIM(IUserDataTaskListSyncManager)->get_Status(&value));
    return value;
}

template <typename D> void impl_IUserDataTaskListSyncManager<D>::Status(Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncStatus value) const
{
    check_hresult(WINRT_SHIM(IUserDataTaskListSyncManager)->put_Status(value));
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IUserDataTaskListSyncManager<D>::SyncAsync() const
{
    Windows::Foundation::IAsyncOperation<bool> result;
    check_hresult(WINRT_SHIM(IUserDataTaskListSyncManager)->abi_SyncAsync(put_abi(result)));
    return result;
}

template <typename D> event_token impl_IUserDataTaskListSyncManager<D>::SyncStatusChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager, Windows::Foundation::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IUserDataTaskListSyncManager)->add_SyncStatusChanged(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IUserDataTaskListSyncManager> impl_IUserDataTaskListSyncManager<D>::SyncStatusChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager, Windows::Foundation::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IUserDataTaskListSyncManager>(this, &ABI::Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager::remove_SyncStatusChanged, SyncStatusChanged(handler));
}

template <typename D> void impl_IUserDataTaskListSyncManager<D>::SyncStatusChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IUserDataTaskListSyncManager)->remove_SyncStatusChanged(token));
}

inline UserDataTask::UserDataTask() :
    UserDataTask(activate_instance<UserDataTask>())
{}

inline Windows::ApplicationModel::UserDataTasks::UserDataTaskManager UserDataTaskManager::GetDefault()
{
    return get_activation_factory<UserDataTaskManager, IUserDataTaskManagerStatics>().GetDefault();
}

inline Windows::ApplicationModel::UserDataTasks::UserDataTaskManager UserDataTaskManager::GetForUser(const Windows::System::User & user)
{
    return get_activation_factory<UserDataTaskManager, IUserDataTaskManagerStatics>().GetForUser(user);
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

}

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTask>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTask & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskBatch>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskBatch & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskList>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskList & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskListLimitedWriteOperations>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskListLimitedWriteOperations & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskListSyncManager & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskManager>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskManager & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskManagerStatics>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskManagerStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskQueryOptions>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskQueryOptions & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskReader>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskReader & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskRecurrenceProperties & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskRegenerationProperties & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskStore>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::IUserDataTaskStore & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTask>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::UserDataTask & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskBatch>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskBatch & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskList>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskList & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskListLimitedWriteOperations>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskListLimitedWriteOperations & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskListSyncManager & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskManager>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskManager & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryOptions>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskQueryOptions & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskReader>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskReader & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceProperties>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskRecurrenceProperties & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationProperties>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskRegenerationProperties & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskStore>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::UserDataTaskStore & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
