// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Devices.Usb.2.h"
#include "winrt/Windows.Devices.h"

namespace winrt::impl {

template <typename D> uint32_t consume_Windows_Devices_Usb_IUsbBulkInEndpointDescriptor<D>::MaxPacketSize() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbBulkInEndpointDescriptor)->get_MaxPacketSize(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Usb_IUsbBulkInEndpointDescriptor<D>::EndpointNumber() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbBulkInEndpointDescriptor)->get_EndpointNumber(&value));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbBulkInPipe consume_Windows_Devices_Usb_IUsbBulkInEndpointDescriptor<D>::Pipe() const
{
    Windows::Devices::Usb::UsbBulkInPipe value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbBulkInEndpointDescriptor)->get_Pipe(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Usb_IUsbBulkInPipe<D>::MaxTransferSizeBytes() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbBulkInPipe)->get_MaxTransferSizeBytes(&value));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbBulkInEndpointDescriptor consume_Windows_Devices_Usb_IUsbBulkInPipe<D>::EndpointDescriptor() const
{
    Windows::Devices::Usb::UsbBulkInEndpointDescriptor value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbBulkInPipe)->get_EndpointDescriptor(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_Usb_IUsbBulkInPipe<D>::ClearStallAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbBulkInPipe)->ClearStallAsync(put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Devices_Usb_IUsbBulkInPipe<D>::ReadOptions(Windows::Devices::Usb::UsbReadOptions const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbBulkInPipe)->put_ReadOptions(get_abi(value)));
}

template <typename D> Windows::Devices::Usb::UsbReadOptions consume_Windows_Devices_Usb_IUsbBulkInPipe<D>::ReadOptions() const
{
    Windows::Devices::Usb::UsbReadOptions value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbBulkInPipe)->get_ReadOptions(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Usb_IUsbBulkInPipe<D>::FlushBuffer() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbBulkInPipe)->FlushBuffer());
}

template <typename D> Windows::Storage::Streams::IInputStream consume_Windows_Devices_Usb_IUsbBulkInPipe<D>::InputStream() const
{
    Windows::Storage::Streams::IInputStream value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbBulkInPipe)->get_InputStream(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Usb_IUsbBulkOutEndpointDescriptor<D>::MaxPacketSize() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor)->get_MaxPacketSize(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Usb_IUsbBulkOutEndpointDescriptor<D>::EndpointNumber() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor)->get_EndpointNumber(&value));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbBulkOutPipe consume_Windows_Devices_Usb_IUsbBulkOutEndpointDescriptor<D>::Pipe() const
{
    Windows::Devices::Usb::UsbBulkOutPipe value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor)->get_Pipe(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbBulkOutEndpointDescriptor consume_Windows_Devices_Usb_IUsbBulkOutPipe<D>::EndpointDescriptor() const
{
    Windows::Devices::Usb::UsbBulkOutEndpointDescriptor value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbBulkOutPipe)->get_EndpointDescriptor(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_Usb_IUsbBulkOutPipe<D>::ClearStallAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbBulkOutPipe)->ClearStallAsync(put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Devices_Usb_IUsbBulkOutPipe<D>::WriteOptions(Windows::Devices::Usb::UsbWriteOptions const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbBulkOutPipe)->put_WriteOptions(get_abi(value)));
}

template <typename D> Windows::Devices::Usb::UsbWriteOptions consume_Windows_Devices_Usb_IUsbBulkOutPipe<D>::WriteOptions() const
{
    Windows::Devices::Usb::UsbWriteOptions value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbBulkOutPipe)->get_WriteOptions(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IOutputStream consume_Windows_Devices_Usb_IUsbBulkOutPipe<D>::OutputStream() const
{
    Windows::Storage::Streams::IOutputStream value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbBulkOutPipe)->get_OutputStream(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterface> consume_Windows_Devices_Usb_IUsbConfiguration<D>::UsbInterfaces() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterface> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbConfiguration)->get_UsbInterfaces(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbConfigurationDescriptor consume_Windows_Devices_Usb_IUsbConfiguration<D>::ConfigurationDescriptor() const
{
    Windows::Devices::Usb::UsbConfigurationDescriptor value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbConfiguration)->get_ConfigurationDescriptor(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbDescriptor> consume_Windows_Devices_Usb_IUsbConfiguration<D>::Descriptors() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbDescriptor> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbConfiguration)->get_Descriptors(put_abi(value)));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Usb_IUsbConfigurationDescriptor<D>::ConfigurationValue() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbConfigurationDescriptor)->get_ConfigurationValue(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Usb_IUsbConfigurationDescriptor<D>::MaxPowerMilliamps() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbConfigurationDescriptor)->get_MaxPowerMilliamps(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Usb_IUsbConfigurationDescriptor<D>::SelfPowered() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbConfigurationDescriptor)->get_SelfPowered(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Usb_IUsbConfigurationDescriptor<D>::RemoteWakeup() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbConfigurationDescriptor)->get_RemoteWakeup(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Usb_IUsbConfigurationDescriptorStatics<D>::TryParse(Windows::Devices::Usb::UsbDescriptor const& descriptor, Windows::Devices::Usb::UsbConfigurationDescriptor& parsed) const
{
    bool success{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbConfigurationDescriptorStatics)->TryParse(get_abi(descriptor), put_abi(parsed), &success));
    return success;
}

template <typename D> Windows::Devices::Usb::UsbConfigurationDescriptor consume_Windows_Devices_Usb_IUsbConfigurationDescriptorStatics<D>::Parse(Windows::Devices::Usb::UsbDescriptor const& descriptor) const
{
    Windows::Devices::Usb::UsbConfigurationDescriptor parsed{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbConfigurationDescriptorStatics)->Parse(get_abi(descriptor), put_abi(parsed)));
    return parsed;
}

template <typename D> Windows::Devices::Usb::UsbTransferDirection consume_Windows_Devices_Usb_IUsbControlRequestType<D>::Direction() const
{
    Windows::Devices::Usb::UsbTransferDirection value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbControlRequestType)->get_Direction(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Usb_IUsbControlRequestType<D>::Direction(Windows::Devices::Usb::UsbTransferDirection const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbControlRequestType)->put_Direction(get_abi(value)));
}

template <typename D> Windows::Devices::Usb::UsbControlTransferType consume_Windows_Devices_Usb_IUsbControlRequestType<D>::ControlTransferType() const
{
    Windows::Devices::Usb::UsbControlTransferType value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbControlRequestType)->get_ControlTransferType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Usb_IUsbControlRequestType<D>::ControlTransferType(Windows::Devices::Usb::UsbControlTransferType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbControlRequestType)->put_ControlTransferType(get_abi(value)));
}

template <typename D> Windows::Devices::Usb::UsbControlRecipient consume_Windows_Devices_Usb_IUsbControlRequestType<D>::Recipient() const
{
    Windows::Devices::Usb::UsbControlRecipient value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbControlRequestType)->get_Recipient(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Usb_IUsbControlRequestType<D>::Recipient(Windows::Devices::Usb::UsbControlRecipient const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbControlRequestType)->put_Recipient(get_abi(value)));
}

template <typename D> uint8_t consume_Windows_Devices_Usb_IUsbControlRequestType<D>::AsByte() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbControlRequestType)->get_AsByte(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Usb_IUsbControlRequestType<D>::AsByte(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbControlRequestType)->put_AsByte(value));
}

template <typename D> uint8_t consume_Windows_Devices_Usb_IUsbDescriptor<D>::Length() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDescriptor)->get_Length(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Usb_IUsbDescriptor<D>::DescriptorType() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDescriptor)->get_DescriptorType(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Usb_IUsbDescriptor<D>::ReadDescriptorBuffer(Windows::Storage::Streams::IBuffer const& buffer) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDescriptor)->ReadDescriptorBuffer(get_abi(buffer)));
}

template <typename D> Windows::Foundation::IAsyncOperation<uint32_t> consume_Windows_Devices_Usb_IUsbDevice<D>::SendControlOutTransferAsync(Windows::Devices::Usb::UsbSetupPacket const& setupPacket, Windows::Storage::Streams::IBuffer const& buffer) const
{
    Windows::Foundation::IAsyncOperation<uint32_t> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDevice)->SendControlOutTransferAsync(get_abi(setupPacket), get_abi(buffer), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<uint32_t> consume_Windows_Devices_Usb_IUsbDevice<D>::SendControlOutTransferAsync(Windows::Devices::Usb::UsbSetupPacket const& setupPacket) const
{
    Windows::Foundation::IAsyncOperation<uint32_t> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDevice)->SendControlOutTransferAsyncNoBuffer(get_abi(setupPacket), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> consume_Windows_Devices_Usb_IUsbDevice<D>::SendControlInTransferAsync(Windows::Devices::Usb::UsbSetupPacket const& setupPacket, Windows::Storage::Streams::IBuffer const& buffer) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDevice)->SendControlInTransferAsync(get_abi(setupPacket), get_abi(buffer), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> consume_Windows_Devices_Usb_IUsbDevice<D>::SendControlInTransferAsync(Windows::Devices::Usb::UsbSetupPacket const& setupPacket) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDevice)->SendControlInTransferAsyncNoBuffer(get_abi(setupPacket), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Devices::Usb::UsbInterface consume_Windows_Devices_Usb_IUsbDevice<D>::DefaultInterface() const
{
    Windows::Devices::Usb::UsbInterface value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDevice)->get_DefaultInterface(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbDeviceDescriptor consume_Windows_Devices_Usb_IUsbDevice<D>::DeviceDescriptor() const
{
    Windows::Devices::Usb::UsbDeviceDescriptor value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDevice)->get_DeviceDescriptor(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbConfiguration consume_Windows_Devices_Usb_IUsbDevice<D>::Configuration() const
{
    Windows::Devices::Usb::UsbConfiguration value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDevice)->get_Configuration(put_abi(value)));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Usb_IUsbDeviceClass<D>::ClassCode() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDeviceClass)->get_ClassCode(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Usb_IUsbDeviceClass<D>::ClassCode(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDeviceClass)->put_ClassCode(value));
}

template <typename D> Windows::Foundation::IReference<uint8_t> consume_Windows_Devices_Usb_IUsbDeviceClass<D>::SubclassCode() const
{
    Windows::Foundation::IReference<uint8_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDeviceClass)->get_SubclassCode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Usb_IUsbDeviceClass<D>::SubclassCode(optional<uint8_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDeviceClass)->put_SubclassCode(get_abi(value)));
}

template <typename D> Windows::Foundation::IReference<uint8_t> consume_Windows_Devices_Usb_IUsbDeviceClass<D>::ProtocolCode() const
{
    Windows::Foundation::IReference<uint8_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDeviceClass)->get_ProtocolCode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Usb_IUsbDeviceClass<D>::ProtocolCode(optional<uint8_t> const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDeviceClass)->put_ProtocolCode(get_abi(value)));
}

template <typename D> Windows::Devices::Usb::UsbDeviceClass consume_Windows_Devices_Usb_IUsbDeviceClassesStatics<D>::CdcControl() const
{
    Windows::Devices::Usb::UsbDeviceClass value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDeviceClassesStatics)->get_CdcControl(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbDeviceClass consume_Windows_Devices_Usb_IUsbDeviceClassesStatics<D>::Physical() const
{
    Windows::Devices::Usb::UsbDeviceClass value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDeviceClassesStatics)->get_Physical(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbDeviceClass consume_Windows_Devices_Usb_IUsbDeviceClassesStatics<D>::PersonalHealthcare() const
{
    Windows::Devices::Usb::UsbDeviceClass value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDeviceClassesStatics)->get_PersonalHealthcare(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbDeviceClass consume_Windows_Devices_Usb_IUsbDeviceClassesStatics<D>::ActiveSync() const
{
    Windows::Devices::Usb::UsbDeviceClass value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDeviceClassesStatics)->get_ActiveSync(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbDeviceClass consume_Windows_Devices_Usb_IUsbDeviceClassesStatics<D>::PalmSync() const
{
    Windows::Devices::Usb::UsbDeviceClass value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDeviceClassesStatics)->get_PalmSync(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbDeviceClass consume_Windows_Devices_Usb_IUsbDeviceClassesStatics<D>::DeviceFirmwareUpdate() const
{
    Windows::Devices::Usb::UsbDeviceClass value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDeviceClassesStatics)->get_DeviceFirmwareUpdate(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbDeviceClass consume_Windows_Devices_Usb_IUsbDeviceClassesStatics<D>::Irda() const
{
    Windows::Devices::Usb::UsbDeviceClass value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDeviceClassesStatics)->get_Irda(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbDeviceClass consume_Windows_Devices_Usb_IUsbDeviceClassesStatics<D>::Measurement() const
{
    Windows::Devices::Usb::UsbDeviceClass value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDeviceClassesStatics)->get_Measurement(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbDeviceClass consume_Windows_Devices_Usb_IUsbDeviceClassesStatics<D>::VendorSpecific() const
{
    Windows::Devices::Usb::UsbDeviceClass value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDeviceClassesStatics)->get_VendorSpecific(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Usb_IUsbDeviceDescriptor<D>::BcdUsb() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDeviceDescriptor)->get_BcdUsb(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Usb_IUsbDeviceDescriptor<D>::MaxPacketSize0() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDeviceDescriptor)->get_MaxPacketSize0(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Usb_IUsbDeviceDescriptor<D>::VendorId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDeviceDescriptor)->get_VendorId(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Usb_IUsbDeviceDescriptor<D>::ProductId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDeviceDescriptor)->get_ProductId(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Usb_IUsbDeviceDescriptor<D>::BcdDeviceRevision() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDeviceDescriptor)->get_BcdDeviceRevision(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Usb_IUsbDeviceDescriptor<D>::NumberOfConfigurations() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDeviceDescriptor)->get_NumberOfConfigurations(&value));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Usb_IUsbDeviceStatics<D>::GetDeviceSelector(uint32_t vendorId, uint32_t productId, GUID const& winUsbInterfaceClass) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDeviceStatics)->GetDeviceSelector(vendorId, productId, get_abi(winUsbInterfaceClass), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Usb_IUsbDeviceStatics<D>::GetDeviceSelector(GUID const& winUsbInterfaceClass) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDeviceStatics)->GetDeviceSelectorGuidOnly(get_abi(winUsbInterfaceClass), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Usb_IUsbDeviceStatics<D>::GetDeviceSelector(uint32_t vendorId, uint32_t productId) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDeviceStatics)->GetDeviceSelectorVidPidOnly(vendorId, productId, put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Usb_IUsbDeviceStatics<D>::GetDeviceClassSelector(Windows::Devices::Usb::UsbDeviceClass const& usbClass) const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDeviceStatics)->GetDeviceClassSelector(get_abi(usbClass), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Usb::UsbDevice> consume_Windows_Devices_Usb_IUsbDeviceStatics<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Usb::UsbDevice> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbDeviceStatics)->FromIdAsync(get_abi(deviceId), put_abi(operation)));
    return operation;
}

template <typename D> uint8_t consume_Windows_Devices_Usb_IUsbEndpointDescriptor<D>::EndpointNumber() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbEndpointDescriptor)->get_EndpointNumber(&value));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbTransferDirection consume_Windows_Devices_Usb_IUsbEndpointDescriptor<D>::Direction() const
{
    Windows::Devices::Usb::UsbTransferDirection value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbEndpointDescriptor)->get_Direction(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbEndpointType consume_Windows_Devices_Usb_IUsbEndpointDescriptor<D>::EndpointType() const
{
    Windows::Devices::Usb::UsbEndpointType value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbEndpointDescriptor)->get_EndpointType(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbBulkInEndpointDescriptor consume_Windows_Devices_Usb_IUsbEndpointDescriptor<D>::AsBulkInEndpointDescriptor() const
{
    Windows::Devices::Usb::UsbBulkInEndpointDescriptor value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbEndpointDescriptor)->get_AsBulkInEndpointDescriptor(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbInterruptInEndpointDescriptor consume_Windows_Devices_Usb_IUsbEndpointDescriptor<D>::AsInterruptInEndpointDescriptor() const
{
    Windows::Devices::Usb::UsbInterruptInEndpointDescriptor value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbEndpointDescriptor)->get_AsInterruptInEndpointDescriptor(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbBulkOutEndpointDescriptor consume_Windows_Devices_Usb_IUsbEndpointDescriptor<D>::AsBulkOutEndpointDescriptor() const
{
    Windows::Devices::Usb::UsbBulkOutEndpointDescriptor value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbEndpointDescriptor)->get_AsBulkOutEndpointDescriptor(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor consume_Windows_Devices_Usb_IUsbEndpointDescriptor<D>::AsInterruptOutEndpointDescriptor() const
{
    Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbEndpointDescriptor)->get_AsInterruptOutEndpointDescriptor(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Usb_IUsbEndpointDescriptorStatics<D>::TryParse(Windows::Devices::Usb::UsbDescriptor const& descriptor, Windows::Devices::Usb::UsbEndpointDescriptor& parsed) const
{
    bool success{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbEndpointDescriptorStatics)->TryParse(get_abi(descriptor), put_abi(parsed), &success));
    return success;
}

template <typename D> Windows::Devices::Usb::UsbEndpointDescriptor consume_Windows_Devices_Usb_IUsbEndpointDescriptorStatics<D>::Parse(Windows::Devices::Usb::UsbDescriptor const& descriptor) const
{
    Windows::Devices::Usb::UsbEndpointDescriptor parsed{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbEndpointDescriptorStatics)->Parse(get_abi(descriptor), put_abi(parsed)));
    return parsed;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbBulkInPipe> consume_Windows_Devices_Usb_IUsbInterface<D>::BulkInPipes() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbBulkInPipe> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterface)->get_BulkInPipes(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterruptInPipe> consume_Windows_Devices_Usb_IUsbInterface<D>::InterruptInPipes() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterruptInPipe> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterface)->get_InterruptInPipes(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbBulkOutPipe> consume_Windows_Devices_Usb_IUsbInterface<D>::BulkOutPipes() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbBulkOutPipe> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterface)->get_BulkOutPipes(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterruptOutPipe> consume_Windows_Devices_Usb_IUsbInterface<D>::InterruptOutPipes() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterruptOutPipe> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterface)->get_InterruptOutPipes(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterfaceSetting> consume_Windows_Devices_Usb_IUsbInterface<D>::InterfaceSettings() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterfaceSetting> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterface)->get_InterfaceSettings(put_abi(value)));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Usb_IUsbInterface<D>::InterfaceNumber() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterface)->get_InterfaceNumber(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbDescriptor> consume_Windows_Devices_Usb_IUsbInterface<D>::Descriptors() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbDescriptor> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterface)->get_Descriptors(put_abi(value)));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Usb_IUsbInterfaceDescriptor<D>::ClassCode() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterfaceDescriptor)->get_ClassCode(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Usb_IUsbInterfaceDescriptor<D>::SubclassCode() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterfaceDescriptor)->get_SubclassCode(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Usb_IUsbInterfaceDescriptor<D>::ProtocolCode() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterfaceDescriptor)->get_ProtocolCode(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Usb_IUsbInterfaceDescriptor<D>::AlternateSettingNumber() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterfaceDescriptor)->get_AlternateSettingNumber(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Usb_IUsbInterfaceDescriptor<D>::InterfaceNumber() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterfaceDescriptor)->get_InterfaceNumber(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Usb_IUsbInterfaceDescriptorStatics<D>::TryParse(Windows::Devices::Usb::UsbDescriptor const& descriptor, Windows::Devices::Usb::UsbInterfaceDescriptor& parsed) const
{
    bool success{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterfaceDescriptorStatics)->TryParse(get_abi(descriptor), put_abi(parsed), &success));
    return success;
}

template <typename D> Windows::Devices::Usb::UsbInterfaceDescriptor consume_Windows_Devices_Usb_IUsbInterfaceDescriptorStatics<D>::Parse(Windows::Devices::Usb::UsbDescriptor const& descriptor) const
{
    Windows::Devices::Usb::UsbInterfaceDescriptor parsed{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterfaceDescriptorStatics)->Parse(get_abi(descriptor), put_abi(parsed)));
    return parsed;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbBulkInEndpointDescriptor> consume_Windows_Devices_Usb_IUsbInterfaceSetting<D>::BulkInEndpoints() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbBulkInEndpointDescriptor> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterfaceSetting)->get_BulkInEndpoints(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterruptInEndpointDescriptor> consume_Windows_Devices_Usb_IUsbInterfaceSetting<D>::InterruptInEndpoints() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterruptInEndpointDescriptor> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterfaceSetting)->get_InterruptInEndpoints(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbBulkOutEndpointDescriptor> consume_Windows_Devices_Usb_IUsbInterfaceSetting<D>::BulkOutEndpoints() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbBulkOutEndpointDescriptor> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterfaceSetting)->get_BulkOutEndpoints(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor> consume_Windows_Devices_Usb_IUsbInterfaceSetting<D>::InterruptOutEndpoints() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterfaceSetting)->get_InterruptOutEndpoints(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Usb_IUsbInterfaceSetting<D>::Selected() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterfaceSetting)->get_Selected(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_Usb_IUsbInterfaceSetting<D>::SelectSettingAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterfaceSetting)->SelectSettingAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Devices::Usb::UsbInterfaceDescriptor consume_Windows_Devices_Usb_IUsbInterfaceSetting<D>::InterfaceDescriptor() const
{
    Windows::Devices::Usb::UsbInterfaceDescriptor value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterfaceSetting)->get_InterfaceDescriptor(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbDescriptor> consume_Windows_Devices_Usb_IUsbInterfaceSetting<D>::Descriptors() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbDescriptor> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterfaceSetting)->get_Descriptors(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Usb_IUsbInterruptInEndpointDescriptor<D>::MaxPacketSize() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor)->get_MaxPacketSize(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Usb_IUsbInterruptInEndpointDescriptor<D>::EndpointNumber() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor)->get_EndpointNumber(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_Usb_IUsbInterruptInEndpointDescriptor<D>::Interval() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor)->get_Interval(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbInterruptInPipe consume_Windows_Devices_Usb_IUsbInterruptInEndpointDescriptor<D>::Pipe() const
{
    Windows::Devices::Usb::UsbInterruptInPipe value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor)->get_Pipe(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_Usb_IUsbInterruptInEventArgs<D>::InterruptData() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterruptInEventArgs)->get_InterruptData(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbInterruptInEndpointDescriptor consume_Windows_Devices_Usb_IUsbInterruptInPipe<D>::EndpointDescriptor() const
{
    Windows::Devices::Usb::UsbInterruptInEndpointDescriptor value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterruptInPipe)->get_EndpointDescriptor(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_Usb_IUsbInterruptInPipe<D>::ClearStallAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterruptInPipe)->ClearStallAsync(put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_Windows_Devices_Usb_IUsbInterruptInPipe<D>::DataReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::Usb::UsbInterruptInPipe, Windows::Devices::Usb::UsbInterruptInEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterruptInPipe)->add_DataReceived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Usb::IUsbInterruptInPipe> consume_Windows_Devices_Usb_IUsbInterruptInPipe<D>::DataReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Usb::UsbInterruptInPipe, Windows::Devices::Usb::UsbInterruptInEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Usb::IUsbInterruptInPipe>(this, &abi_t<Windows::Devices::Usb::IUsbInterruptInPipe>::remove_DataReceived, DataReceived(handler));
}

template <typename D> void consume_Windows_Devices_Usb_IUsbInterruptInPipe<D>::DataReceived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterruptInPipe)->remove_DataReceived(get_abi(token)));
}

template <typename D> uint32_t consume_Windows_Devices_Usb_IUsbInterruptOutEndpointDescriptor<D>::MaxPacketSize() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor)->get_MaxPacketSize(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Usb_IUsbInterruptOutEndpointDescriptor<D>::EndpointNumber() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor)->get_EndpointNumber(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_Usb_IUsbInterruptOutEndpointDescriptor<D>::Interval() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor)->get_Interval(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbInterruptOutPipe consume_Windows_Devices_Usb_IUsbInterruptOutEndpointDescriptor<D>::Pipe() const
{
    Windows::Devices::Usb::UsbInterruptOutPipe value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor)->get_Pipe(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor consume_Windows_Devices_Usb_IUsbInterruptOutPipe<D>::EndpointDescriptor() const
{
    Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterruptOutPipe)->get_EndpointDescriptor(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_Usb_IUsbInterruptOutPipe<D>::ClearStallAsync() const
{
    Windows::Foundation::IAsyncAction operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterruptOutPipe)->ClearStallAsync(put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Devices_Usb_IUsbInterruptOutPipe<D>::WriteOptions(Windows::Devices::Usb::UsbWriteOptions const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterruptOutPipe)->put_WriteOptions(get_abi(value)));
}

template <typename D> Windows::Devices::Usb::UsbWriteOptions consume_Windows_Devices_Usb_IUsbInterruptOutPipe<D>::WriteOptions() const
{
    Windows::Devices::Usb::UsbWriteOptions value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterruptOutPipe)->get_WriteOptions(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IOutputStream consume_Windows_Devices_Usb_IUsbInterruptOutPipe<D>::OutputStream() const
{
    Windows::Storage::Streams::IOutputStream value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbInterruptOutPipe)->get_OutputStream(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbControlRequestType consume_Windows_Devices_Usb_IUsbSetupPacket<D>::RequestType() const
{
    Windows::Devices::Usb::UsbControlRequestType value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbSetupPacket)->get_RequestType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Usb_IUsbSetupPacket<D>::RequestType(Windows::Devices::Usb::UsbControlRequestType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbSetupPacket)->put_RequestType(get_abi(value)));
}

template <typename D> uint8_t consume_Windows_Devices_Usb_IUsbSetupPacket<D>::Request() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbSetupPacket)->get_Request(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Usb_IUsbSetupPacket<D>::Request(uint8_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbSetupPacket)->put_Request(value));
}

template <typename D> uint32_t consume_Windows_Devices_Usb_IUsbSetupPacket<D>::Value() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbSetupPacket)->get_Value(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Usb_IUsbSetupPacket<D>::Value(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbSetupPacket)->put_Value(value));
}

template <typename D> uint32_t consume_Windows_Devices_Usb_IUsbSetupPacket<D>::Index() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbSetupPacket)->get_Index(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Usb_IUsbSetupPacket<D>::Index(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbSetupPacket)->put_Index(value));
}

template <typename D> uint32_t consume_Windows_Devices_Usb_IUsbSetupPacket<D>::Length() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbSetupPacket)->get_Length(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Usb_IUsbSetupPacket<D>::Length(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbSetupPacket)->put_Length(value));
}

template <typename D> Windows::Devices::Usb::UsbSetupPacket consume_Windows_Devices_Usb_IUsbSetupPacketFactory<D>::CreateWithEightByteBuffer(Windows::Storage::Streams::IBuffer const& eightByteBuffer) const
{
    Windows::Devices::Usb::UsbSetupPacket value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Usb::IUsbSetupPacketFactory)->CreateWithEightByteBuffer(get_abi(eightByteBuffer), put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Devices::Usb::IUsbBulkInEndpointDescriptor> : produce_base<D, Windows::Devices::Usb::IUsbBulkInEndpointDescriptor>
{
    HRESULT __stdcall get_MaxPacketSize(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxPacketSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndpointNumber(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EndpointNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pipe(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Pipe());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Usb::IUsbBulkInPipe> : produce_base<D, Windows::Devices::Usb::IUsbBulkInPipe>
{
    HRESULT __stdcall get_MaxTransferSizeBytes(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxTransferSizeBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndpointDescriptor(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EndpointDescriptor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ClearStallAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ClearStallAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ReadOptions(abi_t<Windows::Devices::Usb::UsbReadOptions> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadOptions(*reinterpret_cast<Windows::Devices::Usb::UsbReadOptions const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReadOptions(abi_t<Windows::Devices::Usb::UsbReadOptions>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadOptions());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FlushBuffer() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FlushBuffer();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InputStream(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InputStream());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor> : produce_base<D, Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor>
{
    HRESULT __stdcall get_MaxPacketSize(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxPacketSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndpointNumber(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EndpointNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pipe(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Pipe());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Usb::IUsbBulkOutPipe> : produce_base<D, Windows::Devices::Usb::IUsbBulkOutPipe>
{
    HRESULT __stdcall get_EndpointDescriptor(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EndpointDescriptor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ClearStallAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ClearStallAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_WriteOptions(abi_t<Windows::Devices::Usb::UsbWriteOptions> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteOptions(*reinterpret_cast<Windows::Devices::Usb::UsbWriteOptions const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WriteOptions(abi_t<Windows::Devices::Usb::UsbWriteOptions>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WriteOptions());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutputStream(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OutputStream());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Usb::IUsbConfiguration> : produce_base<D, Windows::Devices::Usb::IUsbConfiguration>
{
    HRESULT __stdcall get_UsbInterfaces(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UsbInterfaces());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConfigurationDescriptor(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ConfigurationDescriptor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Descriptors(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Descriptors());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Usb::IUsbConfigurationDescriptor> : produce_base<D, Windows::Devices::Usb::IUsbConfigurationDescriptor>
{
    HRESULT __stdcall get_ConfigurationValue(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ConfigurationValue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxPowerMilliamps(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxPowerMilliamps());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelfPowered(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SelfPowered());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteWakeup(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RemoteWakeup());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Usb::IUsbConfigurationDescriptorStatics> : produce_base<D, Windows::Devices::Usb::IUsbConfigurationDescriptorStatics>
{
    HRESULT __stdcall TryParse(::IUnknown* descriptor, ::IUnknown** parsed, bool* success) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *success = detach_abi(this->shim().TryParse(*reinterpret_cast<Windows::Devices::Usb::UsbDescriptor const*>(&descriptor), *reinterpret_cast<Windows::Devices::Usb::UsbConfigurationDescriptor*>(parsed)));
            return S_OK;
        }
        catch (...)
        {
            *parsed = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Parse(::IUnknown* descriptor, ::IUnknown** parsed) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *parsed = detach_abi(this->shim().Parse(*reinterpret_cast<Windows::Devices::Usb::UsbDescriptor const*>(&descriptor)));
            return S_OK;
        }
        catch (...)
        {
            *parsed = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Usb::IUsbControlRequestType> : produce_base<D, Windows::Devices::Usb::IUsbControlRequestType>
{
    HRESULT __stdcall get_Direction(abi_t<Windows::Devices::Usb::UsbTransferDirection>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Direction());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Direction(abi_t<Windows::Devices::Usb::UsbTransferDirection> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Direction(*reinterpret_cast<Windows::Devices::Usb::UsbTransferDirection const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ControlTransferType(abi_t<Windows::Devices::Usb::UsbControlTransferType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ControlTransferType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ControlTransferType(abi_t<Windows::Devices::Usb::UsbControlTransferType> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ControlTransferType(*reinterpret_cast<Windows::Devices::Usb::UsbControlTransferType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Recipient(abi_t<Windows::Devices::Usb::UsbControlRecipient>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Recipient());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Recipient(abi_t<Windows::Devices::Usb::UsbControlRecipient> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Recipient(*reinterpret_cast<Windows::Devices::Usb::UsbControlRecipient const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AsByte(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AsByte());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AsByte(uint8_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AsByte(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Usb::IUsbDescriptor> : produce_base<D, Windows::Devices::Usb::IUsbDescriptor>
{
    HRESULT __stdcall get_Length(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Length());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DescriptorType(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DescriptorType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ReadDescriptorBuffer(::IUnknown* buffer) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReadDescriptorBuffer(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Usb::IUsbDevice> : produce_base<D, Windows::Devices::Usb::IUsbDevice>
{
    HRESULT __stdcall SendControlOutTransferAsync(::IUnknown* setupPacket, ::IUnknown* buffer, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SendControlOutTransferAsync(*reinterpret_cast<Windows::Devices::Usb::UsbSetupPacket const*>(&setupPacket), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SendControlOutTransferAsyncNoBuffer(::IUnknown* setupPacket, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SendControlOutTransferAsync(*reinterpret_cast<Windows::Devices::Usb::UsbSetupPacket const*>(&setupPacket)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SendControlInTransferAsync(::IUnknown* setupPacket, ::IUnknown* buffer, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SendControlInTransferAsync(*reinterpret_cast<Windows::Devices::Usb::UsbSetupPacket const*>(&setupPacket), *reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&buffer)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SendControlInTransferAsyncNoBuffer(::IUnknown* setupPacket, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SendControlInTransferAsync(*reinterpret_cast<Windows::Devices::Usb::UsbSetupPacket const*>(&setupPacket)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultInterface(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DefaultInterface());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceDescriptor(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceDescriptor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Configuration(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Configuration());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Usb::IUsbDeviceClass> : produce_base<D, Windows::Devices::Usb::IUsbDeviceClass>
{
    HRESULT __stdcall get_ClassCode(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClassCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ClassCode(uint8_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClassCode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SubclassCode(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SubclassCode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SubclassCode(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SubclassCode(*reinterpret_cast<Windows::Foundation::IReference<uint8_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProtocolCode(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProtocolCode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ProtocolCode(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProtocolCode(*reinterpret_cast<Windows::Foundation::IReference<uint8_t> const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Usb::IUsbDeviceClasses> : produce_base<D, Windows::Devices::Usb::IUsbDeviceClasses>
{};

template <typename D>
struct produce<D, Windows::Devices::Usb::IUsbDeviceClassesStatics> : produce_base<D, Windows::Devices::Usb::IUsbDeviceClassesStatics>
{
    HRESULT __stdcall get_CdcControl(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CdcControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Physical(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Physical());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PersonalHealthcare(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PersonalHealthcare());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ActiveSync(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ActiveSync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PalmSync(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PalmSync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceFirmwareUpdate(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceFirmwareUpdate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Irda(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Irda());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Measurement(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Measurement());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VendorSpecific(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VendorSpecific());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Usb::IUsbDeviceDescriptor> : produce_base<D, Windows::Devices::Usb::IUsbDeviceDescriptor>
{
    HRESULT __stdcall get_BcdUsb(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BcdUsb());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxPacketSize0(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxPacketSize0());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VendorId(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VendorId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProductId(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProductId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BcdDeviceRevision(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BcdDeviceRevision());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumberOfConfigurations(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NumberOfConfigurations());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Usb::IUsbDeviceStatics> : produce_base<D, Windows::Devices::Usb::IUsbDeviceStatics>
{
    HRESULT __stdcall GetDeviceSelector(uint32_t vendorId, uint32_t productId, abi_t<GUID> winUsbInterfaceClass, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeviceSelector(vendorId, productId, *reinterpret_cast<GUID const*>(&winUsbInterfaceClass)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelectorGuidOnly(abi_t<GUID> winUsbInterfaceClass, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeviceSelector(*reinterpret_cast<GUID const*>(&winUsbInterfaceClass)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelectorVidPidOnly(uint32_t vendorId, uint32_t productId, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeviceSelector(vendorId, productId));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceClassSelector(::IUnknown* usbClass, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeviceClassSelector(*reinterpret_cast<Windows::Devices::Usb::UsbDeviceClass const*>(&usbClass)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Usb::IUsbEndpointDescriptor> : produce_base<D, Windows::Devices::Usb::IUsbEndpointDescriptor>
{
    HRESULT __stdcall get_EndpointNumber(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EndpointNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Direction(abi_t<Windows::Devices::Usb::UsbTransferDirection>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Direction());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndpointType(abi_t<Windows::Devices::Usb::UsbEndpointType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EndpointType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AsBulkInEndpointDescriptor(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AsBulkInEndpointDescriptor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AsInterruptInEndpointDescriptor(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AsInterruptInEndpointDescriptor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AsBulkOutEndpointDescriptor(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AsBulkOutEndpointDescriptor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AsInterruptOutEndpointDescriptor(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AsInterruptOutEndpointDescriptor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Usb::IUsbEndpointDescriptorStatics> : produce_base<D, Windows::Devices::Usb::IUsbEndpointDescriptorStatics>
{
    HRESULT __stdcall TryParse(::IUnknown* descriptor, ::IUnknown** parsed, bool* success) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *success = detach_abi(this->shim().TryParse(*reinterpret_cast<Windows::Devices::Usb::UsbDescriptor const*>(&descriptor), *reinterpret_cast<Windows::Devices::Usb::UsbEndpointDescriptor*>(parsed)));
            return S_OK;
        }
        catch (...)
        {
            *parsed = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Parse(::IUnknown* descriptor, ::IUnknown** parsed) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *parsed = detach_abi(this->shim().Parse(*reinterpret_cast<Windows::Devices::Usb::UsbDescriptor const*>(&descriptor)));
            return S_OK;
        }
        catch (...)
        {
            *parsed = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Usb::IUsbInterface> : produce_base<D, Windows::Devices::Usb::IUsbInterface>
{
    HRESULT __stdcall get_BulkInPipes(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BulkInPipes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InterruptInPipes(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InterruptInPipes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BulkOutPipes(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BulkOutPipes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InterruptOutPipes(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InterruptOutPipes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InterfaceSettings(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InterfaceSettings());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InterfaceNumber(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InterfaceNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Descriptors(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Descriptors());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Usb::IUsbInterfaceDescriptor> : produce_base<D, Windows::Devices::Usb::IUsbInterfaceDescriptor>
{
    HRESULT __stdcall get_ClassCode(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ClassCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SubclassCode(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SubclassCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProtocolCode(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProtocolCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlternateSettingNumber(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlternateSettingNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InterfaceNumber(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InterfaceNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Usb::IUsbInterfaceDescriptorStatics> : produce_base<D, Windows::Devices::Usb::IUsbInterfaceDescriptorStatics>
{
    HRESULT __stdcall TryParse(::IUnknown* descriptor, ::IUnknown** parsed, bool* success) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *success = detach_abi(this->shim().TryParse(*reinterpret_cast<Windows::Devices::Usb::UsbDescriptor const*>(&descriptor), *reinterpret_cast<Windows::Devices::Usb::UsbInterfaceDescriptor*>(parsed)));
            return S_OK;
        }
        catch (...)
        {
            *parsed = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Parse(::IUnknown* descriptor, ::IUnknown** parsed) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *parsed = detach_abi(this->shim().Parse(*reinterpret_cast<Windows::Devices::Usb::UsbDescriptor const*>(&descriptor)));
            return S_OK;
        }
        catch (...)
        {
            *parsed = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Usb::IUsbInterfaceSetting> : produce_base<D, Windows::Devices::Usb::IUsbInterfaceSetting>
{
    HRESULT __stdcall get_BulkInEndpoints(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BulkInEndpoints());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InterruptInEndpoints(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InterruptInEndpoints());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BulkOutEndpoints(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BulkOutEndpoints());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InterruptOutEndpoints(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InterruptOutEndpoints());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Selected(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Selected());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SelectSettingAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SelectSettingAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InterfaceDescriptor(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InterfaceDescriptor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Descriptors(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Descriptors());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor> : produce_base<D, Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor>
{
    HRESULT __stdcall get_MaxPacketSize(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxPacketSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndpointNumber(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EndpointNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Interval(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Interval());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pipe(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Pipe());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Usb::IUsbInterruptInEventArgs> : produce_base<D, Windows::Devices::Usb::IUsbInterruptInEventArgs>
{
    HRESULT __stdcall get_InterruptData(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InterruptData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Usb::IUsbInterruptInPipe> : produce_base<D, Windows::Devices::Usb::IUsbInterruptInPipe>
{
    HRESULT __stdcall get_EndpointDescriptor(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EndpointDescriptor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ClearStallAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ClearStallAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DataReceived(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().DataReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Usb::UsbInterruptInPipe, Windows::Devices::Usb::UsbInterruptInEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DataReceived(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DataReceived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor> : produce_base<D, Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor>
{
    HRESULT __stdcall get_MaxPacketSize(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxPacketSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndpointNumber(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EndpointNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Interval(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Interval());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pipe(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Pipe());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Usb::IUsbInterruptOutPipe> : produce_base<D, Windows::Devices::Usb::IUsbInterruptOutPipe>
{
    HRESULT __stdcall get_EndpointDescriptor(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EndpointDescriptor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ClearStallAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().ClearStallAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_WriteOptions(abi_t<Windows::Devices::Usb::UsbWriteOptions> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WriteOptions(*reinterpret_cast<Windows::Devices::Usb::UsbWriteOptions const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WriteOptions(abi_t<Windows::Devices::Usb::UsbWriteOptions>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WriteOptions());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutputStream(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OutputStream());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Usb::IUsbSetupPacket> : produce_base<D, Windows::Devices::Usb::IUsbSetupPacket>
{
    HRESULT __stdcall get_RequestType(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RequestType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RequestType(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestType(*reinterpret_cast<Windows::Devices::Usb::UsbControlRequestType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Request(uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Request(uint8_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Request(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Value());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Value(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Index(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Index());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Index(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Index(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Length(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Length());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Length(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Length(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Usb::IUsbSetupPacketFactory> : produce_base<D, Windows::Devices::Usb::IUsbSetupPacketFactory>
{
    HRESULT __stdcall CreateWithEightByteBuffer(::IUnknown* eightByteBuffer, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateWithEightByteBuffer(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&eightByteBuffer)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::Usb {

inline bool UsbConfigurationDescriptor::TryParse(Windows::Devices::Usb::UsbDescriptor const& descriptor, Windows::Devices::Usb::UsbConfigurationDescriptor& parsed)
{
    return get_activation_factory<UsbConfigurationDescriptor, Windows::Devices::Usb::IUsbConfigurationDescriptorStatics>().TryParse(descriptor, parsed);
}

inline Windows::Devices::Usb::UsbConfigurationDescriptor UsbConfigurationDescriptor::Parse(Windows::Devices::Usb::UsbDescriptor const& descriptor)
{
    return get_activation_factory<UsbConfigurationDescriptor, Windows::Devices::Usb::IUsbConfigurationDescriptorStatics>().Parse(descriptor);
}

inline UsbControlRequestType::UsbControlRequestType() :
    UsbControlRequestType(activate_instance<UsbControlRequestType>())
{}

inline hstring UsbDevice::GetDeviceSelector(uint32_t vendorId, uint32_t productId, GUID const& winUsbInterfaceClass)
{
    return get_activation_factory<UsbDevice, Windows::Devices::Usb::IUsbDeviceStatics>().GetDeviceSelector(vendorId, productId, winUsbInterfaceClass);
}

inline hstring UsbDevice::GetDeviceSelector(GUID const& winUsbInterfaceClass)
{
    return get_activation_factory<UsbDevice, Windows::Devices::Usb::IUsbDeviceStatics>().GetDeviceSelector(winUsbInterfaceClass);
}

inline hstring UsbDevice::GetDeviceSelector(uint32_t vendorId, uint32_t productId)
{
    return get_activation_factory<UsbDevice, Windows::Devices::Usb::IUsbDeviceStatics>().GetDeviceSelector(vendorId, productId);
}

inline hstring UsbDevice::GetDeviceClassSelector(Windows::Devices::Usb::UsbDeviceClass const& usbClass)
{
    return get_activation_factory<UsbDevice, Windows::Devices::Usb::IUsbDeviceStatics>().GetDeviceClassSelector(usbClass);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Usb::UsbDevice> UsbDevice::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<UsbDevice, Windows::Devices::Usb::IUsbDeviceStatics>().FromIdAsync(deviceId);
}

inline UsbDeviceClass::UsbDeviceClass() :
    UsbDeviceClass(activate_instance<UsbDeviceClass>())
{}

inline Windows::Devices::Usb::UsbDeviceClass UsbDeviceClasses::CdcControl()
{
    return get_activation_factory<UsbDeviceClasses, Windows::Devices::Usb::IUsbDeviceClassesStatics>().CdcControl();
}

inline Windows::Devices::Usb::UsbDeviceClass UsbDeviceClasses::Physical()
{
    return get_activation_factory<UsbDeviceClasses, Windows::Devices::Usb::IUsbDeviceClassesStatics>().Physical();
}

inline Windows::Devices::Usb::UsbDeviceClass UsbDeviceClasses::PersonalHealthcare()
{
    return get_activation_factory<UsbDeviceClasses, Windows::Devices::Usb::IUsbDeviceClassesStatics>().PersonalHealthcare();
}

inline Windows::Devices::Usb::UsbDeviceClass UsbDeviceClasses::ActiveSync()
{
    return get_activation_factory<UsbDeviceClasses, Windows::Devices::Usb::IUsbDeviceClassesStatics>().ActiveSync();
}

inline Windows::Devices::Usb::UsbDeviceClass UsbDeviceClasses::PalmSync()
{
    return get_activation_factory<UsbDeviceClasses, Windows::Devices::Usb::IUsbDeviceClassesStatics>().PalmSync();
}

inline Windows::Devices::Usb::UsbDeviceClass UsbDeviceClasses::DeviceFirmwareUpdate()
{
    return get_activation_factory<UsbDeviceClasses, Windows::Devices::Usb::IUsbDeviceClassesStatics>().DeviceFirmwareUpdate();
}

inline Windows::Devices::Usb::UsbDeviceClass UsbDeviceClasses::Irda()
{
    return get_activation_factory<UsbDeviceClasses, Windows::Devices::Usb::IUsbDeviceClassesStatics>().Irda();
}

inline Windows::Devices::Usb::UsbDeviceClass UsbDeviceClasses::Measurement()
{
    return get_activation_factory<UsbDeviceClasses, Windows::Devices::Usb::IUsbDeviceClassesStatics>().Measurement();
}

inline Windows::Devices::Usb::UsbDeviceClass UsbDeviceClasses::VendorSpecific()
{
    return get_activation_factory<UsbDeviceClasses, Windows::Devices::Usb::IUsbDeviceClassesStatics>().VendorSpecific();
}

inline bool UsbEndpointDescriptor::TryParse(Windows::Devices::Usb::UsbDescriptor const& descriptor, Windows::Devices::Usb::UsbEndpointDescriptor& parsed)
{
    return get_activation_factory<UsbEndpointDescriptor, Windows::Devices::Usb::IUsbEndpointDescriptorStatics>().TryParse(descriptor, parsed);
}

inline Windows::Devices::Usb::UsbEndpointDescriptor UsbEndpointDescriptor::Parse(Windows::Devices::Usb::UsbDescriptor const& descriptor)
{
    return get_activation_factory<UsbEndpointDescriptor, Windows::Devices::Usb::IUsbEndpointDescriptorStatics>().Parse(descriptor);
}

inline bool UsbInterfaceDescriptor::TryParse(Windows::Devices::Usb::UsbDescriptor const& descriptor, Windows::Devices::Usb::UsbInterfaceDescriptor& parsed)
{
    return get_activation_factory<UsbInterfaceDescriptor, Windows::Devices::Usb::IUsbInterfaceDescriptorStatics>().TryParse(descriptor, parsed);
}

inline Windows::Devices::Usb::UsbInterfaceDescriptor UsbInterfaceDescriptor::Parse(Windows::Devices::Usb::UsbDescriptor const& descriptor)
{
    return get_activation_factory<UsbInterfaceDescriptor, Windows::Devices::Usb::IUsbInterfaceDescriptorStatics>().Parse(descriptor);
}

inline UsbSetupPacket::UsbSetupPacket() :
    UsbSetupPacket(activate_instance<UsbSetupPacket>())
{}

inline UsbSetupPacket::UsbSetupPacket(Windows::Storage::Streams::IBuffer const& eightByteBuffer) :
    UsbSetupPacket(get_activation_factory<UsbSetupPacket, Windows::Devices::Usb::IUsbSetupPacketFactory>().CreateWithEightByteBuffer(eightByteBuffer))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Usb::IUsbBulkInEndpointDescriptor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::IUsbBulkInEndpointDescriptor> {};

template<> struct hash<winrt::Windows::Devices::Usb::IUsbBulkInPipe> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::IUsbBulkInPipe> {};

template<> struct hash<winrt::Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor> {};

template<> struct hash<winrt::Windows::Devices::Usb::IUsbBulkOutPipe> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::IUsbBulkOutPipe> {};

template<> struct hash<winrt::Windows::Devices::Usb::IUsbConfiguration> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::IUsbConfiguration> {};

template<> struct hash<winrt::Windows::Devices::Usb::IUsbConfigurationDescriptor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::IUsbConfigurationDescriptor> {};

template<> struct hash<winrt::Windows::Devices::Usb::IUsbConfigurationDescriptorStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::IUsbConfigurationDescriptorStatics> {};

template<> struct hash<winrt::Windows::Devices::Usb::IUsbControlRequestType> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::IUsbControlRequestType> {};

template<> struct hash<winrt::Windows::Devices::Usb::IUsbDescriptor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::IUsbDescriptor> {};

template<> struct hash<winrt::Windows::Devices::Usb::IUsbDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::IUsbDevice> {};

template<> struct hash<winrt::Windows::Devices::Usb::IUsbDeviceClass> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::IUsbDeviceClass> {};

template<> struct hash<winrt::Windows::Devices::Usb::IUsbDeviceClasses> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::IUsbDeviceClasses> {};

template<> struct hash<winrt::Windows::Devices::Usb::IUsbDeviceClassesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::IUsbDeviceClassesStatics> {};

template<> struct hash<winrt::Windows::Devices::Usb::IUsbDeviceDescriptor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::IUsbDeviceDescriptor> {};

template<> struct hash<winrt::Windows::Devices::Usb::IUsbDeviceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::IUsbDeviceStatics> {};

template<> struct hash<winrt::Windows::Devices::Usb::IUsbEndpointDescriptor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::IUsbEndpointDescriptor> {};

template<> struct hash<winrt::Windows::Devices::Usb::IUsbEndpointDescriptorStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::IUsbEndpointDescriptorStatics> {};

template<> struct hash<winrt::Windows::Devices::Usb::IUsbInterface> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::IUsbInterface> {};

template<> struct hash<winrt::Windows::Devices::Usb::IUsbInterfaceDescriptor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::IUsbInterfaceDescriptor> {};

template<> struct hash<winrt::Windows::Devices::Usb::IUsbInterfaceDescriptorStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::IUsbInterfaceDescriptorStatics> {};

template<> struct hash<winrt::Windows::Devices::Usb::IUsbInterfaceSetting> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::IUsbInterfaceSetting> {};

template<> struct hash<winrt::Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor> {};

template<> struct hash<winrt::Windows::Devices::Usb::IUsbInterruptInEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::IUsbInterruptInEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Usb::IUsbInterruptInPipe> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::IUsbInterruptInPipe> {};

template<> struct hash<winrt::Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor> {};

template<> struct hash<winrt::Windows::Devices::Usb::IUsbInterruptOutPipe> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::IUsbInterruptOutPipe> {};

template<> struct hash<winrt::Windows::Devices::Usb::IUsbSetupPacket> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::IUsbSetupPacket> {};

template<> struct hash<winrt::Windows::Devices::Usb::IUsbSetupPacketFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::IUsbSetupPacketFactory> {};

template<> struct hash<winrt::Windows::Devices::Usb::UsbBulkInEndpointDescriptor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::UsbBulkInEndpointDescriptor> {};

template<> struct hash<winrt::Windows::Devices::Usb::UsbBulkInPipe> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::UsbBulkInPipe> {};

template<> struct hash<winrt::Windows::Devices::Usb::UsbBulkOutEndpointDescriptor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::UsbBulkOutEndpointDescriptor> {};

template<> struct hash<winrt::Windows::Devices::Usb::UsbBulkOutPipe> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::UsbBulkOutPipe> {};

template<> struct hash<winrt::Windows::Devices::Usb::UsbConfiguration> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::UsbConfiguration> {};

template<> struct hash<winrt::Windows::Devices::Usb::UsbConfigurationDescriptor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::UsbConfigurationDescriptor> {};

template<> struct hash<winrt::Windows::Devices::Usb::UsbControlRequestType> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::UsbControlRequestType> {};

template<> struct hash<winrt::Windows::Devices::Usb::UsbDescriptor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::UsbDescriptor> {};

template<> struct hash<winrt::Windows::Devices::Usb::UsbDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::UsbDevice> {};

template<> struct hash<winrt::Windows::Devices::Usb::UsbDeviceClass> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::UsbDeviceClass> {};

template<> struct hash<winrt::Windows::Devices::Usb::UsbDeviceClasses> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::UsbDeviceClasses> {};

template<> struct hash<winrt::Windows::Devices::Usb::UsbDeviceDescriptor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::UsbDeviceDescriptor> {};

template<> struct hash<winrt::Windows::Devices::Usb::UsbEndpointDescriptor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::UsbEndpointDescriptor> {};

template<> struct hash<winrt::Windows::Devices::Usb::UsbInterface> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::UsbInterface> {};

template<> struct hash<winrt::Windows::Devices::Usb::UsbInterfaceDescriptor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::UsbInterfaceDescriptor> {};

template<> struct hash<winrt::Windows::Devices::Usb::UsbInterfaceSetting> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::UsbInterfaceSetting> {};

template<> struct hash<winrt::Windows::Devices::Usb::UsbInterruptInEndpointDescriptor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::UsbInterruptInEndpointDescriptor> {};

template<> struct hash<winrt::Windows::Devices::Usb::UsbInterruptInEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::UsbInterruptInEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Usb::UsbInterruptInPipe> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::UsbInterruptInPipe> {};

template<> struct hash<winrt::Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor> {};

template<> struct hash<winrt::Windows::Devices::Usb::UsbInterruptOutPipe> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::UsbInterruptOutPipe> {};

template<> struct hash<winrt::Windows::Devices::Usb::UsbSetupPacket> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Usb::UsbSetupPacket> {};

}

WINRT_WARNING_POP
