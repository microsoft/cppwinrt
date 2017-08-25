// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth {

enum class BluetoothCacheMode;
enum class BluetoothError;
struct BluetoothDevice;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration {

enum class DeviceAccessStatus;
struct DeviceAccessInformation;

}

WINRT_EXPORT namespace winrt::Windows::Networking {

struct HostName;

}

WINRT_EXPORT namespace winrt::Windows::Networking::Sockets {

enum class SocketProtectionLevel;
struct StreamSocketListener;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::Rfcomm {

struct IRfcommDeviceService;
struct IRfcommDeviceService2;
struct IRfcommDeviceService3;
struct IRfcommDeviceServiceStatics;
struct IRfcommDeviceServiceStatics2;
struct IRfcommDeviceServicesResult;
struct IRfcommServiceId;
struct IRfcommServiceIdStatics;
struct IRfcommServiceProvider;
struct IRfcommServiceProvider2;
struct IRfcommServiceProviderStatics;
struct RfcommDeviceService;
struct RfcommDeviceServicesResult;
struct RfcommServiceId;
struct RfcommServiceProvider;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService3>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServicesResult>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceIdStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProviderStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService>{ using type = class_category; };
template <> struct category<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult>{ using type = class_category; };
template <> struct category<Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId>{ using type = class_category; };
template <> struct category<Windows::Devices::Bluetooth::Rfcomm::RfcommServiceProvider>{ using type = class_category; };
template <> struct name<Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Rfcomm.IRfcommDeviceService" }; };
template <> struct name<Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService2>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Rfcomm.IRfcommDeviceService2" }; };
template <> struct name<Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService3>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Rfcomm.IRfcommDeviceService3" }; };
template <> struct name<Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Rfcomm.IRfcommDeviceServiceStatics" }; };
template <> struct name<Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics2>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Rfcomm.IRfcommDeviceServiceStatics2" }; };
template <> struct name<Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServicesResult>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Rfcomm.IRfcommDeviceServicesResult" }; };
template <> struct name<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Rfcomm.IRfcommServiceId" }; };
template <> struct name<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceIdStatics>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Rfcomm.IRfcommServiceIdStatics" }; };
template <> struct name<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Rfcomm.IRfcommServiceProvider" }; };
template <> struct name<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider2>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Rfcomm.IRfcommServiceProvider2" }; };
template <> struct name<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProviderStatics>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Rfcomm.IRfcommServiceProviderStatics" }; };
template <> struct name<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Rfcomm.RfcommDeviceService" }; };
template <> struct name<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Rfcomm.RfcommDeviceServicesResult" }; };
template <> struct name<Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Rfcomm.RfcommServiceId" }; };
template <> struct name<Windows::Devices::Bluetooth::Rfcomm::RfcommServiceProvider>{ static constexpr auto & value{ L"Windows.Devices.Bluetooth.Rfcomm.RfcommServiceProvider" }; };
template <> struct guid<Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService>{ static constexpr GUID value{ 0xAE81FF1F,0xC5A1,0x4C40,{ 0x8C,0x28,0xF3,0xEF,0xD6,0x90,0x62,0xF3 } }; };
template <> struct guid<Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService2>{ static constexpr GUID value{ 0x536CED14,0xEBCD,0x49FE,{ 0xBF,0x9F,0x40,0xEF,0xC6,0x89,0xB2,0x0D } }; };
template <> struct guid<Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService3>{ static constexpr GUID value{ 0x1C22ACE6,0xDD44,0x4D23,{ 0x86,0x6D,0x8F,0x34,0x86,0xEE,0x64,0x90 } }; };
template <> struct guid<Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics>{ static constexpr GUID value{ 0xA4A149EF,0x626D,0x41AC,{ 0xB2,0x53,0x87,0xAC,0x5C,0x27,0xE2,0x8A } }; };
template <> struct guid<Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics2>{ static constexpr GUID value{ 0xAA8CB1C9,0xE78D,0x4BE4,{ 0x80,0x76,0x0A,0x3D,0x87,0xA0,0xA0,0x5F } }; };
template <> struct guid<Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServicesResult>{ static constexpr GUID value{ 0x3B48388C,0x7CCF,0x488E,{ 0x96,0x25,0xD2,0x59,0xA5,0x73,0x2D,0x55 } }; };
template <> struct guid<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId>{ static constexpr GUID value{ 0x22629204,0x7E02,0x4017,{ 0x81,0x36,0xDA,0x1B,0x6A,0x1B,0x9B,0xBF } }; };
template <> struct guid<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceIdStatics>{ static constexpr GUID value{ 0x2A179EBA,0xA975,0x46E3,{ 0xB5,0x6B,0x08,0xFF,0xD7,0x83,0xA5,0xFE } }; };
template <> struct guid<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider>{ static constexpr GUID value{ 0xEADBFDC4,0xB1F6,0x44FF,{ 0x9F,0x7C,0xE7,0xA8,0x2A,0xB8,0x68,0x21 } }; };
template <> struct guid<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider2>{ static constexpr GUID value{ 0x736BDFC6,0x3C81,0x4D1E,{ 0xBA,0xF2,0xDD,0xBB,0x81,0x28,0x45,0x12 } }; };
template <> struct guid<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProviderStatics>{ static constexpr GUID value{ 0x98888303,0x69CA,0x413A,{ 0x84,0xF7,0x43,0x44,0xC7,0x29,0x29,0x97 } }; };
template <> struct default_interface<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService>{ using type = Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService; };
template <> struct default_interface<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult>{ using type = Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServicesResult; };
template <> struct default_interface<Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId>{ using type = Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId; };
template <> struct default_interface<Windows::Devices::Bluetooth::Rfcomm::RfcommServiceProvider>{ using type = Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceService
{
    Windows::Networking::HostName ConnectionHostName() const;
    hstring ConnectionServiceName() const;
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId ServiceId() const;
    Windows::Networking::Sockets::SocketProtectionLevel ProtectionLevel() const;
    Windows::Networking::Sockets::SocketProtectionLevel MaxProtectionLevel() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<uint32_t, Windows::Storage::Streams::IBuffer>> GetSdpRawAttributesAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMapView<uint32_t, Windows::Storage::Streams::IBuffer>> GetSdpRawAttributesAsync(Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const;
};
template <> struct consume<Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceService<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceService2
{
    Windows::Devices::Bluetooth::BluetoothDevice Device() const;
};
template <> struct consume<Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService2> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceService2<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceService3
{
    Windows::Devices::Enumeration::DeviceAccessInformation DeviceAccessInformation() const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Enumeration::DeviceAccessStatus> RequestAccessAsync() const;
};
template <> struct consume<Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService3> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceService3<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceServiceStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService> FromIdAsync(param::hstring const& deviceId) const;
    hstring GetDeviceSelector(Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const& serviceId) const;
};
template <> struct consume<Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceServiceStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceServiceStatics2
{
    hstring GetDeviceSelectorForBluetoothDevice(Windows::Devices::Bluetooth::BluetoothDevice const& bluetoothDevice) const;
    hstring GetDeviceSelectorForBluetoothDevice(Windows::Devices::Bluetooth::BluetoothDevice const& bluetoothDevice, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const;
    hstring GetDeviceSelectorForBluetoothDeviceAndServiceId(Windows::Devices::Bluetooth::BluetoothDevice const& bluetoothDevice, Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const& serviceId) const;
    hstring GetDeviceSelectorForBluetoothDeviceAndServiceId(Windows::Devices::Bluetooth::BluetoothDevice const& bluetoothDevice, Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const& serviceId, Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const;
};
template <> struct consume<Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics2> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceServiceStatics2<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceServicesResult
{
    Windows::Devices::Bluetooth::BluetoothError Error() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService> Services() const;
};
template <> struct consume<Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServicesResult> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceServicesResult<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceId
{
    GUID Uuid() const;
    uint32_t AsShortId() const;
    hstring AsString() const;
};
template <> struct consume<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceId<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceIdStatics
{
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId FromUuid(GUID const& uuid) const;
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId FromShortId(uint32_t shortId) const;
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId SerialPort() const;
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId ObexObjectPush() const;
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId ObexFileTransfer() const;
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId PhoneBookAccessPce() const;
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId PhoneBookAccessPse() const;
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId GenericFileTransfer() const;
};
template <> struct consume<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceIdStatics> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceIdStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceProvider
{
    Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId ServiceId() const;
    Windows::Foundation::Collections::IMap<uint32_t, Windows::Storage::Streams::IBuffer> SdpRawAttributes() const;
    void StartAdvertising(Windows::Networking::Sockets::StreamSocketListener const& listener) const;
    void StopAdvertising() const;
};
template <> struct consume<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceProvider<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceProvider2
{
    void StartAdvertising(Windows::Networking::Sockets::StreamSocketListener const& listener, bool radioDiscoverable) const;
};
template <> struct consume<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider2> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceProvider2<D>; };

template <typename D>
struct consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceProviderStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Bluetooth::Rfcomm::RfcommServiceProvider> CreateAsync(Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const& serviceId) const;
};
template <> struct consume<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProviderStatics> { template <typename D> using type = consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceProviderStatics<D>; };

template <> struct abi<Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ConnectionHostName(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ConnectionServiceName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ServiceId(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ProtectionLevel(abi_t<Windows::Networking::Sockets::SocketProtectionLevel>* value) = 0;
    virtual HRESULT __stdcall get_MaxProtectionLevel(abi_t<Windows::Networking::Sockets::SocketProtectionLevel>* value) = 0;
    virtual HRESULT __stdcall GetSdpRawAttributesAsync(::IUnknown** asyncOp) = 0;
    virtual HRESULT __stdcall GetSdpRawAttributesWithCacheModeAsync(abi_t<Windows::Devices::Bluetooth::BluetoothCacheMode> cacheMode, ::IUnknown** asyncOp) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Device(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceAccessInformation(::IUnknown** value) = 0;
    virtual HRESULT __stdcall RequestAccessAsync(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** asyncOp) = 0;
    virtual HRESULT __stdcall GetDeviceSelector(::IUnknown* serviceId, HSTRING* selector) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeviceSelectorForBluetoothDevice(::IUnknown* bluetoothDevice, HSTRING* selector) = 0;
    virtual HRESULT __stdcall GetDeviceSelectorForBluetoothDeviceWithCacheMode(::IUnknown* bluetoothDevice, abi_t<Windows::Devices::Bluetooth::BluetoothCacheMode> cacheMode, HSTRING* selector) = 0;
    virtual HRESULT __stdcall GetDeviceSelectorForBluetoothDeviceAndServiceId(::IUnknown* bluetoothDevice, ::IUnknown* serviceId, HSTRING* selector) = 0;
    virtual HRESULT __stdcall GetDeviceSelectorForBluetoothDeviceAndServiceIdWithCacheMode(::IUnknown* bluetoothDevice, ::IUnknown* serviceId, abi_t<Windows::Devices::Bluetooth::BluetoothCacheMode> cacheMode, HSTRING* selector) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServicesResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Error(abi_t<Windows::Devices::Bluetooth::BluetoothError>* value) = 0;
    virtual HRESULT __stdcall get_Services(::IUnknown** services) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Uuid(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall AsShortId(uint32_t* shortId) = 0;
    virtual HRESULT __stdcall AsString(HSTRING* id) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceIdStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FromUuid(abi_t<GUID> uuid, ::IUnknown** serviceId) = 0;
    virtual HRESULT __stdcall FromShortId(uint32_t shortId, ::IUnknown** serviceId) = 0;
    virtual HRESULT __stdcall get_SerialPort(::IUnknown** serviceId) = 0;
    virtual HRESULT __stdcall get_ObexObjectPush(::IUnknown** serviceId) = 0;
    virtual HRESULT __stdcall get_ObexFileTransfer(::IUnknown** serviceId) = 0;
    virtual HRESULT __stdcall get_PhoneBookAccessPce(::IUnknown** serviceId) = 0;
    virtual HRESULT __stdcall get_PhoneBookAccessPse(::IUnknown** serviceId) = 0;
    virtual HRESULT __stdcall get_GenericFileTransfer(::IUnknown** serviceId) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ServiceId(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SdpRawAttributes(::IUnknown** value) = 0;
    virtual HRESULT __stdcall StartAdvertising(::IUnknown* listener) = 0;
    virtual HRESULT __stdcall StopAdvertising() = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall StartAdvertisingWithRadioDiscoverability(::IUnknown* listener, bool radioDiscoverable) = 0;
};};

template <> struct abi<Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProviderStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateAsync(::IUnknown* serviceId, ::IUnknown** asyncOp) = 0;
};};

}
