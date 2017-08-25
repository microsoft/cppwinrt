// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;
struct IInputStream;
struct IOutputStream;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Usb {

enum class UsbControlRecipient
{
    Device = 0,
    SpecifiedInterface = 1,
    Endpoint = 2,
    Other = 3,
    DefaultInterface = 4,
};

enum class UsbControlTransferType
{
    Standard = 0,
    Class = 1,
    Vendor = 2,
};

enum class UsbEndpointType
{
    Control = 0,
    Isochronous = 1,
    Bulk = 2,
    Interrupt = 3,
};

enum class UsbReadOptions : unsigned
{
    None = 0x0,
    AutoClearStall = 0x1,
    OverrideAutomaticBufferManagement = 0x2,
    IgnoreShortPacket = 0x4,
    AllowPartialReads = 0x8,
};

DEFINE_ENUM_FLAG_OPERATORS(UsbReadOptions)

enum class UsbTransferDirection
{
    Out = 0,
    In = 1,
};

enum class UsbWriteOptions : unsigned
{
    None = 0x0,
    AutoClearStall = 0x1,
    ShortPacketTerminate = 0x2,
};

DEFINE_ENUM_FLAG_OPERATORS(UsbWriteOptions)

struct IUsbBulkInEndpointDescriptor;
struct IUsbBulkInPipe;
struct IUsbBulkOutEndpointDescriptor;
struct IUsbBulkOutPipe;
struct IUsbConfiguration;
struct IUsbConfigurationDescriptor;
struct IUsbConfigurationDescriptorStatics;
struct IUsbControlRequestType;
struct IUsbDescriptor;
struct IUsbDevice;
struct IUsbDeviceClass;
struct IUsbDeviceClasses;
struct IUsbDeviceClassesStatics;
struct IUsbDeviceDescriptor;
struct IUsbDeviceStatics;
struct IUsbEndpointDescriptor;
struct IUsbEndpointDescriptorStatics;
struct IUsbInterface;
struct IUsbInterfaceDescriptor;
struct IUsbInterfaceDescriptorStatics;
struct IUsbInterfaceSetting;
struct IUsbInterruptInEndpointDescriptor;
struct IUsbInterruptInEventArgs;
struct IUsbInterruptInPipe;
struct IUsbInterruptOutEndpointDescriptor;
struct IUsbInterruptOutPipe;
struct IUsbSetupPacket;
struct IUsbSetupPacketFactory;
struct UsbBulkInEndpointDescriptor;
struct UsbBulkInPipe;
struct UsbBulkOutEndpointDescriptor;
struct UsbBulkOutPipe;
struct UsbConfiguration;
struct UsbConfigurationDescriptor;
struct UsbControlRequestType;
struct UsbDescriptor;
struct UsbDevice;
struct UsbDeviceClass;
struct UsbDeviceClasses;
struct UsbDeviceDescriptor;
struct UsbEndpointDescriptor;
struct UsbInterface;
struct UsbInterfaceDescriptor;
struct UsbInterfaceSetting;
struct UsbInterruptInEndpointDescriptor;
struct UsbInterruptInEventArgs;
struct UsbInterruptInPipe;
struct UsbInterruptOutEndpointDescriptor;
struct UsbInterruptOutPipe;
struct UsbSetupPacket;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::Usb::IUsbBulkInEndpointDescriptor>{ using type = interface_category; };
template <> struct category<Windows::Devices::Usb::IUsbBulkInPipe>{ using type = interface_category; };
template <> struct category<Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor>{ using type = interface_category; };
template <> struct category<Windows::Devices::Usb::IUsbBulkOutPipe>{ using type = interface_category; };
template <> struct category<Windows::Devices::Usb::IUsbConfiguration>{ using type = interface_category; };
template <> struct category<Windows::Devices::Usb::IUsbConfigurationDescriptor>{ using type = interface_category; };
template <> struct category<Windows::Devices::Usb::IUsbConfigurationDescriptorStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Usb::IUsbControlRequestType>{ using type = interface_category; };
template <> struct category<Windows::Devices::Usb::IUsbDescriptor>{ using type = interface_category; };
template <> struct category<Windows::Devices::Usb::IUsbDevice>{ using type = interface_category; };
template <> struct category<Windows::Devices::Usb::IUsbDeviceClass>{ using type = interface_category; };
template <> struct category<Windows::Devices::Usb::IUsbDeviceClasses>{ using type = interface_category; };
template <> struct category<Windows::Devices::Usb::IUsbDeviceClassesStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Usb::IUsbDeviceDescriptor>{ using type = interface_category; };
template <> struct category<Windows::Devices::Usb::IUsbDeviceStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Usb::IUsbEndpointDescriptor>{ using type = interface_category; };
template <> struct category<Windows::Devices::Usb::IUsbEndpointDescriptorStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Usb::IUsbInterface>{ using type = interface_category; };
template <> struct category<Windows::Devices::Usb::IUsbInterfaceDescriptor>{ using type = interface_category; };
template <> struct category<Windows::Devices::Usb::IUsbInterfaceDescriptorStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Usb::IUsbInterfaceSetting>{ using type = interface_category; };
template <> struct category<Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor>{ using type = interface_category; };
template <> struct category<Windows::Devices::Usb::IUsbInterruptInEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Usb::IUsbInterruptInPipe>{ using type = interface_category; };
template <> struct category<Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor>{ using type = interface_category; };
template <> struct category<Windows::Devices::Usb::IUsbInterruptOutPipe>{ using type = interface_category; };
template <> struct category<Windows::Devices::Usb::IUsbSetupPacket>{ using type = interface_category; };
template <> struct category<Windows::Devices::Usb::IUsbSetupPacketFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Usb::UsbBulkInEndpointDescriptor>{ using type = class_category; };
template <> struct category<Windows::Devices::Usb::UsbBulkInPipe>{ using type = class_category; };
template <> struct category<Windows::Devices::Usb::UsbBulkOutEndpointDescriptor>{ using type = class_category; };
template <> struct category<Windows::Devices::Usb::UsbBulkOutPipe>{ using type = class_category; };
template <> struct category<Windows::Devices::Usb::UsbConfiguration>{ using type = class_category; };
template <> struct category<Windows::Devices::Usb::UsbConfigurationDescriptor>{ using type = class_category; };
template <> struct category<Windows::Devices::Usb::UsbControlRequestType>{ using type = class_category; };
template <> struct category<Windows::Devices::Usb::UsbDescriptor>{ using type = class_category; };
template <> struct category<Windows::Devices::Usb::UsbDevice>{ using type = class_category; };
template <> struct category<Windows::Devices::Usb::UsbDeviceClass>{ using type = class_category; };
template <> struct category<Windows::Devices::Usb::UsbDeviceClasses>{ using type = class_category; };
template <> struct category<Windows::Devices::Usb::UsbDeviceDescriptor>{ using type = class_category; };
template <> struct category<Windows::Devices::Usb::UsbEndpointDescriptor>{ using type = class_category; };
template <> struct category<Windows::Devices::Usb::UsbInterface>{ using type = class_category; };
template <> struct category<Windows::Devices::Usb::UsbInterfaceDescriptor>{ using type = class_category; };
template <> struct category<Windows::Devices::Usb::UsbInterfaceSetting>{ using type = class_category; };
template <> struct category<Windows::Devices::Usb::UsbInterruptInEndpointDescriptor>{ using type = class_category; };
template <> struct category<Windows::Devices::Usb::UsbInterruptInEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Usb::UsbInterruptInPipe>{ using type = class_category; };
template <> struct category<Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor>{ using type = class_category; };
template <> struct category<Windows::Devices::Usb::UsbInterruptOutPipe>{ using type = class_category; };
template <> struct category<Windows::Devices::Usb::UsbSetupPacket>{ using type = class_category; };
template <> struct category<Windows::Devices::Usb::UsbControlRecipient>{ using type = enum_category; };
template <> struct category<Windows::Devices::Usb::UsbControlTransferType>{ using type = enum_category; };
template <> struct category<Windows::Devices::Usb::UsbEndpointType>{ using type = enum_category; };
template <> struct category<Windows::Devices::Usb::UsbReadOptions>{ using type = enum_category; };
template <> struct category<Windows::Devices::Usb::UsbTransferDirection>{ using type = enum_category; };
template <> struct category<Windows::Devices::Usb::UsbWriteOptions>{ using type = enum_category; };
template <> struct name<Windows::Devices::Usb::IUsbBulkInEndpointDescriptor>{ static constexpr auto & value{ L"Windows.Devices.Usb.IUsbBulkInEndpointDescriptor" }; };
template <> struct name<Windows::Devices::Usb::IUsbBulkInPipe>{ static constexpr auto & value{ L"Windows.Devices.Usb.IUsbBulkInPipe" }; };
template <> struct name<Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor>{ static constexpr auto & value{ L"Windows.Devices.Usb.IUsbBulkOutEndpointDescriptor" }; };
template <> struct name<Windows::Devices::Usb::IUsbBulkOutPipe>{ static constexpr auto & value{ L"Windows.Devices.Usb.IUsbBulkOutPipe" }; };
template <> struct name<Windows::Devices::Usb::IUsbConfiguration>{ static constexpr auto & value{ L"Windows.Devices.Usb.IUsbConfiguration" }; };
template <> struct name<Windows::Devices::Usb::IUsbConfigurationDescriptor>{ static constexpr auto & value{ L"Windows.Devices.Usb.IUsbConfigurationDescriptor" }; };
template <> struct name<Windows::Devices::Usb::IUsbConfigurationDescriptorStatics>{ static constexpr auto & value{ L"Windows.Devices.Usb.IUsbConfigurationDescriptorStatics" }; };
template <> struct name<Windows::Devices::Usb::IUsbControlRequestType>{ static constexpr auto & value{ L"Windows.Devices.Usb.IUsbControlRequestType" }; };
template <> struct name<Windows::Devices::Usb::IUsbDescriptor>{ static constexpr auto & value{ L"Windows.Devices.Usb.IUsbDescriptor" }; };
template <> struct name<Windows::Devices::Usb::IUsbDevice>{ static constexpr auto & value{ L"Windows.Devices.Usb.IUsbDevice" }; };
template <> struct name<Windows::Devices::Usb::IUsbDeviceClass>{ static constexpr auto & value{ L"Windows.Devices.Usb.IUsbDeviceClass" }; };
template <> struct name<Windows::Devices::Usb::IUsbDeviceClasses>{ static constexpr auto & value{ L"Windows.Devices.Usb.IUsbDeviceClasses" }; };
template <> struct name<Windows::Devices::Usb::IUsbDeviceClassesStatics>{ static constexpr auto & value{ L"Windows.Devices.Usb.IUsbDeviceClassesStatics" }; };
template <> struct name<Windows::Devices::Usb::IUsbDeviceDescriptor>{ static constexpr auto & value{ L"Windows.Devices.Usb.IUsbDeviceDescriptor" }; };
template <> struct name<Windows::Devices::Usb::IUsbDeviceStatics>{ static constexpr auto & value{ L"Windows.Devices.Usb.IUsbDeviceStatics" }; };
template <> struct name<Windows::Devices::Usb::IUsbEndpointDescriptor>{ static constexpr auto & value{ L"Windows.Devices.Usb.IUsbEndpointDescriptor" }; };
template <> struct name<Windows::Devices::Usb::IUsbEndpointDescriptorStatics>{ static constexpr auto & value{ L"Windows.Devices.Usb.IUsbEndpointDescriptorStatics" }; };
template <> struct name<Windows::Devices::Usb::IUsbInterface>{ static constexpr auto & value{ L"Windows.Devices.Usb.IUsbInterface" }; };
template <> struct name<Windows::Devices::Usb::IUsbInterfaceDescriptor>{ static constexpr auto & value{ L"Windows.Devices.Usb.IUsbInterfaceDescriptor" }; };
template <> struct name<Windows::Devices::Usb::IUsbInterfaceDescriptorStatics>{ static constexpr auto & value{ L"Windows.Devices.Usb.IUsbInterfaceDescriptorStatics" }; };
template <> struct name<Windows::Devices::Usb::IUsbInterfaceSetting>{ static constexpr auto & value{ L"Windows.Devices.Usb.IUsbInterfaceSetting" }; };
template <> struct name<Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor>{ static constexpr auto & value{ L"Windows.Devices.Usb.IUsbInterruptInEndpointDescriptor" }; };
template <> struct name<Windows::Devices::Usb::IUsbInterruptInEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Usb.IUsbInterruptInEventArgs" }; };
template <> struct name<Windows::Devices::Usb::IUsbInterruptInPipe>{ static constexpr auto & value{ L"Windows.Devices.Usb.IUsbInterruptInPipe" }; };
template <> struct name<Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor>{ static constexpr auto & value{ L"Windows.Devices.Usb.IUsbInterruptOutEndpointDescriptor" }; };
template <> struct name<Windows::Devices::Usb::IUsbInterruptOutPipe>{ static constexpr auto & value{ L"Windows.Devices.Usb.IUsbInterruptOutPipe" }; };
template <> struct name<Windows::Devices::Usb::IUsbSetupPacket>{ static constexpr auto & value{ L"Windows.Devices.Usb.IUsbSetupPacket" }; };
template <> struct name<Windows::Devices::Usb::IUsbSetupPacketFactory>{ static constexpr auto & value{ L"Windows.Devices.Usb.IUsbSetupPacketFactory" }; };
template <> struct name<Windows::Devices::Usb::UsbBulkInEndpointDescriptor>{ static constexpr auto & value{ L"Windows.Devices.Usb.UsbBulkInEndpointDescriptor" }; };
template <> struct name<Windows::Devices::Usb::UsbBulkInPipe>{ static constexpr auto & value{ L"Windows.Devices.Usb.UsbBulkInPipe" }; };
template <> struct name<Windows::Devices::Usb::UsbBulkOutEndpointDescriptor>{ static constexpr auto & value{ L"Windows.Devices.Usb.UsbBulkOutEndpointDescriptor" }; };
template <> struct name<Windows::Devices::Usb::UsbBulkOutPipe>{ static constexpr auto & value{ L"Windows.Devices.Usb.UsbBulkOutPipe" }; };
template <> struct name<Windows::Devices::Usb::UsbConfiguration>{ static constexpr auto & value{ L"Windows.Devices.Usb.UsbConfiguration" }; };
template <> struct name<Windows::Devices::Usb::UsbConfigurationDescriptor>{ static constexpr auto & value{ L"Windows.Devices.Usb.UsbConfigurationDescriptor" }; };
template <> struct name<Windows::Devices::Usb::UsbControlRequestType>{ static constexpr auto & value{ L"Windows.Devices.Usb.UsbControlRequestType" }; };
template <> struct name<Windows::Devices::Usb::UsbDescriptor>{ static constexpr auto & value{ L"Windows.Devices.Usb.UsbDescriptor" }; };
template <> struct name<Windows::Devices::Usb::UsbDevice>{ static constexpr auto & value{ L"Windows.Devices.Usb.UsbDevice" }; };
template <> struct name<Windows::Devices::Usb::UsbDeviceClass>{ static constexpr auto & value{ L"Windows.Devices.Usb.UsbDeviceClass" }; };
template <> struct name<Windows::Devices::Usb::UsbDeviceClasses>{ static constexpr auto & value{ L"Windows.Devices.Usb.UsbDeviceClasses" }; };
template <> struct name<Windows::Devices::Usb::UsbDeviceDescriptor>{ static constexpr auto & value{ L"Windows.Devices.Usb.UsbDeviceDescriptor" }; };
template <> struct name<Windows::Devices::Usb::UsbEndpointDescriptor>{ static constexpr auto & value{ L"Windows.Devices.Usb.UsbEndpointDescriptor" }; };
template <> struct name<Windows::Devices::Usb::UsbInterface>{ static constexpr auto & value{ L"Windows.Devices.Usb.UsbInterface" }; };
template <> struct name<Windows::Devices::Usb::UsbInterfaceDescriptor>{ static constexpr auto & value{ L"Windows.Devices.Usb.UsbInterfaceDescriptor" }; };
template <> struct name<Windows::Devices::Usb::UsbInterfaceSetting>{ static constexpr auto & value{ L"Windows.Devices.Usb.UsbInterfaceSetting" }; };
template <> struct name<Windows::Devices::Usb::UsbInterruptInEndpointDescriptor>{ static constexpr auto & value{ L"Windows.Devices.Usb.UsbInterruptInEndpointDescriptor" }; };
template <> struct name<Windows::Devices::Usb::UsbInterruptInEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Usb.UsbInterruptInEventArgs" }; };
template <> struct name<Windows::Devices::Usb::UsbInterruptInPipe>{ static constexpr auto & value{ L"Windows.Devices.Usb.UsbInterruptInPipe" }; };
template <> struct name<Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor>{ static constexpr auto & value{ L"Windows.Devices.Usb.UsbInterruptOutEndpointDescriptor" }; };
template <> struct name<Windows::Devices::Usb::UsbInterruptOutPipe>{ static constexpr auto & value{ L"Windows.Devices.Usb.UsbInterruptOutPipe" }; };
template <> struct name<Windows::Devices::Usb::UsbSetupPacket>{ static constexpr auto & value{ L"Windows.Devices.Usb.UsbSetupPacket" }; };
template <> struct name<Windows::Devices::Usb::UsbControlRecipient>{ static constexpr auto & value{ L"Windows.Devices.Usb.UsbControlRecipient" }; };
template <> struct name<Windows::Devices::Usb::UsbControlTransferType>{ static constexpr auto & value{ L"Windows.Devices.Usb.UsbControlTransferType" }; };
template <> struct name<Windows::Devices::Usb::UsbEndpointType>{ static constexpr auto & value{ L"Windows.Devices.Usb.UsbEndpointType" }; };
template <> struct name<Windows::Devices::Usb::UsbReadOptions>{ static constexpr auto & value{ L"Windows.Devices.Usb.UsbReadOptions" }; };
template <> struct name<Windows::Devices::Usb::UsbTransferDirection>{ static constexpr auto & value{ L"Windows.Devices.Usb.UsbTransferDirection" }; };
template <> struct name<Windows::Devices::Usb::UsbWriteOptions>{ static constexpr auto & value{ L"Windows.Devices.Usb.UsbWriteOptions" }; };
template <> struct guid<Windows::Devices::Usb::IUsbBulkInEndpointDescriptor>{ static constexpr GUID value{ 0x3C6E4846,0x06CF,0x42A9,{ 0x9D,0xC2,0x97,0x1C,0x1B,0x14,0xB6,0xE3 } }; };
template <> struct guid<Windows::Devices::Usb::IUsbBulkInPipe>{ static constexpr GUID value{ 0xF01D2D3B,0x4548,0x4D50,{ 0xB3,0x26,0xD8,0x2C,0xDA,0xBE,0x12,0x20 } }; };
template <> struct guid<Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor>{ static constexpr GUID value{ 0x2820847A,0xFFEE,0x4F60,{ 0x9B,0xE1,0x95,0x6C,0xAC,0x3E,0xCB,0x65 } }; };
template <> struct guid<Windows::Devices::Usb::IUsbBulkOutPipe>{ static constexpr GUID value{ 0xA8E9EE6E,0x0115,0x45AA,{ 0x8B,0x21,0x37,0xB2,0x25,0xBC,0xCE,0xE7 } }; };
template <> struct guid<Windows::Devices::Usb::IUsbConfiguration>{ static constexpr GUID value{ 0x68177429,0x36A9,0x46D7,{ 0xB8,0x73,0xFC,0x68,0x92,0x51,0xEC,0x30 } }; };
template <> struct guid<Windows::Devices::Usb::IUsbConfigurationDescriptor>{ static constexpr GUID value{ 0xF2176D92,0xB442,0x407A,{ 0x82,0x07,0x7D,0x64,0x6C,0x03,0x85,0xF3 } }; };
template <> struct guid<Windows::Devices::Usb::IUsbConfigurationDescriptorStatics>{ static constexpr GUID value{ 0x424CED93,0xE740,0x40A1,{ 0x92,0xBD,0xDA,0x12,0x0E,0xA0,0x49,0x14 } }; };
template <> struct guid<Windows::Devices::Usb::IUsbControlRequestType>{ static constexpr GUID value{ 0x8E9465A6,0xD73D,0x46DE,{ 0x94,0xBE,0xAA,0xE7,0xF0,0x7C,0x0F,0x5C } }; };
template <> struct guid<Windows::Devices::Usb::IUsbDescriptor>{ static constexpr GUID value{ 0x0A89F216,0x5F9D,0x4874,{ 0x89,0x04,0xDA,0x9A,0xD3,0xF5,0x52,0x8F } }; };
template <> struct guid<Windows::Devices::Usb::IUsbDevice>{ static constexpr GUID value{ 0x5249B992,0xC456,0x44D5,{ 0xAD,0x5E,0x24,0xF5,0xA0,0x89,0xF6,0x3B } }; };
template <> struct guid<Windows::Devices::Usb::IUsbDeviceClass>{ static constexpr GUID value{ 0x051942F9,0x845E,0x47EB,{ 0xB1,0x2A,0x38,0xF2,0xF6,0x17,0xAF,0xE7 } }; };
template <> struct guid<Windows::Devices::Usb::IUsbDeviceClasses>{ static constexpr GUID value{ 0x686F955D,0x9B92,0x4B30,{ 0x97,0x81,0xC2,0x2C,0x55,0xAC,0x35,0xCB } }; };
template <> struct guid<Windows::Devices::Usb::IUsbDeviceClassesStatics>{ static constexpr GUID value{ 0xB20B0527,0xC580,0x4599,{ 0xA1,0x65,0x98,0x1B,0x4F,0xD0,0x32,0x30 } }; };
template <> struct guid<Windows::Devices::Usb::IUsbDeviceDescriptor>{ static constexpr GUID value{ 0x1F48D1F6,0xBA97,0x4322,{ 0xB9,0x2C,0xB5,0xB1,0x89,0x21,0x65,0x88 } }; };
template <> struct guid<Windows::Devices::Usb::IUsbDeviceStatics>{ static constexpr GUID value{ 0x066B85A2,0x09B7,0x4446,{ 0x85,0x02,0x6F,0xE6,0xDC,0xAA,0x73,0x09 } }; };
template <> struct guid<Windows::Devices::Usb::IUsbEndpointDescriptor>{ static constexpr GUID value{ 0x6B4862D9,0x8DF7,0x4B40,{ 0xAC,0x83,0x57,0x8F,0x13,0x9F,0x05,0x75 } }; };
template <> struct guid<Windows::Devices::Usb::IUsbEndpointDescriptorStatics>{ static constexpr GUID value{ 0xC890B201,0x9A6A,0x495E,{ 0xA8,0x2C,0x29,0x5B,0x9E,0x70,0x81,0x06 } }; };
template <> struct guid<Windows::Devices::Usb::IUsbInterface>{ static constexpr GUID value{ 0xA0322B95,0x7F47,0x48AB,{ 0xA7,0x27,0x67,0x8C,0x25,0xBE,0x21,0x12 } }; };
template <> struct guid<Windows::Devices::Usb::IUsbInterfaceDescriptor>{ static constexpr GUID value{ 0x199670C7,0xB7EE,0x4F90,{ 0x8C,0xD5,0x94,0xA2,0xE2,0x57,0x59,0x8A } }; };
template <> struct guid<Windows::Devices::Usb::IUsbInterfaceDescriptorStatics>{ static constexpr GUID value{ 0xE34A9FF5,0x77D6,0x48B6,{ 0xB0,0xBE,0x16,0xC6,0x42,0x23,0x16,0xFE } }; };
template <> struct guid<Windows::Devices::Usb::IUsbInterfaceSetting>{ static constexpr GUID value{ 0x1827BBA7,0x8DA7,0x4AF7,{ 0x8F,0x4C,0x7F,0x30,0x32,0xE7,0x81,0xF5 } }; };
template <> struct guid<Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor>{ static constexpr GUID value{ 0xC0528967,0xC911,0x4C3A,{ 0x86,0xB2,0x41,0x9C,0x2D,0xA8,0x90,0x39 } }; };
template <> struct guid<Windows::Devices::Usb::IUsbInterruptInEventArgs>{ static constexpr GUID value{ 0xB7B04092,0x1418,0x4936,{ 0x82,0x09,0x29,0x9C,0xF5,0x60,0x55,0x83 } }; };
template <> struct guid<Windows::Devices::Usb::IUsbInterruptInPipe>{ static constexpr GUID value{ 0xFA007116,0x84D7,0x48C7,{ 0x8A,0x3F,0x4C,0x0B,0x23,0x5F,0x2E,0xA6 } }; };
template <> struct guid<Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor>{ static constexpr GUID value{ 0xCC9FED81,0x10CA,0x4533,{ 0x95,0x2D,0x9E,0x27,0x83,0x41,0xE8,0x0F } }; };
template <> struct guid<Windows::Devices::Usb::IUsbInterruptOutPipe>{ static constexpr GUID value{ 0xE984C8A9,0xAAF9,0x49D0,{ 0xB9,0x6C,0xF6,0x61,0xAB,0x4A,0x7F,0x95 } }; };
template <> struct guid<Windows::Devices::Usb::IUsbSetupPacket>{ static constexpr GUID value{ 0x104BA132,0xC78F,0x4C51,{ 0xB6,0x54,0xE4,0x9D,0x02,0xF2,0xCB,0x03 } }; };
template <> struct guid<Windows::Devices::Usb::IUsbSetupPacketFactory>{ static constexpr GUID value{ 0xC9257D50,0x1B2E,0x4A41,{ 0xA2,0xA7,0x33,0x8F,0x0C,0xEF,0x3C,0x14 } }; };
template <> struct default_interface<Windows::Devices::Usb::UsbBulkInEndpointDescriptor>{ using type = Windows::Devices::Usb::IUsbBulkInEndpointDescriptor; };
template <> struct default_interface<Windows::Devices::Usb::UsbBulkInPipe>{ using type = Windows::Devices::Usb::IUsbBulkInPipe; };
template <> struct default_interface<Windows::Devices::Usb::UsbBulkOutEndpointDescriptor>{ using type = Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor; };
template <> struct default_interface<Windows::Devices::Usb::UsbBulkOutPipe>{ using type = Windows::Devices::Usb::IUsbBulkOutPipe; };
template <> struct default_interface<Windows::Devices::Usb::UsbConfiguration>{ using type = Windows::Devices::Usb::IUsbConfiguration; };
template <> struct default_interface<Windows::Devices::Usb::UsbConfigurationDescriptor>{ using type = Windows::Devices::Usb::IUsbConfigurationDescriptor; };
template <> struct default_interface<Windows::Devices::Usb::UsbControlRequestType>{ using type = Windows::Devices::Usb::IUsbControlRequestType; };
template <> struct default_interface<Windows::Devices::Usb::UsbDescriptor>{ using type = Windows::Devices::Usb::IUsbDescriptor; };
template <> struct default_interface<Windows::Devices::Usb::UsbDevice>{ using type = Windows::Devices::Usb::IUsbDevice; };
template <> struct default_interface<Windows::Devices::Usb::UsbDeviceClass>{ using type = Windows::Devices::Usb::IUsbDeviceClass; };
template <> struct default_interface<Windows::Devices::Usb::UsbDeviceClasses>{ using type = Windows::Devices::Usb::IUsbDeviceClasses; };
template <> struct default_interface<Windows::Devices::Usb::UsbDeviceDescriptor>{ using type = Windows::Devices::Usb::IUsbDeviceDescriptor; };
template <> struct default_interface<Windows::Devices::Usb::UsbEndpointDescriptor>{ using type = Windows::Devices::Usb::IUsbEndpointDescriptor; };
template <> struct default_interface<Windows::Devices::Usb::UsbInterface>{ using type = Windows::Devices::Usb::IUsbInterface; };
template <> struct default_interface<Windows::Devices::Usb::UsbInterfaceDescriptor>{ using type = Windows::Devices::Usb::IUsbInterfaceDescriptor; };
template <> struct default_interface<Windows::Devices::Usb::UsbInterfaceSetting>{ using type = Windows::Devices::Usb::IUsbInterfaceSetting; };
template <> struct default_interface<Windows::Devices::Usb::UsbInterruptInEndpointDescriptor>{ using type = Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor; };
template <> struct default_interface<Windows::Devices::Usb::UsbInterruptInEventArgs>{ using type = Windows::Devices::Usb::IUsbInterruptInEventArgs; };
template <> struct default_interface<Windows::Devices::Usb::UsbInterruptInPipe>{ using type = Windows::Devices::Usb::IUsbInterruptInPipe; };
template <> struct default_interface<Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor>{ using type = Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor; };
template <> struct default_interface<Windows::Devices::Usb::UsbInterruptOutPipe>{ using type = Windows::Devices::Usb::IUsbInterruptOutPipe; };
template <> struct default_interface<Windows::Devices::Usb::UsbSetupPacket>{ using type = Windows::Devices::Usb::IUsbSetupPacket; };

template <typename D>
struct consume_Windows_Devices_Usb_IUsbBulkInEndpointDescriptor
{
    uint32_t MaxPacketSize() const;
    uint8_t EndpointNumber() const;
    Windows::Devices::Usb::UsbBulkInPipe Pipe() const;
};
template <> struct consume<Windows::Devices::Usb::IUsbBulkInEndpointDescriptor> { template <typename D> using type = consume_Windows_Devices_Usb_IUsbBulkInEndpointDescriptor<D>; };

template <typename D>
struct consume_Windows_Devices_Usb_IUsbBulkInPipe
{
    uint32_t MaxTransferSizeBytes() const;
    Windows::Devices::Usb::UsbBulkInEndpointDescriptor EndpointDescriptor() const;
    Windows::Foundation::IAsyncAction ClearStallAsync() const;
    void ReadOptions(Windows::Devices::Usb::UsbReadOptions const& value) const;
    Windows::Devices::Usb::UsbReadOptions ReadOptions() const;
    void FlushBuffer() const;
    Windows::Storage::Streams::IInputStream InputStream() const;
};
template <> struct consume<Windows::Devices::Usb::IUsbBulkInPipe> { template <typename D> using type = consume_Windows_Devices_Usb_IUsbBulkInPipe<D>; };

template <typename D>
struct consume_Windows_Devices_Usb_IUsbBulkOutEndpointDescriptor
{
    uint32_t MaxPacketSize() const;
    uint8_t EndpointNumber() const;
    Windows::Devices::Usb::UsbBulkOutPipe Pipe() const;
};
template <> struct consume<Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor> { template <typename D> using type = consume_Windows_Devices_Usb_IUsbBulkOutEndpointDescriptor<D>; };

template <typename D>
struct consume_Windows_Devices_Usb_IUsbBulkOutPipe
{
    Windows::Devices::Usb::UsbBulkOutEndpointDescriptor EndpointDescriptor() const;
    Windows::Foundation::IAsyncAction ClearStallAsync() const;
    void WriteOptions(Windows::Devices::Usb::UsbWriteOptions const& value) const;
    Windows::Devices::Usb::UsbWriteOptions WriteOptions() const;
    Windows::Storage::Streams::IOutputStream OutputStream() const;
};
template <> struct consume<Windows::Devices::Usb::IUsbBulkOutPipe> { template <typename D> using type = consume_Windows_Devices_Usb_IUsbBulkOutPipe<D>; };

template <typename D>
struct consume_Windows_Devices_Usb_IUsbConfiguration
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterface> UsbInterfaces() const;
    Windows::Devices::Usb::UsbConfigurationDescriptor ConfigurationDescriptor() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbDescriptor> Descriptors() const;
};
template <> struct consume<Windows::Devices::Usb::IUsbConfiguration> { template <typename D> using type = consume_Windows_Devices_Usb_IUsbConfiguration<D>; };

template <typename D>
struct consume_Windows_Devices_Usb_IUsbConfigurationDescriptor
{
    uint8_t ConfigurationValue() const;
    uint32_t MaxPowerMilliamps() const;
    bool SelfPowered() const;
    bool RemoteWakeup() const;
};
template <> struct consume<Windows::Devices::Usb::IUsbConfigurationDescriptor> { template <typename D> using type = consume_Windows_Devices_Usb_IUsbConfigurationDescriptor<D>; };

template <typename D>
struct consume_Windows_Devices_Usb_IUsbConfigurationDescriptorStatics
{
    bool TryParse(Windows::Devices::Usb::UsbDescriptor const& descriptor, Windows::Devices::Usb::UsbConfigurationDescriptor& parsed) const;
    Windows::Devices::Usb::UsbConfigurationDescriptor Parse(Windows::Devices::Usb::UsbDescriptor const& descriptor) const;
};
template <> struct consume<Windows::Devices::Usb::IUsbConfigurationDescriptorStatics> { template <typename D> using type = consume_Windows_Devices_Usb_IUsbConfigurationDescriptorStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Usb_IUsbControlRequestType
{
    Windows::Devices::Usb::UsbTransferDirection Direction() const;
    void Direction(Windows::Devices::Usb::UsbTransferDirection const& value) const;
    Windows::Devices::Usb::UsbControlTransferType ControlTransferType() const;
    void ControlTransferType(Windows::Devices::Usb::UsbControlTransferType const& value) const;
    Windows::Devices::Usb::UsbControlRecipient Recipient() const;
    void Recipient(Windows::Devices::Usb::UsbControlRecipient const& value) const;
    uint8_t AsByte() const;
    void AsByte(uint8_t value) const;
};
template <> struct consume<Windows::Devices::Usb::IUsbControlRequestType> { template <typename D> using type = consume_Windows_Devices_Usb_IUsbControlRequestType<D>; };

template <typename D>
struct consume_Windows_Devices_Usb_IUsbDescriptor
{
    uint8_t Length() const;
    uint8_t DescriptorType() const;
    void ReadDescriptorBuffer(Windows::Storage::Streams::IBuffer const& buffer) const;
};
template <> struct consume<Windows::Devices::Usb::IUsbDescriptor> { template <typename D> using type = consume_Windows_Devices_Usb_IUsbDescriptor<D>; };

template <typename D>
struct consume_Windows_Devices_Usb_IUsbDevice
{
    Windows::Foundation::IAsyncOperation<uint32_t> SendControlOutTransferAsync(Windows::Devices::Usb::UsbSetupPacket const& setupPacket, Windows::Storage::Streams::IBuffer const& buffer) const;
    Windows::Foundation::IAsyncOperation<uint32_t> SendControlOutTransferAsync(Windows::Devices::Usb::UsbSetupPacket const& setupPacket) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> SendControlInTransferAsync(Windows::Devices::Usb::UsbSetupPacket const& setupPacket, Windows::Storage::Streams::IBuffer const& buffer) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> SendControlInTransferAsync(Windows::Devices::Usb::UsbSetupPacket const& setupPacket) const;
    Windows::Devices::Usb::UsbInterface DefaultInterface() const;
    Windows::Devices::Usb::UsbDeviceDescriptor DeviceDescriptor() const;
    Windows::Devices::Usb::UsbConfiguration Configuration() const;
};
template <> struct consume<Windows::Devices::Usb::IUsbDevice> { template <typename D> using type = consume_Windows_Devices_Usb_IUsbDevice<D>; };

template <typename D>
struct consume_Windows_Devices_Usb_IUsbDeviceClass
{
    uint8_t ClassCode() const;
    void ClassCode(uint8_t value) const;
    Windows::Foundation::IReference<uint8_t> SubclassCode() const;
    void SubclassCode(optional<uint8_t> const& value) const;
    Windows::Foundation::IReference<uint8_t> ProtocolCode() const;
    void ProtocolCode(optional<uint8_t> const& value) const;
};
template <> struct consume<Windows::Devices::Usb::IUsbDeviceClass> { template <typename D> using type = consume_Windows_Devices_Usb_IUsbDeviceClass<D>; };

template <typename D>
struct consume_Windows_Devices_Usb_IUsbDeviceClasses
{
};
template <> struct consume<Windows::Devices::Usb::IUsbDeviceClasses> { template <typename D> using type = consume_Windows_Devices_Usb_IUsbDeviceClasses<D>; };

template <typename D>
struct consume_Windows_Devices_Usb_IUsbDeviceClassesStatics
{
    Windows::Devices::Usb::UsbDeviceClass CdcControl() const;
    Windows::Devices::Usb::UsbDeviceClass Physical() const;
    Windows::Devices::Usb::UsbDeviceClass PersonalHealthcare() const;
    Windows::Devices::Usb::UsbDeviceClass ActiveSync() const;
    Windows::Devices::Usb::UsbDeviceClass PalmSync() const;
    Windows::Devices::Usb::UsbDeviceClass DeviceFirmwareUpdate() const;
    Windows::Devices::Usb::UsbDeviceClass Irda() const;
    Windows::Devices::Usb::UsbDeviceClass Measurement() const;
    Windows::Devices::Usb::UsbDeviceClass VendorSpecific() const;
};
template <> struct consume<Windows::Devices::Usb::IUsbDeviceClassesStatics> { template <typename D> using type = consume_Windows_Devices_Usb_IUsbDeviceClassesStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Usb_IUsbDeviceDescriptor
{
    uint32_t BcdUsb() const;
    uint8_t MaxPacketSize0() const;
    uint32_t VendorId() const;
    uint32_t ProductId() const;
    uint32_t BcdDeviceRevision() const;
    uint8_t NumberOfConfigurations() const;
};
template <> struct consume<Windows::Devices::Usb::IUsbDeviceDescriptor> { template <typename D> using type = consume_Windows_Devices_Usb_IUsbDeviceDescriptor<D>; };

template <typename D>
struct consume_Windows_Devices_Usb_IUsbDeviceStatics
{
    hstring GetDeviceSelector(uint32_t vendorId, uint32_t productId, GUID const& winUsbInterfaceClass) const;
    hstring GetDeviceSelector(GUID const& winUsbInterfaceClass) const;
    hstring GetDeviceSelector(uint32_t vendorId, uint32_t productId) const;
    hstring GetDeviceClassSelector(Windows::Devices::Usb::UsbDeviceClass const& usbClass) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::Usb::UsbDevice> FromIdAsync(param::hstring const& deviceId) const;
};
template <> struct consume<Windows::Devices::Usb::IUsbDeviceStatics> { template <typename D> using type = consume_Windows_Devices_Usb_IUsbDeviceStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Usb_IUsbEndpointDescriptor
{
    uint8_t EndpointNumber() const;
    Windows::Devices::Usb::UsbTransferDirection Direction() const;
    Windows::Devices::Usb::UsbEndpointType EndpointType() const;
    Windows::Devices::Usb::UsbBulkInEndpointDescriptor AsBulkInEndpointDescriptor() const;
    Windows::Devices::Usb::UsbInterruptInEndpointDescriptor AsInterruptInEndpointDescriptor() const;
    Windows::Devices::Usb::UsbBulkOutEndpointDescriptor AsBulkOutEndpointDescriptor() const;
    Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor AsInterruptOutEndpointDescriptor() const;
};
template <> struct consume<Windows::Devices::Usb::IUsbEndpointDescriptor> { template <typename D> using type = consume_Windows_Devices_Usb_IUsbEndpointDescriptor<D>; };

template <typename D>
struct consume_Windows_Devices_Usb_IUsbEndpointDescriptorStatics
{
    bool TryParse(Windows::Devices::Usb::UsbDescriptor const& descriptor, Windows::Devices::Usb::UsbEndpointDescriptor& parsed) const;
    Windows::Devices::Usb::UsbEndpointDescriptor Parse(Windows::Devices::Usb::UsbDescriptor const& descriptor) const;
};
template <> struct consume<Windows::Devices::Usb::IUsbEndpointDescriptorStatics> { template <typename D> using type = consume_Windows_Devices_Usb_IUsbEndpointDescriptorStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Usb_IUsbInterface
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbBulkInPipe> BulkInPipes() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterruptInPipe> InterruptInPipes() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbBulkOutPipe> BulkOutPipes() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterruptOutPipe> InterruptOutPipes() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterfaceSetting> InterfaceSettings() const;
    uint8_t InterfaceNumber() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbDescriptor> Descriptors() const;
};
template <> struct consume<Windows::Devices::Usb::IUsbInterface> { template <typename D> using type = consume_Windows_Devices_Usb_IUsbInterface<D>; };

template <typename D>
struct consume_Windows_Devices_Usb_IUsbInterfaceDescriptor
{
    uint8_t ClassCode() const;
    uint8_t SubclassCode() const;
    uint8_t ProtocolCode() const;
    uint8_t AlternateSettingNumber() const;
    uint8_t InterfaceNumber() const;
};
template <> struct consume<Windows::Devices::Usb::IUsbInterfaceDescriptor> { template <typename D> using type = consume_Windows_Devices_Usb_IUsbInterfaceDescriptor<D>; };

template <typename D>
struct consume_Windows_Devices_Usb_IUsbInterfaceDescriptorStatics
{
    bool TryParse(Windows::Devices::Usb::UsbDescriptor const& descriptor, Windows::Devices::Usb::UsbInterfaceDescriptor& parsed) const;
    Windows::Devices::Usb::UsbInterfaceDescriptor Parse(Windows::Devices::Usb::UsbDescriptor const& descriptor) const;
};
template <> struct consume<Windows::Devices::Usb::IUsbInterfaceDescriptorStatics> { template <typename D> using type = consume_Windows_Devices_Usb_IUsbInterfaceDescriptorStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Usb_IUsbInterfaceSetting
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbBulkInEndpointDescriptor> BulkInEndpoints() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterruptInEndpointDescriptor> InterruptInEndpoints() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbBulkOutEndpointDescriptor> BulkOutEndpoints() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor> InterruptOutEndpoints() const;
    bool Selected() const;
    Windows::Foundation::IAsyncAction SelectSettingAsync() const;
    Windows::Devices::Usb::UsbInterfaceDescriptor InterfaceDescriptor() const;
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbDescriptor> Descriptors() const;
};
template <> struct consume<Windows::Devices::Usb::IUsbInterfaceSetting> { template <typename D> using type = consume_Windows_Devices_Usb_IUsbInterfaceSetting<D>; };

template <typename D>
struct consume_Windows_Devices_Usb_IUsbInterruptInEndpointDescriptor
{
    uint32_t MaxPacketSize() const;
    uint8_t EndpointNumber() const;
    Windows::Foundation::TimeSpan Interval() const;
    Windows::Devices::Usb::UsbInterruptInPipe Pipe() const;
};
template <> struct consume<Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor> { template <typename D> using type = consume_Windows_Devices_Usb_IUsbInterruptInEndpointDescriptor<D>; };

template <typename D>
struct consume_Windows_Devices_Usb_IUsbInterruptInEventArgs
{
    Windows::Storage::Streams::IBuffer InterruptData() const;
};
template <> struct consume<Windows::Devices::Usb::IUsbInterruptInEventArgs> { template <typename D> using type = consume_Windows_Devices_Usb_IUsbInterruptInEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Usb_IUsbInterruptInPipe
{
    Windows::Devices::Usb::UsbInterruptInEndpointDescriptor EndpointDescriptor() const;
    Windows::Foundation::IAsyncAction ClearStallAsync() const;
    event_token DataReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::Usb::UsbInterruptInPipe, Windows::Devices::Usb::UsbInterruptInEventArgs> const& handler) const;
    using DataReceived_revoker = event_revoker<Windows::Devices::Usb::IUsbInterruptInPipe>;
    DataReceived_revoker DataReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Usb::UsbInterruptInPipe, Windows::Devices::Usb::UsbInterruptInEventArgs> const& handler) const;
    void DataReceived(event_token const& token) const;
};
template <> struct consume<Windows::Devices::Usb::IUsbInterruptInPipe> { template <typename D> using type = consume_Windows_Devices_Usb_IUsbInterruptInPipe<D>; };

template <typename D>
struct consume_Windows_Devices_Usb_IUsbInterruptOutEndpointDescriptor
{
    uint32_t MaxPacketSize() const;
    uint8_t EndpointNumber() const;
    Windows::Foundation::TimeSpan Interval() const;
    Windows::Devices::Usb::UsbInterruptOutPipe Pipe() const;
};
template <> struct consume<Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor> { template <typename D> using type = consume_Windows_Devices_Usb_IUsbInterruptOutEndpointDescriptor<D>; };

template <typename D>
struct consume_Windows_Devices_Usb_IUsbInterruptOutPipe
{
    Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor EndpointDescriptor() const;
    Windows::Foundation::IAsyncAction ClearStallAsync() const;
    void WriteOptions(Windows::Devices::Usb::UsbWriteOptions const& value) const;
    Windows::Devices::Usb::UsbWriteOptions WriteOptions() const;
    Windows::Storage::Streams::IOutputStream OutputStream() const;
};
template <> struct consume<Windows::Devices::Usb::IUsbInterruptOutPipe> { template <typename D> using type = consume_Windows_Devices_Usb_IUsbInterruptOutPipe<D>; };

template <typename D>
struct consume_Windows_Devices_Usb_IUsbSetupPacket
{
    Windows::Devices::Usb::UsbControlRequestType RequestType() const;
    void RequestType(Windows::Devices::Usb::UsbControlRequestType const& value) const;
    uint8_t Request() const;
    void Request(uint8_t value) const;
    uint32_t Value() const;
    void Value(uint32_t value) const;
    uint32_t Index() const;
    void Index(uint32_t value) const;
    uint32_t Length() const;
    void Length(uint32_t value) const;
};
template <> struct consume<Windows::Devices::Usb::IUsbSetupPacket> { template <typename D> using type = consume_Windows_Devices_Usb_IUsbSetupPacket<D>; };

template <typename D>
struct consume_Windows_Devices_Usb_IUsbSetupPacketFactory
{
    Windows::Devices::Usb::UsbSetupPacket CreateWithEightByteBuffer(Windows::Storage::Streams::IBuffer const& eightByteBuffer) const;
};
template <> struct consume<Windows::Devices::Usb::IUsbSetupPacketFactory> { template <typename D> using type = consume_Windows_Devices_Usb_IUsbSetupPacketFactory<D>; };

template <> struct abi<Windows::Devices::Usb::IUsbBulkInEndpointDescriptor>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MaxPacketSize(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_EndpointNumber(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_Pipe(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Usb::IUsbBulkInPipe>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MaxTransferSizeBytes(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_EndpointDescriptor(::IUnknown** value) = 0;
    virtual HRESULT __stdcall ClearStallAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall put_ReadOptions(abi_t<Windows::Devices::Usb::UsbReadOptions> value) = 0;
    virtual HRESULT __stdcall get_ReadOptions(abi_t<Windows::Devices::Usb::UsbReadOptions>* value) = 0;
    virtual HRESULT __stdcall FlushBuffer() = 0;
    virtual HRESULT __stdcall get_InputStream(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MaxPacketSize(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_EndpointNumber(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_Pipe(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Usb::IUsbBulkOutPipe>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EndpointDescriptor(::IUnknown** value) = 0;
    virtual HRESULT __stdcall ClearStallAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall put_WriteOptions(abi_t<Windows::Devices::Usb::UsbWriteOptions> value) = 0;
    virtual HRESULT __stdcall get_WriteOptions(abi_t<Windows::Devices::Usb::UsbWriteOptions>* value) = 0;
    virtual HRESULT __stdcall get_OutputStream(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Usb::IUsbConfiguration>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_UsbInterfaces(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ConfigurationDescriptor(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Descriptors(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Usb::IUsbConfigurationDescriptor>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ConfigurationValue(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_MaxPowerMilliamps(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_SelfPowered(bool* value) = 0;
    virtual HRESULT __stdcall get_RemoteWakeup(bool* value) = 0;
};};

template <> struct abi<Windows::Devices::Usb::IUsbConfigurationDescriptorStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall TryParse(::IUnknown* descriptor, ::IUnknown** parsed, bool* success) = 0;
    virtual HRESULT __stdcall Parse(::IUnknown* descriptor, ::IUnknown** parsed) = 0;
};};

template <> struct abi<Windows::Devices::Usb::IUsbControlRequestType>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Direction(abi_t<Windows::Devices::Usb::UsbTransferDirection>* value) = 0;
    virtual HRESULT __stdcall put_Direction(abi_t<Windows::Devices::Usb::UsbTransferDirection> value) = 0;
    virtual HRESULT __stdcall get_ControlTransferType(abi_t<Windows::Devices::Usb::UsbControlTransferType>* value) = 0;
    virtual HRESULT __stdcall put_ControlTransferType(abi_t<Windows::Devices::Usb::UsbControlTransferType> value) = 0;
    virtual HRESULT __stdcall get_Recipient(abi_t<Windows::Devices::Usb::UsbControlRecipient>* value) = 0;
    virtual HRESULT __stdcall put_Recipient(abi_t<Windows::Devices::Usb::UsbControlRecipient> value) = 0;
    virtual HRESULT __stdcall get_AsByte(uint8_t* value) = 0;
    virtual HRESULT __stdcall put_AsByte(uint8_t value) = 0;
};};

template <> struct abi<Windows::Devices::Usb::IUsbDescriptor>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Length(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_DescriptorType(uint8_t* value) = 0;
    virtual HRESULT __stdcall ReadDescriptorBuffer(::IUnknown* buffer) = 0;
};};

template <> struct abi<Windows::Devices::Usb::IUsbDevice>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SendControlOutTransferAsync(::IUnknown* setupPacket, ::IUnknown* buffer, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SendControlOutTransferAsyncNoBuffer(::IUnknown* setupPacket, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SendControlInTransferAsync(::IUnknown* setupPacket, ::IUnknown* buffer, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SendControlInTransferAsyncNoBuffer(::IUnknown* setupPacket, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall get_DefaultInterface(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DeviceDescriptor(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Configuration(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Usb::IUsbDeviceClass>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ClassCode(uint8_t* value) = 0;
    virtual HRESULT __stdcall put_ClassCode(uint8_t value) = 0;
    virtual HRESULT __stdcall get_SubclassCode(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_SubclassCode(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ProtocolCode(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ProtocolCode(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Devices::Usb::IUsbDeviceClasses>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::Devices::Usb::IUsbDeviceClassesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CdcControl(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Physical(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PersonalHealthcare(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ActiveSync(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PalmSync(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DeviceFirmwareUpdate(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Irda(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Measurement(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VendorSpecific(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Usb::IUsbDeviceDescriptor>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BcdUsb(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_MaxPacketSize0(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_VendorId(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_ProductId(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_BcdDeviceRevision(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_NumberOfConfigurations(uint8_t* value) = 0;
};};

template <> struct abi<Windows::Devices::Usb::IUsbDeviceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeviceSelector(uint32_t vendorId, uint32_t productId, abi_t<GUID> winUsbInterfaceClass, HSTRING* value) = 0;
    virtual HRESULT __stdcall GetDeviceSelectorGuidOnly(abi_t<GUID> winUsbInterfaceClass, HSTRING* value) = 0;
    virtual HRESULT __stdcall GetDeviceSelectorVidPidOnly(uint32_t vendorId, uint32_t productId, HSTRING* value) = 0;
    virtual HRESULT __stdcall GetDeviceClassSelector(::IUnknown* usbClass, HSTRING* value) = 0;
    virtual HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Devices::Usb::IUsbEndpointDescriptor>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EndpointNumber(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_Direction(abi_t<Windows::Devices::Usb::UsbTransferDirection>* value) = 0;
    virtual HRESULT __stdcall get_EndpointType(abi_t<Windows::Devices::Usb::UsbEndpointType>* value) = 0;
    virtual HRESULT __stdcall get_AsBulkInEndpointDescriptor(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AsInterruptInEndpointDescriptor(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AsBulkOutEndpointDescriptor(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AsInterruptOutEndpointDescriptor(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Usb::IUsbEndpointDescriptorStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall TryParse(::IUnknown* descriptor, ::IUnknown** parsed, bool* success) = 0;
    virtual HRESULT __stdcall Parse(::IUnknown* descriptor, ::IUnknown** parsed) = 0;
};};

template <> struct abi<Windows::Devices::Usb::IUsbInterface>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BulkInPipes(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_InterruptInPipes(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_BulkOutPipes(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_InterruptOutPipes(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_InterfaceSettings(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_InterfaceNumber(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_Descriptors(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Usb::IUsbInterfaceDescriptor>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ClassCode(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_SubclassCode(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_ProtocolCode(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_AlternateSettingNumber(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_InterfaceNumber(uint8_t* value) = 0;
};};

template <> struct abi<Windows::Devices::Usb::IUsbInterfaceDescriptorStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall TryParse(::IUnknown* descriptor, ::IUnknown** parsed, bool* success) = 0;
    virtual HRESULT __stdcall Parse(::IUnknown* descriptor, ::IUnknown** parsed) = 0;
};};

template <> struct abi<Windows::Devices::Usb::IUsbInterfaceSetting>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BulkInEndpoints(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_InterruptInEndpoints(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_BulkOutEndpoints(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_InterruptOutEndpoints(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Selected(bool* value) = 0;
    virtual HRESULT __stdcall SelectSettingAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall get_InterfaceDescriptor(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Descriptors(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MaxPacketSize(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_EndpointNumber(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_Interval(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_Pipe(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Usb::IUsbInterruptInEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InterruptData(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Usb::IUsbInterruptInPipe>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EndpointDescriptor(::IUnknown** value) = 0;
    virtual HRESULT __stdcall ClearStallAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall add_DataReceived(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_DataReceived(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MaxPacketSize(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_EndpointNumber(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_Interval(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_Pipe(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Usb::IUsbInterruptOutPipe>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EndpointDescriptor(::IUnknown** value) = 0;
    virtual HRESULT __stdcall ClearStallAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall put_WriteOptions(abi_t<Windows::Devices::Usb::UsbWriteOptions> value) = 0;
    virtual HRESULT __stdcall get_WriteOptions(abi_t<Windows::Devices::Usb::UsbWriteOptions>* value) = 0;
    virtual HRESULT __stdcall get_OutputStream(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Usb::IUsbSetupPacket>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RequestType(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_RequestType(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Request(uint8_t* value) = 0;
    virtual HRESULT __stdcall put_Request(uint8_t value) = 0;
    virtual HRESULT __stdcall get_Value(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_Value(uint32_t value) = 0;
    virtual HRESULT __stdcall get_Index(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_Index(uint32_t value) = 0;
    virtual HRESULT __stdcall get_Length(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_Length(uint32_t value) = 0;
};};

template <> struct abi<Windows::Devices::Usb::IUsbSetupPacketFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWithEightByteBuffer(::IUnknown* eightByteBuffer, ::IUnknown** value) = 0;
};};

}
