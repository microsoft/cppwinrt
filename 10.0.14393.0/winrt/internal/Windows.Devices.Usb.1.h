// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Devices.Usb.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Storage.Streams.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Usb {

struct __declspec(uuid("3c6e4846-06cf-42a9-9dc2-971c1b14b6e3")) __declspec(novtable) IUsbBulkInEndpointDescriptor : Windows::IInspectable
{
    virtual HRESULT __stdcall get_MaxPacketSize(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_EndpointNumber(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_Pipe(Windows::Devices::Usb::IUsbBulkInPipe ** value) = 0;
};

struct __declspec(uuid("f01d2d3b-4548-4d50-b326-d82cdabe1220")) __declspec(novtable) IUsbBulkInPipe : Windows::IInspectable
{
    virtual HRESULT __stdcall get_MaxTransferSizeBytes(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_EndpointDescriptor(Windows::Devices::Usb::IUsbBulkInEndpointDescriptor ** value) = 0;
    virtual HRESULT __stdcall abi_ClearStallAsync(Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall put_ReadOptions(winrt::Windows::Devices::Usb::UsbReadOptions value) = 0;
    virtual HRESULT __stdcall get_ReadOptions(winrt::Windows::Devices::Usb::UsbReadOptions * value) = 0;
    virtual HRESULT __stdcall abi_FlushBuffer() = 0;
    virtual HRESULT __stdcall get_InputStream(Windows::Storage::Streams::IInputStream ** value) = 0;
};

struct __declspec(uuid("2820847a-ffee-4f60-9be1-956cac3ecb65")) __declspec(novtable) IUsbBulkOutEndpointDescriptor : Windows::IInspectable
{
    virtual HRESULT __stdcall get_MaxPacketSize(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_EndpointNumber(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_Pipe(Windows::Devices::Usb::IUsbBulkOutPipe ** value) = 0;
};

struct __declspec(uuid("a8e9ee6e-0115-45aa-8b21-37b225bccee7")) __declspec(novtable) IUsbBulkOutPipe : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EndpointDescriptor(Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor ** value) = 0;
    virtual HRESULT __stdcall abi_ClearStallAsync(Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall put_WriteOptions(winrt::Windows::Devices::Usb::UsbWriteOptions value) = 0;
    virtual HRESULT __stdcall get_WriteOptions(winrt::Windows::Devices::Usb::UsbWriteOptions * value) = 0;
    virtual HRESULT __stdcall get_OutputStream(Windows::Storage::Streams::IOutputStream ** value) = 0;
};

struct __declspec(uuid("68177429-36a9-46d7-b873-fc689251ec30")) __declspec(novtable) IUsbConfiguration : Windows::IInspectable
{
    virtual HRESULT __stdcall get_UsbInterfaces(Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterface> ** value) = 0;
    virtual HRESULT __stdcall get_ConfigurationDescriptor(Windows::Devices::Usb::IUsbConfigurationDescriptor ** value) = 0;
    virtual HRESULT __stdcall get_Descriptors(Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbDescriptor> ** value) = 0;
};

struct __declspec(uuid("f2176d92-b442-407a-8207-7d646c0385f3")) __declspec(novtable) IUsbConfigurationDescriptor : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ConfigurationValue(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_MaxPowerMilliamps(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_SelfPowered(bool * value) = 0;
    virtual HRESULT __stdcall get_RemoteWakeup(bool * value) = 0;
};

struct __declspec(uuid("424ced93-e740-40a1-92bd-da120ea04914")) __declspec(novtable) IUsbConfigurationDescriptorStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_TryParse(Windows::Devices::Usb::IUsbDescriptor * descriptor, Windows::Devices::Usb::IUsbConfigurationDescriptor ** parsed, bool * success) = 0;
    virtual HRESULT __stdcall abi_Parse(Windows::Devices::Usb::IUsbDescriptor * descriptor, Windows::Devices::Usb::IUsbConfigurationDescriptor ** parsed) = 0;
};

struct __declspec(uuid("8e9465a6-d73d-46de-94be-aae7f07c0f5c")) __declspec(novtable) IUsbControlRequestType : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Direction(winrt::Windows::Devices::Usb::UsbTransferDirection * value) = 0;
    virtual HRESULT __stdcall put_Direction(winrt::Windows::Devices::Usb::UsbTransferDirection value) = 0;
    virtual HRESULT __stdcall get_ControlTransferType(winrt::Windows::Devices::Usb::UsbControlTransferType * value) = 0;
    virtual HRESULT __stdcall put_ControlTransferType(winrt::Windows::Devices::Usb::UsbControlTransferType value) = 0;
    virtual HRESULT __stdcall get_Recipient(winrt::Windows::Devices::Usb::UsbControlRecipient * value) = 0;
    virtual HRESULT __stdcall put_Recipient(winrt::Windows::Devices::Usb::UsbControlRecipient value) = 0;
    virtual HRESULT __stdcall get_AsByte(uint8_t * value) = 0;
    virtual HRESULT __stdcall put_AsByte(uint8_t value) = 0;
};

struct __declspec(uuid("0a89f216-5f9d-4874-8904-da9ad3f5528f")) __declspec(novtable) IUsbDescriptor : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Length(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_DescriptorType(uint8_t * value) = 0;
    virtual HRESULT __stdcall abi_ReadDescriptorBuffer(Windows::Storage::Streams::IBuffer * buffer) = 0;
};

struct __declspec(uuid("5249b992-c456-44d5-ad5e-24f5a089f63b")) __declspec(novtable) IUsbDevice : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_SendControlOutTransferAsync(Windows::Devices::Usb::IUsbSetupPacket * setupPacket, Windows::Storage::Streams::IBuffer * buffer, Windows::Foundation::IAsyncOperation<uint32_t> ** operation) = 0;
    virtual HRESULT __stdcall abi_SendControlOutTransferAsyncNoBuffer(Windows::Devices::Usb::IUsbSetupPacket * setupPacket, Windows::Foundation::IAsyncOperation<uint32_t> ** operation) = 0;
    virtual HRESULT __stdcall abi_SendControlInTransferAsync(Windows::Devices::Usb::IUsbSetupPacket * setupPacket, Windows::Storage::Streams::IBuffer * buffer, Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> ** operation) = 0;
    virtual HRESULT __stdcall abi_SendControlInTransferAsyncNoBuffer(Windows::Devices::Usb::IUsbSetupPacket * setupPacket, Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> ** operation) = 0;
    virtual HRESULT __stdcall get_DefaultInterface(Windows::Devices::Usb::IUsbInterface ** value) = 0;
    virtual HRESULT __stdcall get_DeviceDescriptor(Windows::Devices::Usb::IUsbDeviceDescriptor ** value) = 0;
    virtual HRESULT __stdcall get_Configuration(Windows::Devices::Usb::IUsbConfiguration ** value) = 0;
};

struct __declspec(uuid("051942f9-845e-47eb-b12a-38f2f617afe7")) __declspec(novtable) IUsbDeviceClass : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ClassCode(uint8_t * value) = 0;
    virtual HRESULT __stdcall put_ClassCode(uint8_t value) = 0;
    virtual HRESULT __stdcall get_SubclassCode(Windows::Foundation::IReference<uint8_t> ** value) = 0;
    virtual HRESULT __stdcall put_SubclassCode(Windows::Foundation::IReference<uint8_t> * value) = 0;
    virtual HRESULT __stdcall get_ProtocolCode(Windows::Foundation::IReference<uint8_t> ** value) = 0;
    virtual HRESULT __stdcall put_ProtocolCode(Windows::Foundation::IReference<uint8_t> * value) = 0;
};

struct __declspec(uuid("686f955d-9b92-4b30-9781-c22c55ac35cb")) __declspec(novtable) IUsbDeviceClasses : Windows::IInspectable
{
};

struct __declspec(uuid("b20b0527-c580-4599-a165-981b4fd03230")) __declspec(novtable) IUsbDeviceClassesStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CdcControl(Windows::Devices::Usb::IUsbDeviceClass ** value) = 0;
    virtual HRESULT __stdcall get_Physical(Windows::Devices::Usb::IUsbDeviceClass ** value) = 0;
    virtual HRESULT __stdcall get_PersonalHealthcare(Windows::Devices::Usb::IUsbDeviceClass ** value) = 0;
    virtual HRESULT __stdcall get_ActiveSync(Windows::Devices::Usb::IUsbDeviceClass ** value) = 0;
    virtual HRESULT __stdcall get_PalmSync(Windows::Devices::Usb::IUsbDeviceClass ** value) = 0;
    virtual HRESULT __stdcall get_DeviceFirmwareUpdate(Windows::Devices::Usb::IUsbDeviceClass ** value) = 0;
    virtual HRESULT __stdcall get_Irda(Windows::Devices::Usb::IUsbDeviceClass ** value) = 0;
    virtual HRESULT __stdcall get_Measurement(Windows::Devices::Usb::IUsbDeviceClass ** value) = 0;
    virtual HRESULT __stdcall get_VendorSpecific(Windows::Devices::Usb::IUsbDeviceClass ** value) = 0;
};

struct __declspec(uuid("1f48d1f6-ba97-4322-b92c-b5b189216588")) __declspec(novtable) IUsbDeviceDescriptor : Windows::IInspectable
{
    virtual HRESULT __stdcall get_BcdUsb(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_MaxPacketSize0(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_VendorId(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_ProductId(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_BcdDeviceRevision(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_NumberOfConfigurations(uint8_t * value) = 0;
};

struct __declspec(uuid("066b85a2-09b7-4446-8502-6fe6dcaa7309")) __declspec(novtable) IUsbDeviceStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetDeviceSelector(uint32_t vendorId, uint32_t productId, GUID winUsbInterfaceClass, hstring * value) = 0;
    virtual HRESULT __stdcall abi_GetDeviceSelectorGuidOnly(GUID winUsbInterfaceClass, hstring * value) = 0;
    virtual HRESULT __stdcall abi_GetDeviceSelectorVidPidOnly(uint32_t vendorId, uint32_t productId, hstring * value) = 0;
    virtual HRESULT __stdcall abi_GetDeviceClassSelector(Windows::Devices::Usb::IUsbDeviceClass * usbClass, hstring * value) = 0;
    virtual HRESULT __stdcall abi_FromIdAsync(hstring deviceId, Windows::Foundation::IAsyncOperation<Windows::Devices::Usb::UsbDevice> ** operation) = 0;
};

struct __declspec(uuid("6b4862d9-8df7-4b40-ac83-578f139f0575")) __declspec(novtable) IUsbEndpointDescriptor : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EndpointNumber(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_Direction(winrt::Windows::Devices::Usb::UsbTransferDirection * value) = 0;
    virtual HRESULT __stdcall get_EndpointType(winrt::Windows::Devices::Usb::UsbEndpointType * value) = 0;
    virtual HRESULT __stdcall get_AsBulkInEndpointDescriptor(Windows::Devices::Usb::IUsbBulkInEndpointDescriptor ** value) = 0;
    virtual HRESULT __stdcall get_AsInterruptInEndpointDescriptor(Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor ** value) = 0;
    virtual HRESULT __stdcall get_AsBulkOutEndpointDescriptor(Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor ** value) = 0;
    virtual HRESULT __stdcall get_AsInterruptOutEndpointDescriptor(Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor ** value) = 0;
};

struct __declspec(uuid("c890b201-9a6a-495e-a82c-295b9e708106")) __declspec(novtable) IUsbEndpointDescriptorStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_TryParse(Windows::Devices::Usb::IUsbDescriptor * descriptor, Windows::Devices::Usb::IUsbEndpointDescriptor ** parsed, bool * success) = 0;
    virtual HRESULT __stdcall abi_Parse(Windows::Devices::Usb::IUsbDescriptor * descriptor, Windows::Devices::Usb::IUsbEndpointDescriptor ** parsed) = 0;
};

struct __declspec(uuid("a0322b95-7f47-48ab-a727-678c25be2112")) __declspec(novtable) IUsbInterface : Windows::IInspectable
{
    virtual HRESULT __stdcall get_BulkInPipes(Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbBulkInPipe> ** value) = 0;
    virtual HRESULT __stdcall get_InterruptInPipes(Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterruptInPipe> ** value) = 0;
    virtual HRESULT __stdcall get_BulkOutPipes(Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbBulkOutPipe> ** value) = 0;
    virtual HRESULT __stdcall get_InterruptOutPipes(Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterruptOutPipe> ** value) = 0;
    virtual HRESULT __stdcall get_InterfaceSettings(Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterfaceSetting> ** value) = 0;
    virtual HRESULT __stdcall get_InterfaceNumber(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_Descriptors(Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbDescriptor> ** value) = 0;
};

struct __declspec(uuid("199670c7-b7ee-4f90-8cd5-94a2e257598a")) __declspec(novtable) IUsbInterfaceDescriptor : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ClassCode(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_SubclassCode(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_ProtocolCode(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_AlternateSettingNumber(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_InterfaceNumber(uint8_t * value) = 0;
};

struct __declspec(uuid("e34a9ff5-77d6-48b6-b0be-16c6422316fe")) __declspec(novtable) IUsbInterfaceDescriptorStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_TryParse(Windows::Devices::Usb::IUsbDescriptor * descriptor, Windows::Devices::Usb::IUsbInterfaceDescriptor ** parsed, bool * success) = 0;
    virtual HRESULT __stdcall abi_Parse(Windows::Devices::Usb::IUsbDescriptor * descriptor, Windows::Devices::Usb::IUsbInterfaceDescriptor ** parsed) = 0;
};

struct __declspec(uuid("1827bba7-8da7-4af7-8f4c-7f3032e781f5")) __declspec(novtable) IUsbInterfaceSetting : Windows::IInspectable
{
    virtual HRESULT __stdcall get_BulkInEndpoints(Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbBulkInEndpointDescriptor> ** value) = 0;
    virtual HRESULT __stdcall get_InterruptInEndpoints(Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterruptInEndpointDescriptor> ** value) = 0;
    virtual HRESULT __stdcall get_BulkOutEndpoints(Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbBulkOutEndpointDescriptor> ** value) = 0;
    virtual HRESULT __stdcall get_InterruptOutEndpoints(Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor> ** value) = 0;
    virtual HRESULT __stdcall get_Selected(bool * value) = 0;
    virtual HRESULT __stdcall abi_SelectSettingAsync(Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall get_InterfaceDescriptor(Windows::Devices::Usb::IUsbInterfaceDescriptor ** value) = 0;
    virtual HRESULT __stdcall get_Descriptors(Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbDescriptor> ** value) = 0;
};

struct __declspec(uuid("c0528967-c911-4c3a-86b2-419c2da89039")) __declspec(novtable) IUsbInterruptInEndpointDescriptor : Windows::IInspectable
{
    virtual HRESULT __stdcall get_MaxPacketSize(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_EndpointNumber(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_Interval(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall get_Pipe(Windows::Devices::Usb::IUsbInterruptInPipe ** value) = 0;
};

struct __declspec(uuid("b7b04092-1418-4936-8209-299cf5605583")) __declspec(novtable) IUsbInterruptInEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_InterruptData(Windows::Storage::Streams::IBuffer ** value) = 0;
};

struct __declspec(uuid("fa007116-84d7-48c7-8a3f-4c0b235f2ea6")) __declspec(novtable) IUsbInterruptInPipe : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EndpointDescriptor(Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor ** value) = 0;
    virtual HRESULT __stdcall abi_ClearStallAsync(Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall add_DataReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::Usb::UsbInterruptInPipe, Windows::Devices::Usb::UsbInterruptInEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_DataReceived(event_token token) = 0;
};

struct __declspec(uuid("cc9fed81-10ca-4533-952d-9e278341e80f")) __declspec(novtable) IUsbInterruptOutEndpointDescriptor : Windows::IInspectable
{
    virtual HRESULT __stdcall get_MaxPacketSize(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_EndpointNumber(uint8_t * value) = 0;
    virtual HRESULT __stdcall get_Interval(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall get_Pipe(Windows::Devices::Usb::IUsbInterruptOutPipe ** value) = 0;
};

struct __declspec(uuid("e984c8a9-aaf9-49d0-b96c-f661ab4a7f95")) __declspec(novtable) IUsbInterruptOutPipe : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EndpointDescriptor(Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor ** value) = 0;
    virtual HRESULT __stdcall abi_ClearStallAsync(Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall put_WriteOptions(winrt::Windows::Devices::Usb::UsbWriteOptions value) = 0;
    virtual HRESULT __stdcall get_WriteOptions(winrt::Windows::Devices::Usb::UsbWriteOptions * value) = 0;
    virtual HRESULT __stdcall get_OutputStream(Windows::Storage::Streams::IOutputStream ** value) = 0;
};

struct __declspec(uuid("104ba132-c78f-4c51-b654-e49d02f2cb03")) __declspec(novtable) IUsbSetupPacket : Windows::IInspectable
{
    virtual HRESULT __stdcall get_RequestType(Windows::Devices::Usb::IUsbControlRequestType ** value) = 0;
    virtual HRESULT __stdcall put_RequestType(Windows::Devices::Usb::IUsbControlRequestType * value) = 0;
    virtual HRESULT __stdcall get_Request(uint8_t * value) = 0;
    virtual HRESULT __stdcall put_Request(uint8_t value) = 0;
    virtual HRESULT __stdcall get_Value(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_Value(uint32_t value) = 0;
    virtual HRESULT __stdcall get_Index(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_Index(uint32_t value) = 0;
    virtual HRESULT __stdcall get_Length(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_Length(uint32_t value) = 0;
};

struct __declspec(uuid("c9257d50-1b2e-4a41-a2a7-338f0cef3c14")) __declspec(novtable) IUsbSetupPacketFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateWithEightByteBuffer(Windows::Storage::Streams::IBuffer * eightByteBuffer, Windows::Devices::Usb::IUsbSetupPacket ** value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Devices::Usb::UsbBulkInEndpointDescriptor> { using default_interface = Windows::Devices::Usb::IUsbBulkInEndpointDescriptor; };
template <> struct traits<Windows::Devices::Usb::UsbBulkInPipe> { using default_interface = Windows::Devices::Usb::IUsbBulkInPipe; };
template <> struct traits<Windows::Devices::Usb::UsbBulkOutEndpointDescriptor> { using default_interface = Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor; };
template <> struct traits<Windows::Devices::Usb::UsbBulkOutPipe> { using default_interface = Windows::Devices::Usb::IUsbBulkOutPipe; };
template <> struct traits<Windows::Devices::Usb::UsbConfiguration> { using default_interface = Windows::Devices::Usb::IUsbConfiguration; };
template <> struct traits<Windows::Devices::Usb::UsbConfigurationDescriptor> { using default_interface = Windows::Devices::Usb::IUsbConfigurationDescriptor; };
template <> struct traits<Windows::Devices::Usb::UsbControlRequestType> { using default_interface = Windows::Devices::Usb::IUsbControlRequestType; };
template <> struct traits<Windows::Devices::Usb::UsbDescriptor> { using default_interface = Windows::Devices::Usb::IUsbDescriptor; };
template <> struct traits<Windows::Devices::Usb::UsbDevice> { using default_interface = Windows::Devices::Usb::IUsbDevice; };
template <> struct traits<Windows::Devices::Usb::UsbDeviceClass> { using default_interface = Windows::Devices::Usb::IUsbDeviceClass; };
template <> struct traits<Windows::Devices::Usb::UsbDeviceClasses> { using default_interface = Windows::Devices::Usb::IUsbDeviceClasses; };
template <> struct traits<Windows::Devices::Usb::UsbDeviceDescriptor> { using default_interface = Windows::Devices::Usb::IUsbDeviceDescriptor; };
template <> struct traits<Windows::Devices::Usb::UsbEndpointDescriptor> { using default_interface = Windows::Devices::Usb::IUsbEndpointDescriptor; };
template <> struct traits<Windows::Devices::Usb::UsbInterface> { using default_interface = Windows::Devices::Usb::IUsbInterface; };
template <> struct traits<Windows::Devices::Usb::UsbInterfaceDescriptor> { using default_interface = Windows::Devices::Usb::IUsbInterfaceDescriptor; };
template <> struct traits<Windows::Devices::Usb::UsbInterfaceSetting> { using default_interface = Windows::Devices::Usb::IUsbInterfaceSetting; };
template <> struct traits<Windows::Devices::Usb::UsbInterruptInEndpointDescriptor> { using default_interface = Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor; };
template <> struct traits<Windows::Devices::Usb::UsbInterruptInEventArgs> { using default_interface = Windows::Devices::Usb::IUsbInterruptInEventArgs; };
template <> struct traits<Windows::Devices::Usb::UsbInterruptInPipe> { using default_interface = Windows::Devices::Usb::IUsbInterruptInPipe; };
template <> struct traits<Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor> { using default_interface = Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor; };
template <> struct traits<Windows::Devices::Usb::UsbInterruptOutPipe> { using default_interface = Windows::Devices::Usb::IUsbInterruptOutPipe; };
template <> struct traits<Windows::Devices::Usb::UsbSetupPacket> { using default_interface = Windows::Devices::Usb::IUsbSetupPacket; };

}

namespace Windows::Devices::Usb {

template <typename T> struct impl_IUsbBulkInEndpointDescriptor;
template <typename T> struct impl_IUsbBulkInPipe;
template <typename T> struct impl_IUsbBulkOutEndpointDescriptor;
template <typename T> struct impl_IUsbBulkOutPipe;
template <typename T> struct impl_IUsbConfiguration;
template <typename T> struct impl_IUsbConfigurationDescriptor;
template <typename T> struct impl_IUsbConfigurationDescriptorStatics;
template <typename T> struct impl_IUsbControlRequestType;
template <typename T> struct impl_IUsbDescriptor;
template <typename T> struct impl_IUsbDevice;
template <typename T> struct impl_IUsbDeviceClass;
template <typename T> struct impl_IUsbDeviceClasses;
template <typename T> struct impl_IUsbDeviceClassesStatics;
template <typename T> struct impl_IUsbDeviceDescriptor;
template <typename T> struct impl_IUsbDeviceStatics;
template <typename T> struct impl_IUsbEndpointDescriptor;
template <typename T> struct impl_IUsbEndpointDescriptorStatics;
template <typename T> struct impl_IUsbInterface;
template <typename T> struct impl_IUsbInterfaceDescriptor;
template <typename T> struct impl_IUsbInterfaceDescriptorStatics;
template <typename T> struct impl_IUsbInterfaceSetting;
template <typename T> struct impl_IUsbInterruptInEndpointDescriptor;
template <typename T> struct impl_IUsbInterruptInEventArgs;
template <typename T> struct impl_IUsbInterruptInPipe;
template <typename T> struct impl_IUsbInterruptOutEndpointDescriptor;
template <typename T> struct impl_IUsbInterruptOutPipe;
template <typename T> struct impl_IUsbSetupPacket;
template <typename T> struct impl_IUsbSetupPacketFactory;

}

namespace impl {

template <> struct traits<Windows::Devices::Usb::IUsbBulkInEndpointDescriptor>
{
    using abi = ABI::Windows::Devices::Usb::IUsbBulkInEndpointDescriptor;
    template <typename D> using consume = Windows::Devices::Usb::impl_IUsbBulkInEndpointDescriptor<D>;
};

template <> struct traits<Windows::Devices::Usb::IUsbBulkInPipe>
{
    using abi = ABI::Windows::Devices::Usb::IUsbBulkInPipe;
    template <typename D> using consume = Windows::Devices::Usb::impl_IUsbBulkInPipe<D>;
};

template <> struct traits<Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor>
{
    using abi = ABI::Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor;
    template <typename D> using consume = Windows::Devices::Usb::impl_IUsbBulkOutEndpointDescriptor<D>;
};

template <> struct traits<Windows::Devices::Usb::IUsbBulkOutPipe>
{
    using abi = ABI::Windows::Devices::Usb::IUsbBulkOutPipe;
    template <typename D> using consume = Windows::Devices::Usb::impl_IUsbBulkOutPipe<D>;
};

template <> struct traits<Windows::Devices::Usb::IUsbConfiguration>
{
    using abi = ABI::Windows::Devices::Usb::IUsbConfiguration;
    template <typename D> using consume = Windows::Devices::Usb::impl_IUsbConfiguration<D>;
};

template <> struct traits<Windows::Devices::Usb::IUsbConfigurationDescriptor>
{
    using abi = ABI::Windows::Devices::Usb::IUsbConfigurationDescriptor;
    template <typename D> using consume = Windows::Devices::Usb::impl_IUsbConfigurationDescriptor<D>;
};

template <> struct traits<Windows::Devices::Usb::IUsbConfigurationDescriptorStatics>
{
    using abi = ABI::Windows::Devices::Usb::IUsbConfigurationDescriptorStatics;
    template <typename D> using consume = Windows::Devices::Usb::impl_IUsbConfigurationDescriptorStatics<D>;
};

template <> struct traits<Windows::Devices::Usb::IUsbControlRequestType>
{
    using abi = ABI::Windows::Devices::Usb::IUsbControlRequestType;
    template <typename D> using consume = Windows::Devices::Usb::impl_IUsbControlRequestType<D>;
};

template <> struct traits<Windows::Devices::Usb::IUsbDescriptor>
{
    using abi = ABI::Windows::Devices::Usb::IUsbDescriptor;
    template <typename D> using consume = Windows::Devices::Usb::impl_IUsbDescriptor<D>;
};

template <> struct traits<Windows::Devices::Usb::IUsbDevice>
{
    using abi = ABI::Windows::Devices::Usb::IUsbDevice;
    template <typename D> using consume = Windows::Devices::Usb::impl_IUsbDevice<D>;
};

template <> struct traits<Windows::Devices::Usb::IUsbDeviceClass>
{
    using abi = ABI::Windows::Devices::Usb::IUsbDeviceClass;
    template <typename D> using consume = Windows::Devices::Usb::impl_IUsbDeviceClass<D>;
};

template <> struct traits<Windows::Devices::Usb::IUsbDeviceClasses>
{
    using abi = ABI::Windows::Devices::Usb::IUsbDeviceClasses;
    template <typename D> using consume = Windows::Devices::Usb::impl_IUsbDeviceClasses<D>;
};

template <> struct traits<Windows::Devices::Usb::IUsbDeviceClassesStatics>
{
    using abi = ABI::Windows::Devices::Usb::IUsbDeviceClassesStatics;
    template <typename D> using consume = Windows::Devices::Usb::impl_IUsbDeviceClassesStatics<D>;
};

template <> struct traits<Windows::Devices::Usb::IUsbDeviceDescriptor>
{
    using abi = ABI::Windows::Devices::Usb::IUsbDeviceDescriptor;
    template <typename D> using consume = Windows::Devices::Usb::impl_IUsbDeviceDescriptor<D>;
};

template <> struct traits<Windows::Devices::Usb::IUsbDeviceStatics>
{
    using abi = ABI::Windows::Devices::Usb::IUsbDeviceStatics;
    template <typename D> using consume = Windows::Devices::Usb::impl_IUsbDeviceStatics<D>;
};

template <> struct traits<Windows::Devices::Usb::IUsbEndpointDescriptor>
{
    using abi = ABI::Windows::Devices::Usb::IUsbEndpointDescriptor;
    template <typename D> using consume = Windows::Devices::Usb::impl_IUsbEndpointDescriptor<D>;
};

template <> struct traits<Windows::Devices::Usb::IUsbEndpointDescriptorStatics>
{
    using abi = ABI::Windows::Devices::Usb::IUsbEndpointDescriptorStatics;
    template <typename D> using consume = Windows::Devices::Usb::impl_IUsbEndpointDescriptorStatics<D>;
};

template <> struct traits<Windows::Devices::Usb::IUsbInterface>
{
    using abi = ABI::Windows::Devices::Usb::IUsbInterface;
    template <typename D> using consume = Windows::Devices::Usb::impl_IUsbInterface<D>;
};

template <> struct traits<Windows::Devices::Usb::IUsbInterfaceDescriptor>
{
    using abi = ABI::Windows::Devices::Usb::IUsbInterfaceDescriptor;
    template <typename D> using consume = Windows::Devices::Usb::impl_IUsbInterfaceDescriptor<D>;
};

template <> struct traits<Windows::Devices::Usb::IUsbInterfaceDescriptorStatics>
{
    using abi = ABI::Windows::Devices::Usb::IUsbInterfaceDescriptorStatics;
    template <typename D> using consume = Windows::Devices::Usb::impl_IUsbInterfaceDescriptorStatics<D>;
};

template <> struct traits<Windows::Devices::Usb::IUsbInterfaceSetting>
{
    using abi = ABI::Windows::Devices::Usb::IUsbInterfaceSetting;
    template <typename D> using consume = Windows::Devices::Usb::impl_IUsbInterfaceSetting<D>;
};

template <> struct traits<Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor>
{
    using abi = ABI::Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor;
    template <typename D> using consume = Windows::Devices::Usb::impl_IUsbInterruptInEndpointDescriptor<D>;
};

template <> struct traits<Windows::Devices::Usb::IUsbInterruptInEventArgs>
{
    using abi = ABI::Windows::Devices::Usb::IUsbInterruptInEventArgs;
    template <typename D> using consume = Windows::Devices::Usb::impl_IUsbInterruptInEventArgs<D>;
};

template <> struct traits<Windows::Devices::Usb::IUsbInterruptInPipe>
{
    using abi = ABI::Windows::Devices::Usb::IUsbInterruptInPipe;
    template <typename D> using consume = Windows::Devices::Usb::impl_IUsbInterruptInPipe<D>;
};

template <> struct traits<Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor>
{
    using abi = ABI::Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor;
    template <typename D> using consume = Windows::Devices::Usb::impl_IUsbInterruptOutEndpointDescriptor<D>;
};

template <> struct traits<Windows::Devices::Usb::IUsbInterruptOutPipe>
{
    using abi = ABI::Windows::Devices::Usb::IUsbInterruptOutPipe;
    template <typename D> using consume = Windows::Devices::Usb::impl_IUsbInterruptOutPipe<D>;
};

template <> struct traits<Windows::Devices::Usb::IUsbSetupPacket>
{
    using abi = ABI::Windows::Devices::Usb::IUsbSetupPacket;
    template <typename D> using consume = Windows::Devices::Usb::impl_IUsbSetupPacket<D>;
};

template <> struct traits<Windows::Devices::Usb::IUsbSetupPacketFactory>
{
    using abi = ABI::Windows::Devices::Usb::IUsbSetupPacketFactory;
    template <typename D> using consume = Windows::Devices::Usb::impl_IUsbSetupPacketFactory<D>;
};

template <> struct traits<Windows::Devices::Usb::UsbBulkInEndpointDescriptor>
{
    using abi = ABI::Windows::Devices::Usb::UsbBulkInEndpointDescriptor;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Usb.UsbBulkInEndpointDescriptor"; }
};

template <> struct traits<Windows::Devices::Usb::UsbBulkInPipe>
{
    using abi = ABI::Windows::Devices::Usb::UsbBulkInPipe;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Usb.UsbBulkInPipe"; }
};

template <> struct traits<Windows::Devices::Usb::UsbBulkOutEndpointDescriptor>
{
    using abi = ABI::Windows::Devices::Usb::UsbBulkOutEndpointDescriptor;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Usb.UsbBulkOutEndpointDescriptor"; }
};

template <> struct traits<Windows::Devices::Usb::UsbBulkOutPipe>
{
    using abi = ABI::Windows::Devices::Usb::UsbBulkOutPipe;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Usb.UsbBulkOutPipe"; }
};

template <> struct traits<Windows::Devices::Usb::UsbConfiguration>
{
    using abi = ABI::Windows::Devices::Usb::UsbConfiguration;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Usb.UsbConfiguration"; }
};

template <> struct traits<Windows::Devices::Usb::UsbConfigurationDescriptor>
{
    using abi = ABI::Windows::Devices::Usb::UsbConfigurationDescriptor;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Usb.UsbConfigurationDescriptor"; }
};

template <> struct traits<Windows::Devices::Usb::UsbControlRequestType>
{
    using abi = ABI::Windows::Devices::Usb::UsbControlRequestType;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Usb.UsbControlRequestType"; }
};

template <> struct traits<Windows::Devices::Usb::UsbDescriptor>
{
    using abi = ABI::Windows::Devices::Usb::UsbDescriptor;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Usb.UsbDescriptor"; }
};

template <> struct traits<Windows::Devices::Usb::UsbDevice>
{
    using abi = ABI::Windows::Devices::Usb::UsbDevice;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Usb.UsbDevice"; }
};

template <> struct traits<Windows::Devices::Usb::UsbDeviceClass>
{
    using abi = ABI::Windows::Devices::Usb::UsbDeviceClass;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Usb.UsbDeviceClass"; }
};

template <> struct traits<Windows::Devices::Usb::UsbDeviceClasses>
{
    using abi = ABI::Windows::Devices::Usb::UsbDeviceClasses;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Usb.UsbDeviceClasses"; }
};

template <> struct traits<Windows::Devices::Usb::UsbDeviceDescriptor>
{
    using abi = ABI::Windows::Devices::Usb::UsbDeviceDescriptor;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Usb.UsbDeviceDescriptor"; }
};

template <> struct traits<Windows::Devices::Usb::UsbEndpointDescriptor>
{
    using abi = ABI::Windows::Devices::Usb::UsbEndpointDescriptor;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Usb.UsbEndpointDescriptor"; }
};

template <> struct traits<Windows::Devices::Usb::UsbInterface>
{
    using abi = ABI::Windows::Devices::Usb::UsbInterface;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Usb.UsbInterface"; }
};

template <> struct traits<Windows::Devices::Usb::UsbInterfaceDescriptor>
{
    using abi = ABI::Windows::Devices::Usb::UsbInterfaceDescriptor;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Usb.UsbInterfaceDescriptor"; }
};

template <> struct traits<Windows::Devices::Usb::UsbInterfaceSetting>
{
    using abi = ABI::Windows::Devices::Usb::UsbInterfaceSetting;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Usb.UsbInterfaceSetting"; }
};

template <> struct traits<Windows::Devices::Usb::UsbInterruptInEndpointDescriptor>
{
    using abi = ABI::Windows::Devices::Usb::UsbInterruptInEndpointDescriptor;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Usb.UsbInterruptInEndpointDescriptor"; }
};

template <> struct traits<Windows::Devices::Usb::UsbInterruptInEventArgs>
{
    using abi = ABI::Windows::Devices::Usb::UsbInterruptInEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Usb.UsbInterruptInEventArgs"; }
};

template <> struct traits<Windows::Devices::Usb::UsbInterruptInPipe>
{
    using abi = ABI::Windows::Devices::Usb::UsbInterruptInPipe;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Usb.UsbInterruptInPipe"; }
};

template <> struct traits<Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor>
{
    using abi = ABI::Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Usb.UsbInterruptOutEndpointDescriptor"; }
};

template <> struct traits<Windows::Devices::Usb::UsbInterruptOutPipe>
{
    using abi = ABI::Windows::Devices::Usb::UsbInterruptOutPipe;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Usb.UsbInterruptOutPipe"; }
};

template <> struct traits<Windows::Devices::Usb::UsbSetupPacket>
{
    using abi = ABI::Windows::Devices::Usb::UsbSetupPacket;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Devices.Usb.UsbSetupPacket"; }
};

}

}
