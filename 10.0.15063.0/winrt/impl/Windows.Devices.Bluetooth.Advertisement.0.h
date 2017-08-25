// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth {

enum class BluetoothError;
struct BluetoothSignalStrengthFilter;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::Advertisement {

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

namespace winrt::impl {

template <> struct category<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisement>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePattern>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePatternFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSection>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSectionFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementFilter>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisher>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisherFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisherStatusChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcherFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcherStoppedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerData>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerDataFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisement>{ using type = class_category; };
template <> struct category<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementBytePattern>{ using type = class_category; };
template <> struct category<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementDataSection>{ using type = class_category; };
template <> struct category<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementDataTypes>{ using type = class_category; };
template <> struct category<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter>{ using type = class_category; };
template <> struct category<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisher>{ using type = class_category; };
template <> struct category<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatusChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher>{ using type = class_category; };
template <> struct category<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcherStoppedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Bluetooth::Advertisement::BluetoothLEManufacturerData>{ using type = class_category; };
template <> struct category<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFlags>{ using type = enum_category; };
template <> struct category<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatus>{ using type = enum_category; };
template <> struct category<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementType>{ using type = enum_category; };
template <> struct category<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcherStatus>{ using type = enum_category; };
template <> struct category<Windows::Devices::Bluetooth::Advertisement::BluetoothLEScanningMode>{ using type = enum_category; };
template <> struct name<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisement>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisement" }; };
template <> struct name<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePattern>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementBytePattern" }; };
template <> struct name<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePatternFactory>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementBytePatternFactory" }; };
template <> struct name<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSection>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementDataSection" }; };
template <> struct name<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSectionFactory>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementDataSectionFactory" }; };
template <> struct name<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementDataTypesStatics" }; };
template <> struct name<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementFilter>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementFilter" }; };
template <> struct name<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisher>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementPublisher" }; };
template <> struct name<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisherFactory>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementPublisherFactory" }; };
template <> struct name<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisherStatusChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementPublisherStatusChangedEventArgs" }; };
template <> struct name<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementReceivedEventArgs" }; };
template <> struct name<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementWatcher" }; };
template <> struct name<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcherFactory>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementWatcherFactory" }; };
template <> struct name<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcherStoppedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEAdvertisementWatcherStoppedEventArgs" }; };
template <> struct name<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerData>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEManufacturerData" }; };
template <> struct name<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerDataFactory>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Advertisement.IBluetoothLEManufacturerDataFactory" }; };
template <> struct name<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisement>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisement" }; };
template <> struct name<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementBytePattern>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementBytePattern" }; };
template <> struct name<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementDataSection>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementDataSection" }; };
template <> struct name<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementDataTypes>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementDataTypes" }; };
template <> struct name<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementFilter" }; };
template <> struct name<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisher>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementPublisher" }; };
template <> struct name<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatusChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementPublisherStatusChangedEventArgs" }; };
template <> struct name<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementReceivedEventArgs" }; };
template <> struct name<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementWatcher" }; };
template <> struct name<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcherStoppedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementWatcherStoppedEventArgs" }; };
template <> struct name<Windows::Devices::Bluetooth::Advertisement::BluetoothLEManufacturerData>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEManufacturerData" }; };
template <> struct name<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFlags>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementFlags" }; };
template <> struct name<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatus>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementPublisherStatus" }; };
template <> struct name<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementType>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementType" }; };
template <> struct name<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcherStatus>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEAdvertisementWatcherStatus" }; };
template <> struct name<Windows::Devices::Bluetooth::Advertisement::BluetoothLEScanningMode>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Advertisement.BluetoothLEScanningMode" }; };
template <> struct guid<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisement>{ static constexpr GUID value{ 0x066FB2B7,0x33D1,0x4E7D,{ 0x83,0x67,0xCF,0x81,0xD0,0xF7,0x96,0x53 } }; };
template <> struct guid<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePattern>{ static constexpr GUID value{ 0xFBFAD7F2,0xB9C5,0x4A08,{ 0xBC,0x51,0x50,0x2F,0x8E,0xF6,0x8A,0x79 } }; };
template <> struct guid<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePatternFactory>{ static constexpr GUID value{ 0xC2E24D73,0xFD5C,0x4EC3,{ 0xBE,0x2A,0x9C,0xA6,0xFA,0x11,0xB7,0xBD } }; };
template <> struct guid<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSection>{ static constexpr GUID value{ 0xD7213314,0x3A43,0x40F9,{ 0xB6,0xF0,0x92,0xBF,0xEF,0xC3,0x4A,0xE3 } }; };
template <> struct guid<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSectionFactory>{ static constexpr GUID value{ 0xE7A40942,0xA845,0x4045,{ 0xBF,0x7E,0x3E,0x99,0x71,0xDB,0x8A,0x6B } }; };
template <> struct guid<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics>{ static constexpr GUID value{ 0x3BB6472F,0x0606,0x434B,{ 0xA7,0x6E,0x74,0x15,0x9F,0x06,0x84,0xD3 } }; };
template <> struct guid<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementFilter>{ static constexpr GUID value{ 0x131EB0D3,0xD04E,0x47B1,{ 0x83,0x7E,0x49,0x40,0x5B,0xF6,0xF8,0x0F } }; };
template <> struct guid<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisher>{ static constexpr GUID value{ 0xCDE820F9,0xD9FA,0x43D6,{ 0xA2,0x64,0xDD,0xD8,0xB7,0xDA,0x8B,0x78 } }; };
template <> struct guid<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisherFactory>{ static constexpr GUID value{ 0x5C5F065E,0xB863,0x4981,{ 0xA1,0xAF,0x1C,0x54,0x4D,0x8B,0x0C,0x0D } }; };
template <> struct guid<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisherStatusChangedEventArgs>{ static constexpr GUID value{ 0x09C2BD9F,0x2DFF,0x4B23,{ 0x86,0xEE,0x0D,0x14,0xFB,0x94,0xAE,0xAE } }; };
template <> struct guid<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs>{ static constexpr GUID value{ 0x27987DDF,0xE596,0x41BE,{ 0x8D,0x43,0x9E,0x67,0x31,0xD4,0xA9,0x13 } }; };
template <> struct guid<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher>{ static constexpr GUID value{ 0xA6AC336F,0xF3D3,0x4297,{ 0x8D,0x6C,0xC8,0x1E,0xA6,0x62,0x3F,0x40 } }; };
template <> struct guid<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcherFactory>{ static constexpr GUID value{ 0x9AAF2D56,0x39AC,0x453E,{ 0xB3,0x2A,0x85,0xC6,0x57,0xE0,0x17,0xF1 } }; };
template <> struct guid<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcherStoppedEventArgs>{ static constexpr GUID value{ 0xDD40F84D,0xE7B9,0x43E3,{ 0x9C,0x04,0x06,0x85,0xD0,0x85,0xFD,0x8C } }; };
template <> struct guid<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerData>{ static constexpr GUID value{ 0x912DBA18,0x6963,0x4533,{ 0xB0,0x61,0x46,0x94,0xDA,0xFB,0x34,0xE5 } }; };
template <> struct guid<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerDataFactory>{ static constexpr GUID value{ 0xC09B39F8,0x319A,0x441E,{ 0x8D,0xE5,0x66,0xA8,0x1E,0x87,0x7A,0x6C } }; };
template <> struct default_interface<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisement>{ using type = Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisement; };
template <> struct default_interface<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementBytePattern>{ using type = Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePattern; };
template <> struct default_interface<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementDataSection>{ using type = Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSection; };
template <> struct default_interface<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter>{ using type = Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementFilter; };
template <> struct default_interface<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisher>{ using type = Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisher; };
template <> struct default_interface<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatusChangedEventArgs>{ using type = Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisherStatusChangedEventArgs; };
template <> struct default_interface<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs>{ using type = Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs; };
template <> struct default_interface<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher>{ using type = Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher; };
template <> struct default_interface<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcherStoppedEventArgs>{ using type = Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcherStoppedEventArgs; };
template <> struct default_interface<Windows::Devices::Bluetooth::Advertisement::BluetoothLEManufacturerData>{ using type = Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerData; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisement
{
    Windows::Foundation::IReference<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFlags> Flags() const;
    void Flags(optional<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFlags> const& value) const;
    hstring LocalName() const;
    void LocalName(param::hstring const& value) const;
    Windows::Foundation::Collections::IVector<GUID> ServiceUuids() const;
    Windows::Foundation::Collections::IVector<Windows::Devices::Bluetooth::Advertisement::BluetoothLEManufacturerData> ManufacturerData() const;
    Windows::Foundation::Collections::IVector<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementDataSection> DataSections() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::Advertisement::BluetoothLEManufacturerData> GetManufacturerDataByCompanyId(uint16_t companyId) const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementDataSection> GetSectionsByType(uint8_t type) const;
};
template <> struct consume<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisement> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisement<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementBytePattern
{
    uint8_t DataType() const;
    void DataType(uint8_t value) const;
    int16_t Offset() const;
    void Offset(int16_t value) const;
    Windows::Storage::Streams::IBuffer Data() const;
    void Data(Windows::Storage::Streams::IBuffer const& value) const;
};
template <> struct consume<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePattern> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementBytePattern<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementBytePatternFactory
{
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementBytePattern Create(uint8_t dataType, int16_t offset, Windows::Storage::Streams::IBuffer const& data) const;
};
template <> struct consume<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePatternFactory> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementBytePatternFactory<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataSection
{
    uint8_t DataType() const;
    void DataType(uint8_t value) const;
    Windows::Storage::Streams::IBuffer Data() const;
    void Data(Windows::Storage::Streams::IBuffer const& value) const;
};
template <> struct consume<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSection> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataSection<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataSectionFactory
{
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementDataSection Create(uint8_t dataType, Windows::Storage::Streams::IBuffer const& data) const;
};
template <> struct consume<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSectionFactory> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataSectionFactory<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataTypesStatics
{
    uint8_t Flags() const;
    uint8_t IncompleteService16BitUuids() const;
    uint8_t CompleteService16BitUuids() const;
    uint8_t IncompleteService32BitUuids() const;
    uint8_t CompleteService32BitUuids() const;
    uint8_t IncompleteService128BitUuids() const;
    uint8_t CompleteService128BitUuids() const;
    uint8_t ShortenedLocalName() const;
    uint8_t CompleteLocalName() const;
    uint8_t TxPowerLevel() const;
    uint8_t SlaveConnectionIntervalRange() const;
    uint8_t ServiceSolicitation16BitUuids() const;
    uint8_t ServiceSolicitation32BitUuids() const;
    uint8_t ServiceSolicitation128BitUuids() const;
    uint8_t ServiceData16BitUuids() const;
    uint8_t ServiceData32BitUuids() const;
    uint8_t ServiceData128BitUuids() const;
    uint8_t PublicTargetAddress() const;
    uint8_t RandomTargetAddress() const;
    uint8_t Appearance() const;
    uint8_t AdvertisingInterval() const;
    uint8_t ManufacturerSpecificData() const;
};
template <> struct consume<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementDataTypesStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementFilter
{
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisement Advertisement() const;
    void Advertisement(Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisement const& value) const;
    Windows::Foundation::Collections::IVector<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementBytePattern> BytePatterns() const;
};
template <> struct consume<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementFilter> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementFilter<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementPublisher
{
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatus Status() const;
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisement Advertisement() const;
    void Start() const;
    void Stop() const;
    event_token StatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisher, Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatusChangedEventArgs> const& handler) const;
    using StatusChanged_revoker = event_revoker<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisher>;
    StatusChanged_revoker StatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisher, Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatusChangedEventArgs> const& handler) const;
    void StatusChanged(event_token const& token) const;
};
template <> struct consume<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisher> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementPublisher<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementPublisherFactory
{
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisher Create(Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisement const& advertisement) const;
};
template <> struct consume<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisherFactory> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementPublisherFactory<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementPublisherStatusChangedEventArgs
{
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatus Status() const;
    Windows::Devices::Bluetooth::BluetoothError Error() const;
};
template <> struct consume<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisherStatusChangedEventArgs> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementPublisherStatusChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementReceivedEventArgs
{
    int16_t RawSignalStrengthInDBm() const;
    uint64_t BluetoothAddress() const;
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementType AdvertisementType() const;
    Windows::Foundation::DateTime Timestamp() const;
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisement Advertisement() const;
};
template <> struct consume<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementReceivedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementWatcher
{
    Windows::Foundation::TimeSpan MinSamplingInterval() const;
    Windows::Foundation::TimeSpan MaxSamplingInterval() const;
    Windows::Foundation::TimeSpan MinOutOfRangeTimeout() const;
    Windows::Foundation::TimeSpan MaxOutOfRangeTimeout() const;
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcherStatus Status() const;
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEScanningMode ScanningMode() const;
    void ScanningMode(Windows::Devices::Bluetooth::Advertisement::BluetoothLEScanningMode const& value) const;
    Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter SignalStrengthFilter() const;
    void SignalStrengthFilter(Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter const& value) const;
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter AdvertisementFilter() const;
    void AdvertisementFilter(Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter const& value) const;
    void Start() const;
    void Stop() const;
    event_token Received(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher, Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs> const& handler) const;
    using Received_revoker = event_revoker<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher>;
    Received_revoker Received(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher, Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementReceivedEventArgs> const& handler) const;
    void Received(event_token const& token) const;
    event_token Stopped(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher, Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcherStoppedEventArgs> const& handler) const;
    using Stopped_revoker = event_revoker<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher>;
    Stopped_revoker Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher, Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcherStoppedEventArgs> const& handler) const;
    void Stopped(event_token const& token) const;
};
template <> struct consume<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementWatcher<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementWatcherFactory
{
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcher Create(Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementFilter const& advertisementFilter) const;
};
template <> struct consume<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcherFactory> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementWatcherFactory<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementWatcherStoppedEventArgs
{
    Windows::Devices::Bluetooth::BluetoothError Error() const;
};
template <> struct consume<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcherStoppedEventArgs> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEAdvertisementWatcherStoppedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEManufacturerData
{
    uint16_t CompanyId() const;
    void CompanyId(uint16_t value) const;
    Windows::Storage::Streams::IBuffer Data() const;
    void Data(Windows::Storage::Streams::IBuffer const& value) const;
};
template <> struct consume<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerData> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEManufacturerData<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEManufacturerDataFactory
{
    Windows::Devices::Bluetooth::Advertisement::BluetoothLEManufacturerData Create(uint16_t companyId, Windows::Storage::Streams::IBuffer const& data) const;
};
template <> struct consume<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerDataFactory> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Advertisement_IBluetoothLEManufacturerDataFactory<D>; };

template <> struct abi<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisement>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Flags(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Flags(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_LocalName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_LocalName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_ServiceUuids(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ManufacturerData(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DataSections(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetManufacturerDataByCompanyId(uint16_t companyId, ::IUnknown** dataList) = 0;
    virtual HRESULT __stdcall GetSectionsByType(uint8_t type, ::IUnknown** sectionList) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePattern>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DataType(uint8_t* value) = 0;
    virtual HRESULT __stdcall put_DataType(uint8_t value) = 0;
    virtual HRESULT __stdcall get_Offset(int16_t* value) = 0;
    virtual HRESULT __stdcall put_Offset(int16_t value) = 0;
    virtual HRESULT __stdcall get_Data(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Data(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementBytePatternFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(uint8_t dataType, int16_t offset, ::IUnknown* data, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSection>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DataType(uint8_t* value) = 0;
    virtual HRESULT __stdcall put_DataType(uint8_t value) = 0;
    virtual HRESULT __stdcall get_Data(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Data(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataSectionFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(uint8_t dataType, ::IUnknown* data, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementDataTypesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Flags(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_IncompleteService16BitUuids(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_CompleteService16BitUuids(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_IncompleteService32BitUuids(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_CompleteService32BitUuids(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_IncompleteService128BitUuids(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_CompleteService128BitUuids(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_ShortenedLocalName(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_CompleteLocalName(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_TxPowerLevel(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_SlaveConnectionIntervalRange(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_ServiceSolicitation16BitUuids(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_ServiceSolicitation32BitUuids(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_ServiceSolicitation128BitUuids(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_ServiceData16BitUuids(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_ServiceData32BitUuids(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_ServiceData128BitUuids(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_PublicTargetAddress(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_RandomTargetAddress(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_Appearance(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_AdvertisingInterval(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_ManufacturerSpecificData(uint8_t* value) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementFilter>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Advertisement(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Advertisement(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_BytePatterns(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisher>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatus>* value) = 0;
    virtual HRESULT __stdcall get_Advertisement(::IUnknown** value) = 0;
    virtual HRESULT __stdcall Start() = 0;
    virtual HRESULT __stdcall Stop() = 0;
    virtual HRESULT __stdcall add_StatusChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_StatusChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisherFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* advertisement, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementPublisherStatusChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementPublisherStatus>* value) = 0;
    virtual HRESULT __stdcall get_Error(abi_t<Windows::Devices::Bluetooth::BluetoothError>* value) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementReceivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RawSignalStrengthInDBm(int16_t* value) = 0;
    virtual HRESULT __stdcall get_BluetoothAddress(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_AdvertisementType(abi_t<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementType>* value) = 0;
    virtual HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_Advertisement(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcher>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MinSamplingInterval(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_MaxSamplingInterval(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_MinOutOfRangeTimeout(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_MaxOutOfRangeTimeout(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Devices::Bluetooth::Advertisement::BluetoothLEAdvertisementWatcherStatus>* value) = 0;
    virtual HRESULT __stdcall get_ScanningMode(abi_t<Windows::Devices::Bluetooth::Advertisement::BluetoothLEScanningMode>* value) = 0;
    virtual HRESULT __stdcall put_ScanningMode(abi_t<Windows::Devices::Bluetooth::Advertisement::BluetoothLEScanningMode> value) = 0;
    virtual HRESULT __stdcall get_SignalStrengthFilter(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_SignalStrengthFilter(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_AdvertisementFilter(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_AdvertisementFilter(::IUnknown* value) = 0;
    virtual HRESULT __stdcall Start() = 0;
    virtual HRESULT __stdcall Stop() = 0;
    virtual HRESULT __stdcall add_Received(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Received(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_Stopped(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Stopped(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcherFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* advertisementFilter, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEAdvertisementWatcherStoppedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Error(abi_t<Windows::Devices::Bluetooth::BluetoothError>* value) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerData>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CompanyId(uint16_t* value) = 0;
    virtual HRESULT __stdcall put_CompanyId(uint16_t value) = 0;
    virtual HRESULT __stdcall get_Data(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Data(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Advertisement::IBluetoothLEManufacturerDataFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(uint16_t companyId, ::IUnknown* data, ::IUnknown** value) = 0;
};};

}
