// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Bluetooth::Advertisement {

struct IBluetoothLEAdvertisement;
struct IBluetoothLEAdvertisementBytePattern;
struct IBluetoothLEAdvertisementBytePatternFactory;
struct IBluetoothLEAdvertisementDataSection;
struct IBluetoothLEAdvertisementDataSectionFactory;
struct IBluetoothLEAdvertisementDataTypesStatics;
struct IBluetoothLEAdvertisementFilter;
struct IBluetoothLEAdvertisementPublisher;
struct IBluetoothLEAdvertisementPublisherFactory;
struct IBluetoothLEAdvertisementPublisherStatusChangedEventArgs;
struct IBluetoothLEAdvertisementReceivedEventArgs;
struct IBluetoothLEAdvertisementWatcher;
struct IBluetoothLEAdvertisementWatcherFactory;
struct IBluetoothLEAdvertisementWatcherStoppedEventArgs;
struct IBluetoothLEManufacturerData;
struct IBluetoothLEManufacturerDataFactory;
struct BluetoothLEAdvertisement;
struct BluetoothLEAdvertisementBytePattern;
struct BluetoothLEAdvertisementDataSection;
struct BluetoothLEAdvertisementFilter;
struct BluetoothLEAdvertisementPublisher;
struct BluetoothLEAdvertisementPublisherStatusChangedEventArgs;
struct BluetoothLEAdvertisementReceivedEventArgs;
struct BluetoothLEAdvertisementWatcher;
struct BluetoothLEAdvertisementWatcherStoppedEventArgs;
struct BluetoothLEManufacturerData;

}

namespace Windows::Devices::Bluetooth::Advertisement {

struct IBluetoothLEAdvertisement;
struct IBluetoothLEAdvertisementBytePattern;
struct IBluetoothLEAdvertisementBytePatternFactory;
struct IBluetoothLEAdvertisementDataSection;
struct IBluetoothLEAdvertisementDataSectionFactory;
struct IBluetoothLEAdvertisementDataTypesStatics;
struct IBluetoothLEAdvertisementFilter;
struct IBluetoothLEAdvertisementPublisher;
struct IBluetoothLEAdvertisementPublisherFactory;
struct IBluetoothLEAdvertisementPublisherStatusChangedEventArgs;
struct IBluetoothLEAdvertisementReceivedEventArgs;
struct IBluetoothLEAdvertisementWatcher;
struct IBluetoothLEAdvertisementWatcherFactory;
struct IBluetoothLEAdvertisementWatcherStoppedEventArgs;
struct IBluetoothLEManufacturerData;
struct IBluetoothLEManufacturerDataFactory;
struct BluetoothLEAdvertisement;
struct BluetoothLEAdvertisementBytePattern;
struct BluetoothLEAdvertisementDataSection;
struct BluetoothLEAdvertisementDataTypes;
struct BluetoothLEAdvertisementFilter;
struct BluetoothLEAdvertisementPublisher;
struct BluetoothLEAdvertisementPublisherStatusChangedEventArgs;
struct BluetoothLEAdvertisementReceivedEventArgs;
struct BluetoothLEAdvertisementWatcher;
struct BluetoothLEAdvertisementWatcherStoppedEventArgs;
struct BluetoothLEManufacturerData;

}

namespace Windows::Devices::Bluetooth::Advertisement {

enum class BluetoothLEAdvertisementFlags : unsigned
{
    None = 0x0,
    LimitedDiscoverableMode = 0x1,
    GeneralDiscoverableMode = 0x2,
    ClassicNotSupported = 0x4,
    DualModeControllerCapable = 0x8,
    DualModeHostCapable = 0x10,
};

DEFINE_ENUM_FLAG_OPERATORS(BluetoothLEAdvertisementFlags)

enum class BluetoothLEAdvertisementPublisherStatus
{
    Created = 0,
    Waiting = 1,
    Started = 2,
    Stopping = 3,
    Stopped = 4,
    Aborted = 5,
};

enum class BluetoothLEAdvertisementType
{
    ConnectableUndirected = 0,
    ConnectableDirected = 1,
    ScannableUndirected = 2,
    NonConnectableUndirected = 3,
    ScanResponse = 4,
};

enum class BluetoothLEAdvertisementWatcherStatus
{
    Created = 0,
    Started = 1,
    Stopping = 2,
    Stopped = 3,
    Aborted = 4,
};

enum class BluetoothLEScanningMode
{
    Passive = 0,
    Active = 1,
};

}

}
