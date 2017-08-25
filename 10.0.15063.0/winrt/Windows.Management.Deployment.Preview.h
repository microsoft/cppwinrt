// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Management.Deployment.Preview.2.h"
#include "winrt/Windows.Management.Deployment.h"

namespace winrt::impl {

template <typename D> Windows::Management::Deployment::Preview::InstalledClassicAppInfo consume_Windows_Management_Deployment_Preview_IClassicAppManagerStatics<D>::FindInstalledApp(param::hstring const& appUninstallKey) const
{
    Windows::Management::Deployment::Preview::InstalledClassicAppInfo result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::Preview::IClassicAppManagerStatics)->FindInstalledApp(get_abi(appUninstallKey), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Management_Deployment_Preview_IInstalledClassicAppInfo<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::Preview::IInstalledClassicAppInfo)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Management_Deployment_Preview_IInstalledClassicAppInfo<D>::DisplayVersion() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Management::Deployment::Preview::IInstalledClassicAppInfo)->get_DisplayVersion(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Management::Deployment::Preview::IClassicAppManagerStatics> : produce_base<D, Windows::Management::Deployment::Preview::IClassicAppManagerStatics>
{
    HRESULT __stdcall FindInstalledApp(HSTRING appUninstallKey, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FindInstalledApp(*reinterpret_cast<hstring const*>(&appUninstallKey)));
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

    HRESULT __stdcall get_DisplayVersion(HSTRING* value) noexcept override
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

WINRT_EXPORT namespace winrt::Windows::Management::Deployment::Preview {

inline Windows::Management::Deployment::Preview::InstalledClassicAppInfo ClassicAppManager::FindInstalledApp(param::hstring const& appUninstallKey)
{
    return get_activation_factory<ClassicAppManager, Windows::Management::Deployment::Preview::IClassicAppManagerStatics>().FindInstalledApp(appUninstallKey);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Management::Deployment::Preview::IClassicAppManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::Deployment::Preview::IClassicAppManagerStatics> {};

template<> struct hash<winrt::Windows::Management::Deployment::Preview::IInstalledClassicAppInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::Deployment::Preview::IInstalledClassicAppInfo> {};

template<> struct hash<winrt::Windows::Management::Deployment::Preview::ClassicAppManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::Deployment::Preview::ClassicAppManager> {};

template<> struct hash<winrt::Windows::Management::Deployment::Preview::InstalledClassicAppInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::Deployment::Preview::InstalledClassicAppInfo> {};

}

WINRT_WARNING_POP
