// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.System.3.h"
#include "internal/Windows.ApplicationModel.UserDataAccounts.3.h"
#include "Windows.ApplicationModel.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccount> : produce_base<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccount>
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

    HRESULT __stdcall get_UserDisplayName(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UserDisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UserDisplayName(impl::abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UserDisplayName(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OtherAppReadAccess(Windows::ApplicationModel::UserDataAccounts::UserDataAccountOtherAppReadAccess * value) noexcept override
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

    HRESULT __stdcall put_OtherAppReadAccess(Windows::ApplicationModel::UserDataAccounts::UserDataAccountOtherAppReadAccess value) noexcept override
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

    HRESULT __stdcall get_Icon(impl::abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Icon());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceAccountTypeId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceAccountTypeId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PackageFamilyName(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PackageFamilyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SaveAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().SaveAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteAsync(impl::abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().DeleteAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAppointmentCalendarsAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>>> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FindAppointmentCalendarsAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindEmailMailboxesAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMailbox>>> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FindEmailMailboxesAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindContactListsAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactList>>> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FindContactListsAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindContactAnnotationListsAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotationList>>> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FindContactAnnotationListsAsync());
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
struct produce<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccount2> : produce_base<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccount2>
{
    HRESULT __stdcall get_EnterpriseId(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EnterpriseId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsProtectedUnderLock(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsProtectedUnderLock());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccount3> : produce_base<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccount3>
{
    HRESULT __stdcall get_ExplictReadAccessPackageFamilyNames(impl::abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExplictReadAccessPackageFamilyNames());
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
};

template <typename D>
struct produce<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4> : produce_base<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4>
{
    HRESULT __stdcall get_CanShowCreateContactGroup(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanShowCreateContactGroup());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CanShowCreateContactGroup(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CanShowCreateContactGroup(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProviderProperties(impl::abi_arg_out<Windows::Foundation::Collections::IPropertySet> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProviderProperties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindUserDataTaskListsAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataTasks::UserDataTaskList>>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FindUserDataTaskListsAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindContactGroupsAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactGroup>>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FindContactGroupsAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryShowCreateContactGroupAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TryShowCreateContactGroupAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsProtectedUnderLock(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsProtectedUnderLock(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Icon(impl::abi_arg_in<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Icon(*reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStreamReference *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerForUser> : produce_base<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerForUser>
{
    HRESULT __stdcall abi_RequestStoreAsync(Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreAccessType storeAccessType, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore>> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestStoreAsync(storeAccessType));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
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
struct produce<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics> : produce_base<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics>
{
    HRESULT __stdcall abi_RequestStoreAsync(Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreAccessType storeAccessType, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore>> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestStoreAsync(storeAccessType));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowAddAccountAsync(Windows::ApplicationModel::UserDataAccounts::UserDataAccountContentKinds contentKinds, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ShowAddAccountAsync(contentKinds));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowAccountSettingsAsync(impl::abi_arg_in<hstring> id, impl::abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ShowAccountSettingsAsync(*reinterpret_cast<const hstring *>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowAccountErrorResolverAsync(impl::abi_arg_in<hstring> id, impl::abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ShowAccountErrorResolverAsync(*reinterpret_cast<const hstring *>(&id)));
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
struct produce<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics2> : produce_base<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics2>
{
    HRESULT __stdcall abi_GetForUser(impl::abi_arg_in<Windows::System::IUser> user, impl::abi_arg_out<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerForUser> result) noexcept override
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
struct produce<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore> : produce_base<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore>
{
    HRESULT __stdcall abi_FindAccountsAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataAccounts::UserDataAccount>>> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FindAccountsAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAccountAsync(impl::abi_arg_in<hstring> id, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount>> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetAccountAsync(*reinterpret_cast<const hstring *>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateAccountAsync(impl::abi_arg_in<hstring> userDisplayName, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount>> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateAccountAsync(*reinterpret_cast<const hstring *>(&userDisplayName)));
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
struct produce<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2> : produce_base<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2>
{
    HRESULT __stdcall abi_CreateAccountWithPackageRelativeAppIdAsync(impl::abi_arg_in<hstring> userDisplayName, impl::abi_arg_in<hstring> packageRelativeAppId, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount>> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateAccountAsync(*reinterpret_cast<const hstring *>(&userDisplayName), *reinterpret_cast<const hstring *>(&packageRelativeAppId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StoreChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore, Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().StoreChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore, Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StoreChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StoreChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore3> : produce_base<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore3>
{
    HRESULT __stdcall abi_CreateAccountWithPackageRelativeAppIdAndEnterpriseIdAsync(impl::abi_arg_in<hstring> userDisplayName, impl::abi_arg_in<hstring> packageRelativeAppId, impl::abi_arg_in<hstring> enterpriseId, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount>> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateAccountAsync(*reinterpret_cast<const hstring *>(&userDisplayName), *reinterpret_cast<const hstring *>(&packageRelativeAppId), *reinterpret_cast<const hstring *>(&enterpriseId)));
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
struct produce<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStoreChangedEventArgs> : produce_base<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStoreChangedEventArgs>
{
    HRESULT __stdcall abi_GetDeferral(impl::abi_arg_out<Windows::Foundation::IDeferral> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::ApplicationModel::UserDataAccounts {

template <typename D> hstring impl_IUserDataAccount<D>::Id() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IUserDataAccount)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IUserDataAccount<D>::UserDisplayName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IUserDataAccount)->get_UserDisplayName(put_abi(value)));
    return value;
}

template <typename D> void impl_IUserDataAccount<D>::UserDisplayName(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IUserDataAccount)->put_UserDisplayName(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::UserDataAccounts::UserDataAccountOtherAppReadAccess impl_IUserDataAccount<D>::OtherAppReadAccess() const
{
    Windows::ApplicationModel::UserDataAccounts::UserDataAccountOtherAppReadAccess value {};
    check_hresult(WINRT_SHIM(IUserDataAccount)->get_OtherAppReadAccess(&value));
    return value;
}

template <typename D> void impl_IUserDataAccount<D>::OtherAppReadAccess(Windows::ApplicationModel::UserDataAccounts::UserDataAccountOtherAppReadAccess value) const
{
    check_hresult(WINRT_SHIM(IUserDataAccount)->put_OtherAppReadAccess(value));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference impl_IUserDataAccount<D>::Icon() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value;
    check_hresult(WINRT_SHIM(IUserDataAccount)->get_Icon(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IUserDataAccount<D>::DeviceAccountTypeId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IUserDataAccount)->get_DeviceAccountTypeId(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IUserDataAccount<D>::PackageFamilyName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IUserDataAccount)->get_PackageFamilyName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IUserDataAccount<D>::SaveAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(WINRT_SHIM(IUserDataAccount)->abi_SaveAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IUserDataAccount<D>::DeleteAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(WINRT_SHIM(IUserDataAccount)->abi_DeleteAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>> impl_IUserDataAccount<D>::FindAppointmentCalendarsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>> result;
    check_hresult(WINRT_SHIM(IUserDataAccount)->abi_FindAppointmentCalendarsAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMailbox>> impl_IUserDataAccount<D>::FindEmailMailboxesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMailbox>> result;
    check_hresult(WINRT_SHIM(IUserDataAccount)->abi_FindEmailMailboxesAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactList>> impl_IUserDataAccount<D>::FindContactListsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactList>> result;
    check_hresult(WINRT_SHIM(IUserDataAccount)->abi_FindContactListsAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotationList>> impl_IUserDataAccount<D>::FindContactAnnotationListsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotationList>> result;
    check_hresult(WINRT_SHIM(IUserDataAccount)->abi_FindContactAnnotationListsAsync(put_abi(result)));
    return result;
}

template <typename D> hstring impl_IUserDataAccount2<D>::EnterpriseId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IUserDataAccount2)->get_EnterpriseId(put_abi(value)));
    return value;
}

template <typename D> bool impl_IUserDataAccount2<D>::IsProtectedUnderLock() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IUserDataAccount2)->get_IsProtectedUnderLock(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IUserDataAccount3<D>::ExplictReadAccessPackageFamilyNames() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(WINRT_SHIM(IUserDataAccount3)->get_ExplictReadAccessPackageFamilyNames(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IUserDataAccount3<D>::DisplayName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IUserDataAccount3)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> void impl_IUserDataAccount3<D>::DisplayName(hstring_view value) const
{
    check_hresult(WINRT_SHIM(IUserDataAccount3)->put_DisplayName(get_abi(value)));
}

template <typename D> bool impl_IUserDataAccount4<D>::CanShowCreateContactGroup() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IUserDataAccount4)->get_CanShowCreateContactGroup(&value));
    return value;
}

template <typename D> void impl_IUserDataAccount4<D>::CanShowCreateContactGroup(bool value) const
{
    check_hresult(WINRT_SHIM(IUserDataAccount4)->put_CanShowCreateContactGroup(value));
}

template <typename D> Windows::Foundation::Collections::IPropertySet impl_IUserDataAccount4<D>::ProviderProperties() const
{
    Windows::Foundation::Collections::IPropertySet value;
    check_hresult(WINRT_SHIM(IUserDataAccount4)->get_ProviderProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataTasks::UserDataTaskList>> impl_IUserDataAccount4<D>::FindUserDataTaskListsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataTasks::UserDataTaskList>> operation;
    check_hresult(WINRT_SHIM(IUserDataAccount4)->abi_FindUserDataTaskListsAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactGroup>> impl_IUserDataAccount4<D>::FindContactGroupsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactGroup>> operation;
    check_hresult(WINRT_SHIM(IUserDataAccount4)->abi_FindContactGroupsAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IUserDataAccount4<D>::TryShowCreateContactGroupAsync() const
{
    Windows::Foundation::IAsyncOperation<hstring> operation;
    check_hresult(WINRT_SHIM(IUserDataAccount4)->abi_TryShowCreateContactGroupAsync(put_abi(operation)));
    return operation;
}

template <typename D> void impl_IUserDataAccount4<D>::IsProtectedUnderLock(bool value) const
{
    check_hresult(WINRT_SHIM(IUserDataAccount4)->put_IsProtectedUnderLock(value));
}

template <typename D> void impl_IUserDataAccount4<D>::Icon(const Windows::Storage::Streams::IRandomAccessStreamReference & value) const
{
    check_hresult(WINRT_SHIM(IUserDataAccount4)->put_Icon(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataAccounts::UserDataAccount>> impl_IUserDataAccountStore<D>::FindAccountsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataAccounts::UserDataAccount>> result;
    check_hresult(WINRT_SHIM(IUserDataAccountStore)->abi_FindAccountsAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount> impl_IUserDataAccountStore<D>::GetAccountAsync(hstring_view id) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount> result;
    check_hresult(WINRT_SHIM(IUserDataAccountStore)->abi_GetAccountAsync(get_abi(id), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount> impl_IUserDataAccountStore<D>::CreateAccountAsync(hstring_view userDisplayName) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount> result;
    check_hresult(WINRT_SHIM(IUserDataAccountStore)->abi_CreateAccountAsync(get_abi(userDisplayName), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount> impl_IUserDataAccountStore2<D>::CreateAccountAsync(hstring_view userDisplayName, hstring_view packageRelativeAppId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount> result;
    check_hresult(WINRT_SHIM(IUserDataAccountStore2)->abi_CreateAccountWithPackageRelativeAppIdAsync(get_abi(userDisplayName), get_abi(packageRelativeAppId), put_abi(result)));
    return result;
}

template <typename D> event_token impl_IUserDataAccountStore2<D>::StoreChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore, Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IUserDataAccountStore2)->add_StoreChanged(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IUserDataAccountStore2> impl_IUserDataAccountStore2<D>::StoreChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore, Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IUserDataAccountStore2>(this, &ABI::Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2::remove_StoreChanged, StoreChanged(handler));
}

template <typename D> void impl_IUserDataAccountStore2<D>::StoreChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(IUserDataAccountStore2)->remove_StoreChanged(token));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount> impl_IUserDataAccountStore3<D>::CreateAccountAsync(hstring_view userDisplayName, hstring_view packageRelativeAppId, hstring_view enterpriseId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount> result;
    check_hresult(WINRT_SHIM(IUserDataAccountStore3)->abi_CreateAccountWithPackageRelativeAppIdAndEnterpriseIdAsync(get_abi(userDisplayName), get_abi(packageRelativeAppId), get_abi(enterpriseId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore> impl_IUserDataAccountManagerStatics<D>::RequestStoreAsync(Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreAccessType storeAccessType) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore> result;
    check_hresult(WINRT_SHIM(IUserDataAccountManagerStatics)->abi_RequestStoreAsync(storeAccessType, put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IUserDataAccountManagerStatics<D>::ShowAddAccountAsync(Windows::ApplicationModel::UserDataAccounts::UserDataAccountContentKinds contentKinds) const
{
    Windows::Foundation::IAsyncOperation<hstring> result;
    check_hresult(WINRT_SHIM(IUserDataAccountManagerStatics)->abi_ShowAddAccountAsync(contentKinds, put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IUserDataAccountManagerStatics<D>::ShowAccountSettingsAsync(hstring_view id) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(WINRT_SHIM(IUserDataAccountManagerStatics)->abi_ShowAccountSettingsAsync(get_abi(id), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IUserDataAccountManagerStatics<D>::ShowAccountErrorResolverAsync(hstring_view id) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(WINRT_SHIM(IUserDataAccountManagerStatics)->abi_ShowAccountErrorResolverAsync(get_abi(id), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::UserDataAccounts::UserDataAccountManagerForUser impl_IUserDataAccountManagerStatics2<D>::GetForUser(const Windows::System::User & user) const
{
    Windows::ApplicationModel::UserDataAccounts::UserDataAccountManagerForUser result { nullptr };
    check_hresult(WINRT_SHIM(IUserDataAccountManagerStatics2)->abi_GetForUser(get_abi(user), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore> impl_IUserDataAccountManagerForUser<D>::RequestStoreAsync(Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreAccessType storeAccessType) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore> result;
    check_hresult(WINRT_SHIM(IUserDataAccountManagerForUser)->abi_RequestStoreAsync(storeAccessType, put_abi(result)));
    return result;
}

template <typename D> Windows::System::User impl_IUserDataAccountManagerForUser<D>::User() const
{
    Windows::System::User value { nullptr };
    check_hresult(WINRT_SHIM(IUserDataAccountManagerForUser)->get_User(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IUserDataAccountStoreChangedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result { nullptr };
    check_hresult(WINRT_SHIM(IUserDataAccountStoreChangedEventArgs)->abi_GetDeferral(put_abi(result)));
    return result;
}

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore> UserDataAccountManager::RequestStoreAsync(Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreAccessType storeAccessType)
{
    return get_activation_factory<UserDataAccountManager, IUserDataAccountManagerStatics>().RequestStoreAsync(storeAccessType);
}

inline Windows::Foundation::IAsyncOperation<hstring> UserDataAccountManager::ShowAddAccountAsync(Windows::ApplicationModel::UserDataAccounts::UserDataAccountContentKinds contentKinds)
{
    return get_activation_factory<UserDataAccountManager, IUserDataAccountManagerStatics>().ShowAddAccountAsync(contentKinds);
}

inline Windows::Foundation::IAsyncAction UserDataAccountManager::ShowAccountSettingsAsync(hstring_view id)
{
    return get_activation_factory<UserDataAccountManager, IUserDataAccountManagerStatics>().ShowAccountSettingsAsync(id);
}

inline Windows::Foundation::IAsyncAction UserDataAccountManager::ShowAccountErrorResolverAsync(hstring_view id)
{
    return get_activation_factory<UserDataAccountManager, IUserDataAccountManagerStatics>().ShowAccountErrorResolverAsync(id);
}

inline Windows::ApplicationModel::UserDataAccounts::UserDataAccountManagerForUser UserDataAccountManager::GetForUser(const Windows::System::User & user)
{
    return get_activation_factory<UserDataAccountManager, IUserDataAccountManagerStatics2>().GetForUser(user);
}

}

}

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccount>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccount & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccount2>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccount2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccount3>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccount3 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerForUser>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerForUser & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics2>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore3>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore3 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStoreChangedEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStoreChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataAccounts::UserDataAccount>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataAccounts::UserDataAccount & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataAccounts::UserDataAccountManagerForUser>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataAccounts::UserDataAccountManagerForUser & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreChangedEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreChangedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
