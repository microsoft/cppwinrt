// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Lights {

struct ILamp;
struct ILampAvailabilityChangedEventArgs;
struct ILampStatics;
struct Lamp;
struct LampAvailabilityChangedEventArgs;

}

namespace Windows::Devices::Lights {

struct ILamp;
struct ILampAvailabilityChangedEventArgs;
struct ILampStatics;
struct Lamp;
struct LampAvailabilityChangedEventArgs;

}

namespace Windows::Devices::Lights {

template <typename T> struct impl_ILamp;
template <typename T> struct impl_ILampAvailabilityChangedEventArgs;
template <typename T> struct impl_ILampStatics;

}

}
