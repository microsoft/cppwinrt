// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Appointments {

struct Appointment;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Email {

struct EmailMessage;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IRandomAccessStreamReference;

}

WINRT_EXPORT namespace winrt::Windows::Phone::Notification::Management {

enum class AccessoryNotificationType : unsigned
{
    None = 0x0,
    Phone = 0x1,
    Email = 0x2,
    Reminder = 0x4,
    Alarm = 0x8,
    Toast = 0x10,
    AppUninstalled = 0x20,
    Dnd = 0x40,
    DrivingMode = 0x80,
    BatterySaver = 0x100,
    Media = 0x200,
    CortanaTile = 0x400,
    ToastCleared = 0x800,
    CalendarChanged = 0x1000,
    VolumeChanged = 0x2000,
    EmailReadStatusChanged = 0x4000,
};

DEFINE_ENUM_FLAG_OPERATORS(AccessoryNotificationType)

enum class CalendarChangedEvent
{
    LostEvents = 0,
    AppointmentAdded = 1,
    AppointmentChanged = 2,
    AppointmentDeleted = 3,
    CalendarAdded = 4,
    CalendarChanged = 5,
    CalendarDeleted = 6,
};

enum class PhoneCallAudioEndpoint
{
    Default = 0,
    Speaker = 1,
    Handsfree = 2,
};

enum class PhoneCallDirection
{
    Incoming = 0,
    Outgoing = 1,
};

enum class PhoneCallState
{
    Unknown = 0,
    Ringing = 1,
    Talking = 2,
    Held = 3,
    Ended = 4,
};

enum class PhoneCallTransport
{
    Cellular = 0,
    Voip = 1,
};

enum class PhoneLineRegistrationState
{
    Disconnected = 0,
    Home = 1,
    Roaming = 2,
};

enum class PhoneMediaType
{
    AudioOnly = 0,
    AudioVideo = 1,
};

enum class PhoneNotificationType
{
    NewCall = 0,
    CallChanged = 1,
    LineChanged = 2,
    PhoneCallAudioEndpointChanged = 3,
    PhoneMuteChanged = 4,
};

enum class PlaybackCapability : unsigned
{
    None = 0x0,
    Play = 0x1,
    Pause = 0x2,
    Stop = 0x4,
    Record = 0x8,
    FastForward = 0x10,
    Rewind = 0x20,
    Next = 0x40,
    Previous = 0x80,
    ChannelUp = 0x100,
    ChannelDown = 0x200,
};

DEFINE_ENUM_FLAG_OPERATORS(PlaybackCapability)

enum class PlaybackCommand
{
    Play = 0,
    Pause = 1,
    Stop = 2,
    Record = 3,
    FastForward = 4,
    Rewind = 5,
    Next = 6,
    Previous = 7,
    ChannelUp = 8,
    ChannelDown = 9,
};

enum class PlaybackStatus
{
    None = 0,
    TrackChanged = 1,
    Stopped = 2,
    Playing = 3,
    Paused = 4,
};

enum class ReminderState
{
    Active = 0,
    Snoozed = 1,
    Dismissed = 2,
};

enum class VibrateState
{
    RingerOffVibrateOff = 0,
    RingerOffVibrateOn = 1,
    RingerOnVibrateOff = 2,
    RingerOnVibrateOn = 3,
};

struct IAccessoryManager;
struct IAccessoryManager2;
struct IAccessoryManager3;
struct IAccessoryNotificationTriggerDetails;
struct IAlarmNotificationTriggerDetails;
struct IAlarmNotificationTriggerDetails2;
struct IAppNotificationInfo;
struct IBinaryId;
struct ICalendarChangedNotificationTriggerDetails;
struct ICortanaTileNotificationTriggerDetails;
struct IEmailAccountInfo;
struct IEmailFolderInfo;
struct IEmailNotificationTriggerDetails;
struct IEmailNotificationTriggerDetails2;
struct IEmailReadNotificationTriggerDetails;
struct IMediaControlsTriggerDetails;
struct IMediaMetadata;
struct IPhoneCallDetails;
struct IPhoneLineDetails;
struct IPhoneLineDetails2;
struct IPhoneNotificationTriggerDetails;
struct IReminderNotificationTriggerDetails;
struct IReminderNotificationTriggerDetails2;
struct ISpeedDialEntry;
struct ITextResponse;
struct IToastNotificationTriggerDetails;
struct IToastNotificationTriggerDetails2;
struct IVolumeInfo;
struct AccessoryManager;
struct AlarmNotificationTriggerDetails;
struct AppNotificationInfo;
struct BinaryId;
struct CalendarChangedNotificationTriggerDetails;
struct CortanaTileNotificationTriggerDetails;
struct EmailAccountInfo;
struct EmailFolderInfo;
struct EmailNotificationTriggerDetails;
struct EmailReadNotificationTriggerDetails;
struct MediaControlsTriggerDetails;
struct MediaMetadata;
struct PhoneCallDetails;
struct PhoneLineDetails;
struct PhoneNotificationTriggerDetails;
struct ReminderNotificationTriggerDetails;
struct SpeedDialEntry;
struct TextResponse;
struct ToastNotificationTriggerDetails;
struct VolumeInfo;

}

namespace winrt::impl {

template <> struct category<Windows::Phone::Notification::Management::IAccessoryManager>{ using type = interface_category; };
template <> struct category<Windows::Phone::Notification::Management::IAccessoryManager2>{ using type = interface_category; };
template <> struct category<Windows::Phone::Notification::Management::IAccessoryManager3>{ using type = interface_category; };
template <> struct category<Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::Phone::Notification::Management::IAlarmNotificationTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::Phone::Notification::Management::IAlarmNotificationTriggerDetails2>{ using type = interface_category; };
template <> struct category<Windows::Phone::Notification::Management::IAppNotificationInfo>{ using type = interface_category; };
template <> struct category<Windows::Phone::Notification::Management::IBinaryId>{ using type = interface_category; };
template <> struct category<Windows::Phone::Notification::Management::ICalendarChangedNotificationTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::Phone::Notification::Management::ICortanaTileNotificationTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::Phone::Notification::Management::IEmailAccountInfo>{ using type = interface_category; };
template <> struct category<Windows::Phone::Notification::Management::IEmailFolderInfo>{ using type = interface_category; };
template <> struct category<Windows::Phone::Notification::Management::IEmailNotificationTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::Phone::Notification::Management::IEmailNotificationTriggerDetails2>{ using type = interface_category; };
template <> struct category<Windows::Phone::Notification::Management::IEmailReadNotificationTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::Phone::Notification::Management::IMediaControlsTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::Phone::Notification::Management::IMediaMetadata>{ using type = interface_category; };
template <> struct category<Windows::Phone::Notification::Management::IPhoneCallDetails>{ using type = interface_category; };
template <> struct category<Windows::Phone::Notification::Management::IPhoneLineDetails>{ using type = interface_category; };
template <> struct category<Windows::Phone::Notification::Management::IPhoneLineDetails2>{ using type = interface_category; };
template <> struct category<Windows::Phone::Notification::Management::IPhoneNotificationTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::Phone::Notification::Management::IReminderNotificationTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::Phone::Notification::Management::IReminderNotificationTriggerDetails2>{ using type = interface_category; };
template <> struct category<Windows::Phone::Notification::Management::ISpeedDialEntry>{ using type = interface_category; };
template <> struct category<Windows::Phone::Notification::Management::ITextResponse>{ using type = interface_category; };
template <> struct category<Windows::Phone::Notification::Management::IToastNotificationTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::Phone::Notification::Management::IToastNotificationTriggerDetails2>{ using type = interface_category; };
template <> struct category<Windows::Phone::Notification::Management::IVolumeInfo>{ using type = interface_category; };
template <> struct category<Windows::Phone::Notification::Management::AccessoryManager>{ using type = class_category; };
template <> struct category<Windows::Phone::Notification::Management::AlarmNotificationTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::Phone::Notification::Management::AppNotificationInfo>{ using type = class_category; };
template <> struct category<Windows::Phone::Notification::Management::BinaryId>{ using type = class_category; };
template <> struct category<Windows::Phone::Notification::Management::CalendarChangedNotificationTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::Phone::Notification::Management::CortanaTileNotificationTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::Phone::Notification::Management::EmailAccountInfo>{ using type = class_category; };
template <> struct category<Windows::Phone::Notification::Management::EmailFolderInfo>{ using type = class_category; };
template <> struct category<Windows::Phone::Notification::Management::EmailNotificationTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::Phone::Notification::Management::EmailReadNotificationTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::Phone::Notification::Management::MediaControlsTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::Phone::Notification::Management::MediaMetadata>{ using type = class_category; };
template <> struct category<Windows::Phone::Notification::Management::PhoneCallDetails>{ using type = class_category; };
template <> struct category<Windows::Phone::Notification::Management::PhoneLineDetails>{ using type = class_category; };
template <> struct category<Windows::Phone::Notification::Management::PhoneNotificationTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::Phone::Notification::Management::ReminderNotificationTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::Phone::Notification::Management::SpeedDialEntry>{ using type = class_category; };
template <> struct category<Windows::Phone::Notification::Management::TextResponse>{ using type = class_category; };
template <> struct category<Windows::Phone::Notification::Management::ToastNotificationTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::Phone::Notification::Management::VolumeInfo>{ using type = class_category; };
template <> struct category<Windows::Phone::Notification::Management::AccessoryNotificationType>{ using type = enum_category; };
template <> struct category<Windows::Phone::Notification::Management::CalendarChangedEvent>{ using type = enum_category; };
template <> struct category<Windows::Phone::Notification::Management::PhoneCallAudioEndpoint>{ using type = enum_category; };
template <> struct category<Windows::Phone::Notification::Management::PhoneCallDirection>{ using type = enum_category; };
template <> struct category<Windows::Phone::Notification::Management::PhoneCallState>{ using type = enum_category; };
template <> struct category<Windows::Phone::Notification::Management::PhoneCallTransport>{ using type = enum_category; };
template <> struct category<Windows::Phone::Notification::Management::PhoneLineRegistrationState>{ using type = enum_category; };
template <> struct category<Windows::Phone::Notification::Management::PhoneMediaType>{ using type = enum_category; };
template <> struct category<Windows::Phone::Notification::Management::PhoneNotificationType>{ using type = enum_category; };
template <> struct category<Windows::Phone::Notification::Management::PlaybackCapability>{ using type = enum_category; };
template <> struct category<Windows::Phone::Notification::Management::PlaybackCommand>{ using type = enum_category; };
template <> struct category<Windows::Phone::Notification::Management::PlaybackStatus>{ using type = enum_category; };
template <> struct category<Windows::Phone::Notification::Management::ReminderState>{ using type = enum_category; };
template <> struct category<Windows::Phone::Notification::Management::VibrateState>{ using type = enum_category; };
template <> struct name<Windows::Phone::Notification::Management::IAccessoryManager>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.IAccessoryManager" }; };
template <> struct name<Windows::Phone::Notification::Management::IAccessoryManager2>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.IAccessoryManager2" }; };
template <> struct name<Windows::Phone::Notification::Management::IAccessoryManager3>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.IAccessoryManager3" }; };
template <> struct name<Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.IAccessoryNotificationTriggerDetails" }; };
template <> struct name<Windows::Phone::Notification::Management::IAlarmNotificationTriggerDetails>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.IAlarmNotificationTriggerDetails" }; };
template <> struct name<Windows::Phone::Notification::Management::IAlarmNotificationTriggerDetails2>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.IAlarmNotificationTriggerDetails2" }; };
template <> struct name<Windows::Phone::Notification::Management::IAppNotificationInfo>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.IAppNotificationInfo" }; };
template <> struct name<Windows::Phone::Notification::Management::IBinaryId>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.IBinaryId" }; };
template <> struct name<Windows::Phone::Notification::Management::ICalendarChangedNotificationTriggerDetails>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.ICalendarChangedNotificationTriggerDetails" }; };
template <> struct name<Windows::Phone::Notification::Management::ICortanaTileNotificationTriggerDetails>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.ICortanaTileNotificationTriggerDetails" }; };
template <> struct name<Windows::Phone::Notification::Management::IEmailAccountInfo>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.IEmailAccountInfo" }; };
template <> struct name<Windows::Phone::Notification::Management::IEmailFolderInfo>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.IEmailFolderInfo" }; };
template <> struct name<Windows::Phone::Notification::Management::IEmailNotificationTriggerDetails>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.IEmailNotificationTriggerDetails" }; };
template <> struct name<Windows::Phone::Notification::Management::IEmailNotificationTriggerDetails2>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.IEmailNotificationTriggerDetails2" }; };
template <> struct name<Windows::Phone::Notification::Management::IEmailReadNotificationTriggerDetails>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.IEmailReadNotificationTriggerDetails" }; };
template <> struct name<Windows::Phone::Notification::Management::IMediaControlsTriggerDetails>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.IMediaControlsTriggerDetails" }; };
template <> struct name<Windows::Phone::Notification::Management::IMediaMetadata>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.IMediaMetadata" }; };
template <> struct name<Windows::Phone::Notification::Management::IPhoneCallDetails>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.IPhoneCallDetails" }; };
template <> struct name<Windows::Phone::Notification::Management::IPhoneLineDetails>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.IPhoneLineDetails" }; };
template <> struct name<Windows::Phone::Notification::Management::IPhoneLineDetails2>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.IPhoneLineDetails2" }; };
template <> struct name<Windows::Phone::Notification::Management::IPhoneNotificationTriggerDetails>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.IPhoneNotificationTriggerDetails" }; };
template <> struct name<Windows::Phone::Notification::Management::IReminderNotificationTriggerDetails>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.IReminderNotificationTriggerDetails" }; };
template <> struct name<Windows::Phone::Notification::Management::IReminderNotificationTriggerDetails2>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.IReminderNotificationTriggerDetails2" }; };
template <> struct name<Windows::Phone::Notification::Management::ISpeedDialEntry>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.ISpeedDialEntry" }; };
template <> struct name<Windows::Phone::Notification::Management::ITextResponse>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.ITextResponse" }; };
template <> struct name<Windows::Phone::Notification::Management::IToastNotificationTriggerDetails>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.IToastNotificationTriggerDetails" }; };
template <> struct name<Windows::Phone::Notification::Management::IToastNotificationTriggerDetails2>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.IToastNotificationTriggerDetails2" }; };
template <> struct name<Windows::Phone::Notification::Management::IVolumeInfo>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.IVolumeInfo" }; };
template <> struct name<Windows::Phone::Notification::Management::AccessoryManager>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.AccessoryManager" }; };
template <> struct name<Windows::Phone::Notification::Management::AlarmNotificationTriggerDetails>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.AlarmNotificationTriggerDetails" }; };
template <> struct name<Windows::Phone::Notification::Management::AppNotificationInfo>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.AppNotificationInfo" }; };
template <> struct name<Windows::Phone::Notification::Management::BinaryId>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.BinaryId" }; };
template <> struct name<Windows::Phone::Notification::Management::CalendarChangedNotificationTriggerDetails>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.CalendarChangedNotificationTriggerDetails" }; };
template <> struct name<Windows::Phone::Notification::Management::CortanaTileNotificationTriggerDetails>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.CortanaTileNotificationTriggerDetails" }; };
template <> struct name<Windows::Phone::Notification::Management::EmailAccountInfo>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.EmailAccountInfo" }; };
template <> struct name<Windows::Phone::Notification::Management::EmailFolderInfo>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.EmailFolderInfo" }; };
template <> struct name<Windows::Phone::Notification::Management::EmailNotificationTriggerDetails>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.EmailNotificationTriggerDetails" }; };
template <> struct name<Windows::Phone::Notification::Management::EmailReadNotificationTriggerDetails>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.EmailReadNotificationTriggerDetails" }; };
template <> struct name<Windows::Phone::Notification::Management::MediaControlsTriggerDetails>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.MediaControlsTriggerDetails" }; };
template <> struct name<Windows::Phone::Notification::Management::MediaMetadata>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.MediaMetadata" }; };
template <> struct name<Windows::Phone::Notification::Management::PhoneCallDetails>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.PhoneCallDetails" }; };
template <> struct name<Windows::Phone::Notification::Management::PhoneLineDetails>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.PhoneLineDetails" }; };
template <> struct name<Windows::Phone::Notification::Management::PhoneNotificationTriggerDetails>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.PhoneNotificationTriggerDetails" }; };
template <> struct name<Windows::Phone::Notification::Management::ReminderNotificationTriggerDetails>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.ReminderNotificationTriggerDetails" }; };
template <> struct name<Windows::Phone::Notification::Management::SpeedDialEntry>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.SpeedDialEntry" }; };
template <> struct name<Windows::Phone::Notification::Management::TextResponse>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.TextResponse" }; };
template <> struct name<Windows::Phone::Notification::Management::ToastNotificationTriggerDetails>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.ToastNotificationTriggerDetails" }; };
template <> struct name<Windows::Phone::Notification::Management::VolumeInfo>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.VolumeInfo" }; };
template <> struct name<Windows::Phone::Notification::Management::AccessoryNotificationType>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.AccessoryNotificationType" }; };
template <> struct name<Windows::Phone::Notification::Management::CalendarChangedEvent>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.CalendarChangedEvent" }; };
template <> struct name<Windows::Phone::Notification::Management::PhoneCallAudioEndpoint>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.PhoneCallAudioEndpoint" }; };
template <> struct name<Windows::Phone::Notification::Management::PhoneCallDirection>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.PhoneCallDirection" }; };
template <> struct name<Windows::Phone::Notification::Management::PhoneCallState>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.PhoneCallState" }; };
template <> struct name<Windows::Phone::Notification::Management::PhoneCallTransport>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.PhoneCallTransport" }; };
template <> struct name<Windows::Phone::Notification::Management::PhoneLineRegistrationState>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.PhoneLineRegistrationState" }; };
template <> struct name<Windows::Phone::Notification::Management::PhoneMediaType>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.PhoneMediaType" }; };
template <> struct name<Windows::Phone::Notification::Management::PhoneNotificationType>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.PhoneNotificationType" }; };
template <> struct name<Windows::Phone::Notification::Management::PlaybackCapability>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.PlaybackCapability" }; };
template <> struct name<Windows::Phone::Notification::Management::PlaybackCommand>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.PlaybackCommand" }; };
template <> struct name<Windows::Phone::Notification::Management::PlaybackStatus>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.PlaybackStatus" }; };
template <> struct name<Windows::Phone::Notification::Management::ReminderState>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.ReminderState" }; };
template <> struct name<Windows::Phone::Notification::Management::VibrateState>{ static constexpr auto & value{ L"Windows.Phone.Notification.Management.VibrateState" }; };
template <> struct guid<Windows::Phone::Notification::Management::IAccessoryManager>{ static constexpr GUID value{ 0x0D04A12C,0x883D,0x4AA7,{ 0xBC,0xA7,0xFA,0x4B,0xB8,0xBF,0xFE,0xE6 } }; };
template <> struct guid<Windows::Phone::Notification::Management::IAccessoryManager2>{ static constexpr GUID value{ 0xBACAD44D,0xD393,0x46C6,{ 0xB8,0x0C,0x15,0xFD,0xF4,0x4D,0x53,0x86 } }; };
template <> struct guid<Windows::Phone::Notification::Management::IAccessoryManager3>{ static constexpr GUID value{ 0x81F75137,0xEDC7,0x47E0,{ 0xB2,0xF7,0x7E,0x57,0x7C,0x83,0x3F,0x7D } }; };
template <> struct guid<Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>{ static constexpr GUID value{ 0x6968A7D4,0xE3CA,0x49CB,{ 0x8C,0x87,0x2C,0x11,0xCD,0xFF,0x96,0x46 } }; };
template <> struct guid<Windows::Phone::Notification::Management::IAlarmNotificationTriggerDetails>{ static constexpr GUID value{ 0x38F5FA30,0xC738,0x4DA2,{ 0x90,0x8C,0x77,0x5D,0x83,0xC3,0x6A,0xBB } }; };
template <> struct guid<Windows::Phone::Notification::Management::IAlarmNotificationTriggerDetails2>{ static constexpr GUID value{ 0xCF16E06A,0x7155,0x40FE,{ 0xA9,0xC2,0x7B,0xD2,0x12,0x7E,0xF8,0x53 } }; };
template <> struct guid<Windows::Phone::Notification::Management::IAppNotificationInfo>{ static constexpr GUID value{ 0x2157BEA5,0xE286,0x45D3,{ 0x9B,0xEA,0xF7,0x90,0xFC,0x21,0x6E,0x0E } }; };
template <> struct guid<Windows::Phone::Notification::Management::IBinaryId>{ static constexpr GUID value{ 0x4F0DA531,0x5595,0x44B4,{ 0x91,0x81,0xCE,0x4E,0xFA,0x3F,0xC1,0x68 } }; };
template <> struct guid<Windows::Phone::Notification::Management::ICalendarChangedNotificationTriggerDetails>{ static constexpr GUID value{ 0x4B8A3BFC,0x279D,0x42AB,{ 0x9C,0x68,0x3E,0x87,0x97,0x7B,0xF2,0x16 } }; };
template <> struct guid<Windows::Phone::Notification::Management::ICortanaTileNotificationTriggerDetails>{ static constexpr GUID value{ 0xDC0F01D5,0x1489,0x46BB,{ 0xB7,0x3B,0x7F,0x90,0x06,0x7E,0xCF,0x27 } }; };
template <> struct guid<Windows::Phone::Notification::Management::IEmailAccountInfo>{ static constexpr GUID value{ 0xDFBC02AB,0xBDA0,0x4568,{ 0x92,0x7E,0xB2,0xED,0xE3,0x58,0x18,0xA1 } }; };
template <> struct guid<Windows::Phone::Notification::Management::IEmailFolderInfo>{ static constexpr GUID value{ 0xC207150E,0xE237,0x46D6,{ 0x90,0xE6,0x4F,0x52,0x9E,0xEA,0xC1,0xE2 } }; };
template <> struct guid<Windows::Phone::Notification::Management::IEmailNotificationTriggerDetails>{ static constexpr GUID value{ 0xF3B82612,0x46CF,0x4E70,{ 0x8E,0x0D,0x7B,0x2E,0x04,0xAB,0x49,0x2B } }; };
template <> struct guid<Windows::Phone::Notification::Management::IEmailNotificationTriggerDetails2>{ static constexpr GUID value{ 0x168067E3,0xC56F,0x4EC7,{ 0xBE,0xD1,0xF7,0x34,0xE0,0x8D,0xE5,0xB2 } }; };
template <> struct guid<Windows::Phone::Notification::Management::IEmailReadNotificationTriggerDetails>{ static constexpr GUID value{ 0xF5B7A087,0x06F3,0x4E3E,{ 0x8C,0x42,0x32,0x5E,0x67,0x01,0x04,0x13 } }; };
template <> struct guid<Windows::Phone::Notification::Management::IMediaControlsTriggerDetails>{ static constexpr GUID value{ 0xFAB4648B,0xAE45,0x4548,{ 0x91,0xCA,0x4A,0xB0,0x54,0x8E,0x33,0xB5 } }; };
template <> struct guid<Windows::Phone::Notification::Management::IMediaMetadata>{ static constexpr GUID value{ 0x9B50DDF7,0xBB6C,0x4330,{ 0xB3,0xCD,0x07,0x04,0xA5,0x4C,0xDB,0x80 } }; };
template <> struct guid<Windows::Phone::Notification::Management::IPhoneCallDetails>{ static constexpr GUID value{ 0x0C1B6F53,0xF071,0x483E,{ 0xBF,0x33,0xEB,0xD4,0x4B,0x72,0x44,0x47 } }; };
template <> struct guid<Windows::Phone::Notification::Management::IPhoneLineDetails>{ static constexpr GUID value{ 0x47EB32DC,0x33ED,0x49B9,{ 0x99,0x5C,0xA2,0x96,0xBA,0xC8,0x2B,0x77 } }; };
template <> struct guid<Windows::Phone::Notification::Management::IPhoneLineDetails2>{ static constexpr GUID value{ 0xB30CD77D,0x0147,0x498C,{ 0x82,0x41,0xBF,0x0C,0xAB,0xC6,0x0A,0x25 } }; };
template <> struct guid<Windows::Phone::Notification::Management::IPhoneNotificationTriggerDetails>{ static constexpr GUID value{ 0xCCC2FDF7,0x09C3,0x4118,{ 0x91,0xBC,0xCA,0x63,0x23,0xA8,0xD3,0x83 } }; };
template <> struct guid<Windows::Phone::Notification::Management::IReminderNotificationTriggerDetails>{ static constexpr GUID value{ 0x5BDDAA5D,0x9F61,0x4BF0,{ 0x9F,0xEB,0x10,0x50,0x2B,0xC0,0xB0,0xC2 } }; };
template <> struct guid<Windows::Phone::Notification::Management::IReminderNotificationTriggerDetails2>{ static constexpr GUID value{ 0xE715F9C0,0x504D,0x4C0F,{ 0xA6,0xB3,0xBC,0xB9,0x72,0x2C,0x6C,0xDD } }; };
template <> struct guid<Windows::Phone::Notification::Management::ISpeedDialEntry>{ static constexpr GUID value{ 0x9240B6DB,0x872C,0x46DC,{ 0xB6,0x2A,0xBE,0x45,0x41,0xB1,0x66,0xF8 } }; };
template <> struct guid<Windows::Phone::Notification::Management::ITextResponse>{ static constexpr GUID value{ 0xE9CB74C3,0x2457,0x4CDB,{ 0x81,0x10,0x72,0xF5,0xE8,0xE8,0x83,0xE8 } }; };
template <> struct guid<Windows::Phone::Notification::Management::IToastNotificationTriggerDetails>{ static constexpr GUID value{ 0xC9314895,0x4E6D,0x4E9D,{ 0xAF,0xEC,0x9E,0x92,0x1B,0x87,0x5A,0xE8 } }; };
template <> struct guid<Windows::Phone::Notification::Management::IToastNotificationTriggerDetails2>{ static constexpr GUID value{ 0x3E0479DD,0xCAC4,0x4F60,{ 0xAF,0xA3,0xB9,0x25,0xD9,0xD8,0x3C,0x93 } }; };
template <> struct guid<Windows::Phone::Notification::Management::IVolumeInfo>{ static constexpr GUID value{ 0x944DD118,0x7704,0x4481,{ 0xB9,0x2E,0xD3,0xED,0x3E,0xCE,0x63,0x22 } }; };
template <> struct default_interface<Windows::Phone::Notification::Management::AlarmNotificationTriggerDetails>{ using type = Windows::Phone::Notification::Management::IAlarmNotificationTriggerDetails; };
template <> struct default_interface<Windows::Phone::Notification::Management::AppNotificationInfo>{ using type = Windows::Phone::Notification::Management::IAppNotificationInfo; };
template <> struct default_interface<Windows::Phone::Notification::Management::BinaryId>{ using type = Windows::Phone::Notification::Management::IBinaryId; };
template <> struct default_interface<Windows::Phone::Notification::Management::CalendarChangedNotificationTriggerDetails>{ using type = Windows::Phone::Notification::Management::ICalendarChangedNotificationTriggerDetails; };
template <> struct default_interface<Windows::Phone::Notification::Management::CortanaTileNotificationTriggerDetails>{ using type = Windows::Phone::Notification::Management::ICortanaTileNotificationTriggerDetails; };
template <> struct default_interface<Windows::Phone::Notification::Management::EmailAccountInfo>{ using type = Windows::Phone::Notification::Management::IEmailAccountInfo; };
template <> struct default_interface<Windows::Phone::Notification::Management::EmailFolderInfo>{ using type = Windows::Phone::Notification::Management::IEmailFolderInfo; };
template <> struct default_interface<Windows::Phone::Notification::Management::EmailNotificationTriggerDetails>{ using type = Windows::Phone::Notification::Management::IEmailNotificationTriggerDetails; };
template <> struct default_interface<Windows::Phone::Notification::Management::EmailReadNotificationTriggerDetails>{ using type = Windows::Phone::Notification::Management::IEmailReadNotificationTriggerDetails; };
template <> struct default_interface<Windows::Phone::Notification::Management::MediaControlsTriggerDetails>{ using type = Windows::Phone::Notification::Management::IMediaControlsTriggerDetails; };
template <> struct default_interface<Windows::Phone::Notification::Management::MediaMetadata>{ using type = Windows::Phone::Notification::Management::IMediaMetadata; };
template <> struct default_interface<Windows::Phone::Notification::Management::PhoneCallDetails>{ using type = Windows::Phone::Notification::Management::IPhoneCallDetails; };
template <> struct default_interface<Windows::Phone::Notification::Management::PhoneLineDetails>{ using type = Windows::Phone::Notification::Management::IPhoneLineDetails; };
template <> struct default_interface<Windows::Phone::Notification::Management::PhoneNotificationTriggerDetails>{ using type = Windows::Phone::Notification::Management::IPhoneNotificationTriggerDetails; };
template <> struct default_interface<Windows::Phone::Notification::Management::ReminderNotificationTriggerDetails>{ using type = Windows::Phone::Notification::Management::IReminderNotificationTriggerDetails; };
template <> struct default_interface<Windows::Phone::Notification::Management::SpeedDialEntry>{ using type = Windows::Phone::Notification::Management::ISpeedDialEntry; };
template <> struct default_interface<Windows::Phone::Notification::Management::TextResponse>{ using type = Windows::Phone::Notification::Management::ITextResponse; };
template <> struct default_interface<Windows::Phone::Notification::Management::ToastNotificationTriggerDetails>{ using type = Windows::Phone::Notification::Management::IToastNotificationTriggerDetails; };
template <> struct default_interface<Windows::Phone::Notification::Management::VolumeInfo>{ using type = Windows::Phone::Notification::Management::IVolumeInfo; };

template <typename D>
struct consume_Windows_Phone_Notification_Management_IAccessoryManager
{
    hstring RegisterAccessoryApp() const;
    Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails GetNextTriggerDetails() const;
    void ProcessTriggerDetails(Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails const& pDetails) const;
    Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::PhoneLineDetails> PhoneLineDetails() const;
    Windows::Phone::Notification::Management::PhoneLineDetails GetPhoneLineDetails(GUID const& phoneLine) const;
    void AcceptPhoneCall(uint32_t phoneCallId) const;
    void AcceptPhoneCall(uint32_t phoneCallId, Windows::Phone::Notification::Management::PhoneCallAudioEndpoint const& endPoint) const;
    void AcceptPhoneCallWithVideo(uint32_t phoneCallId) const;
    void AcceptPhoneCallWithVideo(uint32_t phoneCallId, Windows::Phone::Notification::Management::PhoneCallAudioEndpoint const& endPoint) const;
    void RejectPhoneCall(uint32_t phoneCallId) const;
    void RejectPhoneCall(uint32_t phoneCallId, uint32_t textResponseID) const;
    void MakePhoneCall(GUID const& phoneLine, param::hstring const& phoneNumber) const;
    void MakePhoneCall(GUID const& phoneLine, param::hstring const& phoneNumber, Windows::Phone::Notification::Management::PhoneCallAudioEndpoint const& endPoint) const;
    void MakePhoneCallWithVideo(GUID const& phoneLine, param::hstring const& phoneNumber) const;
    void MakePhoneCallWithVideo(GUID const& phoneLine, param::hstring const& phoneNumber, Windows::Phone::Notification::Management::PhoneCallAudioEndpoint const& endPoint) const;
    void SwapPhoneCalls(uint32_t phoneCallIdToHold, uint32_t phoneCallIdOnHold) const;
    void HoldPhoneCall(uint32_t phoneCallId, bool holdCall) const;
    void EndPhoneCall(uint32_t phoneCallId) const;
    void PhoneMute(bool value) const;
    bool PhoneMute() const;
    void PhoneCallAudioEndpoint(Windows::Phone::Notification::Management::PhoneCallAudioEndpoint const& value) const;
    Windows::Phone::Notification::Management::PhoneCallAudioEndpoint PhoneCallAudioEndpoint() const;
    void SnoozeAlarm(GUID const& alarmId) const;
    void SnoozeAlarm(GUID const& alarmId, Windows::Foundation::TimeSpan const& timeSpan) const;
    void DismissAlarm(GUID const& alarmId) const;
    void SnoozeReminder(GUID const& reminderId) const;
    void SnoozeReminder(GUID const& reminderId, Windows::Foundation::TimeSpan const& timeSpan) const;
    void DismissReminder(GUID const& reminderId) const;
    Windows::Phone::Notification::Management::MediaMetadata GetMediaMetadata() const;
    Windows::Phone::Notification::Management::PlaybackCapability MediaPlaybackCapabilities() const;
    Windows::Phone::Notification::Management::PlaybackStatus MediaPlaybackStatus() const;
    void PerformMediaPlaybackCommand(Windows::Phone::Notification::Management::PlaybackCommand const& command) const;
    bool DoNotDisturbEnabled() const;
    bool DrivingModeEnabled() const;
    bool BatterySaverState() const;
    Windows::Foundation::Collections::IMapView<hstring, Windows::Phone::Notification::Management::AppNotificationInfo> GetApps() const;
    void EnableNotificationsForApplication(param::hstring const& appId) const;
    void DisableNotificationsForApplication(param::hstring const& appId) const;
    bool IsNotificationEnabledForApplication(param::hstring const& appId) const;
    int32_t GetEnabledAccessoryNotificationTypes() const;
    void EnableAccessoryNotificationTypes(int32_t accessoryNotificationTypes) const;
    void DisableAllAccessoryNotificationTypes() const;
    bool GetUserConsent() const;
    Windows::Storage::Streams::IRandomAccessStreamReference GetAppIcon(param::hstring const& appId) const;
};
template <> struct consume<Windows::Phone::Notification::Management::IAccessoryManager> { template <typename D> using type = consume_Windows_Phone_Notification_Management_IAccessoryManager<D>; };

template <typename D>
struct consume_Windows_Phone_Notification_Management_IAccessoryManager2
{
    void RingDevice() const;
    Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::SpeedDialEntry> SpeedDialList() const;
    void ClearToast(param::hstring const& instanceId) const;
    bool IsPhonePinLocked() const;
    void IncreaseVolume(int32_t step) const;
    void DecreaseVolume(int32_t step) const;
    void SetMute(bool mute) const;
    void SetRingerVibrate(bool ringer, bool vibrate) const;
    Windows::Phone::Notification::Management::VolumeInfo VolumeInfo() const;
    Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::EmailAccountInfo> GetAllEmailAccounts() const;
    Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::EmailFolderInfo> GetFolders(param::hstring const& emailAccount) const;
    void EnableEmailNotificationEmailAccount(param::hstring const& emailAccount) const;
    void DisableEmailNotificationEmailAccount(param::hstring const& emailAccount) const;
    void EnableEmailNotificationFolderFilter(param::hstring const& emailAccount, param::vector_view<hstring> const& folders) const;
    void UpdateEmailReadStatus(Windows::Phone::Notification::Management::BinaryId const& messageEntryId, bool isRead) const;
};
template <> struct consume<Windows::Phone::Notification::Management::IAccessoryManager2> { template <typename D> using type = consume_Windows_Phone_Notification_Management_IAccessoryManager2<D>; };

template <typename D>
struct consume_Windows_Phone_Notification_Management_IAccessoryManager3
{
    void SnoozeAlarmByInstanceId(param::hstring const& instanceId) const;
    void DismissAlarmByInstanceId(param::hstring const& instanceId) const;
    void SnoozeReminderByInstanceId(param::hstring const& instanceId) const;
    void DismissReminderByInstanceId(param::hstring const& instanceId) const;
};
template <> struct consume<Windows::Phone::Notification::Management::IAccessoryManager3> { template <typename D> using type = consume_Windows_Phone_Notification_Management_IAccessoryManager3<D>; };

template <typename D>
struct consume_Windows_Phone_Notification_Management_IAccessoryNotificationTriggerDetails
{
    Windows::Foundation::DateTime TimeCreated() const;
    hstring AppDisplayName() const;
    hstring AppId() const;
    Windows::Phone::Notification::Management::AccessoryNotificationType AccessoryNotificationType() const;
    bool StartedProcessing() const;
    void StartedProcessing(bool value) const;
};
template <> struct consume<Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails> { template <typename D> using type = consume_Windows_Phone_Notification_Management_IAccessoryNotificationTriggerDetails<D>; };

template <typename D>
struct consume_Windows_Phone_Notification_Management_IAlarmNotificationTriggerDetails
{
    GUID AlarmId() const;
    hstring Title() const;
    Windows::Foundation::DateTime Timestamp() const;
    Windows::Phone::Notification::Management::ReminderState ReminderState() const;
};
template <> struct consume<Windows::Phone::Notification::Management::IAlarmNotificationTriggerDetails> { template <typename D> using type = consume_Windows_Phone_Notification_Management_IAlarmNotificationTriggerDetails<D>; };

template <typename D>
struct consume_Windows_Phone_Notification_Management_IAlarmNotificationTriggerDetails2
{
    hstring InstanceId() const;
};
template <> struct consume<Windows::Phone::Notification::Management::IAlarmNotificationTriggerDetails2> { template <typename D> using type = consume_Windows_Phone_Notification_Management_IAlarmNotificationTriggerDetails2<D>; };

template <typename D>
struct consume_Windows_Phone_Notification_Management_IAppNotificationInfo
{
    hstring Id() const;
    hstring Name() const;
};
template <> struct consume<Windows::Phone::Notification::Management::IAppNotificationInfo> { template <typename D> using type = consume_Windows_Phone_Notification_Management_IAppNotificationInfo<D>; };

template <typename D>
struct consume_Windows_Phone_Notification_Management_IBinaryId
{
    uint8_t Id() const;
    uint32_t Length() const;
};
template <> struct consume<Windows::Phone::Notification::Management::IBinaryId> { template <typename D> using type = consume_Windows_Phone_Notification_Management_IBinaryId<D>; };

template <typename D>
struct consume_Windows_Phone_Notification_Management_ICalendarChangedNotificationTriggerDetails
{
    Windows::Phone::Notification::Management::CalendarChangedEvent EventType() const;
    hstring ItemId() const;
};
template <> struct consume<Windows::Phone::Notification::Management::ICalendarChangedNotificationTriggerDetails> { template <typename D> using type = consume_Windows_Phone_Notification_Management_ICalendarChangedNotificationTriggerDetails<D>; };

template <typename D>
struct consume_Windows_Phone_Notification_Management_ICortanaTileNotificationTriggerDetails
{
    hstring TileId() const;
    hstring Content() const;
    hstring LargeContent1() const;
    hstring LargeContent2() const;
    hstring EmphasizedText() const;
    hstring NonWrappedSmallContent1() const;
    hstring NonWrappedSmallContent2() const;
    hstring NonWrappedSmallContent3() const;
    hstring NonWrappedSmallContent4() const;
    hstring Source() const;
};
template <> struct consume<Windows::Phone::Notification::Management::ICortanaTileNotificationTriggerDetails> { template <typename D> using type = consume_Windows_Phone_Notification_Management_ICortanaTileNotificationTriggerDetails<D>; };

template <typename D>
struct consume_Windows_Phone_Notification_Management_IEmailAccountInfo
{
    hstring DisplayName() const;
    bool IsNotificationEnabled() const;
};
template <> struct consume<Windows::Phone::Notification::Management::IEmailAccountInfo> { template <typename D> using type = consume_Windows_Phone_Notification_Management_IEmailAccountInfo<D>; };

template <typename D>
struct consume_Windows_Phone_Notification_Management_IEmailFolderInfo
{
    hstring DisplayName() const;
    bool IsNotificationEnabled() const;
};
template <> struct consume<Windows::Phone::Notification::Management::IEmailFolderInfo> { template <typename D> using type = consume_Windows_Phone_Notification_Management_IEmailFolderInfo<D>; };

template <typename D>
struct consume_Windows_Phone_Notification_Management_IEmailNotificationTriggerDetails
{
    hstring AccountName() const;
    hstring ParentFolderName() const;
    hstring SenderName() const;
    hstring SenderAddress() const;
    Windows::ApplicationModel::Email::EmailMessage EmailMessage() const;
    Windows::Foundation::DateTime Timestamp() const;
};
template <> struct consume<Windows::Phone::Notification::Management::IEmailNotificationTriggerDetails> { template <typename D> using type = consume_Windows_Phone_Notification_Management_IEmailNotificationTriggerDetails<D>; };

template <typename D>
struct consume_Windows_Phone_Notification_Management_IEmailNotificationTriggerDetails2
{
    Windows::Phone::Notification::Management::BinaryId MessageEntryId() const;
};
template <> struct consume<Windows::Phone::Notification::Management::IEmailNotificationTriggerDetails2> { template <typename D> using type = consume_Windows_Phone_Notification_Management_IEmailNotificationTriggerDetails2<D>; };

template <typename D>
struct consume_Windows_Phone_Notification_Management_IEmailReadNotificationTriggerDetails
{
    hstring AccountName() const;
    hstring ParentFolderName() const;
    Windows::Phone::Notification::Management::BinaryId MessageEntryId() const;
    bool IsRead() const;
};
template <> struct consume<Windows::Phone::Notification::Management::IEmailReadNotificationTriggerDetails> { template <typename D> using type = consume_Windows_Phone_Notification_Management_IEmailReadNotificationTriggerDetails<D>; };

template <typename D>
struct consume_Windows_Phone_Notification_Management_IMediaControlsTriggerDetails
{
    Windows::Phone::Notification::Management::PlaybackStatus PlaybackStatus() const;
    Windows::Phone::Notification::Management::MediaMetadata MediaMetadata() const;
};
template <> struct consume<Windows::Phone::Notification::Management::IMediaControlsTriggerDetails> { template <typename D> using type = consume_Windows_Phone_Notification_Management_IMediaControlsTriggerDetails<D>; };

template <typename D>
struct consume_Windows_Phone_Notification_Management_IMediaMetadata
{
    hstring Title() const;
    hstring Subtitle() const;
    hstring Artist() const;
    hstring Album() const;
    uint32_t Track() const;
    Windows::Foundation::TimeSpan Duration() const;
    Windows::Storage::Streams::IRandomAccessStreamReference Thumbnail() const;
};
template <> struct consume<Windows::Phone::Notification::Management::IMediaMetadata> { template <typename D> using type = consume_Windows_Phone_Notification_Management_IMediaMetadata<D>; };

template <typename D>
struct consume_Windows_Phone_Notification_Management_IPhoneCallDetails
{
    GUID PhoneLine() const;
    uint32_t CallId() const;
    Windows::Phone::Notification::Management::PhoneCallTransport CallTransport() const;
    Windows::Phone::Notification::Management::PhoneMediaType CallMediaType() const;
    Windows::Phone::Notification::Management::PhoneCallDirection CallDirection() const;
    Windows::Phone::Notification::Management::PhoneCallState State() const;
    uint32_t ConferenceCallId() const;
    Windows::Foundation::DateTime StartTime() const;
    Windows::Foundation::DateTime EndTime() const;
    hstring PhoneNumber() const;
    hstring ContactName() const;
    Windows::Foundation::Collections::IVectorView<Windows::Phone::Notification::Management::TextResponse> PresetTextResponses() const;
};
template <> struct consume<Windows::Phone::Notification::Management::IPhoneCallDetails> { template <typename D> using type = consume_Windows_Phone_Notification_Management_IPhoneCallDetails<D>; };

template <typename D>
struct consume_Windows_Phone_Notification_Management_IPhoneLineDetails
{
    GUID LineId() const;
    hstring DisplayName() const;
    hstring LineNumber() const;
    bool DefaultOutgoingLine() const;
    uint32_t VoicemailCount() const;
    Windows::Phone::Notification::Management::PhoneLineRegistrationState RegistrationState() const;
};
template <> struct consume<Windows::Phone::Notification::Management::IPhoneLineDetails> { template <typename D> using type = consume_Windows_Phone_Notification_Management_IPhoneLineDetails<D>; };

template <typename D>
struct consume_Windows_Phone_Notification_Management_IPhoneLineDetails2
{
    uint32_t MissedCallCount() const;
};
template <> struct consume<Windows::Phone::Notification::Management::IPhoneLineDetails2> { template <typename D> using type = consume_Windows_Phone_Notification_Management_IPhoneLineDetails2<D>; };

template <typename D>
struct consume_Windows_Phone_Notification_Management_IPhoneNotificationTriggerDetails
{
    Windows::Phone::Notification::Management::PhoneNotificationType PhoneNotificationType() const;
    Windows::Phone::Notification::Management::PhoneCallDetails CallDetails() const;
    GUID PhoneLineChangedId() const;
};
template <> struct consume<Windows::Phone::Notification::Management::IPhoneNotificationTriggerDetails> { template <typename D> using type = consume_Windows_Phone_Notification_Management_IPhoneNotificationTriggerDetails<D>; };

template <typename D>
struct consume_Windows_Phone_Notification_Management_IReminderNotificationTriggerDetails
{
    GUID ReminderId() const;
    hstring Title() const;
    hstring Description() const;
    hstring Details() const;
    Windows::Foundation::DateTime Timestamp() const;
    Windows::ApplicationModel::Appointments::Appointment Appointment() const;
    Windows::Phone::Notification::Management::ReminderState ReminderState() const;
};
template <> struct consume<Windows::Phone::Notification::Management::IReminderNotificationTriggerDetails> { template <typename D> using type = consume_Windows_Phone_Notification_Management_IReminderNotificationTriggerDetails<D>; };

template <typename D>
struct consume_Windows_Phone_Notification_Management_IReminderNotificationTriggerDetails2
{
    hstring InstanceId() const;
};
template <> struct consume<Windows::Phone::Notification::Management::IReminderNotificationTriggerDetails2> { template <typename D> using type = consume_Windows_Phone_Notification_Management_IReminderNotificationTriggerDetails2<D>; };

template <typename D>
struct consume_Windows_Phone_Notification_Management_ISpeedDialEntry
{
    hstring PhoneNumber() const;
    hstring NumberType() const;
    hstring ContactName() const;
};
template <> struct consume<Windows::Phone::Notification::Management::ISpeedDialEntry> { template <typename D> using type = consume_Windows_Phone_Notification_Management_ISpeedDialEntry<D>; };

template <typename D>
struct consume_Windows_Phone_Notification_Management_ITextResponse
{
    uint32_t Id() const;
    hstring Content() const;
};
template <> struct consume<Windows::Phone::Notification::Management::ITextResponse> { template <typename D> using type = consume_Windows_Phone_Notification_Management_ITextResponse<D>; };

template <typename D>
struct consume_Windows_Phone_Notification_Management_IToastNotificationTriggerDetails
{
    hstring Text1() const;
    hstring Text2() const;
    hstring Text3() const;
    hstring Text4() const;
    bool SuppressPopup() const;
};
template <> struct consume<Windows::Phone::Notification::Management::IToastNotificationTriggerDetails> { template <typename D> using type = consume_Windows_Phone_Notification_Management_IToastNotificationTriggerDetails<D>; };

template <typename D>
struct consume_Windows_Phone_Notification_Management_IToastNotificationTriggerDetails2
{
    hstring InstanceId() const;
};
template <> struct consume<Windows::Phone::Notification::Management::IToastNotificationTriggerDetails2> { template <typename D> using type = consume_Windows_Phone_Notification_Management_IToastNotificationTriggerDetails2<D>; };

template <typename D>
struct consume_Windows_Phone_Notification_Management_IVolumeInfo
{
    uint32_t SystemVolume() const;
    uint32_t CallVolume() const;
    uint32_t MediaVolume() const;
    bool IsMuted() const;
    Windows::Phone::Notification::Management::VibrateState IsVibrateEnabled() const;
};
template <> struct consume<Windows::Phone::Notification::Management::IVolumeInfo> { template <typename D> using type = consume_Windows_Phone_Notification_Management_IVolumeInfo<D>; };

template <> struct abi<Windows::Phone::Notification::Management::IAccessoryManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RegisterAccessoryApp(HSTRING* triggerId) = 0;
    virtual HRESULT __stdcall GetNextTriggerDetails(::IUnknown** pDetails) = 0;
    virtual HRESULT __stdcall ProcessTriggerDetails(::IUnknown* pDetails) = 0;
    virtual HRESULT __stdcall get_PhoneLineDetails(::IUnknown** ppvalue) = 0;
    virtual HRESULT __stdcall GetPhoneLineDetails(abi_t<GUID> phoneLine, ::IUnknown** ppdetails) = 0;
    virtual HRESULT __stdcall AcceptPhoneCall(uint32_t phoneCallId) = 0;
    virtual HRESULT __stdcall AcceptPhoneCallOnEndpoint(uint32_t phoneCallId, abi_t<Windows::Phone::Notification::Management::PhoneCallAudioEndpoint> endPoint) = 0;
    virtual HRESULT __stdcall AcceptPhoneCallWithVideo(uint32_t phoneCallId) = 0;
    virtual HRESULT __stdcall AcceptPhoneCallWithVideoOnAudioEndpoint(uint32_t phoneCallId, abi_t<Windows::Phone::Notification::Management::PhoneCallAudioEndpoint> endPoint) = 0;
    virtual HRESULT __stdcall RejectPhoneCall(uint32_t phoneCallId) = 0;
    virtual HRESULT __stdcall RejectPhoneCallWithText(uint32_t phoneCallId, uint32_t textResponseID) = 0;
    virtual HRESULT __stdcall MakePhoneCall(abi_t<GUID> phoneLine, HSTRING phoneNumber) = 0;
    virtual HRESULT __stdcall MakePhoneCallOnAudioEndpoint(abi_t<GUID> phoneLine, HSTRING phoneNumber, abi_t<Windows::Phone::Notification::Management::PhoneCallAudioEndpoint> endPoint) = 0;
    virtual HRESULT __stdcall MakePhoneCallWithVideo(abi_t<GUID> phoneLine, HSTRING phoneNumber) = 0;
    virtual HRESULT __stdcall MakePhoneCallWithVideoOnAudioEndpoint(abi_t<GUID> phoneLine, HSTRING phoneNumber, abi_t<Windows::Phone::Notification::Management::PhoneCallAudioEndpoint> endPoint) = 0;
    virtual HRESULT __stdcall SwapPhoneCalls(uint32_t phoneCallIdToHold, uint32_t phoneCallIdOnHold) = 0;
    virtual HRESULT __stdcall HoldPhoneCall(uint32_t phoneCallId, bool holdCall) = 0;
    virtual HRESULT __stdcall EndPhoneCall(uint32_t phoneCallId) = 0;
    virtual HRESULT __stdcall put_PhoneMute(bool value) = 0;
    virtual HRESULT __stdcall get_PhoneMute(bool* value) = 0;
    virtual HRESULT __stdcall put_PhoneCallAudioEndpoint(abi_t<Windows::Phone::Notification::Management::PhoneCallAudioEndpoint> value) = 0;
    virtual HRESULT __stdcall get_PhoneCallAudioEndpoint(abi_t<Windows::Phone::Notification::Management::PhoneCallAudioEndpoint>* value) = 0;
    virtual HRESULT __stdcall SnoozeAlarm(abi_t<GUID> alarmId) = 0;
    virtual HRESULT __stdcall SnoozeAlarmForSpecifiedTime(abi_t<GUID> alarmId, abi_t<Windows::Foundation::TimeSpan> timeSpan) = 0;
    virtual HRESULT __stdcall DismissAlarm(abi_t<GUID> alarmId) = 0;
    virtual HRESULT __stdcall SnoozeReminder(abi_t<GUID> reminderId) = 0;
    virtual HRESULT __stdcall SnoozeReminderForSpecifiedTime(abi_t<GUID> reminderId, abi_t<Windows::Foundation::TimeSpan> timeSpan) = 0;
    virtual HRESULT __stdcall DismissReminder(abi_t<GUID> reminderId) = 0;
    virtual HRESULT __stdcall GetMediaMetadata(::IUnknown** ppMetadata) = 0;
    virtual HRESULT __stdcall get_MediaPlaybackCapabilities(abi_t<Windows::Phone::Notification::Management::PlaybackCapability>* value) = 0;
    virtual HRESULT __stdcall get_MediaPlaybackStatus(abi_t<Windows::Phone::Notification::Management::PlaybackStatus>* value) = 0;
    virtual HRESULT __stdcall PerformMediaPlaybackCommand(abi_t<Windows::Phone::Notification::Management::PlaybackCommand> command) = 0;
    virtual HRESULT __stdcall get_DoNotDisturbEnabled(bool* value) = 0;
    virtual HRESULT __stdcall get_DrivingModeEnabled(bool* value) = 0;
    virtual HRESULT __stdcall get_BatterySaverState(bool* value) = 0;
    virtual HRESULT __stdcall GetApps(::IUnknown** returnValue) = 0;
    virtual HRESULT __stdcall EnableNotificationsForApplication(HSTRING appId) = 0;
    virtual HRESULT __stdcall DisableNotificationsForApplication(HSTRING appId) = 0;
    virtual HRESULT __stdcall IsNotificationEnabledForApplication(HSTRING appId, bool* enabled) = 0;
    virtual HRESULT __stdcall GetEnabledAccessoryNotificationTypes(int32_t* enabledAccessoryNotificationTypes) = 0;
    virtual HRESULT __stdcall EnableAccessoryNotificationTypes(int32_t accessoryNotificationTypes) = 0;
    virtual HRESULT __stdcall DisableAllAccessoryNotificationTypes() = 0;
    virtual HRESULT __stdcall GetUserConsent(bool* enabled) = 0;
    virtual HRESULT __stdcall GetAppIcon(HSTRING appId, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::Phone::Notification::Management::IAccessoryManager2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RingDevice() = 0;
    virtual HRESULT __stdcall get_SpeedDialList(::IUnknown** ppvalue) = 0;
    virtual HRESULT __stdcall ClearToast(HSTRING instanceId) = 0;
    virtual HRESULT __stdcall get_IsPhonePinLocked(bool* pinLocked) = 0;
    virtual HRESULT __stdcall IncreaseVolume(int32_t step) = 0;
    virtual HRESULT __stdcall DecreaseVolume(int32_t step) = 0;
    virtual HRESULT __stdcall SetMute(bool mute) = 0;
    virtual HRESULT __stdcall SetRingerVibrate(bool ringer, bool vibrate) = 0;
    virtual HRESULT __stdcall get_VolumeInfo(::IUnknown** ppVolume) = 0;
    virtual HRESULT __stdcall GetAllEmailAccounts(::IUnknown** emailAccounts) = 0;
    virtual HRESULT __stdcall GetFolders(HSTRING emailAccount, ::IUnknown** folders) = 0;
    virtual HRESULT __stdcall EnableEmailNotificationEmailAccount(HSTRING emailAccount) = 0;
    virtual HRESULT __stdcall DisableEmailNotificationEmailAccount(HSTRING emailAccount) = 0;
    virtual HRESULT __stdcall EnableEmailNotificationFolderFilter(HSTRING emailAccount, ::IUnknown* folders) = 0;
    virtual HRESULT __stdcall UpdateEmailReadStatus(::IUnknown* messageEntryId, bool isRead) = 0;
};};

template <> struct abi<Windows::Phone::Notification::Management::IAccessoryManager3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SnoozeAlarmByInstanceId(HSTRING instanceId) = 0;
    virtual HRESULT __stdcall DismissAlarmByInstanceId(HSTRING instanceId) = 0;
    virtual HRESULT __stdcall SnoozeReminderByInstanceId(HSTRING instanceId) = 0;
    virtual HRESULT __stdcall DismissReminderByInstanceId(HSTRING instanceId) = 0;
};};

template <> struct abi<Windows::Phone::Notification::Management::IAccessoryNotificationTriggerDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TimeCreated(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_AppDisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AppId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AccessoryNotificationType(abi_t<Windows::Phone::Notification::Management::AccessoryNotificationType>* value) = 0;
    virtual HRESULT __stdcall get_StartedProcessing(bool* value) = 0;
    virtual HRESULT __stdcall put_StartedProcessing(bool value) = 0;
};};

template <> struct abi<Windows::Phone::Notification::Management::IAlarmNotificationTriggerDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AlarmId(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall get_Title(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_ReminderState(abi_t<Windows::Phone::Notification::Management::ReminderState>* value) = 0;
};};

template <> struct abi<Windows::Phone::Notification::Management::IAlarmNotificationTriggerDetails2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InstanceId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Phone::Notification::Management::IAppNotificationInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Phone::Notification::Management::IBinaryId>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(uint8_t* value) = 0;
    virtual HRESULT __stdcall get_Length(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Phone::Notification::Management::ICalendarChangedNotificationTriggerDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EventType(abi_t<Windows::Phone::Notification::Management::CalendarChangedEvent>* value) = 0;
    virtual HRESULT __stdcall get_ItemId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Phone::Notification::Management::ICortanaTileNotificationTriggerDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TileId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Content(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_LargeContent1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_LargeContent2(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_EmphasizedText(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_NonWrappedSmallContent1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_NonWrappedSmallContent2(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_NonWrappedSmallContent3(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_NonWrappedSmallContent4(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Source(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Phone::Notification::Management::IEmailAccountInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IsNotificationEnabled(bool* value) = 0;
};};

template <> struct abi<Windows::Phone::Notification::Management::IEmailFolderInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IsNotificationEnabled(bool* value) = 0;
};};

template <> struct abi<Windows::Phone::Notification::Management::IEmailNotificationTriggerDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AccountName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ParentFolderName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SenderName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SenderAddress(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_EmailMessage(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) = 0;
};};

template <> struct abi<Windows::Phone::Notification::Management::IEmailNotificationTriggerDetails2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MessageEntryId(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Phone::Notification::Management::IEmailReadNotificationTriggerDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AccountName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ParentFolderName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MessageEntryId(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsRead(bool* value) = 0;
};};

template <> struct abi<Windows::Phone::Notification::Management::IMediaControlsTriggerDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PlaybackStatus(abi_t<Windows::Phone::Notification::Management::PlaybackStatus>* value) = 0;
    virtual HRESULT __stdcall get_MediaMetadata(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Phone::Notification::Management::IMediaMetadata>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Title(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Subtitle(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Artist(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Album(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Track(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Duration(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_Thumbnail(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Phone::Notification::Management::IPhoneCallDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PhoneLine(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall get_CallId(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_CallTransport(abi_t<Windows::Phone::Notification::Management::PhoneCallTransport>* value) = 0;
    virtual HRESULT __stdcall get_CallMediaType(abi_t<Windows::Phone::Notification::Management::PhoneMediaType>* value) = 0;
    virtual HRESULT __stdcall get_CallDirection(abi_t<Windows::Phone::Notification::Management::PhoneCallDirection>* value) = 0;
    virtual HRESULT __stdcall get_State(abi_t<Windows::Phone::Notification::Management::PhoneCallState>* value) = 0;
    virtual HRESULT __stdcall get_ConferenceCallId(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_StartTime(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_EndTime(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_PhoneNumber(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ContactName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PresetTextResponses(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Phone::Notification::Management::IPhoneLineDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LineId(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_LineNumber(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DefaultOutgoingLine(bool* value) = 0;
    virtual HRESULT __stdcall get_VoicemailCount(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_RegistrationState(abi_t<Windows::Phone::Notification::Management::PhoneLineRegistrationState>* value) = 0;
};};

template <> struct abi<Windows::Phone::Notification::Management::IPhoneLineDetails2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MissedCallCount(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Phone::Notification::Management::IPhoneNotificationTriggerDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PhoneNotificationType(abi_t<Windows::Phone::Notification::Management::PhoneNotificationType>* value) = 0;
    virtual HRESULT __stdcall get_CallDetails(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PhoneLineChangedId(abi_t<GUID>* value) = 0;
};};

template <> struct abi<Windows::Phone::Notification::Management::IReminderNotificationTriggerDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ReminderId(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall get_Title(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Description(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Details(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Timestamp(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_Appointment(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ReminderState(abi_t<Windows::Phone::Notification::Management::ReminderState>* value) = 0;
};};

template <> struct abi<Windows::Phone::Notification::Management::IReminderNotificationTriggerDetails2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InstanceId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Phone::Notification::Management::ISpeedDialEntry>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PhoneNumber(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_NumberType(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ContactName(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Phone::Notification::Management::ITextResponse>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Content(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Phone::Notification::Management::IToastNotificationTriggerDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Text1(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Text2(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Text3(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Text4(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SuppressPopup(bool* value) = 0;
};};

template <> struct abi<Windows::Phone::Notification::Management::IToastNotificationTriggerDetails2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_InstanceId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Phone::Notification::Management::IVolumeInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SystemVolume(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_CallVolume(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_MediaVolume(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_IsMuted(bool* value) = 0;
    virtual HRESULT __stdcall get_IsVibrateEnabled(abi_t<Windows::Phone::Notification::Management::VibrateState>* value) = 0;
};};

}
