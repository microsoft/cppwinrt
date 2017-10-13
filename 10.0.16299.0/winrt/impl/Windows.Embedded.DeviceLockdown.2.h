// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Embedded.DeviceLockdown.1.h"

WINRT_EXPORT namespace winrt::Windows::Embedded::DeviceLockdown {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::Embedded::DeviceLockdown {

struct DeviceLockdownProfile
{
    DeviceLockdownProfile() = delete;
    static Windows::Foundation::Collections::IVectorView<GUID> GetSupportedLockdownProfiles();
    static GUID GetCurrentLockdownProfile();
    static Windows::Foundation::IAsyncAction ApplyLockdownProfileAsync(GUID const& profileID);
    static Windows::Embedded::DeviceLockdown::DeviceLockdownProfileInformation GetLockdownProfileInformation(GUID const& profileID);
};

struct WINRT_EBO DeviceLockdownProfileInformation :
    Windows::Embedded::DeviceLockdown::IDeviceLockdownProfileInformation
{
    DeviceLockdownProfileInformation(std::nullptr_t) noexcept {}
};

}
