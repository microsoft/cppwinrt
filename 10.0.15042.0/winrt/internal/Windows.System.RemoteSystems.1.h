// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.System.RemoteSystems.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Networking.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Networking.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::System::RemoteSystems {

struct __declspec(uuid("8108e380-7f8a-44e4-92cd-03b6469b94a3")) __declspec(novtable) IKnownRemoteSystemCapabilitiesStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_AppService(hstring * value) = 0;
    virtual HRESULT __stdcall get_LaunchUri(hstring * value) = 0;
    virtual HRESULT __stdcall get_RemoteSession(hstring * value) = 0;
    virtual HRESULT __stdcall get_SpatialEntity(hstring * value) = 0;
};

struct __declspec(uuid("ed5838cd-1e10-4a8c-b4a6-4e5fd6f97721")) __declspec(novtable) IRemoteSystem : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_DisplayName(hstring * value) = 0;
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
    virtual HRESULT __stdcall get_Kind(hstring * value) = 0;
    virtual HRESULT __stdcall get_Status(winrt::Windows::System::RemoteSystems::RemoteSystemStatus * value) = 0;
    virtual HRESULT __stdcall get_IsAvailableByProximity(bool * value) = 0;
};

struct __declspec(uuid("09dfe4ec-fb8b-4a08-a758-6876435d769e")) __declspec(novtable) IRemoteSystem2 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_IsAvailableBySpatialProximity(bool * value) = 0;
    virtual HRESULT __stdcall abi_GetCapabilitySupportedAsync(hstring capabilityName, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
};

struct __declspec(uuid("8f39560f-e534-4697-8836-7abea151516e")) __declspec(novtable) IRemoteSystemAddedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_RemoteSystem(Windows::System::RemoteSystems::IRemoteSystem ** value) = 0;
};

struct __declspec(uuid("6b0dde8e-04d0-40f4-a27f-c2acbbd6b734")) __declspec(novtable) IRemoteSystemAuthorizationKindFilter : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_RemoteSystemAuthorizationKind(winrt::Windows::System::RemoteSystems::RemoteSystemAuthorizationKind * value) = 0;
};

struct __declspec(uuid("ad65df4d-b66a-45a4-8177-8caed75d9e5a")) __declspec(novtable) IRemoteSystemAuthorizationKindFilterFactory : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_Create(winrt::Windows::System::RemoteSystems::RemoteSystemAuthorizationKind remoteSystemAuthorizationKind, Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilter ** result) = 0;
};

struct __declspec(uuid("84ed4104-8d5e-4d72-8238-7621576c7a67")) __declspec(novtable) IRemoteSystemConnectionRequest : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_RemoteSystem(Windows::System::RemoteSystems::IRemoteSystem ** value) = 0;
};

struct __declspec(uuid("aa0a0a20-baeb-4575-b530-810bb9786334")) __declspec(novtable) IRemoteSystemConnectionRequestFactory : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_Create(Windows::System::RemoteSystems::IRemoteSystem * remoteSystem, Windows::System::RemoteSystems::IRemoteSystemConnectionRequest ** result) = 0;
};

struct __declspec(uuid("42d9041f-ee5a-43da-ac6a-6fee25460741")) __declspec(novtable) IRemoteSystemDiscoveryTypeFilter : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_RemoteSystemDiscoveryType(winrt::Windows::System::RemoteSystems::RemoteSystemDiscoveryType * value) = 0;
};

struct __declspec(uuid("9f9eb993-c260-4161-92f2-9c021f23fe5d")) __declspec(novtable) IRemoteSystemDiscoveryTypeFilterFactory : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_Create(winrt::Windows::System::RemoteSystems::RemoteSystemDiscoveryType discoveryType, Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilter ** result) = 0;
};

struct __declspec(uuid("4a3ba9e4-99eb-45eb-ba16-0367728ff374")) __declspec(novtable) IRemoteSystemFilter : Windows::Foundation::IInspectable
{
};

struct __declspec(uuid("38e1c9ec-22c3-4ef6-901a-bbb1c7aad4ed")) __declspec(novtable) IRemoteSystemKindFilter : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_RemoteSystemKinds(Windows::Foundation::Collections::IVectorView<hstring> ** value) = 0;
};

struct __declspec(uuid("a1fb18ee-99ea-40bc-9a39-c670aa804a28")) __declspec(novtable) IRemoteSystemKindFilterFactory : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_Create(Windows::Foundation::Collections::IIterable<hstring> * remoteSystemKinds, Windows::System::RemoteSystems::IRemoteSystemKindFilter ** result) = 0;
};

struct __declspec(uuid("f6317633-ab14-41d0-9553-796aadb882db")) __declspec(novtable) IRemoteSystemKindStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Phone(hstring * value) = 0;
    virtual HRESULT __stdcall get_Hub(hstring * value) = 0;
    virtual HRESULT __stdcall get_Holographic(hstring * value) = 0;
    virtual HRESULT __stdcall get_Desktop(hstring * value) = 0;
    virtual HRESULT __stdcall get_Xbox(hstring * value) = 0;
};

struct __declspec(uuid("8b3d16bb-7306-49ea-b7df-67d5714cb013")) __declspec(novtable) IRemoteSystemRemovedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_RemoteSystemId(hstring * value) = 0;
};

struct __declspec(uuid("69476a01-9ada-490f-9549-d31cb14c9e95")) __declspec(novtable) IRemoteSystemSession : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Id(hstring * value) = 0;
    virtual HRESULT __stdcall get_DisplayName(hstring * value) = 0;
    virtual HRESULT __stdcall get_ControllerDisplayName(hstring * value) = 0;
    virtual HRESULT __stdcall add_Disconnected(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSession, Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Disconnected(event_token token) = 0;
    virtual HRESULT __stdcall abi_CreateParticipantWatcher(Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher ** result) = 0;
    virtual HRESULT __stdcall abi_SendInvitationAsync(Windows::System::RemoteSystems::IRemoteSystem * invitee, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
};

struct __declspec(uuid("d585d754-bc97-4c39-99b4-beca76e04c3f")) __declspec(novtable) IRemoteSystemSessionAddedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_SessionInfo(Windows::System::RemoteSystems::IRemoteSystemSessionInfo ** value) = 0;
};

struct __declspec(uuid("e48b2dd2-6820-4867-b425-d89c0a3ef7ba")) __declspec(novtable) IRemoteSystemSessionController : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall add_JoinRequested(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionController, Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_JoinRequested(event_token token) = 0;
    virtual HRESULT __stdcall abi_RemoveParticipantAsync(Windows::System::RemoteSystems::IRemoteSystemSessionParticipant * pParticipant, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_CreateSessionAsync(Windows::Foundation::IAsyncOperation<Windows::System::RemoteSystems::RemoteSystemSessionCreationResult> ** operation) = 0;
};

struct __declspec(uuid("bfcc2f6b-ac3d-4199-82cd-6670a773ef2e")) __declspec(novtable) IRemoteSystemSessionControllerFactory : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_CreateController(hstring displayName, Windows::System::RemoteSystems::IRemoteSystemSessionController ** result) = 0;
    virtual HRESULT __stdcall abi_CreateControllerWithSessionOptions(hstring displayName, Windows::System::RemoteSystems::IRemoteSystemSessionOptions * options, Windows::System::RemoteSystems::IRemoteSystemSessionController ** result) = 0;
};

struct __declspec(uuid("a79812c2-37de-448c-8b83-a30aa3c4ead6")) __declspec(novtable) IRemoteSystemSessionCreationResult : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::System::RemoteSystems::RemoteSystemSessionCreationStatus * value) = 0;
    virtual HRESULT __stdcall get_Session(Windows::System::RemoteSystems::IRemoteSystemSession ** value) = 0;
};

struct __declspec(uuid("de0bc69b-77c5-461c-8209-7c6c5d3111ab")) __declspec(novtable) IRemoteSystemSessionDisconnectedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Reason(winrt::Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedReason * value) = 0;
};

struct __declspec(uuid("ff4df648-8b0a-4e9a-9905-69e4b841c588")) __declspec(novtable) IRemoteSystemSessionInfo : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_DisplayName(hstring * value) = 0;
    virtual HRESULT __stdcall get_ControllerDisplayName(hstring * value) = 0;
    virtual HRESULT __stdcall abi_JoinAsync(Windows::Foundation::IAsyncOperation<Windows::System::RemoteSystems::RemoteSystemSessionJoinResult> ** operation) = 0;
};

struct __declspec(uuid("3e32cc91-51d7-4766-a121-25516c3b8294")) __declspec(novtable) IRemoteSystemSessionInvitation : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Sender(Windows::System::RemoteSystems::IRemoteSystem ** value) = 0;
    virtual HRESULT __stdcall get_SessionInfo(Windows::System::RemoteSystems::IRemoteSystemSessionInfo ** value) = 0;
};

struct __declspec(uuid("08f4003f-bc71-49e1-874a-31ddff9a27b9")) __declspec(novtable) IRemoteSystemSessionInvitationListener : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall add_InvitationReceived(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener, Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_InvitationReceived(event_token token) = 0;
};

struct __declspec(uuid("5e964a2d-a10d-4edb-8dea-54d20ac19543")) __declspec(novtable) IRemoteSystemSessionInvitationReceivedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Invitation(Windows::System::RemoteSystems::IRemoteSystemSessionInvitation ** value) = 0;
};

struct __declspec(uuid("20600068-7994-4331-86d1-d89d882585ee")) __declspec(novtable) IRemoteSystemSessionJoinRequest : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Participant(Windows::System::RemoteSystems::IRemoteSystemSessionParticipant ** value) = 0;
    virtual HRESULT __stdcall abi_Accept() = 0;
};

struct __declspec(uuid("dbca4fc3-82b9-4816-9c24-e40e61774bd8")) __declspec(novtable) IRemoteSystemSessionJoinRequestedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_JoinRequest(Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequest ** value) = 0;
    virtual HRESULT __stdcall abi_GetDeferral(Windows::Foundation::IDeferral ** value) = 0;
};

struct __declspec(uuid("ce7b1f04-a03e-41a4-900b-1e79328c1267")) __declspec(novtable) IRemoteSystemSessionJoinResult : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::System::RemoteSystems::RemoteSystemSessionJoinStatus * value) = 0;
    virtual HRESULT __stdcall get_Session(Windows::System::RemoteSystems::IRemoteSystemSession ** value) = 0;
};

struct __declspec(uuid("9524d12a-73d9-4c10-b751-c26784437127")) __declspec(novtable) IRemoteSystemSessionMessageChannel : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Session(Windows::System::RemoteSystems::IRemoteSystemSession ** value) = 0;
    virtual HRESULT __stdcall abi_BroadcastValueSetAsync(Windows::Foundation::Collections::IPropertySet * messageData, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_SendValueSetAsync(Windows::Foundation::Collections::IPropertySet * messageData, Windows::System::RemoteSystems::IRemoteSystemSessionParticipant * participant, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall abi_SendValueSetToParticipantsAsync(Windows::Foundation::Collections::IPropertySet * messageData, Windows::Foundation::Collections::IIterable<Windows::System::RemoteSystems::RemoteSystemSessionParticipant> * participants, Windows::Foundation::IAsyncOperation<bool> ** operation) = 0;
    virtual HRESULT __stdcall add_ValueSetReceived(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel, Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_ValueSetReceived(event_token token) = 0;
};

struct __declspec(uuid("295e1c4a-bd16-4298-b7ce-415482b0e11d")) __declspec(novtable) IRemoteSystemSessionMessageChannelFactory : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_Create(Windows::System::RemoteSystems::IRemoteSystemSession * session, hstring channelName, Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel ** result) = 0;
    virtual HRESULT __stdcall abi_CreateWithReliability(Windows::System::RemoteSystems::IRemoteSystemSession * session, hstring channelName, winrt::Windows::System::RemoteSystems::RemoteSystemSessionMessageChannelReliability reliability, Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel ** result) = 0;
};

struct __declspec(uuid("740ed755-8418-4f01-9353-e21c9ecc6cfc")) __declspec(novtable) IRemoteSystemSessionOptions : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_IsInviteOnly(bool * value) = 0;
    virtual HRESULT __stdcall put_IsInviteOnly(bool value) = 0;
};

struct __declspec(uuid("7e90058c-acf9-4729-8a17-44e7baed5dcc")) __declspec(novtable) IRemoteSystemSessionParticipant : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_RemoteSystem(Windows::System::RemoteSystems::IRemoteSystem ** value) = 0;
    virtual HRESULT __stdcall abi_GetHostNames(Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> ** result) = 0;
};

struct __declspec(uuid("d35a57d8-c9a1-4bb7-b6b0-79bb91adf93d")) __declspec(novtable) IRemoteSystemSessionParticipantAddedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Participant(Windows::System::RemoteSystems::IRemoteSystemSessionParticipant ** value) = 0;
};

struct __declspec(uuid("866ef088-de68-4abf-88a1-f90d16274192")) __declspec(novtable) IRemoteSystemSessionParticipantRemovedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Participant(Windows::System::RemoteSystems::IRemoteSystemSessionParticipant ** value) = 0;
};

struct __declspec(uuid("dcdd02cc-aa87-4d79-b6cc-4459b3e92075")) __declspec(novtable) IRemoteSystemSessionParticipantWatcher : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_Start() = 0;
    virtual HRESULT __stdcall abi_Stop() = 0;
    virtual HRESULT __stdcall get_Status(winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcherStatus * value) = 0;
    virtual HRESULT __stdcall add_Added(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Added(event_token token) = 0;
    virtual HRESULT __stdcall add_Removed(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Removed(event_token token) = 0;
    virtual HRESULT __stdcall add_EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::Foundation::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_EnumerationCompleted(event_token token) = 0;
};

struct __declspec(uuid("af82914e-39a1-4dea-9d63-43798d5bbbd0")) __declspec(novtable) IRemoteSystemSessionRemovedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_SessionInfo(Windows::System::RemoteSystems::IRemoteSystemSessionInfo ** value) = 0;
};

struct __declspec(uuid("8524899f-fd20-44e3-9565-e75a3b14c66e")) __declspec(novtable) IRemoteSystemSessionStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_CreateWatcher(Windows::System::RemoteSystems::IRemoteSystemSessionWatcher ** result) = 0;
};

struct __declspec(uuid("16875069-231e-4c91-8ec8-b3a39d9e55a3")) __declspec(novtable) IRemoteSystemSessionUpdatedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_SessionInfo(Windows::System::RemoteSystems::IRemoteSystemSessionInfo ** value) = 0;
};

struct __declspec(uuid("06f31785-2da5-4e58-a78f-9e8d0784ee25")) __declspec(novtable) IRemoteSystemSessionValueSetReceivedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_Sender(Windows::System::RemoteSystems::IRemoteSystemSessionParticipant ** value) = 0;
    virtual HRESULT __stdcall get_Message(Windows::Foundation::Collections::IPropertySet ** value) = 0;
};

struct __declspec(uuid("8003e340-0c41-4a62-b6d7-bdbe2b19be2d")) __declspec(novtable) IRemoteSystemSessionWatcher : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_Start() = 0;
    virtual HRESULT __stdcall abi_Stop() = 0;
    virtual HRESULT __stdcall get_Status(winrt::Windows::System::RemoteSystems::RemoteSystemSessionWatcherStatus * value) = 0;
    virtual HRESULT __stdcall add_Added(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Added(event_token token) = 0;
    virtual HRESULT __stdcall add_Updated(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Updated(event_token token) = 0;
    virtual HRESULT __stdcall add_Removed(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Removed(event_token token) = 0;
};

struct __declspec(uuid("a485b392-ff2b-4b47-be62-743f2f140f30")) __declspec(novtable) IRemoteSystemStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_FindByHostNameAsync(Windows::Networking::IHostName * hostName, Windows::Foundation::IAsyncOperation<Windows::System::RemoteSystems::RemoteSystem> ** operation) = 0;
    virtual HRESULT __stdcall abi_CreateWatcher(Windows::System::RemoteSystems::IRemoteSystemWatcher ** result) = 0;
    virtual HRESULT __stdcall abi_CreateWatcherWithFilters(Windows::Foundation::Collections::IIterable<Windows::System::RemoteSystems::IRemoteSystemFilter> * filters, Windows::System::RemoteSystems::IRemoteSystemWatcher ** result) = 0;
    virtual HRESULT __stdcall abi_RequestAccessAsync(Windows::Foundation::IAsyncOperation<winrt::Windows::System::RemoteSystems::RemoteSystemAccessStatus> ** operation) = 0;
};

struct __declspec(uuid("0c98edca-6f99-4c52-a272-ea4f36471744")) __declspec(novtable) IRemoteSystemStatics2 : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_IsAuthorizationKindEnabled(winrt::Windows::System::RemoteSystems::RemoteSystemAuthorizationKind kind, bool * value) = 0;
};

struct __declspec(uuid("0c39514e-cbb6-4777-8534-2e0c521affa2")) __declspec(novtable) IRemoteSystemStatusTypeFilter : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_RemoteSystemStatusType(winrt::Windows::System::RemoteSystems::RemoteSystemStatusType * value) = 0;
};

struct __declspec(uuid("33cf78fa-d724-4125-ac7a-8d281e44c949")) __declspec(novtable) IRemoteSystemStatusTypeFilterFactory : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_Create(winrt::Windows::System::RemoteSystems::RemoteSystemStatusType remoteSystemStatusType, Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilter ** result) = 0;
};

struct __declspec(uuid("7502ff0e-dbcb-4155-b4ca-b30a04f27627")) __declspec(novtable) IRemoteSystemUpdatedEventArgs : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_RemoteSystem(Windows::System::RemoteSystems::IRemoteSystem ** value) = 0;
};

struct __declspec(uuid("5d600c7e-2c07-48c5-889c-455d2b099771")) __declspec(novtable) IRemoteSystemWatcher : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_Start() = 0;
    virtual HRESULT __stdcall abi_Stop() = 0;
    virtual HRESULT __stdcall add_RemoteSystemAdded(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemAddedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_RemoteSystemAdded(event_token token) = 0;
    virtual HRESULT __stdcall add_RemoteSystemUpdated(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_RemoteSystemUpdated(event_token token) = 0;
    virtual HRESULT __stdcall add_RemoteSystemRemoved(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_RemoteSystemRemoved(event_token token) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::System::RemoteSystems::RemoteSystem> { using default_interface = Windows::System::RemoteSystems::IRemoteSystem; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemAddedEventArgs> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemAddedEventArgs; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemAuthorizationKindFilter> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilter; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemConnectionRequest> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemConnectionRequest; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemDiscoveryTypeFilter> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilter; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemKindFilter> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemKindFilter; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemRemovedEventArgs; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSession> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemSession; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemSessionAddedEventArgs; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionController> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemSessionController; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionCreationResult> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemSessionCreationResult; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemSessionDisconnectedEventArgs; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionInfo> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemSessionInfo; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionInvitation> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemSessionInvitation; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemSessionInvitationReceivedEventArgs; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionJoinRequest> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequest; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequestedEventArgs; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionJoinResult> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemSessionJoinResult; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionOptions> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemSessionOptions; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionParticipant> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemSessionParticipant; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemSessionParticipantAddedEventArgs; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemSessionParticipantRemovedEventArgs; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemSessionRemovedEventArgs; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemSessionUpdatedEventArgs; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemSessionValueSetReceivedEventArgs; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionWatcher> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemSessionWatcher; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemStatusTypeFilter> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilter; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemUpdatedEventArgs; };
template <> struct traits<Windows::System::RemoteSystems::RemoteSystemWatcher> { using default_interface = Windows::System::RemoteSystems::IRemoteSystemWatcher; };

}

namespace Windows::System::RemoteSystems {

template <typename D>
struct WINRT_EBO impl_IKnownRemoteSystemCapabilitiesStatics
{
    hstring AppService() const;
    hstring LaunchUri() const;
    hstring RemoteSession() const;
    hstring SpatialEntity() const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystem
{
    hstring DisplayName() const;
    hstring Id() const;
    hstring Kind() const;
    Windows::System::RemoteSystems::RemoteSystemStatus Status() const;
    bool IsAvailableByProximity() const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystem2
{
    bool IsAvailableBySpatialProximity() const;
    Windows::Foundation::IAsyncOperation<bool> GetCapabilitySupportedAsync(hstring_view capabilityName) const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemAddedEventArgs
{
    Windows::System::RemoteSystems::RemoteSystem RemoteSystem() const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemAuthorizationKindFilter
{
    Windows::System::RemoteSystems::RemoteSystemAuthorizationKind RemoteSystemAuthorizationKind() const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemAuthorizationKindFilterFactory
{
    Windows::System::RemoteSystems::RemoteSystemAuthorizationKindFilter Create(Windows::System::RemoteSystems::RemoteSystemAuthorizationKind remoteSystemAuthorizationKind) const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemConnectionRequest
{
    Windows::System::RemoteSystems::RemoteSystem RemoteSystem() const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemConnectionRequestFactory
{
    Windows::System::RemoteSystems::RemoteSystemConnectionRequest Create(const Windows::System::RemoteSystems::RemoteSystem & remoteSystem) const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemDiscoveryTypeFilter
{
    Windows::System::RemoteSystems::RemoteSystemDiscoveryType RemoteSystemDiscoveryType() const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemDiscoveryTypeFilterFactory
{
    Windows::System::RemoteSystems::RemoteSystemDiscoveryTypeFilter Create(Windows::System::RemoteSystems::RemoteSystemDiscoveryType discoveryType) const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemFilter
{
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemKindFilter
{
    Windows::Foundation::Collections::IVectorView<hstring> RemoteSystemKinds() const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemKindFilterFactory
{
    Windows::System::RemoteSystems::RemoteSystemKindFilter Create(iterable<hstring> remoteSystemKinds) const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemKindStatics
{
    hstring Phone() const;
    hstring Hub() const;
    hstring Holographic() const;
    hstring Desktop() const;
    hstring Xbox() const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemRemovedEventArgs
{
    hstring RemoteSystemId() const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemSession
{
    hstring Id() const;
    hstring DisplayName() const;
    hstring ControllerDisplayName() const;
    event_token Disconnected(const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSession, Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs> & handler) const;
    using Disconnected_revoker = event_revoker<IRemoteSystemSession>;
    Disconnected_revoker Disconnected(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSession, Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs> & handler) const;
    void Disconnected(event_token token) const;
    Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher CreateParticipantWatcher() const;
    Windows::Foundation::IAsyncOperation<bool> SendInvitationAsync(const Windows::System::RemoteSystems::RemoteSystem & invitee) const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemSessionAddedEventArgs
{
    Windows::System::RemoteSystems::RemoteSystemSessionInfo SessionInfo() const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemSessionController
{
    event_token JoinRequested(const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionController, Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs> & handler) const;
    using JoinRequested_revoker = event_revoker<IRemoteSystemSessionController>;
    JoinRequested_revoker JoinRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionController, Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs> & handler) const;
    void JoinRequested(event_token token) const;
    Windows::Foundation::IAsyncOperation<bool> RemoveParticipantAsync(const Windows::System::RemoteSystems::RemoteSystemSessionParticipant & pParticipant) const;
    Windows::Foundation::IAsyncOperation<Windows::System::RemoteSystems::RemoteSystemSessionCreationResult> CreateSessionAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemSessionControllerFactory
{
    Windows::System::RemoteSystems::RemoteSystemSessionController CreateController(hstring_view displayName) const;
    Windows::System::RemoteSystems::RemoteSystemSessionController CreateController(hstring_view displayName, const Windows::System::RemoteSystems::RemoteSystemSessionOptions & options) const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemSessionCreationResult
{
    Windows::System::RemoteSystems::RemoteSystemSessionCreationStatus Status() const;
    Windows::System::RemoteSystems::RemoteSystemSession Session() const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemSessionDisconnectedEventArgs
{
    Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedReason Reason() const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemSessionInfo
{
    hstring DisplayName() const;
    hstring ControllerDisplayName() const;
    Windows::Foundation::IAsyncOperation<Windows::System::RemoteSystems::RemoteSystemSessionJoinResult> JoinAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemSessionInvitation
{
    Windows::System::RemoteSystems::RemoteSystem Sender() const;
    Windows::System::RemoteSystems::RemoteSystemSessionInfo SessionInfo() const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemSessionInvitationListener
{
    event_token InvitationReceived(const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener, Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs> & handler) const;
    using InvitationReceived_revoker = event_revoker<IRemoteSystemSessionInvitationListener>;
    InvitationReceived_revoker InvitationReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener, Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs> & handler) const;
    void InvitationReceived(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemSessionInvitationReceivedEventArgs
{
    Windows::System::RemoteSystems::RemoteSystemSessionInvitation Invitation() const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemSessionJoinRequest
{
    Windows::System::RemoteSystems::RemoteSystemSessionParticipant Participant() const;
    void Accept() const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemSessionJoinRequestedEventArgs
{
    Windows::System::RemoteSystems::RemoteSystemSessionJoinRequest JoinRequest() const;
    Windows::Foundation::Deferral GetDeferral() const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemSessionJoinResult
{
    Windows::System::RemoteSystems::RemoteSystemSessionJoinStatus Status() const;
    Windows::System::RemoteSystems::RemoteSystemSession Session() const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemSessionMessageChannel
{
    Windows::System::RemoteSystems::RemoteSystemSession Session() const;
    Windows::Foundation::IAsyncOperation<bool> BroadcastValueSetAsync(const Windows::Foundation::Collections::ValueSet & messageData) const;
    Windows::Foundation::IAsyncOperation<bool> SendValueSetAsync(const Windows::Foundation::Collections::ValueSet & messageData, const Windows::System::RemoteSystems::RemoteSystemSessionParticipant & participant) const;
    Windows::Foundation::IAsyncOperation<bool> SendValueSetToParticipantsAsync(const Windows::Foundation::Collections::ValueSet & messageData, iterable<Windows::System::RemoteSystems::RemoteSystemSessionParticipant> participants) const;
    event_token ValueSetReceived(const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel, Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs> & handler) const;
    using ValueSetReceived_revoker = event_revoker<IRemoteSystemSessionMessageChannel>;
    ValueSetReceived_revoker ValueSetReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel, Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs> & handler) const;
    void ValueSetReceived(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemSessionMessageChannelFactory
{
    Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel Create(const Windows::System::RemoteSystems::RemoteSystemSession & session, hstring_view channelName) const;
    Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel Create(const Windows::System::RemoteSystems::RemoteSystemSession & session, hstring_view channelName, Windows::System::RemoteSystems::RemoteSystemSessionMessageChannelReliability reliability) const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemSessionOptions
{
    bool IsInviteOnly() const;
    void IsInviteOnly(bool value) const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemSessionParticipant
{
    Windows::System::RemoteSystems::RemoteSystem RemoteSystem() const;
    Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> GetHostNames() const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemSessionParticipantAddedEventArgs
{
    Windows::System::RemoteSystems::RemoteSystemSessionParticipant Participant() const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemSessionParticipantRemovedEventArgs
{
    Windows::System::RemoteSystems::RemoteSystemSessionParticipant Participant() const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemSessionParticipantWatcher
{
    void Start() const;
    void Stop() const;
    Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcherStatus Status() const;
    event_token Added(const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs> & handler) const;
    using Added_revoker = event_revoker<IRemoteSystemSessionParticipantWatcher>;
    Added_revoker Added(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs> & handler) const;
    void Added(event_token token) const;
    event_token Removed(const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs> & handler) const;
    using Removed_revoker = event_revoker<IRemoteSystemSessionParticipantWatcher>;
    Removed_revoker Removed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs> & handler) const;
    void Removed(event_token token) const;
    event_token EnumerationCompleted(const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::Foundation::IInspectable> & handler) const;
    using EnumerationCompleted_revoker = event_revoker<IRemoteSystemSessionParticipantWatcher>;
    EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::Foundation::IInspectable> & handler) const;
    void EnumerationCompleted(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemSessionRemovedEventArgs
{
    Windows::System::RemoteSystems::RemoteSystemSessionInfo SessionInfo() const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemSessionStatics
{
    Windows::System::RemoteSystems::RemoteSystemSessionWatcher CreateWatcher() const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemSessionUpdatedEventArgs
{
    Windows::System::RemoteSystems::RemoteSystemSessionInfo SessionInfo() const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemSessionValueSetReceivedEventArgs
{
    Windows::System::RemoteSystems::RemoteSystemSessionParticipant Sender() const;
    Windows::Foundation::Collections::ValueSet Message() const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemSessionWatcher
{
    void Start() const;
    void Stop() const;
    Windows::System::RemoteSystems::RemoteSystemSessionWatcherStatus Status() const;
    event_token Added(const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs> & handler) const;
    using Added_revoker = event_revoker<IRemoteSystemSessionWatcher>;
    Added_revoker Added(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs> & handler) const;
    void Added(event_token token) const;
    event_token Updated(const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs> & handler) const;
    using Updated_revoker = event_revoker<IRemoteSystemSessionWatcher>;
    Updated_revoker Updated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs> & handler) const;
    void Updated(event_token token) const;
    event_token Removed(const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs> & handler) const;
    using Removed_revoker = event_revoker<IRemoteSystemSessionWatcher>;
    Removed_revoker Removed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs> & handler) const;
    void Removed(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemStatics
{
    Windows::Foundation::IAsyncOperation<Windows::System::RemoteSystems::RemoteSystem> FindByHostNameAsync(const Windows::Networking::HostName & hostName) const;
    Windows::System::RemoteSystems::RemoteSystemWatcher CreateWatcher() const;
    Windows::System::RemoteSystems::RemoteSystemWatcher CreateWatcher(iterable<Windows::System::RemoteSystems::IRemoteSystemFilter> filters) const;
    Windows::Foundation::IAsyncOperation<winrt::Windows::System::RemoteSystems::RemoteSystemAccessStatus> RequestAccessAsync() const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemStatics2
{
    bool IsAuthorizationKindEnabled(Windows::System::RemoteSystems::RemoteSystemAuthorizationKind kind) const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemStatusTypeFilter
{
    Windows::System::RemoteSystems::RemoteSystemStatusType RemoteSystemStatusType() const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemStatusTypeFilterFactory
{
    Windows::System::RemoteSystems::RemoteSystemStatusTypeFilter Create(Windows::System::RemoteSystems::RemoteSystemStatusType remoteSystemStatusType) const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemUpdatedEventArgs
{
    Windows::System::RemoteSystems::RemoteSystem RemoteSystem() const;
};

template <typename D>
struct WINRT_EBO impl_IRemoteSystemWatcher
{
    void Start() const;
    void Stop() const;
    event_token RemoteSystemAdded(const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemAddedEventArgs> & handler) const;
    using RemoteSystemAdded_revoker = event_revoker<IRemoteSystemWatcher>;
    RemoteSystemAdded_revoker RemoteSystemAdded(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemAddedEventArgs> & handler) const;
    void RemoteSystemAdded(event_token token) const;
    event_token RemoteSystemUpdated(const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs> & handler) const;
    using RemoteSystemUpdated_revoker = event_revoker<IRemoteSystemWatcher>;
    RemoteSystemUpdated_revoker RemoteSystemUpdated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs> & handler) const;
    void RemoteSystemUpdated(event_token token) const;
    event_token RemoteSystemRemoved(const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs> & handler) const;
    using RemoteSystemRemoved_revoker = event_revoker<IRemoteSystemWatcher>;
    RemoteSystemRemoved_revoker RemoteSystemRemoved(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs> & handler) const;
    void RemoteSystemRemoved(event_token token) const;
};

}

namespace impl {

template <> struct traits<Windows::System::RemoteSystems::IKnownRemoteSystemCapabilitiesStatics>
{
    using abi = ABI::Windows::System::RemoteSystems::IKnownRemoteSystemCapabilitiesStatics;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IKnownRemoteSystemCapabilitiesStatics<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystem>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystem;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystem<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystem2>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystem2;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystem2<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemAddedEventArgs>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemAddedEventArgs;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemAddedEventArgs<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilter>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilter;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemAuthorizationKindFilter<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilterFactory>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilterFactory;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemAuthorizationKindFilterFactory<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemConnectionRequest>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemConnectionRequest;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemConnectionRequest<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemConnectionRequestFactory>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemConnectionRequestFactory;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemConnectionRequestFactory<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilter>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilter;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemDiscoveryTypeFilter<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilterFactory>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilterFactory;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemDiscoveryTypeFilterFactory<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemFilter>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemFilter;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemFilter<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemKindFilter>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemKindFilter;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemKindFilter<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemKindFilterFactory>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemKindFilterFactory;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemKindFilterFactory<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemKindStatics>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemKindStatics;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemKindStatics<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemRemovedEventArgs>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemRemovedEventArgs;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemRemovedEventArgs<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemSession>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemSession;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemSession<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemSessionAddedEventArgs>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemSessionAddedEventArgs;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemSessionAddedEventArgs<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemSessionController>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemSessionController;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemSessionController<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemSessionControllerFactory>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemSessionControllerFactory;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemSessionControllerFactory<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemSessionCreationResult>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemSessionCreationResult;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemSessionCreationResult<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemSessionDisconnectedEventArgs>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemSessionDisconnectedEventArgs;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemSessionDisconnectedEventArgs<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemSessionInfo>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemSessionInfo;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemSessionInfo<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemSessionInvitation>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemSessionInvitation;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemSessionInvitation<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemSessionInvitationListener<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemSessionInvitationReceivedEventArgs>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemSessionInvitationReceivedEventArgs;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemSessionInvitationReceivedEventArgs<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequest>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequest;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemSessionJoinRequest<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequestedEventArgs>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequestedEventArgs;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemSessionJoinRequestedEventArgs<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemSessionJoinResult>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemSessionJoinResult;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemSessionJoinResult<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemSessionMessageChannel<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannelFactory>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannelFactory;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemSessionMessageChannelFactory<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemSessionOptions>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemSessionOptions;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemSessionOptions<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemSessionParticipant>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipant;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemSessionParticipant<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemSessionParticipantAddedEventArgs>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantAddedEventArgs;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemSessionParticipantAddedEventArgs<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemSessionParticipantRemovedEventArgs>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantRemovedEventArgs;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemSessionParticipantRemovedEventArgs<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemSessionParticipantWatcher<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemSessionRemovedEventArgs>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemSessionRemovedEventArgs;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemSessionRemovedEventArgs<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemSessionStatics>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemSessionStatics;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemSessionStatics<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemSessionUpdatedEventArgs>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemSessionUpdatedEventArgs;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemSessionUpdatedEventArgs<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemSessionValueSetReceivedEventArgs>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemSessionValueSetReceivedEventArgs;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemSessionValueSetReceivedEventArgs<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemSessionWatcher>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemSessionWatcher;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemSessionWatcher<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemStatics>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemStatics;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemStatics<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemStatics2>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemStatics2;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemStatics2<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilter>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilter;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemStatusTypeFilter<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilterFactory>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilterFactory;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemStatusTypeFilterFactory<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemUpdatedEventArgs>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemUpdatedEventArgs;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemUpdatedEventArgs<D>;
};

template <> struct traits<Windows::System::RemoteSystems::IRemoteSystemWatcher>
{
    using abi = ABI::Windows::System::RemoteSystems::IRemoteSystemWatcher;
    template <typename D> using consume = Windows::System::RemoteSystems::impl_IRemoteSystemWatcher<D>;
};

template <> struct traits<Windows::System::RemoteSystems::KnownRemoteSystemCapabilities>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.KnownRemoteSystemCapabilities"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystem>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystem;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystem"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemAddedEventArgs>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemAddedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemAddedEventArgs"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemAuthorizationKindFilter>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemAuthorizationKindFilter;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemAuthorizationKindFilter"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemConnectionRequest>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemConnectionRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemConnectionRequest"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemDiscoveryTypeFilter>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemDiscoveryTypeFilter;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemDiscoveryTypeFilter"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemKindFilter>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemKindFilter;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemKindFilter"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemKinds>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemKinds"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemRemovedEventArgs"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSession>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemSession;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemSession"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemSessionAddedEventArgs"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionController>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemSessionController;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemSessionController"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionCreationResult>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemSessionCreationResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemSessionCreationResult"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemSessionDisconnectedEventArgs"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionInfo>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemSessionInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemSessionInfo"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionInvitation>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemSessionInvitation;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemSessionInvitation"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemSessionInvitationListener"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemSessionInvitationReceivedEventArgs"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionJoinRequest>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemSessionJoinRequest;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemSessionJoinRequest"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemSessionJoinRequestedEventArgs"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionJoinResult>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemSessionJoinResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemSessionJoinResult"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemSessionMessageChannel"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionOptions>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemSessionOptions;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemSessionOptions"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionParticipant>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemSessionParticipant;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemSessionParticipant"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemSessionParticipantAddedEventArgs"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemSessionParticipantRemovedEventArgs"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemSessionParticipantWatcher"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemSessionRemovedEventArgs"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemSessionUpdatedEventArgs"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemSessionValueSetReceivedEventArgs"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemSessionWatcher>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemSessionWatcher;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemSessionWatcher"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemStatusTypeFilter>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemStatusTypeFilter;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemStatusTypeFilter"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemUpdatedEventArgs"; }
};

template <> struct traits<Windows::System::RemoteSystems::RemoteSystemWatcher>
{
    using abi = ABI::Windows::System::RemoteSystems::RemoteSystemWatcher;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.RemoteSystems.RemoteSystemWatcher"; }
};

}

}
