// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Management.Deployment.Preview.3.h"
#include "Windows.Management.Deployment.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Management::Deployment::Preview::IClassicAppManagerStatics> : produce_base<D, Windows::Management::Deployment::Preview::IClassicAppManagerStatics>
{
    HRESULT __stdcall abi_FindInstalledApp(abi_arg_in<hstring> appUninstallKey, abi_arg_out<Windows::Management::Deployment::Preview::IInstalledClassicAppInfo> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FindInstalledApp(*reinterpret_cast<const hstring *>(&appUninstallKey)));
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
struct produce<D, Windows::Management::Deployment::Preview::IInstalledClassicAppInfo> : produce_base<D, Windows::Management::Deployment::Preview::IInstalledClassicAppInfo>
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

    HRESULT __stdcall get_DisplayVersion(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayVersion());
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

namespace Windows::Management::Deployment::Preview {

template <typename D> hstring impl_IInstalledClassicAppInfo<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IInstalledClassicAppInfo &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> hstring impl_IInstalledClassicAppInfo<D>::DisplayVersion() const
{
    hstring value;
    check_hresult(static_cast<const IInstalledClassicAppInfo &>(static_cast<const D &>(*this))->get_DisplayVersion(put(value)));
    return value;
}

template <typename D> Windows::Management::Deployment::Preview::InstalledClassicAppInfo impl_IClassicAppManagerStatics<D>::FindInstalledApp(hstring_ref appUninstallKey) const
{
    Windows::Management::Deployment::Preview::InstalledClassicAppInfo result { nullptr };
    check_hresult(static_cast<const IClassicAppManagerStatics &>(static_cast<const D &>(*this))->abi_FindInstalledApp(get(appUninstallKey), put(result)));
    return result;
}

inline Windows::Management::Deployment::Preview::InstalledClassicAppInfo ClassicAppManager::FindInstalledApp(hstring_ref appUninstallKey)
{
    return get_activation_factory<ClassicAppManager, IClassicAppManagerStatics>().FindInstalledApp(appUninstallKey);
}

}

}
