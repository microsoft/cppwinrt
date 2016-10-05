// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Devices.Usb.3.h"
#include "Windows.Devices.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::Usb::IUsbBulkInEndpointDescriptor> : produce_base<D, Windows::Devices::Usb::IUsbBulkInEndpointDescriptor>
{
    HRESULT __stdcall get_MaxPacketSize(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxPacketSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndpointNumber(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EndpointNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pipe(abi_arg_out<Windows::Devices::Usb::IUsbBulkInPipe> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Pipe());
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
    HRESULT __stdcall get_MaxTransferSizeBytes(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxTransferSizeBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndpointDescriptor(abi_arg_out<Windows::Devices::Usb::IUsbBulkInEndpointDescriptor> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EndpointDescriptor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ClearStallAsync(abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().ClearStallAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ReadOptions(Windows::Devices::Usb::UsbReadOptions value) noexcept override
    {
        try
        {
            this->shim().ReadOptions(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReadOptions(Windows::Devices::Usb::UsbReadOptions * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReadOptions());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FlushBuffer() noexcept override
    {
        try
        {
            this->shim().FlushBuffer();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InputStream(abi_arg_out<Windows::Storage::Streams::IInputStream> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InputStream());
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
    HRESULT __stdcall get_MaxPacketSize(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxPacketSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndpointNumber(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EndpointNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pipe(abi_arg_out<Windows::Devices::Usb::IUsbBulkOutPipe> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Pipe());
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
    HRESULT __stdcall get_EndpointDescriptor(abi_arg_out<Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EndpointDescriptor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ClearStallAsync(abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().ClearStallAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_WriteOptions(Windows::Devices::Usb::UsbWriteOptions value) noexcept override
    {
        try
        {
            this->shim().WriteOptions(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WriteOptions(Windows::Devices::Usb::UsbWriteOptions * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WriteOptions());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutputStream(abi_arg_out<Windows::Storage::Streams::IOutputStream> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OutputStream());
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
    HRESULT __stdcall get_UsbInterfaces(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterface>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UsbInterfaces());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ConfigurationDescriptor(abi_arg_out<Windows::Devices::Usb::IUsbConfigurationDescriptor> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ConfigurationDescriptor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Descriptors(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbDescriptor>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Descriptors());
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
    HRESULT __stdcall get_ConfigurationValue(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ConfigurationValue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxPowerMilliamps(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxPowerMilliamps());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelfPowered(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelfPowered());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteWakeup(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RemoteWakeup());
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
    HRESULT __stdcall abi_TryParse(abi_arg_in<Windows::Devices::Usb::IUsbDescriptor> descriptor, abi_arg_out<Windows::Devices::Usb::IUsbConfigurationDescriptor> parsed, bool * success) noexcept override
    {
        try
        {
            *success = detach(this->shim().TryParse(*reinterpret_cast<const Windows::Devices::Usb::UsbDescriptor *>(&descriptor), *parsed));
            return S_OK;
        }
        catch (...)
        {
            *parsed = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Parse(abi_arg_in<Windows::Devices::Usb::IUsbDescriptor> descriptor, abi_arg_out<Windows::Devices::Usb::IUsbConfigurationDescriptor> parsed) noexcept override
    {
        try
        {
            *parsed = detach(this->shim().Parse(*reinterpret_cast<const Windows::Devices::Usb::UsbDescriptor *>(&descriptor)));
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
    HRESULT __stdcall get_Direction(Windows::Devices::Usb::UsbTransferDirection * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Direction());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Direction(Windows::Devices::Usb::UsbTransferDirection value) noexcept override
    {
        try
        {
            this->shim().Direction(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ControlTransferType(Windows::Devices::Usb::UsbControlTransferType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ControlTransferType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ControlTransferType(Windows::Devices::Usb::UsbControlTransferType value) noexcept override
    {
        try
        {
            this->shim().ControlTransferType(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Recipient(Windows::Devices::Usb::UsbControlRecipient * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Recipient());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Recipient(Windows::Devices::Usb::UsbControlRecipient value) noexcept override
    {
        try
        {
            this->shim().Recipient(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AsByte(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AsByte());
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
    HRESULT __stdcall get_Length(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Length());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DescriptorType(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DescriptorType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ReadDescriptorBuffer(abi_arg_in<Windows::Storage::Streams::IBuffer> buffer) noexcept override
    {
        try
        {
            this->shim().ReadDescriptorBuffer(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&buffer));
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
    HRESULT __stdcall abi_SendControlOutTransferAsync(abi_arg_in<Windows::Devices::Usb::IUsbSetupPacket> setupPacket, abi_arg_in<Windows::Storage::Streams::IBuffer> buffer, abi_arg_out<Windows::Foundation::IAsyncOperation<uint32_t>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().SendControlOutTransferAsync(*reinterpret_cast<const Windows::Devices::Usb::UsbSetupPacket *>(&setupPacket), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&buffer)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SendControlOutTransferAsyncNoBuffer(abi_arg_in<Windows::Devices::Usb::IUsbSetupPacket> setupPacket, abi_arg_out<Windows::Foundation::IAsyncOperation<uint32_t>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().SendControlOutTransferAsync(*reinterpret_cast<const Windows::Devices::Usb::UsbSetupPacket *>(&setupPacket)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SendControlInTransferAsync(abi_arg_in<Windows::Devices::Usb::IUsbSetupPacket> setupPacket, abi_arg_in<Windows::Storage::Streams::IBuffer> buffer, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().SendControlInTransferAsync(*reinterpret_cast<const Windows::Devices::Usb::UsbSetupPacket *>(&setupPacket), *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&buffer)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SendControlInTransferAsyncNoBuffer(abi_arg_in<Windows::Devices::Usb::IUsbSetupPacket> setupPacket, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().SendControlInTransferAsync(*reinterpret_cast<const Windows::Devices::Usb::UsbSetupPacket *>(&setupPacket)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultInterface(abi_arg_out<Windows::Devices::Usb::IUsbInterface> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DefaultInterface());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceDescriptor(abi_arg_out<Windows::Devices::Usb::IUsbDeviceDescriptor> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceDescriptor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Configuration(abi_arg_out<Windows::Devices::Usb::IUsbConfiguration> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Configuration());
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
    HRESULT __stdcall get_ClassCode(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ClassCode());
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
            this->shim().ClassCode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SubclassCode(abi_arg_out<Windows::Foundation::IReference<uint8_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SubclassCode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SubclassCode(abi_arg_in<Windows::Foundation::IReference<uint8_t>> value) noexcept override
    {
        try
        {
            this->shim().SubclassCode(*reinterpret_cast<const Windows::Foundation::IReference<uint8_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProtocolCode(abi_arg_out<Windows::Foundation::IReference<uint8_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProtocolCode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ProtocolCode(abi_arg_in<Windows::Foundation::IReference<uint8_t>> value) noexcept override
    {
        try
        {
            this->shim().ProtocolCode(*reinterpret_cast<const Windows::Foundation::IReference<uint8_t> *>(&value));
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
    HRESULT __stdcall get_CdcControl(abi_arg_out<Windows::Devices::Usb::IUsbDeviceClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CdcControl());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Physical(abi_arg_out<Windows::Devices::Usb::IUsbDeviceClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Physical());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PersonalHealthcare(abi_arg_out<Windows::Devices::Usb::IUsbDeviceClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PersonalHealthcare());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ActiveSync(abi_arg_out<Windows::Devices::Usb::IUsbDeviceClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ActiveSync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PalmSync(abi_arg_out<Windows::Devices::Usb::IUsbDeviceClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PalmSync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceFirmwareUpdate(abi_arg_out<Windows::Devices::Usb::IUsbDeviceClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceFirmwareUpdate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Irda(abi_arg_out<Windows::Devices::Usb::IUsbDeviceClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Irda());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Measurement(abi_arg_out<Windows::Devices::Usb::IUsbDeviceClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Measurement());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VendorSpecific(abi_arg_out<Windows::Devices::Usb::IUsbDeviceClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VendorSpecific());
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
    HRESULT __stdcall get_BcdUsb(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BcdUsb());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxPacketSize0(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxPacketSize0());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VendorId(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VendorId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProductId(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProductId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BcdDeviceRevision(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BcdDeviceRevision());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumberOfConfigurations(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NumberOfConfigurations());
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
    HRESULT __stdcall abi_GetDeviceSelector(uint32_t vendorId, uint32_t productId, GUID winUsbInterfaceClass, abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeviceSelector(vendorId, productId, winUsbInterfaceClass));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceSelectorGuidOnly(GUID winUsbInterfaceClass, abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeviceSelector(winUsbInterfaceClass));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceSelectorVidPidOnly(uint32_t vendorId, uint32_t productId, abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeviceSelector(vendorId, productId));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceClassSelector(abi_arg_in<Windows::Devices::Usb::IUsbDeviceClass> usbClass, abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeviceClassSelector(*reinterpret_cast<const Windows::Devices::Usb::UsbDeviceClass *>(&usbClass)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromIdAsync(abi_arg_in<hstring> deviceId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Usb::UsbDevice>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().FromIdAsync(*reinterpret_cast<const hstring *>(&deviceId)));
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
    HRESULT __stdcall get_EndpointNumber(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EndpointNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Direction(Windows::Devices::Usb::UsbTransferDirection * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Direction());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndpointType(Windows::Devices::Usb::UsbEndpointType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EndpointType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AsBulkInEndpointDescriptor(abi_arg_out<Windows::Devices::Usb::IUsbBulkInEndpointDescriptor> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AsBulkInEndpointDescriptor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AsInterruptInEndpointDescriptor(abi_arg_out<Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AsInterruptInEndpointDescriptor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AsBulkOutEndpointDescriptor(abi_arg_out<Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AsBulkOutEndpointDescriptor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AsInterruptOutEndpointDescriptor(abi_arg_out<Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AsInterruptOutEndpointDescriptor());
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
    HRESULT __stdcall abi_TryParse(abi_arg_in<Windows::Devices::Usb::IUsbDescriptor> descriptor, abi_arg_out<Windows::Devices::Usb::IUsbEndpointDescriptor> parsed, bool * success) noexcept override
    {
        try
        {
            *success = detach(this->shim().TryParse(*reinterpret_cast<const Windows::Devices::Usb::UsbDescriptor *>(&descriptor), *parsed));
            return S_OK;
        }
        catch (...)
        {
            *parsed = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Parse(abi_arg_in<Windows::Devices::Usb::IUsbDescriptor> descriptor, abi_arg_out<Windows::Devices::Usb::IUsbEndpointDescriptor> parsed) noexcept override
    {
        try
        {
            *parsed = detach(this->shim().Parse(*reinterpret_cast<const Windows::Devices::Usb::UsbDescriptor *>(&descriptor)));
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
    HRESULT __stdcall get_BulkInPipes(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbBulkInPipe>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BulkInPipes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InterruptInPipes(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterruptInPipe>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InterruptInPipes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BulkOutPipes(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbBulkOutPipe>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BulkOutPipes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InterruptOutPipes(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterruptOutPipe>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InterruptOutPipes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InterfaceSettings(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterfaceSetting>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InterfaceSettings());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InterfaceNumber(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InterfaceNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Descriptors(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbDescriptor>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Descriptors());
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
    HRESULT __stdcall get_ClassCode(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ClassCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SubclassCode(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SubclassCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProtocolCode(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProtocolCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlternateSettingNumber(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AlternateSettingNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InterfaceNumber(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InterfaceNumber());
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
    HRESULT __stdcall abi_TryParse(abi_arg_in<Windows::Devices::Usb::IUsbDescriptor> descriptor, abi_arg_out<Windows::Devices::Usb::IUsbInterfaceDescriptor> parsed, bool * success) noexcept override
    {
        try
        {
            *success = detach(this->shim().TryParse(*reinterpret_cast<const Windows::Devices::Usb::UsbDescriptor *>(&descriptor), *parsed));
            return S_OK;
        }
        catch (...)
        {
            *parsed = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Parse(abi_arg_in<Windows::Devices::Usb::IUsbDescriptor> descriptor, abi_arg_out<Windows::Devices::Usb::IUsbInterfaceDescriptor> parsed) noexcept override
    {
        try
        {
            *parsed = detach(this->shim().Parse(*reinterpret_cast<const Windows::Devices::Usb::UsbDescriptor *>(&descriptor)));
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
    HRESULT __stdcall get_BulkInEndpoints(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbBulkInEndpointDescriptor>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BulkInEndpoints());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InterruptInEndpoints(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterruptInEndpointDescriptor>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InterruptInEndpoints());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BulkOutEndpoints(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbBulkOutEndpointDescriptor>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BulkOutEndpoints());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InterruptOutEndpoints(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InterruptOutEndpoints());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Selected(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Selected());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SelectSettingAsync(abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().SelectSettingAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InterfaceDescriptor(abi_arg_out<Windows::Devices::Usb::IUsbInterfaceDescriptor> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InterfaceDescriptor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Descriptors(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbDescriptor>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Descriptors());
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
    HRESULT __stdcall get_MaxPacketSize(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxPacketSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndpointNumber(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EndpointNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Interval(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Interval());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pipe(abi_arg_out<Windows::Devices::Usb::IUsbInterruptInPipe> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Pipe());
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
    HRESULT __stdcall get_InterruptData(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InterruptData());
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
    HRESULT __stdcall get_EndpointDescriptor(abi_arg_out<Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EndpointDescriptor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ClearStallAsync(abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().ClearStallAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DataReceived(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Usb::UsbInterruptInPipe, Windows::Devices::Usb::UsbInterruptInEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().DataReceived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Usb::UsbInterruptInPipe, Windows::Devices::Usb::UsbInterruptInEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DataReceived(event_token token) noexcept override
    {
        try
        {
            this->shim().DataReceived(token);
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
    HRESULT __stdcall get_MaxPacketSize(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxPacketSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndpointNumber(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EndpointNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Interval(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Interval());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pipe(abi_arg_out<Windows::Devices::Usb::IUsbInterruptOutPipe> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Pipe());
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
    HRESULT __stdcall get_EndpointDescriptor(abi_arg_out<Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EndpointDescriptor());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ClearStallAsync(abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().ClearStallAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_WriteOptions(Windows::Devices::Usb::UsbWriteOptions value) noexcept override
    {
        try
        {
            this->shim().WriteOptions(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WriteOptions(Windows::Devices::Usb::UsbWriteOptions * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WriteOptions());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OutputStream(abi_arg_out<Windows::Storage::Streams::IOutputStream> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OutputStream());
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
    HRESULT __stdcall get_RequestType(abi_arg_out<Windows::Devices::Usb::IUsbControlRequestType> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RequestType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RequestType(abi_arg_in<Windows::Devices::Usb::IUsbControlRequestType> value) noexcept override
    {
        try
        {
            this->shim().RequestType(*reinterpret_cast<const Windows::Devices::Usb::UsbControlRequestType *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Request(uint8_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Request());
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
            this->shim().Request(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Value(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Value());
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
            this->shim().Value(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Index(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Index());
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
            this->shim().Index(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Length(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Length());
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
    HRESULT __stdcall abi_CreateWithEightByteBuffer(abi_arg_in<Windows::Storage::Streams::IBuffer> eightByteBuffer, abi_arg_out<Windows::Devices::Usb::IUsbSetupPacket> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateWithEightByteBuffer(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&eightByteBuffer)));
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

namespace Windows::Devices::Usb {

template <typename D> Windows::Devices::Usb::UsbTransferDirection impl_IUsbControlRequestType<D>::Direction() const
{
    Windows::Devices::Usb::UsbTransferDirection value {};
    check_hresult(static_cast<const IUsbControlRequestType &>(static_cast<const D &>(*this))->get_Direction(&value));
    return value;
}

template <typename D> void impl_IUsbControlRequestType<D>::Direction(Windows::Devices::Usb::UsbTransferDirection value) const
{
    check_hresult(static_cast<const IUsbControlRequestType &>(static_cast<const D &>(*this))->put_Direction(value));
}

template <typename D> Windows::Devices::Usb::UsbControlTransferType impl_IUsbControlRequestType<D>::ControlTransferType() const
{
    Windows::Devices::Usb::UsbControlTransferType value {};
    check_hresult(static_cast<const IUsbControlRequestType &>(static_cast<const D &>(*this))->get_ControlTransferType(&value));
    return value;
}

template <typename D> void impl_IUsbControlRequestType<D>::ControlTransferType(Windows::Devices::Usb::UsbControlTransferType value) const
{
    check_hresult(static_cast<const IUsbControlRequestType &>(static_cast<const D &>(*this))->put_ControlTransferType(value));
}

template <typename D> Windows::Devices::Usb::UsbControlRecipient impl_IUsbControlRequestType<D>::Recipient() const
{
    Windows::Devices::Usb::UsbControlRecipient value {};
    check_hresult(static_cast<const IUsbControlRequestType &>(static_cast<const D &>(*this))->get_Recipient(&value));
    return value;
}

template <typename D> void impl_IUsbControlRequestType<D>::Recipient(Windows::Devices::Usb::UsbControlRecipient value) const
{
    check_hresult(static_cast<const IUsbControlRequestType &>(static_cast<const D &>(*this))->put_Recipient(value));
}

template <typename D> uint8_t impl_IUsbControlRequestType<D>::AsByte() const
{
    uint8_t value {};
    check_hresult(static_cast<const IUsbControlRequestType &>(static_cast<const D &>(*this))->get_AsByte(&value));
    return value;
}

template <typename D> void impl_IUsbControlRequestType<D>::AsByte(uint8_t value) const
{
    check_hresult(static_cast<const IUsbControlRequestType &>(static_cast<const D &>(*this))->put_AsByte(value));
}

template <typename D> Windows::Devices::Usb::UsbSetupPacket impl_IUsbSetupPacketFactory<D>::CreateWithEightByteBuffer(const Windows::Storage::Streams::IBuffer & eightByteBuffer) const
{
    Windows::Devices::Usb::UsbSetupPacket value { nullptr };
    check_hresult(static_cast<const IUsbSetupPacketFactory &>(static_cast<const D &>(*this))->abi_CreateWithEightByteBuffer(get(eightByteBuffer), put(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbControlRequestType impl_IUsbSetupPacket<D>::RequestType() const
{
    Windows::Devices::Usb::UsbControlRequestType value { nullptr };
    check_hresult(static_cast<const IUsbSetupPacket &>(static_cast<const D &>(*this))->get_RequestType(put(value)));
    return value;
}

template <typename D> void impl_IUsbSetupPacket<D>::RequestType(const Windows::Devices::Usb::UsbControlRequestType & value) const
{
    check_hresult(static_cast<const IUsbSetupPacket &>(static_cast<const D &>(*this))->put_RequestType(get(value)));
}

template <typename D> uint8_t impl_IUsbSetupPacket<D>::Request() const
{
    uint8_t value {};
    check_hresult(static_cast<const IUsbSetupPacket &>(static_cast<const D &>(*this))->get_Request(&value));
    return value;
}

template <typename D> void impl_IUsbSetupPacket<D>::Request(uint8_t value) const
{
    check_hresult(static_cast<const IUsbSetupPacket &>(static_cast<const D &>(*this))->put_Request(value));
}

template <typename D> uint32_t impl_IUsbSetupPacket<D>::Value() const
{
    uint32_t value {};
    check_hresult(static_cast<const IUsbSetupPacket &>(static_cast<const D &>(*this))->get_Value(&value));
    return value;
}

template <typename D> void impl_IUsbSetupPacket<D>::Value(uint32_t value) const
{
    check_hresult(static_cast<const IUsbSetupPacket &>(static_cast<const D &>(*this))->put_Value(value));
}

template <typename D> uint32_t impl_IUsbSetupPacket<D>::Index() const
{
    uint32_t value {};
    check_hresult(static_cast<const IUsbSetupPacket &>(static_cast<const D &>(*this))->get_Index(&value));
    return value;
}

template <typename D> void impl_IUsbSetupPacket<D>::Index(uint32_t value) const
{
    check_hresult(static_cast<const IUsbSetupPacket &>(static_cast<const D &>(*this))->put_Index(value));
}

template <typename D> uint32_t impl_IUsbSetupPacket<D>::Length() const
{
    uint32_t value {};
    check_hresult(static_cast<const IUsbSetupPacket &>(static_cast<const D &>(*this))->get_Length(&value));
    return value;
}

template <typename D> void impl_IUsbSetupPacket<D>::Length(uint32_t value) const
{
    check_hresult(static_cast<const IUsbSetupPacket &>(static_cast<const D &>(*this))->put_Length(value));
}

template <typename D> uint8_t impl_IUsbDeviceClass<D>::ClassCode() const
{
    uint8_t value {};
    check_hresult(static_cast<const IUsbDeviceClass &>(static_cast<const D &>(*this))->get_ClassCode(&value));
    return value;
}

template <typename D> void impl_IUsbDeviceClass<D>::ClassCode(uint8_t value) const
{
    check_hresult(static_cast<const IUsbDeviceClass &>(static_cast<const D &>(*this))->put_ClassCode(value));
}

template <typename D> Windows::Foundation::IReference<uint8_t> impl_IUsbDeviceClass<D>::SubclassCode() const
{
    Windows::Foundation::IReference<uint8_t> value;
    check_hresult(static_cast<const IUsbDeviceClass &>(static_cast<const D &>(*this))->get_SubclassCode(put(value)));
    return value;
}

template <typename D> void impl_IUsbDeviceClass<D>::SubclassCode(const Windows::Foundation::IReference<uint8_t> & value) const
{
    check_hresult(static_cast<const IUsbDeviceClass &>(static_cast<const D &>(*this))->put_SubclassCode(get(value)));
}

template <typename D> Windows::Foundation::IReference<uint8_t> impl_IUsbDeviceClass<D>::ProtocolCode() const
{
    Windows::Foundation::IReference<uint8_t> value;
    check_hresult(static_cast<const IUsbDeviceClass &>(static_cast<const D &>(*this))->get_ProtocolCode(put(value)));
    return value;
}

template <typename D> void impl_IUsbDeviceClass<D>::ProtocolCode(const Windows::Foundation::IReference<uint8_t> & value) const
{
    check_hresult(static_cast<const IUsbDeviceClass &>(static_cast<const D &>(*this))->put_ProtocolCode(get(value)));
}

template <typename D> Windows::Devices::Usb::UsbDeviceClass impl_IUsbDeviceClassesStatics<D>::CdcControl() const
{
    Windows::Devices::Usb::UsbDeviceClass value { nullptr };
    check_hresult(static_cast<const IUsbDeviceClassesStatics &>(static_cast<const D &>(*this))->get_CdcControl(put(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbDeviceClass impl_IUsbDeviceClassesStatics<D>::Physical() const
{
    Windows::Devices::Usb::UsbDeviceClass value { nullptr };
    check_hresult(static_cast<const IUsbDeviceClassesStatics &>(static_cast<const D &>(*this))->get_Physical(put(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbDeviceClass impl_IUsbDeviceClassesStatics<D>::PersonalHealthcare() const
{
    Windows::Devices::Usb::UsbDeviceClass value { nullptr };
    check_hresult(static_cast<const IUsbDeviceClassesStatics &>(static_cast<const D &>(*this))->get_PersonalHealthcare(put(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbDeviceClass impl_IUsbDeviceClassesStatics<D>::ActiveSync() const
{
    Windows::Devices::Usb::UsbDeviceClass value { nullptr };
    check_hresult(static_cast<const IUsbDeviceClassesStatics &>(static_cast<const D &>(*this))->get_ActiveSync(put(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbDeviceClass impl_IUsbDeviceClassesStatics<D>::PalmSync() const
{
    Windows::Devices::Usb::UsbDeviceClass value { nullptr };
    check_hresult(static_cast<const IUsbDeviceClassesStatics &>(static_cast<const D &>(*this))->get_PalmSync(put(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbDeviceClass impl_IUsbDeviceClassesStatics<D>::DeviceFirmwareUpdate() const
{
    Windows::Devices::Usb::UsbDeviceClass value { nullptr };
    check_hresult(static_cast<const IUsbDeviceClassesStatics &>(static_cast<const D &>(*this))->get_DeviceFirmwareUpdate(put(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbDeviceClass impl_IUsbDeviceClassesStatics<D>::Irda() const
{
    Windows::Devices::Usb::UsbDeviceClass value { nullptr };
    check_hresult(static_cast<const IUsbDeviceClassesStatics &>(static_cast<const D &>(*this))->get_Irda(put(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbDeviceClass impl_IUsbDeviceClassesStatics<D>::Measurement() const
{
    Windows::Devices::Usb::UsbDeviceClass value { nullptr };
    check_hresult(static_cast<const IUsbDeviceClassesStatics &>(static_cast<const D &>(*this))->get_Measurement(put(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbDeviceClass impl_IUsbDeviceClassesStatics<D>::VendorSpecific() const
{
    Windows::Devices::Usb::UsbDeviceClass value { nullptr };
    check_hresult(static_cast<const IUsbDeviceClassesStatics &>(static_cast<const D &>(*this))->get_VendorSpecific(put(value)));
    return value;
}

template <typename D> hstring impl_IUsbDeviceStatics<D>::GetDeviceSelector(uint32_t vendorId, uint32_t productId, GUID winUsbInterfaceClass) const
{
    hstring value;
    check_hresult(static_cast<const IUsbDeviceStatics &>(static_cast<const D &>(*this))->abi_GetDeviceSelector(vendorId, productId, winUsbInterfaceClass, put(value)));
    return value;
}

template <typename D> hstring impl_IUsbDeviceStatics<D>::GetDeviceSelector(GUID winUsbInterfaceClass) const
{
    hstring value;
    check_hresult(static_cast<const IUsbDeviceStatics &>(static_cast<const D &>(*this))->abi_GetDeviceSelectorGuidOnly(winUsbInterfaceClass, put(value)));
    return value;
}

template <typename D> hstring impl_IUsbDeviceStatics<D>::GetDeviceSelector(uint32_t vendorId, uint32_t productId) const
{
    hstring value;
    check_hresult(static_cast<const IUsbDeviceStatics &>(static_cast<const D &>(*this))->abi_GetDeviceSelectorVidPidOnly(vendorId, productId, put(value)));
    return value;
}

template <typename D> hstring impl_IUsbDeviceStatics<D>::GetDeviceClassSelector(const Windows::Devices::Usb::UsbDeviceClass & usbClass) const
{
    hstring value;
    check_hresult(static_cast<const IUsbDeviceStatics &>(static_cast<const D &>(*this))->abi_GetDeviceClassSelector(get(usbClass), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Usb::UsbDevice> impl_IUsbDeviceStatics<D>::FromIdAsync(hstring_ref deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Usb::UsbDevice> operation;
    check_hresult(static_cast<const IUsbDeviceStatics &>(static_cast<const D &>(*this))->abi_FromIdAsync(get(deviceId), put(operation)));
    return operation;
}

template <typename D> uint32_t impl_IUsbDeviceDescriptor<D>::BcdUsb() const
{
    uint32_t value {};
    check_hresult(static_cast<const IUsbDeviceDescriptor &>(static_cast<const D &>(*this))->get_BcdUsb(&value));
    return value;
}

template <typename D> uint8_t impl_IUsbDeviceDescriptor<D>::MaxPacketSize0() const
{
    uint8_t value {};
    check_hresult(static_cast<const IUsbDeviceDescriptor &>(static_cast<const D &>(*this))->get_MaxPacketSize0(&value));
    return value;
}

template <typename D> uint32_t impl_IUsbDeviceDescriptor<D>::VendorId() const
{
    uint32_t value {};
    check_hresult(static_cast<const IUsbDeviceDescriptor &>(static_cast<const D &>(*this))->get_VendorId(&value));
    return value;
}

template <typename D> uint32_t impl_IUsbDeviceDescriptor<D>::ProductId() const
{
    uint32_t value {};
    check_hresult(static_cast<const IUsbDeviceDescriptor &>(static_cast<const D &>(*this))->get_ProductId(&value));
    return value;
}

template <typename D> uint32_t impl_IUsbDeviceDescriptor<D>::BcdDeviceRevision() const
{
    uint32_t value {};
    check_hresult(static_cast<const IUsbDeviceDescriptor &>(static_cast<const D &>(*this))->get_BcdDeviceRevision(&value));
    return value;
}

template <typename D> uint8_t impl_IUsbDeviceDescriptor<D>::NumberOfConfigurations() const
{
    uint8_t value {};
    check_hresult(static_cast<const IUsbDeviceDescriptor &>(static_cast<const D &>(*this))->get_NumberOfConfigurations(&value));
    return value;
}

template <typename D> uint8_t impl_IUsbConfigurationDescriptor<D>::ConfigurationValue() const
{
    uint8_t value {};
    check_hresult(static_cast<const IUsbConfigurationDescriptor &>(static_cast<const D &>(*this))->get_ConfigurationValue(&value));
    return value;
}

template <typename D> uint32_t impl_IUsbConfigurationDescriptor<D>::MaxPowerMilliamps() const
{
    uint32_t value {};
    check_hresult(static_cast<const IUsbConfigurationDescriptor &>(static_cast<const D &>(*this))->get_MaxPowerMilliamps(&value));
    return value;
}

template <typename D> bool impl_IUsbConfigurationDescriptor<D>::SelfPowered() const
{
    bool value {};
    check_hresult(static_cast<const IUsbConfigurationDescriptor &>(static_cast<const D &>(*this))->get_SelfPowered(&value));
    return value;
}

template <typename D> bool impl_IUsbConfigurationDescriptor<D>::RemoteWakeup() const
{
    bool value {};
    check_hresult(static_cast<const IUsbConfigurationDescriptor &>(static_cast<const D &>(*this))->get_RemoteWakeup(&value));
    return value;
}

template <typename D> bool impl_IUsbConfigurationDescriptorStatics<D>::TryParse(const Windows::Devices::Usb::UsbDescriptor & descriptor, Windows::Devices::Usb::UsbConfigurationDescriptor & parsed) const
{
    bool success {};
    check_hresult(static_cast<const IUsbConfigurationDescriptorStatics &>(static_cast<const D &>(*this))->abi_TryParse(get(descriptor), put(parsed), &success));
    return success;
}

template <typename D> Windows::Devices::Usb::UsbConfigurationDescriptor impl_IUsbConfigurationDescriptorStatics<D>::Parse(const Windows::Devices::Usb::UsbDescriptor & descriptor) const
{
    Windows::Devices::Usb::UsbConfigurationDescriptor parsed { nullptr };
    check_hresult(static_cast<const IUsbConfigurationDescriptorStatics &>(static_cast<const D &>(*this))->abi_Parse(get(descriptor), put(parsed)));
    return parsed;
}

template <typename D> uint8_t impl_IUsbInterfaceDescriptor<D>::ClassCode() const
{
    uint8_t value {};
    check_hresult(static_cast<const IUsbInterfaceDescriptor &>(static_cast<const D &>(*this))->get_ClassCode(&value));
    return value;
}

template <typename D> uint8_t impl_IUsbInterfaceDescriptor<D>::SubclassCode() const
{
    uint8_t value {};
    check_hresult(static_cast<const IUsbInterfaceDescriptor &>(static_cast<const D &>(*this))->get_SubclassCode(&value));
    return value;
}

template <typename D> uint8_t impl_IUsbInterfaceDescriptor<D>::ProtocolCode() const
{
    uint8_t value {};
    check_hresult(static_cast<const IUsbInterfaceDescriptor &>(static_cast<const D &>(*this))->get_ProtocolCode(&value));
    return value;
}

template <typename D> uint8_t impl_IUsbInterfaceDescriptor<D>::AlternateSettingNumber() const
{
    uint8_t value {};
    check_hresult(static_cast<const IUsbInterfaceDescriptor &>(static_cast<const D &>(*this))->get_AlternateSettingNumber(&value));
    return value;
}

template <typename D> uint8_t impl_IUsbInterfaceDescriptor<D>::InterfaceNumber() const
{
    uint8_t value {};
    check_hresult(static_cast<const IUsbInterfaceDescriptor &>(static_cast<const D &>(*this))->get_InterfaceNumber(&value));
    return value;
}

template <typename D> bool impl_IUsbInterfaceDescriptorStatics<D>::TryParse(const Windows::Devices::Usb::UsbDescriptor & descriptor, Windows::Devices::Usb::UsbInterfaceDescriptor & parsed) const
{
    bool success {};
    check_hresult(static_cast<const IUsbInterfaceDescriptorStatics &>(static_cast<const D &>(*this))->abi_TryParse(get(descriptor), put(parsed), &success));
    return success;
}

template <typename D> Windows::Devices::Usb::UsbInterfaceDescriptor impl_IUsbInterfaceDescriptorStatics<D>::Parse(const Windows::Devices::Usb::UsbDescriptor & descriptor) const
{
    Windows::Devices::Usb::UsbInterfaceDescriptor parsed { nullptr };
    check_hresult(static_cast<const IUsbInterfaceDescriptorStatics &>(static_cast<const D &>(*this))->abi_Parse(get(descriptor), put(parsed)));
    return parsed;
}

template <typename D> uint8_t impl_IUsbEndpointDescriptor<D>::EndpointNumber() const
{
    uint8_t value {};
    check_hresult(static_cast<const IUsbEndpointDescriptor &>(static_cast<const D &>(*this))->get_EndpointNumber(&value));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbTransferDirection impl_IUsbEndpointDescriptor<D>::Direction() const
{
    Windows::Devices::Usb::UsbTransferDirection value {};
    check_hresult(static_cast<const IUsbEndpointDescriptor &>(static_cast<const D &>(*this))->get_Direction(&value));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbEndpointType impl_IUsbEndpointDescriptor<D>::EndpointType() const
{
    Windows::Devices::Usb::UsbEndpointType value {};
    check_hresult(static_cast<const IUsbEndpointDescriptor &>(static_cast<const D &>(*this))->get_EndpointType(&value));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbBulkInEndpointDescriptor impl_IUsbEndpointDescriptor<D>::AsBulkInEndpointDescriptor() const
{
    Windows::Devices::Usb::UsbBulkInEndpointDescriptor value { nullptr };
    check_hresult(static_cast<const IUsbEndpointDescriptor &>(static_cast<const D &>(*this))->get_AsBulkInEndpointDescriptor(put(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbInterruptInEndpointDescriptor impl_IUsbEndpointDescriptor<D>::AsInterruptInEndpointDescriptor() const
{
    Windows::Devices::Usb::UsbInterruptInEndpointDescriptor value { nullptr };
    check_hresult(static_cast<const IUsbEndpointDescriptor &>(static_cast<const D &>(*this))->get_AsInterruptInEndpointDescriptor(put(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbBulkOutEndpointDescriptor impl_IUsbEndpointDescriptor<D>::AsBulkOutEndpointDescriptor() const
{
    Windows::Devices::Usb::UsbBulkOutEndpointDescriptor value { nullptr };
    check_hresult(static_cast<const IUsbEndpointDescriptor &>(static_cast<const D &>(*this))->get_AsBulkOutEndpointDescriptor(put(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor impl_IUsbEndpointDescriptor<D>::AsInterruptOutEndpointDescriptor() const
{
    Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor value { nullptr };
    check_hresult(static_cast<const IUsbEndpointDescriptor &>(static_cast<const D &>(*this))->get_AsInterruptOutEndpointDescriptor(put(value)));
    return value;
}

template <typename D> bool impl_IUsbEndpointDescriptorStatics<D>::TryParse(const Windows::Devices::Usb::UsbDescriptor & descriptor, Windows::Devices::Usb::UsbEndpointDescriptor & parsed) const
{
    bool success {};
    check_hresult(static_cast<const IUsbEndpointDescriptorStatics &>(static_cast<const D &>(*this))->abi_TryParse(get(descriptor), put(parsed), &success));
    return success;
}

template <typename D> Windows::Devices::Usb::UsbEndpointDescriptor impl_IUsbEndpointDescriptorStatics<D>::Parse(const Windows::Devices::Usb::UsbDescriptor & descriptor) const
{
    Windows::Devices::Usb::UsbEndpointDescriptor parsed { nullptr };
    check_hresult(static_cast<const IUsbEndpointDescriptorStatics &>(static_cast<const D &>(*this))->abi_Parse(get(descriptor), put(parsed)));
    return parsed;
}

template <typename D> uint8_t impl_IUsbDescriptor<D>::Length() const
{
    uint8_t value {};
    check_hresult(static_cast<const IUsbDescriptor &>(static_cast<const D &>(*this))->get_Length(&value));
    return value;
}

template <typename D> uint8_t impl_IUsbDescriptor<D>::DescriptorType() const
{
    uint8_t value {};
    check_hresult(static_cast<const IUsbDescriptor &>(static_cast<const D &>(*this))->get_DescriptorType(&value));
    return value;
}

template <typename D> void impl_IUsbDescriptor<D>::ReadDescriptorBuffer(const Windows::Storage::Streams::IBuffer & buffer) const
{
    check_hresult(static_cast<const IUsbDescriptor &>(static_cast<const D &>(*this))->abi_ReadDescriptorBuffer(get(buffer)));
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IUsbInterruptInEventArgs<D>::InterruptData() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IUsbInterruptInEventArgs &>(static_cast<const D &>(*this))->get_InterruptData(put(value)));
    return value;
}

template <typename D> uint32_t impl_IUsbBulkInPipe<D>::MaxTransferSizeBytes() const
{
    uint32_t value {};
    check_hresult(static_cast<const IUsbBulkInPipe &>(static_cast<const D &>(*this))->get_MaxTransferSizeBytes(&value));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbBulkInEndpointDescriptor impl_IUsbBulkInPipe<D>::EndpointDescriptor() const
{
    Windows::Devices::Usb::UsbBulkInEndpointDescriptor value { nullptr };
    check_hresult(static_cast<const IUsbBulkInPipe &>(static_cast<const D &>(*this))->get_EndpointDescriptor(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IUsbBulkInPipe<D>::ClearStallAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IUsbBulkInPipe &>(static_cast<const D &>(*this))->abi_ClearStallAsync(put(operation)));
    return operation;
}

template <typename D> void impl_IUsbBulkInPipe<D>::ReadOptions(Windows::Devices::Usb::UsbReadOptions value) const
{
    check_hresult(static_cast<const IUsbBulkInPipe &>(static_cast<const D &>(*this))->put_ReadOptions(value));
}

template <typename D> Windows::Devices::Usb::UsbReadOptions impl_IUsbBulkInPipe<D>::ReadOptions() const
{
    Windows::Devices::Usb::UsbReadOptions value {};
    check_hresult(static_cast<const IUsbBulkInPipe &>(static_cast<const D &>(*this))->get_ReadOptions(&value));
    return value;
}

template <typename D> void impl_IUsbBulkInPipe<D>::FlushBuffer() const
{
    check_hresult(static_cast<const IUsbBulkInPipe &>(static_cast<const D &>(*this))->abi_FlushBuffer());
}

template <typename D> Windows::Storage::Streams::IInputStream impl_IUsbBulkInPipe<D>::InputStream() const
{
    Windows::Storage::Streams::IInputStream value;
    check_hresult(static_cast<const IUsbBulkInPipe &>(static_cast<const D &>(*this))->get_InputStream(put(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbInterruptInEndpointDescriptor impl_IUsbInterruptInPipe<D>::EndpointDescriptor() const
{
    Windows::Devices::Usb::UsbInterruptInEndpointDescriptor value { nullptr };
    check_hresult(static_cast<const IUsbInterruptInPipe &>(static_cast<const D &>(*this))->get_EndpointDescriptor(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IUsbInterruptInPipe<D>::ClearStallAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IUsbInterruptInPipe &>(static_cast<const D &>(*this))->abi_ClearStallAsync(put(operation)));
    return operation;
}

template <typename D> event_token impl_IUsbInterruptInPipe<D>::DataReceived(const Windows::Foundation::TypedEventHandler<Windows::Devices::Usb::UsbInterruptInPipe, Windows::Devices::Usb::UsbInterruptInEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IUsbInterruptInPipe &>(static_cast<const D &>(*this))->add_DataReceived(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IUsbInterruptInPipe> impl_IUsbInterruptInPipe<D>::DataReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Usb::UsbInterruptInPipe, Windows::Devices::Usb::UsbInterruptInEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IUsbInterruptInPipe>(this, &ABI::Windows::Devices::Usb::IUsbInterruptInPipe::remove_DataReceived, DataReceived(handler));
}

template <typename D> void impl_IUsbInterruptInPipe<D>::DataReceived(event_token token) const
{
    check_hresult(static_cast<const IUsbInterruptInPipe &>(static_cast<const D &>(*this))->remove_DataReceived(token));
}

template <typename D> Windows::Devices::Usb::UsbBulkOutEndpointDescriptor impl_IUsbBulkOutPipe<D>::EndpointDescriptor() const
{
    Windows::Devices::Usb::UsbBulkOutEndpointDescriptor value { nullptr };
    check_hresult(static_cast<const IUsbBulkOutPipe &>(static_cast<const D &>(*this))->get_EndpointDescriptor(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IUsbBulkOutPipe<D>::ClearStallAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IUsbBulkOutPipe &>(static_cast<const D &>(*this))->abi_ClearStallAsync(put(operation)));
    return operation;
}

template <typename D> void impl_IUsbBulkOutPipe<D>::WriteOptions(Windows::Devices::Usb::UsbWriteOptions value) const
{
    check_hresult(static_cast<const IUsbBulkOutPipe &>(static_cast<const D &>(*this))->put_WriteOptions(value));
}

template <typename D> Windows::Devices::Usb::UsbWriteOptions impl_IUsbBulkOutPipe<D>::WriteOptions() const
{
    Windows::Devices::Usb::UsbWriteOptions value {};
    check_hresult(static_cast<const IUsbBulkOutPipe &>(static_cast<const D &>(*this))->get_WriteOptions(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IOutputStream impl_IUsbBulkOutPipe<D>::OutputStream() const
{
    Windows::Storage::Streams::IOutputStream value;
    check_hresult(static_cast<const IUsbBulkOutPipe &>(static_cast<const D &>(*this))->get_OutputStream(put(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor impl_IUsbInterruptOutPipe<D>::EndpointDescriptor() const
{
    Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor value { nullptr };
    check_hresult(static_cast<const IUsbInterruptOutPipe &>(static_cast<const D &>(*this))->get_EndpointDescriptor(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IUsbInterruptOutPipe<D>::ClearStallAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IUsbInterruptOutPipe &>(static_cast<const D &>(*this))->abi_ClearStallAsync(put(operation)));
    return operation;
}

template <typename D> void impl_IUsbInterruptOutPipe<D>::WriteOptions(Windows::Devices::Usb::UsbWriteOptions value) const
{
    check_hresult(static_cast<const IUsbInterruptOutPipe &>(static_cast<const D &>(*this))->put_WriteOptions(value));
}

template <typename D> Windows::Devices::Usb::UsbWriteOptions impl_IUsbInterruptOutPipe<D>::WriteOptions() const
{
    Windows::Devices::Usb::UsbWriteOptions value {};
    check_hresult(static_cast<const IUsbInterruptOutPipe &>(static_cast<const D &>(*this))->get_WriteOptions(&value));
    return value;
}

template <typename D> Windows::Storage::Streams::IOutputStream impl_IUsbInterruptOutPipe<D>::OutputStream() const
{
    Windows::Storage::Streams::IOutputStream value;
    check_hresult(static_cast<const IUsbInterruptOutPipe &>(static_cast<const D &>(*this))->get_OutputStream(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterface> impl_IUsbConfiguration<D>::UsbInterfaces() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterface> value;
    check_hresult(static_cast<const IUsbConfiguration &>(static_cast<const D &>(*this))->get_UsbInterfaces(put(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbConfigurationDescriptor impl_IUsbConfiguration<D>::ConfigurationDescriptor() const
{
    Windows::Devices::Usb::UsbConfigurationDescriptor value { nullptr };
    check_hresult(static_cast<const IUsbConfiguration &>(static_cast<const D &>(*this))->get_ConfigurationDescriptor(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbDescriptor> impl_IUsbConfiguration<D>::Descriptors() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbDescriptor> value;
    check_hresult(static_cast<const IUsbConfiguration &>(static_cast<const D &>(*this))->get_Descriptors(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbBulkInPipe> impl_IUsbInterface<D>::BulkInPipes() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbBulkInPipe> value;
    check_hresult(static_cast<const IUsbInterface &>(static_cast<const D &>(*this))->get_BulkInPipes(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterruptInPipe> impl_IUsbInterface<D>::InterruptInPipes() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterruptInPipe> value;
    check_hresult(static_cast<const IUsbInterface &>(static_cast<const D &>(*this))->get_InterruptInPipes(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbBulkOutPipe> impl_IUsbInterface<D>::BulkOutPipes() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbBulkOutPipe> value;
    check_hresult(static_cast<const IUsbInterface &>(static_cast<const D &>(*this))->get_BulkOutPipes(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterruptOutPipe> impl_IUsbInterface<D>::InterruptOutPipes() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterruptOutPipe> value;
    check_hresult(static_cast<const IUsbInterface &>(static_cast<const D &>(*this))->get_InterruptOutPipes(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterfaceSetting> impl_IUsbInterface<D>::InterfaceSettings() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterfaceSetting> value;
    check_hresult(static_cast<const IUsbInterface &>(static_cast<const D &>(*this))->get_InterfaceSettings(put(value)));
    return value;
}

template <typename D> uint8_t impl_IUsbInterface<D>::InterfaceNumber() const
{
    uint8_t value {};
    check_hresult(static_cast<const IUsbInterface &>(static_cast<const D &>(*this))->get_InterfaceNumber(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbDescriptor> impl_IUsbInterface<D>::Descriptors() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbDescriptor> value;
    check_hresult(static_cast<const IUsbInterface &>(static_cast<const D &>(*this))->get_Descriptors(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbBulkInEndpointDescriptor> impl_IUsbInterfaceSetting<D>::BulkInEndpoints() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbBulkInEndpointDescriptor> value;
    check_hresult(static_cast<const IUsbInterfaceSetting &>(static_cast<const D &>(*this))->get_BulkInEndpoints(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterruptInEndpointDescriptor> impl_IUsbInterfaceSetting<D>::InterruptInEndpoints() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterruptInEndpointDescriptor> value;
    check_hresult(static_cast<const IUsbInterfaceSetting &>(static_cast<const D &>(*this))->get_InterruptInEndpoints(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbBulkOutEndpointDescriptor> impl_IUsbInterfaceSetting<D>::BulkOutEndpoints() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbBulkOutEndpointDescriptor> value;
    check_hresult(static_cast<const IUsbInterfaceSetting &>(static_cast<const D &>(*this))->get_BulkOutEndpoints(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor> impl_IUsbInterfaceSetting<D>::InterruptOutEndpoints() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbInterruptOutEndpointDescriptor> value;
    check_hresult(static_cast<const IUsbInterfaceSetting &>(static_cast<const D &>(*this))->get_InterruptOutEndpoints(put(value)));
    return value;
}

template <typename D> bool impl_IUsbInterfaceSetting<D>::Selected() const
{
    bool value {};
    check_hresult(static_cast<const IUsbInterfaceSetting &>(static_cast<const D &>(*this))->get_Selected(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IUsbInterfaceSetting<D>::SelectSettingAsync() const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(static_cast<const IUsbInterfaceSetting &>(static_cast<const D &>(*this))->abi_SelectSettingAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Devices::Usb::UsbInterfaceDescriptor impl_IUsbInterfaceSetting<D>::InterfaceDescriptor() const
{
    Windows::Devices::Usb::UsbInterfaceDescriptor value { nullptr };
    check_hresult(static_cast<const IUsbInterfaceSetting &>(static_cast<const D &>(*this))->get_InterfaceDescriptor(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbDescriptor> impl_IUsbInterfaceSetting<D>::Descriptors() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Usb::UsbDescriptor> value;
    check_hresult(static_cast<const IUsbInterfaceSetting &>(static_cast<const D &>(*this))->get_Descriptors(put(value)));
    return value;
}

template <typename D> uint32_t impl_IUsbBulkInEndpointDescriptor<D>::MaxPacketSize() const
{
    uint32_t value {};
    check_hresult(static_cast<const IUsbBulkInEndpointDescriptor &>(static_cast<const D &>(*this))->get_MaxPacketSize(&value));
    return value;
}

template <typename D> uint8_t impl_IUsbBulkInEndpointDescriptor<D>::EndpointNumber() const
{
    uint8_t value {};
    check_hresult(static_cast<const IUsbBulkInEndpointDescriptor &>(static_cast<const D &>(*this))->get_EndpointNumber(&value));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbBulkInPipe impl_IUsbBulkInEndpointDescriptor<D>::Pipe() const
{
    Windows::Devices::Usb::UsbBulkInPipe value { nullptr };
    check_hresult(static_cast<const IUsbBulkInEndpointDescriptor &>(static_cast<const D &>(*this))->get_Pipe(put(value)));
    return value;
}

template <typename D> uint32_t impl_IUsbInterruptInEndpointDescriptor<D>::MaxPacketSize() const
{
    uint32_t value {};
    check_hresult(static_cast<const IUsbInterruptInEndpointDescriptor &>(static_cast<const D &>(*this))->get_MaxPacketSize(&value));
    return value;
}

template <typename D> uint8_t impl_IUsbInterruptInEndpointDescriptor<D>::EndpointNumber() const
{
    uint8_t value {};
    check_hresult(static_cast<const IUsbInterruptInEndpointDescriptor &>(static_cast<const D &>(*this))->get_EndpointNumber(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IUsbInterruptInEndpointDescriptor<D>::Interval() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IUsbInterruptInEndpointDescriptor &>(static_cast<const D &>(*this))->get_Interval(put(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbInterruptInPipe impl_IUsbInterruptInEndpointDescriptor<D>::Pipe() const
{
    Windows::Devices::Usb::UsbInterruptInPipe value { nullptr };
    check_hresult(static_cast<const IUsbInterruptInEndpointDescriptor &>(static_cast<const D &>(*this))->get_Pipe(put(value)));
    return value;
}

template <typename D> uint32_t impl_IUsbBulkOutEndpointDescriptor<D>::MaxPacketSize() const
{
    uint32_t value {};
    check_hresult(static_cast<const IUsbBulkOutEndpointDescriptor &>(static_cast<const D &>(*this))->get_MaxPacketSize(&value));
    return value;
}

template <typename D> uint8_t impl_IUsbBulkOutEndpointDescriptor<D>::EndpointNumber() const
{
    uint8_t value {};
    check_hresult(static_cast<const IUsbBulkOutEndpointDescriptor &>(static_cast<const D &>(*this))->get_EndpointNumber(&value));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbBulkOutPipe impl_IUsbBulkOutEndpointDescriptor<D>::Pipe() const
{
    Windows::Devices::Usb::UsbBulkOutPipe value { nullptr };
    check_hresult(static_cast<const IUsbBulkOutEndpointDescriptor &>(static_cast<const D &>(*this))->get_Pipe(put(value)));
    return value;
}

template <typename D> uint32_t impl_IUsbInterruptOutEndpointDescriptor<D>::MaxPacketSize() const
{
    uint32_t value {};
    check_hresult(static_cast<const IUsbInterruptOutEndpointDescriptor &>(static_cast<const D &>(*this))->get_MaxPacketSize(&value));
    return value;
}

template <typename D> uint8_t impl_IUsbInterruptOutEndpointDescriptor<D>::EndpointNumber() const
{
    uint8_t value {};
    check_hresult(static_cast<const IUsbInterruptOutEndpointDescriptor &>(static_cast<const D &>(*this))->get_EndpointNumber(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IUsbInterruptOutEndpointDescriptor<D>::Interval() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IUsbInterruptOutEndpointDescriptor &>(static_cast<const D &>(*this))->get_Interval(put(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbInterruptOutPipe impl_IUsbInterruptOutEndpointDescriptor<D>::Pipe() const
{
    Windows::Devices::Usb::UsbInterruptOutPipe value { nullptr };
    check_hresult(static_cast<const IUsbInterruptOutEndpointDescriptor &>(static_cast<const D &>(*this))->get_Pipe(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<uint32_t> impl_IUsbDevice<D>::SendControlOutTransferAsync(const Windows::Devices::Usb::UsbSetupPacket & setupPacket, const Windows::Storage::Streams::IBuffer & buffer) const
{
    Windows::Foundation::IAsyncOperation<uint32_t> operation;
    check_hresult(static_cast<const IUsbDevice &>(static_cast<const D &>(*this))->abi_SendControlOutTransferAsync(get(setupPacket), get(buffer), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<uint32_t> impl_IUsbDevice<D>::SendControlOutTransferAsync(const Windows::Devices::Usb::UsbSetupPacket & setupPacket) const
{
    Windows::Foundation::IAsyncOperation<uint32_t> operation;
    check_hresult(static_cast<const IUsbDevice &>(static_cast<const D &>(*this))->abi_SendControlOutTransferAsyncNoBuffer(get(setupPacket), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> impl_IUsbDevice<D>::SendControlInTransferAsync(const Windows::Devices::Usb::UsbSetupPacket & setupPacket, const Windows::Storage::Streams::IBuffer & buffer) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> operation;
    check_hresult(static_cast<const IUsbDevice &>(static_cast<const D &>(*this))->abi_SendControlInTransferAsync(get(setupPacket), get(buffer), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> impl_IUsbDevice<D>::SendControlInTransferAsync(const Windows::Devices::Usb::UsbSetupPacket & setupPacket) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer> operation;
    check_hresult(static_cast<const IUsbDevice &>(static_cast<const D &>(*this))->abi_SendControlInTransferAsyncNoBuffer(get(setupPacket), put(operation)));
    return operation;
}

template <typename D> Windows::Devices::Usb::UsbInterface impl_IUsbDevice<D>::DefaultInterface() const
{
    Windows::Devices::Usb::UsbInterface value { nullptr };
    check_hresult(static_cast<const IUsbDevice &>(static_cast<const D &>(*this))->get_DefaultInterface(put(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbDeviceDescriptor impl_IUsbDevice<D>::DeviceDescriptor() const
{
    Windows::Devices::Usb::UsbDeviceDescriptor value { nullptr };
    check_hresult(static_cast<const IUsbDevice &>(static_cast<const D &>(*this))->get_DeviceDescriptor(put(value)));
    return value;
}

template <typename D> Windows::Devices::Usb::UsbConfiguration impl_IUsbDevice<D>::Configuration() const
{
    Windows::Devices::Usb::UsbConfiguration value { nullptr };
    check_hresult(static_cast<const IUsbDevice &>(static_cast<const D &>(*this))->get_Configuration(put(value)));
    return value;
}

inline bool UsbConfigurationDescriptor::TryParse(const Windows::Devices::Usb::UsbDescriptor & descriptor, Windows::Devices::Usb::UsbConfigurationDescriptor & parsed)
{
    return get_activation_factory<UsbConfigurationDescriptor, IUsbConfigurationDescriptorStatics>().TryParse(descriptor, parsed);
}

inline Windows::Devices::Usb::UsbConfigurationDescriptor UsbConfigurationDescriptor::Parse(const Windows::Devices::Usb::UsbDescriptor & descriptor)
{
    return get_activation_factory<UsbConfigurationDescriptor, IUsbConfigurationDescriptorStatics>().Parse(descriptor);
}

inline UsbControlRequestType::UsbControlRequestType() :
    UsbControlRequestType(activate_instance<UsbControlRequestType>())
{}

inline hstring UsbDevice::GetDeviceSelector(uint32_t vendorId, uint32_t productId, GUID winUsbInterfaceClass)
{
    return get_activation_factory<UsbDevice, IUsbDeviceStatics>().GetDeviceSelector(vendorId, productId, winUsbInterfaceClass);
}

inline hstring UsbDevice::GetDeviceSelector(GUID winUsbInterfaceClass)
{
    return get_activation_factory<UsbDevice, IUsbDeviceStatics>().GetDeviceSelector(winUsbInterfaceClass);
}

inline hstring UsbDevice::GetDeviceSelector(uint32_t vendorId, uint32_t productId)
{
    return get_activation_factory<UsbDevice, IUsbDeviceStatics>().GetDeviceSelector(vendorId, productId);
}

inline hstring UsbDevice::GetDeviceClassSelector(const Windows::Devices::Usb::UsbDeviceClass & usbClass)
{
    return get_activation_factory<UsbDevice, IUsbDeviceStatics>().GetDeviceClassSelector(usbClass);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Usb::UsbDevice> UsbDevice::FromIdAsync(hstring_ref deviceId)
{
    return get_activation_factory<UsbDevice, IUsbDeviceStatics>().FromIdAsync(deviceId);
}

inline UsbDeviceClass::UsbDeviceClass() :
    UsbDeviceClass(activate_instance<UsbDeviceClass>())
{}

inline Windows::Devices::Usb::UsbDeviceClass UsbDeviceClasses::CdcControl()
{
    return get_activation_factory<UsbDeviceClasses, IUsbDeviceClassesStatics>().CdcControl();
}

inline Windows::Devices::Usb::UsbDeviceClass UsbDeviceClasses::Physical()
{
    return get_activation_factory<UsbDeviceClasses, IUsbDeviceClassesStatics>().Physical();
}

inline Windows::Devices::Usb::UsbDeviceClass UsbDeviceClasses::PersonalHealthcare()
{
    return get_activation_factory<UsbDeviceClasses, IUsbDeviceClassesStatics>().PersonalHealthcare();
}

inline Windows::Devices::Usb::UsbDeviceClass UsbDeviceClasses::ActiveSync()
{
    return get_activation_factory<UsbDeviceClasses, IUsbDeviceClassesStatics>().ActiveSync();
}

inline Windows::Devices::Usb::UsbDeviceClass UsbDeviceClasses::PalmSync()
{
    return get_activation_factory<UsbDeviceClasses, IUsbDeviceClassesStatics>().PalmSync();
}

inline Windows::Devices::Usb::UsbDeviceClass UsbDeviceClasses::DeviceFirmwareUpdate()
{
    return get_activation_factory<UsbDeviceClasses, IUsbDeviceClassesStatics>().DeviceFirmwareUpdate();
}

inline Windows::Devices::Usb::UsbDeviceClass UsbDeviceClasses::Irda()
{
    return get_activation_factory<UsbDeviceClasses, IUsbDeviceClassesStatics>().Irda();
}

inline Windows::Devices::Usb::UsbDeviceClass UsbDeviceClasses::Measurement()
{
    return get_activation_factory<UsbDeviceClasses, IUsbDeviceClassesStatics>().Measurement();
}

inline Windows::Devices::Usb::UsbDeviceClass UsbDeviceClasses::VendorSpecific()
{
    return get_activation_factory<UsbDeviceClasses, IUsbDeviceClassesStatics>().VendorSpecific();
}

inline bool UsbEndpointDescriptor::TryParse(const Windows::Devices::Usb::UsbDescriptor & descriptor, Windows::Devices::Usb::UsbEndpointDescriptor & parsed)
{
    return get_activation_factory<UsbEndpointDescriptor, IUsbEndpointDescriptorStatics>().TryParse(descriptor, parsed);
}

inline Windows::Devices::Usb::UsbEndpointDescriptor UsbEndpointDescriptor::Parse(const Windows::Devices::Usb::UsbDescriptor & descriptor)
{
    return get_activation_factory<UsbEndpointDescriptor, IUsbEndpointDescriptorStatics>().Parse(descriptor);
}

inline bool UsbInterfaceDescriptor::TryParse(const Windows::Devices::Usb::UsbDescriptor & descriptor, Windows::Devices::Usb::UsbInterfaceDescriptor & parsed)
{
    return get_activation_factory<UsbInterfaceDescriptor, IUsbInterfaceDescriptorStatics>().TryParse(descriptor, parsed);
}

inline Windows::Devices::Usb::UsbInterfaceDescriptor UsbInterfaceDescriptor::Parse(const Windows::Devices::Usb::UsbDescriptor & descriptor)
{
    return get_activation_factory<UsbInterfaceDescriptor, IUsbInterfaceDescriptorStatics>().Parse(descriptor);
}

inline UsbSetupPacket::UsbSetupPacket() :
    UsbSetupPacket(activate_instance<UsbSetupPacket>())
{}

inline UsbSetupPacket::UsbSetupPacket(const Windows::Storage::Streams::IBuffer & eightByteBuffer) :
    UsbSetupPacket(get_activation_factory<UsbSetupPacket, IUsbSetupPacketFactory>().CreateWithEightByteBuffer(eightByteBuffer))
{}

}

}
