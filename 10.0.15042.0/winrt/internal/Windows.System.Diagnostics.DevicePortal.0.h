// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::System::Diagnostics::DevicePortal {

struct IDevicePortalConnection;
struct IDevicePortalConnectionClosedEventArgs;
struct IDevicePortalConnectionRequestReceivedEventArgs;
struct IDevicePortalConnectionStatics;
struct DevicePortalConnection;
struct DevicePortalConnectionClosedEventArgs;
struct DevicePortalConnectionRequestReceivedEventArgs;

}

namespace Windows::System::Diagnostics::DevicePortal {

struct IDevicePortalConnection;
struct IDevicePortalConnectionClosedEventArgs;
struct IDevicePortalConnectionRequestReceivedEventArgs;
struct IDevicePortalConnectionStatics;
struct DevicePortalConnection;
struct DevicePortalConnectionClosedEventArgs;
struct DevicePortalConnectionRequestReceivedEventArgs;

}

namespace Windows::System::Diagnostics::DevicePortal {

template <typename T> struct impl_IDevicePortalConnection;
template <typename T> struct impl_IDevicePortalConnectionClosedEventArgs;
template <typename T> struct impl_IDevicePortalConnectionRequestReceivedEventArgs;
template <typename T> struct impl_IDevicePortalConnectionStatics;

}

namespace Windows::System::Diagnostics::DevicePortal {

enum class DevicePortalConnectionClosedReason
{
    Unknown = 0,
    ResourceLimitsExceeded = 1,
    ProtocolError = 2,
    NotAuthorized = 3,
    UserNotPresent = 4,
    ServiceTerminated = 5,
};

}

}
