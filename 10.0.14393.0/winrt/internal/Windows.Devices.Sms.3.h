// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Devices.Sms.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Devices::Sms {

template <typename H> struct impl_SmsDeviceStatusChangedEventHandler : implements<impl_SmsDeviceStatusChangedEventHandler<H>, abi<SmsDeviceStatusChangedEventHandler>>, H
{
    impl_SmsDeviceStatusChangedEventHandler(H && handler) : H(std::forward<H>(handler)) {}

    HRESULT __stdcall abi_Invoke(abi_arg_in<Windows::Devices::Sms::ISmsDevice> sender) noexcept override
    {
        try
        {
            (*this)(*reinterpret_cast<const Windows::Devices::Sms::SmsDevice *>(&sender));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename H> struct impl_SmsMessageReceivedEventHandler : implements<impl_SmsMessageReceivedEventHandler<H>, abi<SmsMessageReceivedEventHandler>>, H
{
    impl_SmsMessageReceivedEventHandler(H && handler) : H(std::forward<H>(handler)) {}

    HRESULT __stdcall abi_Invoke(abi_arg_in<Windows::Devices::Sms::ISmsDevice> sender, abi_arg_in<Windows::Devices::Sms::ISmsMessageReceivedEventArgs> e) noexcept override
    {
        try
        {
            (*this)(*reinterpret_cast<const Windows::Devices::Sms::SmsDevice *>(&sender), *reinterpret_cast<const Windows::Devices::Sms::SmsMessageReceivedEventArgs *>(&e));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Devices::Sms {

struct WINRT_EBO DeleteSmsMessageOperation :
    Windows::Foundation::IAsyncAction
{
    DeleteSmsMessageOperation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DeleteSmsMessagesOperation :
    Windows::Foundation::IAsyncAction
{
    DeleteSmsMessagesOperation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GetSmsDeviceOperation :
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::SmsDevice>
{
    GetSmsDeviceOperation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GetSmsMessageOperation :
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::ISmsMessage>
{
    GetSmsMessageOperation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO GetSmsMessagesOperation :
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sms::ISmsMessage>, int32_t>
{
    GetSmsMessagesOperation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SendSmsMessageOperation :
    Windows::Foundation::IAsyncAction
{
    SendSmsMessageOperation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SmsAppMessage :
    Windows::Devices::Sms::ISmsAppMessage
{
    SmsAppMessage(std::nullptr_t) noexcept {}
    SmsAppMessage();
};

struct WINRT_EBO SmsBinaryMessage :
    Windows::Devices::Sms::ISmsBinaryMessage
{
    SmsBinaryMessage(std::nullptr_t) noexcept {}
    SmsBinaryMessage();
};

struct WINRT_EBO SmsBroadcastMessage :
    Windows::Devices::Sms::ISmsBroadcastMessage
{
    SmsBroadcastMessage(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SmsDevice :
    Windows::Devices::Sms::ISmsDevice
{
    SmsDevice(std::nullptr_t) noexcept {}
    static hstring GetDeviceSelector();
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::SmsDevice> FromIdAsync(hstring_ref deviceId);
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::SmsDevice> GetDefaultAsync();
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::SmsDevice> FromNetworkAccountIdAsync(hstring_ref networkAccountId);
};

struct WINRT_EBO SmsDevice2 :
    Windows::Devices::Sms::ISmsDevice2
{
    SmsDevice2(std::nullptr_t) noexcept {}
    static hstring GetDeviceSelector();
    static Windows::Devices::Sms::SmsDevice2 FromId(hstring_ref deviceId);
    static Windows::Devices::Sms::SmsDevice2 GetDefault();
    static Windows::Devices::Sms::SmsDevice2 FromParentId(hstring_ref parentDeviceId);
};

struct WINRT_EBO SmsDeviceMessageStore :
    Windows::Devices::Sms::ISmsDeviceMessageStore
{
    SmsDeviceMessageStore(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SmsFilterRule :
    Windows::Devices::Sms::ISmsFilterRule
{
    SmsFilterRule(std::nullptr_t) noexcept {}
    SmsFilterRule(Windows::Devices::Sms::SmsMessageType messageType);
};

struct WINRT_EBO SmsFilterRules :
    Windows::Devices::Sms::ISmsFilterRules
{
    SmsFilterRules(std::nullptr_t) noexcept {}
    SmsFilterRules(Windows::Devices::Sms::SmsFilterActionType actionType);
};

struct WINRT_EBO SmsMessageReceivedEventArgs :
    Windows::Devices::Sms::ISmsMessageReceivedEventArgs
{
    SmsMessageReceivedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SmsMessageReceivedTriggerDetails :
    Windows::Devices::Sms::ISmsMessageReceivedTriggerDetails
{
    SmsMessageReceivedTriggerDetails(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SmsMessageRegistration :
    Windows::Devices::Sms::ISmsMessageRegistration
{
    SmsMessageRegistration(std::nullptr_t) noexcept {}
    static Windows::Foundation::Collections::IVectorView<Windows::Devices::Sms::SmsMessageRegistration> AllRegistrations();
    static Windows::Devices::Sms::SmsMessageRegistration Register(hstring_ref id, const Windows::Devices::Sms::SmsFilterRules & filterRules);
};

struct WINRT_EBO SmsReceivedEventDetails :
    Windows::Devices::Sms::ISmsReceivedEventDetails,
    impl::require<SmsReceivedEventDetails, Windows::Devices::Sms::ISmsReceivedEventDetails2>
{
    SmsReceivedEventDetails(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SmsSendMessageResult :
    Windows::Devices::Sms::ISmsSendMessageResult
{
    SmsSendMessageResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SmsStatusMessage :
    Windows::Devices::Sms::ISmsStatusMessage
{
    SmsStatusMessage(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SmsTextMessage :
    Windows::Devices::Sms::ISmsTextMessage
{
    SmsTextMessage(std::nullptr_t) noexcept {}
    SmsTextMessage();
    static Windows::Devices::Sms::SmsTextMessage FromBinaryMessage(const Windows::Devices::Sms::SmsBinaryMessage & binaryMessage);
    static Windows::Devices::Sms::SmsTextMessage FromBinaryData(Windows::Devices::Sms::SmsDataFormat format, array_ref<const uint8_t> value);
};

struct WINRT_EBO SmsTextMessage2 :
    Windows::Devices::Sms::ISmsTextMessage2
{
    SmsTextMessage2(std::nullptr_t) noexcept {}
    SmsTextMessage2();
};

struct WINRT_EBO SmsVoicemailMessage :
    Windows::Devices::Sms::ISmsVoicemailMessage
{
    SmsVoicemailMessage(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SmsWapMessage :
    Windows::Devices::Sms::ISmsWapMessage
{
    SmsWapMessage(std::nullptr_t) noexcept {}
};

}

}
