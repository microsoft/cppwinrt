// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Networking.0.h"
#include "winrt/impl/Windows.System.RemoteSystems.0.h"

WINRT_EXPORT namespace winrt::Windows::System::RemoteSystems {

struct WINRT_EBO IKnownRemoteSystemCapabilitiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IKnownRemoteSystemCapabilitiesStatics>
{
    IKnownRemoteSystemCapabilitiesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystem :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystem>
{
    IRemoteSystem(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystem2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystem2>
{
    IRemoteSystem2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemAddedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemAddedEventArgs>
{
    IRemoteSystemAddedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemAuthorizationKindFilter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemAuthorizationKindFilter>
{
    IRemoteSystemAuthorizationKindFilter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemAuthorizationKindFilterFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemAuthorizationKindFilterFactory>
{
    IRemoteSystemAuthorizationKindFilterFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemConnectionRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemConnectionRequest>
{
    IRemoteSystemConnectionRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemConnectionRequestFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemConnectionRequestFactory>
{
    IRemoteSystemConnectionRequestFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemDiscoveryTypeFilter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemDiscoveryTypeFilter>
{
    IRemoteSystemDiscoveryTypeFilter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemDiscoveryTypeFilterFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemDiscoveryTypeFilterFactory>
{
    IRemoteSystemDiscoveryTypeFilterFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemFilter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemFilter>
{
    IRemoteSystemFilter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemKindFilter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemKindFilter>
{
    IRemoteSystemKindFilter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemKindFilterFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemKindFilterFactory>
{
    IRemoteSystemKindFilterFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemKindStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemKindStatics>
{
    IRemoteSystemKindStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemRemovedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemRemovedEventArgs>
{
    IRemoteSystemRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemSession :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSession>,
    impl::require<IRemoteSystemSession, Windows::Foundation::IClosable>
{
    IRemoteSystemSession(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemSessionAddedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionAddedEventArgs>
{
    IRemoteSystemSessionAddedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemSessionController :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionController>
{
    IRemoteSystemSessionController(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemSessionControllerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionControllerFactory>
{
    IRemoteSystemSessionControllerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemSessionCreationResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionCreationResult>
{
    IRemoteSystemSessionCreationResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemSessionDisconnectedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionDisconnectedEventArgs>
{
    IRemoteSystemSessionDisconnectedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemSessionInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionInfo>
{
    IRemoteSystemSessionInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemSessionInvitation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionInvitation>
{
    IRemoteSystemSessionInvitation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemSessionInvitationListener :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionInvitationListener>
{
    IRemoteSystemSessionInvitationListener(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemSessionInvitationReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionInvitationReceivedEventArgs>
{
    IRemoteSystemSessionInvitationReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemSessionJoinRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionJoinRequest>
{
    IRemoteSystemSessionJoinRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemSessionJoinRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionJoinRequestedEventArgs>
{
    IRemoteSystemSessionJoinRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemSessionJoinResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionJoinResult>
{
    IRemoteSystemSessionJoinResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemSessionMessageChannel :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionMessageChannel>
{
    IRemoteSystemSessionMessageChannel(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemSessionMessageChannelFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionMessageChannelFactory>
{
    IRemoteSystemSessionMessageChannelFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemSessionOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionOptions>
{
    IRemoteSystemSessionOptions(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemSessionParticipant :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionParticipant>
{
    IRemoteSystemSessionParticipant(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemSessionParticipantAddedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionParticipantAddedEventArgs>
{
    IRemoteSystemSessionParticipantAddedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemSessionParticipantRemovedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionParticipantRemovedEventArgs>
{
    IRemoteSystemSessionParticipantRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemSessionParticipantWatcher :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionParticipantWatcher>
{
    IRemoteSystemSessionParticipantWatcher(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemSessionRemovedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionRemovedEventArgs>
{
    IRemoteSystemSessionRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemSessionStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionStatics>
{
    IRemoteSystemSessionStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemSessionUpdatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionUpdatedEventArgs>
{
    IRemoteSystemSessionUpdatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemSessionValueSetReceivedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionValueSetReceivedEventArgs>
{
    IRemoteSystemSessionValueSetReceivedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemSessionWatcher :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemSessionWatcher>
{
    IRemoteSystemSessionWatcher(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemStatics>
{
    IRemoteSystemStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemStatics2>
{
    IRemoteSystemStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemStatusTypeFilter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemStatusTypeFilter>
{
    IRemoteSystemStatusTypeFilter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemStatusTypeFilterFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemStatusTypeFilterFactory>
{
    IRemoteSystemStatusTypeFilterFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemUpdatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemUpdatedEventArgs>
{
    IRemoteSystemUpdatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IRemoteSystemWatcher :
    Windows::Foundation::IInspectable,
    impl::consume_t<IRemoteSystemWatcher>
{
    IRemoteSystemWatcher(std::nullptr_t = nullptr) noexcept {}
};

}
