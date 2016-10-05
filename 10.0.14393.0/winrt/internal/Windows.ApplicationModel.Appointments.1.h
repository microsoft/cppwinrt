// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.ApplicationModel.Appointments.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.System.0.h"
#include "Windows.UI.0.h"
#include "Windows.UI.Popups.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::Appointments {

struct __declspec(uuid("dd002f2f-2bdd-4076-90a3-22c275312965")) __declspec(novtable) IAppointment : Windows::IInspectable
{
    virtual HRESULT __stdcall get_StartTime(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall put_StartTime(Windows::Foundation::DateTime value) = 0;
    virtual HRESULT __stdcall get_Duration(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall put_Duration(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_Location(hstring * value) = 0;
    virtual HRESULT __stdcall put_Location(hstring value) = 0;
    virtual HRESULT __stdcall get_Subject(hstring * value) = 0;
    virtual HRESULT __stdcall put_Subject(hstring value) = 0;
    virtual HRESULT __stdcall get_Details(hstring * value) = 0;
    virtual HRESULT __stdcall put_Details(hstring value) = 0;
    virtual HRESULT __stdcall get_Reminder(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> ** value) = 0;
    virtual HRESULT __stdcall put_Reminder(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> * value) = 0;
    virtual HRESULT __stdcall get_Organizer(Windows::ApplicationModel::Appointments::IAppointmentParticipant ** value) = 0;
    virtual HRESULT __stdcall put_Organizer(Windows::ApplicationModel::Appointments::IAppointmentParticipant * value) = 0;
    virtual HRESULT __stdcall get_Invitees(Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Appointments::AppointmentInvitee> ** value) = 0;
    virtual HRESULT __stdcall get_Recurrence(Windows::ApplicationModel::Appointments::IAppointmentRecurrence ** value) = 0;
    virtual HRESULT __stdcall put_Recurrence(Windows::ApplicationModel::Appointments::IAppointmentRecurrence * value) = 0;
    virtual HRESULT __stdcall get_BusyStatus(winrt::Windows::ApplicationModel::Appointments::AppointmentBusyStatus * value) = 0;
    virtual HRESULT __stdcall put_BusyStatus(winrt::Windows::ApplicationModel::Appointments::AppointmentBusyStatus value) = 0;
    virtual HRESULT __stdcall get_AllDay(bool * value) = 0;
    virtual HRESULT __stdcall put_AllDay(bool value) = 0;
    virtual HRESULT __stdcall get_Sensitivity(winrt::Windows::ApplicationModel::Appointments::AppointmentSensitivity * value) = 0;
    virtual HRESULT __stdcall put_Sensitivity(winrt::Windows::ApplicationModel::Appointments::AppointmentSensitivity value) = 0;
    virtual HRESULT __stdcall get_Uri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_Uri(Windows::Foundation::IUriRuntimeClass * value) = 0;
};

struct __declspec(uuid("5e85983c-540f-3452-9b5c-0dd7ad4c65a2")) __declspec(novtable) IAppointment2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_LocalId(hstring * value) = 0;
    virtual HRESULT __stdcall get_CalendarId(hstring * value) = 0;
    virtual HRESULT __stdcall get_RoamingId(hstring * value) = 0;
    virtual HRESULT __stdcall put_RoamingId(hstring value) = 0;
    virtual HRESULT __stdcall get_OriginalStartTime(Windows::Foundation::IReference<Windows::Foundation::DateTime> ** value) = 0;
    virtual HRESULT __stdcall get_IsResponseRequested(bool * value) = 0;
    virtual HRESULT __stdcall put_IsResponseRequested(bool value) = 0;
    virtual HRESULT __stdcall get_AllowNewTimeProposal(bool * value) = 0;
    virtual HRESULT __stdcall put_AllowNewTimeProposal(bool value) = 0;
    virtual HRESULT __stdcall get_OnlineMeetingLink(hstring * value) = 0;
    virtual HRESULT __stdcall put_OnlineMeetingLink(hstring value) = 0;
    virtual HRESULT __stdcall get_ReplyTime(Windows::Foundation::IReference<Windows::Foundation::DateTime> ** value) = 0;
    virtual HRESULT __stdcall put_ReplyTime(Windows::Foundation::IReference<Windows::Foundation::DateTime> * value) = 0;
    virtual HRESULT __stdcall get_UserResponse(winrt::Windows::ApplicationModel::Appointments::AppointmentParticipantResponse * value) = 0;
    virtual HRESULT __stdcall put_UserResponse(winrt::Windows::ApplicationModel::Appointments::AppointmentParticipantResponse value) = 0;
    virtual HRESULT __stdcall get_HasInvitees(bool * value) = 0;
    virtual HRESULT __stdcall get_IsCanceledMeeting(bool * value) = 0;
    virtual HRESULT __stdcall put_IsCanceledMeeting(bool value) = 0;
    virtual HRESULT __stdcall get_IsOrganizedByUser(bool * value) = 0;
    virtual HRESULT __stdcall put_IsOrganizedByUser(bool value) = 0;
};

struct __declspec(uuid("bfcc45a9-8961-4991-934b-c48768e5a96c")) __declspec(novtable) IAppointment3 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ChangeNumber(uint64_t * value) = 0;
    virtual HRESULT __stdcall get_RemoteChangeNumber(uint64_t * value) = 0;
    virtual HRESULT __stdcall put_RemoteChangeNumber(uint64_t value) = 0;
    virtual HRESULT __stdcall get_DetailsKind(winrt::Windows::ApplicationModel::Appointments::AppointmentDetailsKind * value) = 0;
    virtual HRESULT __stdcall put_DetailsKind(winrt::Windows::ApplicationModel::Appointments::AppointmentDetailsKind value) = 0;
};

struct __declspec(uuid("5273819d-8339-3d4f-a02f-64084452bb5d")) __declspec(novtable) IAppointmentCalendar : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DisplayColor(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_DisplayName(hstring * value) = 0;
    virtual HRESULT __stdcall put_DisplayName(hstring value) = 0;
    virtual HRESULT __stdcall get_LocalId(hstring * value) = 0;
    virtual HRESULT __stdcall get_IsHidden(bool * value) = 0;
    virtual HRESULT __stdcall get_OtherAppReadAccess(winrt::Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess * value) = 0;
    virtual HRESULT __stdcall put_OtherAppReadAccess(winrt::Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppReadAccess value) = 0;
    virtual HRESULT __stdcall get_OtherAppWriteAccess(winrt::Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess * value) = 0;
    virtual HRESULT __stdcall put_OtherAppWriteAccess(winrt::Windows::ApplicationModel::Appointments::AppointmentCalendarOtherAppWriteAccess value) = 0;
    virtual HRESULT __stdcall get_SourceDisplayName(hstring * value) = 0;
    virtual HRESULT __stdcall get_SummaryCardView(winrt::Windows::ApplicationModel::Appointments::AppointmentSummaryCardView * value) = 0;
    virtual HRESULT __stdcall put_SummaryCardView(winrt::Windows::ApplicationModel::Appointments::AppointmentSummaryCardView value) = 0;
    virtual HRESULT __stdcall abi_FindAppointmentsAsync(Windows::Foundation::DateTime rangeStart, Windows::Foundation::TimeSpan rangeLength, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> ** result) = 0;
    virtual HRESULT __stdcall abi_FindAppointmentsAsyncWithOptions(Windows::Foundation::DateTime rangeStart, Windows::Foundation::TimeSpan rangeLength, Windows::ApplicationModel::Appointments::IFindAppointmentsOptions * options, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> ** result) = 0;
    virtual HRESULT __stdcall abi_FindExceptionsFromMasterAsync(hstring masterLocalId, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentException>> ** value) = 0;
    virtual HRESULT __stdcall abi_FindAllInstancesAsync(hstring masterLocalId, Windows::Foundation::DateTime rangeStart, Windows::Foundation::TimeSpan rangeLength, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> ** value) = 0;
    virtual HRESULT __stdcall abi_FindAllInstancesAsyncWithOptions(hstring masterLocalId, Windows::Foundation::DateTime rangeStart, Windows::Foundation::TimeSpan rangeLength, Windows::ApplicationModel::Appointments::IFindAppointmentsOptions * pOptions, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> ** value) = 0;
    virtual HRESULT __stdcall abi_GetAppointmentAsync(hstring localId, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment> ** result) = 0;
    virtual HRESULT __stdcall abi_GetAppointmentInstanceAsync(hstring localId, Windows::Foundation::DateTime instanceStartTime, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment> ** result) = 0;
    virtual HRESULT __stdcall abi_FindUnexpandedAppointmentsAsync(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> ** result) = 0;
    virtual HRESULT __stdcall abi_FindUnexpandedAppointmentsAsyncWithOptions(Windows::ApplicationModel::Appointments::IFindAppointmentsOptions * options, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> ** result) = 0;
    virtual HRESULT __stdcall abi_DeleteAsync(Windows::Foundation::IAsyncAction ** asyncAction) = 0;
    virtual HRESULT __stdcall abi_SaveAsync(Windows::Foundation::IAsyncAction ** asyncAction) = 0;
    virtual HRESULT __stdcall abi_DeleteAppointmentAsync(hstring localId, Windows::Foundation::IAsyncAction ** asyncAction) = 0;
    virtual HRESULT __stdcall abi_DeleteAppointmentInstanceAsync(hstring localId, Windows::Foundation::DateTime instanceStartTime, Windows::Foundation::IAsyncAction ** asyncAction) = 0;
    virtual HRESULT __stdcall abi_SaveAppointmentAsync(Windows::ApplicationModel::Appointments::IAppointment * pAppointment, Windows::Foundation::IAsyncAction ** asyncAction) = 0;
};

struct __declspec(uuid("18e7e422-2467-4e1c-a459-d8a29303d092")) __declspec(novtable) IAppointmentCalendar2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SyncManager(Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager ** value) = 0;
    virtual HRESULT __stdcall get_RemoteId(hstring * value) = 0;
    virtual HRESULT __stdcall put_RemoteId(hstring value) = 0;
    virtual HRESULT __stdcall put_DisplayColor(Windows::UI::Color value) = 0;
    virtual HRESULT __stdcall put_IsHidden(bool value) = 0;
    virtual HRESULT __stdcall get_UserDataAccountId(hstring * value) = 0;
    virtual HRESULT __stdcall get_CanCreateOrUpdateAppointments(bool * value) = 0;
    virtual HRESULT __stdcall put_CanCreateOrUpdateAppointments(bool value) = 0;
    virtual HRESULT __stdcall get_CanCancelMeetings(bool * value) = 0;
    virtual HRESULT __stdcall put_CanCancelMeetings(bool value) = 0;
    virtual HRESULT __stdcall get_CanForwardMeetings(bool * value) = 0;
    virtual HRESULT __stdcall put_CanForwardMeetings(bool value) = 0;
    virtual HRESULT __stdcall get_CanProposeNewTimeForMeetings(bool * value) = 0;
    virtual HRESULT __stdcall put_CanProposeNewTimeForMeetings(bool value) = 0;
    virtual HRESULT __stdcall get_CanUpdateMeetingResponses(bool * value) = 0;
    virtual HRESULT __stdcall put_CanUpdateMeetingResponses(bool value) = 0;
    virtual HRESULT __stdcall get_CanNotifyInvitees(bool * value) = 0;
    virtual HRESULT __stdcall put_CanNotifyInvitees(bool value) = 0;
    virtual HRESULT __stdcall get_MustNofityInvitees(bool * value) = 0;
    virtual HRESULT __stdcall put_MustNofityInvitees(bool value) = 0;
    virtual HRESULT __stdcall abi_TryCreateOrUpdateAppointmentAsync(Windows::ApplicationModel::Appointments::IAppointment * appointment, bool notifyInvitees, Windows::Foundation::IAsyncOperation<bool> ** result) = 0;
    virtual HRESULT __stdcall abi_TryCancelMeetingAsync(Windows::ApplicationModel::Appointments::IAppointment * meeting, hstring subject, hstring comment, bool notifyInvitees, Windows::Foundation::IAsyncOperation<bool> ** result) = 0;
    virtual HRESULT __stdcall abi_TryForwardMeetingAsync(Windows::ApplicationModel::Appointments::IAppointment * meeting, Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Appointments::AppointmentInvitee> * invitees, hstring subject, hstring forwardHeader, hstring comment, Windows::Foundation::IAsyncOperation<bool> ** result) = 0;
    virtual HRESULT __stdcall abi_TryProposeNewTimeForMeetingAsync(Windows::ApplicationModel::Appointments::IAppointment * meeting, Windows::Foundation::DateTime newStartTime, Windows::Foundation::TimeSpan newDuration, hstring subject, hstring comment, Windows::Foundation::IAsyncOperation<bool> ** result) = 0;
    virtual HRESULT __stdcall abi_TryUpdateMeetingResponseAsync(Windows::ApplicationModel::Appointments::IAppointment * meeting, winrt::Windows::ApplicationModel::Appointments::AppointmentParticipantResponse response, hstring subject, hstring comment, bool sendUpdate, Windows::Foundation::IAsyncOperation<bool> ** result) = 0;
};

struct __declspec(uuid("eb23d22b-a685-42ae-8495-b3119adb4167")) __declspec(novtable) IAppointmentCalendar3 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_RegisterSyncManagerAsync(Windows::Foundation::IAsyncAction ** result) = 0;
};

struct __declspec(uuid("2b21b3a0-4aff-4392-bc5f-5645ffcffb17")) __declspec(novtable) IAppointmentCalendarSyncManager : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus * value) = 0;
    virtual HRESULT __stdcall get_LastSuccessfulSyncTime(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall get_LastAttemptedSyncTime(Windows::Foundation::DateTime * value) = 0;
    virtual HRESULT __stdcall abi_SyncAsync(Windows::Foundation::IAsyncOperation<bool> ** result) = 0;
    virtual HRESULT __stdcall add_SyncStatusChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_SyncStatusChanged(event_token token) = 0;
};

struct __declspec(uuid("647528ad-0d29-4c7c-aaa7-bf996805537c")) __declspec(novtable) IAppointmentCalendarSyncManager2 : Windows::IInspectable
{
    virtual HRESULT __stdcall put_Status(winrt::Windows::ApplicationModel::Appointments::AppointmentCalendarSyncStatus value) = 0;
    virtual HRESULT __stdcall put_LastSuccessfulSyncTime(Windows::Foundation::DateTime value) = 0;
    virtual HRESULT __stdcall put_LastAttemptedSyncTime(Windows::Foundation::DateTime value) = 0;
};

struct __declspec(uuid("d5cdf0be-2f2f-3b7d-af0a-a7e20f3a46e3")) __declspec(novtable) IAppointmentConflictResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Type(winrt::Windows::ApplicationModel::Appointments::AppointmentConflictType * value) = 0;
    virtual HRESULT __stdcall get_Date(Windows::Foundation::DateTime * value) = 0;
};

struct __declspec(uuid("a2076767-16f6-4bce-9f5a-8600b8019fcb")) __declspec(novtable) IAppointmentException : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Appointment(Windows::ApplicationModel::Appointments::IAppointment ** value) = 0;
    virtual HRESULT __stdcall get_ExceptionProperties(Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
    virtual HRESULT __stdcall get_IsDeleted(bool * value) = 0;
};

struct __declspec(uuid("13bf0796-9842-495b-b0e7-ef8f79c0701d")) __declspec(novtable) IAppointmentInvitee : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Role(winrt::Windows::ApplicationModel::Appointments::AppointmentParticipantRole * value) = 0;
    virtual HRESULT __stdcall put_Role(winrt::Windows::ApplicationModel::Appointments::AppointmentParticipantRole value) = 0;
    virtual HRESULT __stdcall get_Response(winrt::Windows::ApplicationModel::Appointments::AppointmentParticipantResponse * value) = 0;
    virtual HRESULT __stdcall put_Response(winrt::Windows::ApplicationModel::Appointments::AppointmentParticipantResponse value) = 0;
};

struct __declspec(uuid("70261423-73cc-4660-b318-b01365302a03")) __declspec(novtable) IAppointmentManagerForUser : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_ShowAddAppointmentAsync(Windows::ApplicationModel::Appointments::IAppointment * appointment, Windows::Foundation::Rect selection, Windows::Foundation::IAsyncOperation<hstring> ** result) = 0;
    virtual HRESULT __stdcall abi_ShowAddAppointmentWithPlacementAsync(Windows::ApplicationModel::Appointments::IAppointment * appointment, Windows::Foundation::Rect selection, winrt::Windows::UI::Popups::Placement preferredPlacement, Windows::Foundation::IAsyncOperation<hstring> ** result) = 0;
    virtual HRESULT __stdcall abi_ShowReplaceAppointmentAsync(hstring appointmentId, Windows::ApplicationModel::Appointments::IAppointment * appointment, Windows::Foundation::Rect selection, Windows::Foundation::IAsyncOperation<hstring> ** result) = 0;
    virtual HRESULT __stdcall abi_ShowReplaceAppointmentWithPlacementAsync(hstring appointmentId, Windows::ApplicationModel::Appointments::IAppointment * appointment, Windows::Foundation::Rect selection, winrt::Windows::UI::Popups::Placement preferredPlacement, Windows::Foundation::IAsyncOperation<hstring> ** result) = 0;
    virtual HRESULT __stdcall abi_ShowReplaceAppointmentWithPlacementAndDateAsync(hstring appointmentId, Windows::ApplicationModel::Appointments::IAppointment * appointment, Windows::Foundation::Rect selection, winrt::Windows::UI::Popups::Placement preferredPlacement, Windows::Foundation::DateTime instanceStartDate, Windows::Foundation::IAsyncOperation<hstring> ** result) = 0;
    virtual HRESULT __stdcall abi_ShowRemoveAppointmentAsync(hstring appointmentId, Windows::Foundation::Rect selection, Windows::Foundation::IAsyncOperation<bool> ** result) = 0;
    virtual HRESULT __stdcall abi_ShowRemoveAppointmentWithPlacementAsync(hstring appointmentId, Windows::Foundation::Rect selection, winrt::Windows::UI::Popups::Placement preferredPlacement, Windows::Foundation::IAsyncOperation<bool> ** result) = 0;
    virtual HRESULT __stdcall abi_ShowRemoveAppointmentWithPlacementAndDateAsync(hstring appointmentId, Windows::Foundation::Rect selection, winrt::Windows::UI::Popups::Placement preferredPlacement, Windows::Foundation::DateTime instanceStartDate, Windows::Foundation::IAsyncOperation<bool> ** result) = 0;
    virtual HRESULT __stdcall abi_ShowTimeFrameAsync(Windows::Foundation::DateTime timeToShow, Windows::Foundation::TimeSpan duration, Windows::Foundation::IAsyncAction ** result) = 0;
    virtual HRESULT __stdcall abi_ShowAppointmentDetailsAsync(hstring appointmentId, Windows::Foundation::IAsyncAction ** result) = 0;
    virtual HRESULT __stdcall abi_ShowAppointmentDetailsWithDateAsync(hstring appointmentId, Windows::Foundation::DateTime instanceStartDate, Windows::Foundation::IAsyncAction ** result) = 0;
    virtual HRESULT __stdcall abi_ShowEditNewAppointmentAsync(Windows::ApplicationModel::Appointments::IAppointment * appointment, Windows::Foundation::IAsyncOperation<hstring> ** result) = 0;
    virtual HRESULT __stdcall abi_RequestStoreAsync(winrt::Windows::ApplicationModel::Appointments::AppointmentStoreAccessType options, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentStore> ** result) = 0;
    virtual HRESULT __stdcall get_User(Windows::System::IUser ** value) = 0;
};

struct __declspec(uuid("3a30fa01-5c40-499d-b33f-a43050f74fc4")) __declspec(novtable) IAppointmentManagerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_ShowAddAppointmentAsync(Windows::ApplicationModel::Appointments::IAppointment * appointment, Windows::Foundation::Rect selection, Windows::Foundation::IAsyncOperation<hstring> ** operation) = 0;
    virtual HRESULT __stdcall abi_ShowAddAppointmentWithPlacementAsync(Windows::ApplicationModel::Appointments::IAppointment * appointment, Windows::Foundation::Rect selection, winrt::Windows::UI::Popups::Placement preferredPlacement, Windows::Foundation::IAsyncOperation<hstring> ** operation) = 0;
    virtual HRESULT __stdcall abi_ShowReplaceAppointmentAsync(hstring appointmentId, Windows::ApplicationModel::Appointments::IAppointment * appointment, Windows::Foundation::Rect selection, Windows::Foundation::IAsyncOperation<hstring> ** operation) = 0;
    virtual HRESULT __stdcall abi_ShowReplaceAppointmentWithPlacementAsync(hstring appointmentId, Windows::ApplicationModel::Appointments::IAppointment * appointment, Windows::Foundation::Rect selection, winrt::Windows::UI::Popups::Placement preferredPlacement, Windows::Foundation::IAsyncOperation<hstring> ** operation) = 0;
    virtual HRESULT __stdcall abi_ShowReplaceAppointmentWithPlacementAndDateAsync(hstring appointmentId, Windows::ApplicationModel::Appointments::IAppointment * appointment, Windows::Foundation::Rect selection, winrt::Windows::UI::Popups::Placement preferredPlacement, Windows::Foundation::DateTime instanceStartDate, Windows::Foundation::IAsyncOperation<hstring> ** operation) = 0;
    virtual HRESULT __stdcall abi_ShowRemoveAppointmentAsync(hstring appointmentId, Windows::Foundation::Rect selection, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_ShowRemoveAppointmentWithPlacementAsync(hstring appointmentId, Windows::Foundation::Rect selection, winrt::Windows::UI::Popups::Placement preferredPlacement, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_ShowRemoveAppointmentWithPlacementAndDateAsync(hstring appointmentId, Windows::Foundation::Rect selection, winrt::Windows::UI::Popups::Placement preferredPlacement, Windows::Foundation::DateTime instanceStartDate, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_ShowTimeFrameAsync(Windows::Foundation::DateTime timeToShow, Windows::Foundation::TimeSpan duration, Windows::Foundation::IAsyncAction ** asyncAction) = 0;
};

struct __declspec(uuid("0a81f60d-d04f-4034-af72-a36573b45ff0")) __declspec(novtable) IAppointmentManagerStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_ShowAppointmentDetailsAsync(hstring appointmentId, Windows::Foundation::IAsyncAction ** asyncAction) = 0;
    virtual HRESULT __stdcall abi_ShowAppointmentDetailsWithDateAsync(hstring appointmentId, Windows::Foundation::DateTime instanceStartDate, Windows::Foundation::IAsyncAction ** asyncAction) = 0;
    virtual HRESULT __stdcall abi_ShowEditNewAppointmentAsync(Windows::ApplicationModel::Appointments::IAppointment * appointment, Windows::Foundation::IAsyncOperation<hstring> ** operation) = 0;
    virtual HRESULT __stdcall abi_RequestStoreAsync(winrt::Windows::ApplicationModel::Appointments::AppointmentStoreAccessType options, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentStore> ** operation) = 0;
};

struct __declspec(uuid("2f9ae09c-b34c-4dc7-a35d-cafd88ae3ec6")) __declspec(novtable) IAppointmentManagerStatics3 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetForUser(Windows::System::IUser * user, Windows::ApplicationModel::Appointments::IAppointmentManagerForUser ** result) = 0;
};

struct __declspec(uuid("615e2902-9718-467b-83fb-b293a19121de")) __declspec(novtable) IAppointmentParticipant : Windows::IInspectable
{
    virtual HRESULT __stdcall get_DisplayName(hstring * value) = 0;
    virtual HRESULT __stdcall put_DisplayName(hstring value) = 0;
    virtual HRESULT __stdcall get_Address(hstring * value) = 0;
    virtual HRESULT __stdcall put_Address(hstring value) = 0;
};

struct __declspec(uuid("25141fe9-68ae-3aae-855f-bc4441caa234")) __declspec(novtable) IAppointmentPropertiesStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Subject(hstring * value) = 0;
    virtual HRESULT __stdcall get_Location(hstring * value) = 0;
    virtual HRESULT __stdcall get_StartTime(hstring * value) = 0;
    virtual HRESULT __stdcall get_Duration(hstring * value) = 0;
    virtual HRESULT __stdcall get_Reminder(hstring * value) = 0;
    virtual HRESULT __stdcall get_BusyStatus(hstring * value) = 0;
    virtual HRESULT __stdcall get_Sensitivity(hstring * value) = 0;
    virtual HRESULT __stdcall get_OriginalStartTime(hstring * value) = 0;
    virtual HRESULT __stdcall get_IsResponseRequested(hstring * value) = 0;
    virtual HRESULT __stdcall get_AllowNewTimeProposal(hstring * value) = 0;
    virtual HRESULT __stdcall get_AllDay(hstring * value) = 0;
    virtual HRESULT __stdcall get_Details(hstring * value) = 0;
    virtual HRESULT __stdcall get_OnlineMeetingLink(hstring * value) = 0;
    virtual HRESULT __stdcall get_ReplyTime(hstring * value) = 0;
    virtual HRESULT __stdcall get_Organizer(hstring * value) = 0;
    virtual HRESULT __stdcall get_UserResponse(hstring * value) = 0;
    virtual HRESULT __stdcall get_HasInvitees(hstring * value) = 0;
    virtual HRESULT __stdcall get_IsCanceledMeeting(hstring * value) = 0;
    virtual HRESULT __stdcall get_IsOrganizedByUser(hstring * value) = 0;
    virtual HRESULT __stdcall get_Recurrence(hstring * value) = 0;
    virtual HRESULT __stdcall get_Uri(hstring * value) = 0;
    virtual HRESULT __stdcall get_Invitees(hstring * value) = 0;
    virtual HRESULT __stdcall get_DefaultProperties(Windows::Foundation::Collections::IVector<hstring> ** value) = 0;
};

struct __declspec(uuid("dffc434b-b017-45dd-8af5-d163d10801bb")) __declspec(novtable) IAppointmentPropertiesStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ChangeNumber(hstring * value) = 0;
    virtual HRESULT __stdcall get_RemoteChangeNumber(hstring * value) = 0;
    virtual HRESULT __stdcall get_DetailsKind(hstring * value) = 0;
};

struct __declspec(uuid("d87b3e83-15a6-487b-b959-0c361e60e954")) __declspec(novtable) IAppointmentRecurrence : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Unit(winrt::Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit * value) = 0;
    virtual HRESULT __stdcall put_Unit(winrt::Windows::ApplicationModel::Appointments::AppointmentRecurrenceUnit value) = 0;
    virtual HRESULT __stdcall get_Occurrences(Windows::Foundation::IReference<uint32_t> ** value) = 0;
    virtual HRESULT __stdcall put_Occurrences(Windows::Foundation::IReference<uint32_t> * value) = 0;
    virtual HRESULT __stdcall get_Until(Windows::Foundation::IReference<Windows::Foundation::DateTime> ** value) = 0;
    virtual HRESULT __stdcall put_Until(Windows::Foundation::IReference<Windows::Foundation::DateTime> * value) = 0;
    virtual HRESULT __stdcall get_Interval(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_Interval(uint32_t value) = 0;
    virtual HRESULT __stdcall get_DaysOfWeek(winrt::Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek * value) = 0;
    virtual HRESULT __stdcall put_DaysOfWeek(winrt::Windows::ApplicationModel::Appointments::AppointmentDaysOfWeek value) = 0;
    virtual HRESULT __stdcall get_WeekOfMonth(winrt::Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth * value) = 0;
    virtual HRESULT __stdcall put_WeekOfMonth(winrt::Windows::ApplicationModel::Appointments::AppointmentWeekOfMonth value) = 0;
    virtual HRESULT __stdcall get_Month(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_Month(uint32_t value) = 0;
    virtual HRESULT __stdcall get_Day(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_Day(uint32_t value) = 0;
};

struct __declspec(uuid("3df3a2e0-05a7-4f50-9f86-b03f9436254d")) __declspec(novtable) IAppointmentRecurrence2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_RecurrenceType(winrt::Windows::ApplicationModel::Appointments::RecurrenceType * value) = 0;
    virtual HRESULT __stdcall get_TimeZone(hstring * value) = 0;
    virtual HRESULT __stdcall put_TimeZone(hstring value) = 0;
};

struct __declspec(uuid("89ff96d9-da4d-4a17-8dd2-1cebc2b5ff9d")) __declspec(novtable) IAppointmentRecurrence3 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CalendarIdentifier(hstring * value) = 0;
};

struct __declspec(uuid("a461918c-7a47-4d96-96c9-15cd8a05a735")) __declspec(novtable) IAppointmentStore : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ChangeTracker(Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker ** value) = 0;
    virtual HRESULT __stdcall abi_CreateAppointmentCalendarAsync(hstring name, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar> ** operation) = 0;
    virtual HRESULT __stdcall abi_GetAppointmentCalendarAsync(hstring calendarId, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar> ** result) = 0;
    virtual HRESULT __stdcall abi_GetAppointmentAsync(hstring localId, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment> ** result) = 0;
    virtual HRESULT __stdcall abi_GetAppointmentInstanceAsync(hstring localId, Windows::Foundation::DateTime instanceStartTime, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::Appointment> ** result) = 0;
    virtual HRESULT __stdcall abi_FindAppointmentCalendarsAsync(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>> ** result) = 0;
    virtual HRESULT __stdcall abi_FindAppointmentCalendarsAsyncWithOptions(winrt::Windows::ApplicationModel::Appointments::FindAppointmentCalendarsOptions options, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentCalendar>> ** result) = 0;
    virtual HRESULT __stdcall abi_FindAppointmentsAsync(Windows::Foundation::DateTime rangeStart, Windows::Foundation::TimeSpan rangeLength, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> ** result) = 0;
    virtual HRESULT __stdcall abi_FindAppointmentsAsyncWithOptions(Windows::Foundation::DateTime rangeStart, Windows::Foundation::TimeSpan rangeLength, Windows::ApplicationModel::Appointments::IFindAppointmentsOptions * options, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::Appointment>> ** result) = 0;
    virtual HRESULT __stdcall abi_FindConflictAsync(Windows::ApplicationModel::Appointments::IAppointment * appointment, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentConflictResult> ** result) = 0;
    virtual HRESULT __stdcall abi_FindConflictAsyncWithInstanceStart(Windows::ApplicationModel::Appointments::IAppointment * appointment, Windows::Foundation::DateTime instanceStartTime, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentConflictResult> ** result) = 0;
    virtual HRESULT __stdcall abi_MoveAppointmentAsync(Windows::ApplicationModel::Appointments::IAppointment * appointment, Windows::ApplicationModel::Appointments::IAppointmentCalendar * destinationCalendar, Windows::Foundation::IAsyncAction ** asyncAction) = 0;
    virtual HRESULT __stdcall abi_ShowAddAppointmentAsync(Windows::ApplicationModel::Appointments::IAppointment * appointment, Windows::Foundation::Rect selection, Windows::Foundation::IAsyncOperation<hstring> ** operation) = 0;
    virtual HRESULT __stdcall abi_ShowReplaceAppointmentAsync(hstring localId, Windows::ApplicationModel::Appointments::IAppointment * appointment, Windows::Foundation::Rect selection, Windows::Foundation::IAsyncOperation<hstring> ** operation) = 0;
    virtual HRESULT __stdcall abi_ShowReplaceAppointmentWithPlacementAndDateAsync(hstring localId, Windows::ApplicationModel::Appointments::IAppointment * appointment, Windows::Foundation::Rect selection, winrt::Windows::UI::Popups::Placement preferredPlacement, Windows::Foundation::DateTime instanceStartDate, Windows::Foundation::IAsyncOperation<hstring> ** operation) = 0;
    virtual HRESULT __stdcall abi_ShowRemoveAppointmentAsync(hstring localId, Windows::Foundation::Rect selection, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_ShowRemoveAppointmentWithPlacementAndDateAsync(hstring localId, Windows::Foundation::Rect selection, winrt::Windows::UI::Popups::Placement preferredPlacement, Windows::Foundation::DateTime instanceStartDate, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_ShowAppointmentDetailsAsync(hstring localId, Windows::Foundation::IAsyncAction ** asyncAction) = 0;
    virtual HRESULT __stdcall abi_ShowAppointmentDetailsWithDateAsync(hstring localId, Windows::Foundation::DateTime instanceStartDate, Windows::Foundation::IAsyncAction ** asyncAction) = 0;
    virtual HRESULT __stdcall abi_ShowEditNewAppointmentAsync(Windows::ApplicationModel::Appointments::IAppointment * appointment, Windows::Foundation::IAsyncOperation<hstring> ** operation) = 0;
    virtual HRESULT __stdcall abi_FindLocalIdsFromRoamingIdAsync(hstring roamingId, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>> ** operation) = 0;
};

struct __declspec(uuid("25c48c20-1c41-424f-8084-67c1cfe0a854")) __declspec(novtable) IAppointmentStore2 : Windows::IInspectable
{
    virtual HRESULT __stdcall add_StoreChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Appointments::AppointmentStore, Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs> * pHandler, event_token * pToken) = 0;
    virtual HRESULT __stdcall remove_StoreChanged(event_token token) = 0;
    virtual HRESULT __stdcall abi_CreateAppointmentCalendarInAccountAsync(hstring name, hstring userDataAccountId, Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Appointments::AppointmentCalendar> ** operation) = 0;
};

struct __declspec(uuid("a5a6e035-0a33-3654-8463-b543e90c3b79")) __declspec(novtable) IAppointmentStoreChange : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Appointment(Windows::ApplicationModel::Appointments::IAppointment ** value) = 0;
    virtual HRESULT __stdcall get_ChangeType(winrt::Windows::ApplicationModel::Appointments::AppointmentStoreChangeType * value) = 0;
};

struct __declspec(uuid("b37d0dce-5211-4402-a608-a96fe70b8ee2")) __declspec(novtable) IAppointmentStoreChange2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AppointmentCalendar(Windows::ApplicationModel::Appointments::IAppointmentCalendar ** value) = 0;
};

struct __declspec(uuid("8b2409f1-65f3-42a0-961d-4c209bf30370")) __declspec(novtable) IAppointmentStoreChangeReader : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_ReadBatchAsync(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Appointments::AppointmentStoreChange>> ** result) = 0;
    virtual HRESULT __stdcall abi_AcceptChanges() = 0;
    virtual HRESULT __stdcall abi_AcceptChangesThrough(Windows::ApplicationModel::Appointments::IAppointmentStoreChange * lastChangeToAccept) = 0;
};

struct __declspec(uuid("1b25f4b1-8ece-4f17-93c8-e6412458fd5c")) __declspec(novtable) IAppointmentStoreChangeTracker : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetChangeReader(Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader ** value) = 0;
    virtual HRESULT __stdcall abi_Enable() = 0;
    virtual HRESULT __stdcall abi_Reset() = 0;
};

struct __declspec(uuid("4cb82026-fedb-4bc3-9662-95a9befdf4df")) __declspec(novtable) IAppointmentStoreChangedDeferral : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Complete() = 0;
};

struct __declspec(uuid("2285f8b9-0791-417e-bfea-cc6d41636c8c")) __declspec(novtable) IAppointmentStoreChangedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetDeferral(Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral ** result) = 0;
};

struct __declspec(uuid("9b33cb11-c301-421e-afef-047ecfa76adb")) __declspec(novtable) IAppointmentStoreNotificationTriggerDetails : Windows::IInspectable
{
};

struct __declspec(uuid("55f7dc55-9942-3086-82b5-2cb29f64d5f5")) __declspec(novtable) IFindAppointmentsOptions : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CalendarIds(Windows::Foundation::Collections::IVector<hstring> ** value) = 0;
    virtual HRESULT __stdcall get_FetchProperties(Windows::Foundation::Collections::IVector<hstring> ** value) = 0;
    virtual HRESULT __stdcall get_IncludeHidden(bool * value) = 0;
    virtual HRESULT __stdcall put_IncludeHidden(bool value) = 0;
    virtual HRESULT __stdcall get_MaxCount(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_MaxCount(uint32_t value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::ApplicationModel::Appointments::Appointment> { using default_interface = Windows::ApplicationModel::Appointments::IAppointment; };
template <> struct traits<Windows::ApplicationModel::Appointments::AppointmentCalendar> { using default_interface = Windows::ApplicationModel::Appointments::IAppointmentCalendar; };
template <> struct traits<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager> { using default_interface = Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager; };
template <> struct traits<Windows::ApplicationModel::Appointments::AppointmentConflictResult> { using default_interface = Windows::ApplicationModel::Appointments::IAppointmentConflictResult; };
template <> struct traits<Windows::ApplicationModel::Appointments::AppointmentException> { using default_interface = Windows::ApplicationModel::Appointments::IAppointmentException; };
template <> struct traits<Windows::ApplicationModel::Appointments::AppointmentInvitee> { using default_interface = Windows::ApplicationModel::Appointments::IAppointmentInvitee; };
template <> struct traits<Windows::ApplicationModel::Appointments::AppointmentManagerForUser> { using default_interface = Windows::ApplicationModel::Appointments::IAppointmentManagerForUser; };
template <> struct traits<Windows::ApplicationModel::Appointments::AppointmentOrganizer> { using default_interface = Windows::ApplicationModel::Appointments::IAppointmentParticipant; };
template <> struct traits<Windows::ApplicationModel::Appointments::AppointmentRecurrence> { using default_interface = Windows::ApplicationModel::Appointments::IAppointmentRecurrence; };
template <> struct traits<Windows::ApplicationModel::Appointments::AppointmentStore> { using default_interface = Windows::ApplicationModel::Appointments::IAppointmentStore; };
template <> struct traits<Windows::ApplicationModel::Appointments::AppointmentStoreChange> { using default_interface = Windows::ApplicationModel::Appointments::IAppointmentStoreChange; };
template <> struct traits<Windows::ApplicationModel::Appointments::AppointmentStoreChangeReader> { using default_interface = Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader; };
template <> struct traits<Windows::ApplicationModel::Appointments::AppointmentStoreChangeTracker> { using default_interface = Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker; };
template <> struct traits<Windows::ApplicationModel::Appointments::AppointmentStoreChangedDeferral> { using default_interface = Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral; };
template <> struct traits<Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs> { using default_interface = Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs; };
template <> struct traits<Windows::ApplicationModel::Appointments::AppointmentStoreNotificationTriggerDetails> { using default_interface = Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails; };
template <> struct traits<Windows::ApplicationModel::Appointments::FindAppointmentsOptions> { using default_interface = Windows::ApplicationModel::Appointments::IFindAppointmentsOptions; };

}

namespace Windows::ApplicationModel::Appointments {

template <typename T> struct impl_IAppointment;
template <typename T> struct impl_IAppointment2;
template <typename T> struct impl_IAppointment3;
template <typename T> struct impl_IAppointmentCalendar;
template <typename T> struct impl_IAppointmentCalendar2;
template <typename T> struct impl_IAppointmentCalendar3;
template <typename T> struct impl_IAppointmentCalendarSyncManager;
template <typename T> struct impl_IAppointmentCalendarSyncManager2;
template <typename T> struct impl_IAppointmentConflictResult;
template <typename T> struct impl_IAppointmentException;
template <typename T> struct impl_IAppointmentInvitee;
template <typename T> struct impl_IAppointmentManagerForUser;
template <typename T> struct impl_IAppointmentManagerStatics;
template <typename T> struct impl_IAppointmentManagerStatics2;
template <typename T> struct impl_IAppointmentManagerStatics3;
template <typename T> struct impl_IAppointmentParticipant;
template <typename T> struct impl_IAppointmentPropertiesStatics;
template <typename T> struct impl_IAppointmentPropertiesStatics2;
template <typename T> struct impl_IAppointmentRecurrence;
template <typename T> struct impl_IAppointmentRecurrence2;
template <typename T> struct impl_IAppointmentRecurrence3;
template <typename T> struct impl_IAppointmentStore;
template <typename T> struct impl_IAppointmentStore2;
template <typename T> struct impl_IAppointmentStoreChange;
template <typename T> struct impl_IAppointmentStoreChange2;
template <typename T> struct impl_IAppointmentStoreChangeReader;
template <typename T> struct impl_IAppointmentStoreChangeTracker;
template <typename T> struct impl_IAppointmentStoreChangedDeferral;
template <typename T> struct impl_IAppointmentStoreChangedEventArgs;
template <typename T> struct impl_IAppointmentStoreNotificationTriggerDetails;
template <typename T> struct impl_IFindAppointmentsOptions;

}

namespace impl {

template <> struct traits<Windows::ApplicationModel::Appointments::IAppointment>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::IAppointment;
    template <typename D> using consume = Windows::ApplicationModel::Appointments::impl_IAppointment<D>;
};

template <> struct traits<Windows::ApplicationModel::Appointments::IAppointment2>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::IAppointment2;
    template <typename D> using consume = Windows::ApplicationModel::Appointments::impl_IAppointment2<D>;
};

template <> struct traits<Windows::ApplicationModel::Appointments::IAppointment3>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::IAppointment3;
    template <typename D> using consume = Windows::ApplicationModel::Appointments::impl_IAppointment3<D>;
};

template <> struct traits<Windows::ApplicationModel::Appointments::IAppointmentCalendar>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendar;
    template <typename D> using consume = Windows::ApplicationModel::Appointments::impl_IAppointmentCalendar<D>;
};

template <> struct traits<Windows::ApplicationModel::Appointments::IAppointmentCalendar2>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendar2;
    template <typename D> using consume = Windows::ApplicationModel::Appointments::impl_IAppointmentCalendar2<D>;
};

template <> struct traits<Windows::ApplicationModel::Appointments::IAppointmentCalendar3>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendar3;
    template <typename D> using consume = Windows::ApplicationModel::Appointments::impl_IAppointmentCalendar3<D>;
};

template <> struct traits<Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager;
    template <typename D> using consume = Windows::ApplicationModel::Appointments::impl_IAppointmentCalendarSyncManager<D>;
};

template <> struct traits<Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::IAppointmentCalendarSyncManager2;
    template <typename D> using consume = Windows::ApplicationModel::Appointments::impl_IAppointmentCalendarSyncManager2<D>;
};

template <> struct traits<Windows::ApplicationModel::Appointments::IAppointmentConflictResult>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::IAppointmentConflictResult;
    template <typename D> using consume = Windows::ApplicationModel::Appointments::impl_IAppointmentConflictResult<D>;
};

template <> struct traits<Windows::ApplicationModel::Appointments::IAppointmentException>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::IAppointmentException;
    template <typename D> using consume = Windows::ApplicationModel::Appointments::impl_IAppointmentException<D>;
};

template <> struct traits<Windows::ApplicationModel::Appointments::IAppointmentInvitee>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::IAppointmentInvitee;
    template <typename D> using consume = Windows::ApplicationModel::Appointments::impl_IAppointmentInvitee<D>;
};

template <> struct traits<Windows::ApplicationModel::Appointments::IAppointmentManagerForUser>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::IAppointmentManagerForUser;
    template <typename D> using consume = Windows::ApplicationModel::Appointments::impl_IAppointmentManagerForUser<D>;
};

template <> struct traits<Windows::ApplicationModel::Appointments::IAppointmentManagerStatics>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::IAppointmentManagerStatics;
    template <typename D> using consume = Windows::ApplicationModel::Appointments::impl_IAppointmentManagerStatics<D>;
};

template <> struct traits<Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::IAppointmentManagerStatics2;
    template <typename D> using consume = Windows::ApplicationModel::Appointments::impl_IAppointmentManagerStatics2<D>;
};

template <> struct traits<Windows::ApplicationModel::Appointments::IAppointmentManagerStatics3>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::IAppointmentManagerStatics3;
    template <typename D> using consume = Windows::ApplicationModel::Appointments::impl_IAppointmentManagerStatics3<D>;
};

template <> struct traits<Windows::ApplicationModel::Appointments::IAppointmentParticipant>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::IAppointmentParticipant;
    template <typename D> using consume = Windows::ApplicationModel::Appointments::impl_IAppointmentParticipant<D>;
};

template <> struct traits<Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics;
    template <typename D> using consume = Windows::ApplicationModel::Appointments::impl_IAppointmentPropertiesStatics<D>;
};

template <> struct traits<Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::IAppointmentPropertiesStatics2;
    template <typename D> using consume = Windows::ApplicationModel::Appointments::impl_IAppointmentPropertiesStatics2<D>;
};

template <> struct traits<Windows::ApplicationModel::Appointments::IAppointmentRecurrence>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::IAppointmentRecurrence;
    template <typename D> using consume = Windows::ApplicationModel::Appointments::impl_IAppointmentRecurrence<D>;
};

template <> struct traits<Windows::ApplicationModel::Appointments::IAppointmentRecurrence2>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::IAppointmentRecurrence2;
    template <typename D> using consume = Windows::ApplicationModel::Appointments::impl_IAppointmentRecurrence2<D>;
};

template <> struct traits<Windows::ApplicationModel::Appointments::IAppointmentRecurrence3>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::IAppointmentRecurrence3;
    template <typename D> using consume = Windows::ApplicationModel::Appointments::impl_IAppointmentRecurrence3<D>;
};

template <> struct traits<Windows::ApplicationModel::Appointments::IAppointmentStore>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::IAppointmentStore;
    template <typename D> using consume = Windows::ApplicationModel::Appointments::impl_IAppointmentStore<D>;
};

template <> struct traits<Windows::ApplicationModel::Appointments::IAppointmentStore2>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::IAppointmentStore2;
    template <typename D> using consume = Windows::ApplicationModel::Appointments::impl_IAppointmentStore2<D>;
};

template <> struct traits<Windows::ApplicationModel::Appointments::IAppointmentStoreChange>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChange;
    template <typename D> using consume = Windows::ApplicationModel::Appointments::impl_IAppointmentStoreChange<D>;
};

template <> struct traits<Windows::ApplicationModel::Appointments::IAppointmentStoreChange2>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChange2;
    template <typename D> using consume = Windows::ApplicationModel::Appointments::impl_IAppointmentStoreChange2<D>;
};

template <> struct traits<Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeReader;
    template <typename D> using consume = Windows::ApplicationModel::Appointments::impl_IAppointmentStoreChangeReader<D>;
};

template <> struct traits<Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChangeTracker;
    template <typename D> using consume = Windows::ApplicationModel::Appointments::impl_IAppointmentStoreChangeTracker<D>;
};

template <> struct traits<Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChangedDeferral;
    template <typename D> using consume = Windows::ApplicationModel::Appointments::impl_IAppointmentStoreChangedDeferral<D>;
};

template <> struct traits<Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreChangedEventArgs;
    template <typename D> using consume = Windows::ApplicationModel::Appointments::impl_IAppointmentStoreChangedEventArgs<D>;
};

template <> struct traits<Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::IAppointmentStoreNotificationTriggerDetails;
    template <typename D> using consume = Windows::ApplicationModel::Appointments::impl_IAppointmentStoreNotificationTriggerDetails<D>;
};

template <> struct traits<Windows::ApplicationModel::Appointments::IFindAppointmentsOptions>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::IFindAppointmentsOptions;
    template <typename D> using consume = Windows::ApplicationModel::Appointments::impl_IFindAppointmentsOptions<D>;
};

template <> struct traits<Windows::ApplicationModel::Appointments::Appointment>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::Appointment;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Appointments.Appointment"; }
};

template <> struct traits<Windows::ApplicationModel::Appointments::AppointmentCalendar>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::AppointmentCalendar;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Appointments.AppointmentCalendar"; }
};

template <> struct traits<Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::AppointmentCalendarSyncManager;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Appointments.AppointmentCalendarSyncManager"; }
};

template <> struct traits<Windows::ApplicationModel::Appointments::AppointmentConflictResult>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::AppointmentConflictResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Appointments.AppointmentConflictResult"; }
};

template <> struct traits<Windows::ApplicationModel::Appointments::AppointmentException>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::AppointmentException;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Appointments.AppointmentException"; }
};

template <> struct traits<Windows::ApplicationModel::Appointments::AppointmentInvitee>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::AppointmentInvitee;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Appointments.AppointmentInvitee"; }
};

template <> struct traits<Windows::ApplicationModel::Appointments::AppointmentManager>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Appointments.AppointmentManager"; }
};

template <> struct traits<Windows::ApplicationModel::Appointments::AppointmentManagerForUser>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::AppointmentManagerForUser;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Appointments.AppointmentManagerForUser"; }
};

template <> struct traits<Windows::ApplicationModel::Appointments::AppointmentOrganizer>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::AppointmentOrganizer;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Appointments.AppointmentOrganizer"; }
};

template <> struct traits<Windows::ApplicationModel::Appointments::AppointmentProperties>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Appointments.AppointmentProperties"; }
};

template <> struct traits<Windows::ApplicationModel::Appointments::AppointmentRecurrence>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::AppointmentRecurrence;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Appointments.AppointmentRecurrence"; }
};

template <> struct traits<Windows::ApplicationModel::Appointments::AppointmentStore>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::AppointmentStore;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Appointments.AppointmentStore"; }
};

template <> struct traits<Windows::ApplicationModel::Appointments::AppointmentStoreChange>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::AppointmentStoreChange;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Appointments.AppointmentStoreChange"; }
};

template <> struct traits<Windows::ApplicationModel::Appointments::AppointmentStoreChangeReader>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::AppointmentStoreChangeReader;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Appointments.AppointmentStoreChangeReader"; }
};

template <> struct traits<Windows::ApplicationModel::Appointments::AppointmentStoreChangeTracker>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::AppointmentStoreChangeTracker;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Appointments.AppointmentStoreChangeTracker"; }
};

template <> struct traits<Windows::ApplicationModel::Appointments::AppointmentStoreChangedDeferral>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::AppointmentStoreChangedDeferral;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Appointments.AppointmentStoreChangedDeferral"; }
};

template <> struct traits<Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::AppointmentStoreChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Appointments.AppointmentStoreChangedEventArgs"; }
};

template <> struct traits<Windows::ApplicationModel::Appointments::AppointmentStoreNotificationTriggerDetails>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::AppointmentStoreNotificationTriggerDetails;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Appointments.AppointmentStoreNotificationTriggerDetails"; }
};

template <> struct traits<Windows::ApplicationModel::Appointments::FindAppointmentsOptions>
{
    using abi = ABI::Windows::ApplicationModel::Appointments::FindAppointmentsOptions;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Appointments.FindAppointmentsOptions"; }
};

}

}
