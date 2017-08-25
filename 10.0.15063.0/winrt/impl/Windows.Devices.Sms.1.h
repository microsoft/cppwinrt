// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Devices.Sms.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Sms {

struct WINRT_EBO ISmsAppMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsAppMessage>,
    impl::require<ISmsAppMessage, Windows::Devices::Sms::ISmsMessageBase>
{
    ISmsAppMessage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("SmsBinaryMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsAppMessage.")]] ISmsBinaryMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsBinaryMessage>,
    impl::require<ISmsBinaryMessage, Windows::Devices::Sms::ISmsMessage>
{
    ISmsBinaryMessage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsBroadcastMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsBroadcastMessage>,
    impl::require<ISmsBroadcastMessage, Windows::Devices::Sms::ISmsMessageBase>
{
    ISmsBroadcastMessage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("SmsDevice may be altered or unavailable for releases after Windows 10. Instead, use SmsDevice2.")]] ISmsDevice :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsDevice>
{
    ISmsDevice(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsDevice2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsDevice2>
{
    ISmsDevice2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsDevice2Statics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsDevice2Statics>
{
    ISmsDevice2Statics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("SmsDeviceMessageStore may be altered or unavailable for releases after Windows 10.")]] ISmsDeviceMessageStore :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsDeviceMessageStore>
{
    ISmsDeviceMessageStore(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("ISmsDeviceStatics may be altered or unavailable for releases after Windows 10.")]] ISmsDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsDeviceStatics>
{
    ISmsDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("ISmsDeviceStatics2 may be altered or unavailable for releases after Windows 10.")]] ISmsDeviceStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsDeviceStatics2>
{
    ISmsDeviceStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsFilterRule :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsFilterRule>
{
    ISmsFilterRule(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsFilterRuleFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsFilterRuleFactory>
{
    ISmsFilterRuleFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsFilterRules :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsFilterRules>
{
    ISmsFilterRules(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsFilterRulesFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsFilterRulesFactory>
{
    ISmsFilterRulesFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsMessage>
{
    ISmsMessage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsMessageBase :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsMessageBase>
{
    ISmsMessageBase(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("SmsMessageReceivedEventArgs may be altered or unavailable for releases after Windows 10.")]] ISmsMessageReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsMessageReceivedEventArgs>
{
    ISmsMessageReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsMessageReceivedTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsMessageReceivedTriggerDetails>
{
    ISmsMessageReceivedTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsMessageRegistration :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsMessageRegistration>
{
    ISmsMessageRegistration(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsMessageRegistrationStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsMessageRegistrationStatics>
{
    ISmsMessageRegistrationStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("SmsReceivedEventDetails may be altered or unavailable for releases after Windows 10. Instead, use SmsMessageReceivedTriggerDetails.")]] ISmsReceivedEventDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsReceivedEventDetails>
{
    ISmsReceivedEventDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("SmsReceivedEventDetails may be altered or unavailable for releases after Windows 10. Instead, use SmsMessageReceivedTriggerDetails.")]] ISmsReceivedEventDetails2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsReceivedEventDetails2>
{
    ISmsReceivedEventDetails2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsSendMessageResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsSendMessageResult>
{
    ISmsSendMessageResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsStatusMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsStatusMessage>,
    impl::require<ISmsStatusMessage, Windows::Devices::Sms::ISmsMessageBase>
{
    ISmsStatusMessage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("SmsTextMessage may be altered or unavailable for releases after Windows 10. Instead, use SmsTextMessage2.")]] ISmsTextMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsTextMessage>,
    impl::require<ISmsTextMessage, Windows::Devices::Sms::ISmsMessage>
{
    ISmsTextMessage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsTextMessage2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsTextMessage2>,
    impl::require<ISmsTextMessage2, Windows::Devices::Sms::ISmsMessageBase>
{
    ISmsTextMessage2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("ISmsTextMessageStatics may be altered or unavailable for releases after Windows 10.")]] ISmsTextMessageStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsTextMessageStatics>
{
    ISmsTextMessageStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsVoicemailMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsVoicemailMessage>,
    impl::require<ISmsVoicemailMessage, Windows::Devices::Sms::ISmsMessageBase>
{
    ISmsVoicemailMessage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISmsWapMessage :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISmsWapMessage>,
    impl::require<ISmsWapMessage, Windows::Devices::Sms::ISmsMessageBase>
{
    ISmsWapMessage(std::nullptr_t = nullptr) noexcept {}
};

}
