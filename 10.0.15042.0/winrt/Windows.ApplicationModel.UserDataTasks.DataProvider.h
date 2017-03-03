// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.ApplicationModel.UserDataTasks.3.h"
#include "internal/Windows.ApplicationModel.UserDataTasks.DataProvider.3.h"
#include "Windows.ApplicationModel.UserDataTasks.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection> : produce_base<D, Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection>
{
    HRESULT __stdcall add_CreateOrUpdateTaskRequested(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequestEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().CreateOrUpdateTaskRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequestEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CreateOrUpdateTaskRequested(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CreateOrUpdateTaskRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SyncRequested(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequestEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SyncRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequestEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SyncRequested(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SyncRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SkipOccurrenceRequested(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequestEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SkipOccurrenceRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequestEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SkipOccurrenceRequested(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SkipOccurrenceRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CompleteTaskRequested(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequestEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().CompleteTaskRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequestEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CompleteTaskRequested(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CompleteTaskRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DeleteTaskRequested(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequestEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DeleteTaskRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequestEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DeleteTaskRequested(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeleteTaskRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Start() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderTriggerDetails> : produce_base<D, Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderTriggerDetails>
{
    HRESULT __stdcall get_Connection(impl::abi_arg_out<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Connection());
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
struct produce<D, Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequest> : produce_base<D, Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequest>
{
    HRESULT __stdcall get_TaskListId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TaskListId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TaskId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TaskId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCompletedAsync(impl::abi_arg_in<hstring> completedTaskId, impl::abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportCompletedAsync(*reinterpret_cast<const hstring *>(&completedTaskId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportFailedAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportFailedAsync());
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
struct produce<D, Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequestEventArgs> : produce_base<D, Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequestEventArgs>
{
    HRESULT __stdcall get_Request(impl::abi_arg_out<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequest> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(impl::abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
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
struct produce<D, Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequest> : produce_base<D, Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequest>
{
    HRESULT __stdcall get_TaskListId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TaskListId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Task(impl::abi_arg_out<Windows::ApplicationModel::UserDataTasks::IUserDataTask> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Task());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCompletedAsync(impl::abi_arg_in<Windows::ApplicationModel::UserDataTasks::IUserDataTask> createdOrUpdatedUserDataTask, impl::abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportCompletedAsync(*reinterpret_cast<const Windows::ApplicationModel::UserDataTasks::UserDataTask *>(&createdOrUpdatedUserDataTask)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportFailedAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportFailedAsync());
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
struct produce<D, Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequestEventArgs> : produce_base<D, Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequestEventArgs>
{
    HRESULT __stdcall get_Request(impl::abi_arg_out<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequest> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(impl::abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
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
struct produce<D, Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequest> : produce_base<D, Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequest>
{
    HRESULT __stdcall get_TaskListId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TaskListId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TaskId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TaskId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCompletedAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportFailedAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportFailedAsync());
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
struct produce<D, Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequestEventArgs> : produce_base<D, Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequestEventArgs>
{
    HRESULT __stdcall get_Request(impl::abi_arg_out<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequest> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(impl::abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
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
struct produce<D, Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequest> : produce_base<D, Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequest>
{
    HRESULT __stdcall get_TaskListId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TaskListId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TaskId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TaskId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCompletedAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportFailedAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportFailedAsync());
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
struct produce<D, Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequestEventArgs> : produce_base<D, Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequestEventArgs>
{
    HRESULT __stdcall get_Request(impl::abi_arg_out<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequest> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(impl::abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
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
struct produce<D, Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequest> : produce_base<D, Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequest>
{
    HRESULT __stdcall get_TaskListId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TaskListId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCompletedAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportCompletedAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportFailedAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ReportFailedAsync());
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
struct produce<D, Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequestEventArgs> : produce_base<D, Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequestEventArgs>
{
    HRESULT __stdcall get_Request(impl::abi_arg_out<Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequest> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(impl::abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::ApplicationModel::UserDataTasks::DataProvider {

template <typename D> Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection impl_IUserDataTaskDataProviderTriggerDetails<D>::Connection() const
{
    Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection value { nullptr };
    check_hresult(WINRT_SHIM(IUserDataTaskDataProviderTriggerDetails)->get_Connection(put_abi(value)));
    return value;
}

template <typename D> event_token impl_IUserDataTaskDataProviderConnection<D>::CreateOrUpdateTaskRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequestEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IUserDataTaskDataProviderConnection)->add_CreateOrUpdateTaskRequested(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IUserDataTaskDataProviderConnection> impl_IUserDataTaskDataProviderConnection<D>::CreateOrUpdateTaskRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequestEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IUserDataTaskDataProviderConnection>(this, &ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection::remove_CreateOrUpdateTaskRequested, CreateOrUpdateTaskRequested(handler));
}

template <typename D> void impl_IUserDataTaskDataProviderConnection<D>::CreateOrUpdateTaskRequested(event_token token) const
{
    check_hresult(WINRT_SHIM(IUserDataTaskDataProviderConnection)->remove_CreateOrUpdateTaskRequested(token));
}

template <typename D> event_token impl_IUserDataTaskDataProviderConnection<D>::SyncRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequestEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IUserDataTaskDataProviderConnection)->add_SyncRequested(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IUserDataTaskDataProviderConnection> impl_IUserDataTaskDataProviderConnection<D>::SyncRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequestEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IUserDataTaskDataProviderConnection>(this, &ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection::remove_SyncRequested, SyncRequested(handler));
}

template <typename D> void impl_IUserDataTaskDataProviderConnection<D>::SyncRequested(event_token token) const
{
    check_hresult(WINRT_SHIM(IUserDataTaskDataProviderConnection)->remove_SyncRequested(token));
}

template <typename D> event_token impl_IUserDataTaskDataProviderConnection<D>::SkipOccurrenceRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequestEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IUserDataTaskDataProviderConnection)->add_SkipOccurrenceRequested(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IUserDataTaskDataProviderConnection> impl_IUserDataTaskDataProviderConnection<D>::SkipOccurrenceRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequestEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IUserDataTaskDataProviderConnection>(this, &ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection::remove_SkipOccurrenceRequested, SkipOccurrenceRequested(handler));
}

template <typename D> void impl_IUserDataTaskDataProviderConnection<D>::SkipOccurrenceRequested(event_token token) const
{
    check_hresult(WINRT_SHIM(IUserDataTaskDataProviderConnection)->remove_SkipOccurrenceRequested(token));
}

template <typename D> event_token impl_IUserDataTaskDataProviderConnection<D>::CompleteTaskRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequestEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IUserDataTaskDataProviderConnection)->add_CompleteTaskRequested(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IUserDataTaskDataProviderConnection> impl_IUserDataTaskDataProviderConnection<D>::CompleteTaskRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequestEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IUserDataTaskDataProviderConnection>(this, &ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection::remove_CompleteTaskRequested, CompleteTaskRequested(handler));
}

template <typename D> void impl_IUserDataTaskDataProviderConnection<D>::CompleteTaskRequested(event_token token) const
{
    check_hresult(WINRT_SHIM(IUserDataTaskDataProviderConnection)->remove_CompleteTaskRequested(token));
}

template <typename D> event_token impl_IUserDataTaskDataProviderConnection<D>::DeleteTaskRequested(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequestEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IUserDataTaskDataProviderConnection)->add_DeleteTaskRequested(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IUserDataTaskDataProviderConnection> impl_IUserDataTaskDataProviderConnection<D>::DeleteTaskRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection, Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequestEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IUserDataTaskDataProviderConnection>(this, &ABI::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection::remove_DeleteTaskRequested, DeleteTaskRequested(handler));
}

template <typename D> void impl_IUserDataTaskDataProviderConnection<D>::DeleteTaskRequested(event_token token) const
{
    check_hresult(WINRT_SHIM(IUserDataTaskDataProviderConnection)->remove_DeleteTaskRequested(token));
}

template <typename D> void impl_IUserDataTaskDataProviderConnection<D>::Start() const
{
    check_hresult(WINRT_SHIM(IUserDataTaskDataProviderConnection)->abi_Start());
}

template <typename D> hstring impl_IUserDataTaskListCreateOrUpdateTaskRequest<D>::TaskListId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IUserDataTaskListCreateOrUpdateTaskRequest)->get_TaskListId(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::UserDataTasks::UserDataTask impl_IUserDataTaskListCreateOrUpdateTaskRequest<D>::Task() const
{
    Windows::ApplicationModel::UserDataTasks::UserDataTask value { nullptr };
    check_hresult(WINRT_SHIM(IUserDataTaskListCreateOrUpdateTaskRequest)->get_Task(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IUserDataTaskListCreateOrUpdateTaskRequest<D>::ReportCompletedAsync(const Windows::ApplicationModel::UserDataTasks::UserDataTask & createdOrUpdatedUserDataTask) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(WINRT_SHIM(IUserDataTaskListCreateOrUpdateTaskRequest)->abi_ReportCompletedAsync(get_abi(createdOrUpdatedUserDataTask), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IUserDataTaskListCreateOrUpdateTaskRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(WINRT_SHIM(IUserDataTaskListCreateOrUpdateTaskRequest)->abi_ReportFailedAsync(put_abi(result)));
    return result;
}

template <typename D> hstring impl_IUserDataTaskListSyncManagerSyncRequest<D>::TaskListId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IUserDataTaskListSyncManagerSyncRequest)->get_TaskListId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IUserDataTaskListSyncManagerSyncRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(WINRT_SHIM(IUserDataTaskListSyncManagerSyncRequest)->abi_ReportCompletedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IUserDataTaskListSyncManagerSyncRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(WINRT_SHIM(IUserDataTaskListSyncManagerSyncRequest)->abi_ReportFailedAsync(put_abi(result)));
    return result;
}

template <typename D> hstring impl_IUserDataTaskListSkipOccurrenceRequest<D>::TaskListId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IUserDataTaskListSkipOccurrenceRequest)->get_TaskListId(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IUserDataTaskListSkipOccurrenceRequest<D>::TaskId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IUserDataTaskListSkipOccurrenceRequest)->get_TaskId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IUserDataTaskListSkipOccurrenceRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(WINRT_SHIM(IUserDataTaskListSkipOccurrenceRequest)->abi_ReportCompletedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IUserDataTaskListSkipOccurrenceRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(WINRT_SHIM(IUserDataTaskListSkipOccurrenceRequest)->abi_ReportFailedAsync(put_abi(result)));
    return result;
}

template <typename D> hstring impl_IUserDataTaskListCompleteTaskRequest<D>::TaskListId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IUserDataTaskListCompleteTaskRequest)->get_TaskListId(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IUserDataTaskListCompleteTaskRequest<D>::TaskId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IUserDataTaskListCompleteTaskRequest)->get_TaskId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IUserDataTaskListCompleteTaskRequest<D>::ReportCompletedAsync(hstring_view completedTaskId) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(WINRT_SHIM(IUserDataTaskListCompleteTaskRequest)->abi_ReportCompletedAsync(get_abi(completedTaskId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IUserDataTaskListCompleteTaskRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(WINRT_SHIM(IUserDataTaskListCompleteTaskRequest)->abi_ReportFailedAsync(put_abi(result)));
    return result;
}

template <typename D> hstring impl_IUserDataTaskListDeleteTaskRequest<D>::TaskListId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IUserDataTaskListDeleteTaskRequest)->get_TaskListId(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IUserDataTaskListDeleteTaskRequest<D>::TaskId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IUserDataTaskListDeleteTaskRequest)->get_TaskId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IUserDataTaskListDeleteTaskRequest<D>::ReportCompletedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(WINRT_SHIM(IUserDataTaskListDeleteTaskRequest)->abi_ReportCompletedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IUserDataTaskListDeleteTaskRequest<D>::ReportFailedAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(WINRT_SHIM(IUserDataTaskListDeleteTaskRequest)->abi_ReportFailedAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequest impl_IUserDataTaskListCreateOrUpdateTaskRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequest value { nullptr };
    check_hresult(WINRT_SHIM(IUserDataTaskListCreateOrUpdateTaskRequestEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IUserDataTaskListCreateOrUpdateTaskRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(WINRT_SHIM(IUserDataTaskListCreateOrUpdateTaskRequestEventArgs)->abi_GetDeferral(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequest impl_IUserDataTaskListSyncManagerSyncRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequest value { nullptr };
    check_hresult(WINRT_SHIM(IUserDataTaskListSyncManagerSyncRequestEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IUserDataTaskListSyncManagerSyncRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(WINRT_SHIM(IUserDataTaskListSyncManagerSyncRequestEventArgs)->abi_GetDeferral(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequest impl_IUserDataTaskListSkipOccurrenceRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequest value { nullptr };
    check_hresult(WINRT_SHIM(IUserDataTaskListSkipOccurrenceRequestEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IUserDataTaskListSkipOccurrenceRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(WINRT_SHIM(IUserDataTaskListSkipOccurrenceRequestEventArgs)->abi_GetDeferral(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequest impl_IUserDataTaskListCompleteTaskRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequest value { nullptr };
    check_hresult(WINRT_SHIM(IUserDataTaskListCompleteTaskRequestEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IUserDataTaskListCompleteTaskRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(WINRT_SHIM(IUserDataTaskListCompleteTaskRequestEventArgs)->abi_GetDeferral(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequest impl_IUserDataTaskListDeleteTaskRequestEventArgs<D>::Request() const
{
    Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequest value { nullptr };
    check_hresult(WINRT_SHIM(IUserDataTaskListDeleteTaskRequestEventArgs)->get_Request(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IUserDataTaskListDeleteTaskRequestEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(WINRT_SHIM(IUserDataTaskListDeleteTaskRequestEventArgs)->abi_GetDeferral(put_abi(value)));
    return value;
}

}

}

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderConnection & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderTriggerDetails>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskDataProviderTriggerDetails & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequest>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequest & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequestEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCompleteTaskRequestEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequest>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequest & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequestEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListCreateOrUpdateTaskRequestEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequest>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequest & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequestEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListDeleteTaskRequestEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequest>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequest & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequestEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSkipOccurrenceRequestEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequest>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequest & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequestEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::IUserDataTaskListSyncManagerSyncRequestEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderConnection & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderTriggerDetails>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskDataProviderTriggerDetails & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequest>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequest & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequestEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCompleteTaskRequestEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequest>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequest & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequestEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListCreateOrUpdateTaskRequestEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequest>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequest & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequestEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListDeleteTaskRequestEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequest>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequest & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequestEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSkipOccurrenceRequestEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequest>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequest & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequestEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataTasks::DataProvider::UserDataTaskListSyncManagerSyncRequestEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
