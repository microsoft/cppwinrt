// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Appointments {

enum class AppointmentParticipantResponse;
struct Appointment;
struct AppointmentInvitee;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Deferral;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Appointments::DataProvider {

struct IAppointmentCalendarCancelMeetingRequest;
struct IAppointmentCalendarCancelMeetingRequestEventArgs;
struct IAppointmentCalendarCreateOrUpdateAppointmentRequest;
struct IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs;
struct IAppointmentCalendarForwardMeetingRequest;
struct IAppointmentCalendarForwardMeetingRequestEventArgs;
struct IAppointmentCalendarProposeNewTimeForMeetingRequest;
struct IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs;
struct IAppointmentCalendarSyncManagerSyncRequest;
struct IAppointmentCalendarSyncManagerSyncRequestEventArgs;
struct IAppointmentCalendarUpdateMeetingResponseRequest;
struct IAppointmentCalendarUpdateMeetingResponseRequestEventArgs;
struct IAppointmentDataProviderConnection;
struct IAppointmentDataProviderTriggerDetails;
struct AppointmentCalendarCancelMeetingRequest;
struct AppointmentCalendarCancelMeetingRequestEventArgs;
struct AppointmentCalendarCreateOrUpdateAppointmentRequest;
struct AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs;
struct AppointmentCalendarForwardMeetingRequest;
struct AppointmentCalendarForwardMeetingRequestEventArgs;
struct AppointmentCalendarProposeNewTimeForMeetingRequest;
struct AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs;
struct AppointmentCalendarSyncManagerSyncRequest;
struct AppointmentCalendarSyncManagerSyncRequestEventArgs;
struct AppointmentCalendarUpdateMeetingResponseRequest;
struct AppointmentCalendarUpdateMeetingResponseRequestEventArgs;
struct AppointmentDataProviderConnection;
struct AppointmentDataProviderTriggerDetails;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequest>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequestEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequest>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequest>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequestEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequest>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequest>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequestEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequest>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequestEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderTriggerDetails>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCancelMeetingRequest>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCancelMeetingRequestEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCreateOrUpdateAppointmentRequest>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarForwardMeetingRequest>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarForwardMeetingRequestEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarProposeNewTimeForMeetingRequest>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarSyncManagerSyncRequest>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarSyncManagerSyncRequestEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarUpdateMeetingResponseRequest>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarUpdateMeetingResponseRequestEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderTriggerDetails>{ using type = class_category; };
template <> struct name<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCancelMeetingRequest" }; };
template <> struct name<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequestEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCancelMeetingRequestEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCreateOrUpdateAppointmentRequest" }; };
template <> struct name<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarForwardMeetingRequest" }; };
template <> struct name<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequestEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarForwardMeetingRequestEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarProposeNewTimeForMeetingRequest" }; };
template <> struct name<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarSyncManagerSyncRequest" }; };
template <> struct name<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequestEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarSyncManagerSyncRequestEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarUpdateMeetingResponseRequest" }; };
template <> struct name<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequestEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarUpdateMeetingResponseRequestEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentDataProviderConnection" }; };
template <> struct name<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderTriggerDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentDataProviderTriggerDetails" }; };
template <> struct name<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCancelMeetingRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCancelMeetingRequest" }; };
template <> struct name<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCancelMeetingRequestEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCancelMeetingRequestEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCreateOrUpdateAppointmentRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCreateOrUpdateAppointmentRequest" }; };
template <> struct name<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarForwardMeetingRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarForwardMeetingRequest" }; };
template <> struct name<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarForwardMeetingRequestEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarForwardMeetingRequestEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarProposeNewTimeForMeetingRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarProposeNewTimeForMeetingRequest" }; };
template <> struct name<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarSyncManagerSyncRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarSyncManagerSyncRequest" }; };
template <> struct name<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarSyncManagerSyncRequestEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarSyncManagerSyncRequestEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarUpdateMeetingResponseRequest>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarUpdateMeetingResponseRequest" }; };
template <> struct name<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarUpdateMeetingResponseRequestEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarUpdateMeetingResponseRequestEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentDataProviderConnection" }; };
template <> struct name<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderTriggerDetails>{ static constexpr auto & value{ L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentDataProviderTriggerDetails" }; };
template <> struct guid<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequest>{ static constexpr GUID value{ 0x49460F8D,0x6434,0x40D7,{ 0xAD,0x46,0x62,0x97,0x41,0x93,0x14,0xD1 } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequestEventArgs>{ static constexpr GUID value{ 0x1A79BE16,0x7F30,0x4E35,{ 0xBE,0xEF,0x9D,0x2C,0x7B,0x6D,0xCA,0xE1 } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequest>{ static constexpr GUID value{ 0x2E62F2B2,0xCA96,0x48AC,{ 0x91,0x24,0x40,0x6B,0x19,0xFE,0xFA,0x70 } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs>{ static constexpr GUID value{ 0xCF8DED28,0x002E,0x4BF7,{ 0x8E,0x9D,0x5E,0x20,0xD4,0x9A,0xA3,0xBA } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequest>{ static constexpr GUID value{ 0x82E5EE56,0x26B6,0x4253,{ 0x8A,0x8F,0x6C,0xF5,0xF2,0xFF,0x78,0x84 } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequestEventArgs>{ static constexpr GUID value{ 0x3109151A,0x23A2,0x42FD,{ 0x9C,0x82,0xC9,0xA6,0x0D,0x59,0xF8,0xA8 } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequest>{ static constexpr GUID value{ 0xCE1C63F5,0xEDF6,0x43C3,{ 0x82,0xB7,0xBE,0x6B,0x36,0x8C,0x69,0x00 } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs>{ static constexpr GUID value{ 0xD2D777D8,0xFED1,0x4280,{ 0xA3,0xBA,0x2E,0x1F,0x47,0x60,0x9A,0xA2 } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequest>{ static constexpr GUID value{ 0x12AB382B,0x7163,0x4A56,{ 0x9A,0x4E,0x72,0x23,0xA8,0x4A,0xDF,0x46 } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequestEventArgs>{ static constexpr GUID value{ 0xCA17C6F7,0x0284,0x4EDD,{ 0x87,0xBA,0x4D,0x8F,0x69,0xDC,0xF5,0xC0 } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequest>{ static constexpr GUID value{ 0xA36D608C,0xC29D,0x4B94,{ 0xB0,0x86,0x7E,0x9F,0xF7,0xBD,0x84,0xA0 } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequestEventArgs>{ static constexpr GUID value{ 0x88759883,0x97BF,0x479D,{ 0xAE,0xD5,0x0B,0xE8,0xCE,0x56,0x7D,0x1E } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection>{ static constexpr GUID value{ 0xF3DD9D83,0x3254,0x465F,{ 0xAB,0xDB,0x92,0x80,0x46,0x55,0x2C,0xF4 } }; };
template <> struct guid<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderTriggerDetails>{ static constexpr GUID value{ 0xB3283C01,0x7E12,0x4E5E,{ 0xB1,0xEF,0x74,0xFB,0x68,0xAC,0x6F,0x2A } }; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCancelMeetingRequest>{ using type = Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequest; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCancelMeetingRequestEventArgs>{ using type = Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequestEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCreateOrUpdateAppointmentRequest>{ using type = Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequest; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs>{ using type = Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarForwardMeetingRequest>{ using type = Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequest; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarForwardMeetingRequestEventArgs>{ using type = Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequestEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarProposeNewTimeForMeetingRequest>{ using type = Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequest; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs>{ using type = Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarSyncManagerSyncRequest>{ using type = Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequest; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarSyncManagerSyncRequestEventArgs>{ using type = Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequestEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarUpdateMeetingResponseRequest>{ using type = Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequest; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarUpdateMeetingResponseRequestEventArgs>{ using type = Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequestEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection>{ using type = Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection; };
template <> struct default_interface<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderTriggerDetails>{ using type = Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderTriggerDetails; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarCancelMeetingRequest
{
    hstring AppointmentCalendarLocalId() const;
    hstring AppointmentLocalId() const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> AppointmentOriginalStartTime() const;
    hstring Subject() const;
    hstring Comment() const;
    bool NotifyInvitees() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync() const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequest> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarCancelMeetingRequest<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarCancelMeetingRequestEventArgs
{
    Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCancelMeetingRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequestEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarCancelMeetingRequestEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarCreateOrUpdateAppointmentRequest
{
    hstring AppointmentCalendarLocalId() const;
    Windows::ApplicationModel::Appointments::Appointment Appointment() const;
    bool NotifyInvitees() const;
    Windows::Foundation::Collections::IVectorView<hstring> ChangedProperties() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync(Windows::ApplicationModel::Appointments::Appointment const& createdOrUpdatedAppointment) const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequest> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarCreateOrUpdateAppointmentRequest<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs
{
    Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCreateOrUpdateAppointmentRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarForwardMeetingRequest
{
    hstring AppointmentCalendarLocalId() const;
    hstring AppointmentLocalId() const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> AppointmentOriginalStartTime() const;
    Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentInvitee> Invitees() const;
    hstring Subject() const;
    hstring ForwardHeader() const;
    hstring Comment() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync() const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequest> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarForwardMeetingRequest<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarForwardMeetingRequestEventArgs
{
    Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarForwardMeetingRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequestEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarForwardMeetingRequestEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarProposeNewTimeForMeetingRequest
{
    hstring AppointmentCalendarLocalId() const;
    hstring AppointmentLocalId() const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> AppointmentOriginalStartTime() const;
    Windows::Foundation::DateTime NewStartTime() const;
    Windows::Foundation::TimeSpan NewDuration() const;
    hstring Subject() const;
    hstring Comment() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync() const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequest> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarProposeNewTimeForMeetingRequest<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs
{
    Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarProposeNewTimeForMeetingRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarSyncManagerSyncRequest
{
    hstring AppointmentCalendarLocalId() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync() const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequest> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarSyncManagerSyncRequest<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarSyncManagerSyncRequestEventArgs
{
    Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarSyncManagerSyncRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequestEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarSyncManagerSyncRequestEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarUpdateMeetingResponseRequest
{
    hstring AppointmentCalendarLocalId() const;
    hstring AppointmentLocalId() const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> AppointmentOriginalStartTime() const;
    Windows::ApplicationModel::Appointments::AppointmentParticipantResponse Response() const;
    hstring Subject() const;
    hstring Comment() const;
    bool SendUpdate() const;
    Windows::Foundation::IAsyncAction ReportCompletedAsync() const;
    Windows::Foundation::IAsyncAction ReportFailedAsync() const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequest> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarUpdateMeetingResponseRequest<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarUpdateMeetingResponseRequestEventArgs
{
    Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarUpdateMeetingResponseRequest Request() const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequestEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarUpdateMeetingResponseRequestEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentDataProviderConnection
{
    event_token SyncRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarSyncManagerSyncRequestEventArgs> const& handler) const;
    using SyncRequested_revoker = event_revoker<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection>;
    SyncRequested_revoker SyncRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarSyncManagerSyncRequestEventArgs> const& handler) const;
    void SyncRequested(event_token const& token) const;
    event_token CreateOrUpdateAppointmentRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs> const& handler) const;
    using CreateOrUpdateAppointmentRequested_revoker = event_revoker<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection>;
    CreateOrUpdateAppointmentRequested_revoker CreateOrUpdateAppointmentRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs> const& handler) const;
    void CreateOrUpdateAppointmentRequested(event_token const& token) const;
    event_token CancelMeetingRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCancelMeetingRequestEventArgs> const& handler) const;
    using CancelMeetingRequested_revoker = event_revoker<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection>;
    CancelMeetingRequested_revoker CancelMeetingRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCancelMeetingRequestEventArgs> const& handler) const;
    void CancelMeetingRequested(event_token const& token) const;
    event_token ForwardMeetingRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarForwardMeetingRequestEventArgs> const& handler) const;
    using ForwardMeetingRequested_revoker = event_revoker<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection>;
    ForwardMeetingRequested_revoker ForwardMeetingRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarForwardMeetingRequestEventArgs> const& handler) const;
    void ForwardMeetingRequested(event_token const& token) const;
    event_token ProposeNewTimeForMeetingRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs> const& handler) const;
    using ProposeNewTimeForMeetingRequested_revoker = event_revoker<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection>;
    ProposeNewTimeForMeetingRequested_revoker ProposeNewTimeForMeetingRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs> const& handler) const;
    void ProposeNewTimeForMeetingRequested(event_token const& token) const;
    event_token UpdateMeetingResponseRequested(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarUpdateMeetingResponseRequestEventArgs> const& handler) const;
    using UpdateMeetingResponseRequested_revoker = event_revoker<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection>;
    UpdateMeetingResponseRequested_revoker UpdateMeetingResponseRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection, Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarUpdateMeetingResponseRequestEventArgs> const& handler) const;
    void UpdateMeetingResponseRequested(event_token const& token) const;
    void Start() const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentDataProviderConnection<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentDataProviderTriggerDetails
{
    Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection Connection() const;
};
template <> struct consume<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderTriggerDetails> { template <typename D> using type = consume_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentDataProviderTriggerDetails<D>; };

template <> struct abi<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AppointmentCalendarLocalId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AppointmentLocalId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AppointmentOriginalStartTime(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Subject(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Comment(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_NotifyInvitees(bool* value) = 0;
    virtual HRESULT __stdcall ReportCompletedAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall ReportFailedAsync(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequestEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Request(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AppointmentCalendarLocalId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Appointment(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_NotifyInvitees(bool* value) = 0;
    virtual HRESULT __stdcall get_ChangedProperties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall ReportCompletedAsync(::IUnknown* createdOrUpdatedAppointment, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall ReportFailedAsync(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Request(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AppointmentCalendarLocalId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AppointmentLocalId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AppointmentOriginalStartTime(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Invitees(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Subject(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ForwardHeader(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Comment(HSTRING* value) = 0;
    virtual HRESULT __stdcall ReportCompletedAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall ReportFailedAsync(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequestEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Request(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AppointmentCalendarLocalId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AppointmentLocalId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AppointmentOriginalStartTime(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_NewStartTime(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_NewDuration(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_Subject(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Comment(HSTRING* value) = 0;
    virtual HRESULT __stdcall ReportCompletedAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall ReportFailedAsync(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Request(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AppointmentCalendarLocalId(HSTRING* value) = 0;
    virtual HRESULT __stdcall ReportCompletedAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall ReportFailedAsync(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequestEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Request(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AppointmentCalendarLocalId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AppointmentLocalId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AppointmentOriginalStartTime(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Response(abi_t<Windows::ApplicationModel::Appointments::AppointmentParticipantResponse>* response) = 0;
    virtual HRESULT __stdcall get_Subject(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Comment(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SendUpdate(bool* value) = 0;
    virtual HRESULT __stdcall ReportCompletedAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall ReportFailedAsync(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequestEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Request(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_SyncRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_SyncRequested(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_CreateOrUpdateAppointmentRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_CreateOrUpdateAppointmentRequested(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_CancelMeetingRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_CancelMeetingRequested(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_ForwardMeetingRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ForwardMeetingRequested(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_ProposeNewTimeForMeetingRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ProposeNewTimeForMeetingRequested(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_UpdateMeetingResponseRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_UpdateMeetingResponseRequested(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall Start() = 0;
};};

template <> struct abi<Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderTriggerDetails>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Connection(::IUnknown** value) = 0;
};};

}
