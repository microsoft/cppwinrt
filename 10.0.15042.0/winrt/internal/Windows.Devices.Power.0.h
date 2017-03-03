// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Power {

struct IBattery;
struct IBatteryReport;
struct IBatteryStatics;
struct Battery;
struct BatteryReport;

}

namespace Windows::Devices::Power {

struct IBattery;
struct IBatteryReport;
struct IBatteryStatics;
struct Battery;
struct BatteryReport;

}

namespace Windows::Devices::Power {

template <typename T> struct impl_IBattery;
template <typename T> struct impl_IBatteryReport;
template <typename T> struct impl_IBatteryStatics;

}

}
