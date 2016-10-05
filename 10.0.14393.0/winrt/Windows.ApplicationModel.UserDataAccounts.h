// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

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
    HRESULT __stdcall get_Id(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserDisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UserDisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UserDisplayName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
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
            *value = detach(this->shim().OtherAppReadAccess());
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
            this->shim().OtherAppReadAccess(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Icon(abi_arg_out<Windows::Storage::Streams::IRandomAccessStreamReference> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Icon());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceAccountTypeId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceAccountTypeId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PackageFamilyName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PackageFamilyName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SaveAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().SaveAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_DeleteAsync(abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().DeleteAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAppointmentCalendarsAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FindAppointmentCalendarsAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindEmailMailboxesAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMailbox>>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FindEmailMailboxesAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindContactListsAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactList>>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FindContactListsAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindContactAnnotationListsAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotationList>>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FindContactAnnotationListsAsync());
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
    HRESULT __stdcall get_EnterpriseId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EnterpriseId());
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
            *value = detach(this->shim().IsProtectedUnderLock());
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
    HRESULT __stdcall get_ExplictReadAccessPackageFamilyNames(abi_arg_out<Windows::Foundation::Collections::IVector<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExplictReadAccessPackageFamilyNames());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DisplayName(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
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
struct produce<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerForUser> : produce_base<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerForUser>
{
    HRESULT __stdcall abi_RequestStoreAsync(Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreAccessType storeAccessType, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RequestStoreAsync(storeAccessType));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_User(abi_arg_out<Windows::System::IUser> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().User());
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
    HRESULT __stdcall abi_RequestStoreAsync(Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreAccessType storeAccessType, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RequestStoreAsync(storeAccessType));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowAddAccountAsync(Windows::ApplicationModel::UserDataAccounts::UserDataAccountContentKinds contentKinds, abi_arg_out<Windows::Foundation::IAsyncOperation<hstring>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ShowAddAccountAsync(contentKinds));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowAccountSettingsAsync(abi_arg_in<hstring> id, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ShowAccountSettingsAsync(*reinterpret_cast<const hstring *>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowAccountErrorResolverAsync(abi_arg_in<hstring> id, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().ShowAccountErrorResolverAsync(*reinterpret_cast<const hstring *>(&id)));
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
    HRESULT __stdcall abi_GetForUser(abi_arg_in<Windows::System::IUser> user, abi_arg_out<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerForUser> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetForUser(*reinterpret_cast<const Windows::System::User *>(&user)));
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
    HRESULT __stdcall abi_FindAccountsAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataAccounts::UserDataAccount>>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FindAccountsAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetAccountAsync(abi_arg_in<hstring> id, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetAccountAsync(*reinterpret_cast<const hstring *>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateAccountAsync(abi_arg_in<hstring> userDisplayName, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateAccountAsync(*reinterpret_cast<const hstring *>(&userDisplayName)));
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
    HRESULT __stdcall abi_CreateAccountWithPackageRelativeAppIdAsync(abi_arg_in<hstring> userDisplayName, abi_arg_in<hstring> packageRelativeAppId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateAccountAsync(*reinterpret_cast<const hstring *>(&userDisplayName), *reinterpret_cast<const hstring *>(&packageRelativeAppId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StoreChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore, Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().StoreChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore, Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreChangedEventArgs> *>(&handler)));
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
struct produce<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStoreChangedEventArgs> : produce_base<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStoreChangedEventArgs>
{
    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Foundation::IDeferral> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetDeferral());
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
    check_hresult(static_cast<const IUserDataAccount &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> hstring impl_IUserDataAccount<D>::UserDisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IUserDataAccount &>(static_cast<const D &>(*this))->get_UserDisplayName(put(value)));
    return value;
}

template <typename D> void impl_IUserDataAccount<D>::UserDisplayName(hstring_ref value) const
{
    check_hresult(static_cast<const IUserDataAccount &>(static_cast<const D &>(*this))->put_UserDisplayName(get(value)));
}

template <typename D> Windows::ApplicationModel::UserDataAccounts::UserDataAccountOtherAppReadAccess impl_IUserDataAccount<D>::OtherAppReadAccess() const
{
    Windows::ApplicationModel::UserDataAccounts::UserDataAccountOtherAppReadAccess value {};
    check_hresult(static_cast<const IUserDataAccount &>(static_cast<const D &>(*this))->get_OtherAppReadAccess(&value));
    return value;
}

template <typename D> void impl_IUserDataAccount<D>::OtherAppReadAccess(Windows::ApplicationModel::UserDataAccounts::UserDataAccountOtherAppReadAccess value) const
{
    check_hresult(static_cast<const IUserDataAccount &>(static_cast<const D &>(*this))->put_OtherAppReadAccess(value));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference impl_IUserDataAccount<D>::Icon() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value;
    check_hresult(static_cast<const IUserDataAccount &>(static_cast<const D &>(*this))->get_Icon(put(value)));
    return value;
}

template <typename D> hstring impl_IUserDataAccount<D>::DeviceAccountTypeId() const
{
    hstring value;
    check_hresult(static_cast<const IUserDataAccount &>(static_cast<const D &>(*this))->get_DeviceAccountTypeId(put(value)));
    return value;
}

template <typename D> hstring impl_IUserDataAccount<D>::PackageFamilyName() const
{
    hstring value;
    check_hresult(static_cast<const IUserDataAccount &>(static_cast<const D &>(*this))->get_PackageFamilyName(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IUserDataAccount<D>::SaveAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IUserDataAccount &>(static_cast<const D &>(*this))->abi_SaveAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IUserDataAccount<D>::DeleteAsync() const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IUserDataAccount &>(static_cast<const D &>(*this))->abi_DeleteAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>> impl_IUserDataAccount<D>::FindAppointmentCalendarsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>> result;
    check_hresult(static_cast<const IUserDataAccount &>(static_cast<const D &>(*this))->abi_FindAppointmentCalendarsAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMailbox>> impl_IUserDataAccount<D>::FindEmailMailboxesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMailbox>> result;
    check_hresult(static_cast<const IUserDataAccount &>(static_cast<const D &>(*this))->abi_FindEmailMailboxesAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactList>> impl_IUserDataAccount<D>::FindContactListsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactList>> result;
    check_hresult(static_cast<const IUserDataAccount &>(static_cast<const D &>(*this))->abi_FindContactListsAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotationList>> impl_IUserDataAccount<D>::FindContactAnnotationListsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotationList>> result;
    check_hresult(static_cast<const IUserDataAccount &>(static_cast<const D &>(*this))->abi_FindContactAnnotationListsAsync(put(result)));
    return result;
}

template <typename D> hstring impl_IUserDataAccount2<D>::EnterpriseId() const
{
    hstring value;
    check_hresult(static_cast<const IUserDataAccount2 &>(static_cast<const D &>(*this))->get_EnterpriseId(put(value)));
    return value;
}

template <typename D> bool impl_IUserDataAccount2<D>::IsProtectedUnderLock() const
{
    bool value {};
    check_hresult(static_cast<const IUserDataAccount2 &>(static_cast<const D &>(*this))->get_IsProtectedUnderLock(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> impl_IUserDataAccount3<D>::ExplictReadAccessPackageFamilyNames() const
{
    Windows::Foundation::Collections::IVector<hstring> value;
    check_hresult(static_cast<const IUserDataAccount3 &>(static_cast<const D &>(*this))->get_ExplictReadAccessPackageFamilyNames(put(value)));
    return value;
}

template <typename D> hstring impl_IUserDataAccount3<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IUserDataAccount3 &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> void impl_IUserDataAccount3<D>::DisplayName(hstring_ref value) const
{
    check_hresult(static_cast<const IUserDataAccount3 &>(static_cast<const D &>(*this))->put_DisplayName(get(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataAccounts::UserDataAccount>> impl_IUserDataAccountStore<D>::FindAccountsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataAccounts::UserDataAccount>> result;
    check_hresult(static_cast<const IUserDataAccountStore &>(static_cast<const D &>(*this))->abi_FindAccountsAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount> impl_IUserDataAccountStore<D>::GetAccountAsync(hstring_ref id) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount> result;
    check_hresult(static_cast<const IUserDataAccountStore &>(static_cast<const D &>(*this))->abi_GetAccountAsync(get(id), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount> impl_IUserDataAccountStore<D>::CreateAccountAsync(hstring_ref userDisplayName) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount> result;
    check_hresult(static_cast<const IUserDataAccountStore &>(static_cast<const D &>(*this))->abi_CreateAccountAsync(get(userDisplayName), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount> impl_IUserDataAccountStore2<D>::CreateAccountAsync(hstring_ref userDisplayName, hstring_ref packageRelativeAppId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount> result;
    check_hresult(static_cast<const IUserDataAccountStore2 &>(static_cast<const D &>(*this))->abi_CreateAccountWithPackageRelativeAppIdAsync(get(userDisplayName), get(packageRelativeAppId), put(result)));
    return result;
}

template <typename D> event_token impl_IUserDataAccountStore2<D>::StoreChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore, Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IUserDataAccountStore2 &>(static_cast<const D &>(*this))->add_StoreChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IUserDataAccountStore2> impl_IUserDataAccountStore2<D>::StoreChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore, Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IUserDataAccountStore2>(this, &ABI::Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2::remove_StoreChanged, StoreChanged(handler));
}

template <typename D> void impl_IUserDataAccountStore2<D>::StoreChanged(event_token token) const
{
    check_hresult(static_cast<const IUserDataAccountStore2 &>(static_cast<const D &>(*this))->remove_StoreChanged(token));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore> impl_IUserDataAccountManagerStatics<D>::RequestStoreAsync(Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreAccessType storeAccessType) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore> result;
    check_hresult(static_cast<const IUserDataAccountManagerStatics &>(static_cast<const D &>(*this))->abi_RequestStoreAsync(storeAccessType, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> impl_IUserDataAccountManagerStatics<D>::ShowAddAccountAsync(Windows::ApplicationModel::UserDataAccounts::UserDataAccountContentKinds contentKinds) const
{
    Windows::Foundation::IAsyncOperation<hstring> result;
    check_hresult(static_cast<const IUserDataAccountManagerStatics &>(static_cast<const D &>(*this))->abi_ShowAddAccountAsync(contentKinds, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IUserDataAccountManagerStatics<D>::ShowAccountSettingsAsync(hstring_ref id) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IUserDataAccountManagerStatics &>(static_cast<const D &>(*this))->abi_ShowAccountSettingsAsync(get(id), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IUserDataAccountManagerStatics<D>::ShowAccountErrorResolverAsync(hstring_ref id) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IUserDataAccountManagerStatics &>(static_cast<const D &>(*this))->abi_ShowAccountErrorResolverAsync(get(id), put(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::UserDataAccounts::UserDataAccountManagerForUser impl_IUserDataAccountManagerStatics2<D>::GetForUser(const Windows::System::User & user) const
{
    Windows::ApplicationModel::UserDataAccounts::UserDataAccountManagerForUser result { nullptr };
    check_hresult(static_cast<const IUserDataAccountManagerStatics2 &>(static_cast<const D &>(*this))->abi_GetForUser(get(user), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore> impl_IUserDataAccountManagerForUser<D>::RequestStoreAsync(Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreAccessType storeAccessType) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore> result;
    check_hresult(static_cast<const IUserDataAccountManagerForUser &>(static_cast<const D &>(*this))->abi_RequestStoreAsync(storeAccessType, put(result)));
    return result;
}

template <typename D> Windows::System::User impl_IUserDataAccountManagerForUser<D>::User() const
{
    Windows::System::User value { nullptr };
    check_hresult(static_cast<const IUserDataAccountManagerForUser &>(static_cast<const D &>(*this))->get_User(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IUserDataAccountStoreChangedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result { nullptr };
    check_hresult(static_cast<const IUserDataAccountStoreChangedEventArgs &>(static_cast<const D &>(*this))->abi_GetDeferral(put(result)));
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

inline Windows::Foundation::IAsyncAction UserDataAccountManager::ShowAccountSettingsAsync(hstring_ref id)
{
    return get_activation_factory<UserDataAccountManager, IUserDataAccountManagerStatics>().ShowAccountSettingsAsync(id);
}

inline Windows::Foundation::IAsyncAction UserDataAccountManager::ShowAccountErrorResolverAsync(hstring_ref id)
{
    return get_activation_factory<UserDataAccountManager, IUserDataAccountManagerStatics>().ShowAccountErrorResolverAsync(id);
}

inline Windows::ApplicationModel::UserDataAccounts::UserDataAccountManagerForUser UserDataAccountManager::GetForUser(const Windows::System::User & user)
{
    return get_activation_factory<UserDataAccountManager, IUserDataAccountManagerStatics2>().GetForUser(user);
}

}

}
