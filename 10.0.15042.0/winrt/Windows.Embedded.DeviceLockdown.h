// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Embedded.DeviceLockdown.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation> : produce_base<D, Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation>
{
    HRESULT __stdcall get_Name(impl::abi_arg_out<hstring> phProfileName) noexcept override
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
    HRESULT __stdcall abi_GetSupportedLockdownProfiles(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<GUID>> ppProfileIDs) noexcept override
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

    HRESULT __stdcall abi_GetCurrentLockdownProfile(GUID * pProfileID) noexcept override
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

    HRESULT __stdcall abi_ApplyLockdownProfileAsync(GUID profileID, impl::abi_arg_out<Windows::Foundation::IAsyncAction> ppWaitableOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ppWaitableOperation = detach_abi(this->shim().ApplyLockdownProfileAsync(profileID));
            return S_OK;
        }
        catch (...)
        {
            *ppWaitableOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetLockdownProfileInformation(GUID profileID, impl::abi_arg_out<Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation> ppInformation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *ppInformation = detach_abi(this->shim().GetLockdownProfileInformation(profileID));
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

namespace Windows::Embedded::DeviceLockdown {

template <typename D> hstring impl_IDeviceLockdownProfileInformation<D>::Name() const
{
    hstring phProfileName;
    check_hresult(WINRT_SHIM(IDeviceLockdownProfileInformation)->get_Name(put_abi(phProfileName)));
    return phProfileName;
}

template <typename D> Windows::Foundation::Collections::IVectorView<GUID> impl_IDeviceLockdownProfileStatics<D>::GetSupportedLockdownProfiles() const
{
    Windows::Foundation::Collections::IVectorView<GUID> ppProfileIDs;
    check_hresult(WINRT_SHIM(IDeviceLockdownProfileStatics)->abi_GetSupportedLockdownProfiles(put_abi(ppProfileIDs)));
    return ppProfileIDs;
}

template <typename D> GUID impl_IDeviceLockdownProfileStatics<D>::GetCurrentLockdownProfile() const
{
    GUID pProfileID {};
    check_hresult(WINRT_SHIM(IDeviceLockdownProfileStatics)->abi_GetCurrentLockdownProfile(&pProfileID));
    return pProfileID;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IDeviceLockdownProfileStatics<D>::ApplyLockdownProfileAsync(GUID profileID) const
{
    Windows::Foundation::IAsyncAction ppWaitableOperation;
    check_hresult(WINRT_SHIM(IDeviceLockdownProfileStatics)->abi_ApplyLockdownProfileAsync(profileID, put_abi(ppWaitableOperation)));
    return ppWaitableOperation;
}

template <typename D> Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation impl_IDeviceLockdownProfileStatics<D>::GetLockdownProfileInformation(GUID profileID) const
{
    Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation ppInformation { nullptr };
    check_hresult(WINRT_SHIM(IDeviceLockdownProfileStatics)->abi_GetLockdownProfileInformation(profileID, put_abi(ppInformation)));
    return ppInformation;
}

inline Windows::Foundation::Collections::IVectorView<GUID> DeviceLockdownProfile::GetSupportedLockdownProfiles()
{
    return get_activation_factory<DeviceLockdownProfile, IDeviceLockdownProfileStatics>().GetSupportedLockdownProfiles();
}

inline GUID DeviceLockdownProfile::GetCurrentLockdownProfile()
{
    return get_activation_factory<DeviceLockdownProfile, IDeviceLockdownProfileStatics>().GetCurrentLockdownProfile();
}

inline Windows::Foundation::IAsyncAction DeviceLockdownProfile::ApplyLockdownProfileAsync(GUID profileID)
{
    return get_activation_factory<DeviceLockdownProfile, IDeviceLockdownProfileStatics>().ApplyLockdownProfileAsync(profileID);
}

inline Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation DeviceLockdownProfile::GetLockdownProfileInformation(GUID profileID)
{
    return get_activation_factory<DeviceLockdownProfile, IDeviceLockdownProfileStatics>().GetLockdownProfileInformation(profileID);
}

}

}

template<>
struct std::hash<winrt::Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation>
{
    size_t operator()(const winrt::Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics>
{
    size_t operator()(const winrt::Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation>
{
    size_t operator()(const winrt::Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
