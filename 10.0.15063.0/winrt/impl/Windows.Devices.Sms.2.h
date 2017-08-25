// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Devices.Sms.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Sms {

struct [[deprecated("SmsDeviceStatusChangedEventHandler may be altered or unavailable for releases after Windows 10.")]] SmsDeviceStatusChangedEventHandler : Windows::Foundation::IUnknown
{
    SmsDeviceStatusChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> SmsDeviceStatusChangedEventHandler(L lambda);
    template <typename F> SmsDeviceStatusChangedEventHandler(F* function);
    template <typename O, typename M> SmsDeviceStatusChangedEventHandler(O* object, M method);
    void operator()(Windows::Devices::Sms::SmsDevice const& sender) const;
};

struct [[deprecated("SmsMessageReceivedEventHandler may be altered or unavailable for releases after Windows 10.")]] SmsMessageReceivedEventHandler : Windows::Foundation::IUnknown
{
    SmsMessageReceivedEventHandler(std::nullptr_t = nullptr) noexcept {}
    template <typename L> SmsMessageReceivedEventHandler(L lambda);
    template <typename F> SmsMessageReceivedEventHandler(F* function);
    template <typename O, typename M> SmsMessageReceivedEventHandler(O* object, M method);
    void operator()(Windows::Devices::Sms::SmsDevice const& sender, Windows::Devices::Sms::SmsMessageReceivedEventArgs const& e) const;
};

struct SmsEncodedLength
{
    uint32_t SegmentCount;
    uint32_t CharacterCountLastSegment;
    uint32_t CharactersPerSegment;
    uint32_t ByteCountLastSegment;
    uint32_t BytesPerSegment;
};

struct WINRT_EBO [[deprecated("DeleteSmsMessageOperation may be altered or unavailable for releases after Windows 10.")]] DeleteSmsMessageOperation :
    Windows::Foundation::IAsyncAction
{
    DeleteSmsMessageOperation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("DeleteSmsMessagesOperation may be altered or unavailable for releases after Windows 10.")]] DeleteSmsMessagesOperation :
    Windows::Foundation::IAsyncAction
{
    DeleteSmsMessagesOperation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("GetSmsDeviceOperation may be altered or unavailable for releases after Windows 10.")]] GetSmsDeviceOperation :
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::SmsDevice>
{
    GetSmsDeviceOperation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("GetSmsMessageOperation may be altered or unavailable for releases after Windows 10.")]] GetSmsMessageOperation :
    Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::ISmsMessage>
{
    GetSmsMessageOperation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("GetSmsMessagesOperation may be altered or unavailable for releases after Windows 10.")]] GetSmsMessagesOperation :
    Windows::Foundation::IAsyncOperationWithProgress<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sms::ISmsMessage>, int32_t>
{
    GetSmsMessagesOperation(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("SendSmsMessageOperation may be altered or unavailable for releases after Windows 10.")]] SendSmsMessageOperation :
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

struct WINRT_EBO [[deprecated("SmsBinaryMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsAppMessage.")]] SmsBinaryMessage :
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

struct WINRT_EBO [[deprecated("SmsDevice may be altered or unavailable for releases after Windows 10. Instead, use SmsDevice2.")]] SmsDevice :
    Windows::Devices::Sms::ISmsDevice
{
    SmsDevice(std::nullptr_t) noexcept {}
    [[deprecated("ISmsDeviceStatics may be altered or unavailable for releases after Windows 10.")]] static hstring GetDeviceSelector();
    [[deprecated("ISmsDeviceStatics may be altered or unavailable for releases after Windows 10.")]] static Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::SmsDevice> FromIdAsync(param::hstring const& deviceId);
    [[deprecated("ISmsDeviceStatics may be altered or unavailable for releases after Windows 10.")]] static Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::SmsDevice> GetDefaultAsync();
    [[deprecated("ISmsDeviceStatics2 may be altered or unavailable for releases after Windows 10.")]] static Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::SmsDevice> FromNetworkAccountIdAsync(param::hstring const& networkAccountId);
};

struct WINRT_EBO SmsDevice2 :
    Windows::Devices::Sms::ISmsDevice2
{
    SmsDevice2(std::nullptr_t) noexcept {}
    static hstring GetDeviceSelector();
    static Windows::Devices::Sms::SmsDevice2 FromId(param::hstring const& deviceId);
    static Windows::Devices::Sms::SmsDevice2 GetDefault();
    static Windows::Devices::Sms::SmsDevice2 FromParentId(param::hstring const& parentDeviceId);
};

struct WINRT_EBO [[deprecated("SmsDeviceMessageStore may be altered or unavailable for releases after Windows 10.")]] SmsDeviceMessageStore :
    Windows::Devices::Sms::ISmsDeviceMessageStore
{
    SmsDeviceMessageStore(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SmsFilterRule :
    Windows::Devices::Sms::ISmsFilterRule
{
    SmsFilterRule(std::nullptr_t) noexcept {}
    SmsFilterRule(Windows::Devices::Sms::SmsMessageType const& messageType);
};

struct WINRT_EBO SmsFilterRules :
    Windows::Devices::Sms::ISmsFilterRules
{
    SmsFilterRules(std::nullptr_t) noexcept {}
    SmsFilterRules(Windows::Devices::Sms::SmsFilterActionType const& actionType);
};

struct WINRT_EBO [[deprecated("SmsMessageReceivedEventArgs may be altered or unavailable for releases after Windows 10.")]] SmsMessageReceivedEventArgs :
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
    static Windows::Devices::Sms::SmsMessageRegistration Register(param::hstring const& id, Windows::Devices::Sms::SmsFilterRules const& filterRules);
};

struct WINRT_EBO [[deprecated("SmsReceivedEventDetails may be altered or unavailable for releases after Windows 10. Instead, use SmsMessageReceivedTriggerDetails.")]] SmsReceivedEventDetails :
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

struct WINRT_EBO [[deprecated("SmsTextMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsTextMessage2.")]] SmsTextMessage :
    Windows::Devices::Sms::ISmsTextMessage
{
    SmsTextMessage(std::nullptr_t) noexcept {}
    SmsTextMessage();
    [[deprecated("ISmsTextMessageStatics may be altered or unavailable for releases after Windows 10.")]] static Windows::Devices::Sms::SmsTextMessage FromBinaryMessage(Windows::Devices::Sms::SmsBinaryMessage const& binaryMessage);
    [[deprecated("ISmsTextMessageStatics may be altered or unavailable for releases after Windows 10.")]] static Windows::Devices::Sms::SmsTextMessage FromBinaryData(Windows::Devices::Sms::SmsDataFormat const& format, array_view<uint8_t const> value);
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
