// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Embedded.DeviceLockdown.2.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Embedded_DeviceLockdown_IDeviceLockdownProfileInformation<D>::Name() const
{
    hstring phProfileName{};
    check_hresult(WINRT_SHIM(Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation)->get_Name(put_abi(phProfileName)));
    return phProfileName;
}

template <typename D> Windows::Foundation::Collections::IVectorView<GUID> consume_Windows_Embedded_DeviceLockdown_IDeviceLockdownProfileStatics<D>::GetSupportedLockdownProfiles() const
{
    Windows::Foundation::Collections::IVectorView<GUID> ppProfileIDs{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics)->GetSupportedLockdownProfiles(put_abi(ppProfileIDs)));
    return ppProfileIDs;
}

template <typename D> GUID consume_Windows_Embedded_DeviceLockdown_IDeviceLockdownProfileStatics<D>::GetCurrentLockdownProfile() const
{
    GUID pProfileID{};
    check_hresult(WINRT_SHIM(Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics)->GetCurrentLockdownProfile(put_abi(pProfileID)));
    return pProfileID;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Embedded_DeviceLockdown_IDeviceLockdownProfileStatics<D>::ApplyLockdownProfileAsync(GUID const& profileID) const
{
    Windows::Foundation::IAsyncAction ppWaitableOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics)->ApplyLockdownProfileAsync(get_abi(profileID), put_abi(ppWaitableOperation)));
    return ppWaitableOperation;
}

template <typename D> Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation consume_Windows_Embedded_DeviceLockdown_IDeviceLockdownProfileStatics<D>::GetLockdownProfileInformation(GUID const& profileID) const
{
    Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation ppInformation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics)->GetLockdownProfileInformation(get_abi(profileID), put_abi(ppInformation)));
    return ppInformation;
}

template <typename D>
struct produce<D, Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation> : produce_base<D, Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation>
{
    HRESULT __stdcall get_Name(HSTRING* phProfileName) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *phProfileName = detach_abi(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *phProfileName = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics> : produce_base<D, Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics>
{
    HRESULT __stdcall GetSupportedLockdownProfiles(::IUnknown** ppProfileIDs) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ppProfileIDs = detach_abi(this->shim().GetSupportedLockdownProfiles());
            return S_OK;
        }
        catch (...)
        {
            *ppProfileIDs = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCurrentLockdownProfile(abi_t<GUID>* pProfileID) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pProfileID = detach_abi(this->shim().GetCurrentLockdownProfile());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ApplyLockdownProfileAsync(abi_t<GUID> profileID, ::IUnknown** ppWaitableOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ppWaitableOperation = detach_abi(this->shim().ApplyLockdownProfileAsync(*reinterpret_cast<GUID const*>(&profileID)));
            return S_OK;
        }
        catch (...)
        {
            *ppWaitableOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetLockdownProfileInformation(abi_t<GUID> profileID, ::IUnknown** ppInformation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ppInformation = detach_abi(this->shim().GetLockdownProfileInformation(*reinterpret_cast<GUID const*>(&profileID)));
            return S_OK;
        }
        catch (...)
        {
            *ppInformation = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Embedded::DeviceLockdown {

inline Windows::Foundation::Collections::IVectorView<GUID> DeviceLockdownProfile::GetSupportedLockdownProfiles()
{
    return get_activation_factory<DeviceLockdownProfile, Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics>().GetSupportedLockdownProfiles();
}

inline GUID DeviceLockdownProfile::GetCurrentLockdownProfile()
{
    return get_activation_factory<DeviceLockdownProfile, Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics>().GetCurrentLockdownProfile();
}

inline Windows::Foundation::IAsyncAction DeviceLockdownProfile::ApplyLockdownProfileAsync(GUID const& profileID)
{
    return get_activation_factory<DeviceLockdownProfile, Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics>().ApplyLockdownProfileAsync(profileID);
}

inline Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation DeviceLockdownProfile::GetLockdownProfileInformation(GUID const& profileID)
{
    return get_activation_factory<DeviceLockdownProfile, Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics>().GetLockdownProfileInformation(profileID);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation> {};

template<> struct hash<winrt::Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics> {};

template<> struct hash<winrt::Windows::Embedded::DeviceLockdown::DeviceLockdownProfile> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Embedded::DeviceLockdown::DeviceLockdownProfile> {};

template<> struct hash<winrt::Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation> {};

}

WINRT_WARNING_POP
