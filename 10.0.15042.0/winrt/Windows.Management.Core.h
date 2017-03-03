// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Storage.3.h"
#include "internal/Windows.Management.Core.3.h"
#include "Windows.Management.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Management::Core::IApplicationDataManager> : produce_base<D, Windows::Management::Core::IApplicationDataManager>
{};

template <typename D>
struct produce<D, Windows::Management::Core::IApplicationDataManagerStatics> : produce_base<D, Windows::Management::Core::IApplicationDataManagerStatics>
{
    HRESULT __stdcall abi_CreateForPackageFamily(impl::abi_arg_in<hstring> packageFamilyName, impl::abi_arg_out<Windows::Storage::IApplicationData> applicationData) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *applicationData = detach_abi(this->shim().CreateForPackageFamily(*reinterpret_cast<const hstring *>(&packageFamilyName)));
            return S_OK;
        }
        catch (...)
        {
            *applicationData = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Management::Core {

template <typename D> Windows::Storage::ApplicationData impl_IApplicationDataManagerStatics<D>::CreateForPackageFamily(hstring_view packageFamilyName) const
{
    Windows::Storage::ApplicationData applicationData { nullptr };
    check_hresult(WINRT_SHIM(IApplicationDataManagerStatics)->abi_CreateForPackageFamily(get_abi(packageFamilyName), put_abi(applicationData)));
    return applicationData;
}

inline Windows::Storage::ApplicationData ApplicationDataManager::CreateForPackageFamily(hstring_view packageFamilyName)
{
    return get_activation_factory<ApplicationDataManager, IApplicationDataManagerStatics>().CreateForPackageFamily(packageFamilyName);
}

}

}

template<>
struct std::hash<winrt::Windows::Management::Core::IApplicationDataManager>
{
    size_t operator()(const winrt::Windows::Management::Core::IApplicationDataManager & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Management::Core::IApplicationDataManagerStatics>
{
    size_t operator()(const winrt::Windows::Management::Core::IApplicationDataManagerStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Management::Core::ApplicationDataManager>
{
    size_t operator()(const winrt::Windows::Management::Core::ApplicationDataManager & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
