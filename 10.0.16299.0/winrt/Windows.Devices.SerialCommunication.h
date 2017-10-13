// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Devices.SerialCommunication.2.h"
#include "winrt/Windows.Devices.h"

namespace winrt::impl {

template <typename D> Windows::Devices::SerialCommunication::SerialError consume_Windows_Devices_SerialCommunication_IErrorReceivedEventArgs<D>::Error() const noexcept
{
    Windows::Devices::SerialCommunication::SerialError value{};
    check_terminate(WINRT_SHIM(Windows::Devices::SerialCommunication::IErrorReceivedEventArgs)->get_Error(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::SerialCommunication::SerialPinChange consume_Windows_Devices_SerialCommunication_IPinChangedEventArgs<D>::PinChange() const noexcept
{
    Windows::Devices::SerialCommunication::SerialPinChange value{};
    check_terminate(WINRT_SHIM(Windows::Devices::SerialCommunication::IPinChangedEventArgs)->get_PinChange(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::BaudRate() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDevice)->get_BaudRate(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::BaudRate(uint32_t value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDevice)->put_BaudRate(value));
}

template <typename D> bool consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::BreakSignalState() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDevice)->get_BreakSignalState(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::BreakSignalState(bool value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDevice)->put_BreakSignalState(value));
}

template <typename D> uint32_t consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::BytesReceived() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDevice)->get_BytesReceived(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::CarrierDetectState() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDevice)->get_CarrierDetectState(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::ClearToSendState() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDevice)->get_ClearToSendState(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::DataBits() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDevice)->get_DataBits(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::DataBits(uint16_t value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDevice)->put_DataBits(value));
}

template <typename D> bool consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::DataSetReadyState() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDevice)->get_DataSetReadyState(&value));
    return value;
}

template <typename D> Windows::Devices::SerialCommunication::SerialHandshake consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::Handshake() const noexcept
{
    Windows::Devices::SerialCommunication::SerialHandshake value{};
    check_terminate(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDevice)->get_Handshake(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::Handshake(Windows::Devices::SerialCommunication::SerialHandshake const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDevice)->put_Handshake(get_abi(value)));
}

template <typename D> bool consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::IsDataTerminalReadyEnabled() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDevice)->get_IsDataTerminalReadyEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::IsDataTerminalReadyEnabled(bool value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDevice)->put_IsDataTerminalReadyEnabled(value));
}

template <typename D> bool consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::IsRequestToSendEnabled() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDevice)->get_IsRequestToSendEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::IsRequestToSendEnabled(bool value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDevice)->put_IsRequestToSendEnabled(value));
}

template <typename D> Windows::Devices::SerialCommunication::SerialParity consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::Parity() const noexcept
{
    Windows::Devices::SerialCommunication::SerialParity value{};
    check_terminate(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDevice)->get_Parity(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::Parity(Windows::Devices::SerialCommunication::SerialParity const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDevice)->put_Parity(get_abi(value)));
}

template <typename D> hstring consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::PortName() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDevice)->get_PortName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::ReadTimeout() const noexcept
{
    Windows::Foundation::TimeSpan value{};
    check_terminate(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDevice)->get_ReadTimeout(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::ReadTimeout(Windows::Foundation::TimeSpan const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDevice)->put_ReadTimeout(get_abi(value)));
}

template <typename D> Windows::Devices::SerialCommunication::SerialStopBitCount consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::StopBits() const noexcept
{
    Windows::Devices::SerialCommunication::SerialStopBitCount value{};
    check_terminate(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDevice)->get_StopBits(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::StopBits(Windows::Devices::SerialCommunication::SerialStopBitCount const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDevice)->put_StopBits(get_abi(value)));
}

template <typename D> uint16_t consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::UsbVendorId() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDevice)->get_UsbVendorId(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::UsbProductId() const noexcept
{
    uint16_t value{};
    check_terminate(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDevice)->get_UsbProductId(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::WriteTimeout() const noexcept
{
    Windows::Foundation::TimeSpan value{};
    check_terminate(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDevice)->get_WriteTimeout(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::WriteTimeout(Windows::Foundation::TimeSpan const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDevice)->put_WriteTimeout(get_abi(value)));
}

template <typename D> Windows::Storage::Streams::IInputStream consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::InputStream() const noexcept
{
    Windows::Storage::Streams::IInputStream value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDevice)->get_InputStream(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IOutputStream consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::OutputStream() const noexcept
{
    Windows::Storage::Streams::IOutputStream value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDevice)->get_OutputStream(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::ErrorReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::SerialCommunication::SerialDevice, Windows::Devices::SerialCommunication::ErrorReceivedEventArgs> const& reportHandler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDevice)->add_ErrorReceived(get_abi(reportHandler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::SerialCommunication::ISerialDevice> consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::ErrorReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::SerialCommunication::SerialDevice, Windows::Devices::SerialCommunication::ErrorReceivedEventArgs> const& reportHandler) const
{
    return impl::make_event_revoker<D, Windows::Devices::SerialCommunication::ISerialDevice>(this, &abi_t<Windows::Devices::SerialCommunication::ISerialDevice>::remove_ErrorReceived, ErrorReceived(reportHandler));
}

template <typename D> void consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::ErrorReceived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDevice)->remove_ErrorReceived(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::PinChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::SerialCommunication::SerialDevice, Windows::Devices::SerialCommunication::PinChangedEventArgs> const& reportHandler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDevice)->add_PinChanged(get_abi(reportHandler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::SerialCommunication::ISerialDevice> consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::PinChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::SerialCommunication::SerialDevice, Windows::Devices::SerialCommunication::PinChangedEventArgs> const& reportHandler) const
{
    return impl::make_event_revoker<D, Windows::Devices::SerialCommunication::ISerialDevice>(this, &abi_t<Windows::Devices::SerialCommunication::ISerialDevice>::remove_PinChanged, PinChanged(reportHandler));
}

template <typename D> void consume_Windows_Devices_SerialCommunication_ISerialDevice<D>::PinChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDevice)->remove_PinChanged(get_abi(token)));
}

template <typename D> hstring consume_Windows_Devices_SerialCommunication_ISerialDeviceStatics<D>::GetDeviceSelector() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDeviceStatics)->GetDeviceSelector(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_SerialCommunication_ISerialDeviceStatics<D>::GetDeviceSelector(param::hstring const& portName) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDeviceStatics)->GetDeviceSelectorFromPortName(get_abi(portName), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_SerialCommunication_ISerialDeviceStatics<D>::GetDeviceSelectorFromUsbVidPid(uint16_t vendorId, uint16_t productId) const
{
    hstring result{};
    check_hresult(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDeviceStatics)->GetDeviceSelectorFromUsbVidPid(vendorId, productId, put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::SerialCommunication::SerialDevice> consume_Windows_Devices_SerialCommunication_ISerialDeviceStatics<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::SerialCommunication::SerialDevice> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::SerialCommunication::ISerialDeviceStatics)->FromIdAsync(get_abi(deviceId), put_abi(result)));
    return result;
}

template <typename D>
struct produce<D, Windows::Devices::SerialCommunication::IErrorReceivedEventArgs> : produce_base<D, Windows::Devices::SerialCommunication::IErrorReceivedEventArgs>
{
    HRESULT __stdcall get_Error(Windows::Devices::SerialCommunication::SerialError* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Error());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::SerialCommunication::IPinChangedEventArgs> : produce_base<D, Windows::Devices::SerialCommunication::IPinChangedEventArgs>
{
    HRESULT __stdcall get_PinChange(Windows::Devices::SerialCommunication::SerialPinChange* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PinChange());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Devices::SerialCommunication::ISerialDevice> : produce_base<D, Windows::Devices::SerialCommunication::ISerialDevice>
{
    HRESULT __stdcall get_BaudRate(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().BaudRate());
        return S_OK;
    }

    HRESULT __stdcall put_BaudRate(uint32_t value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().BaudRate(value);
        return S_OK;
    }

    HRESULT __stdcall get_BreakSignalState(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().BreakSignalState());
        return S_OK;
    }

    HRESULT __stdcall put_BreakSignalState(bool value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().BreakSignalState(value);
        return S_OK;
    }

    HRESULT __stdcall get_BytesReceived(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().BytesReceived());
        return S_OK;
    }

    HRESULT __stdcall get_CarrierDetectState(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CarrierDetectState());
        return S_OK;
    }

    HRESULT __stdcall get_ClearToSendState(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ClearToSendState());
        return S_OK;
    }

    HRESULT __stdcall get_DataBits(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DataBits());
        return S_OK;
    }

    HRESULT __stdcall put_DataBits(uint16_t value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().DataBits(value);
        return S_OK;
    }

    HRESULT __stdcall get_DataSetReadyState(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DataSetReadyState());
        return S_OK;
    }

    HRESULT __stdcall get_Handshake(Windows::Devices::SerialCommunication::SerialHandshake* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Handshake());
        return S_OK;
    }

    HRESULT __stdcall put_Handshake(Windows::Devices::SerialCommunication::SerialHandshake value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().Handshake(*reinterpret_cast<Windows::Devices::SerialCommunication::SerialHandshake const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_IsDataTerminalReadyEnabled(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsDataTerminalReadyEnabled());
        return S_OK;
    }

    HRESULT __stdcall put_IsDataTerminalReadyEnabled(bool value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().IsDataTerminalReadyEnabled(value);
        return S_OK;
    }

    HRESULT __stdcall get_IsRequestToSendEnabled(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsRequestToSendEnabled());
        return S_OK;
    }

    HRESULT __stdcall put_IsRequestToSendEnabled(bool value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().IsRequestToSendEnabled(value);
        return S_OK;
    }

    HRESULT __stdcall get_Parity(Windows::Devices::SerialCommunication::SerialParity* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Parity());
        return S_OK;
    }

    HRESULT __stdcall put_Parity(Windows::Devices::SerialCommunication::SerialParity value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().Parity(*reinterpret_cast<Windows::Devices::SerialCommunication::SerialParity const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_PortName(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().PortName());
        return S_OK;
    }

    HRESULT __stdcall get_ReadTimeout(Windows::Foundation::TimeSpan* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().ReadTimeout());
        return S_OK;
    }

    HRESULT __stdcall put_ReadTimeout(Windows::Foundation::TimeSpan value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().ReadTimeout(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_StopBits(Windows::Devices::SerialCommunication::SerialStopBitCount* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().StopBits());
        return S_OK;
    }

    HRESULT __stdcall put_StopBits(Windows::Devices::SerialCommunication::SerialStopBitCount value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().StopBits(*reinterpret_cast<Windows::Devices::SerialCommunication::SerialStopBitCount const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_UsbVendorId(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().UsbVendorId());
        return S_OK;
    }

    HRESULT __stdcall get_UsbProductId(uint16_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().UsbProductId());
        return S_OK;
    }

    HRESULT __stdcall get_WriteTimeout(Windows::Foundation::TimeSpan* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().WriteTimeout());
        return S_OK;
    }

    HRESULT __stdcall put_WriteTimeout(Windows::Foundation::TimeSpan value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().WriteTimeout(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_InputStream(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().InputStream());
        return S_OK;
    }

    HRESULT __stdcall get_OutputStream(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().OutputStream());
        return S_OK;
    }

    HRESULT __stdcall add_ErrorReceived(::IUnknown* reportHandler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ErrorReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::SerialCommunication::SerialDevice, Windows::Devices::SerialCommunication::ErrorReceivedEventArgs> const*>(&reportHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ErrorReceived(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ErrorReceived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PinChanged(::IUnknown* reportHandler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PinChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::SerialCommunication::SerialDevice, Windows::Devices::SerialCommunication::PinChangedEventArgs> const*>(&reportHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PinChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PinChanged(*reinterpret_cast<event_token const*>(&token));
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
    HRESULT __stdcall GetDeviceSelector(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelectorFromPortName(HSTRING portName, HSTRING* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeviceSelector(*reinterpret_cast<hstring const*>(&portName)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelectorFromUsbVidPid(uint16_t vendorId, uint16_t productId, HSTRING* result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetDeviceSelectorFromUsbVidPid(vendorId, productId));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** result) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
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

WINRT_EXPORT namespace winrt::Windows::Devices::SerialCommunication {

inline hstring SerialDevice::GetDeviceSelector()
{
    return get_activation_factory<SerialDevice, Windows::Devices::SerialCommunication::ISerialDeviceStatics>().GetDeviceSelector();
}

inline hstring SerialDevice::GetDeviceSelector(param::hstring const& portName)
{
    return get_activation_factory<SerialDevice, Windows::Devices::SerialCommunication::ISerialDeviceStatics>().GetDeviceSelector(portName);
}

inline hstring SerialDevice::GetDeviceSelectorFromUsbVidPid(uint16_t vendorId, uint16_t productId)
{
    return get_activation_factory<SerialDevice, Windows::Devices::SerialCommunication::ISerialDeviceStatics>().GetDeviceSelectorFromUsbVidPid(vendorId, productId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::SerialCommunication::SerialDevice> SerialDevice::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<SerialDevice, Windows::Devices::SerialCommunication::ISerialDeviceStatics>().FromIdAsync(deviceId);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::SerialCommunication::IErrorReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::SerialCommunication::IErrorReceivedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::SerialCommunication::IPinChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::SerialCommunication::IPinChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::SerialCommunication::ISerialDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::SerialCommunication::ISerialDevice> {};

template<> struct hash<winrt::Windows::Devices::SerialCommunication::ISerialDeviceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::SerialCommunication::ISerialDeviceStatics> {};

template<> struct hash<winrt::Windows::Devices::SerialCommunication::ErrorReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::SerialCommunication::ErrorReceivedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::SerialCommunication::PinChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::SerialCommunication::PinChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::SerialCommunication::SerialDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::SerialCommunication::SerialDevice> {};

}

WINRT_WARNING_POP
