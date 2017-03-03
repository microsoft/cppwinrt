// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.System.Diagnostics.DevicePortal.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::System::Diagnostics::DevicePortal {

struct WINRT_EBO DevicePortalConnection :
    Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection
{
    DevicePortalConnection(std::nullptr_t) noexcept {}
    static Windows::System::Diagnostics::DevicePortal::DevicePortalConnection GetForAppServiceConnection(const Windows::ApplicationModel::AppService::AppServiceConnection & appServiceConnection);
};

struct WINRT_EBO DevicePortalConnectionClosedEventArgs :
    Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionClosedEventArgs
{
    DevicePortalConnectionClosedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DevicePortalConnectionRequestReceivedEventArgs :
    Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionRequestReceivedEventArgs
{
    DevicePortalConnectionRequestReceivedEventArgs(std::nullptr_t) noexcept {}
};

}

}
