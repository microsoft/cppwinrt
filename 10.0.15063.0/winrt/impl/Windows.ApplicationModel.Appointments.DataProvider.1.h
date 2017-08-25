// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.Appointments.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.ApplicationModel.Appointments.DataProvider.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Appointments::DataProvider {

struct WINRT_EBO IAppointmentCalendarCancelMeetingRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendarCancelMeetingRequest>
{
    IAppointmentCalendarCancelMeetingRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentCalendarCancelMeetingRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendarCancelMeetingRequestEventArgs>
{
    IAppointmentCalendarCancelMeetingRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentCalendarCreateOrUpdateAppointmentRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendarCreateOrUpdateAppointmentRequest>
{
    IAppointmentCalendarCreateOrUpdateAppointmentRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs>
{
    IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentCalendarForwardMeetingRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendarForwardMeetingRequest>
{
    IAppointmentCalendarForwardMeetingRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentCalendarForwardMeetingRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendarForwardMeetingRequestEventArgs>
{
    IAppointmentCalendarForwardMeetingRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentCalendarProposeNewTimeForMeetingRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendarProposeNewTimeForMeetingRequest>
{
    IAppointmentCalendarProposeNewTimeForMeetingRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs>
{
    IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentCalendarSyncManagerSyncRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendarSyncManagerSyncRequest>
{
    IAppointmentCalendarSyncManagerSyncRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentCalendarSyncManagerSyncRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendarSyncManagerSyncRequestEventArgs>
{
    IAppointmentCalendarSyncManagerSyncRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentCalendarUpdateMeetingResponseRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendarUpdateMeetingResponseRequest>
{
    IAppointmentCalendarUpdateMeetingResponseRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentCalendarUpdateMeetingResponseRequestEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentCalendarUpdateMeetingResponseRequestEventArgs>
{
    IAppointmentCalendarUpdateMeetingResponseRequestEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentDataProviderConnection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentDataProviderConnection>
{
    IAppointmentDataProviderConnection(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppointmentDataProviderTriggerDetails :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppointmentDataProviderTriggerDetails>
{
    IAppointmentDataProviderTriggerDetails(std::nullptr_t = nullptr) noexcept {}
};

}
