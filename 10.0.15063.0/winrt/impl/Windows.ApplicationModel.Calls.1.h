// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Contacts.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.System.0.h"
#include "winrt/impl/Windows.UI.0.h"
#include "winrt/impl/Windows.ApplicationModel.Calls.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Calls {

struct WINRT_EBO ICallAnswerEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICallAnswerEventArgs>
{
    ICallAnswerEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICallRejectEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICallRejectEventArgs>
{
    ICallRejectEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICallStateChangeEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICallStateChangeEventArgs>
{
    ICallStateChangeEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILockScreenCallEndCallDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILockScreenCallEndCallDeferral>
{
    ILockScreenCallEndCallDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILockScreenCallEndRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILockScreenCallEndRequestedEventArgs>
{
    ILockScreenCallEndRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ILockScreenCallUI :
    Windows::Foundation::IInspectable,
    impl::consume_t<ILockScreenCallUI>
{
    ILockScreenCallUI(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMuteChangeEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMuteChangeEventArgs>
{
    IMuteChangeEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneCallBlockingStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallBlockingStatics>
{
    IPhoneCallBlockingStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneCallHistoryEntry :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallHistoryEntry>
{
    IPhoneCallHistoryEntry(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneCallHistoryEntryAddress :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallHistoryEntryAddress>
{
    IPhoneCallHistoryEntryAddress(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneCallHistoryEntryAddressFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallHistoryEntryAddressFactory>
{
    IPhoneCallHistoryEntryAddressFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneCallHistoryEntryQueryOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallHistoryEntryQueryOptions>
{
    IPhoneCallHistoryEntryQueryOptions(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneCallHistoryEntryReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallHistoryEntryReader>
{
    IPhoneCallHistoryEntryReader(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneCallHistoryManagerForUser :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallHistoryManagerForUser>
{
    IPhoneCallHistoryManagerForUser(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneCallHistoryManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallHistoryManagerStatics>
{
    IPhoneCallHistoryManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneCallHistoryManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallHistoryManagerStatics2>
{
    IPhoneCallHistoryManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneCallHistoryStore :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallHistoryStore>
{
    IPhoneCallHistoryStore(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneCallManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallManagerStatics>
{
    IPhoneCallManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneCallManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallManagerStatics2>
{
    IPhoneCallManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneCallStore :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallStore>
{
    IPhoneCallStore(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneCallVideoCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallVideoCapabilities>
{
    IPhoneCallVideoCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneCallVideoCapabilitiesManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallVideoCapabilitiesManagerStatics>
{
    IPhoneCallVideoCapabilitiesManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneDialOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneDialOptions>
{
    IPhoneDialOptions(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneLine :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneLine>
{
    IPhoneLine(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneLineCellularDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneLineCellularDetails>
{
    IPhoneLineCellularDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneLineConfiguration :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneLineConfiguration>
{
    IPhoneLineConfiguration(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneLineStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneLineStatics>
{
    IPhoneLineStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneLineWatcher :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneLineWatcher>
{
    IPhoneLineWatcher(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneLineWatcherEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneLineWatcherEventArgs>
{
    IPhoneLineWatcherEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneVoicemail :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneVoicemail>
{
    IPhoneVoicemail(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVoipCallCoordinator :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoipCallCoordinator>
{
    IVoipCallCoordinator(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVoipCallCoordinatorStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoipCallCoordinatorStatics>
{
    IVoipCallCoordinatorStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVoipPhoneCall :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVoipPhoneCall>
{
    IVoipPhoneCall(std::nullptr_t = nullptr) noexcept {}
};

}
