// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Background {

struct IDeviceServicingDetails;
struct IDeviceUseDetails;
struct DeviceServicingDetails;
struct DeviceUseDetails;

}

namespace Windows::Devices::Background {

struct IDeviceServicingDetails;
struct IDeviceUseDetails;
struct DeviceServicingDetails;
struct DeviceUseDetails;

}

namespace Windows::Devices::Background {

template <typename T> struct impl_IDeviceServicingDetails;
template <typename T> struct impl_IDeviceUseDetails;

}

}
