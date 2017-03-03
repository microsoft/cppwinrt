// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Networking.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.System.RemoteSystems.3.h"
#include "Windows.System.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::System::RemoteSystems::IKnownRemoteSystemCapabilitiesStatics> : produce_base<D, Windows::System::RemoteSystems::IKnownRemoteSystemCapabilitiesStatics>
{
    HRESULT __stdcall get_AppService(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_LaunchUri(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_RemoteSession(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_SpatialEntity(impl::abi_arg_out<hstring> value) noexcept override
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
    HRESULT __stdcall get_DisplayName(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_Id(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_Kind(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_Status(Windows::System::RemoteSystems::RemoteSystemStatus * value) noexcept override
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

    HRESULT __stdcall get_IsAvailableByProximity(bool * value) noexcept override
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
    HRESULT __stdcall get_IsAvailableBySpatialProximity(bool * value) noexcept override
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

    HRESULT __stdcall abi_GetCapabilitySupportedAsync(impl::abi_arg_in<hstring> capabilityName, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetCapabilitySupportedAsync(*reinterpret_cast<const hstring *>(&capabilityName)));
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
    HRESULT __stdcall get_RemoteSystem(impl::abi_arg_out<Windows::System::RemoteSystems::IRemoteSystem> value) noexcept override
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
    HRESULT __stdcall get_RemoteSystemAuthorizationKind(Windows::System::RemoteSystems::RemoteSystemAuthorizationKind * value) noexcept override
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
    HRESULT __stdcall abi_Create(Windows::System::RemoteSystems::RemoteSystemAuthorizationKind remoteSystemAuthorizationKind, impl::abi_arg_out<Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilter> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(remoteSystemAuthorizationKind));
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
    HRESULT __stdcall get_RemoteSystem(impl::abi_arg_out<Windows::System::RemoteSystems::IRemoteSystem> value) noexcept override
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
    HRESULT __stdcall abi_Create(impl::abi_arg_in<Windows::System::RemoteSystems::IRemoteSystem> remoteSystem, impl::abi_arg_out<Windows::System::RemoteSystems::IRemoteSystemConnectionRequest> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<const Windows::System::RemoteSystems::RemoteSystem *>(&remoteSystem)));
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
    HRESULT __stdcall get_RemoteSystemDiscoveryType(Windows::System::RemoteSystems::RemoteSystemDiscoveryType * value) noexcept override
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
    HRESULT __stdcall abi_Create(Windows::System::RemoteSystems::RemoteSystemDiscoveryType discoveryType, impl::abi_arg_out<Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilter> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(discoveryType));
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
    HRESULT __stdcall get_RemoteSystemKinds(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
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
    HRESULT __stdcall abi_Create(impl::abi_arg_in<Windows::Foundation::Collections::IIterable<hstring>> remoteSystemKinds, impl::abi_arg_out<Windows::System::RemoteSystems::IRemoteSystemKindFilter> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<hstring> *>(&remoteSystemKinds)));
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
    HRESULT __stdcall get_Phone(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_Hub(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_Holographic(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_Desktop(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_Xbox(impl::abi_arg_out<hstring> value) noexcept override
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
    HRESULT __stdcall get_RemoteSystemId(impl::abi_arg_out<hstring> value) noexcept override
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
    HRESULT __stdcall get_Id(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_DisplayName(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_ControllerDisplayName(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall add_Disconnected(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSession, Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Disconnected(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSession, Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Disconnected(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Disconnected(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateParticipantWatcher(impl::abi_arg_out<Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher> result) noexcept override
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

    HRESULT __stdcall abi_SendInvitationAsync(impl::abi_arg_in<Windows::System::RemoteSystems::IRemoteSystem> invitee, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SendInvitationAsync(*reinterpret_cast<const Windows::System::RemoteSystems::RemoteSystem *>(&invitee)));
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
    HRESULT __stdcall get_SessionInfo(impl::abi_arg_out<Windows::System::RemoteSystems::IRemoteSystemSessionInfo> value) noexcept override
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
    HRESULT __stdcall add_JoinRequested(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionController, Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().JoinRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionController, Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_JoinRequested(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().JoinRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveParticipantAsync(impl::abi_arg_in<Windows::System::RemoteSystems::IRemoteSystemSessionParticipant> pParticipant, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().RemoveParticipantAsync(*reinterpret_cast<const Windows::System::RemoteSystems::RemoteSystemSessionParticipant *>(&pParticipant)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateSessionAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::System::RemoteSystems::RemoteSystemSessionCreationResult>> operation) noexcept override
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
    HRESULT __stdcall abi_CreateController(impl::abi_arg_in<hstring> displayName, impl::abi_arg_out<Windows::System::RemoteSystems::IRemoteSystemSessionController> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateController(*reinterpret_cast<const hstring *>(&displayName)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateControllerWithSessionOptions(impl::abi_arg_in<hstring> displayName, impl::abi_arg_in<Windows::System::RemoteSystems::IRemoteSystemSessionOptions> options, impl::abi_arg_out<Windows::System::RemoteSystems::IRemoteSystemSessionController> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateController(*reinterpret_cast<const hstring *>(&displayName), *reinterpret_cast<const Windows::System::RemoteSystems::RemoteSystemSessionOptions *>(&options)));
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
    HRESULT __stdcall get_Status(Windows::System::RemoteSystems::RemoteSystemSessionCreationStatus * value) noexcept override
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

    HRESULT __stdcall get_Session(impl::abi_arg_out<Windows::System::RemoteSystems::IRemoteSystemSession> value) noexcept override
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
    HRESULT __stdcall get_Reason(Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedReason * value) noexcept override
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
    HRESULT __stdcall get_DisplayName(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall get_ControllerDisplayName(impl::abi_arg_out<hstring> value) noexcept override
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

    HRESULT __stdcall abi_JoinAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::System::RemoteSystems::RemoteSystemSessionJoinResult>> operation) noexcept override
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
    HRESULT __stdcall get_Sender(impl::abi_arg_out<Windows::System::RemoteSystems::IRemoteSystem> value) noexcept override
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

    HRESULT __stdcall get_SessionInfo(impl::abi_arg_out<Windows::System::RemoteSystems::IRemoteSystemSessionInfo> value) noexcept override
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
    HRESULT __stdcall add_InvitationReceived(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener, Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().InvitationReceived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener, Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_InvitationReceived(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InvitationReceived(token);
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
    HRESULT __stdcall get_Invitation(impl::abi_arg_out<Windows::System::RemoteSystems::IRemoteSystemSessionInvitation> value) noexcept override
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
    HRESULT __stdcall get_Participant(impl::abi_arg_out<Windows::System::RemoteSystems::IRemoteSystemSessionParticipant> value) noexcept override
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

    HRESULT __stdcall abi_Accept() noexcept override
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
    HRESULT __stdcall get_JoinRequest(impl::abi_arg_out<Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequest> value) noexcept override
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

    HRESULT __stdcall abi_GetDeferral(impl::abi_arg_out<Windows::Foundation::IDeferral> value) noexcept override
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
    HRESULT __stdcall get_Status(Windows::System::RemoteSystems::RemoteSystemSessionJoinStatus * value) noexcept override
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

    HRESULT __stdcall get_Session(impl::abi_arg_out<Windows::System::RemoteSystems::IRemoteSystemSession> value) noexcept override
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
    HRESULT __stdcall get_Session(impl::abi_arg_out<Windows::System::RemoteSystems::IRemoteSystemSession> value) noexcept override
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

    HRESULT __stdcall abi_BroadcastValueSetAsync(impl::abi_arg_in<Windows::Foundation::Collections::IPropertySet> messageData, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().BroadcastValueSetAsync(*reinterpret_cast<const Windows::Foundation::Collections::ValueSet *>(&messageData)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SendValueSetAsync(impl::abi_arg_in<Windows::Foundation::Collections::IPropertySet> messageData, impl::abi_arg_in<Windows::System::RemoteSystems::IRemoteSystemSessionParticipant> participant, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SendValueSetAsync(*reinterpret_cast<const Windows::Foundation::Collections::ValueSet *>(&messageData), *reinterpret_cast<const Windows::System::RemoteSystems::RemoteSystemSessionParticipant *>(&participant)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SendValueSetToParticipantsAsync(impl::abi_arg_in<Windows::Foundation::Collections::IPropertySet> messageData, impl::abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::System::RemoteSystems::RemoteSystemSessionParticipant>> participants, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<bool>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SendValueSetToParticipantsAsync(*reinterpret_cast<const Windows::Foundation::Collections::ValueSet *>(&messageData), *reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::System::RemoteSystems::RemoteSystemSessionParticipant> *>(&participants)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ValueSetReceived(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel, Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ValueSetReceived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel, Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ValueSetReceived(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ValueSetReceived(token);
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
    HRESULT __stdcall abi_Create(impl::abi_arg_in<Windows::System::RemoteSystems::IRemoteSystemSession> session, impl::abi_arg_in<hstring> channelName, impl::abi_arg_out<Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<const Windows::System::RemoteSystems::RemoteSystemSession *>(&session), *reinterpret_cast<const hstring *>(&channelName)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWithReliability(impl::abi_arg_in<Windows::System::RemoteSystems::IRemoteSystemSession> session, impl::abi_arg_in<hstring> channelName, Windows::System::RemoteSystems::RemoteSystemSessionMessageChannelReliability reliability, impl::abi_arg_out<Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(*reinterpret_cast<const Windows::System::RemoteSystems::RemoteSystemSession *>(&session), *reinterpret_cast<const hstring *>(&channelName), reliability));
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
    HRESULT __stdcall get_IsInviteOnly(bool * value) noexcept override
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
    HRESULT __stdcall get_RemoteSystem(impl::abi_arg_out<Windows::System::RemoteSystems::IRemoteSystem> value) noexcept override
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

    HRESULT __stdcall abi_GetHostNames(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName>> result) noexcept override
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
    HRESULT __stdcall get_Participant(impl::abi_arg_out<Windows::System::RemoteSystems::IRemoteSystemSessionParticipant> value) noexcept override
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
    HRESULT __stdcall get_Participant(impl::abi_arg_out<Windows::System::RemoteSystems::IRemoteSystemSessionParticipant> value) noexcept override
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
    HRESULT __stdcall abi_Start() noexcept override
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

    HRESULT __stdcall abi_Stop() noexcept override
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

    HRESULT __stdcall get_Status(Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcherStatus * value) noexcept override
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

    HRESULT __stdcall add_Added(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Added(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Added(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Added(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Removed(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Removed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Removed(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Removed(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_EnumerationCompleted(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::Foundation::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().EnumerationCompleted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::Foundation::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_EnumerationCompleted(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnumerationCompleted(token);
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
    HRESULT __stdcall get_SessionInfo(impl::abi_arg_out<Windows::System::RemoteSystems::IRemoteSystemSessionInfo> value) noexcept override
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
    HRESULT __stdcall abi_CreateWatcher(impl::abi_arg_out<Windows::System::RemoteSystems::IRemoteSystemSessionWatcher> result) noexcept override
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
    HRESULT __stdcall get_SessionInfo(impl::abi_arg_out<Windows::System::RemoteSystems::IRemoteSystemSessionInfo> value) noexcept override
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
    HRESULT __stdcall get_Sender(impl::abi_arg_out<Windows::System::RemoteSystems::IRemoteSystemSessionParticipant> value) noexcept override
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

    HRESULT __stdcall get_Message(impl::abi_arg_out<Windows::Foundation::Collections::IPropertySet> value) noexcept override
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
    HRESULT __stdcall abi_Start() noexcept override
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

    HRESULT __stdcall abi_Stop() noexcept override
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

    HRESULT __stdcall get_Status(Windows::System::RemoteSystems::RemoteSystemSessionWatcherStatus * value) noexcept override
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

    HRESULT __stdcall add_Added(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Added(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Added(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Added(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Updated(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Updated(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Updated(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Updated(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Removed(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Removed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Removed(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Removed(token);
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
    HRESULT __stdcall abi_FindByHostNameAsync(impl::abi_arg_in<Windows::Networking::IHostName> hostName, impl::abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::System::RemoteSystems::RemoteSystem>> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().FindByHostNameAsync(*reinterpret_cast<const Windows::Networking::HostName *>(&hostName)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWatcher(impl::abi_arg_out<Windows::System::RemoteSystems::IRemoteSystemWatcher> result) noexcept override
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

    HRESULT __stdcall abi_CreateWatcherWithFilters(impl::abi_arg_in<Windows::Foundation::Collections::IIterable<Windows::System::RemoteSystems::IRemoteSystemFilter>> filters, impl::abi_arg_out<Windows::System::RemoteSystems::IRemoteSystemWatcher> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CreateWatcher(*reinterpret_cast<const Windows::Foundation::Collections::IIterable<Windows::System::RemoteSystems::IRemoteSystemFilter> *>(&filters)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestAccessAsync(impl::abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::System::RemoteSystems::RemoteSystemAccessStatus>> operation) noexcept override
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
    HRESULT __stdcall abi_IsAuthorizationKindEnabled(Windows::System::RemoteSystems::RemoteSystemAuthorizationKind kind, bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsAuthorizationKindEnabled(kind));
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
    HRESULT __stdcall get_RemoteSystemStatusType(Windows::System::RemoteSystems::RemoteSystemStatusType * value) noexcept override
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
    HRESULT __stdcall abi_Create(Windows::System::RemoteSystems::RemoteSystemStatusType remoteSystemStatusType, impl::abi_arg_out<Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilter> result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().Create(remoteSystemStatusType));
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
    HRESULT __stdcall get_RemoteSystem(impl::abi_arg_out<Windows::System::RemoteSystems::IRemoteSystem> value) noexcept override
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
    HRESULT __stdcall abi_Start() noexcept override
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

    HRESULT __stdcall abi_Stop() noexcept override
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

    HRESULT __stdcall add_RemoteSystemAdded(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemAddedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RemoteSystemAdded(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemAddedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RemoteSystemAdded(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoteSystemAdded(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RemoteSystemUpdated(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RemoteSystemUpdated(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RemoteSystemUpdated(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoteSystemUpdated(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_RemoteSystemRemoved(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().RemoteSystemRemoved(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_RemoteSystemRemoved(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoteSystemRemoved(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::System::RemoteSystems {

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::RemoteSystems::RemoteSystem> impl_IRemoteSystemStatics<D>::FindByHostNameAsync(const Windows::Networking::HostName & hostName) const
{
    Windows::Foundation::IAsyncOperation<Windows::System::RemoteSystems::RemoteSystem> operation;
    check_hresult(WINRT_SHIM(IRemoteSystemStatics)->abi_FindByHostNameAsync(get_abi(hostName), put_abi(operation)));
    return operation;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemWatcher impl_IRemoteSystemStatics<D>::CreateWatcher() const
{
    Windows::System::RemoteSystems::RemoteSystemWatcher result { nullptr };
    check_hresult(WINRT_SHIM(IRemoteSystemStatics)->abi_CreateWatcher(put_abi(result)));
    return result;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemWatcher impl_IRemoteSystemStatics<D>::CreateWatcher(iterable<Windows::System::RemoteSystems::IRemoteSystemFilter> filters) const
{
    Windows::System::RemoteSystems::RemoteSystemWatcher result { nullptr };
    check_hresult(WINRT_SHIM(IRemoteSystemStatics)->abi_CreateWatcherWithFilters(get_abi(filters), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::System::RemoteSystems::RemoteSystemAccessStatus> impl_IRemoteSystemStatics<D>::RequestAccessAsync() const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::System::RemoteSystems::RemoteSystemAccessStatus> operation;
    check_hresult(WINRT_SHIM(IRemoteSystemStatics)->abi_RequestAccessAsync(put_abi(operation)));
    return operation;
}

template <typename D> bool impl_IRemoteSystemStatics2<D>::IsAuthorizationKindEnabled(Windows::System::RemoteSystems::RemoteSystemAuthorizationKind kind) const
{
    bool value {};
    check_hresult(WINRT_SHIM(IRemoteSystemStatics2)->abi_IsAuthorizationKindEnabled(kind, &value));
    return value;
}

template <typename D> hstring impl_IRemoteSystem<D>::DisplayName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IRemoteSystem)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IRemoteSystem<D>::Id() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IRemoteSystem)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IRemoteSystem<D>::Kind() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IRemoteSystem)->get_Kind(put_abi(value)));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemStatus impl_IRemoteSystem<D>::Status() const
{
    Windows::System::RemoteSystems::RemoteSystemStatus value {};
    check_hresult(WINRT_SHIM(IRemoteSystem)->get_Status(&value));
    return value;
}

template <typename D> bool impl_IRemoteSystem<D>::IsAvailableByProximity() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IRemoteSystem)->get_IsAvailableByProximity(&value));
    return value;
}

template <typename D> bool impl_IRemoteSystem2<D>::IsAvailableBySpatialProximity() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IRemoteSystem2)->get_IsAvailableBySpatialProximity(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IRemoteSystem2<D>::GetCapabilitySupportedAsync(hstring_view capabilityName) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(WINRT_SHIM(IRemoteSystem2)->abi_GetCapabilitySupportedAsync(get_abi(capabilityName), put_abi(operation)));
    return operation;
}

template <typename D> hstring impl_IKnownRemoteSystemCapabilitiesStatics<D>::AppService() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IKnownRemoteSystemCapabilitiesStatics)->get_AppService(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IKnownRemoteSystemCapabilitiesStatics<D>::LaunchUri() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IKnownRemoteSystemCapabilitiesStatics)->get_LaunchUri(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IKnownRemoteSystemCapabilitiesStatics<D>::RemoteSession() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IKnownRemoteSystemCapabilitiesStatics)->get_RemoteSession(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IKnownRemoteSystemCapabilitiesStatics<D>::SpatialEntity() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IKnownRemoteSystemCapabilitiesStatics)->get_SpatialEntity(put_abi(value)));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemAuthorizationKindFilter impl_IRemoteSystemAuthorizationKindFilterFactory<D>::Create(Windows::System::RemoteSystems::RemoteSystemAuthorizationKind remoteSystemAuthorizationKind) const
{
    Windows::System::RemoteSystems::RemoteSystemAuthorizationKindFilter result { nullptr };
    check_hresult(WINRT_SHIM(IRemoteSystemAuthorizationKindFilterFactory)->abi_Create(remoteSystemAuthorizationKind, put_abi(result)));
    return result;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemAuthorizationKind impl_IRemoteSystemAuthorizationKindFilter<D>::RemoteSystemAuthorizationKind() const
{
    Windows::System::RemoteSystems::RemoteSystemAuthorizationKind value {};
    check_hresult(WINRT_SHIM(IRemoteSystemAuthorizationKindFilter)->get_RemoteSystemAuthorizationKind(&value));
    return value;
}

template <typename D> void impl_IRemoteSystemWatcher<D>::Start() const
{
    check_hresult(WINRT_SHIM(IRemoteSystemWatcher)->abi_Start());
}

template <typename D> void impl_IRemoteSystemWatcher<D>::Stop() const
{
    check_hresult(WINRT_SHIM(IRemoteSystemWatcher)->abi_Stop());
}

template <typename D> event_token impl_IRemoteSystemWatcher<D>::RemoteSystemAdded(const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemAddedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IRemoteSystemWatcher)->add_RemoteSystemAdded(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IRemoteSystemWatcher> impl_IRemoteSystemWatcher<D>::RemoteSystemAdded(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemAddedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IRemoteSystemWatcher>(this, &ABI::Windows::System::RemoteSystems::IRemoteSystemWatcher::remove_RemoteSystemAdded, RemoteSystemAdded(handler));
}

template <typename D> void impl_IRemoteSystemWatcher<D>::RemoteSystemAdded(event_token token) const
{
    check_hresult(WINRT_SHIM(IRemoteSystemWatcher)->remove_RemoteSystemAdded(token));
}

template <typename D> event_token impl_IRemoteSystemWatcher<D>::RemoteSystemUpdated(const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IRemoteSystemWatcher)->add_RemoteSystemUpdated(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IRemoteSystemWatcher> impl_IRemoteSystemWatcher<D>::RemoteSystemUpdated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IRemoteSystemWatcher>(this, &ABI::Windows::System::RemoteSystems::IRemoteSystemWatcher::remove_RemoteSystemUpdated, RemoteSystemUpdated(handler));
}

template <typename D> void impl_IRemoteSystemWatcher<D>::RemoteSystemUpdated(event_token token) const
{
    check_hresult(WINRT_SHIM(IRemoteSystemWatcher)->remove_RemoteSystemUpdated(token));
}

template <typename D> event_token impl_IRemoteSystemWatcher<D>::RemoteSystemRemoved(const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IRemoteSystemWatcher)->add_RemoteSystemRemoved(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IRemoteSystemWatcher> impl_IRemoteSystemWatcher<D>::RemoteSystemRemoved(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IRemoteSystemWatcher>(this, &ABI::Windows::System::RemoteSystems::IRemoteSystemWatcher::remove_RemoteSystemRemoved, RemoteSystemRemoved(handler));
}

template <typename D> void impl_IRemoteSystemWatcher<D>::RemoteSystemRemoved(event_token token) const
{
    check_hresult(WINRT_SHIM(IRemoteSystemWatcher)->remove_RemoteSystemRemoved(token));
}

template <typename D> Windows::System::RemoteSystems::RemoteSystem impl_IRemoteSystemAddedEventArgs<D>::RemoteSystem() const
{
    Windows::System::RemoteSystems::RemoteSystem value { nullptr };
    check_hresult(WINRT_SHIM(IRemoteSystemAddedEventArgs)->get_RemoteSystem(put_abi(value)));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystem impl_IRemoteSystemUpdatedEventArgs<D>::RemoteSystem() const
{
    Windows::System::RemoteSystems::RemoteSystem value { nullptr };
    check_hresult(WINRT_SHIM(IRemoteSystemUpdatedEventArgs)->get_RemoteSystem(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IRemoteSystemRemovedEventArgs<D>::RemoteSystemId() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IRemoteSystemRemovedEventArgs)->get_RemoteSystemId(put_abi(value)));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemConnectionRequest impl_IRemoteSystemConnectionRequestFactory<D>::Create(const Windows::System::RemoteSystems::RemoteSystem & remoteSystem) const
{
    Windows::System::RemoteSystems::RemoteSystemConnectionRequest result { nullptr };
    check_hresult(WINRT_SHIM(IRemoteSystemConnectionRequestFactory)->abi_Create(get_abi(remoteSystem), put_abi(result)));
    return result;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystem impl_IRemoteSystemConnectionRequest<D>::RemoteSystem() const
{
    Windows::System::RemoteSystems::RemoteSystem value { nullptr };
    check_hresult(WINRT_SHIM(IRemoteSystemConnectionRequest)->get_RemoteSystem(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IRemoteSystemKindStatics<D>::Phone() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IRemoteSystemKindStatics)->get_Phone(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IRemoteSystemKindStatics<D>::Hub() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IRemoteSystemKindStatics)->get_Hub(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IRemoteSystemKindStatics<D>::Holographic() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IRemoteSystemKindStatics)->get_Holographic(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IRemoteSystemKindStatics<D>::Desktop() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IRemoteSystemKindStatics)->get_Desktop(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IRemoteSystemKindStatics<D>::Xbox() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IRemoteSystemKindStatics)->get_Xbox(put_abi(value)));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemKindFilter impl_IRemoteSystemKindFilterFactory<D>::Create(iterable<hstring> remoteSystemKinds) const
{
    Windows::System::RemoteSystems::RemoteSystemKindFilter result { nullptr };
    check_hresult(WINRT_SHIM(IRemoteSystemKindFilterFactory)->abi_Create(get_abi(remoteSystemKinds), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IRemoteSystemKindFilter<D>::RemoteSystemKinds() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(WINRT_SHIM(IRemoteSystemKindFilter)->get_RemoteSystemKinds(put_abi(value)));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemDiscoveryTypeFilter impl_IRemoteSystemDiscoveryTypeFilterFactory<D>::Create(Windows::System::RemoteSystems::RemoteSystemDiscoveryType discoveryType) const
{
    Windows::System::RemoteSystems::RemoteSystemDiscoveryTypeFilter result { nullptr };
    check_hresult(WINRT_SHIM(IRemoteSystemDiscoveryTypeFilterFactory)->abi_Create(discoveryType, put_abi(result)));
    return result;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemDiscoveryType impl_IRemoteSystemDiscoveryTypeFilter<D>::RemoteSystemDiscoveryType() const
{
    Windows::System::RemoteSystems::RemoteSystemDiscoveryType value {};
    check_hresult(WINRT_SHIM(IRemoteSystemDiscoveryTypeFilter)->get_RemoteSystemDiscoveryType(&value));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemStatusTypeFilter impl_IRemoteSystemStatusTypeFilterFactory<D>::Create(Windows::System::RemoteSystems::RemoteSystemStatusType remoteSystemStatusType) const
{
    Windows::System::RemoteSystems::RemoteSystemStatusTypeFilter result { nullptr };
    check_hresult(WINRT_SHIM(IRemoteSystemStatusTypeFilterFactory)->abi_Create(remoteSystemStatusType, put_abi(result)));
    return result;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemStatusType impl_IRemoteSystemStatusTypeFilter<D>::RemoteSystemStatusType() const
{
    Windows::System::RemoteSystems::RemoteSystemStatusType value {};
    check_hresult(WINRT_SHIM(IRemoteSystemStatusTypeFilter)->get_RemoteSystemStatusType(&value));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionJoinStatus impl_IRemoteSystemSessionJoinResult<D>::Status() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionJoinStatus value {};
    check_hresult(WINRT_SHIM(IRemoteSystemSessionJoinResult)->get_Status(&value));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSession impl_IRemoteSystemSessionJoinResult<D>::Session() const
{
    Windows::System::RemoteSystems::RemoteSystemSession value { nullptr };
    check_hresult(WINRT_SHIM(IRemoteSystemSessionJoinResult)->get_Session(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IRemoteSystemSessionInfo<D>::DisplayName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IRemoteSystemSessionInfo)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IRemoteSystemSessionInfo<D>::ControllerDisplayName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IRemoteSystemSessionInfo)->get_ControllerDisplayName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::RemoteSystems::RemoteSystemSessionJoinResult> impl_IRemoteSystemSessionInfo<D>::JoinAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::System::RemoteSystems::RemoteSystemSessionJoinResult> operation;
    check_hresult(WINRT_SHIM(IRemoteSystemSessionInfo)->abi_JoinAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionInfo impl_IRemoteSystemSessionAddedEventArgs<D>::SessionInfo() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionInfo value { nullptr };
    check_hresult(WINRT_SHIM(IRemoteSystemSessionAddedEventArgs)->get_SessionInfo(put_abi(value)));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionInfo impl_IRemoteSystemSessionUpdatedEventArgs<D>::SessionInfo() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionInfo value { nullptr };
    check_hresult(WINRT_SHIM(IRemoteSystemSessionUpdatedEventArgs)->get_SessionInfo(put_abi(value)));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionInfo impl_IRemoteSystemSessionRemovedEventArgs<D>::SessionInfo() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionInfo value { nullptr };
    check_hresult(WINRT_SHIM(IRemoteSystemSessionRemovedEventArgs)->get_SessionInfo(put_abi(value)));
    return value;
}

template <typename D> void impl_IRemoteSystemSessionWatcher<D>::Start() const
{
    check_hresult(WINRT_SHIM(IRemoteSystemSessionWatcher)->abi_Start());
}

template <typename D> void impl_IRemoteSystemSessionWatcher<D>::Stop() const
{
    check_hresult(WINRT_SHIM(IRemoteSystemSessionWatcher)->abi_Stop());
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionWatcherStatus impl_IRemoteSystemSessionWatcher<D>::Status() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionWatcherStatus value {};
    check_hresult(WINRT_SHIM(IRemoteSystemSessionWatcher)->get_Status(&value));
    return value;
}

template <typename D> event_token impl_IRemoteSystemSessionWatcher<D>::Added(const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IRemoteSystemSessionWatcher)->add_Added(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IRemoteSystemSessionWatcher> impl_IRemoteSystemSessionWatcher<D>::Added(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IRemoteSystemSessionWatcher>(this, &ABI::Windows::System::RemoteSystems::IRemoteSystemSessionWatcher::remove_Added, Added(handler));
}

template <typename D> void impl_IRemoteSystemSessionWatcher<D>::Added(event_token token) const
{
    check_hresult(WINRT_SHIM(IRemoteSystemSessionWatcher)->remove_Added(token));
}

template <typename D> event_token impl_IRemoteSystemSessionWatcher<D>::Updated(const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IRemoteSystemSessionWatcher)->add_Updated(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IRemoteSystemSessionWatcher> impl_IRemoteSystemSessionWatcher<D>::Updated(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IRemoteSystemSessionWatcher>(this, &ABI::Windows::System::RemoteSystems::IRemoteSystemSessionWatcher::remove_Updated, Updated(handler));
}

template <typename D> void impl_IRemoteSystemSessionWatcher<D>::Updated(event_token token) const
{
    check_hresult(WINRT_SHIM(IRemoteSystemSessionWatcher)->remove_Updated(token));
}

template <typename D> event_token impl_IRemoteSystemSessionWatcher<D>::Removed(const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IRemoteSystemSessionWatcher)->add_Removed(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IRemoteSystemSessionWatcher> impl_IRemoteSystemSessionWatcher<D>::Removed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IRemoteSystemSessionWatcher>(this, &ABI::Windows::System::RemoteSystems::IRemoteSystemSessionWatcher::remove_Removed, Removed(handler));
}

template <typename D> void impl_IRemoteSystemSessionWatcher<D>::Removed(event_token token) const
{
    check_hresult(WINRT_SHIM(IRemoteSystemSessionWatcher)->remove_Removed(token));
}

template <typename D> Windows::System::RemoteSystems::RemoteSystem impl_IRemoteSystemSessionInvitation<D>::Sender() const
{
    Windows::System::RemoteSystems::RemoteSystem value { nullptr };
    check_hresult(WINRT_SHIM(IRemoteSystemSessionInvitation)->get_Sender(put_abi(value)));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionInfo impl_IRemoteSystemSessionInvitation<D>::SessionInfo() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionInfo value { nullptr };
    check_hresult(WINRT_SHIM(IRemoteSystemSessionInvitation)->get_SessionInfo(put_abi(value)));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionInvitation impl_IRemoteSystemSessionInvitationReceivedEventArgs<D>::Invitation() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionInvitation value { nullptr };
    check_hresult(WINRT_SHIM(IRemoteSystemSessionInvitationReceivedEventArgs)->get_Invitation(put_abi(value)));
    return value;
}

template <typename D> event_token impl_IRemoteSystemSessionInvitationListener<D>::InvitationReceived(const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener, Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IRemoteSystemSessionInvitationListener)->add_InvitationReceived(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IRemoteSystemSessionInvitationListener> impl_IRemoteSystemSessionInvitationListener<D>::InvitationReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener, Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IRemoteSystemSessionInvitationListener>(this, &ABI::Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener::remove_InvitationReceived, InvitationReceived(handler));
}

template <typename D> void impl_IRemoteSystemSessionInvitationListener<D>::InvitationReceived(event_token token) const
{
    check_hresult(WINRT_SHIM(IRemoteSystemSessionInvitationListener)->remove_InvitationReceived(token));
}

template <typename D> Windows::System::RemoteSystems::RemoteSystem impl_IRemoteSystemSessionParticipant<D>::RemoteSystem() const
{
    Windows::System::RemoteSystems::RemoteSystem value { nullptr };
    check_hresult(WINRT_SHIM(IRemoteSystemSessionParticipant)->get_RemoteSystem(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> impl_IRemoteSystemSessionParticipant<D>::GetHostNames() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> result;
    check_hresult(WINRT_SHIM(IRemoteSystemSessionParticipant)->abi_GetHostNames(put_abi(result)));
    return result;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionParticipant impl_IRemoteSystemSessionParticipantAddedEventArgs<D>::Participant() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionParticipant value { nullptr };
    check_hresult(WINRT_SHIM(IRemoteSystemSessionParticipantAddedEventArgs)->get_Participant(put_abi(value)));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionParticipant impl_IRemoteSystemSessionParticipantRemovedEventArgs<D>::Participant() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionParticipant value { nullptr };
    check_hresult(WINRT_SHIM(IRemoteSystemSessionParticipantRemovedEventArgs)->get_Participant(put_abi(value)));
    return value;
}

template <typename D> void impl_IRemoteSystemSessionParticipantWatcher<D>::Start() const
{
    check_hresult(WINRT_SHIM(IRemoteSystemSessionParticipantWatcher)->abi_Start());
}

template <typename D> void impl_IRemoteSystemSessionParticipantWatcher<D>::Stop() const
{
    check_hresult(WINRT_SHIM(IRemoteSystemSessionParticipantWatcher)->abi_Stop());
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcherStatus impl_IRemoteSystemSessionParticipantWatcher<D>::Status() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcherStatus value {};
    check_hresult(WINRT_SHIM(IRemoteSystemSessionParticipantWatcher)->get_Status(&value));
    return value;
}

template <typename D> event_token impl_IRemoteSystemSessionParticipantWatcher<D>::Added(const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IRemoteSystemSessionParticipantWatcher)->add_Added(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IRemoteSystemSessionParticipantWatcher> impl_IRemoteSystemSessionParticipantWatcher<D>::Added(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IRemoteSystemSessionParticipantWatcher>(this, &ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher::remove_Added, Added(handler));
}

template <typename D> void impl_IRemoteSystemSessionParticipantWatcher<D>::Added(event_token token) const
{
    check_hresult(WINRT_SHIM(IRemoteSystemSessionParticipantWatcher)->remove_Added(token));
}

template <typename D> event_token impl_IRemoteSystemSessionParticipantWatcher<D>::Removed(const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IRemoteSystemSessionParticipantWatcher)->add_Removed(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IRemoteSystemSessionParticipantWatcher> impl_IRemoteSystemSessionParticipantWatcher<D>::Removed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IRemoteSystemSessionParticipantWatcher>(this, &ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher::remove_Removed, Removed(handler));
}

template <typename D> void impl_IRemoteSystemSessionParticipantWatcher<D>::Removed(event_token token) const
{
    check_hresult(WINRT_SHIM(IRemoteSystemSessionParticipantWatcher)->remove_Removed(token));
}

template <typename D> event_token impl_IRemoteSystemSessionParticipantWatcher<D>::EnumerationCompleted(const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::Foundation::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IRemoteSystemSessionParticipantWatcher)->add_EnumerationCompleted(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IRemoteSystemSessionParticipantWatcher> impl_IRemoteSystemSessionParticipantWatcher<D>::EnumerationCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::Foundation::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IRemoteSystemSessionParticipantWatcher>(this, &ABI::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher::remove_EnumerationCompleted, EnumerationCompleted(handler));
}

template <typename D> void impl_IRemoteSystemSessionParticipantWatcher<D>::EnumerationCompleted(event_token token) const
{
    check_hresult(WINRT_SHIM(IRemoteSystemSessionParticipantWatcher)->remove_EnumerationCompleted(token));
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionParticipant impl_IRemoteSystemSessionJoinRequest<D>::Participant() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionParticipant value { nullptr };
    check_hresult(WINRT_SHIM(IRemoteSystemSessionJoinRequest)->get_Participant(put_abi(value)));
    return value;
}

template <typename D> void impl_IRemoteSystemSessionJoinRequest<D>::Accept() const
{
    check_hresult(WINRT_SHIM(IRemoteSystemSessionJoinRequest)->abi_Accept());
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionJoinRequest impl_IRemoteSystemSessionJoinRequestedEventArgs<D>::JoinRequest() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionJoinRequest value { nullptr };
    check_hresult(WINRT_SHIM(IRemoteSystemSessionJoinRequestedEventArgs)->get_JoinRequest(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Deferral impl_IRemoteSystemSessionJoinRequestedEventArgs<D>::GetDeferral() const
{
    Windows::Foundation::Deferral value { nullptr };
    check_hresult(WINRT_SHIM(IRemoteSystemSessionJoinRequestedEventArgs)->abi_GetDeferral(put_abi(value)));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionCreationStatus impl_IRemoteSystemSessionCreationResult<D>::Status() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionCreationStatus value {};
    check_hresult(WINRT_SHIM(IRemoteSystemSessionCreationResult)->get_Status(&value));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSession impl_IRemoteSystemSessionCreationResult<D>::Session() const
{
    Windows::System::RemoteSystems::RemoteSystemSession value { nullptr };
    check_hresult(WINRT_SHIM(IRemoteSystemSessionCreationResult)->get_Session(put_abi(value)));
    return value;
}

template <typename D> bool impl_IRemoteSystemSessionOptions<D>::IsInviteOnly() const
{
    bool value {};
    check_hresult(WINRT_SHIM(IRemoteSystemSessionOptions)->get_IsInviteOnly(&value));
    return value;
}

template <typename D> void impl_IRemoteSystemSessionOptions<D>::IsInviteOnly(bool value) const
{
    check_hresult(WINRT_SHIM(IRemoteSystemSessionOptions)->put_IsInviteOnly(value));
}

template <typename D> event_token impl_IRemoteSystemSessionController<D>::JoinRequested(const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionController, Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IRemoteSystemSessionController)->add_JoinRequested(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IRemoteSystemSessionController> impl_IRemoteSystemSessionController<D>::JoinRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionController, Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IRemoteSystemSessionController>(this, &ABI::Windows::System::RemoteSystems::IRemoteSystemSessionController::remove_JoinRequested, JoinRequested(handler));
}

template <typename D> void impl_IRemoteSystemSessionController<D>::JoinRequested(event_token token) const
{
    check_hresult(WINRT_SHIM(IRemoteSystemSessionController)->remove_JoinRequested(token));
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IRemoteSystemSessionController<D>::RemoveParticipantAsync(const Windows::System::RemoteSystems::RemoteSystemSessionParticipant & pParticipant) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(WINRT_SHIM(IRemoteSystemSessionController)->abi_RemoveParticipantAsync(get_abi(pParticipant), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::System::RemoteSystems::RemoteSystemSessionCreationResult> impl_IRemoteSystemSessionController<D>::CreateSessionAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::System::RemoteSystems::RemoteSystemSessionCreationResult> operation;
    check_hresult(WINRT_SHIM(IRemoteSystemSessionController)->abi_CreateSessionAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionController impl_IRemoteSystemSessionControllerFactory<D>::CreateController(hstring_view displayName) const
{
    Windows::System::RemoteSystems::RemoteSystemSessionController result { nullptr };
    check_hresult(WINRT_SHIM(IRemoteSystemSessionControllerFactory)->abi_CreateController(get_abi(displayName), put_abi(result)));
    return result;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionController impl_IRemoteSystemSessionControllerFactory<D>::CreateController(hstring_view displayName, const Windows::System::RemoteSystems::RemoteSystemSessionOptions & options) const
{
    Windows::System::RemoteSystems::RemoteSystemSessionController result { nullptr };
    check_hresult(WINRT_SHIM(IRemoteSystemSessionControllerFactory)->abi_CreateControllerWithSessionOptions(get_abi(displayName), get_abi(options), put_abi(result)));
    return result;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedReason impl_IRemoteSystemSessionDisconnectedEventArgs<D>::Reason() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedReason value {};
    check_hresult(WINRT_SHIM(IRemoteSystemSessionDisconnectedEventArgs)->get_Reason(&value));
    return value;
}

template <typename D> hstring impl_IRemoteSystemSession<D>::Id() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IRemoteSystemSession)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IRemoteSystemSession<D>::DisplayName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IRemoteSystemSession)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring impl_IRemoteSystemSession<D>::ControllerDisplayName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IRemoteSystemSession)->get_ControllerDisplayName(put_abi(value)));
    return value;
}

template <typename D> event_token impl_IRemoteSystemSession<D>::Disconnected(const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSession, Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IRemoteSystemSession)->add_Disconnected(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IRemoteSystemSession> impl_IRemoteSystemSession<D>::Disconnected(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSession, Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IRemoteSystemSession>(this, &ABI::Windows::System::RemoteSystems::IRemoteSystemSession::remove_Disconnected, Disconnected(handler));
}

template <typename D> void impl_IRemoteSystemSession<D>::Disconnected(event_token token) const
{
    check_hresult(WINRT_SHIM(IRemoteSystemSession)->remove_Disconnected(token));
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher impl_IRemoteSystemSession<D>::CreateParticipantWatcher() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher result { nullptr };
    check_hresult(WINRT_SHIM(IRemoteSystemSession)->abi_CreateParticipantWatcher(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IRemoteSystemSession<D>::SendInvitationAsync(const Windows::System::RemoteSystems::RemoteSystem & invitee) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(WINRT_SHIM(IRemoteSystemSession)->abi_SendInvitationAsync(get_abi(invitee), put_abi(operation)));
    return operation;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionWatcher impl_IRemoteSystemSessionStatics<D>::CreateWatcher() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionWatcher result { nullptr };
    check_hresult(WINRT_SHIM(IRemoteSystemSessionStatics)->abi_CreateWatcher(put_abi(result)));
    return result;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionParticipant impl_IRemoteSystemSessionValueSetReceivedEventArgs<D>::Sender() const
{
    Windows::System::RemoteSystems::RemoteSystemSessionParticipant value { nullptr };
    check_hresult(WINRT_SHIM(IRemoteSystemSessionValueSetReceivedEventArgs)->get_Sender(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::ValueSet impl_IRemoteSystemSessionValueSetReceivedEventArgs<D>::Message() const
{
    Windows::Foundation::Collections::ValueSet value { nullptr };
    check_hresult(WINRT_SHIM(IRemoteSystemSessionValueSetReceivedEventArgs)->get_Message(put_abi(value)));
    return value;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSession impl_IRemoteSystemSessionMessageChannel<D>::Session() const
{
    Windows::System::RemoteSystems::RemoteSystemSession value { nullptr };
    check_hresult(WINRT_SHIM(IRemoteSystemSessionMessageChannel)->get_Session(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IRemoteSystemSessionMessageChannel<D>::BroadcastValueSetAsync(const Windows::Foundation::Collections::ValueSet & messageData) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(WINRT_SHIM(IRemoteSystemSessionMessageChannel)->abi_BroadcastValueSetAsync(get_abi(messageData), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IRemoteSystemSessionMessageChannel<D>::SendValueSetAsync(const Windows::Foundation::Collections::ValueSet & messageData, const Windows::System::RemoteSystems::RemoteSystemSessionParticipant & participant) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(WINRT_SHIM(IRemoteSystemSessionMessageChannel)->abi_SendValueSetAsync(get_abi(messageData), get_abi(participant), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<bool> impl_IRemoteSystemSessionMessageChannel<D>::SendValueSetToParticipantsAsync(const Windows::Foundation::Collections::ValueSet & messageData, iterable<Windows::System::RemoteSystems::RemoteSystemSessionParticipant> participants) const
{
    Windows::Foundation::IAsyncOperation<bool> operation;
    check_hresult(WINRT_SHIM(IRemoteSystemSessionMessageChannel)->abi_SendValueSetToParticipantsAsync(get_abi(messageData), get_abi(participants), put_abi(operation)));
    return operation;
}

template <typename D> event_token impl_IRemoteSystemSessionMessageChannel<D>::ValueSetReceived(const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel, Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(IRemoteSystemSessionMessageChannel)->add_ValueSetReceived(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<IRemoteSystemSessionMessageChannel> impl_IRemoteSystemSessionMessageChannel<D>::ValueSetReceived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel, Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IRemoteSystemSessionMessageChannel>(this, &ABI::Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel::remove_ValueSetReceived, ValueSetReceived(handler));
}

template <typename D> void impl_IRemoteSystemSessionMessageChannel<D>::ValueSetReceived(event_token token) const
{
    check_hresult(WINRT_SHIM(IRemoteSystemSessionMessageChannel)->remove_ValueSetReceived(token));
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel impl_IRemoteSystemSessionMessageChannelFactory<D>::Create(const Windows::System::RemoteSystems::RemoteSystemSession & session, hstring_view channelName) const
{
    Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel result { nullptr };
    check_hresult(WINRT_SHIM(IRemoteSystemSessionMessageChannelFactory)->abi_Create(get_abi(session), get_abi(channelName), put_abi(result)));
    return result;
}

template <typename D> Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel impl_IRemoteSystemSessionMessageChannelFactory<D>::Create(const Windows::System::RemoteSystems::RemoteSystemSession & session, hstring_view channelName, Windows::System::RemoteSystems::RemoteSystemSessionMessageChannelReliability reliability) const
{
    Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel result { nullptr };
    check_hresult(WINRT_SHIM(IRemoteSystemSessionMessageChannelFactory)->abi_CreateWithReliability(get_abi(session), get_abi(channelName), reliability, put_abi(result)));
    return result;
}

inline hstring KnownRemoteSystemCapabilities::AppService()
{
    return get_activation_factory<KnownRemoteSystemCapabilities, IKnownRemoteSystemCapabilitiesStatics>().AppService();
}

inline hstring KnownRemoteSystemCapabilities::LaunchUri()
{
    return get_activation_factory<KnownRemoteSystemCapabilities, IKnownRemoteSystemCapabilitiesStatics>().LaunchUri();
}

inline hstring KnownRemoteSystemCapabilities::RemoteSession()
{
    return get_activation_factory<KnownRemoteSystemCapabilities, IKnownRemoteSystemCapabilitiesStatics>().RemoteSession();
}

inline hstring KnownRemoteSystemCapabilities::SpatialEntity()
{
    return get_activation_factory<KnownRemoteSystemCapabilities, IKnownRemoteSystemCapabilitiesStatics>().SpatialEntity();
}

inline Windows::Foundation::IAsyncOperation<Windows::System::RemoteSystems::RemoteSystem> RemoteSystem::FindByHostNameAsync(const Windows::Networking::HostName & hostName)
{
    return get_activation_factory<RemoteSystem, IRemoteSystemStatics>().FindByHostNameAsync(hostName);
}

inline Windows::System::RemoteSystems::RemoteSystemWatcher RemoteSystem::CreateWatcher()
{
    return get_activation_factory<RemoteSystem, IRemoteSystemStatics>().CreateWatcher();
}

inline Windows::System::RemoteSystems::RemoteSystemWatcher RemoteSystem::CreateWatcher(iterable<Windows::System::RemoteSystems::IRemoteSystemFilter> filters)
{
    return get_activation_factory<RemoteSystem, IRemoteSystemStatics>().CreateWatcher(filters);
}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::System::RemoteSystems::RemoteSystemAccessStatus> RemoteSystem::RequestAccessAsync()
{
    return get_activation_factory<RemoteSystem, IRemoteSystemStatics>().RequestAccessAsync();
}

inline bool RemoteSystem::IsAuthorizationKindEnabled(Windows::System::RemoteSystems::RemoteSystemAuthorizationKind kind)
{
    return get_activation_factory<RemoteSystem, IRemoteSystemStatics2>().IsAuthorizationKindEnabled(kind);
}

inline RemoteSystemAuthorizationKindFilter::RemoteSystemAuthorizationKindFilter(Windows::System::RemoteSystems::RemoteSystemAuthorizationKind remoteSystemAuthorizationKind) :
    RemoteSystemAuthorizationKindFilter(get_activation_factory<RemoteSystemAuthorizationKindFilter, IRemoteSystemAuthorizationKindFilterFactory>().Create(remoteSystemAuthorizationKind))
{}

inline RemoteSystemConnectionRequest::RemoteSystemConnectionRequest(const Windows::System::RemoteSystems::RemoteSystem & remoteSystem) :
    RemoteSystemConnectionRequest(get_activation_factory<RemoteSystemConnectionRequest, IRemoteSystemConnectionRequestFactory>().Create(remoteSystem))
{}

inline RemoteSystemDiscoveryTypeFilter::RemoteSystemDiscoveryTypeFilter(Windows::System::RemoteSystems::RemoteSystemDiscoveryType discoveryType) :
    RemoteSystemDiscoveryTypeFilter(get_activation_factory<RemoteSystemDiscoveryTypeFilter, IRemoteSystemDiscoveryTypeFilterFactory>().Create(discoveryType))
{}

inline RemoteSystemKindFilter::RemoteSystemKindFilter(iterable<hstring> remoteSystemKinds) :
    RemoteSystemKindFilter(get_activation_factory<RemoteSystemKindFilter, IRemoteSystemKindFilterFactory>().Create(remoteSystemKinds))
{}

inline hstring RemoteSystemKinds::Phone()
{
    return get_activation_factory<RemoteSystemKinds, IRemoteSystemKindStatics>().Phone();
}

inline hstring RemoteSystemKinds::Hub()
{
    return get_activation_factory<RemoteSystemKinds, IRemoteSystemKindStatics>().Hub();
}

inline hstring RemoteSystemKinds::Holographic()
{
    return get_activation_factory<RemoteSystemKinds, IRemoteSystemKindStatics>().Holographic();
}

inline hstring RemoteSystemKinds::Desktop()
{
    return get_activation_factory<RemoteSystemKinds, IRemoteSystemKindStatics>().Desktop();
}

inline hstring RemoteSystemKinds::Xbox()
{
    return get_activation_factory<RemoteSystemKinds, IRemoteSystemKindStatics>().Xbox();
}

inline Windows::System::RemoteSystems::RemoteSystemSessionWatcher RemoteSystemSession::CreateWatcher()
{
    return get_activation_factory<RemoteSystemSession, IRemoteSystemSessionStatics>().CreateWatcher();
}

inline RemoteSystemSessionController::RemoteSystemSessionController(hstring_view displayName) :
    RemoteSystemSessionController(get_activation_factory<RemoteSystemSessionController, IRemoteSystemSessionControllerFactory>().CreateController(displayName))
{}

inline RemoteSystemSessionController::RemoteSystemSessionController(hstring_view displayName, const Windows::System::RemoteSystems::RemoteSystemSessionOptions & options) :
    RemoteSystemSessionController(get_activation_factory<RemoteSystemSessionController, IRemoteSystemSessionControllerFactory>().CreateController(displayName, options))
{}

inline RemoteSystemSessionInvitationListener::RemoteSystemSessionInvitationListener() :
    RemoteSystemSessionInvitationListener(activate_instance<RemoteSystemSessionInvitationListener>())
{}

inline RemoteSystemSessionMessageChannel::RemoteSystemSessionMessageChannel(const Windows::System::RemoteSystems::RemoteSystemSession & session, hstring_view channelName) :
    RemoteSystemSessionMessageChannel(get_activation_factory<RemoteSystemSessionMessageChannel, IRemoteSystemSessionMessageChannelFactory>().Create(session, channelName))
{}

inline RemoteSystemSessionMessageChannel::RemoteSystemSessionMessageChannel(const Windows::System::RemoteSystems::RemoteSystemSession & session, hstring_view channelName, Windows::System::RemoteSystems::RemoteSystemSessionMessageChannelReliability reliability) :
    RemoteSystemSessionMessageChannel(get_activation_factory<RemoteSystemSessionMessageChannel, IRemoteSystemSessionMessageChannelFactory>().Create(session, channelName, reliability))
{}

inline RemoteSystemSessionOptions::RemoteSystemSessionOptions() :
    RemoteSystemSessionOptions(activate_instance<RemoteSystemSessionOptions>())
{}

inline RemoteSystemStatusTypeFilter::RemoteSystemStatusTypeFilter(Windows::System::RemoteSystems::RemoteSystemStatusType remoteSystemStatusType) :
    RemoteSystemStatusTypeFilter(get_activation_factory<RemoteSystemStatusTypeFilter, IRemoteSystemStatusTypeFilterFactory>().Create(remoteSystemStatusType))
{}

}

}

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IKnownRemoteSystemCapabilitiesStatics>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IKnownRemoteSystemCapabilitiesStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystem>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystem & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystem2>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystem2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemAddedEventArgs>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemAddedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilter>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilter & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilterFactory>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilterFactory & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequest>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequest & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequestFactory>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemConnectionRequestFactory & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilter>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilter & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilterFactory>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilterFactory & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemFilter>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemFilter & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemKindFilter>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemKindFilter & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemKindFilterFactory>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemKindFilterFactory & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemKindStatics>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemKindStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemRemovedEventArgs>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemRemovedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSession>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemSession & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionAddedEventArgs>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemSessionAddedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionController>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemSessionController & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionControllerFactory>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemSessionControllerFactory & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionCreationResult>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemSessionCreationResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionDisconnectedEventArgs>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemSessionDisconnectedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInfo>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInfo & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInvitation>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInvitation & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInvitationReceivedEventArgs>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemSessionInvitationReceivedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequest>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequest & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequestedEventArgs>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequestedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionJoinResult>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemSessionJoinResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannelFactory>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannelFactory & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionOptions>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemSessionOptions & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipant>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipant & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantAddedEventArgs>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantAddedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantRemovedEventArgs>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantRemovedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionRemovedEventArgs>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemSessionRemovedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionStatics>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemSessionStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionUpdatedEventArgs>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemSessionUpdatedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionValueSetReceivedEventArgs>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemSessionValueSetReceivedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemSessionWatcher>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemSessionWatcher & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemStatics>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemStatics2>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemStatics2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilter>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilter & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilterFactory>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilterFactory & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemUpdatedEventArgs>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemUpdatedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::IRemoteSystemWatcher>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::IRemoteSystemWatcher & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::RemoteSystem>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::RemoteSystem & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::RemoteSystemAddedEventArgs>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::RemoteSystemAddedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::RemoteSystemAuthorizationKindFilter>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::RemoteSystemAuthorizationKindFilter & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::RemoteSystemConnectionRequest>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::RemoteSystemConnectionRequest & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::RemoteSystemDiscoveryTypeFilter>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::RemoteSystemDiscoveryTypeFilter & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::RemoteSystemKindFilter>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::RemoteSystemKindFilter & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::RemoteSystemSession>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::RemoteSystemSession & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionController>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::RemoteSystemSessionController & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionCreationResult>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::RemoteSystemSessionCreationResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInfo>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::RemoteSystemSessionInfo & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInvitation>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::RemoteSystemSessionInvitation & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionJoinRequest>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::RemoteSystemSessionJoinRequest & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionJoinResult>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::RemoteSystemSessionJoinResult & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionOptions>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::RemoteSystemSessionOptions & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipant>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipant & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::RemoteSystemSessionWatcher>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::RemoteSystemSessionWatcher & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::RemoteSystemStatusTypeFilter>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::RemoteSystemStatusTypeFilter & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::RemoteSystems::RemoteSystemWatcher>
{
    size_t operator()(const winrt::Windows::System::RemoteSystems::RemoteSystemWatcher & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
