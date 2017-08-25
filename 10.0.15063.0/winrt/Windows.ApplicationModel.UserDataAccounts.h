// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.ApplicationModel.Appointments.2.h"
#include "winrt/impl/Windows.ApplicationModel.Contacts.2.h"
#include "winrt/impl/Windows.ApplicationModel.Email.2.h"
#include "winrt/impl/Windows.ApplicationModel.UserDataTasks.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.ApplicationModel.UserDataAccounts.2.h"
#include "winrt/Windows.ApplicationModel.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccount)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount<D>::UserDisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccount)->get_UserDisplayName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount<D>::UserDisplayName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccount)->put_UserDisplayName(get_abi(value)));
}

template <typename D> Windows::ApplicationModel::UserDataAccounts::UserDataAccountOtherAppReadAccess consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount<D>::OtherAppReadAccess() const
{
    Windows::ApplicationModel::UserDataAccounts::UserDataAccountOtherAppReadAccess value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccount)->get_OtherAppReadAccess(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount<D>::OtherAppReadAccess(Windows::ApplicationModel::UserDataAccounts::UserDataAccountOtherAppReadAccess const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccount)->put_OtherAppReadAccess(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IRandomAccessStreamReference consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount<D>::Icon() const
{
    Windows::Storage::Streams::IRandomAccessStreamReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccount)->get_Icon(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount<D>::DeviceAccountTypeId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccount)->get_DeviceAccountTypeId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount<D>::PackageFamilyName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccount)->get_PackageFamilyName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount<D>::SaveAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccount)->SaveAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount<D>::DeleteAsync() const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccount)->DeleteAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>> consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount<D>::FindAppointmentCalendarsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccount)->FindAppointmentCalendarsAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMailbox>> consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount<D>::FindEmailMailboxesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMailbox>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccount)->FindEmailMailboxesAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactList>> consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount<D>::FindContactListsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactList>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccount)->FindContactListsAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotationList>> consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount<D>::FindContactAnnotationListsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactAnnotationList>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccount)->FindContactAnnotationListsAsync(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount2<D>::EnterpriseId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccount2)->get_EnterpriseId(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount2<D>::IsProtectedUnderLock() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccount2)->get_IsProtectedUnderLock(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount3<D>::ExplictReadAccessPackageFamilyNames() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccount3)->get_ExplictReadAccessPackageFamilyNames(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount3<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccount3)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount3<D>::DisplayName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccount3)->put_DisplayName(get_abi(value)));
}

template <typename D> bool consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount4<D>::CanShowCreateContactGroup() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4)->get_CanShowCreateContactGroup(&value));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount4<D>::CanShowCreateContactGroup(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4)->put_CanShowCreateContactGroup(value));
}

template <typename D> Windows::Foundation::Collections::IPropertySet consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount4<D>::ProviderProperties() const
{
    Windows::Foundation::Collections::IPropertySet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4)->get_ProviderProperties(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataTasks::UserDataTaskList>> consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount4<D>::FindUserDataTaskListsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataTasks::UserDataTaskList>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4)->FindUserDataTaskListsAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactGroup>> consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount4<D>::FindContactGroupsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Contacts::ContactGroup>> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4)->FindContactGroupsAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount4<D>::TryShowCreateContactGroupAsync() const
{
    Windows::Foundation::IAsyncOperation<hstring> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4)->TryShowCreateContactGroupAsync(put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount4<D>::IsProtectedUnderLock(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4)->put_IsProtectedUnderLock(value));
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccount4<D>::Icon(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4)->put_Icon(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore> consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountManagerForUser<D>::RequestStoreAsync(Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreAccessType const& storeAccessType) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerForUser)->RequestStoreAsync(get_abi(storeAccessType), put_abi(result)));
    return result;
}

template <typename D> Windows::System::User consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountManagerForUser<D>::User() const
{
    Windows::System::User value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerForUser)->get_User(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore> consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountManagerStatics<D>::RequestStoreAsync(Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreAccessType const& storeAccessType) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics)->RequestStoreAsync(get_abi(storeAccessType), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<hstring> consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountManagerStatics<D>::ShowAddAccountAsync(Windows::ApplicationModel::UserDataAccounts::UserDataAccountContentKinds const& contentKinds) const
{
    Windows::Foundation::IAsyncOperation<hstring> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics)->ShowAddAccountAsync(get_abi(contentKinds), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountManagerStatics<D>::ShowAccountSettingsAsync(param::hstring const& id) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics)->ShowAccountSettingsAsync(get_abi(id), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountManagerStatics<D>::ShowAccountErrorResolverAsync(param::hstring const& id) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics)->ShowAccountErrorResolverAsync(get_abi(id), put_abi(result)));
    return result;
}

template <typename D> Windows::ApplicationModel::UserDataAccounts::UserDataAccountManagerForUser consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountManagerStatics2<D>::GetForUser(Windows::System::User const& user) const
{
    Windows::ApplicationModel::UserDataAccounts::UserDataAccountManagerForUser result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics2)->GetForUser(get_abi(user), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataAccounts::UserDataAccount>> consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStore<D>::FindAccountsAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataAccounts::UserDataAccount>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore)->FindAccountsAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount> consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStore<D>::GetAccountAsync(param::hstring const& id) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore)->GetAccountAsync(get_abi(id), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount> consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStore<D>::CreateAccountAsync(param::hstring const& userDisplayName) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore)->CreateAccountAsync(get_abi(userDisplayName), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount> consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStore2<D>::CreateAccountAsync(param::hstring const& userDisplayName, param::hstring const& packageRelativeAppId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2)->CreateAccountWithPackageRelativeAppIdAsync(get_abi(userDisplayName), get_abi(packageRelativeAppId), put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStore2<D>::StoreChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore, Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2)->add_StoreChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2> consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStore2<D>::StoreChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore, Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2>(this, &abi_t<Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2>::remove_StoreChanged, StoreChanged(handler));
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStore2<D>::StoreChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2)->remove_StoreChanged(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount> consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStore3<D>::CreateAccountAsync(param::hstring const& userDisplayName, param::hstring const& packageRelativeAppId, param::hstring const& enterpriseId) const
{
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccount> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore3)->CreateAccountWithPackageRelativeAppIdAndEnterpriseIdAsync(get_abi(userDisplayName), get_abi(packageRelativeAppId), get_abi(enterpriseId), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_ApplicationModel_UserDataAccounts_IUserDataAccountStoreChangedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStoreChangedEventArgs)->GetDeferral(put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccount> : produce_base<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccount>
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

    HRESULT __stdcall get_UserDisplayName(HSTRING* value) noexcept override
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

    HRESULT __stdcall put_UserDisplayName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UserDisplayName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OtherAppReadAccess(abi_t<Windows::ApplicationModel::UserDataAccounts::UserDataAccountOtherAppReadAccess>* value) noexcept override
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

    HRESULT __stdcall put_OtherAppReadAccess(abi_t<Windows::ApplicationModel::UserDataAccounts::UserDataAccountOtherAppReadAccess> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OtherAppReadAccess(*reinterpret_cast<Windows::ApplicationModel::UserDataAccounts::UserDataAccountOtherAppReadAccess const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Icon(::IUnknown** value) noexcept override
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

    HRESULT __stdcall get_DeviceAccountTypeId(HSTRING* value) noexcept override
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

    HRESULT __stdcall get_PackageFamilyName(HSTRING* value) noexcept override
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

    HRESULT __stdcall SaveAsync(::IUnknown** result) noexcept override
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

    HRESULT __stdcall DeleteAsync(::IUnknown** result) noexcept override
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

    HRESULT __stdcall FindAppointmentCalendarsAsync(::IUnknown** result) noexcept override
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

    HRESULT __stdcall FindEmailMailboxesAsync(::IUnknown** result) noexcept override
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

    HRESULT __stdcall FindContactListsAsync(::IUnknown** result) noexcept override
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

    HRESULT __stdcall FindContactAnnotationListsAsync(::IUnknown** result) noexcept override
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
    HRESULT __stdcall get_EnterpriseId(HSTRING* value) noexcept override
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

    HRESULT __stdcall get_IsProtectedUnderLock(bool* value) noexcept override
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
    HRESULT __stdcall get_ExplictReadAccessPackageFamilyNames(::IUnknown** value) noexcept override
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
};

template <typename D>
struct produce<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4> : produce_base<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4>
{
    HRESULT __stdcall get_CanShowCreateContactGroup(bool* value) noexcept override
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

    HRESULT __stdcall get_ProviderProperties(::IUnknown** value) noexcept override
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

    HRESULT __stdcall FindUserDataTaskListsAsync(::IUnknown** operation) noexcept override
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

    HRESULT __stdcall FindContactGroupsAsync(::IUnknown** operation) noexcept override
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

    HRESULT __stdcall TryShowCreateContactGroupAsync(::IUnknown** operation) noexcept override
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

    HRESULT __stdcall put_Icon(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Icon(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&value));
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
    HRESULT __stdcall RequestStoreAsync(abi_t<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreAccessType> storeAccessType, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestStoreAsync(*reinterpret_cast<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreAccessType const*>(&storeAccessType)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
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
struct produce<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics> : produce_base<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics>
{
    HRESULT __stdcall RequestStoreAsync(abi_t<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreAccessType> storeAccessType, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestStoreAsync(*reinterpret_cast<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreAccessType const*>(&storeAccessType)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShowAddAccountAsync(abi_t<Windows::ApplicationModel::UserDataAccounts::UserDataAccountContentKinds> contentKinds, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ShowAddAccountAsync(*reinterpret_cast<Windows::ApplicationModel::UserDataAccounts::UserDataAccountContentKinds const*>(&contentKinds)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShowAccountSettingsAsync(HSTRING id, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ShowAccountSettingsAsync(*reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ShowAccountErrorResolverAsync(HSTRING id, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().ShowAccountErrorResolverAsync(*reinterpret_cast<hstring const*>(&id)));
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
struct produce<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore> : produce_base<D, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore>
{
    HRESULT __stdcall FindAccountsAsync(::IUnknown** result) noexcept override
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

    HRESULT __stdcall GetAccountAsync(HSTRING id, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetAccountAsync(*reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateAccountAsync(HSTRING userDisplayName, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateAccountAsync(*reinterpret_cast<hstring const*>(&userDisplayName)));
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
    HRESULT __stdcall CreateAccountWithPackageRelativeAppIdAsync(HSTRING userDisplayName, HSTRING packageRelativeAppId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateAccountAsync(*reinterpret_cast<hstring const*>(&userDisplayName), *reinterpret_cast<hstring const*>(&packageRelativeAppId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_StoreChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().StoreChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore, Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_StoreChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StoreChanged(*reinterpret_cast<event_token const*>(&token));
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
    HRESULT __stdcall CreateAccountWithPackageRelativeAppIdAndEnterpriseIdAsync(HSTRING userDisplayName, HSTRING packageRelativeAppId, HSTRING enterpriseId, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateAccountAsync(*reinterpret_cast<hstring const*>(&userDisplayName), *reinterpret_cast<hstring const*>(&packageRelativeAppId), *reinterpret_cast<hstring const*>(&enterpriseId)));
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
    HRESULT __stdcall GetDeferral(::IUnknown** result) noexcept override
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

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserDataAccounts {

inline Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore> UserDataAccountManager::RequestStoreAsync(Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreAccessType const& storeAccessType)
{
    return get_activation_factory<UserDataAccountManager, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics>().RequestStoreAsync(storeAccessType);
}

inline Windows::Foundation::IAsyncOperation<hstring> UserDataAccountManager::ShowAddAccountAsync(Windows::ApplicationModel::UserDataAccounts::UserDataAccountContentKinds const& contentKinds)
{
    return get_activation_factory<UserDataAccountManager, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics>().ShowAddAccountAsync(contentKinds);
}

inline Windows::Foundation::IAsyncAction UserDataAccountManager::ShowAccountSettingsAsync(param::hstring const& id)
{
    return get_activation_factory<UserDataAccountManager, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics>().ShowAccountSettingsAsync(id);
}

inline Windows::Foundation::IAsyncAction UserDataAccountManager::ShowAccountErrorResolverAsync(param::hstring const& id)
{
    return get_activation_factory<UserDataAccountManager, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics>().ShowAccountErrorResolverAsync(id);
}

inline Windows::ApplicationModel::UserDataAccounts::UserDataAccountManagerForUser UserDataAccountManager::GetForUser(Windows::System::User const& user)
{
    return get_activation_factory<UserDataAccountManager, Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics2>().GetForUser(user);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccount> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccount> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccount2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccount2> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccount3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccount3> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccount4> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerForUser> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerForUser> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccountManagerStatics2> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore2> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStore3> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStoreChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataAccounts::IUserDataAccountStoreChangedEventArgs> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataAccounts::UserDataAccount> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataAccounts::UserDataAccount> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataAccounts::UserDataAccountManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataAccounts::UserDataAccountManager> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataAccounts::UserDataAccountManagerForUser> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataAccounts::UserDataAccountManagerForUser> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataAccounts::UserDataAccountStore> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataAccounts::UserDataAccountStoreChangedEventArgs> {};

}

WINRT_WARNING_POP
