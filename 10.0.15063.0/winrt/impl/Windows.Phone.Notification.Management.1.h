// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Appointments.0.h"
#include "winrt/impl/Windows.ApplicationModel.Email.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Phone.Notification.Management.0.h"

WINRT_EXPORT namespace winrt::Windows::Phone::Notification::Management {

struct WINRT_EBO IAccessoryManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccessoryManager>
{
    IAccessoryManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAccessoryManager2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccessoryManager2>
{
    IAccessoryManager2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAccessoryManager3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccessoryManager3>
{
    IAccessoryManager3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAccessoryNotificationTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAccessoryNotificationTriggerDetails>
{
    IAccessoryNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAlarmNotificationTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAlarmNotificationTriggerDetails>,
    impl::require<IAlarmNotificationTriggerDetails, Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>
{
    IAlarmNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAlarmNotificationTriggerDetails2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAlarmNotificationTriggerDetails2>
{
    IAlarmNotificationTriggerDetails2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppNotificationInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppNotificationInfo>
{
    IAppNotificationInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IBinaryId :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBinaryId>
{
    IBinaryId(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICalendarChangedNotificationTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICalendarChangedNotificationTriggerDetails>,
    impl::require<ICalendarChangedNotificationTriggerDetails, Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>
{
    ICalendarChangedNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICortanaTileNotificationTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICortanaTileNotificationTriggerDetails>,
    impl::require<ICortanaTileNotificationTriggerDetails, Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>
{
    ICortanaTileNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailAccountInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailAccountInfo>
{
    IEmailAccountInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailFolderInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailFolderInfo>
{
    IEmailFolderInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailNotificationTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailNotificationTriggerDetails>,
    impl::require<IEmailNotificationTriggerDetails, Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>
{
    IEmailNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailNotificationTriggerDetails2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailNotificationTriggerDetails2>,
    impl::require<IEmailNotificationTriggerDetails2, Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>
{
    IEmailNotificationTriggerDetails2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IEmailReadNotificationTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IEmailReadNotificationTriggerDetails>,
    impl::require<IEmailReadNotificationTriggerDetails, Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>
{
    IEmailReadNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaControlsTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaControlsTriggerDetails>,
    impl::require<IMediaControlsTriggerDetails, Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>
{
    IMediaControlsTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaMetadata :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaMetadata>
{
    IMediaMetadata(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneCallDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneCallDetails>
{
    IPhoneCallDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneLineDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneLineDetails>
{
    IPhoneLineDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneLineDetails2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneLineDetails2>
{
    IPhoneLineDetails2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPhoneNotificationTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPhoneNotificationTriggerDetails>,
    impl::require<IPhoneNotificationTriggerDetails, Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>
{
    IPhoneNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IReminderNotificationTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IReminderNotificationTriggerDetails>,
    impl::require<IReminderNotificationTriggerDetails, Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>
{
    IReminderNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IReminderNotificationTriggerDetails2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IReminderNotificationTriggerDetails2>
{
    IReminderNotificationTriggerDetails2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISpeedDialEntry :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISpeedDialEntry>
{
    ISpeedDialEntry(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ITextResponse :
    Windows::Foundation::IInspectable,
    impl::consume_t<ITextResponse>
{
    ITextResponse(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToastNotificationTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationTriggerDetails>,
    impl::require<IToastNotificationTriggerDetails, Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>
{
    IToastNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IToastNotificationTriggerDetails2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IToastNotificationTriggerDetails2>
{
    IToastNotificationTriggerDetails2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVolumeInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVolumeInfo>
{
    IVolumeInfo(std::nullptr_t = nullptr) noexcept {}
};

}
