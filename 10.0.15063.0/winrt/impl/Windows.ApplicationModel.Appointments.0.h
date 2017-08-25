// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::System {

struct User;

}

WINRT_EXPORT namespace winrt::Windows::UI {

struct Color;

}

WINRT_EXPORT namespace winrt::Windows::UI::Popups {

enum class Placement;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Appointments {

enum class AppointmentBusyStatus
{
    Busy = 0,
    Tentative = 1,
    Free = 2,
    OutOfOffice = 3,
    WorkingElsewhere = 4,
};

enum class AppointmentCalendarOtherAppReadAccess
{
    SystemOnly = 0,
    Limited = 1,
    Full = 2,
    None = 3,
};

enum class AppointmentCalendarOtherAppWriteAccess
{
    None = 0,
    SystemOnly = 1,
    Limited = 2,
};

enum class AppointmentCalendarSyncStatus
{
    Idle = 0,
    Syncing = 1,
    UpToDate = 2,
    AuthenticationError = 3,
    PolicyError = 4,
    UnknownError = 5,
    ManualAccountRemovalRequired = 6,
};

enum class AppointmentConflictType
{
    None = 0,
    Adjacent = 1,
    Overlap = 2,
};

enum class AppointmentDaysOfWeek : unsigned
{
    None = 0x0,
    Sunday = 0x1,
    Monday = 0x2,
    Tuesday = 0x4,
    Wednesday = 0x8,
    Thursday = 0x10,
    Friday = 0x20,
    Saturday = 0x40,
};

DEFINE_ENUM_FLAG_OPERATORS(AppointmentDaysOfWeek)

enum class AppointmentDetailsKind
{
    PlainText = 0,
    Html = 1,
};

enum class AppointmentParticipantResponse
{
    None = 0,
    Tentative = 1,
    Accepted = 2,
    Declined = 3,
    Unknown = 4,
};

enum class AppointmentParticipantRole
{
    RequiredAttendee = 0,
    OptionalAttendee = 1,
    Resource = 2,
};

enum class AppointmentRecurrenceUnit
{
    Daily = 0,
    Weekly = 1,
    Monthly = 2,
    MonthlyOnDay = 3,
    Yearly = 4,
    YearlyOnDay = 5,
};

enum class AppointmentSensitivity
{
    Public = 0,
    Private = 1,
};

enum class AppointmentStoreAccessType
{
    AppCalendarsReadWrite = 0,
    AllCalendarsReadOnly = 1,
    AllCalendarsReadWrite = 2,
};

enum class AppointmentStoreChangeType
{
    AppointmentCreated = 0,
    AppointmentModified = 1,
    AppointmentDeleted = 2,
    ChangeTrackingLost = 3,
    CalendarCreated = 4,
    CalendarModified = 5,
    CalendarDeleted = 6,
};

enum class AppointmentSummaryCardView
{
    System = 0,
    App = 1,
};

enum class AppointmentWeekOfMonth
{
    First = 0,
    Second = 1,
    Third = 2,
    Fourth = 3,
    Last = 4,
};

enum class FindAppointmentCalendarsOptions : unsigned
{
    None = 0x0,
    IncludeHidden = 0x1,
};

DEFINE_ENUM_FLAG_OPERATORS(FindAppointmentCalendarsOptions)

enum class RecurrenceType
{
    Master = 0,
    Instance = 1,
    ExceptionInstance = 2,
};

struct IAppointment;
struct IAppointment2;
struct IAppointment3;
struct IAppointmentCalendar;
struct IAppointmentCalendar2;
struct IAppointmentCalendar3;
struct IAppointmentCalendarSyncManager;
struct IAppointmentCalendarSyncManager2;
struct IAppointmentConflictResult;
struct IAppointmentException;
struct IAppointmentInvitee;
struct IAppointmentManagerForUser;
struct IAppointmentManagerStatics;
struct IAppointmentManagerStatics2;
struct IAppointmentManagerStatics3;
struct IAppointmentParticipant;
struct IAppointmentPropertiesStatics;
struct IAppointmentPropertiesStatics2;
struct IAppointmentRecurrence;
struct IAppointmentRecurrence2;
struct IAppointmentRecurrence3;
struct IAppointmentStore;
struct IAppointmentStore2;
struct IAppointmentStoreChange;
struct IAppointmentStoreChange2;
struct IAppointmentStoreChangeReader;
struct IAppointmentStoreChangeTracker;
struct IAppointmentStoreChangedDeferral;
struct IAppointmentStoreChangedEventArgs;
struct IAppointmentStoreNotificationTriggerDetails;
struct IFindAppointmentsOptions;
struct Appointment;
struct AppointmentCalendar;
struct AppointmentCalendarSyncManager;
struct AppointmentConflictResult;
struct AppointmentException;
struct AppointmentInvitee;
struct AppointmentManager;
struct AppointmentManagerForUser;
struct AppointmentOrganizer;
struct AppointmentProperties;
struct AppointmentRecurrence;
struct AppointmentStore;
struct AppointmentStoreChange;
struct AppointmentStoreChangeReader;
struct AppointmentStoreChangeTracker;
struct AppointmentStoreChangedDeferral;
struct AppointmentStoreChangedEventArgs;
struct AppointmentStoreNotificationTriggerDetails;
struct FindAppointmentsOptions;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::Appointments::IAppointment>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::IAppointment2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::IAppointment3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentCalendar>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentCalendar2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentCalendar3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentConflictResult>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentException>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentInvitee>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentManagerForUser>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentManagerStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentManagerStatics3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentParticipant>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentRecurrence>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentRecurrence2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentRecurrence3>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentStore>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentStore2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentStoreChange>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentStoreChange2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::IFindAppointmentsOptions>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::Appointment>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentCalendar>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentConflictResult>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentException>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentInvitee>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentManager>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentManagerForUser>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentOrganizer>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentProperties>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentRecurrence>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentStore>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentStoreChange>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentStoreChangeReader>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentStoreChangeTracker>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentStoreChangedDeferral>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentStoreNotificationTriggerDetails>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::FindAppointmentsOptions>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentBusyStatus>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentConflictType>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentDetailsKind>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentParticipantResponse>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentParticipantRole>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentSensitivity>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentStoreAccessType>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentStoreChangeType>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentSummaryCardView>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Appointments::FindAppointmentCalendarsOptions>{ using type = enum_category; };
template <> struct category<Windows::ApplicationModel::Appointments::RecurrenceType>{ using type = enum_category; };
template <> struct name<Windows::ApplicationModel::Appointments::IAppointment>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointment" }; };
template <> struct name<Windows::ApplicationModel::Appointments::IAppointment2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointment2" }; };
template <> struct name<Windows::ApplicationModel::Appointments::IAppointment3>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointment3" }; };
template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentCalendar>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentCalendar" }; };
template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentCalendar2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentCalendar2" }; };
template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentCalendar3>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentCalendar3" }; };
template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentCalendarSyncManager" }; };
template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentCalendarSyncManager2" }; };
template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentConflictResult>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentConflictResult" }; };
template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentException>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentException" }; };
template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentInvitee>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentInvitee" }; };
template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentManagerForUser>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentManagerForUser" }; };
template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentManagerStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentManagerStatics" }; };
template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentManagerStatics2" }; };
template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentManagerStatics3>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentManagerStatics3" }; };
template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentParticipant>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentParticipant" }; };
template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentPropertiesStatics" }; };
template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentPropertiesStatics2" }; };
template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentRecurrence>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentRecurrence" }; };
template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentRecurrence2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentRecurrence2" }; };
template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentRecurrence3>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentRecurrence3" }; };
template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentStore>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentStore" }; };
template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentStore2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentStore2" }; };
template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentStoreChange>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentStoreChange" }; };
template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentStoreChange2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentStoreChange2" }; };
template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentStoreChangeReader" }; };
template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentStoreChangeTracker" }; };
template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentStoreChangedDeferral" }; };
template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentStoreChangedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IAppointmentStoreNotificationTriggerDetails" }; };
template <> struct name<Windows::ApplicationModel::Appointments::IFindAppointmentsOptions>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.IFindAppointmentsOptions" }; };
template <> struct name<Windows::ApplicationModel::Appointments::Appointment>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.Appointment" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentCalendar>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentCalendar" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentCalendarSyncManager" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentConflictResult>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentConflictResult" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentException>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentException" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentInvitee>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentInvitee" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentManager>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentManager" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentManagerForUser>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentManagerForUser" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentOrganizer>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentOrganizer" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentProperties>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentProperties" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentRecurrence>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentRecurrence" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentStore>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentStore" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentStoreChange>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentStoreChange" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentStoreChangeReader>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentStoreChangeReader" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentStoreChangeTracker>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentStoreChangeTracker" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentStoreChangedDeferral>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentStoreChangedDeferral" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentStoreChangedEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentStoreNotificationTriggerDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentStoreNotificationTriggerDetails" }; };
template <> struct name<Windows::ApplicationModel::Appointments::FindAppointmentsOptions>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.FindAppointmentsOptions" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentBusyStatus>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentBusyStatus" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentCalendarOtherAppReadAccess" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentCalendarOtherAppWriteAccess" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentCalendarSyncStatus" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentConflictType>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentConflictType" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentDaysOfWeek" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentDetailsKind>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentDetailsKind" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentParticipantResponse>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentParticipantResponse" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentParticipantRole>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentParticipantRole" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentRecurrenceUnit" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentSensitivity>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentSensitivity" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentStoreAccessType>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentStoreAccessType" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentStoreChangeType>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentStoreChangeType" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentSummaryCardView>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentSummaryCardView" }; };
template <> struct name<Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.AppointmentWeekOfMonth" }; };
template <> struct name<Windows::ApplicationModel::Appointments::FindAppointmentCalendarsOptions>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.FindAppointmentCalendarsOptions" }; };
template <> struct name<Windows::ApplicationModel::Appointments::RecurrenceType>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.RecurrenceType" }; };
template <> struct guid<Windows::ApplicationModel::Appointments::IAppointment>{ static constexpr GUID value{ 0xDD002F2F,0x2BDD,0x4076,{ 0x90,0xA3,0x22,0xC2,0x75,0x31,0x29,0x65 } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::IAppointment2>{ static constexpr GUID value{ 0x5E85983C,0x540F,0x3452,{ 0x9B,0x5C,0x0D,0xD7,0xAD,0x4C,0x65,0xA2 } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::IAppointment3>{ static constexpr GUID value{ 0xBFCC45A9,0x8961,0x4991,{ 0x93,0x4B,0xC4,0x87,0x68,0xE5,0xA9,0x6C } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::IAppointmentCalendar>{ static constexpr GUID value{ 0x5273819D,0x8339,0x3D4F,{ 0xA0,0x2F,0x64,0x08,0x44,0x52,0xBB,0x5D } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::IAppointmentCalendar2>{ static constexpr GUID value{ 0x18E7E422,0x2467,0x4E1C,{ 0xA4,0x59,0xD8,0xA2,0x93,0x03,0xD0,0x92 } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::IAppointmentCalendar3>{ static constexpr GUID value{ 0xEB23D22B,0xA685,0x42AE,{ 0x84,0x95,0xB3,0x11,0x9A,0xDB,0x41,0x67 } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager>{ static constexpr GUID value{ 0x2B21B3A0,0x4AFF,0x4392,{ 0xBC,0x5F,0x56,0x45,0xFF,0xCF,0xFB,0x17 } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2>{ static constexpr GUID value{ 0x647528AD,0x0D29,0x4C7C,{ 0xAA,0xA7,0xBF,0x99,0x68,0x05,0x53,0x7C } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::IAppointmentConflictResult>{ static constexpr GUID value{ 0xD5CDF0BE,0x2F2F,0x3B7D,{ 0xAF,0x0A,0xA7,0xE2,0x0F,0x3A,0x46,0xE3 } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::IAppointmentException>{ static constexpr GUID value{ 0xA2076767,0x16F6,0x4BCE,{ 0x9F,0x5A,0x86,0x00,0xB8,0x01,0x9F,0xCB } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::IAppointmentInvitee>{ static constexpr GUID value{ 0x13BF0796,0x9842,0x495B,{ 0xB0,0xE7,0xEF,0x8F,0x79,0xC0,0x70,0x1D } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::IAppointmentManagerForUser>{ static constexpr GUID value{ 0x70261423,0x73CC,0x4660,{ 0xB3,0x18,0xB0,0x13,0x65,0x30,0x2A,0x03 } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::IAppointmentManagerStatics>{ static constexpr GUID value{ 0x3A30FA01,0x5C40,0x499D,{ 0xB3,0x3F,0xA4,0x30,0x50,0xF7,0x4F,0xC4 } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2>{ static constexpr GUID value{ 0x0A81F60D,0xD04F,0x4034,{ 0xAF,0x72,0xA3,0x65,0x73,0xB4,0x5F,0xF0 } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::IAppointmentManagerStatics3>{ static constexpr GUID value{ 0x2F9AE09C,0xB34C,0x4DC7,{ 0xA3,0x5D,0xCA,0xFD,0x88,0xAE,0x3E,0xC6 } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::IAppointmentParticipant>{ static constexpr GUID value{ 0x615E2902,0x9718,0x467B,{ 0x83,0xFB,0xB2,0x93,0xA1,0x91,0x21,0xDE } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>{ static constexpr GUID value{ 0x25141FE9,0x68AE,0x3AAE,{ 0x85,0x5F,0xBC,0x44,0x41,0xCA,0xA2,0x34 } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2>{ static constexpr GUID value{ 0xDFFC434B,0xB017,0x45DD,{ 0x8A,0xF5,0xD1,0x63,0xD1,0x08,0x01,0xBB } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::IAppointmentRecurrence>{ static constexpr GUID value{ 0xD87B3E83,0x15A6,0x487B,{ 0xB9,0x59,0x0C,0x36,0x1E,0x60,0xE9,0x54 } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::IAppointmentRecurrence2>{ static constexpr GUID value{ 0x3DF3A2E0,0x05A7,0x4F50,{ 0x9F,0x86,0xB0,0x3F,0x94,0x36,0x25,0x4D } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::IAppointmentRecurrence3>{ static constexpr GUID value{ 0x89FF96D9,0xDA4D,0x4A17,{ 0x8D,0xD2,0x1C,0xEB,0xC2,0xB5,0xFF,0x9D } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::IAppointmentStore>{ static constexpr GUID value{ 0xA461918C,0x7A47,0x4D96,{ 0x96,0xC9,0x15,0xCD,0x8A,0x05,0xA7,0x35 } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::IAppointmentStore2>{ static constexpr GUID value{ 0x25C48C20,0x1C41,0x424F,{ 0x80,0x84,0x67,0xC1,0xCF,0xE0,0xA8,0x54 } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::IAppointmentStoreChange>{ static constexpr GUID value{ 0xA5A6E035,0x0A33,0x3654,{ 0x84,0x63,0xB5,0x43,0xE9,0x0C,0x3B,0x79 } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::IAppointmentStoreChange2>{ static constexpr GUID value{ 0xB37D0DCE,0x5211,0x4402,{ 0xA6,0x08,0xA9,0x6F,0xE7,0x0B,0x8E,0xE2 } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader>{ static constexpr GUID value{ 0x8B2409F1,0x65F3,0x42A0,{ 0x96,0x1D,0x4C,0x20,0x9B,0xF3,0x03,0x70 } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker>{ static constexpr GUID value{ 0x1B25F4B1,0x8ECE,0x4F17,{ 0x93,0xC8,0xE6,0x41,0x24,0x58,0xFD,0x5C } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral>{ static constexpr GUID value{ 0x4CB82026,0xFEDB,0x4BC3,{ 0x96,0x62,0x95,0xA9,0xBE,0xFD,0xF4,0xDF } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs>{ static constexpr GUID value{ 0x2285F8B9,0x0791,0x417E,{ 0xBF,0xEA,0xCC,0x6D,0x41,0x63,0x6C,0x8C } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails>{ static constexpr GUID value{ 0x9B33CB11,0xC301,0x421E,{ 0xAF,0xEF,0x04,0x7E,0xCF,0xA7,0x6A,0xDB } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::IFindAppointmentsOptions>{ static constexpr GUID value{ 0x55F7DC55,0x9942,0x3086,{ 0x82,0xB5,0x2C,0xB2,0x9F,0x64,0xD5,0xF5 } }; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::Appointment>{ using type = Windows::ApplicationModel::Appointments::IAppointment; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::AppointmentCalendar>{ using type = Windows::ApplicationModel::Appointments::IAppointmentCalendar; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager>{ using type = Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::AppointmentConflictResult>{ using type = Windows::ApplicationModel::Appointments::IAppointmentConflictResult; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::AppointmentException>{ using type = Windows::ApplicationModel::Appointments::IAppointmentException; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::AppointmentInvitee>{ using type = Windows::ApplicationModel::Appointments::IAppointmentInvitee; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::AppointmentManagerForUser>{ using type = Windows::ApplicationModel::Appointments::IAppointmentManagerForUser; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::AppointmentOrganizer>{ using type = Windows::ApplicationModel::Appointments::IAppointmentParticipant; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::AppointmentRecurrence>{ using type = Windows::ApplicationModel::Appointments::IAppointmentRecurrence; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::AppointmentStore>{ using type = Windows::ApplicationModel::Appointments::IAppointmentStore; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::AppointmentStoreChange>{ using type = Windows::ApplicationModel::Appointments::IAppointmentStoreChange; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::AppointmentStoreChangeReader>{ using type = Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::AppointmentStoreChangeTracker>{ using type = Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::AppointmentStoreChangedDeferral>{ using type = Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs>{ using type = Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::AppointmentStoreNotificationTriggerDetails>{ using type = Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::FindAppointmentsOptions>{ using type = Windows::ApplicationModel::Appointments::IFindAppointmentsOptions; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_IAppointment
{
    Windows::Foundation::DateTime StartTime() const;
    void StartTime(Windows::Foundation::DateTime const& value) const;
    Windows::Foundation::TimeSpan Duration() const;
    void Duration(Windows::Foundation::TimeSpan const& value) const;
    hstring Location() const;
    void Location(param::hstring const& value) const;
    hstring Subject() const;
    void Subject(param::hstring const& value) const;
    hstring Details() const;
    void Details(param::hstring const& value) const;
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> Reminder() const;
    void Reminder(optional<Windows::Foundation::TimeSpan> const& value) const;
    Windows::ApplicationModel::Appointments::AppointmentOrganizer Organizer() const;
    void Organizer(Windows::ApplicationModel::Appointments::AppointmentOrganizer const& value) const;
    Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Appointments::AppointmentInvitee> Invitees() const;
    Windows::ApplicationModel::Appointments::AppointmentRecurrence Recurrence() const;
    void Recurrence(Windows::ApplicationModel::Appointments::AppointmentRecurrence const& value) const;
    Windows::ApplicationModel::Appointments::AppointmentBusyStatus BusyStatus() const;
    void BusyStatus(Windows::ApplicationModel::Appointments::AppointmentBusyStatus const& value) const;
    bool AllDay() const;
    void AllDay(bool value) const;
    Windows::ApplicationModel::Appointments::AppointmentSensitivity Sensitivity() const;
    void Sensitivity(Windows::ApplicationModel::Appointments::AppointmentSensitivity const& value) const;
    Windows::Foundation::Uri Uri() const;
    void Uri(Windows::Foundation::Uri const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::IAppointment> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointment<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_IAppointment2
{
    hstring LocalId() const;
    hstring CalendarId() const;
    hstring RoamingId() const;
    void RoamingId(param::hstring const& value) const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> OriginalStartTime() const;
    bool IsResponseRequested() const;
    void IsResponseRequested(bool value) const;
    bool AllowNewTimeProposal() const;
    void AllowNewTimeProposal(bool value) const;
    hstring OnlineMeetingLink() const;
    void OnlineMeetingLink(param::hstring const& value) const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> ReplyTime() const;
    void ReplyTime(optional<Windows::Foundation::DateTime> const& value) const;
    Windows::ApplicationModel::Appointments::AppointmentParticipantResponse UserResponse() const;
    void UserResponse(Windows::ApplicationModel::Appointments::AppointmentParticipantResponse const& value) const;
    bool HasInvitees() const;
    bool IsCanceledMeeting() const;
    void IsCanceledMeeting(bool value) const;
    bool IsOrganizedByUser() const;
    void IsOrganizedByUser(bool value) const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::IAppointment2> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointment2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_IAppointment3
{
    uint64_t ChangeNumber() const;
    uint64_t RemoteChangeNumber() const;
    void RemoteChangeNumber(uint64_t value) const;
    Windows::ApplicationModel::Appointments::AppointmentDetailsKind DetailsKind() const;
    void DetailsKind(Windows::ApplicationModel::Appointments::AppointmentDetailsKind const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::IAppointment3> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointment3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar
{
    Windows::UI::Color DisplayColor() const;
    hstring DisplayName() const;
    void DisplayName(param::hstring const& value) const;
    hstring LocalId() const;
    bool IsHidden() const;
    Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess OtherAppReadAccess() const;
    void OtherAppReadAccess(Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess const& value) const;
    Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess OtherAppWriteAccess() const;
    void OtherAppWriteAccess(Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess const& value) const;
    hstring SourceDisplayName() const;
    Windows::ApplicationModel::Appointments::AppointmentSummaryCardView SummaryCardView() const;
    void SummaryCardView(Windows::ApplicationModel::Appointments::AppointmentSummaryCardView const& value) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> FindAppointmentsAsync(Windows::Foundation::DateTime const& rangeStart, Windows::Foundation::TimeSpan const& rangeLength) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> FindAppointmentsAsync(Windows::Foundation::DateTime const& rangeStart, Windows::Foundation::TimeSpan const& rangeLength, Windows::ApplicationModel::Appointments::FindAppointmentsOptions const& options) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentException>> FindExceptionsFromMasterAsync(param::hstring const& masterLocalId) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> FindAllInstancesAsync(param::hstring const& masterLocalId, Windows::Foundation::DateTime const& rangeStart, Windows::Foundation::TimeSpan const& rangeLength) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> FindAllInstancesAsync(param::hstring const& masterLocalId, Windows::Foundation::DateTime const& rangeStart, Windows::Foundation::TimeSpan const& rangeLength, Windows::ApplicationModel::Appointments::FindAppointmentsOptions const& pOptions) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment> GetAppointmentAsync(param::hstring const& localId) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment> GetAppointmentInstanceAsync(param::hstring const& localId, Windows::Foundation::DateTime const& instanceStartTime) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> FindUnexpandedAppointmentsAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> FindUnexpandedAppointmentsAsync(Windows::ApplicationModel::Appointments::FindAppointmentsOptions const& options) const;
    Windows::Foundation::IAsyncAction DeleteAsync() const;
    Windows::Foundation::IAsyncAction SaveAsync() const;
    Windows::Foundation::IAsyncAction DeleteAppointmentAsync(param::hstring const& localId) const;
    Windows::Foundation::IAsyncAction DeleteAppointmentInstanceAsync(param::hstring const& localId, Windows::Foundation::DateTime const& instanceStartTime) const;
    Windows::Foundation::IAsyncAction SaveAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& pAppointment) const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentCalendar> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2
{
    Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager SyncManager() const;
    hstring RemoteId() const;
    void RemoteId(param::hstring const& value) const;
    void DisplayColor(Windows::UI::Color const& value) const;
    void IsHidden(bool value) const;
    hstring UserDataAccountId() const;
    bool CanCreateOrUpdateAppointments() const;
    void CanCreateOrUpdateAppointments(bool value) const;
    bool CanCancelMeetings() const;
    void CanCancelMeetings(bool value) const;
    bool CanForwardMeetings() const;
    void CanForwardMeetings(bool value) const;
    bool CanProposeNewTimeForMeetings() const;
    void CanProposeNewTimeForMeetings(bool value) const;
    bool CanUpdateMeetingResponses() const;
    void CanUpdateMeetingResponses(bool value) const;
    bool CanNotifyInvitees() const;
    void CanNotifyInvitees(bool value) const;
    bool MustNofityInvitees() const;
    void MustNofityInvitees(bool value) const;
    Windows::Foundation::IAsyncOperation<bool> TryCreateOrUpdateAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, bool notifyInvitees) const;
    Windows::Foundation::IAsyncOperation<bool> TryCancelMeetingAsync(Windows::ApplicationModel::Appointments::Appointment const& meeting, param::hstring const& subject, param::hstring const& comment, bool notifyInvitees) const;
    Windows::Foundation::IAsyncOperation<bool> TryForwardMeetingAsync(Windows::ApplicationModel::Appointments::Appointment const& meeting, param::async_iterable<Windows::ApplicationModel::Appointments::AppointmentInvitee> const& invitees, param::hstring const& subject, param::hstring const& forwardHeader, param::hstring const& comment) const;
    Windows::Foundation::IAsyncOperation<bool> TryProposeNewTimeForMeetingAsync(Windows::ApplicationModel::Appointments::Appointment const& meeting, Windows::Foundation::DateTime const& newStartTime, Windows::Foundation::TimeSpan const& newDuration, param::hstring const& subject, param::hstring const& comment) const;
    Windows::Foundation::IAsyncOperation<bool> TryUpdateMeetingResponseAsync(Windows::ApplicationModel::Appointments::Appointment const& meeting, Windows::ApplicationModel::Appointments::AppointmentParticipantResponse const& response, param::hstring const& subject, param::hstring const& comment, bool sendUpdate) const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentCalendar2> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar3
{
    Windows::Foundation::IAsyncAction RegisterSyncManagerAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentCalendar3> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentCalendar3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager
{
    Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus Status() const;
    Windows::Foundation::DateTime LastSuccessfulSyncTime() const;
    Windows::Foundation::DateTime LastAttemptedSyncTime() const;
    Windows::Foundation::IAsyncOperation<bool> SyncAsync() const;
    event_token SyncStatusChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager, Windows::Foundation::IInspectable> const& handler) const;
    using SyncStatusChanged_revoker = event_revoker<Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager>;
    SyncStatusChanged_revoker SyncStatusChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager, Windows::Foundation::IInspectable> const& handler) const;
    void SyncStatusChanged(event_token const& token) const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager2
{
    void Status(Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus const& value) const;
    void LastSuccessfulSyncTime(Windows::Foundation::DateTime const& value) const;
    void LastAttemptedSyncTime(Windows::Foundation::DateTime const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentCalendarSyncManager2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_IAppointmentConflictResult
{
    Windows::ApplicationModel::Appointments::AppointmentConflictType Type() const;
    Windows::Foundation::DateTime Date() const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentConflictResult> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentConflictResult<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_IAppointmentException
{
    Windows::ApplicationModel::Appointments::Appointment Appointment() const;
    Windows::Foundation::Collections::IVectorView<hstring> ExceptionProperties() const;
    bool IsDeleted() const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentException> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentException<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_IAppointmentInvitee
{
    Windows::ApplicationModel::Appointments::AppointmentParticipantRole Role() const;
    void Role(Windows::ApplicationModel::Appointments::AppointmentParticipantRole const& value) const;
    Windows::ApplicationModel::Appointments::AppointmentParticipantResponse Response() const;
    void Response(Windows::ApplicationModel::Appointments::AppointmentParticipantResponse const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentInvitee> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentInvitee<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser
{
    Windows::Foundation::IAsyncOperation<hstring> ShowAddAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection) const;
    Windows::Foundation::IAsyncOperation<hstring> ShowAddAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const;
    Windows::Foundation::IAsyncOperation<hstring> ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection) const;
    Windows::Foundation::IAsyncOperation<hstring> ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const;
    Windows::Foundation::IAsyncOperation<hstring> ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate) const;
    Windows::Foundation::IAsyncOperation<bool> ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection) const;
    Windows::Foundation::IAsyncOperation<bool> ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const;
    Windows::Foundation::IAsyncOperation<bool> ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate) const;
    Windows::Foundation::IAsyncAction ShowTimeFrameAsync(Windows::Foundation::DateTime const& timeToShow, Windows::Foundation::TimeSpan const& duration) const;
    Windows::Foundation::IAsyncAction ShowAppointmentDetailsAsync(param::hstring const& appointmentId) const;
    Windows::Foundation::IAsyncAction ShowAppointmentDetailsAsync(param::hstring const& appointmentId, Windows::Foundation::DateTime const& instanceStartDate) const;
    Windows::Foundation::IAsyncOperation<hstring> ShowEditNewAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentStore> RequestStoreAsync(Windows::ApplicationModel::Appointments::AppointmentStoreAccessType const& options) const;
    Windows::System::User User() const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentManagerForUser> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentManagerForUser<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics
{
    Windows::Foundation::IAsyncOperation<hstring> ShowAddAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection) const;
    Windows::Foundation::IAsyncOperation<hstring> ShowAddAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const;
    Windows::Foundation::IAsyncOperation<hstring> ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection) const;
    Windows::Foundation::IAsyncOperation<hstring> ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const;
    Windows::Foundation::IAsyncOperation<hstring> ShowReplaceAppointmentAsync(param::hstring const& appointmentId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate) const;
    Windows::Foundation::IAsyncOperation<bool> ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection) const;
    Windows::Foundation::IAsyncOperation<bool> ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement) const;
    Windows::Foundation::IAsyncOperation<bool> ShowRemoveAppointmentAsync(param::hstring const& appointmentId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate) const;
    Windows::Foundation::IAsyncAction ShowTimeFrameAsync(Windows::Foundation::DateTime const& timeToShow, Windows::Foundation::TimeSpan const& duration) const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentManagerStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics2
{
    Windows::Foundation::IAsyncAction ShowAppointmentDetailsAsync(param::hstring const& appointmentId) const;
    Windows::Foundation::IAsyncAction ShowAppointmentDetailsAsync(param::hstring const& appointmentId, Windows::Foundation::DateTime const& instanceStartDate) const;
    Windows::Foundation::IAsyncOperation<hstring> ShowEditNewAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentStore> RequestStoreAsync(Windows::ApplicationModel::Appointments::AppointmentStoreAccessType const& options) const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics3
{
    Windows::ApplicationModel::Appointments::AppointmentManagerForUser GetForUser(Windows::System::User const& user) const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentManagerStatics3> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentManagerStatics3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_IAppointmentParticipant
{
    hstring DisplayName() const;
    void DisplayName(param::hstring const& value) const;
    hstring Address() const;
    void Address(param::hstring const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentParticipant> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentParticipant<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics
{
    hstring Subject() const;
    hstring Location() const;
    hstring StartTime() const;
    hstring Duration() const;
    hstring Reminder() const;
    hstring BusyStatus() const;
    hstring Sensitivity() const;
    hstring OriginalStartTime() const;
    hstring IsResponseRequested() const;
    hstring AllowNewTimeProposal() const;
    hstring AllDay() const;
    hstring Details() const;
    hstring OnlineMeetingLink() const;
    hstring ReplyTime() const;
    hstring Organizer() const;
    hstring UserResponse() const;
    hstring HasInvitees() const;
    hstring IsCanceledMeeting() const;
    hstring IsOrganizedByUser() const;
    hstring Recurrence() const;
    hstring Uri() const;
    hstring Invitees() const;
    Windows::Foundation::Collections::IVector<hstring> DefaultProperties() const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics2
{
    hstring ChangeNumber() const;
    hstring RemoteChangeNumber() const;
    hstring DetailsKind() const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentPropertiesStatics2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence
{
    Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit Unit() const;
    void Unit(Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit const& value) const;
    Windows::Foundation::IReference<uint32_t> Occurrences() const;
    void Occurrences(optional<uint32_t> const& value) const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> Until() const;
    void Until(optional<Windows::Foundation::DateTime> const& value) const;
    uint32_t Interval() const;
    void Interval(uint32_t value) const;
    Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek DaysOfWeek() const;
    void DaysOfWeek(Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek const& value) const;
    Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth WeekOfMonth() const;
    void WeekOfMonth(Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth const& value) const;
    uint32_t Month() const;
    void Month(uint32_t value) const;
    uint32_t Day() const;
    void Day(uint32_t value) const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentRecurrence> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence2
{
    Windows::ApplicationModel::Appointments::RecurrenceType RecurrenceType() const;
    hstring TimeZone() const;
    void TimeZone(param::hstring const& value) const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentRecurrence2> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence3
{
    hstring CalendarIdentifier() const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentRecurrence3> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentRecurrence3<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_IAppointmentStore
{
    Windows::ApplicationModel::Appointments::AppointmentStoreChangeTracker ChangeTracker() const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar> CreateAppointmentCalendarAsync(param::hstring const& name) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar> GetAppointmentCalendarAsync(param::hstring const& calendarId) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment> GetAppointmentAsync(param::hstring const& localId) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment> GetAppointmentInstanceAsync(param::hstring const& localId, Windows::Foundation::DateTime const& instanceStartTime) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>> FindAppointmentCalendarsAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>> FindAppointmentCalendarsAsync(Windows::ApplicationModel::Appointments::FindAppointmentCalendarsOptions const& options) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> FindAppointmentsAsync(Windows::Foundation::DateTime const& rangeStart, Windows::Foundation::TimeSpan const& rangeLength) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> FindAppointmentsAsync(Windows::Foundation::DateTime const& rangeStart, Windows::Foundation::TimeSpan const& rangeLength, Windows::ApplicationModel::Appointments::FindAppointmentsOptions const& options) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentConflictResult> FindConflictAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentConflictResult> FindConflictAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::DateTime const& instanceStartTime) const;
    Windows::Foundation::IAsyncAction MoveAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::ApplicationModel::Appointments::AppointmentCalendar const& destinationCalendar) const;
    Windows::Foundation::IAsyncOperation<hstring> ShowAddAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection) const;
    Windows::Foundation::IAsyncOperation<hstring> ShowReplaceAppointmentAsync(param::hstring const& localId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection) const;
    Windows::Foundation::IAsyncOperation<hstring> ShowReplaceAppointmentAsync(param::hstring const& localId, Windows::ApplicationModel::Appointments::Appointment const& appointment, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate) const;
    Windows::Foundation::IAsyncOperation<bool> ShowRemoveAppointmentAsync(param::hstring const& localId, Windows::Foundation::Rect const& selection) const;
    Windows::Foundation::IAsyncOperation<bool> ShowRemoveAppointmentAsync(param::hstring const& localId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& preferredPlacement, Windows::Foundation::DateTime const& instanceStartDate) const;
    Windows::Foundation::IAsyncAction ShowAppointmentDetailsAsync(param::hstring const& localId) const;
    Windows::Foundation::IAsyncAction ShowAppointmentDetailsAsync(param::hstring const& localId, Windows::Foundation::DateTime const& instanceStartDate) const;
    Windows::Foundation::IAsyncOperation<hstring> ShowEditNewAppointmentAsync(Windows::ApplicationModel::Appointments::Appointment const& appointment) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> FindLocalIdsFromRoamingIdAsync(param::hstring const& roamingId) const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentStore> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentStore<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_IAppointmentStore2
{
    event_token StoreChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentStore, Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs> const& pHandler) const;
    using StoreChanged_revoker = event_revoker<Windows::ApplicationModel::Appointments::IAppointmentStore2>;
    StoreChanged_revoker StoreChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentStore, Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs> const& pHandler) const;
    void StoreChanged(event_token const& token) const;
    Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar> CreateAppointmentCalendarAsync(param::hstring const& name, param::hstring const& userDataAccountId) const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentStore2> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentStore2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChange
{
    Windows::ApplicationModel::Appointments::Appointment Appointment() const;
    Windows::ApplicationModel::Appointments::AppointmentStoreChangeType ChangeType() const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentStoreChange> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChange<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChange2
{
    Windows::ApplicationModel::Appointments::AppointmentCalendar AppointmentCalendar() const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentStoreChange2> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChange2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeReader
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentStoreChange>> ReadBatchAsync() const;
    void AcceptChanges() const;
    void AcceptChangesThrough(Windows::ApplicationModel::Appointments::AppointmentStoreChange const& lastChangeToAccept) const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeReader<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeTracker
{
    Windows::ApplicationModel::Appointments::AppointmentStoreChangeReader GetChangeReader() const;
    void Enable() const;
    void Reset() const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangeTracker<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangedDeferral
{
    void Complete() const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangedDeferral<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangedEventArgs
{
    Windows::ApplicationModel::Appointments::AppointmentStoreChangedDeferral GetDeferral() const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentStoreChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_IAppointmentStoreNotificationTriggerDetails
{
};
template <> struct consume<Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IAppointmentStoreNotificationTriggerDetails<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_IFindAppointmentsOptions
{
    Windows::Foundation::Collections::IVector<hstring> CalendarIds() const;
    Windows::Foundation::Collections::IVector<hstring> FetchProperties() const;
    bool IncludeHidden() const;
    void IncludeHidden(bool value) const;
    uint32_t MaxCount() const;
    void MaxCount(uint32_t value) const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::IFindAppointmentsOptions> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_IFindAppointmentsOptions<D>; };

template <> struct abi<Windows::ApplicationModel::Appointments::IAppointment>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_StartTime(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall put_StartTime(abi_t<Windows::Foundation::DateTime> value) = 0;
    virtual HRESULT __stdcall get_Duration(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall put_Duration(abi_t<Windows::Foundation::TimeSpan> value) = 0;
    virtual HRESULT __stdcall get_Location(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Location(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Subject(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Subject(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Details(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Details(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Reminder(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Reminder(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Organizer(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Organizer(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Invitees(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Recurrence(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Recurrence(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_BusyStatus(abi_t<Windows::ApplicationModel::Appointments::AppointmentBusyStatus>* value) = 0;
    virtual HRESULT __stdcall put_BusyStatus(abi_t<Windows::ApplicationModel::Appointments::AppointmentBusyStatus> value) = 0;
    virtual HRESULT __stdcall get_AllDay(bool* value) = 0;
    virtual HRESULT __stdcall put_AllDay(bool value) = 0;
    virtual HRESULT __stdcall get_Sensitivity(abi_t<Windows::ApplicationModel::Appointments::AppointmentSensitivity>* value) = 0;
    virtual HRESULT __stdcall put_Sensitivity(abi_t<Windows::ApplicationModel::Appointments::AppointmentSensitivity> value) = 0;
    virtual HRESULT __stdcall get_Uri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Uri(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::IAppointment2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_LocalId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CalendarId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RoamingId(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_RoamingId(HSTRING value) = 0;
    virtual HRESULT __stdcall get_OriginalStartTime(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsResponseRequested(bool* value) = 0;
    virtual HRESULT __stdcall put_IsResponseRequested(bool value) = 0;
    virtual HRESULT __stdcall get_AllowNewTimeProposal(bool* value) = 0;
    virtual HRESULT __stdcall put_AllowNewTimeProposal(bool value) = 0;
    virtual HRESULT __stdcall get_OnlineMeetingLink(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_OnlineMeetingLink(HSTRING value) = 0;
    virtual HRESULT __stdcall get_ReplyTime(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ReplyTime(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_UserResponse(abi_t<Windows::ApplicationModel::Appointments::AppointmentParticipantResponse>* value) = 0;
    virtual HRESULT __stdcall put_UserResponse(abi_t<Windows::ApplicationModel::Appointments::AppointmentParticipantResponse> value) = 0;
    virtual HRESULT __stdcall get_HasInvitees(bool* value) = 0;
    virtual HRESULT __stdcall get_IsCanceledMeeting(bool* value) = 0;
    virtual HRESULT __stdcall put_IsCanceledMeeting(bool value) = 0;
    virtual HRESULT __stdcall get_IsOrganizedByUser(bool* value) = 0;
    virtual HRESULT __stdcall put_IsOrganizedByUser(bool value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::IAppointment3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ChangeNumber(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_RemoteChangeNumber(uint64_t* value) = 0;
    virtual HRESULT __stdcall put_RemoteChangeNumber(uint64_t value) = 0;
    virtual HRESULT __stdcall get_DetailsKind(abi_t<Windows::ApplicationModel::Appointments::AppointmentDetailsKind>* value) = 0;
    virtual HRESULT __stdcall put_DetailsKind(abi_t<Windows::ApplicationModel::Appointments::AppointmentDetailsKind> value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentCalendar>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DisplayColor(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_DisplayName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_LocalId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IsHidden(bool* value) = 0;
    virtual HRESULT __stdcall get_OtherAppReadAccess(abi_t<Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess>* value) = 0;
    virtual HRESULT __stdcall put_OtherAppReadAccess(abi_t<Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess> value) = 0;
    virtual HRESULT __stdcall get_OtherAppWriteAccess(abi_t<Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess>* value) = 0;
    virtual HRESULT __stdcall put_OtherAppWriteAccess(abi_t<Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess> value) = 0;
    virtual HRESULT __stdcall get_SourceDisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SummaryCardView(abi_t<Windows::ApplicationModel::Appointments::AppointmentSummaryCardView>* value) = 0;
    virtual HRESULT __stdcall put_SummaryCardView(abi_t<Windows::ApplicationModel::Appointments::AppointmentSummaryCardView> value) = 0;
    virtual HRESULT __stdcall FindAppointmentsAsync(abi_t<Windows::Foundation::DateTime> rangeStart, abi_t<Windows::Foundation::TimeSpan> rangeLength, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall FindAppointmentsAsyncWithOptions(abi_t<Windows::Foundation::DateTime> rangeStart, abi_t<Windows::Foundation::TimeSpan> rangeLength, ::IUnknown* options, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall FindExceptionsFromMasterAsync(HSTRING masterLocalId, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall FindAllInstancesAsync(HSTRING masterLocalId, abi_t<Windows::Foundation::DateTime> rangeStart, abi_t<Windows::Foundation::TimeSpan> rangeLength, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall FindAllInstancesAsyncWithOptions(HSTRING masterLocalId, abi_t<Windows::Foundation::DateTime> rangeStart, abi_t<Windows::Foundation::TimeSpan> rangeLength, ::IUnknown* pOptions, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetAppointmentAsync(HSTRING localId, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetAppointmentInstanceAsync(HSTRING localId, abi_t<Windows::Foundation::DateTime> instanceStartTime, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall FindUnexpandedAppointmentsAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall FindUnexpandedAppointmentsAsyncWithOptions(::IUnknown* options, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall DeleteAsync(::IUnknown** asyncAction) = 0;
    virtual HRESULT __stdcall SaveAsync(::IUnknown** asyncAction) = 0;
    virtual HRESULT __stdcall DeleteAppointmentAsync(HSTRING localId, ::IUnknown** asyncAction) = 0;
    virtual HRESULT __stdcall DeleteAppointmentInstanceAsync(HSTRING localId, abi_t<Windows::Foundation::DateTime> instanceStartTime, ::IUnknown** asyncAction) = 0;
    virtual HRESULT __stdcall SaveAppointmentAsync(::IUnknown* pAppointment, ::IUnknown** asyncAction) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentCalendar2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SyncManager(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RemoteId(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_RemoteId(HSTRING value) = 0;
    virtual HRESULT __stdcall put_DisplayColor(abi_t<Windows::UI::Color> value) = 0;
    virtual HRESULT __stdcall put_IsHidden(bool value) = 0;
    virtual HRESULT __stdcall get_UserDataAccountId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CanCreateOrUpdateAppointments(bool* value) = 0;
    virtual HRESULT __stdcall put_CanCreateOrUpdateAppointments(bool value) = 0;
    virtual HRESULT __stdcall get_CanCancelMeetings(bool* value) = 0;
    virtual HRESULT __stdcall put_CanCancelMeetings(bool value) = 0;
    virtual HRESULT __stdcall get_CanForwardMeetings(bool* value) = 0;
    virtual HRESULT __stdcall put_CanForwardMeetings(bool value) = 0;
    virtual HRESULT __stdcall get_CanProposeNewTimeForMeetings(bool* value) = 0;
    virtual HRESULT __stdcall put_CanProposeNewTimeForMeetings(bool value) = 0;
    virtual HRESULT __stdcall get_CanUpdateMeetingResponses(bool* value) = 0;
    virtual HRESULT __stdcall put_CanUpdateMeetingResponses(bool value) = 0;
    virtual HRESULT __stdcall get_CanNotifyInvitees(bool* value) = 0;
    virtual HRESULT __stdcall put_CanNotifyInvitees(bool value) = 0;
    virtual HRESULT __stdcall get_MustNofityInvitees(bool* value) = 0;
    virtual HRESULT __stdcall put_MustNofityInvitees(bool value) = 0;
    virtual HRESULT __stdcall TryCreateOrUpdateAppointmentAsync(::IUnknown* appointment, bool notifyInvitees, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall TryCancelMeetingAsync(::IUnknown* meeting, HSTRING subject, HSTRING comment, bool notifyInvitees, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall TryForwardMeetingAsync(::IUnknown* meeting, ::IUnknown* invitees, HSTRING subject, HSTRING forwardHeader, HSTRING comment, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall TryProposeNewTimeForMeetingAsync(::IUnknown* meeting, abi_t<Windows::Foundation::DateTime> newStartTime, abi_t<Windows::Foundation::TimeSpan> newDuration, HSTRING subject, HSTRING comment, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall TryUpdateMeetingResponseAsync(::IUnknown* meeting, abi_t<Windows::ApplicationModel::Appointments::AppointmentParticipantResponse> response, HSTRING subject, HSTRING comment, bool sendUpdate, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentCalendar3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RegisterSyncManagerAsync(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus>* value) = 0;
    virtual HRESULT __stdcall get_LastSuccessfulSyncTime(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_LastAttemptedSyncTime(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall SyncAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall add_SyncStatusChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_SyncStatusChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_Status(abi_t<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus> value) = 0;
    virtual HRESULT __stdcall put_LastSuccessfulSyncTime(abi_t<Windows::Foundation::DateTime> value) = 0;
    virtual HRESULT __stdcall put_LastAttemptedSyncTime(abi_t<Windows::Foundation::DateTime> value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentConflictResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Type(abi_t<Windows::ApplicationModel::Appointments::AppointmentConflictType>* value) = 0;
    virtual HRESULT __stdcall get_Date(abi_t<Windows::Foundation::DateTime>* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentException>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Appointment(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ExceptionProperties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsDeleted(bool* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentInvitee>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Role(abi_t<Windows::ApplicationModel::Appointments::AppointmentParticipantRole>* value) = 0;
    virtual HRESULT __stdcall put_Role(abi_t<Windows::ApplicationModel::Appointments::AppointmentParticipantRole> value) = 0;
    virtual HRESULT __stdcall get_Response(abi_t<Windows::ApplicationModel::Appointments::AppointmentParticipantResponse>* value) = 0;
    virtual HRESULT __stdcall put_Response(abi_t<Windows::ApplicationModel::Appointments::AppointmentParticipantResponse> value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentManagerForUser>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ShowAddAppointmentAsync(::IUnknown* appointment, abi_t<Windows::Foundation::Rect> selection, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall ShowAddAppointmentWithPlacementAsync(::IUnknown* appointment, abi_t<Windows::Foundation::Rect> selection, abi_t<Windows::UI::Popups::Placement> preferredPlacement, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall ShowReplaceAppointmentAsync(HSTRING appointmentId, ::IUnknown* appointment, abi_t<Windows::Foundation::Rect> selection, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall ShowReplaceAppointmentWithPlacementAsync(HSTRING appointmentId, ::IUnknown* appointment, abi_t<Windows::Foundation::Rect> selection, abi_t<Windows::UI::Popups::Placement> preferredPlacement, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall ShowReplaceAppointmentWithPlacementAndDateAsync(HSTRING appointmentId, ::IUnknown* appointment, abi_t<Windows::Foundation::Rect> selection, abi_t<Windows::UI::Popups::Placement> preferredPlacement, abi_t<Windows::Foundation::DateTime> instanceStartDate, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall ShowRemoveAppointmentAsync(HSTRING appointmentId, abi_t<Windows::Foundation::Rect> selection, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall ShowRemoveAppointmentWithPlacementAsync(HSTRING appointmentId, abi_t<Windows::Foundation::Rect> selection, abi_t<Windows::UI::Popups::Placement> preferredPlacement, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall ShowRemoveAppointmentWithPlacementAndDateAsync(HSTRING appointmentId, abi_t<Windows::Foundation::Rect> selection, abi_t<Windows::UI::Popups::Placement> preferredPlacement, abi_t<Windows::Foundation::DateTime> instanceStartDate, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall ShowTimeFrameAsync(abi_t<Windows::Foundation::DateTime> timeToShow, abi_t<Windows::Foundation::TimeSpan> duration, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall ShowAppointmentDetailsAsync(HSTRING appointmentId, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall ShowAppointmentDetailsWithDateAsync(HSTRING appointmentId, abi_t<Windows::Foundation::DateTime> instanceStartDate, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall ShowEditNewAppointmentAsync(::IUnknown* appointment, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall RequestStoreAsync(abi_t<Windows::ApplicationModel::Appointments::AppointmentStoreAccessType> options, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall get_User(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentManagerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ShowAddAppointmentAsync(::IUnknown* appointment, abi_t<Windows::Foundation::Rect> selection, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ShowAddAppointmentWithPlacementAsync(::IUnknown* appointment, abi_t<Windows::Foundation::Rect> selection, abi_t<Windows::UI::Popups::Placement> preferredPlacement, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ShowReplaceAppointmentAsync(HSTRING appointmentId, ::IUnknown* appointment, abi_t<Windows::Foundation::Rect> selection, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ShowReplaceAppointmentWithPlacementAsync(HSTRING appointmentId, ::IUnknown* appointment, abi_t<Windows::Foundation::Rect> selection, abi_t<Windows::UI::Popups::Placement> preferredPlacement, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ShowReplaceAppointmentWithPlacementAndDateAsync(HSTRING appointmentId, ::IUnknown* appointment, abi_t<Windows::Foundation::Rect> selection, abi_t<Windows::UI::Popups::Placement> preferredPlacement, abi_t<Windows::Foundation::DateTime> instanceStartDate, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ShowRemoveAppointmentAsync(HSTRING appointmentId, abi_t<Windows::Foundation::Rect> selection, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ShowRemoveAppointmentWithPlacementAsync(HSTRING appointmentId, abi_t<Windows::Foundation::Rect> selection, abi_t<Windows::UI::Popups::Placement> preferredPlacement, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ShowRemoveAppointmentWithPlacementAndDateAsync(HSTRING appointmentId, abi_t<Windows::Foundation::Rect> selection, abi_t<Windows::UI::Popups::Placement> preferredPlacement, abi_t<Windows::Foundation::DateTime> instanceStartDate, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ShowTimeFrameAsync(abi_t<Windows::Foundation::DateTime> timeToShow, abi_t<Windows::Foundation::TimeSpan> duration, ::IUnknown** asyncAction) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ShowAppointmentDetailsAsync(HSTRING appointmentId, ::IUnknown** asyncAction) = 0;
    virtual HRESULT __stdcall ShowAppointmentDetailsWithDateAsync(HSTRING appointmentId, abi_t<Windows::Foundation::DateTime> instanceStartDate, ::IUnknown** asyncAction) = 0;
    virtual HRESULT __stdcall ShowEditNewAppointmentAsync(::IUnknown* appointment, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall RequestStoreAsync(abi_t<Windows::ApplicationModel::Appointments::AppointmentStoreAccessType> options, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentManagerStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForUser(::IUnknown* user, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentParticipant>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_DisplayName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Address(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Address(HSTRING value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Subject(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Location(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_StartTime(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Duration(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Reminder(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BusyStatus(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Sensitivity(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_OriginalStartTime(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IsResponseRequested(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AllowNewTimeProposal(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AllDay(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Details(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_OnlineMeetingLink(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ReplyTime(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Organizer(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_UserResponse(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_HasInvitees(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IsCanceledMeeting(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IsOrganizedByUser(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Recurrence(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Uri(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Invitees(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DefaultProperties(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ChangeNumber(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RemoteChangeNumber(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DetailsKind(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentRecurrence>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Unit(abi_t<Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit>* value) = 0;
    virtual HRESULT __stdcall put_Unit(abi_t<Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit> value) = 0;
    virtual HRESULT __stdcall get_Occurrences(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Occurrences(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Until(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Until(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Interval(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_Interval(uint32_t value) = 0;
    virtual HRESULT __stdcall get_DaysOfWeek(abi_t<Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek>* value) = 0;
    virtual HRESULT __stdcall put_DaysOfWeek(abi_t<Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek> value) = 0;
    virtual HRESULT __stdcall get_WeekOfMonth(abi_t<Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth>* value) = 0;
    virtual HRESULT __stdcall put_WeekOfMonth(abi_t<Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth> value) = 0;
    virtual HRESULT __stdcall get_Month(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_Month(uint32_t value) = 0;
    virtual HRESULT __stdcall get_Day(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_Day(uint32_t value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentRecurrence2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RecurrenceType(abi_t<Windows::ApplicationModel::Appointments::RecurrenceType>* value) = 0;
    virtual HRESULT __stdcall get_TimeZone(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_TimeZone(HSTRING value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentRecurrence3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CalendarIdentifier(HSTRING* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentStore>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ChangeTracker(::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateAppointmentCalendarAsync(HSTRING name, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetAppointmentCalendarAsync(HSTRING calendarId, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetAppointmentAsync(HSTRING localId, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall GetAppointmentInstanceAsync(HSTRING localId, abi_t<Windows::Foundation::DateTime> instanceStartTime, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall FindAppointmentCalendarsAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall FindAppointmentCalendarsAsyncWithOptions(abi_t<Windows::ApplicationModel::Appointments::FindAppointmentCalendarsOptions> options, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall FindAppointmentsAsync(abi_t<Windows::Foundation::DateTime> rangeStart, abi_t<Windows::Foundation::TimeSpan> rangeLength, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall FindAppointmentsAsyncWithOptions(abi_t<Windows::Foundation::DateTime> rangeStart, abi_t<Windows::Foundation::TimeSpan> rangeLength, ::IUnknown* options, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall FindConflictAsync(::IUnknown* appointment, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall FindConflictAsyncWithInstanceStart(::IUnknown* appointment, abi_t<Windows::Foundation::DateTime> instanceStartTime, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall MoveAppointmentAsync(::IUnknown* appointment, ::IUnknown* destinationCalendar, ::IUnknown** asyncAction) = 0;
    virtual HRESULT __stdcall ShowAddAppointmentAsync(::IUnknown* appointment, abi_t<Windows::Foundation::Rect> selection, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ShowReplaceAppointmentAsync(HSTRING localId, ::IUnknown* appointment, abi_t<Windows::Foundation::Rect> selection, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ShowReplaceAppointmentWithPlacementAndDateAsync(HSTRING localId, ::IUnknown* appointment, abi_t<Windows::Foundation::Rect> selection, abi_t<Windows::UI::Popups::Placement> preferredPlacement, abi_t<Windows::Foundation::DateTime> instanceStartDate, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ShowRemoveAppointmentAsync(HSTRING localId, abi_t<Windows::Foundation::Rect> selection, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ShowRemoveAppointmentWithPlacementAndDateAsync(HSTRING localId, abi_t<Windows::Foundation::Rect> selection, abi_t<Windows::UI::Popups::Placement> preferredPlacement, abi_t<Windows::Foundation::DateTime> instanceStartDate, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ShowAppointmentDetailsAsync(HSTRING localId, ::IUnknown** asyncAction) = 0;
    virtual HRESULT __stdcall ShowAppointmentDetailsWithDateAsync(HSTRING localId, abi_t<Windows::Foundation::DateTime> instanceStartDate, ::IUnknown** asyncAction) = 0;
    virtual HRESULT __stdcall ShowEditNewAppointmentAsync(::IUnknown* appointment, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall FindLocalIdsFromRoamingIdAsync(HSTRING roamingId, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentStore2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_StoreChanged(::IUnknown* pHandler, abi_t<event_token>* pToken) = 0;
    virtual HRESULT __stdcall remove_StoreChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall CreateAppointmentCalendarInAccountAsync(HSTRING name, HSTRING userDataAccountId, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentStoreChange>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Appointment(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ChangeType(abi_t<Windows::ApplicationModel::Appointments::AppointmentStoreChangeType>* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentStoreChange2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AppointmentCalendar(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ReadBatchAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall AcceptChanges() = 0;
    virtual HRESULT __stdcall AcceptChangesThrough(::IUnknown* lastChangeToAccept) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetChangeReader(::IUnknown** value) = 0;
    virtual HRESULT __stdcall Enable() = 0;
    virtual HRESULT __stdcall Reset() = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Complete() = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDeferral(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::ApplicationModel::Appointments::IFindAppointmentsOptions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CalendarIds(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FetchProperties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IncludeHidden(bool* value) = 0;
    virtual HRESULT __stdcall put_IncludeHidden(bool value) = 0;
    virtual HRESULT __stdcall get_MaxCount(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_MaxCount(uint32_t value) = 0;
};};

}
