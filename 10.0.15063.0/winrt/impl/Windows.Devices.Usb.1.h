// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.Usb.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Usb {

struct WINRT_EBO IUsbBulkInEndpointDescriptor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbBulkInEndpointDescriptor>
{
    IUsbBulkInEndpointDescriptor(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUsbBulkInPipe :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbBulkInPipe>
{
    IUsbBulkInPipe(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUsbBulkOutEndpointDescriptor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbBulkOutEndpointDescriptor>
{
    IUsbBulkOutEndpointDescriptor(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUsbBulkOutPipe :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbBulkOutPipe>
{
    IUsbBulkOutPipe(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUsbConfiguration :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbConfiguration>
{
    IUsbConfiguration(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUsbConfigurationDescriptor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbConfigurationDescriptor>
{
    IUsbConfigurationDescriptor(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUsbConfigurationDescriptorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbConfigurationDescriptorStatics>
{
    IUsbConfigurationDescriptorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUsbControlRequestType :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbControlRequestType>
{
    IUsbControlRequestType(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUsbDescriptor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbDescriptor>
{
    IUsbDescriptor(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUsbDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbDevice>,
    impl::require<IUsbDevice, Windows::Foundation::IClosable>
{
    IUsbDevice(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUsbDeviceClass :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbDeviceClass>
{
    IUsbDeviceClass(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUsbDeviceClasses :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbDeviceClasses>
{
    IUsbDeviceClasses(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUsbDeviceClassesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbDeviceClassesStatics>
{
    IUsbDeviceClassesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUsbDeviceDescriptor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbDeviceDescriptor>
{
    IUsbDeviceDescriptor(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUsbDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbDeviceStatics>
{
    IUsbDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUsbEndpointDescriptor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbEndpointDescriptor>
{
    IUsbEndpointDescriptor(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUsbEndpointDescriptorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbEndpointDescriptorStatics>
{
    IUsbEndpointDescriptorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUsbInterface :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbInterface>
{
    IUsbInterface(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUsbInterfaceDescriptor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbInterfaceDescriptor>
{
    IUsbInterfaceDescriptor(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUsbInterfaceDescriptorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbInterfaceDescriptorStatics>
{
    IUsbInterfaceDescriptorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUsbInterfaceSetting :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbInterfaceSetting>
{
    IUsbInterfaceSetting(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUsbInterruptInEndpointDescriptor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbInterruptInEndpointDescriptor>
{
    IUsbInterruptInEndpointDescriptor(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUsbInterruptInEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbInterruptInEventArgs>
{
    IUsbInterruptInEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUsbInterruptInPipe :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbInterruptInPipe>
{
    IUsbInterruptInPipe(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUsbInterruptOutEndpointDescriptor :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbInterruptOutEndpointDescriptor>
{
    IUsbInterruptOutEndpointDescriptor(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUsbInterruptOutPipe :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbInterruptOutPipe>
{
    IUsbInterruptOutPipe(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUsbSetupPacket :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbSetupPacket>
{
    IUsbSetupPacket(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IUsbSetupPacketFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IUsbSetupPacketFactory>
{
    IUsbSetupPacketFactory(std::nullptr_t = nullptr) noexcept {}
};

}
