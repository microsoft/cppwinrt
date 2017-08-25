// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.System.0.h"
#include "winrt/impl/Windows.UI.0.h"
#include "winrt/impl/Windows.UI.Popups.0.h"
#include "winrt/impl/Windows.ApplicationModel.Appointments.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Appointments {

struct WINRT_EBO IAppointment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointment>
{
    IAppointment(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointment2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointment2>,
    impl::require<IAppointment2, Windows::ApplicationModel::Appointments::IAppointment>
{
    IAppointment2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointment3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointment3>,
    impl::require<IAppointment3, Windows::ApplicationModel::Appointments::IAppointment, Windows::ApplicationModel::Appointments::IAppointment2>
{
    IAppointment3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentCalendar :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendar>
{
    IAppointmentCalendar(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentCalendar2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendar2>,
    impl::require<IAppointmentCalendar2, Windows::ApplicationModel::Appointments::IAppointmentCalendar>
{
    IAppointmentCalendar2(std::nullptr_t = nullptr) noexcept {}
    using impl::consume_t<IAppointmentCalendar2, Windows::ApplicationModel::Appointments::IAppointmentCalendar>::DisplayColor;
    using impl::consume_t<IAppointmentCalendar2, Windows::ApplicationModel::Appointments::IAppointmentCalendar2>::DisplayColor;
    using impl::consume_t<IAppointmentCalendar2, Windows::ApplicationModel::Appointments::IAppointmentCalendar>::IsHidden;
    using impl::consume_t<IAppointmentCalendar2, Windows::ApplicationModel::Appointments::IAppointmentCalendar2>::IsHidden;
};

struct WINRT_EBO IAppointmentCalendar3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendar3>
{
    IAppointmentCalendar3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentCalendarSyncManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendarSyncManager>
{
    IAppointmentCalendarSyncManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentCalendarSyncManager2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendarSyncManager2>
{
    IAppointmentCalendarSyncManager2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentConflictResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentConflictResult>
{
    IAppointmentConflictResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentException :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentException>
{
    IAppointmentException(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentInvitee :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentInvitee>,
    impl::require<IAppointmentInvitee, Windows::ApplicationModel::Appointments::IAppointmentParticipant>
{
    IAppointmentInvitee(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentManagerForUser :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentManagerForUser>
{
    IAppointmentManagerForUser(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentManagerStatics>
{
    IAppointmentManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentManagerStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentManagerStatics2>
{
    IAppointmentManagerStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentManagerStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentManagerStatics3>
{
    IAppointmentManagerStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentParticipant :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentParticipant>
{
    IAppointmentParticipant(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentPropertiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentPropertiesStatics>
{
    IAppointmentPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentPropertiesStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentPropertiesStatics2>,
    impl::require<IAppointmentPropertiesStatics2, Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>
{
    IAppointmentPropertiesStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentRecurrence :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentRecurrence>
{
    IAppointmentRecurrence(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentRecurrence2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentRecurrence2>,
    impl::require<IAppointmentRecurrence2, Windows::ApplicationModel::Appointments::IAppointmentRecurrence>
{
    IAppointmentRecurrence2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentRecurrence3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentRecurrence3>,
    impl::require<IAppointmentRecurrence3, Windows::ApplicationModel::Appointments::IAppointmentRecurrence, Windows::ApplicationModel::Appointments::IAppointmentRecurrence2>
{
    IAppointmentRecurrence3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentStore :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentStore>
{
    IAppointmentStore(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentStore2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentStore2>,
    impl::require<IAppointmentStore2, Windows::ApplicationModel::Appointments::IAppointmentStore>
{
    IAppointmentStore2(std::nullptr_t = nullptr) noexcept {}
    using impl::consume_t<IAppointmentStore2, Windows::ApplicationModel::Appointments::IAppointmentStore>::CreateAppointmentCalendarAsync;
    using impl::consume_t<IAppointmentStore2, Windows::ApplicationModel::Appointments::IAppointmentStore2>::CreateAppointmentCalendarAsync;
};

struct WINRT_EBO IAppointmentStoreChange :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentStoreChange>
{
    IAppointmentStoreChange(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentStoreChange2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentStoreChange2>,
    impl::require<IAppointmentStoreChange2, Windows::ApplicationModel::Appointments::IAppointmentStoreChange>
{
    IAppointmentStoreChange2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentStoreChangeReader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentStoreChangeReader>
{
    IAppointmentStoreChangeReader(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentStoreChangeTracker :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentStoreChangeTracker>
{
    IAppointmentStoreChangeTracker(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentStoreChangedDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentStoreChangedDeferral>
{
    IAppointmentStoreChangedDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentStoreChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentStoreChangedEventArgs>
{
    IAppointmentStoreChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentStoreNotificationTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentStoreNotificationTriggerDetails>
{
    IAppointmentStoreNotificationTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFindAppointmentsOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFindAppointmentsOptions>
{
    IFindAppointmentsOptions(std::nullptr_t = nullptr) noexcept {}
};

}
