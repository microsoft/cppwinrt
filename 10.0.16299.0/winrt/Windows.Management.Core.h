// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Management.Core.2.h"
#include "winrt/Windows.Management.h"

namespace winrt::impl {

template <typename D> Windows::Storage::ApplicationData consume_Windows_Management_Core_IApplicationDataManagerStatics<D>::CreateForPackageFamily(param::hstring const& packageFamilyName) const
{
    Windows::Storage::ApplicationData applicationData{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Management::Core::IApplicationDataManagerStatics)->CreateForPackageFamily(get_abi(packageFamilyName), put_abi(applicationData)));
    return applicationData;
}

template <typename D>
struct produce<D, Windows::Management::Core::IApplicationDataManager> : produce_base<D, Windows::Management::Core::IApplicationDataManager>
{};

template <typename D>
struct produce<D, Windows::Management::Core::IApplicationDataManagerStatics> : produce_base<D, Windows::Management::Core::IApplicationDataManagerStatics>
{
    HRESULT __stdcall CreateForPackageFamily(HSTRING packageFamilyName, ::IUnknown** applicationData) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *applicationData = detach_abi(this->shim().CreateForPackageFamily(*reinterpret_cast<hstring const*>(&packageFamilyName)));
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

WINRT_EXPORT namespace winrt::Windows::Management::Core {

inline Windows::Storage::ApplicationData ApplicationDataManager::CreateForPackageFamily(param::hstring const& packageFamilyName)
{
    return get_activation_factory<ApplicationDataManager, Windows::Management::Core::IApplicationDataManagerStatics>().CreateForPackageFamily(packageFamilyName);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Management::Core::IApplicationDataManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::Core::IApplicationDataManager> {};

template<> struct hash<winrt::Windows::Management::Core::IApplicationDataManagerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::Core::IApplicationDataManagerStatics> {};

template<> struct hash<winrt::Windows::Management::Core::ApplicationDataManager> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Management::Core::ApplicationDataManager> {};

}

WINRT_WARNING_POP
