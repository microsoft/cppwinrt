// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Devices.SerialCommunication.3.h"
#include "Windows.Devices.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::SerialCommunication::IErrorReceivedEventArgs> : produce_base<D, Windows::Devices::SerialCommunication::IErrorReceivedEventArgs>
{
    HRESULT __stdcall get_Error(Windows::Devices::SerialCommunication::SerialError * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Error());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::SerialCommunication::IPinChangedEventArgs> : produce_base<D, Windows::Devices::SerialCommunication::IPinChangedEventArgs>
{
    HRESULT __stdcall get_PinChange(Windows::Devices::SerialCommunication::SerialPinChange * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PinChange());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::SerialCommunication::ISerialDevice> : produce_base<D, Windows::Devices::SerialCommunication::ISerialDevice>
{
    HRESULT __stdcall get_BaudRate(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BaudRate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BaudRate(uint32_t value) noexcept override
    {
        try
        {
            this->shim().BaudRate(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BreakSignalState(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BreakSignalState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BreakSignalState(bool value) noexcept override
    {
        try
        {
            this->shim().BreakSignalState(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BytesReceived(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BytesReceived());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CarrierDetectState(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CarrierDetectState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ClearToSendState(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ClearToSendState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DataBits(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DataBits());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DataBits(uint16_t value) noexcept override
    {
        try
        {
            this->shim().DataBits(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DataSetReadyState(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DataSetReadyState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Handshake(Windows::Devices::SerialCommunication::SerialHandshake * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Handshake());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Handshake(Windows::Devices::SerialCommunication::SerialHandshake value) noexcept override
    {
        try
        {
            this->shim().Handshake(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDataTerminalReadyEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsDataTerminalReadyEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsDataTerminalReadyEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().IsDataTerminalReadyEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsRequestToSendEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsRequestToSendEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsRequestToSendEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().IsRequestToSendEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Parity(Windows::Devices::SerialCommunication::SerialParity * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Parity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Parity(Windows::Devices::SerialCommunication::SerialParity value) noexcept override
    {
        try
        {
            this->shim().Parity(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PortName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PortName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ReadTimeout(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ReadTimeout());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ReadTimeout(abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            this->shim().ReadTimeout(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StopBits(Windows::Devices::SerialCommunication::SerialStopBitCount * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StopBits());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StopBits(Windows::Devices::SerialCommunication::SerialStopBitCount value) noexcept override
    {
        try
        {
            this->shim().StopBits(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UsbVendorId(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UsbVendorId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UsbProductId(uint16_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().UsbProductId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WriteTimeout(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WriteTimeout());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_WriteTimeout(abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            this->shim().WriteTimeout(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
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

    HRESULT __stdcall add_ErrorReceived(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::SerialCommunication::SerialDevice, Windows::Devices::SerialCommunication::ErrorReceivedEventArgs>> reportHandler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ErrorReceived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::SerialCommunication::SerialDevice, Windows::Devices::SerialCommunication::ErrorReceivedEventArgs> *>(&reportHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ErrorReceived(event_token token) noexcept override
    {
        try
        {
            this->shim().ErrorReceived(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PinChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::SerialCommunication::SerialDevice, Windows::Devices::SerialCommunication::PinChangedEventArgs>> reportHandler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PinChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::SerialCommunication::SerialDevice, Windows::Devices::SerialCommunication::PinChangedEventArgs> *>(&reportHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PinChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().PinChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::SerialCommunication::ISerialDeviceStatics> : produce_base<D, Windows::Devices::SerialCommunication::ISerialDeviceStatics>
{
    HRESULT __stdcall abi_GetDeviceSelector(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceSelectorFromPortName(abi_arg_in<hstring> portName, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetDeviceSelector(*reinterpret_cast<const hstring *>(&portName)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceSelectorFromUsbVidPid(uint16_t vendorId, uint16_t productId, abi_arg_out<hstring> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().GetDeviceSelectorFromUsbVidPid(vendorId, productId));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromIdAsync(abi_arg_in<hstring> deviceId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::SerialCommunication::SerialDevice>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FromIdAsync(*reinterpret_cast<const hstring *>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Devices::SerialCommunication {

template <typename D> hstring impl_ISerialDeviceStatics<D>::GetDeviceSelector() const
{
    hstring value;
    check_hresult(static_cast<const ISerialDeviceStatics &>(static_cast<const D &>(*this))->abi_GetDeviceSelector(put(value)));
    return value;
}

template <typename D> hstring impl_ISerialDeviceStatics<D>::GetDeviceSelector(hstring_ref portName) const
{
    hstring result;
    check_hresult(static_cast<const ISerialDeviceStatics &>(static_cast<const D &>(*this))->abi_GetDeviceSelectorFromPortName(get(portName), put(result)));
    return result;
}

template <typename D> hstring impl_ISerialDeviceStatics<D>::GetDeviceSelectorFromUsbVidPid(uint16_t vendorId, uint16_t productId) const
{
    hstring result;
    check_hresult(static_cast<const ISerialDeviceStatics &>(static_cast<const D &>(*this))->abi_GetDeviceSelectorFromUsbVidPid(vendorId, productId, put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::SerialCommunication::SerialDevice> impl_ISerialDeviceStatics<D>::FromIdAsync(hstring_ref deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::SerialCommunication::SerialDevice> result;
    check_hresult(static_cast<const ISerialDeviceStatics &>(static_cast<const D &>(*this))->abi_FromIdAsync(get(deviceId), put(result)));
    return result;
}

template <typename D> Windows::Devices::SerialCommunication::SerialError impl_IErrorReceivedEventArgs<D>::Error() const
{
    Windows::Devices::SerialCommunication::SerialError value {};
    check_hresult(static_cast<const IErrorReceivedEventArgs &>(static_cast<const D &>(*this))->get_Error(&value));
    return value;
}

template <typename D> Windows::Devices::SerialCommunication::SerialPinChange impl_IPinChangedEventArgs<D>::PinChange() const
{
    Windows::Devices::SerialCommunication::SerialPinChange value {};
    check_hresult(static_cast<const IPinChangedEventArgs &>(static_cast<const D &>(*this))->get_PinChange(&value));
    return value;
}

template <typename D> uint32_t impl_ISerialDevice<D>::BaudRate() const
{
    uint32_t value {};
    check_hresult(static_cast<const ISerialDevice &>(static_cast<const D &>(*this))->get_BaudRate(&value));
    return value;
}

template <typename D> void impl_ISerialDevice<D>::BaudRate(uint32_t value) const
{
    check_hresult(static_cast<const ISerialDevice &>(static_cast<const D &>(*this))->put_BaudRate(value));
}

template <typename D> bool impl_ISerialDevice<D>::BreakSignalState() const
{
    bool value {};
    check_hresult(static_cast<const ISerialDevice &>(static_cast<const D &>(*this))->get_BreakSignalState(&value));
    return value;
}

template <typename D> void impl_ISerialDevice<D>::BreakSignalState(bool value) const
{
    check_hresult(static_cast<const ISerialDevice &>(static_cast<const D &>(*this))->put_BreakSignalState(value));
}

template <typename D> uint32_t impl_ISerialDevice<D>::BytesReceived() const
{
    uint32_t value {};
    check_hresult(static_cast<const ISerialDevice &>(static_cast<const D &>(*this))->get_BytesReceived(&value));
    return value;
}

template <typename D> bool impl_ISerialDevice<D>::CarrierDetectState() const
{
    bool value {};
    check_hresult(static_cast<const ISerialDevice &>(static_cast<const D &>(*this))->get_CarrierDetectState(&value));
    return value;
}

template <typename D> bool impl_ISerialDevice<D>::ClearToSendState() const
{
    bool value {};
    check_hresult(static_cast<const ISerialDevice &>(static_cast<const D &>(*this))->get_ClearToSendState(&value));
    return value;
}

template <typename D> uint16_t impl_ISerialDevice<D>::DataBits() const
{
    uint16_t value {};
    check_hresult(static_cast<const ISerialDevice &>(static_cast<const D &>(*this))->get_DataBits(&value));
    return value;
}

template <typename D> void impl_ISerialDevice<D>::DataBits(uint16_t value) const
{
    check_hresult(static_cast<const ISerialDevice &>(static_cast<const D &>(*this))->put_DataBits(value));
}

template <typename D> bool impl_ISerialDevice<D>::DataSetReadyState() const
{
    bool value {};
    check_hresult(static_cast<const ISerialDevice &>(static_cast<const D &>(*this))->get_DataSetReadyState(&value));
    return value;
}

template <typename D> Windows::Devices::SerialCommunication::SerialHandshake impl_ISerialDevice<D>::Handshake() const
{
    Windows::Devices::SerialCommunication::SerialHandshake value {};
    check_hresult(static_cast<const ISerialDevice &>(static_cast<const D &>(*this))->get_Handshake(&value));
    return value;
}

template <typename D> void impl_ISerialDevice<D>::Handshake(Windows::Devices::SerialCommunication::SerialHandshake value) const
{
    check_hresult(static_cast<const ISerialDevice &>(static_cast<const D &>(*this))->put_Handshake(value));
}

template <typename D> bool impl_ISerialDevice<D>::IsDataTerminalReadyEnabled() const
{
    bool value {};
    check_hresult(static_cast<const ISerialDevice &>(static_cast<const D &>(*this))->get_IsDataTerminalReadyEnabled(&value));
    return value;
}

template <typename D> void impl_ISerialDevice<D>::IsDataTerminalReadyEnabled(bool value) const
{
    check_hresult(static_cast<const ISerialDevice &>(static_cast<const D &>(*this))->put_IsDataTerminalReadyEnabled(value));
}

template <typename D> bool impl_ISerialDevice<D>::IsRequestToSendEnabled() const
{
    bool value {};
    check_hresult(static_cast<const ISerialDevice &>(static_cast<const D &>(*this))->get_IsRequestToSendEnabled(&value));
    return value;
}

template <typename D> void impl_ISerialDevice<D>::IsRequestToSendEnabled(bool value) const
{
    check_hresult(static_cast<const ISerialDevice &>(static_cast<const D &>(*this))->put_IsRequestToSendEnabled(value));
}

template <typename D> Windows::Devices::SerialCommunication::SerialParity impl_ISerialDevice<D>::Parity() const
{
    Windows::Devices::SerialCommunication::SerialParity value {};
    check_hresult(static_cast<const ISerialDevice &>(static_cast<const D &>(*this))->get_Parity(&value));
    return value;
}

template <typename D> void impl_ISerialDevice<D>::Parity(Windows::Devices::SerialCommunication::SerialParity value) const
{
    check_hresult(static_cast<const ISerialDevice &>(static_cast<const D &>(*this))->put_Parity(value));
}

template <typename D> hstring impl_ISerialDevice<D>::PortName() const
{
    hstring value;
    check_hresult(static_cast<const ISerialDevice &>(static_cast<const D &>(*this))->get_PortName(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_ISerialDevice<D>::ReadTimeout() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const ISerialDevice &>(static_cast<const D &>(*this))->get_ReadTimeout(put(value)));
    return value;
}

template <typename D> void impl_ISerialDevice<D>::ReadTimeout(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(static_cast<const ISerialDevice &>(static_cast<const D &>(*this))->put_ReadTimeout(get(value)));
}

template <typename D> Windows::Devices::SerialCommunication::SerialStopBitCount impl_ISerialDevice<D>::StopBits() const
{
    Windows::Devices::SerialCommunication::SerialStopBitCount value {};
    check_hresult(static_cast<const ISerialDevice &>(static_cast<const D &>(*this))->get_StopBits(&value));
    return value;
}

template <typename D> void impl_ISerialDevice<D>::StopBits(Windows::Devices::SerialCommunication::SerialStopBitCount value) const
{
    check_hresult(static_cast<const ISerialDevice &>(static_cast<const D &>(*this))->put_StopBits(value));
}

template <typename D> uint16_t impl_ISerialDevice<D>::UsbVendorId() const
{
    uint16_t value {};
    check_hresult(static_cast<const ISerialDevice &>(static_cast<const D &>(*this))->get_UsbVendorId(&value));
    return value;
}

template <typename D> uint16_t impl_ISerialDevice<D>::UsbProductId() const
{
    uint16_t value {};
    check_hresult(static_cast<const ISerialDevice &>(static_cast<const D &>(*this))->get_UsbProductId(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_ISerialDevice<D>::WriteTimeout() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const ISerialDevice &>(static_cast<const D &>(*this))->get_WriteTimeout(put(value)));
    return value;
}

template <typename D> void impl_ISerialDevice<D>::WriteTimeout(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(static_cast<const ISerialDevice &>(static_cast<const D &>(*this))->put_WriteTimeout(get(value)));
}

template <typename D> Windows::Storage::Streams::IInputStream impl_ISerialDevice<D>::InputStream() const
{
    Windows::Storage::Streams::IInputStream value;
    check_hresult(static_cast<const ISerialDevice &>(static_cast<const D &>(*this))->get_InputStream(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IOutputStream impl_ISerialDevice<D>::OutputStream() const
{
    Windows::Storage::Streams::IOutputStream value;
    check_hresult(static_cast<const ISerialDevice &>(static_cast<const D &>(*this))->get_OutputStream(put(value)));
    return value;
}

template <typename D> event_token impl_ISerialDevice<D>::ErrorReceived(const Windows::Foundation::TypedEventHandler<Windows::Devices::SerialCommunication::SerialDevice, Windows::Devices::SerialCommunication::ErrorReceivedEventArgs> & reportHandler) const
{
    event_token token {};
    check_hresult(static_cast<const ISerialDevice &>(static_cast<const D &>(*this))->add_ErrorReceived(get(reportHandler), &token));
    return token;
}

template <typename D> event_revoker<ISerialDevice> impl_ISerialDevice<D>::ErrorReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::SerialCommunication::SerialDevice, Windows::Devices::SerialCommunication::ErrorReceivedEventArgs> & reportHandler) const
{
    return impl::make_event_revoker<D, ISerialDevice>(this, &ABI::Windows::Devices::SerialCommunication::ISerialDevice::remove_ErrorReceived, ErrorReceived(reportHandler));
}

template <typename D> void impl_ISerialDevice<D>::ErrorReceived(event_token token) const
{
    check_hresult(static_cast<const ISerialDevice &>(static_cast<const D &>(*this))->remove_ErrorReceived(token));
}

template <typename D> event_token impl_ISerialDevice<D>::PinChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::SerialCommunication::SerialDevice, Windows::Devices::SerialCommunication::PinChangedEventArgs> & reportHandler) const
{
    event_token token {};
    check_hresult(static_cast<const ISerialDevice &>(static_cast<const D &>(*this))->add_PinChanged(get(reportHandler), &token));
    return token;
}

template <typename D> event_revoker<ISerialDevice> impl_ISerialDevice<D>::PinChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::SerialCommunication::SerialDevice, Windows::Devices::SerialCommunication::PinChangedEventArgs> & reportHandler) const
{
    return impl::make_event_revoker<D, ISerialDevice>(this, &ABI::Windows::Devices::SerialCommunication::ISerialDevice::remove_PinChanged, PinChanged(reportHandler));
}

template <typename D> void impl_ISerialDevice<D>::PinChanged(event_token token) const
{
    check_hresult(static_cast<const ISerialDevice &>(static_cast<const D &>(*this))->remove_PinChanged(token));
}

inline hstring SerialDevice::GetDeviceSelector()
{
    return get_activation_factory<SerialDevice, ISerialDeviceStatics>().GetDeviceSelector();
}

inline hstring SerialDevice::GetDeviceSelector(hstring_ref portName)
{
    return get_activation_factory<SerialDevice, ISerialDeviceStatics>().GetDeviceSelector(portName);
}

inline hstring SerialDevice::GetDeviceSelectorFromUsbVidPid(uint16_t vendorId, uint16_t productId)
{
    return get_activation_factory<SerialDevice, ISerialDeviceStatics>().GetDeviceSelectorFromUsbVidPid(vendorId, productId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::SerialCommunication::SerialDevice> SerialDevice::FromIdAsync(hstring_ref deviceId)
{
    return get_activation_factory<SerialDevice, ISerialDeviceStatics>().FromIdAsync(deviceId);
}

}

}
