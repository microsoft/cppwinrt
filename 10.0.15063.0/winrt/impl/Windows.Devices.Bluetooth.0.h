// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::GenericAttributeProfile {

struct GattDeviceService;
struct GattDeviceServicesResult;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::Rfcomm {

struct RfcommDeviceService;
struct RfcommDeviceServicesResult;
struct RfcommServiceId;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration {

enum class DeviceAccessStatus;
struct DeviceAccessInformation;
struct DeviceInformation;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Radios {

struct Radio;

}

WINRT_EXPORT namespace winrt::Windows::Networking {

struct HostName;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth {

enum class BluetoothAddressType
{
    Public = 0,
    Random = 1,
    Unspecified = 2,
};

enum class BluetoothCacheMode
{
    Cached = 0,
    Uncached = 1,
};

enum class BluetoothConnectionStatus
{
    Disconnected = 0,
    Connected = 1,
};

enum class BluetoothError
{
    Success = 0,
    RadioNotAvailable = 1,
    ResourceInUse = 2,
    DeviceNotConnected = 3,
    OtherError = 4,
    DisabledByPolicy = 5,
    NotSupported = 6,
    DisabledByUser = 7,
    ConsentRequired = 8,
    TransportNotSupported = 9,
};

enum class BluetoothMajorClass
{
    Miscellaneous = 0,
    Computer = 1,
    Phone = 2,
    NetworkAccessPoint = 3,
    AudioVideo = 4,
    Peripheral = 5,
    Imaging = 6,
    Wearable = 7,
    Toy = 8,
    Health = 9,
};

enum class BluetoothMinorClass
{
    Uncategorized = 0,
    ComputerDesktop = 1,
    ComputerServer = 2,
    ComputerLaptop = 3,
    ComputerHandheld = 4,
    ComputerPalmSize = 5,
    ComputerWearable = 6,
    ComputerTablet = 7,
    PhoneCellular = 1,
    PhoneCordless = 2,
    PhoneSmartPhone = 3,
    PhoneWired = 4,
    PhoneIsdn = 5,
    NetworkFullyAvailable = 0,
    NetworkUsed01To17Percent = 8,
    NetworkUsed17To33Percent = 16,
    NetworkUsed33To50Percent = 24,
    NetworkUsed50To67Percent = 32,
    NetworkUsed67To83Percent = 40,
    NetworkUsed83To99Percent = 48,
    NetworkNoServiceAvailable = 56,
    AudioVideoWearableHeadset = 1,
    AudioVideoHandsFree = 2,
    AudioVideoMicrophone = 4,
    AudioVideoLoudspeaker = 5,
    AudioVideoHeadphones = 6,
    AudioVideoPortableAudio = 7,
    AudioVideoCarAudio = 8,
    AudioVideoSetTopBox = 9,
    AudioVideoHifiAudioDevice = 10,
    AudioVideoVcr = 11,
    AudioVideoVideoCamera = 12,
    AudioVideoCamcorder = 13,
    AudioVideoVideoMonitor = 14,
    AudioVideoVideoDisplayAndLoudspeaker = 15,
    AudioVideoVideoConferencing = 16,
    AudioVideoGamingOrToy = 18,
    PeripheralJoystick = 1,
    PeripheralGamepad = 2,
    PeripheralRemoteControl = 3,
    PeripheralSensing = 4,
    PeripheralDigitizerTablet = 5,
    PeripheralCardReader = 6,
    PeripheralDigitalPen = 7,
    PeripheralHandheldScanner = 8,
    PeripheralHandheldGesture = 9,
    WearableWristwatch = 1,
    WearablePager = 2,
    WearableJacket = 3,
    WearableHelmet = 4,
    WearableGlasses = 5,
    ToyRobot = 1,
    ToyVehicle = 2,
    ToyDoll = 3,
    ToyController = 4,
    ToyGame = 5,
    HealthBloodPressureMonitor = 1,
    HealthThermometer = 2,
    HealthWeighingScale = 3,
    HealthGlucoseMeter = 4,
    HealthPulseOximeter = 5,
    HealthHeartRateMonitor = 6,
    HealthHealthDataDisplay = 7,
    HealthStepCounter = 8,
    HealthBodyCompositionAnalyzer = 9,
    HealthPeakFlowMonitor = 10,
    HealthMedicationMonitor = 11,
    HealthKneeProsthesis = 12,
    HealthAnkleProsthesis = 13,
    HealthGenericHealthManager = 14,
    HealthPersonalMobilityDevice = 15,
};

enum class BluetoothServiceCapabilities : unsigned
{
    None = 0x0,
    LimitedDiscoverableMode = 0x1,
    PositioningService = 0x8,
    NetworkingService = 0x10,
    RenderingService = 0x20,
    CapturingService = 0x40,
    ObjectTransferService = 0x80,
    AudioService = 0x100,
    TelephoneService = 0x200,
    InformationService = 0x400,
};

DEFINE_ENUM_FLAG_OPERATORS(BluetoothServiceCapabilities)

struct IBluetoothAdapter;
struct IBluetoothAdapterStatics;
struct IBluetoothClassOfDevice;
struct IBluetoothClassOfDeviceStatics;
struct IBluetoothDevice;
struct IBluetoothDevice2;
struct IBluetoothDevice3;
struct IBluetoothDeviceId;
struct IBluetoothDeviceStatics;
struct IBluetoothDeviceStatics2;
struct IBluetoothLEAppearance;
struct IBluetoothLEAppearanceCategoriesStatics;
struct IBluetoothLEAppearanceStatics;
struct IBluetoothLEAppearanceSubcategoriesStatics;
struct IBluetoothLEDevice;
struct IBluetoothLEDevice2;
struct IBluetoothLEDevice3;
struct IBluetoothLEDeviceStatics;
struct IBluetoothLEDeviceStatics2;
struct IBluetoothSignalStrengthFilter;
struct IBluetoothUuidHelperStatics;
struct BluetoothAdapter;
struct BluetoothClassOfDevice;
struct BluetoothDevice;
struct BluetoothDeviceId;
struct BluetoothLEAppearance;
struct BluetoothLEAppearanceCategories;
struct BluetoothLEAppearanceSubcategories;
struct BluetoothLEDevice;
struct BluetoothSignalStrengthFilter;
struct BluetoothUuidHelper;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::Bluetooth::IBluetoothAdapter>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::IBluetoothAdapterStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::IBluetoothClassOfDevice>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::IBluetoothClassOfDeviceStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::IBluetoothDevice>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::IBluetoothDevice2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::IBluetoothDevice3>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::IBluetoothDeviceId>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::IBluetoothDeviceStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::IBluetoothDeviceStatics2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::IBluetoothLEAppearance>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::IBluetoothLEAppearanceStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::IBluetoothLEDevice>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::IBluetoothLEDevice2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::IBluetoothLEDevice3>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::IBluetoothSignalStrengthFilter>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::IBluetoothUuidHelperStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::BluetoothAdapter>{ using type = class_category; };
template <> struct category<Windows::Devices::Bluetooth::BluetoothClassOfDevice>{ using type = class_category; };
template <> struct category<Windows::Devices::Bluetooth::BluetoothDevice>{ using type = class_category; };
template <> struct category<Windows::Devices::Bluetooth::BluetoothDeviceId>{ using type = class_category; };
template <> struct category<Windows::Devices::Bluetooth::BluetoothLEAppearance>{ using type = class_category; };
template <> struct category<Windows::Devices::Bluetooth::BluetoothLEAppearanceCategories>{ using type = class_category; };
template <> struct category<Windows::Devices::Bluetooth::BluetoothLEAppearanceSubcategories>{ using type = class_category; };
template <> struct category<Windows::Devices::Bluetooth::BluetoothLEDevice>{ using type = class_category; };
template <> struct category<Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter>{ using type = class_category; };
template <> struct category<Windows::Devices::Bluetooth::BluetoothUuidHelper>{ using type = class_category; };
template <> struct category<Windows::Devices::Bluetooth::BluetoothAddressType>{ using type = enum_category; };
template <> struct category<Windows::Devices::Bluetooth::BluetoothCacheMode>{ using type = enum_category; };
template <> struct category<Windows::Devices::Bluetooth::BluetoothConnectionStatus>{ using type = enum_category; };
template <> struct category<Windows::Devices::Bluetooth::BluetoothError>{ using type = enum_category; };
template <> struct category<Windows::Devices::Bluetooth::BluetoothMajorClass>{ using type = enum_category; };
template <> struct category<Windows::Devices::Bluetooth::BluetoothMinorClass>{ using type = enum_category; };
template <> struct category<Windows::Devices::Bluetooth::BluetoothServiceCapabilities>{ using type = enum_category; };
template <> struct name<Windows::Devices::Bluetooth::IBluetoothAdapter>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothAdapter" }; };
template <> struct name<Windows::Devices::Bluetooth::IBluetoothAdapterStatics>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothAdapterStatics" }; };
template <> struct name<Windows::Devices::Bluetooth::IBluetoothClassOfDevice>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothClassOfDevice" }; };
template <> struct name<Windows::Devices::Bluetooth::IBluetoothClassOfDeviceStatics>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothClassOfDeviceStatics" }; };
template <> struct name<Windows::Devices::Bluetooth::IBluetoothDevice>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothDevice" }; };
template <> struct name<Windows::Devices::Bluetooth::IBluetoothDevice2>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothDevice2" }; };
template <> struct name<Windows::Devices::Bluetooth::IBluetoothDevice3>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothDevice3" }; };
template <> struct name<Windows::Devices::Bluetooth::IBluetoothDeviceId>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothDeviceId" }; };
template <> struct name<Windows::Devices::Bluetooth::IBluetoothDeviceStatics>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothDeviceStatics" }; };
template <> struct name<Windows::Devices::Bluetooth::IBluetoothDeviceStatics2>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothDeviceStatics2" }; };
template <> struct name<Windows::Devices::Bluetooth::IBluetoothLEAppearance>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothLEAppearance" }; };
template <> struct name<Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothLEAppearanceCategoriesStatics" }; };
template <> struct name<Windows::Devices::Bluetooth::IBluetoothLEAppearanceStatics>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothLEAppearanceStatics" }; };
template <> struct name<Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothLEAppearanceSubcategoriesStatics" }; };
template <> struct name<Windows::Devices::Bluetooth::IBluetoothLEDevice>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothLEDevice" }; };
template <> struct name<Windows::Devices::Bluetooth::IBluetoothLEDevice2>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothLEDevice2" }; };
template <> struct name<Windows::Devices::Bluetooth::IBluetoothLEDevice3>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothLEDevice3" }; };
template <> struct name<Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothLEDeviceStatics" }; };
template <> struct name<Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics2>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothLEDeviceStatics2" }; };
template <> struct name<Windows::Devices::Bluetooth::IBluetoothSignalStrengthFilter>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothSignalStrengthFilter" }; };
template <> struct name<Windows::Devices::Bluetooth::IBluetoothUuidHelperStatics>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.IBluetoothUuidHelperStatics" }; };
template <> struct name<Windows::Devices::Bluetooth::BluetoothAdapter>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothAdapter" }; };
template <> struct name<Windows::Devices::Bluetooth::BluetoothClassOfDevice>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothClassOfDevice" }; };
template <> struct name<Windows::Devices::Bluetooth::BluetoothDevice>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothDevice" }; };
template <> struct name<Windows::Devices::Bluetooth::BluetoothDeviceId>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothDeviceId" }; };
template <> struct name<Windows::Devices::Bluetooth::BluetoothLEAppearance>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothLEAppearance" }; };
template <> struct name<Windows::Devices::Bluetooth::BluetoothLEAppearanceCategories>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothLEAppearanceCategories" }; };
template <> struct name<Windows::Devices::Bluetooth::BluetoothLEAppearanceSubcategories>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothLEAppearanceSubcategories" }; };
template <> struct name<Windows::Devices::Bluetooth::BluetoothLEDevice>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothLEDevice" }; };
template <> struct name<Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothSignalStrengthFilter" }; };
template <> struct name<Windows::Devices::Bluetooth::BluetoothUuidHelper>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothUuidHelper" }; };
template <> struct name<Windows::Devices::Bluetooth::BluetoothAddressType>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothAddressType" }; };
template <> struct name<Windows::Devices::Bluetooth::BluetoothCacheMode>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothCacheMode" }; };
template <> struct name<Windows::Devices::Bluetooth::BluetoothConnectionStatus>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothConnectionStatus" }; };
template <> struct name<Windows::Devices::Bluetooth::BluetoothError>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothError" }; };
template <> struct name<Windows::Devices::Bluetooth::BluetoothMajorClass>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothMajorClass" }; };
template <> struct name<Windows::Devices::Bluetooth::BluetoothMinorClass>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothMinorClass" }; };
template <> struct name<Windows::Devices::Bluetooth::BluetoothServiceCapabilities>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.BluetoothServiceCapabilities" }; };
template <> struct guid<Windows::Devices::Bluetooth::IBluetoothAdapter>{ static constexpr GUID value{ 0x7974F04C,0x5F7A,0x4A34,{ 0x92,0x25,0xA8,0x55,0xF8,0x4B,0x1A,0x8B } }; };
template <> struct guid<Windows::Devices::Bluetooth::IBluetoothAdapterStatics>{ static constexpr GUID value{ 0x8B02FB6A,0xAC4C,0x4741,{ 0x86,0x61,0x8E,0xAB,0x7D,0x17,0xEA,0x9F } }; };
template <> struct guid<Windows::Devices::Bluetooth::IBluetoothClassOfDevice>{ static constexpr GUID value{ 0xD640227E,0xD7D7,0x4661,{ 0x94,0x54,0x65,0x03,0x9C,0xA1,0x7A,0x2B } }; };
template <> struct guid<Windows::Devices::Bluetooth::IBluetoothClassOfDeviceStatics>{ static constexpr GUID value{ 0xE46135BD,0x0FA2,0x416C,{ 0x91,0xB4,0xC1,0xE4,0x8C,0xA0,0x61,0xC1 } }; };
template <> struct guid<Windows::Devices::Bluetooth::IBluetoothDevice>{ static constexpr GUID value{ 0x2335B156,0x90D2,0x4A04,{ 0xAE,0xF5,0x0E,0x20,0xB9,0xE6,0xB7,0x07 } }; };
template <> struct guid<Windows::Devices::Bluetooth::IBluetoothDevice2>{ static constexpr GUID value{ 0x0133F954,0xB156,0x4DD0,{ 0xB1,0xF5,0xC1,0x1B,0xC3,0x1A,0x51,0x63 } }; };
template <> struct guid<Windows::Devices::Bluetooth::IBluetoothDevice3>{ static constexpr GUID value{ 0x57FFF78B,0x651A,0x4454,{ 0xB9,0x0F,0xEB,0x21,0xEF,0x0B,0x0D,0x71 } }; };
template <> struct guid<Windows::Devices::Bluetooth::IBluetoothDeviceId>{ static constexpr GUID value{ 0xC17949AF,0x57C1,0x4642,{ 0xBC,0xCE,0xE6,0xC0,0x6B,0x20,0xAE,0x76 } }; };
template <> struct guid<Windows::Devices::Bluetooth::IBluetoothDeviceStatics>{ static constexpr GUID value{ 0x0991DF51,0x57DB,0x4725,{ 0xBB,0xD7,0x84,0xF6,0x43,0x27,0xEC,0x2C } }; };
template <> struct guid<Windows::Devices::Bluetooth::IBluetoothDeviceStatics2>{ static constexpr GUID value{ 0xC29E8E2F,0x4E14,0x4477,{ 0xAA,0x1B,0xB8,0xB4,0x7E,0x5B,0x7E,0xCE } }; };
template <> struct guid<Windows::Devices::Bluetooth::IBluetoothLEAppearance>{ static constexpr GUID value{ 0x5D2079F2,0x66A8,0x4258,{ 0x98,0x5E,0x02,0xB4,0xD9,0x50,0x9F,0x18 } }; };
template <> struct guid<Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics>{ static constexpr GUID value{ 0x6D4D54FE,0x046A,0x4185,{ 0xAA,0xB6,0x82,0x4C,0xF0,0x61,0x08,0x61 } }; };
template <> struct guid<Windows::Devices::Bluetooth::IBluetoothLEAppearanceStatics>{ static constexpr GUID value{ 0xA193C0C7,0x4504,0x4F4A,{ 0x9B,0xA5,0xCD,0x10,0x54,0xE5,0xE0,0x65 } }; };
template <> struct guid<Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>{ static constexpr GUID value{ 0xE57BA606,0x2144,0x415A,{ 0x83,0x12,0x71,0xCC,0xF2,0x91,0xF8,0xD1 } }; };
template <> struct guid<Windows::Devices::Bluetooth::IBluetoothLEDevice>{ static constexpr GUID value{ 0xB5EE2F7B,0x4AD8,0x4642,{ 0xAC,0x48,0x80,0xA0,0xB5,0x00,0xE8,0x87 } }; };
template <> struct guid<Windows::Devices::Bluetooth::IBluetoothLEDevice2>{ static constexpr GUID value{ 0x26F062B3,0x7AEE,0x4D31,{ 0xBA,0xBA,0xB1,0xB9,0x77,0x5F,0x59,0x16 } }; };
template <> struct guid<Windows::Devices::Bluetooth::IBluetoothLEDevice3>{ static constexpr GUID value{ 0xAEE9E493,0x44AC,0x40DC,{ 0xAF,0x33,0xB2,0xC1,0x3C,0x01,0xCA,0x46 } }; };
template <> struct guid<Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics>{ static constexpr GUID value{ 0xC8CF1A19,0xF0B6,0x4BF0,{ 0x86,0x89,0x41,0x30,0x3D,0xE2,0xD9,0xF4 } }; };
template <> struct guid<Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics2>{ static constexpr GUID value{ 0x5F12C06B,0x3BAC,0x43E8,{ 0xAD,0x16,0x56,0x32,0x71,0xBD,0x41,0xC2 } }; };
template <> struct guid<Windows::Devices::Bluetooth::IBluetoothSignalStrengthFilter>{ static constexpr GUID value{ 0xDF7B7391,0x6BB5,0x4CFE,{ 0x90,0xB1,0x5D,0x73,0x24,0xED,0xCF,0x7F } }; };
template <> struct guid<Windows::Devices::Bluetooth::IBluetoothUuidHelperStatics>{ static constexpr GUID value{ 0x17DF0CD8,0xCF74,0x4B21,{ 0xAF,0xE6,0xF5,0x7A,0x11,0xBC,0xDE,0xA0 } }; };
template <> struct default_interface<Windows::Devices::Bluetooth::BluetoothAdapter>{ using type = Windows::Devices::Bluetooth::IBluetoothAdapter; };
template <> struct default_interface<Windows::Devices::Bluetooth::BluetoothClassOfDevice>{ using type = Windows::Devices::Bluetooth::IBluetoothClassOfDevice; };
template <> struct default_interface<Windows::Devices::Bluetooth::BluetoothDevice>{ using type = Windows::Devices::Bluetooth::IBluetoothDevice; };
template <> struct default_interface<Windows::Devices::Bluetooth::BluetoothDeviceId>{ using type = Windows::Devices::Bluetooth::IBluetoothDeviceId; };
template <> struct default_interface<Windows::Devices::Bluetooth::BluetoothLEAppearance>{ using type = Windows::Devices::Bluetooth::IBluetoothLEAppearance; };
template <> struct default_interface<Windows::Devices::Bluetooth::BluetoothLEDevice>{ using type = Windows::Devices::Bluetooth::IBluetoothLEDevice; };
template <> struct default_interface<Windows::Devices::Bluetooth::BluetoothSignalStrengthFilter>{ using type = Windows::Devices::Bluetooth::IBluetoothSignalStrengthFilter; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_IBluetoothAdapter
{
    hstring DeviceId() const;
    uint64_t BluetoothAddress() const;
    bool IsClassicSupported() const;
    bool IsLowEnergySupported() const;
    bool IsPeripheralRoleSupported() const;
    bool IsCentralRoleSupported() const;
    bool IsAdvertisementOffloadSupported() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Radios::Radio> GetRadioAsync() const;
};
template <> struct consume<Windows::Devices::Bluetooth::IBluetoothAdapter> { template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothAdapter<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_IBluetoothAdapterStatics
{
    hstring GetDeviceSelector() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothAdapter> FromIdAsync(param::hstring const& deviceId) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothAdapter> GetDefaultAsync() const;
};
template <> struct consume<Windows::Devices::Bluetooth::IBluetoothAdapterStatics> { template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothAdapterStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_IBluetoothClassOfDevice
{
    uint32_t RawValue() const;
    Windows::Devices::Bluetooth::BluetoothMajorClass MajorClass() const;
    Windows::Devices::Bluetooth::BluetoothMinorClass MinorClass() const;
    Windows::Devices::Bluetooth::BluetoothServiceCapabilities ServiceCapabilities() const;
};
template <> struct consume<Windows::Devices::Bluetooth::IBluetoothClassOfDevice> { template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothClassOfDevice<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_IBluetoothClassOfDeviceStatics
{
    Windows::Devices::Bluetooth::BluetoothClassOfDevice FromRawValue(uint32_t rawValue) const;
    Windows::Devices::Bluetooth::BluetoothClassOfDevice FromParts(Windows::Devices::Bluetooth::BluetoothMajorClass const& majorClass, Windows::Devices::Bluetooth::BluetoothMinorClass const& minorClass, Windows::Devices::Bluetooth::BluetoothServiceCapabilities const& serviceCapabilities) const;
};
template <> struct consume<Windows::Devices::Bluetooth::IBluetoothClassOfDeviceStatics> { template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothClassOfDeviceStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_IBluetoothDevice
{
    hstring DeviceId() const;
    Windows::Networking::HostName HostName() const;
    hstring Name() const;
    Windows::Devices::Bluetooth::BluetoothClassOfDevice ClassOfDevice() const;
    Windows::Foundation::Collections::IVectorView<Windows::Storage::Streams::IBuffer> SdpRecords() const;
    [[deprecated("Use GetRfcommServicesAsync instead of RfcommServices.  For more info, see MSDN.")]] Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService> RfcommServices() const;
    Windows::Devices::Bluetooth::BluetoothConnectionStatus ConnectionStatus() const;
    uint64_t BluetoothAddress() const;
    event_token NameChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothDevice, Windows::Foundation::IInspectable> const& handler) const;
    using NameChanged_revoker = event_revoker<Windows::Devices::Bluetooth::IBluetoothDevice>;
    NameChanged_revoker NameChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothDevice, Windows::Foundation::IInspectable> const& handler) const;
    void NameChanged(event_token const& token) const;
    event_token SdpRecordsChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothDevice, Windows::Foundation::IInspectable> const& handler) const;
    using SdpRecordsChanged_revoker = event_revoker<Windows::Devices::Bluetooth::IBluetoothDevice>;
    SdpRecordsChanged_revoker SdpRecordsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothDevice, Windows::Foundation::IInspectable> const& handler) const;
    void SdpRecordsChanged(event_token const& token) const;
    event_token ConnectionStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothDevice, Windows::Foundation::IInspectable> const& handler) const;
    using ConnectionStatusChanged_revoker = event_revoker<Windows::Devices::Bluetooth::IBluetoothDevice>;
    ConnectionStatusChanged_revoker ConnectionStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothDevice, Windows::Foundation::IInspectable> const& handler) const;
    void ConnectionStatusChanged(event_token const& token) const;
};
template <> struct consume<Windows::Devices::Bluetooth::IBluetoothDevice> { template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothDevice<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_IBluetoothDevice2
{
    Windows::Devices::Enumeration::DeviceInformation DeviceInformation() const;
};
template <> struct consume<Windows::Devices::Bluetooth::IBluetoothDevice2> { template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothDevice2<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_IBluetoothDevice3
{
    Windows::Devices::Enumeration::DeviceAccessInformation DeviceAccessInformation() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceAccessStatus> RequestAccessAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult> GetRfcommServicesAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult> GetRfcommServicesAsync(Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult> GetRfcommServicesForIdAsync(Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const& serviceId) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult> GetRfcommServicesForIdAsync(Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const& serviceId, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const;
};
template <> struct consume<Windows::Devices::Bluetooth::IBluetoothDevice3> { template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothDevice3<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_IBluetoothDeviceId
{
    hstring Id() const;
    bool IsClassicDevice() const;
    bool IsLowEnergyDevice() const;
};
template <> struct consume<Windows::Devices::Bluetooth::IBluetoothDeviceId> { template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothDeviceId<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_IBluetoothDeviceStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothDevice> FromIdAsync(param::hstring const& deviceId) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothDevice> FromHostNameAsync(Windows::Networking::HostName const& hostName) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothDevice> FromBluetoothAddressAsync(uint64_t address) const;
    hstring GetDeviceSelector() const;
};
template <> struct consume<Windows::Devices::Bluetooth::IBluetoothDeviceStatics> { template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothDeviceStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_IBluetoothDeviceStatics2
{
    hstring GetDeviceSelectorFromPairingState(bool pairingState) const;
    hstring GetDeviceSelectorFromConnectionStatus(Windows::Devices::Bluetooth::BluetoothConnectionStatus const& connectionStatus) const;
    hstring GetDeviceSelectorFromDeviceName(param::hstring const& deviceName) const;
    hstring GetDeviceSelectorFromBluetoothAddress(uint64_t bluetoothAddress) const;
    hstring GetDeviceSelectorFromClassOfDevice(Windows::Devices::Bluetooth::BluetoothClassOfDevice const& classOfDevice) const;
};
template <> struct consume<Windows::Devices::Bluetooth::IBluetoothDeviceStatics2> { template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothDeviceStatics2<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_IBluetoothLEAppearance
{
    uint16_t RawValue() const;
    uint16_t Category() const;
    uint16_t SubCategory() const;
};
template <> struct consume<Windows::Devices::Bluetooth::IBluetoothLEAppearance> { template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothLEAppearance<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceCategoriesStatics
{
    uint16_t Uncategorized() const;
    uint16_t Phone() const;
    uint16_t Computer() const;
    uint16_t Watch() const;
    uint16_t Clock() const;
    uint16_t Display() const;
    uint16_t RemoteControl() const;
    uint16_t EyeGlasses() const;
    uint16_t Tag() const;
    uint16_t Keyring() const;
    uint16_t MediaPlayer() const;
    uint16_t BarcodeScanner() const;
    uint16_t Thermometer() const;
    uint16_t HeartRate() const;
    uint16_t BloodPressure() const;
    uint16_t HumanInterfaceDevice() const;
    uint16_t GlucoseMeter() const;
    uint16_t RunningWalking() const;
    uint16_t Cycling() const;
    uint16_t PulseOximeter() const;
    uint16_t WeightScale() const;
    uint16_t OutdoorSportActivity() const;
};
template <> struct consume<Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics> { template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceCategoriesStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceStatics
{
    Windows::Devices::Bluetooth::BluetoothLEAppearance FromRawValue(uint16_t rawValue) const;
    Windows::Devices::Bluetooth::BluetoothLEAppearance FromParts(uint16_t appearanceCategory, uint16_t appearanceSubCategory) const;
};
template <> struct consume<Windows::Devices::Bluetooth::IBluetoothLEAppearanceStatics> { template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics
{
    uint16_t Generic() const;
    uint16_t SportsWatch() const;
    uint16_t ThermometerEar() const;
    uint16_t HeartRateBelt() const;
    uint16_t BloodPressureArm() const;
    uint16_t BloodPressureWrist() const;
    uint16_t Keyboard() const;
    uint16_t Mouse() const;
    uint16_t Joystick() const;
    uint16_t Gamepad() const;
    uint16_t DigitizerTablet() const;
    uint16_t CardReader() const;
    uint16_t DigitalPen() const;
    uint16_t BarcodeScanner() const;
    uint16_t RunningWalkingInShoe() const;
    uint16_t RunningWalkingOnShoe() const;
    uint16_t RunningWalkingOnHip() const;
    uint16_t CyclingComputer() const;
    uint16_t CyclingSpeedSensor() const;
    uint16_t CyclingCadenceSensor() const;
    uint16_t CyclingPowerSensor() const;
    uint16_t CyclingSpeedCadenceSensor() const;
    uint16_t OximeterFingertip() const;
    uint16_t OximeterWristWorn() const;
    uint16_t LocationDisplay() const;
    uint16_t LocationNavigationDisplay() const;
    uint16_t LocationPod() const;
    uint16_t LocationNavigationPod() const;
};
template <> struct consume<Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics> { template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothLEAppearanceSubcategoriesStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_IBluetoothLEDevice
{
    hstring DeviceId() const;
    hstring Name() const;
    [[deprecated("Use GetGattServicesAsync instead of GattServices.  For more information, see MSDN.")]] Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService> GattServices() const;
    Windows::Devices::Bluetooth::BluetoothConnectionStatus ConnectionStatus() const;
    uint64_t BluetoothAddress() const;
    [[deprecated("Use GetGattServicesForUuidAsync instead of GetGattService.  For more information, see MSDN.")]] Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceService GetGattService(GUID const& serviceUuid) const;
    event_token NameChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothLEDevice, Windows::Foundation::IInspectable> const& handler) const;
    using NameChanged_revoker = event_revoker<Windows::Devices::Bluetooth::IBluetoothLEDevice>;
    NameChanged_revoker NameChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothLEDevice, Windows::Foundation::IInspectable> const& handler) const;
    void NameChanged(event_token const& token) const;
    event_token GattServicesChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothLEDevice, Windows::Foundation::IInspectable> const& handler) const;
    using GattServicesChanged_revoker = event_revoker<Windows::Devices::Bluetooth::IBluetoothLEDevice>;
    GattServicesChanged_revoker GattServicesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothLEDevice, Windows::Foundation::IInspectable> const& handler) const;
    void GattServicesChanged(event_token const& token) const;
    event_token ConnectionStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothLEDevice, Windows::Foundation::IInspectable> const& handler) const;
    using ConnectionStatusChanged_revoker = event_revoker<Windows::Devices::Bluetooth::IBluetoothLEDevice>;
    ConnectionStatusChanged_revoker ConnectionStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Bluetooth::BluetoothLEDevice, Windows::Foundation::IInspectable> const& handler) const;
    void ConnectionStatusChanged(event_token const& token) const;
};
template <> struct consume<Windows::Devices::Bluetooth::IBluetoothLEDevice> { template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothLEDevice<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_IBluetoothLEDevice2
{
    Windows::Devices::Enumeration::DeviceInformation DeviceInformation() const;
    Windows::Devices::Bluetooth::BluetoothLEAppearance Appearance() const;
    Windows::Devices::Bluetooth::BluetoothAddressType BluetoothAddressType() const;
};
template <> struct consume<Windows::Devices::Bluetooth::IBluetoothLEDevice2> { template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothLEDevice2<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_IBluetoothLEDevice3
{
    Windows::Devices::Enumeration::DeviceAccessInformation DeviceAccessInformation() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceAccessStatus> RequestAccessAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> GetGattServicesAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> GetGattServicesAsync(Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> GetGattServicesForUuidAsync(GUID const& serviceUuid) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::GenericAttributeProfile::GattDeviceServicesResult> GetGattServicesForUuidAsync(GUID const& serviceUuid, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const;
};
template <> struct consume<Windows::Devices::Bluetooth::IBluetoothLEDevice3> { template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothLEDevice3<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_IBluetoothLEDeviceStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothLEDevice> FromIdAsync(param::hstring const& deviceId) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothLEDevice> FromBluetoothAddressAsync(uint64_t bluetoothAddress) const;
    hstring GetDeviceSelector() const;
};
template <> struct consume<Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics> { template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothLEDeviceStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_IBluetoothLEDeviceStatics2
{
    hstring GetDeviceSelectorFromPairingState(bool pairingState) const;
    hstring GetDeviceSelectorFromConnectionStatus(Windows::Devices::Bluetooth::BluetoothConnectionStatus const& connectionStatus) const;
    hstring GetDeviceSelectorFromDeviceName(param::hstring const& deviceName) const;
    hstring GetDeviceSelectorFromBluetoothAddress(uint64_t bluetoothAddress) const;
    hstring GetDeviceSelectorFromBluetoothAddress(uint64_t bluetoothAddress, Windows::Devices::Bluetooth::BluetoothAddressType const& bluetoothAddressType) const;
    hstring GetDeviceSelectorFromAppearance(Windows::Devices::Bluetooth::BluetoothLEAppearance const& appearance) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::BluetoothLEDevice> FromBluetoothAddressAsync(uint64_t bluetoothAddress, Windows::Devices::Bluetooth::BluetoothAddressType const& bluetoothAddressType) const;
};
template <> struct consume<Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics2> { template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothLEDeviceStatics2<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_IBluetoothSignalStrengthFilter
{
    Windows::Foundation::IReference<int16_t> InRangeThresholdInDBm() const;
    void InRangeThresholdInDBm(optional<int16_t> const& value) const;
    Windows::Foundation::IReference<int16_t> OutOfRangeThresholdInDBm() const;
    void OutOfRangeThresholdInDBm(optional<int16_t> const& value) const;
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> OutOfRangeTimeout() const;
    void OutOfRangeTimeout(optional<Windows::Foundation::TimeSpan> const& value) const;
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> SamplingInterval() const;
    void SamplingInterval(optional<Windows::Foundation::TimeSpan> const& value) const;
};
template <> struct consume<Windows::Devices::Bluetooth::IBluetoothSignalStrengthFilter> { template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothSignalStrengthFilter<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_IBluetoothUuidHelperStatics
{
    GUID FromShortId(uint32_t shortId) const;
    Windows::Foundation::IReference<uint32_t> TryGetShortId(GUID const& uuid) const;
};
template <> struct consume<Windows::Devices::Bluetooth::IBluetoothUuidHelperStatics> { template <typename D> using type = consume_Windows_Devices_Bluetooth_IBluetoothUuidHelperStatics<D>; };

template <> struct abi<Windows::Devices::Bluetooth::IBluetoothAdapter>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BluetoothAddress(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_IsClassicSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsLowEnergySupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsPeripheralRoleSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsCentralRoleSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsAdvertisementOffloadSupported(bool* value) = 0;
    virtual HRESULT __stdcall GetRadioAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::IBluetoothAdapterStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeviceSelector(HSTRING* result) = 0;
    virtual HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetDefaultAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::IBluetoothClassOfDevice>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RawValue(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_MajorClass(abi_t<Windows::Devices::Bluetooth::BluetoothMajorClass>* value) = 0;
    virtual HRESULT __stdcall get_MinorClass(abi_t<Windows::Devices::Bluetooth::BluetoothMinorClass>* value) = 0;
    virtual HRESULT __stdcall get_ServiceCapabilities(abi_t<Windows::Devices::Bluetooth::BluetoothServiceCapabilities>* value) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::IBluetoothClassOfDeviceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FromRawValue(uint32_t rawValue, ::IUnknown** classOfDevice) = 0;
    virtual HRESULT __stdcall FromParts(abi_t<Windows::Devices::Bluetooth::BluetoothMajorClass> majorClass, abi_t<Windows::Devices::Bluetooth::BluetoothMinorClass> minorClass, abi_t<Windows::Devices::Bluetooth::BluetoothServiceCapabilities> serviceCapabilities, ::IUnknown** classOfDevice) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::IBluetoothDevice>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_HostName(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ClassOfDevice(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SdpRecords(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RfcommServices(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ConnectionStatus(abi_t<Windows::Devices::Bluetooth::BluetoothConnectionStatus>* value) = 0;
    virtual HRESULT __stdcall get_BluetoothAddress(uint64_t* value) = 0;
    virtual HRESULT __stdcall add_NameChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_NameChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_SdpRecordsChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_SdpRecordsChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_ConnectionStatusChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ConnectionStatusChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::IBluetoothDevice2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceInformation(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::IBluetoothDevice3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceAccessInformation(::IUnknown** value) = 0;
    virtual HRESULT __stdcall RequestAccessAsync(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetRfcommServicesAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetRfcommServicesWithCacheModeAsync(abi_t<Windows::Devices::Bluetooth::BluetoothCacheMode> cacheMode, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetRfcommServicesForIdAsync(::IUnknown* serviceId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetRfcommServicesForIdWithCacheModeAsync(::IUnknown* serviceId, abi_t<Windows::Devices::Bluetooth::BluetoothCacheMode> cacheMode, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::IBluetoothDeviceId>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IsClassicDevice(bool* value) = 0;
    virtual HRESULT __stdcall get_IsLowEnergyDevice(bool* value) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::IBluetoothDeviceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall FromHostNameAsync(::IUnknown* hostName, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall FromBluetoothAddressAsync(uint64_t address, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetDeviceSelector(HSTRING* deviceSelector) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::IBluetoothDeviceStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeviceSelectorFromPairingState(bool pairingState, HSTRING* deviceSelector) = 0;
    virtual HRESULT __stdcall GetDeviceSelectorFromConnectionStatus(abi_t<Windows::Devices::Bluetooth::BluetoothConnectionStatus> connectionStatus, HSTRING* deviceSelector) = 0;
    virtual HRESULT __stdcall GetDeviceSelectorFromDeviceName(HSTRING deviceName, HSTRING* deviceSelector) = 0;
    virtual HRESULT __stdcall GetDeviceSelectorFromBluetoothAddress(uint64_t bluetoothAddress, HSTRING* deviceSelector) = 0;
    virtual HRESULT __stdcall GetDeviceSelectorFromClassOfDevice(::IUnknown* classOfDevice, HSTRING* deviceSelector) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::IBluetoothLEAppearance>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RawValue(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_Category(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_SubCategory(uint16_t* value) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::IBluetoothLEAppearanceCategoriesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Uncategorized(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_Phone(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_Computer(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_Watch(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_Clock(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_Display(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_RemoteControl(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_EyeGlasses(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_Tag(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_Keyring(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_MediaPlayer(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_BarcodeScanner(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_Thermometer(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_HeartRate(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_BloodPressure(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_HumanInterfaceDevice(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_GlucoseMeter(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_RunningWalking(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_Cycling(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_PulseOximeter(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_WeightScale(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_OutdoorSportActivity(uint16_t* value) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::IBluetoothLEAppearanceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FromRawValue(uint16_t rawValue, ::IUnknown** appearance) = 0;
    virtual HRESULT __stdcall FromParts(uint16_t appearanceCategory, uint16_t appearanceSubCategory, ::IUnknown** appearance) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::IBluetoothLEAppearanceSubcategoriesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Generic(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_SportsWatch(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_ThermometerEar(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_HeartRateBelt(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_BloodPressureArm(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_BloodPressureWrist(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_Keyboard(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_Mouse(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_Joystick(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_Gamepad(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_DigitizerTablet(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_CardReader(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_DigitalPen(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_BarcodeScanner(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_RunningWalkingInShoe(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_RunningWalkingOnShoe(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_RunningWalkingOnHip(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_CyclingComputer(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_CyclingSpeedSensor(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_CyclingCadenceSensor(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_CyclingPowerSensor(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_CyclingSpeedCadenceSensor(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_OximeterFingertip(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_OximeterWristWorn(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_LocationDisplay(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_LocationNavigationDisplay(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_LocationPod(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_LocationNavigationPod(uint16_t* value) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::IBluetoothLEDevice>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_GattServices(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ConnectionStatus(abi_t<Windows::Devices::Bluetooth::BluetoothConnectionStatus>* value) = 0;
    virtual HRESULT __stdcall get_BluetoothAddress(uint64_t* value) = 0;
    virtual HRESULT __stdcall GetGattService(abi_t<GUID> serviceUuid, ::IUnknown** service) = 0;
    virtual HRESULT __stdcall add_NameChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_NameChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_GattServicesChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_GattServicesChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_ConnectionStatusChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ConnectionStatusChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::IBluetoothLEDevice2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceInformation(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Appearance(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_BluetoothAddressType(abi_t<Windows::Devices::Bluetooth::BluetoothAddressType>* value) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::IBluetoothLEDevice3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceAccessInformation(::IUnknown** value) = 0;
    virtual HRESULT __stdcall RequestAccessAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetGattServicesAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetGattServicesWithCacheModeAsync(abi_t<Windows::Devices::Bluetooth::BluetoothCacheMode> cacheMode, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetGattServicesForUuidAsync(abi_t<GUID> serviceUuid, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetGattServicesForUuidWithCacheModeAsync(abi_t<GUID> serviceUuid, abi_t<Windows::Devices::Bluetooth::BluetoothCacheMode> cacheMode, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall FromBluetoothAddressAsync(uint64_t bluetoothAddress, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetDeviceSelector(HSTRING* deviceSelector) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::IBluetoothLEDeviceStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeviceSelectorFromPairingState(bool pairingState, HSTRING* deviceSelector) = 0;
    virtual HRESULT __stdcall GetDeviceSelectorFromConnectionStatus(abi_t<Windows::Devices::Bluetooth::BluetoothConnectionStatus> connectionStatus, HSTRING* deviceSelector) = 0;
    virtual HRESULT __stdcall GetDeviceSelectorFromDeviceName(HSTRING deviceName, HSTRING* deviceSelector) = 0;
    virtual HRESULT __stdcall GetDeviceSelectorFromBluetoothAddress(uint64_t bluetoothAddress, HSTRING* deviceSelector) = 0;
    virtual HRESULT __stdcall GetDeviceSelectorFromBluetoothAddressWithBluetoothAddressType(uint64_t bluetoothAddress, abi_t<Windows::Devices::Bluetooth::BluetoothAddressType> bluetoothAddressType, HSTRING* deviceSelector) = 0;
    virtual HRESULT __stdcall GetDeviceSelectorFromAppearance(::IUnknown* appearance, HSTRING* deviceSelector) = 0;
    virtual HRESULT __stdcall FromBluetoothAddressWithBluetoothAddressTypeAsync(uint64_t bluetoothAddress, abi_t<Windows::Devices::Bluetooth::BluetoothAddressType> bluetoothAddressType, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::IBluetoothSignalStrengthFilter>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InRangeThresholdInDBm(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_InRangeThresholdInDBm(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_OutOfRangeThresholdInDBm(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_OutOfRangeThresholdInDBm(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_OutOfRangeTimeout(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_OutOfRangeTimeout(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_SamplingInterval(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_SamplingInterval(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::IBluetoothUuidHelperStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FromShortId(uint32_t shortId, abi_t<GUID>* result) = 0;
    virtual HRESULT __stdcall TryGetShortId(abi_t<GUID> uuid, ::IUnknown** result) = 0;
};};

}
