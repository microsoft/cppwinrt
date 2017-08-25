// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::I2c::Provider {

struct II2cProvider;

}

WINRT_EXPORT namespace winrt::Windows::Devices::I2c {

enum class I2cBusSpeed
{
    StandardMode = 0,
    FastMode = 1,
};

enum class I2cSharingMode
{
    Exclusive = 0,
    Shared = 1,
};

enum class I2cTransferStatus
{
    FullTransfer = 0,
    PartialTransfer = 1,
    SlaveAddressNotAcknowledged = 2,
    ClockStretchTimeout = 3,
    UnknownError = 4,
};

struct II2cConnectionSettings;
struct II2cConnectionSettingsFactory;
struct II2cController;
struct II2cControllerStatics;
struct II2cDevice;
struct II2cDeviceStatics;
struct I2cConnectionSettings;
struct I2cController;
struct I2cDevice;
struct I2cTransferResult;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::I2c::II2cConnectionSettings>{ using type = interface_category; };
template <> struct category<Windows::Devices::I2c::II2cConnectionSettingsFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::I2c::II2cController>{ using type = interface_category; };
template <> struct category<Windows::Devices::I2c::II2cControllerStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::I2c::II2cDevice>{ using type = interface_category; };
template <> struct category<Windows::Devices::I2c::II2cDeviceStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::I2c::I2cConnectionSettings>{ using type = class_category; };
template <> struct category<Windows::Devices::I2c::I2cController>{ using type = class_category; };
template <> struct category<Windows::Devices::I2c::I2cDevice>{ using type = class_category; };
template <> struct category<Windows::Devices::I2c::I2cBusSpeed>{ using type = enum_category; };
template <> struct category<Windows::Devices::I2c::I2cSharingMode>{ using type = enum_category; };
template <> struct category<Windows::Devices::I2c::I2cTransferStatus>{ using type = enum_category; };
template <> struct category<Windows::Devices::I2c::I2cTransferResult>{ using type = struct_category<Windows::Devices::I2c::I2cTransferStatus,uint32_t>; };
template <> struct name<Windows::Devices::I2c::II2cConnectionSettings>{ static constexpr auto & value{ L"Windows.Devices.I2c.II2cConnectionSettings" }; };
template <> struct name<Windows::Devices::I2c::II2cConnectionSettingsFactory>{ static constexpr auto & value{ L"Windows.Devices.I2c.II2cConnectionSettingsFactory" }; };
template <> struct name<Windows::Devices::I2c::II2cController>{ static constexpr auto & value{ L"Windows.Devices.I2c.II2cController" }; };
template <> struct name<Windows::Devices::I2c::II2cControllerStatics>{ static constexpr auto & value{ L"Windows.Devices.I2c.II2cControllerStatics" }; };
template <> struct name<Windows::Devices::I2c::II2cDevice>{ static constexpr auto & value{ L"Windows.Devices.I2c.II2cDevice" }; };
template <> struct name<Windows::Devices::I2c::II2cDeviceStatics>{ static constexpr auto & value{ L"Windows.Devices.I2c.II2cDeviceStatics" }; };
template <> struct name<Windows::Devices::I2c::I2cConnectionSettings>{ static constexpr auto & value{ L"Windows.Devices.I2c.I2cConnectionSettings" }; };
template <> struct name<Windows::Devices::I2c::I2cController>{ static constexpr auto & value{ L"Windows.Devices.I2c.I2cController" }; };
template <> struct name<Windows::Devices::I2c::I2cDevice>{ static constexpr auto & value{ L"Windows.Devices.I2c.I2cDevice" }; };
template <> struct name<Windows::Devices::I2c::I2cBusSpeed>{ static constexpr auto & value{ L"Windows.Devices.I2c.I2cBusSpeed" }; };
template <> struct name<Windows::Devices::I2c::I2cSharingMode>{ static constexpr auto & value{ L"Windows.Devices.I2c.I2cSharingMode" }; };
template <> struct name<Windows::Devices::I2c::I2cTransferStatus>{ static constexpr auto & value{ L"Windows.Devices.I2c.I2cTransferStatus" }; };
template <> struct name<Windows::Devices::I2c::I2cTransferResult>{ static constexpr auto & value{ L"Windows.Devices.I2c.I2cTransferResult" }; };
template <> struct guid<Windows::Devices::I2c::II2cConnectionSettings>{ static constexpr GUID value{ 0xF2DB1307,0xAB6F,0x4639,{ 0xA7,0x67,0x54,0x53,0x6D,0xC3,0x46,0x0F } }; };
template <> struct guid<Windows::Devices::I2c::II2cConnectionSettingsFactory>{ static constexpr GUID value{ 0x81B586B3,0x9693,0x41B1,{ 0xA2,0x43,0xDE,0xD4,0xF6,0xE6,0x69,0x26 } }; };
template <> struct guid<Windows::Devices::I2c::II2cController>{ static constexpr GUID value{ 0xC48AB1B2,0x87A0,0x4166,{ 0x8E,0x3E,0xB4,0xB8,0xF9,0x7C,0xD7,0x29 } }; };
template <> struct guid<Windows::Devices::I2c::II2cControllerStatics>{ static constexpr GUID value{ 0x40FC0365,0x5F05,0x4E7E,{ 0x84,0xBD,0x10,0x0D,0xB8,0xE0,0xAE,0xC5 } }; };
template <> struct guid<Windows::Devices::I2c::II2cDevice>{ static constexpr GUID value{ 0x8636C136,0xB9C5,0x4F70,{ 0x94,0x49,0xCC,0x46,0xDC,0x6F,0x57,0xEB } }; };
template <> struct guid<Windows::Devices::I2c::II2cDeviceStatics>{ static constexpr GUID value{ 0x91A33BE3,0x7334,0x4512,{ 0x96,0xBC,0xFB,0xAE,0x94,0x59,0xF5,0xF6 } }; };
template <> struct default_interface<Windows::Devices::I2c::I2cConnectionSettings>{ using type = Windows::Devices::I2c::II2cConnectionSettings; };
template <> struct default_interface<Windows::Devices::I2c::I2cController>{ using type = Windows::Devices::I2c::II2cController; };
template <> struct default_interface<Windows::Devices::I2c::I2cDevice>{ using type = Windows::Devices::I2c::II2cDevice; };

template <typename D>
struct consume_Windows_Devices_I2c_II2cConnectionSettings
{
    int32_t SlaveAddress() const;
    void SlaveAddress(int32_t value) const;
    Windows::Devices::I2c::I2cBusSpeed BusSpeed() const;
    void BusSpeed(Windows::Devices::I2c::I2cBusSpeed const& value) const;
    Windows::Devices::I2c::I2cSharingMode SharingMode() const;
    void SharingMode(Windows::Devices::I2c::I2cSharingMode const& value) const;
};
template <> struct consume<Windows::Devices::I2c::II2cConnectionSettings> { template <typename D> using type = consume_Windows_Devices_I2c_II2cConnectionSettings<D>; };

template <typename D>
struct consume_Windows_Devices_I2c_II2cConnectionSettingsFactory
{
    Windows::Devices::I2c::I2cConnectionSettings Create(int32_t slaveAddress) const;
};
template <> struct consume<Windows::Devices::I2c::II2cConnectionSettingsFactory> { template <typename D> using type = consume_Windows_Devices_I2c_II2cConnectionSettingsFactory<D>; };

template <typename D>
struct consume_Windows_Devices_I2c_II2cController
{
    Windows::Devices::I2c::I2cDevice GetDevice(Windows::Devices::I2c::I2cConnectionSettings const& settings) const;
};
template <> struct consume<Windows::Devices::I2c::II2cController> { template <typename D> using type = consume_Windows_Devices_I2c_II2cController<D>; };

template <typename D>
struct consume_Windows_Devices_I2c_II2cControllerStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::I2c::I2cController>> GetControllersAsync(Windows::Devices::I2c::Provider::II2cProvider const& provider) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::I2c::I2cController> GetDefaultAsync() const;
};
template <> struct consume<Windows::Devices::I2c::II2cControllerStatics> { template <typename D> using type = consume_Windows_Devices_I2c_II2cControllerStatics<D>; };

template <typename D>
struct consume_Windows_Devices_I2c_II2cDevice
{
    hstring DeviceId() const;
    Windows::Devices::I2c::I2cConnectionSettings ConnectionSettings() const;
    void Write(array_view<uint8_t const> buffer) const;
    Windows::Devices::I2c::I2cTransferResult WritePartial(array_view<uint8_t const> buffer) const;
    void Read(array_view<uint8_t> buffer) const;
    Windows::Devices::I2c::I2cTransferResult ReadPartial(array_view<uint8_t> buffer) const;
    void WriteRead(array_view<uint8_t const> writeBuffer, array_view<uint8_t> readBuffer) const;
    Windows::Devices::I2c::I2cTransferResult WriteReadPartial(array_view<uint8_t const> writeBuffer, array_view<uint8_t> readBuffer) const;
};
template <> struct consume<Windows::Devices::I2c::II2cDevice> { template <typename D> using type = consume_Windows_Devices_I2c_II2cDevice<D>; };

template <typename D>
struct consume_Windows_Devices_I2c_II2cDeviceStatics
{
    hstring GetDeviceSelector() const;
    hstring GetDeviceSelector(param::hstring const& friendlyName) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::I2c::I2cDevice> FromIdAsync(param::hstring const& deviceId, Windows::Devices::I2c::I2cConnectionSettings const& settings) const;
};
template <> struct consume<Windows::Devices::I2c::II2cDeviceStatics> { template <typename D> using type = consume_Windows_Devices_I2c_II2cDeviceStatics<D>; };

template <> struct abi<Windows::Devices::I2c::II2cConnectionSettings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SlaveAddress(int32_t* value) = 0;
    virtual HRESULT __stdcall put_SlaveAddress(int32_t value) = 0;
    virtual HRESULT __stdcall get_BusSpeed(abi_t<Windows::Devices::I2c::I2cBusSpeed>* value) = 0;
    virtual HRESULT __stdcall put_BusSpeed(abi_t<Windows::Devices::I2c::I2cBusSpeed> value) = 0;
    virtual HRESULT __stdcall get_SharingMode(abi_t<Windows::Devices::I2c::I2cSharingMode>* value) = 0;
    virtual HRESULT __stdcall put_SharingMode(abi_t<Windows::Devices::I2c::I2cSharingMode> value) = 0;
};};

template <> struct abi<Windows::Devices::I2c::II2cConnectionSettingsFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(int32_t slaveAddress, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::I2c::II2cController>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDevice(::IUnknown* settings, ::IUnknown** device) = 0;
};};

template <> struct abi<Windows::Devices::I2c::II2cControllerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetControllersAsync(::IUnknown* provider, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetDefaultAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Devices::I2c::II2cDevice>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ConnectionSettings(::IUnknown** value) = 0;
    virtual HRESULT __stdcall Write(uint32_t __bufferSize, uint8_t* buffer) = 0;
    virtual HRESULT __stdcall WritePartial(uint32_t __bufferSize, uint8_t* buffer, abi_t<Windows::Devices::I2c::I2cTransferResult>* result) = 0;
    virtual HRESULT __stdcall Read(uint32_t __bufferSize, uint8_t* buffer) = 0;
    virtual HRESULT __stdcall ReadPartial(uint32_t __bufferSize, uint8_t* buffer, abi_t<Windows::Devices::I2c::I2cTransferResult>* result) = 0;
    virtual HRESULT __stdcall WriteRead(uint32_t __writeBufferSize, uint8_t* writeBuffer, uint32_t __readBufferSize, uint8_t* readBuffer) = 0;
    virtual HRESULT __stdcall WriteReadPartial(uint32_t __writeBufferSize, uint8_t* writeBuffer, uint32_t __readBufferSize, uint8_t* readBuffer, abi_t<Windows::Devices::I2c::I2cTransferResult>* result) = 0;
};};

template <> struct abi<Windows::Devices::I2c::II2cDeviceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeviceSelector(HSTRING* value) = 0;
    virtual HRESULT __stdcall GetDeviceSelectorFromFriendlyName(HSTRING friendlyName, HSTRING* value) = 0;
    virtual HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown* settings, ::IUnknown** operation) = 0;
};};

}
