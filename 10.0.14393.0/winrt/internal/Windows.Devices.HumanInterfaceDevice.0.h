// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::HumanInterfaceDevice {

struct IHidBooleanControl;
struct IHidBooleanControlDescription;
struct IHidBooleanControlDescription2;
struct IHidCollection;
struct IHidDevice;
struct IHidDeviceStatics;
struct IHidFeatureReport;
struct IHidInputReport;
struct IHidInputReportReceivedEventArgs;
struct IHidNumericControl;
struct IHidNumericControlDescription;
struct IHidOutputReport;
struct HidBooleanControl;
struct HidBooleanControlDescription;
struct HidCollection;
struct HidDevice;
struct HidFeatureReport;
struct HidInputReport;
struct HidInputReportReceivedEventArgs;
struct HidNumericControl;
struct HidNumericControlDescription;
struct HidOutputReport;

}

namespace Windows::Devices::HumanInterfaceDevice {

struct IHidBooleanControl;
struct IHidBooleanControlDescription;
struct IHidBooleanControlDescription2;
struct IHidCollection;
struct IHidDevice;
struct IHidDeviceStatics;
struct IHidFeatureReport;
struct IHidInputReport;
struct IHidInputReportReceivedEventArgs;
struct IHidNumericControl;
struct IHidNumericControlDescription;
struct IHidOutputReport;
struct HidBooleanControl;
struct HidBooleanControlDescription;
struct HidCollection;
struct HidDevice;
struct HidFeatureReport;
struct HidInputReport;
struct HidInputReportReceivedEventArgs;
struct HidNumericControl;
struct HidNumericControlDescription;
struct HidOutputReport;

}

namespace Windows::Devices::HumanInterfaceDevice {

enum class HidCollectionType
{
    Physical = 0,
    Application = 1,
    Logical = 2,
    Report = 3,
    NamedArray = 4,
    UsageSwitch = 5,
    UsageModifier = 6,
    Other = 7,
};

enum class HidReportType
{
    Input = 0,
    Output = 1,
    Feature = 2,
};

}

}
