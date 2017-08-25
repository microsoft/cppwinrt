// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Devices.Sms.2.h"
#include "winrt/Windows.Devices.h"

namespace winrt::impl {

template <typename D> Windows::Foundation::DateTime consume_Windows_Devices_Sms_ISmsAppMessage<D>::Timestamp() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsAppMessage)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sms_ISmsAppMessage<D>::To() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsAppMessage)->get_To(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Sms_ISmsAppMessage<D>::To(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsAppMessage)->put_To(get_abi(value)));
}

template <typename D> hstring consume_Windows_Devices_Sms_ISmsAppMessage<D>::From() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsAppMessage)->get_From(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sms_ISmsAppMessage<D>::Body() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsAppMessage)->get_Body(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Sms_ISmsAppMessage<D>::Body(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsAppMessage)->put_Body(get_abi(value)));
}

template <typename D> hstring consume_Windows_Devices_Sms_ISmsAppMessage<D>::CallbackNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsAppMessage)->get_CallbackNumber(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Sms_ISmsAppMessage<D>::CallbackNumber(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsAppMessage)->put_CallbackNumber(get_abi(value)));
}

template <typename D> bool consume_Windows_Devices_Sms_ISmsAppMessage<D>::IsDeliveryNotificationEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsAppMessage)->get_IsDeliveryNotificationEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Sms_ISmsAppMessage<D>::IsDeliveryNotificationEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsAppMessage)->put_IsDeliveryNotificationEnabled(value));
}

template <typename D> int32_t consume_Windows_Devices_Sms_ISmsAppMessage<D>::RetryAttemptCount() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsAppMessage)->get_RetryAttemptCount(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Sms_ISmsAppMessage<D>::RetryAttemptCount(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsAppMessage)->put_RetryAttemptCount(value));
}

template <typename D> Windows::Devices::Sms::SmsEncoding consume_Windows_Devices_Sms_ISmsAppMessage<D>::Encoding() const
{
    Windows::Devices::Sms::SmsEncoding value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsAppMessage)->get_Encoding(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Sms_ISmsAppMessage<D>::Encoding(Windows::Devices::Sms::SmsEncoding const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsAppMessage)->put_Encoding(get_abi(value)));
}

template <typename D> int32_t consume_Windows_Devices_Sms_ISmsAppMessage<D>::PortNumber() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsAppMessage)->get_PortNumber(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Sms_ISmsAppMessage<D>::PortNumber(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsAppMessage)->put_PortNumber(value));
}

template <typename D> int32_t consume_Windows_Devices_Sms_ISmsAppMessage<D>::TeleserviceId() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsAppMessage)->get_TeleserviceId(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Sms_ISmsAppMessage<D>::TeleserviceId(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsAppMessage)->put_TeleserviceId(value));
}

template <typename D> int32_t consume_Windows_Devices_Sms_ISmsAppMessage<D>::ProtocolId() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsAppMessage)->get_ProtocolId(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Sms_ISmsAppMessage<D>::ProtocolId(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsAppMessage)->put_ProtocolId(value));
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_Sms_ISmsAppMessage<D>::BinaryBody() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsAppMessage)->get_BinaryBody(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Sms_ISmsAppMessage<D>::BinaryBody(Windows::Storage::Streams::IBuffer const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsAppMessage)->put_BinaryBody(get_abi(value)));
}

template <typename D> Windows::Devices::Sms::SmsDataFormat consume_Windows_Devices_Sms_ISmsBinaryMessage<D>::Format() const
{
    Windows::Devices::Sms::SmsDataFormat value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsBinaryMessage)->get_Format(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Sms_ISmsBinaryMessage<D>::Format(Windows::Devices::Sms::SmsDataFormat const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsBinaryMessage)->put_Format(get_abi(value)));
}

template <typename D> com_array<uint8_t> consume_Windows_Devices_Sms_ISmsBinaryMessage<D>::GetData() const
{
    com_array<uint8_t> value;
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsBinaryMessage)->GetData(impl::put_size_abi(value), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Sms_ISmsBinaryMessage<D>::SetData(array_view<uint8_t const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsBinaryMessage)->SetData(value.size(), get_abi(value)));
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Devices_Sms_ISmsBroadcastMessage<D>::Timestamp() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsBroadcastMessage)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sms_ISmsBroadcastMessage<D>::To() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsBroadcastMessage)->get_To(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sms_ISmsBroadcastMessage<D>::Body() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsBroadcastMessage)->get_Body(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Sms_ISmsBroadcastMessage<D>::Channel() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsBroadcastMessage)->get_Channel(&value));
    return value;
}

template <typename D> Windows::Devices::Sms::SmsGeographicalScope consume_Windows_Devices_Sms_ISmsBroadcastMessage<D>::GeographicalScope() const
{
    Windows::Devices::Sms::SmsGeographicalScope value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsBroadcastMessage)->get_GeographicalScope(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Sms_ISmsBroadcastMessage<D>::MessageCode() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsBroadcastMessage)->get_MessageCode(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Sms_ISmsBroadcastMessage<D>::UpdateNumber() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsBroadcastMessage)->get_UpdateNumber(&value));
    return value;
}

template <typename D> Windows::Devices::Sms::SmsBroadcastType consume_Windows_Devices_Sms_ISmsBroadcastMessage<D>::BroadcastType() const
{
    Windows::Devices::Sms::SmsBroadcastType value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsBroadcastMessage)->get_BroadcastType(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Sms_ISmsBroadcastMessage<D>::IsEmergencyAlert() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsBroadcastMessage)->get_IsEmergencyAlert(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Sms_ISmsBroadcastMessage<D>::IsUserPopupRequested() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsBroadcastMessage)->get_IsUserPopupRequested(&value));
    return value;
}

template <typename D> Windows::Devices::Sms::SendSmsMessageOperation consume_Windows_Devices_Sms_ISmsDevice<D>::SendMessageAsync(Windows::Devices::Sms::ISmsMessage const& message) const
{
    Windows::Devices::Sms::SendSmsMessageOperation asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDevice)->SendMessageAsync(get_abi(message), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Devices::Sms::SmsEncodedLength consume_Windows_Devices_Sms_ISmsDevice<D>::CalculateLength(Windows::Devices::Sms::SmsTextMessage const& message) const
{
    Windows::Devices::Sms::SmsEncodedLength encodedLength{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDevice)->CalculateLength(get_abi(message), put_abi(encodedLength)));
    return encodedLength;
}

template <typename D> hstring consume_Windows_Devices_Sms_ISmsDevice<D>::AccountPhoneNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDevice)->get_AccountPhoneNumber(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sms::CellularClass consume_Windows_Devices_Sms_ISmsDevice<D>::CellularClass() const
{
    Windows::Devices::Sms::CellularClass value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDevice)->get_CellularClass(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sms::SmsDeviceMessageStore consume_Windows_Devices_Sms_ISmsDevice<D>::MessageStore() const
{
    Windows::Devices::Sms::SmsDeviceMessageStore value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDevice)->get_MessageStore(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sms::SmsDeviceStatus consume_Windows_Devices_Sms_ISmsDevice<D>::DeviceStatus() const
{
    Windows::Devices::Sms::SmsDeviceStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDevice)->get_DeviceStatus(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Devices_Sms_ISmsDevice<D>::SmsMessageReceived(Windows::Devices::Sms::SmsMessageReceivedEventHandler const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDevice)->add_SmsMessageReceived(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Devices::Sms::ISmsDevice> consume_Windows_Devices_Sms_ISmsDevice<D>::SmsMessageReceived(auto_revoke_t, Windows::Devices::Sms::SmsMessageReceivedEventHandler const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Sms::ISmsDevice>(this, &abi_t<Windows::Devices::Sms::ISmsDevice>::remove_SmsMessageReceived, SmsMessageReceived(eventHandler));
}

template <typename D> void consume_Windows_Devices_Sms_ISmsDevice<D>::SmsMessageReceived(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDevice)->remove_SmsMessageReceived(get_abi(eventCookie)));
}

template <typename D> event_token consume_Windows_Devices_Sms_ISmsDevice<D>::SmsDeviceStatusChanged(Windows::Devices::Sms::SmsDeviceStatusChangedEventHandler const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDevice)->add_SmsDeviceStatusChanged(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Devices::Sms::ISmsDevice> consume_Windows_Devices_Sms_ISmsDevice<D>::SmsDeviceStatusChanged(auto_revoke_t, Windows::Devices::Sms::SmsDeviceStatusChangedEventHandler const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Sms::ISmsDevice>(this, &abi_t<Windows::Devices::Sms::ISmsDevice>::remove_SmsDeviceStatusChanged, SmsDeviceStatusChanged(eventHandler));
}

template <typename D> void consume_Windows_Devices_Sms_ISmsDevice<D>::SmsDeviceStatusChanged(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDevice)->remove_SmsDeviceStatusChanged(get_abi(eventCookie)));
}

template <typename D> hstring consume_Windows_Devices_Sms_ISmsDevice2<D>::SmscAddress() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDevice2)->get_SmscAddress(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Sms_ISmsDevice2<D>::SmscAddress(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDevice2)->put_SmscAddress(get_abi(value)));
}

template <typename D> hstring consume_Windows_Devices_Sms_ISmsDevice2<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDevice2)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sms_ISmsDevice2<D>::ParentDeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDevice2)->get_ParentDeviceId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sms_ISmsDevice2<D>::AccountPhoneNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDevice2)->get_AccountPhoneNumber(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sms::CellularClass consume_Windows_Devices_Sms_ISmsDevice2<D>::CellularClass() const
{
    Windows::Devices::Sms::CellularClass value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDevice2)->get_CellularClass(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sms::SmsDeviceStatus consume_Windows_Devices_Sms_ISmsDevice2<D>::DeviceStatus() const
{
    Windows::Devices::Sms::SmsDeviceStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDevice2)->get_DeviceStatus(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sms::SmsEncodedLength consume_Windows_Devices_Sms_ISmsDevice2<D>::CalculateLength(Windows::Devices::Sms::ISmsMessageBase const& message) const
{
    Windows::Devices::Sms::SmsEncodedLength value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDevice2)->CalculateLength(get_abi(message), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::SmsSendMessageResult> consume_Windows_Devices_Sms_ISmsDevice2<D>::SendMessageAndGetResultAsync(Windows::Devices::Sms::ISmsMessageBase const& message) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::SmsSendMessageResult> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDevice2)->SendMessageAndGetResultAsync(get_abi(message), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> event_token consume_Windows_Devices_Sms_ISmsDevice2<D>::DeviceStatusChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Sms::SmsDevice2, Windows::Foundation::IInspectable> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDevice2)->add_DeviceStatusChanged(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Devices::Sms::ISmsDevice2> consume_Windows_Devices_Sms_ISmsDevice2<D>::DeviceStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sms::SmsDevice2, Windows::Foundation::IInspectable> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Sms::ISmsDevice2>(this, &abi_t<Windows::Devices::Sms::ISmsDevice2>::remove_DeviceStatusChanged, DeviceStatusChanged(eventHandler));
}

template <typename D> void consume_Windows_Devices_Sms_ISmsDevice2<D>::DeviceStatusChanged(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDevice2)->remove_DeviceStatusChanged(get_abi(eventCookie)));
}

template <typename D> hstring consume_Windows_Devices_Sms_ISmsDevice2Statics<D>::GetDeviceSelector() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDevice2Statics)->GetDeviceSelector(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sms::SmsDevice2 consume_Windows_Devices_Sms_ISmsDevice2Statics<D>::FromId(param::hstring const& deviceId) const
{
    Windows::Devices::Sms::SmsDevice2 value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDevice2Statics)->FromId(get_abi(deviceId), put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sms::SmsDevice2 consume_Windows_Devices_Sms_ISmsDevice2Statics<D>::GetDefault() const
{
    Windows::Devices::Sms::SmsDevice2 value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDevice2Statics)->GetDefault(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sms::SmsDevice2 consume_Windows_Devices_Sms_ISmsDevice2Statics<D>::FromParentId(param::hstring const& parentDeviceId) const
{
    Windows::Devices::Sms::SmsDevice2 value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDevice2Statics)->FromParentId(get_abi(parentDeviceId), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_Sms_ISmsDeviceMessageStore<D>::DeleteMessageAsync(uint32_t messageId) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDeviceMessageStore)->DeleteMessageAsync(messageId, put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_Sms_ISmsDeviceMessageStore<D>::DeleteMessagesAsync(Windows::Devices::Sms::SmsMessageFilter const& messageFilter) const
{
    Windows::Foundation::IAsyncAction asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDeviceMessageStore)->DeleteMessagesAsync(get_abi(messageFilter), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::ISmsMessage> consume_Windows_Devices_Sms_ISmsDeviceMessageStore<D>::GetMessageAsync(uint32_t messageId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::ISmsMessage> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDeviceMessageStore)->GetMessageAsync(messageId, put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperationWithProgress<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sms::ISmsMessage>, int32_t> consume_Windows_Devices_Sms_ISmsDeviceMessageStore<D>::GetMessagesAsync(Windows::Devices::Sms::SmsMessageFilter const& messageFilter) const
{
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sms::ISmsMessage>, int32_t> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDeviceMessageStore)->GetMessagesAsync(get_abi(messageFilter), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> uint32_t consume_Windows_Devices_Sms_ISmsDeviceMessageStore<D>::MaxMessages() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDeviceMessageStore)->get_MaxMessages(&value));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sms_ISmsDeviceStatics<D>::GetDeviceSelector() const
{
    hstring phstrDeviceClassSelector{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDeviceStatics)->GetDeviceSelector(put_abi(phstrDeviceClassSelector)));
    return phstrDeviceClassSelector;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::SmsDevice> consume_Windows_Devices_Sms_ISmsDeviceStatics<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::SmsDevice> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDeviceStatics)->FromIdAsync(get_abi(deviceId), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::SmsDevice> consume_Windows_Devices_Sms_ISmsDeviceStatics<D>::GetDefaultAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::SmsDevice> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDeviceStatics)->GetDefaultAsync(put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::SmsDevice> consume_Windows_Devices_Sms_ISmsDeviceStatics2<D>::FromNetworkAccountIdAsync(param::hstring const& networkAccountId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::SmsDevice> asyncInfo{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsDeviceStatics2)->FromNetworkAccountIdAsync(get_abi(networkAccountId), put_abi(asyncInfo)));
    return asyncInfo;
}

template <typename D> Windows::Devices::Sms::SmsMessageType consume_Windows_Devices_Sms_ISmsFilterRule<D>::MessageType() const
{
    Windows::Devices::Sms::SmsMessageType value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsFilterRule)->get_MessageType(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Devices_Sms_ISmsFilterRule<D>::ImsiPrefixes() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsFilterRule)->get_ImsiPrefixes(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Devices_Sms_ISmsFilterRule<D>::DeviceIds() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsFilterRule)->get_DeviceIds(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Devices_Sms_ISmsFilterRule<D>::SenderNumbers() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsFilterRule)->get_SenderNumbers(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Devices_Sms_ISmsFilterRule<D>::TextMessagePrefixes() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsFilterRule)->get_TextMessagePrefixes(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<int32_t> consume_Windows_Devices_Sms_ISmsFilterRule<D>::PortNumbers() const
{
    Windows::Foundation::Collections::IVector<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsFilterRule)->get_PortNumbers(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sms::CellularClass consume_Windows_Devices_Sms_ISmsFilterRule<D>::CellularClass() const
{
    Windows::Devices::Sms::CellularClass value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsFilterRule)->get_CellularClass(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Sms_ISmsFilterRule<D>::CellularClass(Windows::Devices::Sms::CellularClass const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsFilterRule)->put_CellularClass(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<int32_t> consume_Windows_Devices_Sms_ISmsFilterRule<D>::ProtocolIds() const
{
    Windows::Foundation::Collections::IVector<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsFilterRule)->get_ProtocolIds(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<int32_t> consume_Windows_Devices_Sms_ISmsFilterRule<D>::TeleserviceIds() const
{
    Windows::Foundation::Collections::IVector<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsFilterRule)->get_TeleserviceIds(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Devices_Sms_ISmsFilterRule<D>::WapApplicationIds() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsFilterRule)->get_WapApplicationIds(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Devices_Sms_ISmsFilterRule<D>::WapContentTypes() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsFilterRule)->get_WapContentTypes(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Devices::Sms::SmsBroadcastType> consume_Windows_Devices_Sms_ISmsFilterRule<D>::BroadcastTypes() const
{
    Windows::Foundation::Collections::IVector<Windows::Devices::Sms::SmsBroadcastType> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsFilterRule)->get_BroadcastTypes(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<int32_t> consume_Windows_Devices_Sms_ISmsFilterRule<D>::BroadcastChannels() const
{
    Windows::Foundation::Collections::IVector<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsFilterRule)->get_BroadcastChannels(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sms::SmsFilterRule consume_Windows_Devices_Sms_ISmsFilterRuleFactory<D>::CreateFilterRule(Windows::Devices::Sms::SmsMessageType const& messageType) const
{
    Windows::Devices::Sms::SmsFilterRule value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsFilterRuleFactory)->CreateFilterRule(get_abi(messageType), put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sms::SmsFilterActionType consume_Windows_Devices_Sms_ISmsFilterRules<D>::ActionType() const
{
    Windows::Devices::Sms::SmsFilterActionType value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsFilterRules)->get_ActionType(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVector<Windows::Devices::Sms::SmsFilterRule> consume_Windows_Devices_Sms_ISmsFilterRules<D>::Rules() const
{
    Windows::Foundation::Collections::IVector<Windows::Devices::Sms::SmsFilterRule> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsFilterRules)->get_Rules(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sms::SmsFilterRules consume_Windows_Devices_Sms_ISmsFilterRulesFactory<D>::CreateFilterRules(Windows::Devices::Sms::SmsFilterActionType const& actionType) const
{
    Windows::Devices::Sms::SmsFilterRules value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsFilterRulesFactory)->CreateFilterRules(get_abi(actionType), put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Sms_ISmsMessage<D>::Id() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsMessage)->get_Id(&value));
    return value;
}

template <typename D> Windows::Devices::Sms::SmsMessageClass consume_Windows_Devices_Sms_ISmsMessage<D>::MessageClass() const
{
    Windows::Devices::Sms::SmsMessageClass value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsMessage)->get_MessageClass(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sms::SmsMessageType consume_Windows_Devices_Sms_ISmsMessageBase<D>::MessageType() const
{
    Windows::Devices::Sms::SmsMessageType value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsMessageBase)->get_MessageType(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sms_ISmsMessageBase<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsMessageBase)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sms::CellularClass consume_Windows_Devices_Sms_ISmsMessageBase<D>::CellularClass() const
{
    Windows::Devices::Sms::CellularClass value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsMessageBase)->get_CellularClass(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sms::SmsMessageClass consume_Windows_Devices_Sms_ISmsMessageBase<D>::MessageClass() const
{
    Windows::Devices::Sms::SmsMessageClass value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsMessageBase)->get_MessageClass(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sms_ISmsMessageBase<D>::SimIccId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsMessageBase)->get_SimIccId(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sms::SmsTextMessage consume_Windows_Devices_Sms_ISmsMessageReceivedEventArgs<D>::TextMessage() const
{
    Windows::Devices::Sms::SmsTextMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsMessageReceivedEventArgs)->get_TextMessage(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sms::SmsBinaryMessage consume_Windows_Devices_Sms_ISmsMessageReceivedEventArgs<D>::BinaryMessage() const
{
    Windows::Devices::Sms::SmsBinaryMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsMessageReceivedEventArgs)->get_BinaryMessage(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sms::SmsMessageType consume_Windows_Devices_Sms_ISmsMessageReceivedTriggerDetails<D>::MessageType() const
{
    Windows::Devices::Sms::SmsMessageType value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsMessageReceivedTriggerDetails)->get_MessageType(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sms::SmsTextMessage2 consume_Windows_Devices_Sms_ISmsMessageReceivedTriggerDetails<D>::TextMessage() const
{
    Windows::Devices::Sms::SmsTextMessage2 value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsMessageReceivedTriggerDetails)->get_TextMessage(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sms::SmsWapMessage consume_Windows_Devices_Sms_ISmsMessageReceivedTriggerDetails<D>::WapMessage() const
{
    Windows::Devices::Sms::SmsWapMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsMessageReceivedTriggerDetails)->get_WapMessage(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sms::SmsAppMessage consume_Windows_Devices_Sms_ISmsMessageReceivedTriggerDetails<D>::AppMessage() const
{
    Windows::Devices::Sms::SmsAppMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsMessageReceivedTriggerDetails)->get_AppMessage(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sms::SmsBroadcastMessage consume_Windows_Devices_Sms_ISmsMessageReceivedTriggerDetails<D>::BroadcastMessage() const
{
    Windows::Devices::Sms::SmsBroadcastMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsMessageReceivedTriggerDetails)->get_BroadcastMessage(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sms::SmsVoicemailMessage consume_Windows_Devices_Sms_ISmsMessageReceivedTriggerDetails<D>::VoicemailMessage() const
{
    Windows::Devices::Sms::SmsVoicemailMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsMessageReceivedTriggerDetails)->get_VoicemailMessage(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sms::SmsStatusMessage consume_Windows_Devices_Sms_ISmsMessageReceivedTriggerDetails<D>::StatusMessage() const
{
    Windows::Devices::Sms::SmsStatusMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsMessageReceivedTriggerDetails)->get_StatusMessage(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Sms_ISmsMessageReceivedTriggerDetails<D>::Drop() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsMessageReceivedTriggerDetails)->Drop());
}

template <typename D> void consume_Windows_Devices_Sms_ISmsMessageReceivedTriggerDetails<D>::Accept() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsMessageReceivedTriggerDetails)->Accept());
}

template <typename D> hstring consume_Windows_Devices_Sms_ISmsMessageRegistration<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsMessageRegistration)->get_Id(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Sms_ISmsMessageRegistration<D>::Unregister() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsMessageRegistration)->Unregister());
}

template <typename D> event_token consume_Windows_Devices_Sms_ISmsMessageRegistration<D>::MessageReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::Sms::SmsMessageRegistration, Windows::Devices::Sms::SmsMessageReceivedTriggerDetails> const& eventHandler) const
{
    event_token eventCookie{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsMessageRegistration)->add_MessageReceived(get_abi(eventHandler), put_abi(eventCookie)));
    return eventCookie;
}

template <typename D> event_revoker<Windows::Devices::Sms::ISmsMessageRegistration> consume_Windows_Devices_Sms_ISmsMessageRegistration<D>::MessageReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Sms::SmsMessageRegistration, Windows::Devices::Sms::SmsMessageReceivedTriggerDetails> const& eventHandler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Sms::ISmsMessageRegistration>(this, &abi_t<Windows::Devices::Sms::ISmsMessageRegistration>::remove_MessageReceived, MessageReceived(eventHandler));
}

template <typename D> void consume_Windows_Devices_Sms_ISmsMessageRegistration<D>::MessageReceived(event_token const& eventCookie) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsMessageRegistration)->remove_MessageReceived(get_abi(eventCookie)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Sms::SmsMessageRegistration> consume_Windows_Devices_Sms_ISmsMessageRegistrationStatics<D>::AllRegistrations() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Sms::SmsMessageRegistration> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsMessageRegistrationStatics)->get_AllRegistrations(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sms::SmsMessageRegistration consume_Windows_Devices_Sms_ISmsMessageRegistrationStatics<D>::Register(param::hstring const& id, Windows::Devices::Sms::SmsFilterRules const& filterRules) const
{
    Windows::Devices::Sms::SmsMessageRegistration value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsMessageRegistrationStatics)->Register(get_abi(id), get_abi(filterRules), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sms_ISmsReceivedEventDetails<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsReceivedEventDetails)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Sms_ISmsReceivedEventDetails<D>::MessageIndex() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsReceivedEventDetails)->get_MessageIndex(&value));
    return value;
}

template <typename D> Windows::Devices::Sms::SmsMessageClass consume_Windows_Devices_Sms_ISmsReceivedEventDetails2<D>::MessageClass() const
{
    Windows::Devices::Sms::SmsMessageClass value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsReceivedEventDetails2)->get_MessageClass(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sms::SmsBinaryMessage consume_Windows_Devices_Sms_ISmsReceivedEventDetails2<D>::BinaryMessage() const
{
    Windows::Devices::Sms::SmsBinaryMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsReceivedEventDetails2)->get_BinaryMessage(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Sms_ISmsSendMessageResult<D>::IsSuccessful() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsSendMessageResult)->get_IsSuccessful(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<int32_t> consume_Windows_Devices_Sms_ISmsSendMessageResult<D>::MessageReferenceNumbers() const
{
    Windows::Foundation::Collections::IVectorView<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsSendMessageResult)->get_MessageReferenceNumbers(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sms::CellularClass consume_Windows_Devices_Sms_ISmsSendMessageResult<D>::CellularClass() const
{
    Windows::Devices::Sms::CellularClass value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsSendMessageResult)->get_CellularClass(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Sms::SmsModemErrorCode consume_Windows_Devices_Sms_ISmsSendMessageResult<D>::ModemErrorCode() const
{
    Windows::Devices::Sms::SmsModemErrorCode value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsSendMessageResult)->get_ModemErrorCode(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Sms_ISmsSendMessageResult<D>::IsErrorTransient() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsSendMessageResult)->get_IsErrorTransient(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Sms_ISmsSendMessageResult<D>::NetworkCauseCode() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsSendMessageResult)->get_NetworkCauseCode(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Sms_ISmsSendMessageResult<D>::TransportFailureCause() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsSendMessageResult)->get_TransportFailureCause(&value));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sms_ISmsStatusMessage<D>::To() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsStatusMessage)->get_To(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sms_ISmsStatusMessage<D>::From() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsStatusMessage)->get_From(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sms_ISmsStatusMessage<D>::Body() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsStatusMessage)->get_Body(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Sms_ISmsStatusMessage<D>::Status() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsStatusMessage)->get_Status(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Sms_ISmsStatusMessage<D>::MessageReferenceNumber() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsStatusMessage)->get_MessageReferenceNumber(&value));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Devices_Sms_ISmsStatusMessage<D>::ServiceCenterTimestamp() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsStatusMessage)->get_ServiceCenterTimestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Devices_Sms_ISmsStatusMessage<D>::DischargeTime() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsStatusMessage)->get_DischargeTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Devices_Sms_ISmsTextMessage<D>::Timestamp() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsTextMessage)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Sms_ISmsTextMessage<D>::PartReferenceId() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsTextMessage)->get_PartReferenceId(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Sms_ISmsTextMessage<D>::PartNumber() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsTextMessage)->get_PartNumber(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Devices_Sms_ISmsTextMessage<D>::PartCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsTextMessage)->get_PartCount(&value));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sms_ISmsTextMessage<D>::To() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsTextMessage)->get_To(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Sms_ISmsTextMessage<D>::To(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsTextMessage)->put_To(get_abi(value)));
}

template <typename D> hstring consume_Windows_Devices_Sms_ISmsTextMessage<D>::From() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsTextMessage)->get_From(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Sms_ISmsTextMessage<D>::From(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsTextMessage)->put_From(get_abi(value)));
}

template <typename D> hstring consume_Windows_Devices_Sms_ISmsTextMessage<D>::Body() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsTextMessage)->get_Body(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Sms_ISmsTextMessage<D>::Body(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsTextMessage)->put_Body(get_abi(value)));
}

template <typename D> Windows::Devices::Sms::SmsEncoding consume_Windows_Devices_Sms_ISmsTextMessage<D>::Encoding() const
{
    Windows::Devices::Sms::SmsEncoding value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsTextMessage)->get_Encoding(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Sms_ISmsTextMessage<D>::Encoding(Windows::Devices::Sms::SmsEncoding const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsTextMessage)->put_Encoding(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Sms::ISmsBinaryMessage> consume_Windows_Devices_Sms_ISmsTextMessage<D>::ToBinaryMessages(Windows::Devices::Sms::SmsDataFormat const& format) const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Sms::ISmsBinaryMessage> messages{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsTextMessage)->ToBinaryMessages(get_abi(format), put_abi(messages)));
    return messages;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Devices_Sms_ISmsTextMessage2<D>::Timestamp() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsTextMessage2)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sms_ISmsTextMessage2<D>::To() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsTextMessage2)->get_To(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Sms_ISmsTextMessage2<D>::To(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsTextMessage2)->put_To(get_abi(value)));
}

template <typename D> hstring consume_Windows_Devices_Sms_ISmsTextMessage2<D>::From() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsTextMessage2)->get_From(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sms_ISmsTextMessage2<D>::Body() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsTextMessage2)->get_Body(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Sms_ISmsTextMessage2<D>::Body(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsTextMessage2)->put_Body(get_abi(value)));
}

template <typename D> Windows::Devices::Sms::SmsEncoding consume_Windows_Devices_Sms_ISmsTextMessage2<D>::Encoding() const
{
    Windows::Devices::Sms::SmsEncoding value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsTextMessage2)->get_Encoding(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Sms_ISmsTextMessage2<D>::Encoding(Windows::Devices::Sms::SmsEncoding const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsTextMessage2)->put_Encoding(get_abi(value)));
}

template <typename D> hstring consume_Windows_Devices_Sms_ISmsTextMessage2<D>::CallbackNumber() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsTextMessage2)->get_CallbackNumber(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Sms_ISmsTextMessage2<D>::CallbackNumber(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsTextMessage2)->put_CallbackNumber(get_abi(value)));
}

template <typename D> bool consume_Windows_Devices_Sms_ISmsTextMessage2<D>::IsDeliveryNotificationEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsTextMessage2)->get_IsDeliveryNotificationEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Sms_ISmsTextMessage2<D>::IsDeliveryNotificationEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsTextMessage2)->put_IsDeliveryNotificationEnabled(value));
}

template <typename D> int32_t consume_Windows_Devices_Sms_ISmsTextMessage2<D>::RetryAttemptCount() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsTextMessage2)->get_RetryAttemptCount(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Sms_ISmsTextMessage2<D>::RetryAttemptCount(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsTextMessage2)->put_RetryAttemptCount(value));
}

template <typename D> int32_t consume_Windows_Devices_Sms_ISmsTextMessage2<D>::TeleserviceId() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsTextMessage2)->get_TeleserviceId(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Sms_ISmsTextMessage2<D>::ProtocolId() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsTextMessage2)->get_ProtocolId(&value));
    return value;
}

template <typename D> Windows::Devices::Sms::SmsTextMessage consume_Windows_Devices_Sms_ISmsTextMessageStatics<D>::FromBinaryMessage(Windows::Devices::Sms::SmsBinaryMessage const& binaryMessage) const
{
    Windows::Devices::Sms::SmsTextMessage textMessage{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsTextMessageStatics)->FromBinaryMessage(get_abi(binaryMessage), put_abi(textMessage)));
    return textMessage;
}

template <typename D> Windows::Devices::Sms::SmsTextMessage consume_Windows_Devices_Sms_ISmsTextMessageStatics<D>::FromBinaryData(Windows::Devices::Sms::SmsDataFormat const& format, array_view<uint8_t const> value) const
{
    Windows::Devices::Sms::SmsTextMessage textMessage{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsTextMessageStatics)->FromBinaryData(get_abi(format), value.size(), get_abi(value), put_abi(textMessage)));
    return textMessage;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Devices_Sms_ISmsVoicemailMessage<D>::Timestamp() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsVoicemailMessage)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sms_ISmsVoicemailMessage<D>::To() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsVoicemailMessage)->get_To(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sms_ISmsVoicemailMessage<D>::Body() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsVoicemailMessage)->get_Body(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<int32_t> consume_Windows_Devices_Sms_ISmsVoicemailMessage<D>::MessageCount() const
{
    Windows::Foundation::IReference<int32_t> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsVoicemailMessage)->get_MessageCount(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime consume_Windows_Devices_Sms_ISmsWapMessage<D>::Timestamp() const
{
    Windows::Foundation::DateTime value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsWapMessage)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sms_ISmsWapMessage<D>::To() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsWapMessage)->get_To(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sms_ISmsWapMessage<D>::From() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsWapMessage)->get_From(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sms_ISmsWapMessage<D>::ApplicationId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsWapMessage)->get_ApplicationId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Sms_ISmsWapMessage<D>::ContentType() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsWapMessage)->get_ContentType(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_Sms_ISmsWapMessage<D>::BinaryBody() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsWapMessage)->get_BinaryBody(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, hstring> consume_Windows_Devices_Sms_ISmsWapMessage<D>::Headers() const
{
    Windows::Foundation::Collections::IMap<hstring, hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Sms::ISmsWapMessage)->get_Headers(put_abi(value)));
    return value;
}

template <> struct delegate<Windows::Devices::Sms::SmsDeviceStatusChangedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::Devices::Sms::SmsDeviceStatusChangedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::Devices::Sms::SmsDeviceStatusChangedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Devices::Sms::SmsDevice const*>(&sender));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <> struct delegate<Windows::Devices::Sms::SmsMessageReceivedEventHandler>
{
    template <typename H>
    struct type : implements_delegate<Windows::Devices::Sms::SmsMessageReceivedEventHandler, H>
    {
        type(H&& handler) : implements_delegate<Windows::Devices::Sms::SmsMessageReceivedEventHandler, H>(std::forward<H>(handler)) {}

        HRESULT __stdcall Invoke(::IUnknown* sender, ::IUnknown* e) noexcept final
        {
            try
            {
                (*this)(*reinterpret_cast<Windows::Devices::Sms::SmsDevice const*>(&sender), *reinterpret_cast<Windows::Devices::Sms::SmsMessageReceivedEventArgs const*>(&e));
                return S_OK;
            }
            catch (...)
            {
                return to_hresult();
            }
        }
    };
};

template <typename D>
struct produce<D, Windows::Devices::Sms::ISmsAppMessage> : produce_base<D, Windows::Devices::Sms::ISmsAppMessage>
{
    HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_To(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().To());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_To(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().To(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_From(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().From());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Body(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Body());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Body(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Body(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CallbackNumber(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CallbackNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CallbackNumber(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CallbackNumber(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDeliveryNotificationEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDeliveryNotificationEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsDeliveryNotificationEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsDeliveryNotificationEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RetryAttemptCount(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RetryAttemptCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RetryAttemptCount(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RetryAttemptCount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Encoding(abi_t<Windows::Devices::Sms::SmsEncoding>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Encoding());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Encoding(abi_t<Windows::Devices::Sms::SmsEncoding> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Encoding(*reinterpret_cast<Windows::Devices::Sms::SmsEncoding const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PortNumber(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PortNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PortNumber(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PortNumber(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TeleserviceId(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TeleserviceId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TeleserviceId(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TeleserviceId(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProtocolId(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProtocolId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ProtocolId(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProtocolId(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BinaryBody(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BinaryBody());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BinaryBody(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BinaryBody(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sms::ISmsBinaryMessage> : produce_base<D, Windows::Devices::Sms::ISmsBinaryMessage>
{
    HRESULT __stdcall get_Format(abi_t<Windows::Devices::Sms::SmsDataFormat>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Format());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Format(abi_t<Windows::Devices::Sms::SmsDataFormat> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Format(*reinterpret_cast<Windows::Devices::Sms::SmsDataFormat const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetData(uint32_t* __valueSize, uint8_t** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            std::tie(*__valueSize, *value) = detach_abi(this->shim().GetData());
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetData(uint32_t __valueSize, uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetData(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(value), reinterpret_cast<uint8_t const *>(value) + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sms::ISmsBroadcastMessage> : produce_base<D, Windows::Devices::Sms::ISmsBroadcastMessage>
{
    HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_To(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().To());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Body(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Body());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Channel(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Channel());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GeographicalScope(abi_t<Windows::Devices::Sms::SmsGeographicalScope>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GeographicalScope());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MessageCode(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MessageCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UpdateNumber(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UpdateNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BroadcastType(abi_t<Windows::Devices::Sms::SmsBroadcastType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BroadcastType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsEmergencyAlert(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsEmergencyAlert());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsUserPopupRequested(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsUserPopupRequested());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sms::ISmsDevice> : produce_base<D, Windows::Devices::Sms::ISmsDevice>
{
    HRESULT __stdcall SendMessageAsync(::IUnknown* message, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().SendMessageAsync(*reinterpret_cast<Windows::Devices::Sms::ISmsMessage const*>(&message)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CalculateLength(::IUnknown* message, abi_t<Windows::Devices::Sms::SmsEncodedLength>* encodedLength) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *encodedLength = detach_abi(this->shim().CalculateLength(*reinterpret_cast<Windows::Devices::Sms::SmsTextMessage const*>(&message)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AccountPhoneNumber(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AccountPhoneNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CellularClass(abi_t<Windows::Devices::Sms::CellularClass>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CellularClass());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MessageStore(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MessageStore());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceStatus(abi_t<Windows::Devices::Sms::SmsDeviceStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SmsMessageReceived(::IUnknown* eventHandler, abi_t<event_token>* eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_abi(this->shim().SmsMessageReceived(*reinterpret_cast<Windows::Devices::Sms::SmsMessageReceivedEventHandler const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SmsMessageReceived(abi_t<event_token> eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SmsMessageReceived(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SmsDeviceStatusChanged(::IUnknown* eventHandler, abi_t<event_token>* eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_abi(this->shim().SmsDeviceStatusChanged(*reinterpret_cast<Windows::Devices::Sms::SmsDeviceStatusChangedEventHandler const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SmsDeviceStatusChanged(abi_t<event_token> eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SmsDeviceStatusChanged(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sms::ISmsDevice2> : produce_base<D, Windows::Devices::Sms::ISmsDevice2>
{
    HRESULT __stdcall get_SmscAddress(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SmscAddress());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SmscAddress(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SmscAddress(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ParentDeviceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ParentDeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AccountPhoneNumber(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AccountPhoneNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CellularClass(abi_t<Windows::Devices::Sms::CellularClass>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CellularClass());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceStatus(abi_t<Windows::Devices::Sms::SmsDeviceStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CalculateLength(::IUnknown* message, abi_t<Windows::Devices::Sms::SmsEncodedLength>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CalculateLength(*reinterpret_cast<Windows::Devices::Sms::ISmsMessageBase const*>(&message)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SendMessageAndGetResultAsync(::IUnknown* message, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().SendMessageAndGetResultAsync(*reinterpret_cast<Windows::Devices::Sms::ISmsMessageBase const*>(&message)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DeviceStatusChanged(::IUnknown* eventHandler, abi_t<event_token>* eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_abi(this->shim().DeviceStatusChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Sms::SmsDevice2, Windows::Foundation::IInspectable> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DeviceStatusChanged(abi_t<event_token> eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeviceStatusChanged(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sms::ISmsDevice2Statics> : produce_base<D, Windows::Devices::Sms::ISmsDevice2Statics>
{
    HRESULT __stdcall GetDeviceSelector(HSTRING* value) noexcept override
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

    HRESULT __stdcall FromId(HSTRING deviceId, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromId(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDefault(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDefault());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromParentId(HSTRING parentDeviceId, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromParentId(*reinterpret_cast<hstring const*>(&parentDeviceId)));
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
struct produce<D, Windows::Devices::Sms::ISmsDeviceMessageStore> : produce_base<D, Windows::Devices::Sms::ISmsDeviceMessageStore>
{
    HRESULT __stdcall DeleteMessageAsync(uint32_t messageId, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().DeleteMessageAsync(messageId));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeleteMessagesAsync(abi_t<Windows::Devices::Sms::SmsMessageFilter> messageFilter, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().DeleteMessagesAsync(*reinterpret_cast<Windows::Devices::Sms::SmsMessageFilter const*>(&messageFilter)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetMessageAsync(uint32_t messageId, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().GetMessageAsync(messageId));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetMessagesAsync(abi_t<Windows::Devices::Sms::SmsMessageFilter> messageFilter, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().GetMessagesAsync(*reinterpret_cast<Windows::Devices::Sms::SmsMessageFilter const*>(&messageFilter)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxMessages(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxMessages());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sms::ISmsDeviceStatics> : produce_base<D, Windows::Devices::Sms::ISmsDeviceStatics>
{
    HRESULT __stdcall GetDeviceSelector(HSTRING* phstrDeviceClassSelector) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *phstrDeviceClassSelector = detach_abi(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            *phstrDeviceClassSelector = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDefaultAsync(::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().GetDefaultAsync());
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sms::ISmsDeviceStatics2> : produce_base<D, Windows::Devices::Sms::ISmsDeviceStatics2>
{
    HRESULT __stdcall FromNetworkAccountIdAsync(HSTRING networkAccountId, ::IUnknown** asyncInfo) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *asyncInfo = detach_abi(this->shim().FromNetworkAccountIdAsync(*reinterpret_cast<hstring const*>(&networkAccountId)));
            return S_OK;
        }
        catch (...)
        {
            *asyncInfo = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sms::ISmsFilterRule> : produce_base<D, Windows::Devices::Sms::ISmsFilterRule>
{
    HRESULT __stdcall get_MessageType(abi_t<Windows::Devices::Sms::SmsMessageType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MessageType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ImsiPrefixes(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ImsiPrefixes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceIds(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceIds());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SenderNumbers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SenderNumbers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TextMessagePrefixes(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TextMessagePrefixes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PortNumbers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PortNumbers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CellularClass(abi_t<Windows::Devices::Sms::CellularClass>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CellularClass());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CellularClass(abi_t<Windows::Devices::Sms::CellularClass> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CellularClass(*reinterpret_cast<Windows::Devices::Sms::CellularClass const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProtocolIds(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProtocolIds());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TeleserviceIds(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TeleserviceIds());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WapApplicationIds(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WapApplicationIds());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WapContentTypes(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WapContentTypes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BroadcastTypes(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BroadcastTypes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BroadcastChannels(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BroadcastChannels());
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
struct produce<D, Windows::Devices::Sms::ISmsFilterRuleFactory> : produce_base<D, Windows::Devices::Sms::ISmsFilterRuleFactory>
{
    HRESULT __stdcall CreateFilterRule(abi_t<Windows::Devices::Sms::SmsMessageType> messageType, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateFilterRule(*reinterpret_cast<Windows::Devices::Sms::SmsMessageType const*>(&messageType)));
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
struct produce<D, Windows::Devices::Sms::ISmsFilterRules> : produce_base<D, Windows::Devices::Sms::ISmsFilterRules>
{
    HRESULT __stdcall get_ActionType(abi_t<Windows::Devices::Sms::SmsFilterActionType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ActionType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Rules(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Rules());
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
struct produce<D, Windows::Devices::Sms::ISmsFilterRulesFactory> : produce_base<D, Windows::Devices::Sms::ISmsFilterRulesFactory>
{
    HRESULT __stdcall CreateFilterRules(abi_t<Windows::Devices::Sms::SmsFilterActionType> actionType, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateFilterRules(*reinterpret_cast<Windows::Devices::Sms::SmsFilterActionType const*>(&actionType)));
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
struct produce<D, Windows::Devices::Sms::ISmsMessage> : produce_base<D, Windows::Devices::Sms::ISmsMessage>
{
    HRESULT __stdcall get_Id(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MessageClass(abi_t<Windows::Devices::Sms::SmsMessageClass>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MessageClass());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sms::ISmsMessageBase> : produce_base<D, Windows::Devices::Sms::ISmsMessageBase>
{
    HRESULT __stdcall get_MessageType(abi_t<Windows::Devices::Sms::SmsMessageType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MessageType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CellularClass(abi_t<Windows::Devices::Sms::CellularClass>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CellularClass());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MessageClass(abi_t<Windows::Devices::Sms::SmsMessageClass>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MessageClass());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SimIccId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SimIccId());
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
struct produce<D, Windows::Devices::Sms::ISmsMessageReceivedEventArgs> : produce_base<D, Windows::Devices::Sms::ISmsMessageReceivedEventArgs>
{
    HRESULT __stdcall get_TextMessage(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TextMessage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BinaryMessage(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BinaryMessage());
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
struct produce<D, Windows::Devices::Sms::ISmsMessageReceivedTriggerDetails> : produce_base<D, Windows::Devices::Sms::ISmsMessageReceivedTriggerDetails>
{
    HRESULT __stdcall get_MessageType(abi_t<Windows::Devices::Sms::SmsMessageType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MessageType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TextMessage(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TextMessage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WapMessage(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WapMessage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AppMessage(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AppMessage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BroadcastMessage(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BroadcastMessage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VoicemailMessage(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VoicemailMessage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StatusMessage(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StatusMessage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Drop() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Drop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Accept() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Accept();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sms::ISmsMessageRegistration> : produce_base<D, Windows::Devices::Sms::ISmsMessageRegistration>
{
    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Unregister() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Unregister();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_MessageReceived(::IUnknown* eventHandler, abi_t<event_token>* eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *eventCookie = detach_abi(this->shim().MessageReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Sms::SmsMessageRegistration, Windows::Devices::Sms::SmsMessageReceivedTriggerDetails> const*>(&eventHandler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_MessageReceived(abi_t<event_token> eventCookie) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MessageReceived(*reinterpret_cast<event_token const*>(&eventCookie));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sms::ISmsMessageRegistrationStatics> : produce_base<D, Windows::Devices::Sms::ISmsMessageRegistrationStatics>
{
    HRESULT __stdcall get_AllRegistrations(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AllRegistrations());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Register(HSTRING id, ::IUnknown* filterRules, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Register(*reinterpret_cast<hstring const*>(&id), *reinterpret_cast<Windows::Devices::Sms::SmsFilterRules const*>(&filterRules)));
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
struct produce<D, Windows::Devices::Sms::ISmsReceivedEventDetails> : produce_base<D, Windows::Devices::Sms::ISmsReceivedEventDetails>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MessageIndex(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MessageIndex());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sms::ISmsReceivedEventDetails2> : produce_base<D, Windows::Devices::Sms::ISmsReceivedEventDetails2>
{
    HRESULT __stdcall get_MessageClass(abi_t<Windows::Devices::Sms::SmsMessageClass>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MessageClass());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BinaryMessage(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BinaryMessage());
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
struct produce<D, Windows::Devices::Sms::ISmsSendMessageResult> : produce_base<D, Windows::Devices::Sms::ISmsSendMessageResult>
{
    HRESULT __stdcall get_IsSuccessful(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSuccessful());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MessageReferenceNumbers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MessageReferenceNumbers());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CellularClass(abi_t<Windows::Devices::Sms::CellularClass>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CellularClass());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ModemErrorCode(abi_t<Windows::Devices::Sms::SmsModemErrorCode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ModemErrorCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsErrorTransient(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsErrorTransient());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NetworkCauseCode(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NetworkCauseCode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TransportFailureCause(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TransportFailureCause());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sms::ISmsStatusMessage> : produce_base<D, Windows::Devices::Sms::ISmsStatusMessage>
{
    HRESULT __stdcall get_To(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().To());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_From(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().From());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Body(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Body());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MessageReferenceNumber(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MessageReferenceNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ServiceCenterTimestamp(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ServiceCenterTimestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DischargeTime(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DischargeTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sms::ISmsTextMessage> : produce_base<D, Windows::Devices::Sms::ISmsTextMessage>
{
    HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PartReferenceId(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PartReferenceId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PartNumber(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PartNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PartCount(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PartCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_To(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().To());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_To(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().To(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_From(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().From());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_From(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().From(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Body(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Body());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Body(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Body(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Encoding(abi_t<Windows::Devices::Sms::SmsEncoding>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Encoding());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Encoding(abi_t<Windows::Devices::Sms::SmsEncoding> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Encoding(*reinterpret_cast<Windows::Devices::Sms::SmsEncoding const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ToBinaryMessages(abi_t<Windows::Devices::Sms::SmsDataFormat> format, ::IUnknown** messages) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *messages = detach_abi(this->shim().ToBinaryMessages(*reinterpret_cast<Windows::Devices::Sms::SmsDataFormat const*>(&format)));
            return S_OK;
        }
        catch (...)
        {
            *messages = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sms::ISmsTextMessage2> : produce_base<D, Windows::Devices::Sms::ISmsTextMessage2>
{
    HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_To(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().To());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_To(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().To(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_From(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().From());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Body(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Body());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Body(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Body(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Encoding(abi_t<Windows::Devices::Sms::SmsEncoding>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Encoding());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Encoding(abi_t<Windows::Devices::Sms::SmsEncoding> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Encoding(*reinterpret_cast<Windows::Devices::Sms::SmsEncoding const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CallbackNumber(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CallbackNumber());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CallbackNumber(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CallbackNumber(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsDeliveryNotificationEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsDeliveryNotificationEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsDeliveryNotificationEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsDeliveryNotificationEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RetryAttemptCount(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RetryAttemptCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RetryAttemptCount(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RetryAttemptCount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TeleserviceId(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TeleserviceId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProtocolId(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProtocolId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sms::ISmsTextMessageStatics> : produce_base<D, Windows::Devices::Sms::ISmsTextMessageStatics>
{
    HRESULT __stdcall FromBinaryMessage(::IUnknown* binaryMessage, ::IUnknown** textMessage) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *textMessage = detach_abi(this->shim().FromBinaryMessage(*reinterpret_cast<Windows::Devices::Sms::SmsBinaryMessage const*>(&binaryMessage)));
            return S_OK;
        }
        catch (...)
        {
            *textMessage = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromBinaryData(abi_t<Windows::Devices::Sms::SmsDataFormat> format, uint32_t __valueSize, uint8_t* value, ::IUnknown** textMessage) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *textMessage = detach_abi(this->shim().FromBinaryData(*reinterpret_cast<Windows::Devices::Sms::SmsDataFormat const*>(&format), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(value), reinterpret_cast<uint8_t const *>(value) + __valueSize)));
            return S_OK;
        }
        catch (...)
        {
            *textMessage = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Sms::ISmsVoicemailMessage> : produce_base<D, Windows::Devices::Sms::ISmsVoicemailMessage>
{
    HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_To(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().To());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Body(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Body());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MessageCount(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MessageCount());
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
struct produce<D, Windows::Devices::Sms::ISmsWapMessage> : produce_base<D, Windows::Devices::Sms::ISmsWapMessage>
{
    HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_To(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().To());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_From(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().From());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ApplicationId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ApplicationId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentType(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BinaryBody(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BinaryBody());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Headers(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Headers());
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

WINRT_EXPORT namespace winrt::Windows::Devices::Sms {

inline SmsAppMessage::SmsAppMessage() :
    SmsAppMessage(activate_instance<SmsAppMessage>())
{}

inline SmsBinaryMessage::SmsBinaryMessage() :
    SmsBinaryMessage(activate_instance<SmsBinaryMessage>())
{}

inline hstring SmsDevice::GetDeviceSelector()
{
    return get_activation_factory<SmsDevice, Windows::Devices::Sms::ISmsDeviceStatics>().GetDeviceSelector();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::SmsDevice> SmsDevice::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<SmsDevice, Windows::Devices::Sms::ISmsDeviceStatics>().FromIdAsync(deviceId);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::SmsDevice> SmsDevice::GetDefaultAsync()
{
    return get_activation_factory<SmsDevice, Windows::Devices::Sms::ISmsDeviceStatics>().GetDefaultAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::SmsDevice> SmsDevice::FromNetworkAccountIdAsync(param::hstring const& networkAccountId)
{
    return get_activation_factory<SmsDevice, Windows::Devices::Sms::ISmsDeviceStatics2>().FromNetworkAccountIdAsync(networkAccountId);
}

inline hstring SmsDevice2::GetDeviceSelector()
{
    return get_activation_factory<SmsDevice2, Windows::Devices::Sms::ISmsDevice2Statics>().GetDeviceSelector();
}

inline Windows::Devices::Sms::SmsDevice2 SmsDevice2::FromId(param::hstring const& deviceId)
{
    return get_activation_factory<SmsDevice2, Windows::Devices::Sms::ISmsDevice2Statics>().FromId(deviceId);
}

inline Windows::Devices::Sms::SmsDevice2 SmsDevice2::GetDefault()
{
    return get_activation_factory<SmsDevice2, Windows::Devices::Sms::ISmsDevice2Statics>().GetDefault();
}

inline Windows::Devices::Sms::SmsDevice2 SmsDevice2::FromParentId(param::hstring const& parentDeviceId)
{
    return get_activation_factory<SmsDevice2, Windows::Devices::Sms::ISmsDevice2Statics>().FromParentId(parentDeviceId);
}

inline SmsFilterRule::SmsFilterRule(Windows::Devices::Sms::SmsMessageType const& messageType) :
    SmsFilterRule(get_activation_factory<SmsFilterRule, Windows::Devices::Sms::ISmsFilterRuleFactory>().CreateFilterRule(messageType))
{}

inline SmsFilterRules::SmsFilterRules(Windows::Devices::Sms::SmsFilterActionType const& actionType) :
    SmsFilterRules(get_activation_factory<SmsFilterRules, Windows::Devices::Sms::ISmsFilterRulesFactory>().CreateFilterRules(actionType))
{}

inline Windows::Foundation::Collections::IVectorView<Windows::Devices::Sms::SmsMessageRegistration> SmsMessageRegistration::AllRegistrations()
{
    return get_activation_factory<SmsMessageRegistration, Windows::Devices::Sms::ISmsMessageRegistrationStatics>().AllRegistrations();
}

inline Windows::Devices::Sms::SmsMessageRegistration SmsMessageRegistration::Register(param::hstring const& id, Windows::Devices::Sms::SmsFilterRules const& filterRules)
{
    return get_activation_factory<SmsMessageRegistration, Windows::Devices::Sms::ISmsMessageRegistrationStatics>().Register(id, filterRules);
}

inline SmsTextMessage::SmsTextMessage() :
    SmsTextMessage(activate_instance<SmsTextMessage>())
{}

inline Windows::Devices::Sms::SmsTextMessage SmsTextMessage::FromBinaryMessage(Windows::Devices::Sms::SmsBinaryMessage const& binaryMessage)
{
    return get_activation_factory<SmsTextMessage, Windows::Devices::Sms::ISmsTextMessageStatics>().FromBinaryMessage(binaryMessage);
}

inline Windows::Devices::Sms::SmsTextMessage SmsTextMessage::FromBinaryData(Windows::Devices::Sms::SmsDataFormat const& format, array_view<uint8_t const> value)
{
    return get_activation_factory<SmsTextMessage, Windows::Devices::Sms::ISmsTextMessageStatics>().FromBinaryData(format, value);
}

inline SmsTextMessage2::SmsTextMessage2() :
    SmsTextMessage2(activate_instance<SmsTextMessage2>())
{}

template <typename L> SmsDeviceStatusChangedEventHandler::SmsDeviceStatusChangedEventHandler(L handler) :
    SmsDeviceStatusChangedEventHandler(impl::make_delegate<SmsDeviceStatusChangedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> SmsDeviceStatusChangedEventHandler::SmsDeviceStatusChangedEventHandler(F* handler) :
    SmsDeviceStatusChangedEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> SmsDeviceStatusChangedEventHandler::SmsDeviceStatusChangedEventHandler(O* object, M method) :
    SmsDeviceStatusChangedEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void SmsDeviceStatusChangedEventHandler::operator()(Windows::Devices::Sms::SmsDevice const& sender) const
{
    check_hresult((*(abi_t<SmsDeviceStatusChangedEventHandler>**)this)->Invoke(get_abi(sender)));
}

template <typename L> SmsMessageReceivedEventHandler::SmsMessageReceivedEventHandler(L handler) :
    SmsMessageReceivedEventHandler(impl::make_delegate<SmsMessageReceivedEventHandler>(std::forward<L>(handler)))
{}

template <typename F> SmsMessageReceivedEventHandler::SmsMessageReceivedEventHandler(F* handler) :
    SmsMessageReceivedEventHandler([=](auto&& ... args) { handler(args ...); })
{}

template <typename O, typename M> SmsMessageReceivedEventHandler::SmsMessageReceivedEventHandler(O* object, M method) :
    SmsMessageReceivedEventHandler([=](auto&& ... args) { ((*object).*(method))(args ...); })
{}

inline void SmsMessageReceivedEventHandler::operator()(Windows::Devices::Sms::SmsDevice const& sender, Windows::Devices::Sms::SmsMessageReceivedEventArgs const& e) const
{
    check_hresult((*(abi_t<SmsMessageReceivedEventHandler>**)this)->Invoke(get_abi(sender), get_abi(e)));
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Sms::ISmsAppMessage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::ISmsAppMessage> {};

template<> struct hash<winrt::Windows::Devices::Sms::ISmsBinaryMessage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::ISmsBinaryMessage> {};

template<> struct hash<winrt::Windows::Devices::Sms::ISmsBroadcastMessage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::ISmsBroadcastMessage> {};

template<> struct hash<winrt::Windows::Devices::Sms::ISmsDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::ISmsDevice> {};

template<> struct hash<winrt::Windows::Devices::Sms::ISmsDevice2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::ISmsDevice2> {};

template<> struct hash<winrt::Windows::Devices::Sms::ISmsDevice2Statics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::ISmsDevice2Statics> {};

template<> struct hash<winrt::Windows::Devices::Sms::ISmsDeviceMessageStore> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::ISmsDeviceMessageStore> {};

template<> struct hash<winrt::Windows::Devices::Sms::ISmsDeviceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::ISmsDeviceStatics> {};

template<> struct hash<winrt::Windows::Devices::Sms::ISmsDeviceStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::ISmsDeviceStatics2> {};

template<> struct hash<winrt::Windows::Devices::Sms::ISmsFilterRule> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::ISmsFilterRule> {};

template<> struct hash<winrt::Windows::Devices::Sms::ISmsFilterRuleFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::ISmsFilterRuleFactory> {};

template<> struct hash<winrt::Windows::Devices::Sms::ISmsFilterRules> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::ISmsFilterRules> {};

template<> struct hash<winrt::Windows::Devices::Sms::ISmsFilterRulesFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::ISmsFilterRulesFactory> {};

template<> struct hash<winrt::Windows::Devices::Sms::ISmsMessage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::ISmsMessage> {};

template<> struct hash<winrt::Windows::Devices::Sms::ISmsMessageBase> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::ISmsMessageBase> {};

template<> struct hash<winrt::Windows::Devices::Sms::ISmsMessageReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::ISmsMessageReceivedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Sms::ISmsMessageReceivedTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::ISmsMessageReceivedTriggerDetails> {};

template<> struct hash<winrt::Windows::Devices::Sms::ISmsMessageRegistration> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::ISmsMessageRegistration> {};

template<> struct hash<winrt::Windows::Devices::Sms::ISmsMessageRegistrationStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::ISmsMessageRegistrationStatics> {};

template<> struct hash<winrt::Windows::Devices::Sms::ISmsReceivedEventDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::ISmsReceivedEventDetails> {};

template<> struct hash<winrt::Windows::Devices::Sms::ISmsReceivedEventDetails2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::ISmsReceivedEventDetails2> {};

template<> struct hash<winrt::Windows::Devices::Sms::ISmsSendMessageResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::ISmsSendMessageResult> {};

template<> struct hash<winrt::Windows::Devices::Sms::ISmsStatusMessage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::ISmsStatusMessage> {};

template<> struct hash<winrt::Windows::Devices::Sms::ISmsTextMessage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::ISmsTextMessage> {};

template<> struct hash<winrt::Windows::Devices::Sms::ISmsTextMessage2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::ISmsTextMessage2> {};

template<> struct hash<winrt::Windows::Devices::Sms::ISmsTextMessageStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::ISmsTextMessageStatics> {};

template<> struct hash<winrt::Windows::Devices::Sms::ISmsVoicemailMessage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::ISmsVoicemailMessage> {};

template<> struct hash<winrt::Windows::Devices::Sms::ISmsWapMessage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::ISmsWapMessage> {};

template<> struct hash<winrt::Windows::Devices::Sms::DeleteSmsMessageOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::DeleteSmsMessageOperation> {};

template<> struct hash<winrt::Windows::Devices::Sms::DeleteSmsMessagesOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::DeleteSmsMessagesOperation> {};

template<> struct hash<winrt::Windows::Devices::Sms::GetSmsDeviceOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::GetSmsDeviceOperation> {};

template<> struct hash<winrt::Windows::Devices::Sms::GetSmsMessageOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::GetSmsMessageOperation> {};

template<> struct hash<winrt::Windows::Devices::Sms::GetSmsMessagesOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::GetSmsMessagesOperation> {};

template<> struct hash<winrt::Windows::Devices::Sms::SendSmsMessageOperation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::SendSmsMessageOperation> {};

template<> struct hash<winrt::Windows::Devices::Sms::SmsAppMessage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::SmsAppMessage> {};

template<> struct hash<winrt::Windows::Devices::Sms::SmsBinaryMessage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::SmsBinaryMessage> {};

template<> struct hash<winrt::Windows::Devices::Sms::SmsBroadcastMessage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::SmsBroadcastMessage> {};

template<> struct hash<winrt::Windows::Devices::Sms::SmsDevice> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::SmsDevice> {};

template<> struct hash<winrt::Windows::Devices::Sms::SmsDevice2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::SmsDevice2> {};

template<> struct hash<winrt::Windows::Devices::Sms::SmsDeviceMessageStore> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::SmsDeviceMessageStore> {};

template<> struct hash<winrt::Windows::Devices::Sms::SmsFilterRule> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::SmsFilterRule> {};

template<> struct hash<winrt::Windows::Devices::Sms::SmsFilterRules> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::SmsFilterRules> {};

template<> struct hash<winrt::Windows::Devices::Sms::SmsMessageReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::SmsMessageReceivedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Sms::SmsMessageReceivedTriggerDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::SmsMessageReceivedTriggerDetails> {};

template<> struct hash<winrt::Windows::Devices::Sms::SmsMessageRegistration> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::SmsMessageRegistration> {};

template<> struct hash<winrt::Windows::Devices::Sms::SmsReceivedEventDetails> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::SmsReceivedEventDetails> {};

template<> struct hash<winrt::Windows::Devices::Sms::SmsSendMessageResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::SmsSendMessageResult> {};

template<> struct hash<winrt::Windows::Devices::Sms::SmsStatusMessage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::SmsStatusMessage> {};

template<> struct hash<winrt::Windows::Devices::Sms::SmsTextMessage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::SmsTextMessage> {};

template<> struct hash<winrt::Windows::Devices::Sms::SmsTextMessage2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::SmsTextMessage2> {};

template<> struct hash<winrt::Windows::Devices::Sms::SmsVoicemailMessage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::SmsVoicemailMessage> {};

template<> struct hash<winrt::Windows::Devices::Sms::SmsWapMessage> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Sms::SmsWapMessage> {};

}

WINRT_WARNING_POP
