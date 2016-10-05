// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.ApplicationModel.UserDataAccounts.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.ApplicationModel.UserDataAccounts.Provider.3.h"
#include "Windows.ApplicationModel.UserDataAccounts.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountPartnerAccountInfo> : produce_base<D, Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountPartnerAccountInfo>
{
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

    HRESULT __stdcall get_Priority(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Priority());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AccountKind(Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderPartnerAccountKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AccountKind());
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
    HRESULT __stdcall get_ContentKinds(Windows::ApplicationModel::UserDataAccounts::UserDataAccountContentKinds * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentKinds());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PartnerAccountInfos(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountPartnerAccountInfo>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PartnerAccountInfos());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCompleted(abi_arg_in<hstring> userDataAccountId) noexcept override
    {
        try
        {
            this->shim().ReportCompleted(*reinterpret_cast<const hstring *>(&userDataAccountId));
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
    HRESULT __stdcall get_Kind(Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderOperationKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Kind());
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
    HRESULT __stdcall get_UserDataAccountId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UserDataAccountId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCompleted() noexcept override
    {
        try
        {
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
    HRESULT __stdcall get_UserDataAccountId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UserDataAccountId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReportCompleted() noexcept override
    {
        try
        {
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

namespace Windows::ApplicationModel::UserDataAccounts::Provider {

template <typename D> Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderOperationKind impl_IUserDataAccountProviderOperation<D>::Kind() const
{
    Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderOperationKind value {};
    check_hresult(static_cast<const IUserDataAccountProviderOperation &>(static_cast<const D &>(*this))->get_Kind(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::UserDataAccounts::UserDataAccountContentKinds impl_IUserDataAccountProviderAddAccountOperation<D>::ContentKinds() const
{
    Windows::ApplicationModel::UserDataAccounts::UserDataAccountContentKinds value {};
    check_hresult(static_cast<const IUserDataAccountProviderAddAccountOperation &>(static_cast<const D &>(*this))->get_ContentKinds(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountPartnerAccountInfo> impl_IUserDataAccountProviderAddAccountOperation<D>::PartnerAccountInfos() const
{
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountPartnerAccountInfo> value;
    check_hresult(static_cast<const IUserDataAccountProviderAddAccountOperation &>(static_cast<const D &>(*this))->get_PartnerAccountInfos(put(value)));
    return value;
}

template <typename D> void impl_IUserDataAccountProviderAddAccountOperation<D>::ReportCompleted(hstring_ref userDataAccountId) const
{
    check_hresult(static_cast<const IUserDataAccountProviderAddAccountOperation &>(static_cast<const D &>(*this))->abi_ReportCompleted(get(userDataAccountId)));
}

template <typename D> hstring impl_IUserDataAccountPartnerAccountInfo<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IUserDataAccountPartnerAccountInfo &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> uint32_t impl_IUserDataAccountPartnerAccountInfo<D>::Priority() const
{
    uint32_t value {};
    check_hresult(static_cast<const IUserDataAccountPartnerAccountInfo &>(static_cast<const D &>(*this))->get_Priority(&value));
    return value;
}

template <typename D> Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderPartnerAccountKind impl_IUserDataAccountPartnerAccountInfo<D>::AccountKind() const
{
    Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderPartnerAccountKind value {};
    check_hresult(static_cast<const IUserDataAccountPartnerAccountInfo &>(static_cast<const D &>(*this))->get_AccountKind(&value));
    return value;
}

template <typename D> hstring impl_IUserDataAccountProviderSettingsOperation<D>::UserDataAccountId() const
{
    hstring value;
    check_hresult(static_cast<const IUserDataAccountProviderSettingsOperation &>(static_cast<const D &>(*this))->get_UserDataAccountId(put(value)));
    return value;
}

template <typename D> void impl_IUserDataAccountProviderSettingsOperation<D>::ReportCompleted() const
{
    check_hresult(static_cast<const IUserDataAccountProviderSettingsOperation &>(static_cast<const D &>(*this))->abi_ReportCompleted());
}

template <typename D> hstring impl_IUserDataAccountProviderResolveErrorsOperation<D>::UserDataAccountId() const
{
    hstring value;
    check_hresult(static_cast<const IUserDataAccountProviderResolveErrorsOperation &>(static_cast<const D &>(*this))->get_UserDataAccountId(put(value)));
    return value;
}

template <typename D> void impl_IUserDataAccountProviderResolveErrorsOperation<D>::ReportCompleted() const
{
    check_hresult(static_cast<const IUserDataAccountProviderResolveErrorsOperation &>(static_cast<const D &>(*this))->abi_ReportCompleted());
}

}

}
