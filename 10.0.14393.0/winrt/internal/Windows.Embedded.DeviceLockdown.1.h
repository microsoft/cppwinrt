// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Embedded.DeviceLockdown.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Embedded::DeviceLockdown {

struct __declspec(uuid("7980e14e-45b1-4a96-92fc-62756b739678")) __declspec(novtable) IDeviceLockdownProfileInformation : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Name(hstring * phProfileName) = 0;
};

struct __declspec(uuid("622f6965-f9a8-41a1-a691-88cd80c7a069")) __declspec(novtable) IDeviceLockdownProfileStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetSupportedLockdownProfiles(Windows::Foundation::Collections::IVectorView<GUID> ** ppProfileIDs) = 0;
    virtual HRESULT __stdcall abi_GetCurrentLockdownProfile(GUID * pProfileID) = 0;
    virtual HRESULT __stdcall abi_ApplyLockdownProfileAsync(GUID profileID, Windows::Foundation::IAsyncAction ** ppWaitableOperation) = 0;
    virtual HRESULT __stdcall abi_GetLockdownProfileInformation(GUID profileID, Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation ** ppInformation) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation> { using default_interface = Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation; };

}

namespace Windows::Embedded::DeviceLockdown {

template <typename T> struct impl_IDeviceLockdownProfileInformation;
template <typename T> struct impl_IDeviceLockdownProfileStatics;

}

namespace impl {

template <> struct traits<Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation>
{
    using abi = ABI::Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation;
    template <typename D> using consume = Windows::Embedded::DeviceLockdown::impl_IDeviceLockdownProfileInformation<D>;
};

template <> struct traits<Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics>
{
    using abi = ABI::Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileStatics;
    template <typename D> using consume = Windows::Embedded::DeviceLockdown::impl_IDeviceLockdownProfileStatics<D>;
};

template <> struct traits<Windows::Embedded::DeviceLockdown::DeviceLockdownProfile>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Embedded.DeviceLockdown.DeviceLockdownProfile"; }
};

template <> struct traits<Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation>
{
    using abi = ABI::Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Embedded.DeviceLockdown.DeviceLockdownProfileInformation"; }
};

}

}
