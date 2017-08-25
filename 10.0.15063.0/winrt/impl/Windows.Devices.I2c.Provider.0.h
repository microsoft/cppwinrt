// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::I2c::Provider {

enum class ProviderI2cBusSpeed
{
    StandardMode = 0,
    FastMode = 1,
};

enum class ProviderI2cSharingMode
{
    Exclusive = 0,
    Shared = 1,
};

enum class ProviderI2cTransferStatus
{
    FullTransfer = 0,
    PartialTransfer = 1,
    SlaveAddressNotAcknowledged = 2,
};

struct II2cControllerProvider;
struct II2cDeviceProvider;
struct II2cProvider;
struct IProviderI2cConnectionSettings;
struct ProviderI2cConnectionSettings;
struct ProviderI2cTransferResult;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::I2c::Provider::II2cControllerProvider>{ using type = interface_category; };
template <> struct category<Windows::Devices::I2c::Provider::II2cDeviceProvider>{ using type = interface_category; };
template <> struct category<Windows::Devices::I2c::Provider::II2cProvider>{ using type = interface_category; };
template <> struct category<Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings>{ using type = interface_category; };
template <> struct category<Windows::Devices::I2c::Provider::ProviderI2cConnectionSettings>{ using type = class_category; };
template <> struct category<Windows::Devices::I2c::Provider::ProviderI2cBusSpeed>{ using type = enum_category; };
template <> struct category<Windows::Devices::I2c::Provider::ProviderI2cSharingMode>{ using type = enum_category; };
template <> struct category<Windows::Devices::I2c::Provider::ProviderI2cTransferStatus>{ using type = enum_category; };
template <> struct category<Windows::Devices::I2c::Provider::ProviderI2cTransferResult>{ using type = struct_category<Windows::Devices::I2c::Provider::ProviderI2cTransferStatus,uint32_t>; };
template <> struct name<Windows::Devices::I2c::Provider::II2cControllerProvider>{ static constexpr auto & value{ L"Windows.Devices.I2c.Provider.II2cControllerProvider" }; };
template <> struct name<Windows::Devices::I2c::Provider::II2cDeviceProvider>{ static constexpr auto & value{ L"Windows.Devices.I2c.Provider.II2cDeviceProvider" }; };
template <> struct name<Windows::Devices::I2c::Provider::II2cProvider>{ static constexpr auto & value{ L"Windows.Devices.I2c.Provider.II2cProvider" }; };
template <> struct name<Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings>{ static constexpr auto & value{ L"Windows.Devices.I2c.Provider.IProviderI2cConnectionSettings" }; };
template <> struct name<Windows::Devices::I2c::Provider::ProviderI2cConnectionSettings>{ static constexpr auto & value{ L"Windows.Devices.I2c.Provider.ProviderI2cConnectionSettings" }; };
template <> struct name<Windows::Devices::I2c::Provider::ProviderI2cBusSpeed>{ static constexpr auto & value{ L"Windows.Devices.I2c.Provider.ProviderI2cBusSpeed" }; };
template <> struct name<Windows::Devices::I2c::Provider::ProviderI2cSharingMode>{ static constexpr auto & value{ L"Windows.Devices.I2c.Provider.ProviderI2cSharingMode" }; };
template <> struct name<Windows::Devices::I2c::Provider::ProviderI2cTransferStatus>{ static constexpr auto & value{ L"Windows.Devices.I2c.Provider.ProviderI2cTransferStatus" }; };
template <> struct name<Windows::Devices::I2c::Provider::ProviderI2cTransferResult>{ static constexpr auto & value{ L"Windows.Devices.I2c.Provider.ProviderI2cTransferResult" }; };
template <> struct guid<Windows::Devices::I2c::Provider::II2cControllerProvider>{ static constexpr GUID value{ 0x61C2BB82,0x4510,0x4163,{ 0xA8,0x7C,0x4E,0x15,0xA9,0x55,0x89,0x80 } }; };
template <> struct guid<Windows::Devices::I2c::Provider::II2cDeviceProvider>{ static constexpr GUID value{ 0xAD342654,0x57E8,0x453E,{ 0x83,0x29,0xD1,0xE4,0x47,0xD1,0x03,0xA9 } }; };
template <> struct guid<Windows::Devices::I2c::Provider::II2cProvider>{ static constexpr GUID value{ 0x6F13083E,0xBF62,0x4FE2,{ 0xA9,0x5A,0xF0,0x89,0x99,0x66,0x98,0x18 } }; };
template <> struct guid<Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings>{ static constexpr GUID value{ 0xE9DB4E34,0xE510,0x44B7,{ 0x80,0x9D,0xF2,0xF8,0x5B,0x55,0x53,0x39 } }; };
template <> struct default_interface<Windows::Devices::I2c::Provider::ProviderI2cConnectionSettings>{ using type = Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings; };

template <typename D>
struct consume_Windows_Devices_I2c_Provider_II2cControllerProvider
{
    Windows::Devices::I2c::Provider::II2cDeviceProvider GetDeviceProvider(Windows::Devices::I2c::Provider::ProviderI2cConnectionSettings const& settings) const;
};
template <> struct consume<Windows::Devices::I2c::Provider::II2cControllerProvider> { template <typename D> using type = consume_Windows_Devices_I2c_Provider_II2cControllerProvider<D>; };

template <typename D>
struct consume_Windows_Devices_I2c_Provider_II2cDeviceProvider
{
    hstring DeviceId() const;
    void Write(array_view<uint8_t const> buffer) const;
    Windows::Devices::I2c::Provider::ProviderI2cTransferResult WritePartial(array_view<uint8_t const> buffer) const;
    void Read(array_view<uint8_t> buffer) const;
    Windows::Devices::I2c::Provider::ProviderI2cTransferResult ReadPartial(array_view<uint8_t> buffer) const;
    void WriteRead(array_view<uint8_t const> writeBuffer, array_view<uint8_t> readBuffer) const;
    Windows::Devices::I2c::Provider::ProviderI2cTransferResult WriteReadPartial(array_view<uint8_t const> writeBuffer, array_view<uint8_t> readBuffer) const;
};
template <> struct consume<Windows::Devices::I2c::Provider::II2cDeviceProvider> { template <typename D> using type = consume_Windows_Devices_I2c_Provider_II2cDeviceProvider<D>; };

template <typename D>
struct consume_Windows_Devices_I2c_Provider_II2cProvider
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::I2c::Provider::II2cControllerProvider>> GetControllersAsync() const;
};
template <> struct consume<Windows::Devices::I2c::Provider::II2cProvider> { template <typename D> using type = consume_Windows_Devices_I2c_Provider_II2cProvider<D>; };

template <typename D>
struct consume_Windows_Devices_I2c_Provider_IProviderI2cConnectionSettings
{
    int32_t SlaveAddress() const;
    void SlaveAddress(int32_t value) const;
    Windows::Devices::I2c::Provider::ProviderI2cBusSpeed BusSpeed() const;
    void BusSpeed(Windows::Devices::I2c::Provider::ProviderI2cBusSpeed const& value) const;
    Windows::Devices::I2c::Provider::ProviderI2cSharingMode SharingMode() const;
    void SharingMode(Windows::Devices::I2c::Provider::ProviderI2cSharingMode const& value) const;
};
template <> struct consume<Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings> { template <typename D> using type = consume_Windows_Devices_I2c_Provider_IProviderI2cConnectionSettings<D>; };

template <> struct abi<Windows::Devices::I2c::Provider::II2cControllerProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeviceProvider(::IUnknown* settings, ::IUnknown** device) = 0;
};};

template <> struct abi<Windows::Devices::I2c::Provider::II2cDeviceProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall Write(uint32_t __bufferSize, uint8_t* buffer) = 0;
    virtual HRESULT __stdcall WritePartial(uint32_t __bufferSize, uint8_t* buffer, abi_t<Windows::Devices::I2c::Provider::ProviderI2cTransferResult>* result) = 0;
    virtual HRESULT __stdcall Read(uint32_t __bufferSize, uint8_t* buffer) = 0;
    virtual HRESULT __stdcall ReadPartial(uint32_t __bufferSize, uint8_t* buffer, abi_t<Windows::Devices::I2c::Provider::ProviderI2cTransferResult>* result) = 0;
    virtual HRESULT __stdcall WriteRead(uint32_t __writeBufferSize, uint8_t* writeBuffer, uint32_t __readBufferSize, uint8_t* readBuffer) = 0;
    virtual HRESULT __stdcall WriteReadPartial(uint32_t __writeBufferSize, uint8_t* writeBuffer, uint32_t __readBufferSize, uint8_t* readBuffer, abi_t<Windows::Devices::I2c::Provider::ProviderI2cTransferResult>* result) = 0;
};};

template <> struct abi<Windows::Devices::I2c::Provider::II2cProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetControllersAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SlaveAddress(int32_t* value) = 0;
    virtual HRESULT __stdcall put_SlaveAddress(int32_t value) = 0;
    virtual HRESULT __stdcall get_BusSpeed(abi_t<Windows::Devices::I2c::Provider::ProviderI2cBusSpeed>* value) = 0;
    virtual HRESULT __stdcall put_BusSpeed(abi_t<Windows::Devices::I2c::Provider::ProviderI2cBusSpeed> value) = 0;
    virtual HRESULT __stdcall get_SharingMode(abi_t<Windows::Devices::I2c::Provider::ProviderI2cSharingMode>* value) = 0;
    virtual HRESULT __stdcall put_SharingMode(abi_t<Windows::Devices::I2c::Provider::ProviderI2cSharingMode> value) = 0;
};};

}
