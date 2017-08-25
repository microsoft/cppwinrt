// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Networking.2.h"
#include "winrt/impl/Windows.System.RemoteSystems.2.h"
#include "winrt/Windows.System.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_System_RemoteSystems_IKnownRemoteSystemCapabilitiesStatics<D>::AppService() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IKnownRemoteSystemCapabilitiesStatics)->get_AppService(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_RemoteSystems_IKnownRemoteSystemCapabilitiesStatics<D>::LaunchUri() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IKnownRemoteSystemCapabilitiesStatics)->get_LaunchUri(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_RemoteSystems_IKnownRemoteSystemCapabilitiesStatics<D>::RemoteSession() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IKnownRemoteSystemCapabilitiesStatics)->get_RemoteSession(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_RemoteSystems_IKnownRemoteSystemCapabilitiesStatics<D>::SpatialEntity() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IKnownRemoteSystemCapabilitiesStatics)->get_SpatialEntity(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_RemoteSystems_IRemoteSystem<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystem)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_RemoteSystems_IRemoteSystem<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystem)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_RemoteSystems_IRemoteSystem<D>::Kind() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystem)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemStatus consume_Windows_System_RemoteSystems_IRemoteSystem<D>::Status() const
{
    Windows::System::RemoteSystems::RemoteSystemStatus value{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystem)->get_Status(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_System_RemoteSystems_IRemoteSystem<D>::IsAvailableByProximity() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystem)->get_IsAvailableByProximity(&value));
    return value;
}

template <typename D> bool consume_Windows_System_RemoteSystems_IRemoteSystem2<D>::IsAvailableBySpatialProximity() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystem2)->get_IsAvailableBySpatialProximity(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_System_RemoteSystems_IRemoteSystem2<D>::GetCapabilitySupportedAsync(param::hstring const& capabilityName) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystem2)->GetCapabilitySupportedAsync(get_abi(capabilityName), put_abi(operation)));
    return operation;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystem consume_Windows_System_RemoteSystems_IRemoteSystemAddedEventArgs<D>::RemoteSystem() const
{
    Windows::System::RemoteSystems::RemoteSystem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemAddedEventArgs)->get_RemoteSystem(put_abi(value)));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemAuthorizationKind consume_Windows_System_RemoteSystems_IRemoteSystemAuthorizationKindFilter<D>::RemoteSystemAuthorizationKind() const
{
    Windows::System::RemoteSystems::RemoteSystemAuthorizationKind value{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilter)->get_RemoteSystemAuthorizationKind(put_abi(value)));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemAuthorizationKindFilter consume_Windows_System_RemoteSystems_IRemoteSystemAuthorizationKindFilterFactory<D>::Create(Windows::System::RemoteSystems::RemoteSystemAuthorizationKind const& remoteSystemAuthorizationKind) const
{
    Windows::System::RemoteSystems::RemoteSystemAuthorizationKindFilter result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilterFactory)->Create(get_abi(remoteSystemAuthorizationKind), put_abi(result)));
    return result;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystem consume_Windows_System_RemoteSystems_IRemoteSystemConnectionRequest<D>::RemoteSystem() const
{
    Windows::System::RemoteSystems::RemoteSystem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemConnectionRequest)->get_RemoteSystem(put_abi(value)));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemConnectionRequest consume_Windows_System_RemoteSystems_IRemoteSystemConnectionRequestFactory<D>::Create(Windows::System::RemoteSystems::RemoteSystem const& remoteSystem) const
{
    Windows::System::RemoteSystems::RemoteSystemConnectionRequest result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemConnectionRequestFactory)->Create(get_abi(remoteSystem), put_abi(result)));
    return result;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemDiscoveryType consume_Windows_System_RemoteSystems_IRemoteSystemDiscoveryTypeFilter<D>::RemoteSystemDiscoveryType() const
{
    Windows::System::RemoteSystems::RemoteSystemDiscoveryType value{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilter)->get_RemoteSystemDiscoveryType(put_abi(value)));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemDiscoveryTypeFilter consume_Windows_System_RemoteSystems_IRemoteSystemDiscoveryTypeFilterFactory<D>::Create(Windows::System::RemoteSystems::RemoteSystemDiscoveryType const& discoveryType) const
{
    Windows::System::RemoteSystems::RemoteSystemDiscoveryTypeFilter result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilterFactory)->Create(get_abi(discoveryType), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> consume_Windows_System_RemoteSystems_IRemoteSystemKindFilter<D>::RemoteSystemKinds() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemKindFilter)->get_RemoteSystemKinds(put_abi(value)));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemKindFilter consume_Windows_System_RemoteSystems_IRemoteSystemKindFilterFactory<D>::Create(param::iterable<hstring> const& remoteSystemKinds) const
{
    Windows::System::RemoteSystems::RemoteSystemKindFilter result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemKindFilterFactory)->Create(get_abi(remoteSystemKinds), put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_System_RemoteSystems_IRemoteSystemKindStatics<D>::Phone() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemKindStatics)->get_Phone(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_RemoteSystems_IRemoteSystemKindStatics<D>::Hub() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemKindStatics)->get_Hub(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_RemoteSystems_IRemoteSystemKindStatics<D>::Holographic() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemKindStatics)->get_Holographic(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_RemoteSystems_IRemoteSystemKindStatics<D>::Desktop() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemKindStatics)->get_Desktop(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_RemoteSystems_IRemoteSystemKindStatics<D>::Xbox() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemKindStatics)->get_Xbox(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_RemoteSystems_IRemoteSystemRemovedEventArgs<D>::RemoteSystemId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemRemovedEventArgs)->get_RemoteSystemId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_RemoteSystems_IRemoteSystemSession<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSession)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_RemoteSystems_IRemoteSystemSession<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSession)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_RemoteSystems_IRemoteSystemSession<D>::ControllerDisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSession)->get_ControllerDisplayName(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_System_RemoteSystems_IRemoteSystemSession<D>::Disconnected(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSession, Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSession)->add_Disconnected(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::RemoteSystems::IRemoteSystemSession> consume_Windows_System_RemoteSystems_IRemoteSystemSession<D>::Disconnected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSession, Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::RemoteSystems::IRemoteSystemSession>(this, &abi_t<Windows::System::RemoteSystems::IRemoteSystemSession>::remove_Disconnected, Disconnected(handler));
}

template <typename D> void consume_Windows_System_RemoteSystems_IRemoteSystemSession<D>::Disconnected(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSession)->remove_Disconnected(get_abi(token)));
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher consume_Windows_System_RemoteSystems_IRemoteSystemSession<D>::CreateParticipantWatcher() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSession)->CreateParticipantWatcher(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_System_RemoteSystems_IRemoteSystemSession<D>::SendInvitationAsync(Windows::System::RemoteSystems::RemoteSystem const& invitee) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSession)->SendInvitationAsync(get_abi(invitee), put_abi(operation)));
    return operation;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionInfo consume_Windows_System_RemoteSystems_IRemoteSystemSessionAddedEventArgs<D>::SessionInfo() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionAddedEventArgs)->get_SessionInfo(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_System_RemoteSystems_IRemoteSystemSessionController<D>::JoinRequested(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionController, Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionController)->add_JoinRequested(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::RemoteSystems::IRemoteSystemSessionController> consume_Windows_System_RemoteSystems_IRemoteSystemSessionController<D>::JoinRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionController, Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::RemoteSystems::IRemoteSystemSessionController>(this, &abi_t<Windows::System::RemoteSystems::IRemoteSystemSessionController>::remove_JoinRequested, JoinRequested(handler));
}

template <typename D> void consume_Windows_System_RemoteSystems_IRemoteSystemSessionController<D>::JoinRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionController)->remove_JoinRequested(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_System_RemoteSystems_IRemoteSystemSessionController<D>::RemoveParticipantAsync(Windows::System::RemoteSystems::RemoteSystemSessionParticipant const& pParticipant) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionController)->RemoveParticipantAsync(get_abi(pParticipant), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::RemoteSystems::RemoteSystemSessionCreationResult> consume_Windows_System_RemoteSystems_IRemoteSystemSessionController<D>::CreateSessionAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::System::RemoteSystems::RemoteSystemSessionCreationResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionController)->CreateSessionAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionController consume_Windows_System_RemoteSystems_IRemoteSystemSessionControllerFactory<D>::CreateController(param::hstring const& displayName) const
{
    Windows::System::RemoteSystems::RemoteSystemSessionController result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionControllerFactory)->CreateController(get_abi(displayName), put_abi(result)));
    return result;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionController consume_Windows_System_RemoteSystems_IRemoteSystemSessionControllerFactory<D>::CreateController(param::hstring const& displayName, Windows::System::RemoteSystems::RemoteSystemSessionOptions const& options) const
{
    Windows::System::RemoteSystems::RemoteSystemSessionController result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionControllerFactory)->CreateControllerWithSessionOptions(get_abi(displayName), get_abi(options), put_abi(result)));
    return result;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionCreationStatus consume_Windows_System_RemoteSystems_IRemoteSystemSessionCreationResult<D>::Status() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionCreationStatus value{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionCreationResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSession consume_Windows_System_RemoteSystems_IRemoteSystemSessionCreationResult<D>::Session() const
{
    Windows::System::RemoteSystems::RemoteSystemSession value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionCreationResult)->get_Session(put_abi(value)));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedReason consume_Windows_System_RemoteSystems_IRemoteSystemSessionDisconnectedEventArgs<D>::Reason() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedReason value{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionDisconnectedEventArgs)->get_Reason(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_RemoteSystems_IRemoteSystemSessionInfo<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionInfo)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_System_RemoteSystems_IRemoteSystemSessionInfo<D>::ControllerDisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionInfo)->get_ControllerDisplayName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::RemoteSystems::RemoteSystemSessionJoinResult> consume_Windows_System_RemoteSystems_IRemoteSystemSessionInfo<D>::JoinAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::System::RemoteSystems::RemoteSystemSessionJoinResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionInfo)->JoinAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystem consume_Windows_System_RemoteSystems_IRemoteSystemSessionInvitation<D>::Sender() const
{
    Windows::System::RemoteSystems::RemoteSystem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionInvitation)->get_Sender(put_abi(value)));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionInfo consume_Windows_System_RemoteSystems_IRemoteSystemSessionInvitation<D>::SessionInfo() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionInvitation)->get_SessionInfo(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_System_RemoteSystems_IRemoteSystemSessionInvitationListener<D>::InvitationReceived(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener, Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener)->add_InvitationReceived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener> consume_Windows_System_RemoteSystems_IRemoteSystemSessionInvitationListener<D>::InvitationReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener, Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener>(this, &abi_t<Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener>::remove_InvitationReceived, InvitationReceived(handler));
}

template <typename D> void consume_Windows_System_RemoteSystems_IRemoteSystemSessionInvitationListener<D>::InvitationReceived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener)->remove_InvitationReceived(get_abi(token)));
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionInvitation consume_Windows_System_RemoteSystems_IRemoteSystemSessionInvitationReceivedEventArgs<D>::Invitation() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionInvitation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionInvitationReceivedEventArgs)->get_Invitation(put_abi(value)));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionParticipant consume_Windows_System_RemoteSystems_IRemoteSystemSessionJoinRequest<D>::Participant() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionParticipant value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequest)->get_Participant(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_System_RemoteSystems_IRemoteSystemSessionJoinRequest<D>::Accept() const
{
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequest)->Accept());
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionJoinRequest consume_Windows_System_RemoteSystems_IRemoteSystemSessionJoinRequestedEventArgs<D>::JoinRequest() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionJoinRequest value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequestedEventArgs)->get_JoinRequest(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral consume_Windows_System_RemoteSystems_IRemoteSystemSessionJoinRequestedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequestedEventArgs)->GetDeferral(put_abi(value)));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionJoinStatus consume_Windows_System_RemoteSystems_IRemoteSystemSessionJoinResult<D>::Status() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionJoinStatus value{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionJoinResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSession consume_Windows_System_RemoteSystems_IRemoteSystemSessionJoinResult<D>::Session() const
{
    Windows::System::RemoteSystems::RemoteSystemSession value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionJoinResult)->get_Session(put_abi(value)));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSession consume_Windows_System_RemoteSystems_IRemoteSystemSessionMessageChannel<D>::Session() const
{
    Windows::System::RemoteSystems::RemoteSystemSession value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel)->get_Session(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_System_RemoteSystems_IRemoteSystemSessionMessageChannel<D>::BroadcastValueSetAsync(Windows::Foundation::Collections::ValueSet const& messageData) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel)->BroadcastValueSetAsync(get_abi(messageData), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_System_RemoteSystems_IRemoteSystemSessionMessageChannel<D>::SendValueSetAsync(Windows::Foundation::Collections::ValueSet const& messageData, Windows::System::RemoteSystems::RemoteSystemSessionParticipant const& participant) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel)->SendValueSetAsync(get_abi(messageData), get_abi(participant), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> consume_Windows_System_RemoteSystems_IRemoteSystemSessionMessageChannel<D>::SendValueSetToParticipantsAsync(Windows::Foundation::Collections::ValueSet const& messageData, param::async_iterable<Windows::System::RemoteSystems::RemoteSystemSessionParticipant> const& participants) const
{
    Windows::Foundation::IAsyncOperation<bool> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel)->SendValueSetToParticipantsAsync(get_abi(messageData), get_abi(participants), put_abi(operation)));
    return operation;
}

template <typename D> event_token consume_Windows_System_RemoteSystems_IRemoteSystemSessionMessageChannel<D>::ValueSetReceived(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel, Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel)->add_ValueSetReceived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel> consume_Windows_System_RemoteSystems_IRemoteSystemSessionMessageChannel<D>::ValueSetReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel, Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel>(this, &abi_t<Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel>::remove_ValueSetReceived, ValueSetReceived(handler));
}

template <typename D> void consume_Windows_System_RemoteSystems_IRemoteSystemSessionMessageChannel<D>::ValueSetReceived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel)->remove_ValueSetReceived(get_abi(token)));
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel consume_Windows_System_RemoteSystems_IRemoteSystemSessionMessageChannelFactory<D>::Create(Windows::System::RemoteSystems::RemoteSystemSession const& session, param::hstring const& channelName) const
{
    Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannelFactory)->Create(get_abi(session), get_abi(channelName), put_abi(result)));
    return result;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel consume_Windows_System_RemoteSystems_IRemoteSystemSessionMessageChannelFactory<D>::Create(Windows::System::RemoteSystems::RemoteSystemSession const& session, param::hstring const& channelName, Windows::System::RemoteSystems::RemoteSystemSessionMessageChannelReliability const& reliability) const
{
    Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannelFactory)->CreateWithReliability(get_abi(session), get_abi(channelName), get_abi(reliability), put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_System_RemoteSystems_IRemoteSystemSessionOptions<D>::IsInviteOnly() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionOptions)->get_IsInviteOnly(&value));
    return value;
}

template <typename D> void consume_Windows_System_RemoteSystems_IRemoteSystemSessionOptions<D>::IsInviteOnly(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionOptions)->put_IsInviteOnly(value));
}

template <typename D> Windows::System::RemoteSystems::RemoteSystem consume_Windows_System_RemoteSystems_IRemoteSystemSessionParticipant<D>::RemoteSystem() const
{
    Windows::System::RemoteSystems::RemoteSystem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionParticipant)->get_RemoteSystem(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> consume_Windows_System_RemoteSystems_IRemoteSystemSessionParticipant<D>::GetHostNames() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionParticipant)->GetHostNames(put_abi(result)));
    return result;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionParticipant consume_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantAddedEventArgs<D>::Participant() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionParticipant value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionParticipantAddedEventArgs)->get_Participant(put_abi(value)));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionParticipant consume_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantRemovedEventArgs<D>::Participant() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionParticipant value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionParticipantRemovedEventArgs)->get_Participant(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantWatcher<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher)->Start());
}

template <typename D> void consume_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantWatcher<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher)->Stop());
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcherStatus consume_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantWatcher<D>::Status() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcherStatus value{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher)->get_Status(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantWatcher<D>::Added(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher)->add_Added(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher> consume_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantWatcher<D>::Added(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher>(this, &abi_t<Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher>::remove_Added, Added(handler));
}

template <typename D> void consume_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantWatcher<D>::Added(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher)->remove_Added(get_abi(token)));
}

template <typename D> event_token consume_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantWatcher<D>::Removed(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher)->add_Removed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher> consume_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantWatcher<D>::Removed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher>(this, &abi_t<Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher>::remove_Removed, Removed(handler));
}

template <typename D> void consume_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantWatcher<D>::Removed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher)->remove_Removed(get_abi(token)));
}

template <typename D> event_token consume_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantWatcher<D>::EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher)->add_EnumerationCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher> consume_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantWatcher<D>::EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher>(this, &abi_t<Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher>::remove_EnumerationCompleted, EnumerationCompleted(handler));
}

template <typename D> void consume_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantWatcher<D>::EnumerationCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher)->remove_EnumerationCompleted(get_abi(token)));
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionInfo consume_Windows_System_RemoteSystems_IRemoteSystemSessionRemovedEventArgs<D>::SessionInfo() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionRemovedEventArgs)->get_SessionInfo(put_abi(value)));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionWatcher consume_Windows_System_RemoteSystems_IRemoteSystemSessionStatics<D>::CreateWatcher() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionWatcher result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionStatics)->CreateWatcher(put_abi(result)));
    return result;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionInfo consume_Windows_System_RemoteSystems_IRemoteSystemSessionUpdatedEventArgs<D>::SessionInfo() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionInfo value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionUpdatedEventArgs)->get_SessionInfo(put_abi(value)));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionParticipant consume_Windows_System_RemoteSystems_IRemoteSystemSessionValueSetReceivedEventArgs<D>::Sender() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionParticipant value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionValueSetReceivedEventArgs)->get_Sender(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::ValueSet consume_Windows_System_RemoteSystems_IRemoteSystemSessionValueSetReceivedEventArgs<D>::Message() const
{
    Windows::Foundation::Collections::ValueSet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionValueSetReceivedEventArgs)->get_Message(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_System_RemoteSystems_IRemoteSystemSessionWatcher<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionWatcher)->Start());
}

template <typename D> void consume_Windows_System_RemoteSystems_IRemoteSystemSessionWatcher<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionWatcher)->Stop());
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionWatcherStatus consume_Windows_System_RemoteSystems_IRemoteSystemSessionWatcher<D>::Status() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionWatcherStatus value{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionWatcher)->get_Status(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_System_RemoteSystems_IRemoteSystemSessionWatcher<D>::Added(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionWatcher)->add_Added(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::RemoteSystems::IRemoteSystemSessionWatcher> consume_Windows_System_RemoteSystems_IRemoteSystemSessionWatcher<D>::Added(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::RemoteSystems::IRemoteSystemSessionWatcher>(this, &abi_t<Windows::System::RemoteSystems::IRemoteSystemSessionWatcher>::remove_Added, Added(handler));
}

template <typename D> void consume_Windows_System_RemoteSystems_IRemoteSystemSessionWatcher<D>::Added(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionWatcher)->remove_Added(get_abi(token)));
}

template <typename D> event_token consume_Windows_System_RemoteSystems_IRemoteSystemSessionWatcher<D>::Updated(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionWatcher)->add_Updated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::RemoteSystems::IRemoteSystemSessionWatcher> consume_Windows_System_RemoteSystems_IRemoteSystemSessionWatcher<D>::Updated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::RemoteSystems::IRemoteSystemSessionWatcher>(this, &abi_t<Windows::System::RemoteSystems::IRemoteSystemSessionWatcher>::remove_Updated, Updated(handler));
}

template <typename D> void consume_Windows_System_RemoteSystems_IRemoteSystemSessionWatcher<D>::Updated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionWatcher)->remove_Updated(get_abi(token)));
}

template <typename D> event_token consume_Windows_System_RemoteSystems_IRemoteSystemSessionWatcher<D>::Removed(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionWatcher)->add_Removed(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::RemoteSystems::IRemoteSystemSessionWatcher> consume_Windows_System_RemoteSystems_IRemoteSystemSessionWatcher<D>::Removed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::RemoteSystems::IRemoteSystemSessionWatcher>(this, &abi_t<Windows::System::RemoteSystems::IRemoteSystemSessionWatcher>::remove_Removed, Removed(handler));
}

template <typename D> void consume_Windows_System_RemoteSystems_IRemoteSystemSessionWatcher<D>::Removed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemSessionWatcher)->remove_Removed(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::RemoteSystems::RemoteSystem> consume_Windows_System_RemoteSystems_IRemoteSystemStatics<D>::FindByHostNameAsync(Windows::Networking::HostName const& hostName) const
{
    Windows::Foundation::IAsyncOperation<Windows::System::RemoteSystems::RemoteSystem> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemStatics)->FindByHostNameAsync(get_abi(hostName), put_abi(operation)));
    return operation;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemWatcher consume_Windows_System_RemoteSystems_IRemoteSystemStatics<D>::CreateWatcher() const
{
    Windows::System::RemoteSystems::RemoteSystemWatcher result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemStatics)->CreateWatcher(put_abi(result)));
    return result;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemWatcher consume_Windows_System_RemoteSystems_IRemoteSystemStatics<D>::CreateWatcher(param::iterable<Windows::System::RemoteSystems::IRemoteSystemFilter> const& filters) const
{
    Windows::System::RemoteSystems::RemoteSystemWatcher result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemStatics)->CreateWatcherWithFilters(get_abi(filters), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::RemoteSystems::RemoteSystemAccessStatus> consume_Windows_System_RemoteSystems_IRemoteSystemStatics<D>::RequestAccessAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::System::RemoteSystems::RemoteSystemAccessStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemStatics)->RequestAccessAsync(put_abi(operation)));
    return operation;
}

template <typename D> bool consume_Windows_System_RemoteSystems_IRemoteSystemStatics2<D>::IsAuthorizationKindEnabled(Windows::System::RemoteSystems::RemoteSystemAuthorizationKind const& kind) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemStatics2)->IsAuthorizationKindEnabled(get_abi(kind), &value));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemStatusType consume_Windows_System_RemoteSystems_IRemoteSystemStatusTypeFilter<D>::RemoteSystemStatusType() const
{
    Windows::System::RemoteSystems::RemoteSystemStatusType value{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilter)->get_RemoteSystemStatusType(put_abi(value)));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemStatusTypeFilter consume_Windows_System_RemoteSystems_IRemoteSystemStatusTypeFilterFactory<D>::Create(Windows::System::RemoteSystems::RemoteSystemStatusType const& remoteSystemStatusType) const
{
    Windows::System::RemoteSystems::RemoteSystemStatusTypeFilter result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilterFactory)->Create(get_abi(remoteSystemStatusType), put_abi(result)));
    return result;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystem consume_Windows_System_RemoteSystems_IRemoteSystemUpdatedEventArgs<D>::RemoteSystem() const
{
    Windows::System::RemoteSystems::RemoteSystem value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemUpdatedEventArgs)->get_RemoteSystem(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_System_RemoteSystems_IRemoteSystemWatcher<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemWatcher)->Start());
}

template <typename D> void consume_Windows_System_RemoteSystems_IRemoteSystemWatcher<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemWatcher)->Stop());
}

template <typename D> event_token consume_Windows_System_RemoteSystems_IRemoteSystemWatcher<D>::RemoteSystemAdded(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemAddedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemWatcher)->add_RemoteSystemAdded(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::RemoteSystems::IRemoteSystemWatcher> consume_Windows_System_RemoteSystems_IRemoteSystemWatcher<D>::RemoteSystemAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemAddedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::RemoteSystems::IRemoteSystemWatcher>(this, &abi_t<Windows::System::RemoteSystems::IRemoteSystemWatcher>::remove_RemoteSystemAdded, RemoteSystemAdded(handler));
}

template <typename D> void consume_Windows_System_RemoteSystems_IRemoteSystemWatcher<D>::RemoteSystemAdded(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemWatcher)->remove_RemoteSystemAdded(get_abi(token)));
}

template <typename D> event_token consume_Windows_System_RemoteSystems_IRemoteSystemWatcher<D>::RemoteSystemUpdated(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemWatcher)->add_RemoteSystemUpdated(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::RemoteSystems::IRemoteSystemWatcher> consume_Windows_System_RemoteSystems_IRemoteSystemWatcher<D>::RemoteSystemUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::RemoteSystems::IRemoteSystemWatcher>(this, &abi_t<Windows::System::RemoteSystems::IRemoteSystemWatcher>::remove_RemoteSystemUpdated, RemoteSystemUpdated(handler));
}

template <typename D> void consume_Windows_System_RemoteSystems_IRemoteSystemWatcher<D>::RemoteSystemUpdated(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemWatcher)->remove_RemoteSystemUpdated(get_abi(token)));
}

template <typename D> event_token consume_Windows_System_RemoteSystems_IRemoteSystemWatcher<D>::RemoteSystemRemoved(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemWatcher)->add_RemoteSystemRemoved(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::System::RemoteSystems::IRemoteSystemWatcher> consume_Windows_System_RemoteSystems_IRemoteSystemWatcher<D>::RemoteSystemRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::System::RemoteSystems::IRemoteSystemWatcher>(this, &abi_t<Windows::System::RemoteSystems::IRemoteSystemWatcher>::remove_RemoteSystemRemoved, RemoteSystemRemoved(handler));
}

template <typename D> void consume_Windows_System_RemoteSystems_IRemoteSystemWatcher<D>::RemoteSystemRemoved(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::System::RemoteSystems::IRemoteSystemWatcher)->remove_RemoteSystemRemoved(get_abi(token)));
}

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IKnownRemoteSystemCapabilitiesStatics> : produce_base<D, Windows::System::RemoteSystems::IKnownRemoteSystemCapabilitiesStatics>
{
    HRESULT __stdcall get_AppService(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AppService());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LaunchUri(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LaunchUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RemoteSession(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RemoteSession());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpatialEntity(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SpatialEntity());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystem> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystem>
{
    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kind(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Kind());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(abi_t<Windows::System::RemoteSystems::RemoteSystemStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsAvailableByProximity(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsAvailableByProximity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystem2> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystem2>
{
    HRESULT __stdcall get_IsAvailableBySpatialProximity(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsAvailableBySpatialProximity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCapabilitySupportedAsync(HSTRING capabilityName, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetCapabilitySupportedAsync(*reinterpret_cast<hstring const*>(&capabilityName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemAddedEventArgs> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemAddedEventArgs>
{
    HRESULT __stdcall get_RemoteSystem(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RemoteSystem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilter> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilter>
{
    HRESULT __stdcall get_RemoteSystemAuthorizationKind(abi_t<Windows::System::RemoteSystems::RemoteSystemAuthorizationKind>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RemoteSystemAuthorizationKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilterFactory> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilterFactory>
{
    HRESULT __stdcall Create(abi_t<Windows::System::RemoteSystems::RemoteSystemAuthorizationKind> remoteSystemAuthorizationKind, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<Windows::System::RemoteSystems::RemoteSystemAuthorizationKind const*>(&remoteSystemAuthorizationKind)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemConnectionRequest> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemConnectionRequest>
{
    HRESULT __stdcall get_RemoteSystem(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RemoteSystem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemConnectionRequestFactory> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemConnectionRequestFactory>
{
    HRESULT __stdcall Create(::IUnknown* remoteSystem, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<Windows::System::RemoteSystems::RemoteSystem const*>(&remoteSystem)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilter> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilter>
{
    HRESULT __stdcall get_RemoteSystemDiscoveryType(abi_t<Windows::System::RemoteSystems::RemoteSystemDiscoveryType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RemoteSystemDiscoveryType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilterFactory> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilterFactory>
{
    HRESULT __stdcall Create(abi_t<Windows::System::RemoteSystems::RemoteSystemDiscoveryType> discoveryType, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<Windows::System::RemoteSystems::RemoteSystemDiscoveryType const*>(&discoveryType)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemFilter> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemFilter>
{};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemKindFilter> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemKindFilter>
{
    HRESULT __stdcall get_RemoteSystemKinds(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RemoteSystemKinds());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemKindFilterFactory> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemKindFilterFactory>
{
    HRESULT __stdcall Create(::IUnknown* remoteSystemKinds, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&remoteSystemKinds)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemKindStatics> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemKindStatics>
{
    HRESULT __stdcall get_Phone(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Phone());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Hub(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Hub());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Holographic(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Holographic());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Desktop(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Desktop());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Xbox(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Xbox());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemRemovedEventArgs> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemRemovedEventArgs>
{
    HRESULT __stdcall get_RemoteSystemId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RemoteSystemId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemSession> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemSession>
{
    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ControllerDisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ControllerDisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Disconnected(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Disconnected(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSession, Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Disconnected(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Disconnected(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateParticipantWatcher(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateParticipantWatcher());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SendInvitationAsync(::IUnknown* invitee, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SendInvitationAsync(*reinterpret_cast<Windows::System::RemoteSystems::RemoteSystem const*>(&invitee)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemSessionAddedEventArgs> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemSessionAddedEventArgs>
{
    HRESULT __stdcall get_SessionInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SessionInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemSessionController> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemSessionController>
{
    HRESULT __stdcall add_JoinRequested(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().JoinRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionController, Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_JoinRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().JoinRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RemoveParticipantAsync(::IUnknown* pParticipant, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RemoveParticipantAsync(*reinterpret_cast<Windows::System::RemoteSystems::RemoteSystemSessionParticipant const*>(&pParticipant)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateSessionAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateSessionAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemSessionControllerFactory> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemSessionControllerFactory>
{
    HRESULT __stdcall CreateController(HSTRING displayName, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateController(*reinterpret_cast<hstring const*>(&displayName)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateControllerWithSessionOptions(HSTRING displayName, ::IUnknown* options, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateController(*reinterpret_cast<hstring const*>(&displayName), *reinterpret_cast<Windows::System::RemoteSystems::RemoteSystemSessionOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemSessionCreationResult> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemSessionCreationResult>
{
    HRESULT __stdcall get_Status(abi_t<Windows::System::RemoteSystems::RemoteSystemSessionCreationStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Session(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Session());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemSessionDisconnectedEventArgs> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemSessionDisconnectedEventArgs>
{
    HRESULT __stdcall get_Reason(abi_t<Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedReason>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Reason());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemSessionInfo> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemSessionInfo>
{
    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ControllerDisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ControllerDisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall JoinAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().JoinAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemSessionInvitation> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemSessionInvitation>
{
    HRESULT __stdcall get_Sender(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Sender());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SessionInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SessionInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener>
{
    HRESULT __stdcall add_InvitationReceived(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().InvitationReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener, Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_InvitationReceived(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InvitationReceived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemSessionInvitationReceivedEventArgs> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemSessionInvitationReceivedEventArgs>
{
    HRESULT __stdcall get_Invitation(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Invitation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequest> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequest>
{
    HRESULT __stdcall get_Participant(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Participant());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Accept() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Accept();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequestedEventArgs> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequestedEventArgs>
{
    HRESULT __stdcall get_JoinRequest(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().JoinRequest());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeferral(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemSessionJoinResult> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemSessionJoinResult>
{
    HRESULT __stdcall get_Status(abi_t<Windows::System::RemoteSystems::RemoteSystemSessionJoinStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Session(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Session());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel>
{
    HRESULT __stdcall get_Session(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Session());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall BroadcastValueSetAsync(::IUnknown* messageData, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().BroadcastValueSetAsync(*reinterpret_cast<Windows::Foundation::Collections::ValueSet const*>(&messageData)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SendValueSetAsync(::IUnknown* messageData, ::IUnknown* participant, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SendValueSetAsync(*reinterpret_cast<Windows::Foundation::Collections::ValueSet const*>(&messageData), *reinterpret_cast<Windows::System::RemoteSystems::RemoteSystemSessionParticipant const*>(&participant)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SendValueSetToParticipantsAsync(::IUnknown* messageData, ::IUnknown* participants, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SendValueSetToParticipantsAsync(*reinterpret_cast<Windows::Foundation::Collections::ValueSet const*>(&messageData), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::System::RemoteSystems::RemoteSystemSessionParticipant> const*>(&participants)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ValueSetReceived(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ValueSetReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel, Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ValueSetReceived(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ValueSetReceived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannelFactory> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannelFactory>
{
    HRESULT __stdcall Create(::IUnknown* session, HSTRING channelName, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<Windows::System::RemoteSystems::RemoteSystemSession const*>(&session), *reinterpret_cast<hstring const*>(&channelName)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWithReliability(::IUnknown* session, HSTRING channelName, abi_t<Windows::System::RemoteSystems::RemoteSystemSessionMessageChannelReliability> reliability, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<Windows::System::RemoteSystems::RemoteSystemSession const*>(&session), *reinterpret_cast<hstring const*>(&channelName), *reinterpret_cast<Windows::System::RemoteSystems::RemoteSystemSessionMessageChannelReliability const*>(&reliability)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemSessionOptions> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemSessionOptions>
{
    HRESULT __stdcall get_IsInviteOnly(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsInviteOnly());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsInviteOnly(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsInviteOnly(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemSessionParticipant> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemSessionParticipant>
{
    HRESULT __stdcall get_RemoteSystem(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RemoteSystem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetHostNames(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().GetHostNames());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemSessionParticipantAddedEventArgs> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemSessionParticipantAddedEventArgs>
{
    HRESULT __stdcall get_Participant(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Participant());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemSessionParticipantRemovedEventArgs> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemSessionParticipantRemovedEventArgs>
{
    HRESULT __stdcall get_Participant(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Participant());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher>
{
    HRESULT __stdcall Start() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Stop() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(abi_t<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcherStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Added(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Added(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Added(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Added(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Removed(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Removed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Removed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Removed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_EnumerationCompleted(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().EnumerationCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_EnumerationCompleted(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnumerationCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemSessionRemovedEventArgs> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemSessionRemovedEventArgs>
{
    HRESULT __stdcall get_SessionInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SessionInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemSessionStatics> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemSessionStatics>
{
    HRESULT __stdcall CreateWatcher(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWatcher());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemSessionUpdatedEventArgs> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemSessionUpdatedEventArgs>
{
    HRESULT __stdcall get_SessionInfo(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SessionInfo());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemSessionValueSetReceivedEventArgs> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemSessionValueSetReceivedEventArgs>
{
    HRESULT __stdcall get_Sender(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Sender());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Message(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Message());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemSessionWatcher> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemSessionWatcher>
{
    HRESULT __stdcall Start() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Stop() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(abi_t<Windows::System::RemoteSystems::RemoteSystemSessionWatcherStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Added(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Added(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Added(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Added(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Updated(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Updated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Updated(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Updated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Removed(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Removed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Removed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Removed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemStatics> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemStatics>
{
    HRESULT __stdcall FindByHostNameAsync(::IUnknown* hostName, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FindByHostNameAsync(*reinterpret_cast<Windows::Networking::HostName const*>(&hostName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWatcher(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWatcher());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWatcherWithFilters(::IUnknown* filters, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWatcher(*reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::System::RemoteSystems::IRemoteSystemFilter> const*>(&filters)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestAccessAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RequestAccessAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemStatics2> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemStatics2>
{
    HRESULT __stdcall IsAuthorizationKindEnabled(abi_t<Windows::System::RemoteSystems::RemoteSystemAuthorizationKind> kind, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsAuthorizationKindEnabled(*reinterpret_cast<Windows::System::RemoteSystems::RemoteSystemAuthorizationKind const*>(&kind)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilter> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilter>
{
    HRESULT __stdcall get_RemoteSystemStatusType(abi_t<Windows::System::RemoteSystems::RemoteSystemStatusType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RemoteSystemStatusType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilterFactory> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilterFactory>
{
    HRESULT __stdcall Create(abi_t<Windows::System::RemoteSystems::RemoteSystemStatusType> remoteSystemStatusType, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<Windows::System::RemoteSystems::RemoteSystemStatusType const*>(&remoteSystemStatusType)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemUpdatedEventArgs> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemUpdatedEventArgs>
{
    HRESULT __stdcall get_RemoteSystem(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RemoteSystem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IRemoteSystemWatcher> : produce_base<D, Windows::System::RemoteSystems::IRemoteSystemWatcher>
{
    HRESULT __stdcall Start() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Stop() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RemoteSystemAdded(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RemoteSystemAdded(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemAddedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RemoteSystemAdded(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoteSystemAdded(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RemoteSystemUpdated(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RemoteSystemUpdated(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RemoteSystemUpdated(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoteSystemUpdated(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RemoteSystemRemoved(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RemoteSystemRemoved(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RemoteSystemRemoved(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoteSystemRemoved(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::System::RemoteSystems {

inline hstring KnownRemoteSystemCapabilities::AppService()
{
    return get_activation_factory<KnownRemoteSystemCapabilities, Windows::System::RemoteSystems::IKnownRemoteSystemCapabilitiesStatics>().AppService();
}

inline hstring KnownRemoteSystemCapabilities::LaunchUri()
{
    return get_activation_factory<KnownRemoteSystemCapabilities, Windows::System::RemoteSystems::IKnownRemoteSystemCapabilitiesStatics>().LaunchUri();
}

inline hstring KnownRemoteSystemCapabilities::RemoteSession()
{
    return get_activation_factory<KnownRemoteSystemCapabilities, Windows::System::RemoteSystems::IKnownRemoteSystemCapabilitiesStatics>().RemoteSession();
}

inline hstring KnownRemoteSystemCapabilities::SpatialEntity()
{
    return get_activation_factory<KnownRemoteSystemCapabilities, Windows::System::RemoteSystems::IKnownRemoteSystemCapabilitiesStatics>().SpatialEntity();
}

inline Windows::Foundation::IAsyncOperation<Windows::System::RemoteSystems::RemoteSystem> RemoteSystem::FindByHostNameAsync(Windows::Networking::HostName const& hostName)
{
    return get_activation_factory<RemoteSystem, Windows::System::RemoteSystems::IRemoteSystemStatics>().FindByHostNameAsync(hostName);
}

inline Windows::System::RemoteSystems::RemoteSystemWatcher RemoteSystem::CreateWatcher()
{
    return get_activation_factory<RemoteSystem, Windows::System::RemoteSystems::IRemoteSystemStatics>().CreateWatcher();
}

inline Windows::System::RemoteSystems::RemoteSystemWatcher RemoteSystem::CreateWatcher(param::iterable<Windows::System::RemoteSystems::IRemoteSystemFilter> const& filters)
{
    return get_activation_factory<RemoteSystem, Windows::System::RemoteSystems::IRemoteSystemStatics>().CreateWatcher(filters);
}

inline Windows::Foundation::IAsyncOperation<Windows::System::RemoteSystems::RemoteSystemAccessStatus> RemoteSystem::RequestAccessAsync()
{
    return get_activation_factory<RemoteSystem, Windows::System::RemoteSystems::IRemoteSystemStatics>().RequestAccessAsync();
}

inline bool RemoteSystem::IsAuthorizationKindEnabled(Windows::System::RemoteSystems::RemoteSystemAuthorizationKind const& kind)
{
    return get_activation_factory<RemoteSystem, Windows::System::RemoteSystems::IRemoteSystemStatics2>().IsAuthorizationKindEnabled(kind);
}

inline RemoteSystemAuthorizationKindFilter::RemoteSystemAuthorizationKindFilter(Windows::System::RemoteSystems::RemoteSystemAuthorizationKind const& remoteSystemAuthorizationKind) :
    RemoteSystemAuthorizationKindFilter(get_activation_factory<RemoteSystemAuthorizationKindFilter, Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilterFactory>().Create(remoteSystemAuthorizationKind))
{}

inline RemoteSystemConnectionRequest::RemoteSystemConnectionRequest(Windows::System::RemoteSystems::RemoteSystem const& remoteSystem) :
    RemoteSystemConnectionRequest(get_activation_factory<RemoteSystemConnectionRequest, Windows::System::RemoteSystems::IRemoteSystemConnectionRequestFactory>().Create(remoteSystem))
{}

inline RemoteSystemDiscoveryTypeFilter::RemoteSystemDiscoveryTypeFilter(Windows::System::RemoteSystems::RemoteSystemDiscoveryType const& discoveryType) :
    RemoteSystemDiscoveryTypeFilter(get_activation_factory<RemoteSystemDiscoveryTypeFilter, Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilterFactory>().Create(discoveryType))
{}

inline RemoteSystemKindFilter::RemoteSystemKindFilter(param::iterable<hstring> const& remoteSystemKinds) :
    RemoteSystemKindFilter(get_activation_factory<RemoteSystemKindFilter, Windows::System::RemoteSystems::IRemoteSystemKindFilterFactory>().Create(remoteSystemKinds))
{}

inline hstring RemoteSystemKinds::Phone()
{
    return get_activation_factory<RemoteSystemKinds, Windows::System::RemoteSystems::IRemoteSystemKindStatics>().Phone();
}

inline hstring RemoteSystemKinds::Hub()
{
    return get_activation_factory<RemoteSystemKinds, Windows::System::RemoteSystems::IRemoteSystemKindStatics>().Hub();
}

inline hstring RemoteSystemKinds::Holographic()
{
    return get_activation_factory<RemoteSystemKinds, Windows::System::RemoteSystems::IRemoteSystemKindStatics>().Holographic();
}

inline hstring RemoteSystemKinds::Desktop()
{
    return get_activation_factory<RemoteSystemKinds, Windows::System::RemoteSystems::IRemoteSystemKindStatics>().Desktop();
}

inline hstring RemoteSystemKinds::Xbox()
{
    return get_activation_factory<RemoteSystemKinds, Windows::System::RemoteSystems::IRemoteSystemKindStatics>().Xbox();
}

inline Windows::System::RemoteSystems::RemoteSystemSessionWatcher RemoteSystemSession::CreateWatcher()
{
    return get_activation_factory<RemoteSystemSession, Windows::System::RemoteSystems::IRemoteSystemSessionStatics>().CreateWatcher();
}

inline RemoteSystemSessionController::RemoteSystemSessionController(param::hstring const& displayName) :
    RemoteSystemSessionController(get_activation_factory<RemoteSystemSessionController, Windows::System::RemoteSystems::IRemoteSystemSessionControllerFactory>().CreateController(displayName))
{}

inline RemoteSystemSessionController::RemoteSystemSessionController(param::hstring const& displayName, Windows::System::RemoteSystems::RemoteSystemSessionOptions const& options) :
    RemoteSystemSessionController(get_activation_factory<RemoteSystemSessionController, Windows::System::RemoteSystems::IRemoteSystemSessionControllerFactory>().CreateController(displayName, options))
{}

inline RemoteSystemSessionInvitationListener::RemoteSystemSessionInvitationListener() :
    RemoteSystemSessionInvitationListener(activate_instance<RemoteSystemSessionInvitationListener>())
{}

inline RemoteSystemSessionMessageChannel::RemoteSystemSessionMessageChannel(Windows::System::RemoteSystems::RemoteSystemSession const& session, param::hstring const& channelName) :
    RemoteSystemSessionMessageChannel(get_activation_factory<RemoteSystemSessionMessageChannel, Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannelFactory>().Create(session, channelName))
{}

inline RemoteSystemSessionMessageChannel::RemoteSystemSessionMessageChannel(Windows::System::RemoteSystems::RemoteSystemSession const& session, param::hstring const& channelName, Windows::System::RemoteSystems::RemoteSystemSessionMessageChannelReliability const& reliability) :
    RemoteSystemSessionMessageChannel(get_activation_factory<RemoteSystemSessionMessageChannel, Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannelFactory>().Create(session, channelName, reliability))
{}

inline RemoteSystemSessionOptions::RemoteSystemSessionOptions() :
    RemoteSystemSessionOptions(activate_instance<RemoteSystemSessionOptions>())
{}

inline RemoteSystemStatusTypeFilter::RemoteSystemStatusTypeFilter(Windows::System::RemoteSystems::RemoteSystemStatusType const& remoteSystemStatusType) :
    RemoteSystemStatusTypeFilter(get_activation_factory<RemoteSystemStatusTypeFilter, Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilterFactory>().Create(remoteSystemStatusType))
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::System::RemoteSystems::IKnownRemoteSystemCapabilitiesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IKnownRemoteSystemCapabilitiesStatics> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystem> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystem> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystem2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystem2> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemAddedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemAddedEventArgs> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilter> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilterFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilterFactory> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequest> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequestFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequestFactory> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilter> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilterFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilterFactory> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemFilter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemFilter> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemKindFilter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemKindFilter> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemKindFilterFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemKindFilterFactory> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemKindStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemKindStatics> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemRemovedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemRemovedEventArgs> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemSession> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionAddedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionAddedEventArgs> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionController> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionController> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionControllerFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionControllerFactory> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionCreationResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionCreationResult> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionDisconnectedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionDisconnectedEventArgs> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInfo> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInvitation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInvitation> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInvitationReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInvitationReceivedEventArgs> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequest> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequestedEventArgs> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionJoinResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionJoinResult> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannelFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannelFactory> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionOptions> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipant> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipant> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantAddedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantAddedEventArgs> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantRemovedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantRemovedEventArgs> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionRemovedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionRemovedEventArgs> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionStatics> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionUpdatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionUpdatedEventArgs> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionValueSetReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionValueSetReceivedEventArgs> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionWatcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionWatcher> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemStatics> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemStatics2> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilter> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilterFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilterFactory> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemUpdatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemUpdatedEventArgs> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::IRemoteSystemWatcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::IRemoteSystemWatcher> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::KnownRemoteSystemCapabilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::KnownRemoteSystemCapabilities> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::RemoteSystem> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::RemoteSystem> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::RemoteSystemAddedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::RemoteSystemAddedEventArgs> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::RemoteSystemAuthorizationKindFilter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::RemoteSystemAuthorizationKindFilter> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::RemoteSystemConnectionRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::RemoteSystemConnectionRequest> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::RemoteSystemDiscoveryTypeFilter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::RemoteSystemDiscoveryTypeFilter> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::RemoteSystemKindFilter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::RemoteSystemKindFilter> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::RemoteSystemKinds> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::RemoteSystemKinds> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::RemoteSystemSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::RemoteSystemSession> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionController> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::RemoteSystemSessionController> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionCreationResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::RemoteSystemSessionCreationResult> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInfo> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInvitation> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInvitation> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionJoinRequest> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::RemoteSystemSessionJoinRequest> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionJoinResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::RemoteSystemSessionJoinResult> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionOptions> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::RemoteSystemSessionOptions> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipant> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipant> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionWatcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::RemoteSystemSessionWatcher> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::RemoteSystemStatusTypeFilter> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::RemoteSystemStatusTypeFilter> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs> {};

template<> struct hash<winrt::Windows::System::RemoteSystems::RemoteSystemWatcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::System::RemoteSystems::RemoteSystemWatcher> {};

}

WINRT_WARNING_POP
