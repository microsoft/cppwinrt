// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.ApplicationModel.UserDataAccounts.2.h"
#include "winrt/impl/Windows.ApplicationModel.UserDataAccounts.Provider.2.h"
#include "winrt/Windows.ApplicationModel.UserDataAccounts.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountPartnerAccountInfo<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountPartnerAccountInfo)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountPartnerAccountInfo<D>::Priority() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountPartnerAccountInfo)->get_Priority(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderPartnerAccountKind consume_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountPartnerAccountInfo<D>::AccountKind() const
{
    Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderPartnerAccountKind value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountPartnerAccountInfo)->get_AccountKind(put_abi(value)));
    return value;
}

template <typename D> Windows::ApplicationModel::UserDataAccounts::UserDataAccountContentKinds consume_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountProviderAddAccountOperation<D>::ContentKinds() const
{
    Windows::ApplicationModel::UserDataAccounts::UserDataAccountContentKinds value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderAddAccountOperation)->get_ContentKinds(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountPartnerAccountInfo> consume_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountProviderAddAccountOperation<D>::PartnerAccountInfos() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountPartnerAccountInfo> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderAddAccountOperation)->get_PartnerAccountInfos(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountProviderAddAccountOperation<D>::ReportCompleted(param::hstring const& userDataAccountId) const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderAddAccountOperation)->ReportCompleted(get_abi(userDataAccountId)));
}

template <typename D> Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderOperationKind consume_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountProviderOperation<D>::Kind() const
{
    Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderOperationKind value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountProviderResolveErrorsOperation<D>::UserDataAccountId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderResolveErrorsOperation)->get_UserDataAccountId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountProviderResolveErrorsOperation<D>::ReportCompleted() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderResolveErrorsOperation)->ReportCompleted());
}

template <typename D> hstring consume_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountProviderSettingsOperation<D>::UserDataAccountId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderSettingsOperation)->get_UserDataAccountId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountProviderSettingsOperation<D>::ReportCompleted() const
{
    check_hresult(WINRT_SHIM(Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderSettingsOperation)->ReportCompleted());
}

template <typename D>
struct produce<D, Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountPartnerAccountInfo> : produce_base<D, Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountPartnerAccountInfo>
{
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

    HRESULT __stdcall get_Priority(uint32_t* value) noexcept override
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

    HRESULT __stdcall get_AccountKind(abi_t<Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderPartnerAccountKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AccountKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderAddAccountOperation> : produce_base<D, Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderAddAccountOperation>
{
    HRESULT __stdcall get_ContentKinds(abi_t<Windows::ApplicationModel::UserDataAccounts::UserDataAccountContentKinds>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentKinds());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PartnerAccountInfos(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PartnerAccountInfos());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReportCompleted(HSTRING userDataAccountId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportCompleted(*reinterpret_cast<hstring const*>(&userDataAccountId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation> : produce_base<D, Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation>
{
    HRESULT __stdcall get_Kind(abi_t<Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderOperationKind>* value) noexcept override
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
};

template <typename D>
struct produce<D, Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderResolveErrorsOperation> : produce_base<D, Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderResolveErrorsOperation>
{
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

    HRESULT __stdcall ReportCompleted() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportCompleted();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderSettingsOperation> : produce_base<D, Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderSettingsOperation>
{
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

    HRESULT __stdcall ReportCompleted() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportCompleted();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserDataAccounts::Provider {

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountPartnerAccountInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountPartnerAccountInfo> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderAddAccountOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderAddAccountOperation> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderResolveErrorsOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderResolveErrorsOperation> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderSettingsOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderSettingsOperation> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountPartnerAccountInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountPartnerAccountInfo> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderAddAccountOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderAddAccountOperation> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderResolveErrorsOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderResolveErrorsOperation> {};

template<> struct hash<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderSettingsOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderSettingsOperation> {};

}

WINRT_WARNING_POP
