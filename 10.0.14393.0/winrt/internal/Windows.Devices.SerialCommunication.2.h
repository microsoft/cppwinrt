// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Devices.SerialCommunication.1.h"
#include "Windows.Foundation.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_44ef26ed_c1ff_546a_a46b_6a37de9187fb
#define WINRT_GENERIC_44ef26ed_c1ff_546a_a46b_6a37de9187fb
template <> struct __declspec(uuid("44ef26ed-c1ff-546a-a46b-6a37de9187fb")) __declspec(novtable) IAsyncOperation<Windows::Devices::SerialCommunication::SerialDevice> : impl_IAsyncOperation<Windows::Devices::SerialCommunication::SerialDevice> {};
#endif

#ifndef WINRT_GENERIC_d92ea323_b7bf_5e02_b9fb_c61f97d080e9
#define WINRT_GENERIC_d92ea323_b7bf_5e02_b9fb_c61f97d080e9
template <> struct __declspec(uuid("d92ea323-b7bf-5e02-b9fb-c61f97d080e9")) __declspec(novtable) TypedEventHandler<Windows::Devices::SerialCommunication::SerialDevice, Windows::Devices::SerialCommunication::ErrorReceivedEventArgs> : impl_TypedEventHandler<Windows::Devices::SerialCommunication::SerialDevice, Windows::Devices::SerialCommunication::ErrorReceivedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_e496c3ef_5802_5ac4_ac2e_96bc23fa9447
#define WINRT_GENERIC_e496c3ef_5802_5ac4_ac2e_96bc23fa9447
template <> struct __declspec(uuid("e496c3ef-5802-5ac4-ac2e-96bc23fa9447")) __declspec(novtable) TypedEventHandler<Windows::Devices::SerialCommunication::SerialDevice, Windows::Devices::SerialCommunication::PinChangedEventArgs> : impl_TypedEventHandler<Windows::Devices::SerialCommunication::SerialDevice, Windows::Devices::SerialCommunication::PinChangedEventArgs> {};
#endif

#ifndef WINRT_GENERIC_84a34b33_06fc_5e63_8ee2_eab4ff69acb7
#define WINRT_GENERIC_84a34b33_06fc_5e63_8ee2_eab4ff69acb7
template <> struct __declspec(uuid("84a34b33-06fc-5e63-8ee2-eab4ff69acb7")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Devices::SerialCommunication::SerialDevice> : impl_AsyncOperationCompletedHandler<Windows::Devices::SerialCommunication::SerialDevice> {};
#endif


}

namespace Windows::Devices::SerialCommunication {

template <typename D>
struct WINRT_EBO impl_IErrorReceivedEventArgs
{
    Windows::Devices::SerialCommunication::SerialError Error() const;
};

template <typename D>
struct WINRT_EBO impl_IPinChangedEventArgs
{
    Windows::Devices::SerialCommunication::SerialPinChange PinChange() const;
};

template <typename D>
struct WINRT_EBO impl_ISerialDevice
{
    uint32_t BaudRate() const;
    void BaudRate(uint32_t value) const;
    bool BreakSignalState() const;
    void BreakSignalState(bool value) const;
    uint32_t BytesReceived() const;
    bool CarrierDetectState() const;
    bool ClearToSendState() const;
    uint16_t DataBits() const;
    void DataBits(uint16_t value) const;
    bool DataSetReadyState() const;
    Windows::Devices::SerialCommunication::SerialHandshake Handshake() const;
    void Handshake(Windows::Devices::SerialCommunication::SerialHandshake value) const;
    bool IsDataTerminalReadyEnabled() const;
    void IsDataTerminalReadyEnabled(bool value) const;
    bool IsRequestToSendEnabled() const;
    void IsRequestToSendEnabled(bool value) const;
    Windows::Devices::SerialCommunication::SerialParity Parity() const;
    void Parity(Windows::Devices::SerialCommunication::SerialParity value) const;
    hstring PortName() const;
    Windows::Foundation::TimeSpan ReadTimeout() const;
    void ReadTimeout(const Windows::Foundation::TimeSpan & value) const;
    Windows::Devices::SerialCommunication::SerialStopBitCount StopBits() const;
    void StopBits(Windows::Devices::SerialCommunication::SerialStopBitCount value) const;
    uint16_t UsbVendorId() const;
    uint16_t UsbProductId() const;
    Windows::Foundation::TimeSpan WriteTimeout() const;
    void WriteTimeout(const Windows::Foundation::TimeSpan & value) const;
    Windows::Storage::Streams::IInputStream InputStream() const;
    Windows::Storage::Streams::IOutputStream OutputStream() const;
    event_token ErrorReceived(const Windows::Foundation::TypedEventHandler<Windows::Devices::SerialCommunication::SerialDevice, Windows::Devices::SerialCommunication::ErrorReceivedEventArgs> & reportHandler) const;
    using ErrorReceived_revoker = event_revoker<ISerialDevice>;
    ErrorReceived_revoker ErrorReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::SerialCommunication::SerialDevice, Windows::Devices::SerialCommunication::ErrorReceivedEventArgs> & reportHandler) const;
    void ErrorReceived(event_token token) const;
    event_token PinChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::SerialCommunication::SerialDevice, Windows::Devices::SerialCommunication::PinChangedEventArgs> & reportHandler) const;
    using PinChanged_revoker = event_revoker<ISerialDevice>;
    PinChanged_revoker PinChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::SerialCommunication::SerialDevice, Windows::Devices::SerialCommunication::PinChangedEventArgs> & reportHandler) const;
    void PinChanged(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_ISerialDeviceStatics
{
    hstring GetDeviceSelector() const;
    hstring GetDeviceSelector(hstring_ref portName) const;
    hstring GetDeviceSelectorFromUsbVidPid(uint16_t vendorId, uint16_t productId) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::SerialCommunication::SerialDevice> FromIdAsync(hstring_ref deviceId) const;
};

struct IErrorReceivedEventArgs :
    Windows::IInspectable,
    impl::consume<IErrorReceivedEventArgs>
{
    IErrorReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IErrorReceivedEventArgs>(m_ptr); }
};

struct IPinChangedEventArgs :
    Windows::IInspectable,
    impl::consume<IPinChangedEventArgs>
{
    IPinChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPinChangedEventArgs>(m_ptr); }
};

struct ISerialDevice :
    Windows::IInspectable,
    impl::consume<ISerialDevice>,
    impl::require<ISerialDevice, Windows::Foundation::IClosable>
{
    ISerialDevice(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISerialDevice>(m_ptr); }
};

struct ISerialDeviceStatics :
    Windows::IInspectable,
    impl::consume<ISerialDeviceStatics>
{
    ISerialDeviceStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISerialDeviceStatics>(m_ptr); }
};

}

}
