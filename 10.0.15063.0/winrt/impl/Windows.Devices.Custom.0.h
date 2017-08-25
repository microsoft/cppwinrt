// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;
struct IInputStream;
struct IOutputStream;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Custom {

enum class DeviceAccessMode
{
    Read = 0,
    Write = 1,
    ReadWrite = 2,
};

enum class DeviceSharingMode
{
    Shared = 0,
    Exclusive = 1,
};

enum class IOControlAccessMode
{
    Any = 0,
    Read = 1,
    Write = 2,
    ReadWrite = 3,
};

enum class IOControlBufferingMethod
{
    Buffered = 0,
    DirectInput = 1,
    DirectOutput = 2,
    Neither = 3,
};

struct ICustomDevice;
struct ICustomDeviceStatics;
struct IIOControlCode;
struct IIOControlCodeFactory;
struct IKnownDeviceTypesStatics;
struct CustomDevice;
struct IOControlCode;
struct KnownDeviceTypes;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::Custom::ICustomDevice>{ using type = interface_category; };
template <> struct category<Windows::Devices::Custom::ICustomDeviceStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Custom::IIOControlCode>{ using type = interface_category; };
template <> struct category<Windows::Devices::Custom::IIOControlCodeFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Custom::IKnownDeviceTypesStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Custom::CustomDevice>{ using type = class_category; };
template <> struct category<Windows::Devices::Custom::IOControlCode>{ using type = class_category; };
template <> struct category<Windows::Devices::Custom::KnownDeviceTypes>{ using type = class_category; };
template <> struct category<Windows::Devices::Custom::DeviceAccessMode>{ using type = enum_category; };
template <> struct category<Windows::Devices::Custom::DeviceSharingMode>{ using type = enum_category; };
template <> struct category<Windows::Devices::Custom::IOControlAccessMode>{ using type = enum_category; };
template <> struct category<Windows::Devices::Custom::IOControlBufferingMethod>{ using type = enum_category; };
template <> struct name<Windows::Devices::Custom::ICustomDevice>{ static constexpr auto & value{ L"Windows.Devices.Custom.ICustomDevice" }; };
template <> struct name<Windows::Devices::Custom::ICustomDeviceStatics>{ static constexpr auto & value{ L"Windows.Devices.Custom.ICustomDeviceStatics" }; };
template <> struct name<Windows::Devices::Custom::IIOControlCode>{ static constexpr auto & value{ L"Windows.Devices.Custom.IIOControlCode" }; };
template <> struct name<Windows::Devices::Custom::IIOControlCodeFactory>{ static constexpr auto & value{ L"Windows.Devices.Custom.IIOControlCodeFactory" }; };
template <> struct name<Windows::Devices::Custom::IKnownDeviceTypesStatics>{ static constexpr auto & value{ L"Windows.Devices.Custom.IKnownDeviceTypesStatics" }; };
template <> struct name<Windows::Devices::Custom::CustomDevice>{ static constexpr auto & value{ L"Windows.Devices.Custom.CustomDevice" }; };
template <> struct name<Windows::Devices::Custom::IOControlCode>{ static constexpr auto & value{ L"Windows.Devices.Custom.IOControlCode" }; };
template <> struct name<Windows::Devices::Custom::KnownDeviceTypes>{ static constexpr auto & value{ L"Windows.Devices.Custom.KnownDeviceTypes" }; };
template <> struct name<Windows::Devices::Custom::DeviceAccessMode>{ static constexpr auto & value{ L"Windows.Devices.Custom.DeviceAccessMode" }; };
template <> struct name<Windows::Devices::Custom::DeviceSharingMode>{ static constexpr auto & value{ L"Windows.Devices.Custom.DeviceSharingMode" }; };
template <> struct name<Windows::Devices::Custom::IOControlAccessMode>{ static constexpr auto & value{ L"Windows.Devices.Custom.IOControlAccessMode" }; };
template <> struct name<Windows::Devices::Custom::IOControlBufferingMethod>{ static constexpr auto & value{ L"Windows.Devices.Custom.IOControlBufferingMethod" }; };
template <> struct guid<Windows::Devices::Custom::ICustomDevice>{ static constexpr GUID value{ 0xDD30251F,0xC48B,0x43BD,{ 0xBC,0xB1,0xDE,0xC8,0x8F,0x15,0x14,0x3E } }; };
template <> struct guid<Windows::Devices::Custom::ICustomDeviceStatics>{ static constexpr GUID value{ 0xC8220312,0xEF4C,0x46B1,{ 0xA5,0x8E,0xEE,0xB3,0x08,0xDC,0x89,0x17 } }; };
template <> struct guid<Windows::Devices::Custom::IIOControlCode>{ static constexpr GUID value{ 0x0E9559E7,0x60C8,0x4375,{ 0xA7,0x61,0x7F,0x88,0x08,0x06,0x6C,0x60 } }; };
template <> struct guid<Windows::Devices::Custom::IIOControlCodeFactory>{ static constexpr GUID value{ 0x856A7CF0,0x4C11,0x44AE,{ 0xAF,0xC6,0xB8,0xD4,0xA2,0x12,0x78,0x8F } }; };
template <> struct guid<Windows::Devices::Custom::IKnownDeviceTypesStatics>{ static constexpr GUID value{ 0xEE5479C2,0x5448,0x45DA,{ 0xAD,0x1B,0x24,0x94,0x8C,0x23,0x90,0x94 } }; };
template <> struct default_interface<Windows::Devices::Custom::CustomDevice>{ using type = Windows::Devices::Custom::ICustomDevice; };
template <> struct default_interface<Windows::Devices::Custom::IOControlCode>{ using type = Windows::Devices::Custom::IIOControlCode; };

template <typename D>
struct consume_Windows_Devices_Custom_ICustomDevice
{
    Windows::Storage::Streams::IInputStream InputStream() const;
    Windows::Storage::Streams::IOutputStream OutputStream() const;
    Windows::Foundation::IAsyncOperation<uint32_t> SendIOControlAsync(Windows::Devices::Custom::IIOControlCode const& ioControlCode, Windows::Storage::Streams::IBuffer const& inputBuffer, Windows::Storage::Streams::IBuffer const& outputBuffer) const;
    Windows::Foundation::IAsyncOperation<bool> TrySendIOControlAsync(Windows::Devices::Custom::IIOControlCode const& ioControlCode, Windows::Storage::Streams::IBuffer const& inputBuffer, Windows::Storage::Streams::IBuffer const& outputBuffer) const;
};
template <> struct consume<Windows::Devices::Custom::ICustomDevice> { template <typename D> using type = consume_Windows_Devices_Custom_ICustomDevice<D>; };

template <typename D>
struct consume_Windows_Devices_Custom_ICustomDeviceStatics
{
    hstring GetDeviceSelector(GUID const& classGuid) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Custom::CustomDevice> FromIdAsync(param::hstring const& deviceId, Windows::Devices::Custom::DeviceAccessMode const& desiredAccess, Windows::Devices::Custom::DeviceSharingMode const& sharingMode) const;
};
template <> struct consume<Windows::Devices::Custom::ICustomDeviceStatics> { template <typename D> using type = consume_Windows_Devices_Custom_ICustomDeviceStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Custom_IIOControlCode
{
    Windows::Devices::Custom::IOControlAccessMode AccessMode() const;
    Windows::Devices::Custom::IOControlBufferingMethod BufferingMethod() const;
    uint16_t Function() const;
    uint16_t DeviceType() const;
    uint32_t ControlCode() const;
};
template <> struct consume<Windows::Devices::Custom::IIOControlCode> { template <typename D> using type = consume_Windows_Devices_Custom_IIOControlCode<D>; };

template <typename D>
struct consume_Windows_Devices_Custom_IIOControlCodeFactory
{
    Windows::Devices::Custom::IOControlCode CreateIOControlCode(uint16_t deviceType, uint16_t function, Windows::Devices::Custom::IOControlAccessMode const& accessMode, Windows::Devices::Custom::IOControlBufferingMethod const& bufferingMethod) const;
};
template <> struct consume<Windows::Devices::Custom::IIOControlCodeFactory> { template <typename D> using type = consume_Windows_Devices_Custom_IIOControlCodeFactory<D>; };

template <typename D>
struct consume_Windows_Devices_Custom_IKnownDeviceTypesStatics
{
    uint16_t Unknown() const;
};
template <> struct consume<Windows::Devices::Custom::IKnownDeviceTypesStatics> { template <typename D> using type = consume_Windows_Devices_Custom_IKnownDeviceTypesStatics<D>; };

template <> struct abi<Windows::Devices::Custom::ICustomDevice>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InputStream(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_OutputStream(::IUnknown** value) = 0;
    virtual HRESULT __stdcall SendIOControlAsync(::IUnknown* ioControlCode, ::IUnknown* inputBuffer, ::IUnknown* outputBuffer, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall TrySendIOControlAsync(::IUnknown* ioControlCode, ::IUnknown* inputBuffer, ::IUnknown* outputBuffer, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Devices::Custom::ICustomDeviceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeviceSelector(abi_t<GUID> classGuid, HSTRING* value) = 0;
    virtual HRESULT __stdcall FromIdAsync(HSTRING deviceId, abi_t<Windows::Devices::Custom::DeviceAccessMode> desiredAccess, abi_t<Windows::Devices::Custom::DeviceSharingMode> sharingMode, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Devices::Custom::IIOControlCode>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AccessMode(abi_t<Windows::Devices::Custom::IOControlAccessMode>* value) = 0;
    virtual HRESULT __stdcall get_BufferingMethod(abi_t<Windows::Devices::Custom::IOControlBufferingMethod>* value) = 0;
    virtual HRESULT __stdcall get_Function(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_DeviceType(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_ControlCode(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Devices::Custom::IIOControlCodeFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateIOControlCode(uint16_t deviceType, uint16_t function, abi_t<Windows::Devices::Custom::IOControlAccessMode> accessMode, abi_t<Windows::Devices::Custom::IOControlBufferingMethod> bufferingMethod, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::Devices::Custom::IKnownDeviceTypesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Unknown(uint16_t* value) = 0;
};};

}
