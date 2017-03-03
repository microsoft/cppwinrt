// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Management.Deployment.Preview.3.h"
#include "Windows.Management.Deployment.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Management::Deployment::Preview::IClassicAppManagerStatics> : produce_base<D, Windows::Management::Deployment::Preview::IClassicAppManagerStatics>
{
    HRESULT __stdcall abi_FindInstalledApp(impl::abi_arg_in<hstring> appUninstallKey, impl::abi_arg_out<Windows::Management::Deployment::Preview::IInstalledClassicAppInfo> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FindInstalledApp(*reinterpret_cast<const hstring *>(&appUninstallKey)));
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

    HRESULT __stdcall get_DisplayVersion(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayVersion());
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
    check_hresult(WINRT_SHIM(IInstalledClassicAppInfo)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IInstalledClassicAppInfo<D>::DisplayVersion() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IInstalledClassicAppInfo)->get_DisplayVersion(put_abi(value)));
    return value;
}

template <typename D> Windows::Management::Deployment::Preview::InstalledClassicAppInfo impl_IClassicAppManagerStatics<D>::FindInstalledApp(hstring_view appUninstallKey) const
{
    Windows::Management::Deployment::Preview::InstalledClassicAppInfo result { nullptr };
    check_hresult(WINRT_SHIM(IClassicAppManagerStatics)->abi_FindInstalledApp(get_abi(appUninstallKey), put_abi(result)));
    return result;
}

inline Windows::Management::Deployment::Preview::InstalledClassicAppInfo ClassicAppManager::FindInstalledApp(hstring_view appUninstallKey)
{
    return get_activation_factory<ClassicAppManager, IClassicAppManagerStatics>().FindInstalledApp(appUninstallKey);
}

}

}

template<>
struct std::hash<winrt::Windows::Management::Deployment::Preview::IClassicAppManagerStatics>
{
    size_t operator()(const winrt::Windows::Management::Deployment::Preview::IClassicAppManagerStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Management::Deployment::Preview::IInstalledClassicAppInfo>
{
    size_t operator()(const winrt::Windows::Management::Deployment::Preview::IInstalledClassicAppInfo & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Management::Deployment::Preview::InstalledClassicAppInfo>
{
    size_t operator()(const winrt::Windows::Management::Deployment::Preview::InstalledClassicAppInfo & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
