// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.AppService.1.h"
#include "winrt/impl/Windows.Web.Http.1.h"
#include "winrt/impl/Windows.System.Diagnostics.DevicePortal.1.h"

WINRT_EXPORT namespace winrt::Windows::System::Diagnostics::DevicePortal {

struct WINRT_EBO DevicePortalConnection :
    Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection
{
    DevicePortalConnection(std::nullptr_t) noexcept {}
    static Windows::System::Diagnostics::DevicePortal::DevicePortalConnection GetForAppServiceConnection(Windows::ApplicationModel::AppService::AppServiceConnection const& appServiceConnection);
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
