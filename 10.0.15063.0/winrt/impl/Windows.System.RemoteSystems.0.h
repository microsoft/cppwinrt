// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Deferral;

}

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {

struct ValueSet;

}

WINRT_EXPORT namespace winrt::Windows::Networking {

struct HostName;

}

WINRT_EXPORT namespace winrt::Windows::System::RemoteSystems {

enum class RemoteSystemAccessStatus
{
    Unspecified = 0,
    Allowed = 1,
    DeniedByUser = 2,
    DeniedBySystem = 3,
};

enum class RemoteSystemAuthorizationKind
{
    SameUser = 0,
    Anonymous = 1,
};

enum class RemoteSystemDiscoveryType
{
    Any = 0,
    Proximal = 1,
    Cloud = 2,
    SpatiallyProximal = 3,
};

enum class RemoteSystemSessionCreationStatus
{
    Success = 0,
    SessionLimitsExceeded = 1,
    OperationAborted = 2,
};

enum class RemoteSystemSessionDisconnectedReason
{
    SessionUnavailable = 0,
    RemovedByController = 1,
    SessionClosed = 2,
};

enum class RemoteSystemSessionJoinStatus
{
    Success = 0,
    SessionLimitsExceeded = 1,
    OperationAborted = 2,
    SessionUnavailable = 3,
    RejectedByController = 4,
};

enum class RemoteSystemSessionMessageChannelReliability
{
    Reliable = 0,
    Unreliable = 1,
};

enum class RemoteSystemSessionParticipantWatcherStatus
{
    Created = 0,
    Started = 1,
    EnumerationCompleted = 2,
    Stopping = 3,
    Stopped = 4,
    Aborted = 5,
};

enum class RemoteSystemSessionWatcherStatus
{
    Created = 0,
    Started = 1,
    EnumerationCompleted = 2,
    Stopping = 3,
    Stopped = 4,
    Aborted = 5,
};

enum class RemoteSystemStatus
{
    Unavailable = 0,
    DiscoveringAvailability = 1,
    Available = 2,
    Unknown = 3,
};

enum class RemoteSystemStatusType
{
    Any = 0,
    Available = 1,
};

struct IKnownRemoteSystemCapabilitiesStatics;
struct IRemoteSystem;
struct IRemoteSystem2;
struct IRemoteSystemAddedEventArgs;
struct IRemoteSystemAuthorizationKindFilter;
struct IRemoteSystemAuthorizationKindFilterFactory;
struct IRemoteSystemConnectionRequest;
struct IRemoteSystemConnectionRequestFactory;
struct IRemoteSystemDiscoveryTypeFilter;
struct IRemoteSystemDiscoveryTypeFilterFactory;
struct IRemoteSystemFilter;
struct IRemoteSystemKindFilter;
struct IRemoteSystemKindFilterFactory;
struct IRemoteSystemKindStatics;
struct IRemoteSystemRemovedEventArgs;
struct IRemoteSystemSession;
struct IRemoteSystemSessionAddedEventArgs;
struct IRemoteSystemSessionController;
struct IRemoteSystemSessionControllerFactory;
struct IRemoteSystemSessionCreationResult;
struct IRemoteSystemSessionDisconnectedEventArgs;
struct IRemoteSystemSessionInfo;
struct IRemoteSystemSessionInvitation;
struct IRemoteSystemSessionInvitationListener;
struct IRemoteSystemSessionInvitationReceivedEventArgs;
struct IRemoteSystemSessionJoinRequest;
struct IRemoteSystemSessionJoinRequestedEventArgs;
struct IRemoteSystemSessionJoinResult;
struct IRemoteSystemSessionMessageChannel;
struct IRemoteSystemSessionMessageChannelFactory;
struct IRemoteSystemSessionOptions;
struct IRemoteSystemSessionParticipant;
struct IRemoteSystemSessionParticipantAddedEventArgs;
struct IRemoteSystemSessionParticipantRemovedEventArgs;
struct IRemoteSystemSessionParticipantWatcher;
struct IRemoteSystemSessionRemovedEventArgs;
struct IRemoteSystemSessionStatics;
struct IRemoteSystemSessionUpdatedEventArgs;
struct IRemoteSystemSessionValueSetReceivedEventArgs;
struct IRemoteSystemSessionWatcher;
struct IRemoteSystemStatics;
struct IRemoteSystemStatics2;
struct IRemoteSystemStatusTypeFilter;
struct IRemoteSystemStatusTypeFilterFactory;
struct IRemoteSystemUpdatedEventArgs;
struct IRemoteSystemWatcher;
struct KnownRemoteSystemCapabilities;
struct RemoteSystem;
struct RemoteSystemAddedEventArgs;
struct RemoteSystemAuthorizationKindFilter;
struct RemoteSystemConnectionRequest;
struct RemoteSystemDiscoveryTypeFilter;
struct RemoteSystemKindFilter;
struct RemoteSystemKinds;
struct RemoteSystemRemovedEventArgs;
struct RemoteSystemSession;
struct RemoteSystemSessionAddedEventArgs;
struct RemoteSystemSessionController;
struct RemoteSystemSessionCreationResult;
struct RemoteSystemSessionDisconnectedEventArgs;
struct RemoteSystemSessionInfo;
struct RemoteSystemSessionInvitation;
struct RemoteSystemSessionInvitationListener;
struct RemoteSystemSessionInvitationReceivedEventArgs;
struct RemoteSystemSessionJoinRequest;
struct RemoteSystemSessionJoinRequestedEventArgs;
struct RemoteSystemSessionJoinResult;
struct RemoteSystemSessionMessageChannel;
struct RemoteSystemSessionOptions;
struct RemoteSystemSessionParticipant;
struct RemoteSystemSessionParticipantAddedEventArgs;
struct RemoteSystemSessionParticipantRemovedEventArgs;
struct RemoteSystemSessionParticipantWatcher;
struct RemoteSystemSessionRemovedEventArgs;
struct RemoteSystemSessionUpdatedEventArgs;
struct RemoteSystemSessionValueSetReceivedEventArgs;
struct RemoteSystemSessionWatcher;
struct RemoteSystemStatusTypeFilter;
struct RemoteSystemUpdatedEventArgs;
struct RemoteSystemWatcher;

}

namespace winrt::impl {

template <> struct category<Windows::System::RemoteSystems::IKnownRemoteSystemCapabilitiesStatics>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystem>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystem2>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemAddedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilter>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilterFactory>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemConnectionRequest>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemConnectionRequestFactory>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilter>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilterFactory>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemFilter>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemKindFilter>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemKindFilterFactory>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemKindStatics>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemRemovedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemSession>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemSessionAddedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemSessionController>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemSessionControllerFactory>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemSessionCreationResult>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemSessionDisconnectedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemSessionInfo>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemSessionInvitation>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemSessionInvitationReceivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequest>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemSessionJoinResult>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannelFactory>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemSessionOptions>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemSessionParticipant>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemSessionParticipantAddedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemSessionParticipantRemovedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemSessionRemovedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemSessionStatics>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemSessionUpdatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemSessionValueSetReceivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemSessionWatcher>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemStatics>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemStatics2>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilter>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilterFactory>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemUpdatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::IRemoteSystemWatcher>{ using type = interface_category; };
template <> struct category<Windows::System::RemoteSystems::KnownRemoteSystemCapabilities>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystem>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemAddedEventArgs>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemAuthorizationKindFilter>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemConnectionRequest>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemDiscoveryTypeFilter>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemKindFilter>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemKinds>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemSession>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemSessionController>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemSessionCreationResult>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemSessionInfo>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemSessionInvitation>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemSessionJoinRequest>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemSessionJoinResult>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemSessionOptions>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemSessionParticipant>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemSessionWatcher>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemStatusTypeFilter>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemWatcher>{ using type = class_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemAccessStatus>{ using type = enum_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemAuthorizationKind>{ using type = enum_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemDiscoveryType>{ using type = enum_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemSessionCreationStatus>{ using type = enum_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedReason>{ using type = enum_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemSessionJoinStatus>{ using type = enum_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemSessionMessageChannelReliability>{ using type = enum_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcherStatus>{ using type = enum_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemSessionWatcherStatus>{ using type = enum_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemStatus>{ using type = enum_category; };
template <> struct category<Windows::System::RemoteSystems::RemoteSystemStatusType>{ using type = enum_category; };
template <> struct name<Windows::System::RemoteSystems::IKnownRemoteSystemCapabilitiesStatics>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IKnownRemoteSystemCapabilitiesStatics" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystem>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystem" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystem2>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystem2" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemAddedEventArgs>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemAddedEventArgs" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilter>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemAuthorizationKindFilter" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilterFactory>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemAuthorizationKindFilterFactory" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemConnectionRequest>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemConnectionRequest" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemConnectionRequestFactory>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemConnectionRequestFactory" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilter>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemDiscoveryTypeFilter" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilterFactory>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemDiscoveryTypeFilterFactory" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemFilter>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemFilter" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemKindFilter>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemKindFilter" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemKindFilterFactory>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemKindFilterFactory" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemKindStatics>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemKindStatics" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemRemovedEventArgs>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemRemovedEventArgs" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemSession>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemSession" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemSessionAddedEventArgs>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemSessionAddedEventArgs" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemSessionController>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemSessionController" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemSessionControllerFactory>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemSessionControllerFactory" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemSessionCreationResult>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemSessionCreationResult" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemSessionDisconnectedEventArgs>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemSessionDisconnectedEventArgs" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemSessionInfo>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemSessionInfo" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemSessionInvitation>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemSessionInvitation" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemSessionInvitationListener" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemSessionInvitationReceivedEventArgs>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemSessionInvitationReceivedEventArgs" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequest>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemSessionJoinRequest" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequestedEventArgs>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemSessionJoinRequestedEventArgs" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemSessionJoinResult>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemSessionJoinResult" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemSessionMessageChannel" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannelFactory>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemSessionMessageChannelFactory" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemSessionOptions>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemSessionOptions" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemSessionParticipant>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemSessionParticipant" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemSessionParticipantAddedEventArgs>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemSessionParticipantAddedEventArgs" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemSessionParticipantRemovedEventArgs>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemSessionParticipantRemovedEventArgs" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemSessionParticipantWatcher" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemSessionRemovedEventArgs>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemSessionRemovedEventArgs" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemSessionStatics>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemSessionStatics" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemSessionUpdatedEventArgs>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemSessionUpdatedEventArgs" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemSessionValueSetReceivedEventArgs>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemSessionValueSetReceivedEventArgs" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemSessionWatcher>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemSessionWatcher" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemStatics>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemStatics" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemStatics2>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemStatics2" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilter>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemStatusTypeFilter" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilterFactory>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemStatusTypeFilterFactory" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemUpdatedEventArgs>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemUpdatedEventArgs" }; };
template <> struct name<Windows::System::RemoteSystems::IRemoteSystemWatcher>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.IRemoteSystemWatcher" }; };
template <> struct name<Windows::System::RemoteSystems::KnownRemoteSystemCapabilities>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.KnownRemoteSystemCapabilities" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystem>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystem" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemAddedEventArgs>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemAddedEventArgs" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemAuthorizationKindFilter>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemAuthorizationKindFilter" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemConnectionRequest>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemConnectionRequest" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemDiscoveryTypeFilter>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemDiscoveryTypeFilter" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemKindFilter>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemKindFilter" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemKinds>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemKinds" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemRemovedEventArgs" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemSession>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemSession" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemSessionAddedEventArgs" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemSessionController>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemSessionController" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemSessionCreationResult>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemSessionCreationResult" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemSessionDisconnectedEventArgs" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemSessionInfo>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemSessionInfo" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemSessionInvitation>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemSessionInvitation" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemSessionInvitationListener" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemSessionInvitationReceivedEventArgs" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemSessionJoinRequest>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemSessionJoinRequest" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemSessionJoinRequestedEventArgs" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemSessionJoinResult>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemSessionJoinResult" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemSessionMessageChannel" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemSessionOptions>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemSessionOptions" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemSessionParticipant>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemSessionParticipant" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemSessionParticipantAddedEventArgs" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemSessionParticipantRemovedEventArgs" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemSessionParticipantWatcher" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemSessionRemovedEventArgs" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemSessionUpdatedEventArgs" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemSessionValueSetReceivedEventArgs" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemSessionWatcher>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemSessionWatcher" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemStatusTypeFilter>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemStatusTypeFilter" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemUpdatedEventArgs" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemWatcher>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemWatcher" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemAccessStatus>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemAccessStatus" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemAuthorizationKind>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemAuthorizationKind" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemDiscoveryType>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemDiscoveryType" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemSessionCreationStatus>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemSessionCreationStatus" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedReason>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemSessionDisconnectedReason" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemSessionJoinStatus>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemSessionJoinStatus" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemSessionMessageChannelReliability>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemSessionMessageChannelReliability" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcherStatus>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemSessionParticipantWatcherStatus" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemSessionWatcherStatus>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemSessionWatcherStatus" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemStatus>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemStatus" }; };
template <> struct name<Windows::System::RemoteSystems::RemoteSystemStatusType>{ static constexpr auto & value{ L"Windows.System.RemoteSystems.RemoteSystemStatusType" }; };
template <> struct guid<Windows::System::RemoteSystems::IKnownRemoteSystemCapabilitiesStatics>{ static constexpr GUID value{ 0x8108E380,0x7F8A,0x44E4,{ 0x92,0xCD,0x03,0xB6,0x46,0x9B,0x94,0xA3 } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystem>{ static constexpr GUID value{ 0xED5838CD,0x1E10,0x4A8C,{ 0xB4,0xA6,0x4E,0x5F,0xD6,0xF9,0x77,0x21 } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystem2>{ static constexpr GUID value{ 0x09DFE4EC,0xFB8B,0x4A08,{ 0xA7,0x58,0x68,0x76,0x43,0x5D,0x76,0x9E } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemAddedEventArgs>{ static constexpr GUID value{ 0x8F39560F,0xE534,0x4697,{ 0x88,0x36,0x7A,0xBE,0xA1,0x51,0x51,0x6E } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilter>{ static constexpr GUID value{ 0x6B0DDE8E,0x04D0,0x40F4,{ 0xA2,0x7F,0xC2,0xAC,0xBB,0xD6,0xB7,0x34 } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilterFactory>{ static constexpr GUID value{ 0xAD65DF4D,0xB66A,0x45A4,{ 0x81,0x77,0x8C,0xAE,0xD7,0x5D,0x9E,0x5A } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemConnectionRequest>{ static constexpr GUID value{ 0x84ED4104,0x8D5E,0x4D72,{ 0x82,0x38,0x76,0x21,0x57,0x6C,0x7A,0x67 } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemConnectionRequestFactory>{ static constexpr GUID value{ 0xAA0A0A20,0xBAEB,0x4575,{ 0xB5,0x30,0x81,0x0B,0xB9,0x78,0x63,0x34 } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilter>{ static constexpr GUID value{ 0x42D9041F,0xEE5A,0x43DA,{ 0xAC,0x6A,0x6F,0xEE,0x25,0x46,0x07,0x41 } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilterFactory>{ static constexpr GUID value{ 0x9F9EB993,0xC260,0x4161,{ 0x92,0xF2,0x9C,0x02,0x1F,0x23,0xFE,0x5D } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemFilter>{ static constexpr GUID value{ 0x4A3BA9E4,0x99EB,0x45EB,{ 0xBA,0x16,0x03,0x67,0x72,0x8F,0xF3,0x74 } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemKindFilter>{ static constexpr GUID value{ 0x38E1C9EC,0x22C3,0x4EF6,{ 0x90,0x1A,0xBB,0xB1,0xC7,0xAA,0xD4,0xED } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemKindFilterFactory>{ static constexpr GUID value{ 0xA1FB18EE,0x99EA,0x40BC,{ 0x9A,0x39,0xC6,0x70,0xAA,0x80,0x4A,0x28 } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemKindStatics>{ static constexpr GUID value{ 0xF6317633,0xAB14,0x41D0,{ 0x95,0x53,0x79,0x6A,0xAD,0xB8,0x82,0xDB } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemRemovedEventArgs>{ static constexpr GUID value{ 0x8B3D16BB,0x7306,0x49EA,{ 0xB7,0xDF,0x67,0xD5,0x71,0x4C,0xB0,0x13 } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemSession>{ static constexpr GUID value{ 0x69476A01,0x9ADA,0x490F,{ 0x95,0x49,0xD3,0x1C,0xB1,0x4C,0x9E,0x95 } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemSessionAddedEventArgs>{ static constexpr GUID value{ 0xD585D754,0xBC97,0x4C39,{ 0x99,0xB4,0xBE,0xCA,0x76,0xE0,0x4C,0x3F } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemSessionController>{ static constexpr GUID value{ 0xE48B2DD2,0x6820,0x4867,{ 0xB4,0x25,0xD8,0x9C,0x0A,0x3E,0xF7,0xBA } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemSessionControllerFactory>{ static constexpr GUID value{ 0xBFCC2F6B,0xAC3D,0x4199,{ 0x82,0xCD,0x66,0x70,0xA7,0x73,0xEF,0x2E } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemSessionCreationResult>{ static constexpr GUID value{ 0xA79812C2,0x37DE,0x448C,{ 0x8B,0x83,0xA3,0x0A,0xA3,0xC4,0xEA,0xD6 } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemSessionDisconnectedEventArgs>{ static constexpr GUID value{ 0xDE0BC69B,0x77C5,0x461C,{ 0x82,0x09,0x7C,0x6C,0x5D,0x31,0x11,0xAB } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemSessionInfo>{ static constexpr GUID value{ 0xFF4DF648,0x8B0A,0x4E9A,{ 0x99,0x05,0x69,0xE4,0xB8,0x41,0xC5,0x88 } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemSessionInvitation>{ static constexpr GUID value{ 0x3E32CC91,0x51D7,0x4766,{ 0xA1,0x21,0x25,0x51,0x6C,0x3B,0x82,0x94 } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener>{ static constexpr GUID value{ 0x08F4003F,0xBC71,0x49E1,{ 0x87,0x4A,0x31,0xDD,0xFF,0x9A,0x27,0xB9 } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemSessionInvitationReceivedEventArgs>{ static constexpr GUID value{ 0x5E964A2D,0xA10D,0x4EDB,{ 0x8D,0xEA,0x54,0xD2,0x0A,0xC1,0x95,0x43 } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequest>{ static constexpr GUID value{ 0x20600068,0x7994,0x4331,{ 0x86,0xD1,0xD8,0x9D,0x88,0x25,0x85,0xEE } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequestedEventArgs>{ static constexpr GUID value{ 0xDBCA4FC3,0x82B9,0x4816,{ 0x9C,0x24,0xE4,0x0E,0x61,0x77,0x4B,0xD8 } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemSessionJoinResult>{ static constexpr GUID value{ 0xCE7B1F04,0xA03E,0x41A4,{ 0x90,0x0B,0x1E,0x79,0x32,0x8C,0x12,0x67 } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel>{ static constexpr GUID value{ 0x9524D12A,0x73D9,0x4C10,{ 0xB7,0x51,0xC2,0x67,0x84,0x43,0x71,0x27 } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannelFactory>{ static constexpr GUID value{ 0x295E1C4A,0xBD16,0x4298,{ 0xB7,0xCE,0x41,0x54,0x82,0xB0,0xE1,0x1D } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemSessionOptions>{ static constexpr GUID value{ 0x740ED755,0x8418,0x4F01,{ 0x93,0x53,0xE2,0x1C,0x9E,0xCC,0x6C,0xFC } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemSessionParticipant>{ static constexpr GUID value{ 0x7E90058C,0xACF9,0x4729,{ 0x8A,0x17,0x44,0xE7,0xBA,0xED,0x5D,0xCC } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemSessionParticipantAddedEventArgs>{ static constexpr GUID value{ 0xD35A57D8,0xC9A1,0x4BB7,{ 0xB6,0xB0,0x79,0xBB,0x91,0xAD,0xF9,0x3D } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemSessionParticipantRemovedEventArgs>{ static constexpr GUID value{ 0x866EF088,0xDE68,0x4ABF,{ 0x88,0xA1,0xF9,0x0D,0x16,0x27,0x41,0x92 } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher>{ static constexpr GUID value{ 0xDCDD02CC,0xAA87,0x4D79,{ 0xB6,0xCC,0x44,0x59,0xB3,0xE9,0x20,0x75 } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemSessionRemovedEventArgs>{ static constexpr GUID value{ 0xAF82914E,0x39A1,0x4DEA,{ 0x9D,0x63,0x43,0x79,0x8D,0x5B,0xBB,0xD0 } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemSessionStatics>{ static constexpr GUID value{ 0x8524899F,0xFD20,0x44E3,{ 0x95,0x65,0xE7,0x5A,0x3B,0x14,0xC6,0x6E } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemSessionUpdatedEventArgs>{ static constexpr GUID value{ 0x16875069,0x231E,0x4C91,{ 0x8E,0xC8,0xB3,0xA3,0x9D,0x9E,0x55,0xA3 } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemSessionValueSetReceivedEventArgs>{ static constexpr GUID value{ 0x06F31785,0x2DA5,0x4E58,{ 0xA7,0x8F,0x9E,0x8D,0x07,0x84,0xEE,0x25 } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemSessionWatcher>{ static constexpr GUID value{ 0x8003E340,0x0C41,0x4A62,{ 0xB6,0xD7,0xBD,0xBE,0x2B,0x19,0xBE,0x2D } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemStatics>{ static constexpr GUID value{ 0xA485B392,0xFF2B,0x4B47,{ 0xBE,0x62,0x74,0x3F,0x2F,0x14,0x0F,0x30 } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemStatics2>{ static constexpr GUID value{ 0x0C98EDCA,0x6F99,0x4C52,{ 0xA2,0x72,0xEA,0x4F,0x36,0x47,0x17,0x44 } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilter>{ static constexpr GUID value{ 0x0C39514E,0xCBB6,0x4777,{ 0x85,0x34,0x2E,0x0C,0x52,0x1A,0xFF,0xA2 } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilterFactory>{ static constexpr GUID value{ 0x33CF78FA,0xD724,0x4125,{ 0xAC,0x7A,0x8D,0x28,0x1E,0x44,0xC9,0x49 } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemUpdatedEventArgs>{ static constexpr GUID value{ 0x7502FF0E,0xDBCB,0x4155,{ 0xB4,0xCA,0xB3,0x0A,0x04,0xF2,0x76,0x27 } }; };
template <> struct guid<Windows::System::RemoteSystems::IRemoteSystemWatcher>{ static constexpr GUID value{ 0x5D600C7E,0x2C07,0x48C5,{ 0x88,0x9C,0x45,0x5D,0x2B,0x09,0x97,0x71 } }; };
template <> struct default_interface<Windows::System::RemoteSystems::RemoteSystem>{ using type = Windows::System::RemoteSystems::IRemoteSystem; };
template <> struct default_interface<Windows::System::RemoteSystems::RemoteSystemAddedEventArgs>{ using type = Windows::System::RemoteSystems::IRemoteSystemAddedEventArgs; };
template <> struct default_interface<Windows::System::RemoteSystems::RemoteSystemAuthorizationKindFilter>{ using type = Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilter; };
template <> struct default_interface<Windows::System::RemoteSystems::RemoteSystemConnectionRequest>{ using type = Windows::System::RemoteSystems::IRemoteSystemConnectionRequest; };
template <> struct default_interface<Windows::System::RemoteSystems::RemoteSystemDiscoveryTypeFilter>{ using type = Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilter; };
template <> struct default_interface<Windows::System::RemoteSystems::RemoteSystemKindFilter>{ using type = Windows::System::RemoteSystems::IRemoteSystemKindFilter; };
template <> struct default_interface<Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs>{ using type = Windows::System::RemoteSystems::IRemoteSystemRemovedEventArgs; };
template <> struct default_interface<Windows::System::RemoteSystems::RemoteSystemSession>{ using type = Windows::System::RemoteSystems::IRemoteSystemSession; };
template <> struct default_interface<Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs>{ using type = Windows::System::RemoteSystems::IRemoteSystemSessionAddedEventArgs; };
template <> struct default_interface<Windows::System::RemoteSystems::RemoteSystemSessionController>{ using type = Windows::System::RemoteSystems::IRemoteSystemSessionController; };
template <> struct default_interface<Windows::System::RemoteSystems::RemoteSystemSessionCreationResult>{ using type = Windows::System::RemoteSystems::IRemoteSystemSessionCreationResult; };
template <> struct default_interface<Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs>{ using type = Windows::System::RemoteSystems::IRemoteSystemSessionDisconnectedEventArgs; };
template <> struct default_interface<Windows::System::RemoteSystems::RemoteSystemSessionInfo>{ using type = Windows::System::RemoteSystems::IRemoteSystemSessionInfo; };
template <> struct default_interface<Windows::System::RemoteSystems::RemoteSystemSessionInvitation>{ using type = Windows::System::RemoteSystems::IRemoteSystemSessionInvitation; };
template <> struct default_interface<Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener>{ using type = Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener; };
template <> struct default_interface<Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs>{ using type = Windows::System::RemoteSystems::IRemoteSystemSessionInvitationReceivedEventArgs; };
template <> struct default_interface<Windows::System::RemoteSystems::RemoteSystemSessionJoinRequest>{ using type = Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequest; };
template <> struct default_interface<Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs>{ using type = Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequestedEventArgs; };
template <> struct default_interface<Windows::System::RemoteSystems::RemoteSystemSessionJoinResult>{ using type = Windows::System::RemoteSystems::IRemoteSystemSessionJoinResult; };
template <> struct default_interface<Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel>{ using type = Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel; };
template <> struct default_interface<Windows::System::RemoteSystems::RemoteSystemSessionOptions>{ using type = Windows::System::RemoteSystems::IRemoteSystemSessionOptions; };
template <> struct default_interface<Windows::System::RemoteSystems::RemoteSystemSessionParticipant>{ using type = Windows::System::RemoteSystems::IRemoteSystemSessionParticipant; };
template <> struct default_interface<Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs>{ using type = Windows::System::RemoteSystems::IRemoteSystemSessionParticipantAddedEventArgs; };
template <> struct default_interface<Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs>{ using type = Windows::System::RemoteSystems::IRemoteSystemSessionParticipantRemovedEventArgs; };
template <> struct default_interface<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher>{ using type = Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher; };
template <> struct default_interface<Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs>{ using type = Windows::System::RemoteSystems::IRemoteSystemSessionRemovedEventArgs; };
template <> struct default_interface<Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs>{ using type = Windows::System::RemoteSystems::IRemoteSystemSessionUpdatedEventArgs; };
template <> struct default_interface<Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs>{ using type = Windows::System::RemoteSystems::IRemoteSystemSessionValueSetReceivedEventArgs; };
template <> struct default_interface<Windows::System::RemoteSystems::RemoteSystemSessionWatcher>{ using type = Windows::System::RemoteSystems::IRemoteSystemSessionWatcher; };
template <> struct default_interface<Windows::System::RemoteSystems::RemoteSystemStatusTypeFilter>{ using type = Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilter; };
template <> struct default_interface<Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs>{ using type = Windows::System::RemoteSystems::IRemoteSystemUpdatedEventArgs; };
template <> struct default_interface<Windows::System::RemoteSystems::RemoteSystemWatcher>{ using type = Windows::System::RemoteSystems::IRemoteSystemWatcher; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IKnownRemoteSystemCapabilitiesStatics
{
    hstring AppService() const;
    hstring LaunchUri() const;
    hstring RemoteSession() const;
    hstring SpatialEntity() const;
};
template <> struct consume<Windows::System::RemoteSystems::IKnownRemoteSystemCapabilitiesStatics> { template <typename D> using type = consume_Windows_System_RemoteSystems_IKnownRemoteSystemCapabilitiesStatics<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystem
{
    hstring DisplayName() const;
    hstring Id() const;
    hstring Kind() const;
    Windows::System::RemoteSystems::RemoteSystemStatus Status() const;
    bool IsAvailableByProximity() const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystem> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystem<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystem2
{
    bool IsAvailableBySpatialProximity() const;
    Windows::Foundation::IAsyncOperation<bool> GetCapabilitySupportedAsync(param::hstring const& capabilityName) const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystem2> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystem2<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemAddedEventArgs
{
    Windows::System::RemoteSystems::RemoteSystem RemoteSystem() const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemAddedEventArgs> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemAddedEventArgs<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemAuthorizationKindFilter
{
    Windows::System::RemoteSystems::RemoteSystemAuthorizationKind RemoteSystemAuthorizationKind() const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilter> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemAuthorizationKindFilter<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemAuthorizationKindFilterFactory
{
    Windows::System::RemoteSystems::RemoteSystemAuthorizationKindFilter Create(Windows::System::RemoteSystems::RemoteSystemAuthorizationKind const& remoteSystemAuthorizationKind) const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilterFactory> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemAuthorizationKindFilterFactory<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemConnectionRequest
{
    Windows::System::RemoteSystems::RemoteSystem RemoteSystem() const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemConnectionRequest> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemConnectionRequest<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemConnectionRequestFactory
{
    Windows::System::RemoteSystems::RemoteSystemConnectionRequest Create(Windows::System::RemoteSystems::RemoteSystem const& remoteSystem) const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemConnectionRequestFactory> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemConnectionRequestFactory<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemDiscoveryTypeFilter
{
    Windows::System::RemoteSystems::RemoteSystemDiscoveryType RemoteSystemDiscoveryType() const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilter> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemDiscoveryTypeFilter<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemDiscoveryTypeFilterFactory
{
    Windows::System::RemoteSystems::RemoteSystemDiscoveryTypeFilter Create(Windows::System::RemoteSystems::RemoteSystemDiscoveryType const& discoveryType) const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilterFactory> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemDiscoveryTypeFilterFactory<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemFilter
{
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemFilter> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemFilter<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemKindFilter
{
    Windows::Foundation::Collections::IVectorView<hstring> RemoteSystemKinds() const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemKindFilter> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemKindFilter<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemKindFilterFactory
{
    Windows::System::RemoteSystems::RemoteSystemKindFilter Create(param::iterable<hstring> const& remoteSystemKinds) const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemKindFilterFactory> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemKindFilterFactory<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemKindStatics
{
    hstring Phone() const;
    hstring Hub() const;
    hstring Holographic() const;
    hstring Desktop() const;
    hstring Xbox() const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemKindStatics> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemKindStatics<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemRemovedEventArgs
{
    hstring RemoteSystemId() const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemRemovedEventArgs> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemRemovedEventArgs<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemSession
{
    hstring Id() const;
    hstring DisplayName() const;
    hstring ControllerDisplayName() const;
    event_token Disconnected(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSession, Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs> const& handler) const;
    using Disconnected_revoker = event_revoker<Windows::System::RemoteSystems::IRemoteSystemSession>;
    Disconnected_revoker Disconnected(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSession, Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedEventArgs> const& handler) const;
    void Disconnected(event_token const& token) const;
    Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher CreateParticipantWatcher() const;
    Windows::Foundation::IAsyncOperation<bool> SendInvitationAsync(Windows::System::RemoteSystems::RemoteSystem const& invitee) const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemSession> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSession<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionAddedEventArgs
{
    Windows::System::RemoteSystems::RemoteSystemSessionInfo SessionInfo() const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemSessionAddedEventArgs> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionAddedEventArgs<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionController
{
    event_token JoinRequested(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionController, Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs> const& handler) const;
    using JoinRequested_revoker = event_revoker<Windows::System::RemoteSystems::IRemoteSystemSessionController>;
    JoinRequested_revoker JoinRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionController, Windows::System::RemoteSystems::RemoteSystemSessionJoinRequestedEventArgs> const& handler) const;
    void JoinRequested(event_token const& token) const;
    Windows::Foundation::IAsyncOperation<bool> RemoveParticipantAsync(Windows::System::RemoteSystems::RemoteSystemSessionParticipant const& pParticipant) const;
    Windows::Foundation::IAsyncOperation<Windows::System::RemoteSystems::RemoteSystemSessionCreationResult> CreateSessionAsync() const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemSessionController> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionController<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionControllerFactory
{
    Windows::System::RemoteSystems::RemoteSystemSessionController CreateController(param::hstring const& displayName) const;
    Windows::System::RemoteSystems::RemoteSystemSessionController CreateController(param::hstring const& displayName, Windows::System::RemoteSystems::RemoteSystemSessionOptions const& options) const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemSessionControllerFactory> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionControllerFactory<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionCreationResult
{
    Windows::System::RemoteSystems::RemoteSystemSessionCreationStatus Status() const;
    Windows::System::RemoteSystems::RemoteSystemSession Session() const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemSessionCreationResult> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionCreationResult<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionDisconnectedEventArgs
{
    Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedReason Reason() const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemSessionDisconnectedEventArgs> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionDisconnectedEventArgs<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionInfo
{
    hstring DisplayName() const;
    hstring ControllerDisplayName() const;
    Windows::Foundation::IAsyncOperation<Windows::System::RemoteSystems::RemoteSystemSessionJoinResult> JoinAsync() const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemSessionInfo> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionInfo<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionInvitation
{
    Windows::System::RemoteSystems::RemoteSystem Sender() const;
    Windows::System::RemoteSystems::RemoteSystemSessionInfo SessionInfo() const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemSessionInvitation> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionInvitation<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionInvitationListener
{
    event_token InvitationReceived(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener, Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs> const& handler) const;
    using InvitationReceived_revoker = event_revoker<Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener>;
    InvitationReceived_revoker InvitationReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionInvitationListener, Windows::System::RemoteSystems::RemoteSystemSessionInvitationReceivedEventArgs> const& handler) const;
    void InvitationReceived(event_token const& token) const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionInvitationListener<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionInvitationReceivedEventArgs
{
    Windows::System::RemoteSystems::RemoteSystemSessionInvitation Invitation() const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemSessionInvitationReceivedEventArgs> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionInvitationReceivedEventArgs<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionJoinRequest
{
    Windows::System::RemoteSystems::RemoteSystemSessionParticipant Participant() const;
    void Accept() const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequest> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionJoinRequest<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionJoinRequestedEventArgs
{
    Windows::System::RemoteSystems::RemoteSystemSessionJoinRequest JoinRequest() const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequestedEventArgs> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionJoinRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionJoinResult
{
    Windows::System::RemoteSystems::RemoteSystemSessionJoinStatus Status() const;
    Windows::System::RemoteSystems::RemoteSystemSession Session() const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemSessionJoinResult> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionJoinResult<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionMessageChannel
{
    Windows::System::RemoteSystems::RemoteSystemSession Session() const;
    Windows::Foundation::IAsyncOperation<bool> BroadcastValueSetAsync(Windows::Foundation::Collections::ValueSet const& messageData) const;
    Windows::Foundation::IAsyncOperation<bool> SendValueSetAsync(Windows::Foundation::Collections::ValueSet const& messageData, Windows::System::RemoteSystems::RemoteSystemSessionParticipant const& participant) const;
    Windows::Foundation::IAsyncOperation<bool> SendValueSetToParticipantsAsync(Windows::Foundation::Collections::ValueSet const& messageData, param::async_iterable<Windows::System::RemoteSystems::RemoteSystemSessionParticipant> const& participants) const;
    event_token ValueSetReceived(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel, Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs> const& handler) const;
    using ValueSetReceived_revoker = event_revoker<Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel>;
    ValueSetReceived_revoker ValueSetReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel, Windows::System::RemoteSystems::RemoteSystemSessionValueSetReceivedEventArgs> const& handler) const;
    void ValueSetReceived(event_token const& token) const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionMessageChannel<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionMessageChannelFactory
{
    Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel Create(Windows::System::RemoteSystems::RemoteSystemSession const& session, param::hstring const& channelName) const;
    Windows::System::RemoteSystems::RemoteSystemSessionMessageChannel Create(Windows::System::RemoteSystems::RemoteSystemSession const& session, param::hstring const& channelName, Windows::System::RemoteSystems::RemoteSystemSessionMessageChannelReliability const& reliability) const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannelFactory> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionMessageChannelFactory<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionOptions
{
    bool IsInviteOnly() const;
    void IsInviteOnly(bool value) const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemSessionOptions> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionOptions<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionParticipant
{
    Windows::System::RemoteSystems::RemoteSystem RemoteSystem() const;
    Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> GetHostNames() const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemSessionParticipant> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionParticipant<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantAddedEventArgs
{
    Windows::System::RemoteSystems::RemoteSystemSessionParticipant Participant() const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemSessionParticipantAddedEventArgs> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantAddedEventArgs<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantRemovedEventArgs
{
    Windows::System::RemoteSystems::RemoteSystemSessionParticipant Participant() const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemSessionParticipantRemovedEventArgs> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantRemovedEventArgs<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantWatcher
{
    void Start() const;
    void Stop() const;
    Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcherStatus Status() const;
    event_token Added(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs> const& handler) const;
    using Added_revoker = event_revoker<Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher>;
    Added_revoker Added(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::System::RemoteSystems::RemoteSystemSessionParticipantAddedEventArgs> const& handler) const;
    void Added(event_token const& token) const;
    event_token Removed(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs> const& handler) const;
    using Removed_revoker = event_revoker<Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher>;
    Removed_revoker Removed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::System::RemoteSystems::RemoteSystemSessionParticipantRemovedEventArgs> const& handler) const;
    void Removed(event_token const& token) const;
    event_token EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::Foundation::IInspectable> const& handler) const;
    using EnumerationCompleted_revoker = event_revoker<Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher>;
    EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcher, Windows::Foundation::IInspectable> const& handler) const;
    void EnumerationCompleted(event_token const& token) const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionParticipantWatcher<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionRemovedEventArgs
{
    Windows::System::RemoteSystems::RemoteSystemSessionInfo SessionInfo() const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemSessionRemovedEventArgs> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionRemovedEventArgs<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionStatics
{
    Windows::System::RemoteSystems::RemoteSystemSessionWatcher CreateWatcher() const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemSessionStatics> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionStatics<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionUpdatedEventArgs
{
    Windows::System::RemoteSystems::RemoteSystemSessionInfo SessionInfo() const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemSessionUpdatedEventArgs> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionUpdatedEventArgs<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionValueSetReceivedEventArgs
{
    Windows::System::RemoteSystems::RemoteSystemSessionParticipant Sender() const;
    Windows::Foundation::Collections::ValueSet Message() const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemSessionValueSetReceivedEventArgs> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionValueSetReceivedEventArgs<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemSessionWatcher
{
    void Start() const;
    void Stop() const;
    Windows::System::RemoteSystems::RemoteSystemSessionWatcherStatus Status() const;
    event_token Added(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs> const& handler) const;
    using Added_revoker = event_revoker<Windows::System::RemoteSystems::IRemoteSystemSessionWatcher>;
    Added_revoker Added(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionAddedEventArgs> const& handler) const;
    void Added(event_token const& token) const;
    event_token Updated(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs> const& handler) const;
    using Updated_revoker = event_revoker<Windows::System::RemoteSystems::IRemoteSystemSessionWatcher>;
    Updated_revoker Updated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionUpdatedEventArgs> const& handler) const;
    void Updated(event_token const& token) const;
    event_token Removed(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs> const& handler) const;
    using Removed_revoker = event_revoker<Windows::System::RemoteSystems::IRemoteSystemSessionWatcher>;
    Removed_revoker Removed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemSessionWatcher, Windows::System::RemoteSystems::RemoteSystemSessionRemovedEventArgs> const& handler) const;
    void Removed(event_token const& token) const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemSessionWatcher> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemSessionWatcher<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemStatics
{
    Windows::Foundation::IAsyncOperation<Windows::System::RemoteSystems::RemoteSystem> FindByHostNameAsync(Windows::Networking::HostName const& hostName) const;
    Windows::System::RemoteSystems::RemoteSystemWatcher CreateWatcher() const;
    Windows::System::RemoteSystems::RemoteSystemWatcher CreateWatcher(param::iterable<Windows::System::RemoteSystems::IRemoteSystemFilter> const& filters) const;
    Windows::Foundation::IAsyncOperation<Windows::System::RemoteSystems::RemoteSystemAccessStatus> RequestAccessAsync() const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemStatics> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemStatics<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemStatics2
{
    bool IsAuthorizationKindEnabled(Windows::System::RemoteSystems::RemoteSystemAuthorizationKind const& kind) const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemStatics2> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemStatics2<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemStatusTypeFilter
{
    Windows::System::RemoteSystems::RemoteSystemStatusType RemoteSystemStatusType() const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilter> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemStatusTypeFilter<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemStatusTypeFilterFactory
{
    Windows::System::RemoteSystems::RemoteSystemStatusTypeFilter Create(Windows::System::RemoteSystems::RemoteSystemStatusType const& remoteSystemStatusType) const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilterFactory> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemStatusTypeFilterFactory<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemUpdatedEventArgs
{
    Windows::System::RemoteSystems::RemoteSystem RemoteSystem() const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemUpdatedEventArgs> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemUpdatedEventArgs<D>; };

template <typename D>
struct consume_Windows_System_RemoteSystems_IRemoteSystemWatcher
{
    void Start() const;
    void Stop() const;
    event_token RemoteSystemAdded(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemAddedEventArgs> const& handler) const;
    using RemoteSystemAdded_revoker = event_revoker<Windows::System::RemoteSystems::IRemoteSystemWatcher>;
    RemoteSystemAdded_revoker RemoteSystemAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemAddedEventArgs> const& handler) const;
    void RemoteSystemAdded(event_token const& token) const;
    event_token RemoteSystemUpdated(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs> const& handler) const;
    using RemoteSystemUpdated_revoker = event_revoker<Windows::System::RemoteSystems::IRemoteSystemWatcher>;
    RemoteSystemUpdated_revoker RemoteSystemUpdated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemUpdatedEventArgs> const& handler) const;
    void RemoteSystemUpdated(event_token const& token) const;
    event_token RemoteSystemRemoved(Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs> const& handler) const;
    using RemoteSystemRemoved_revoker = event_revoker<Windows::System::RemoteSystems::IRemoteSystemWatcher>;
    RemoteSystemRemoved_revoker RemoteSystemRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::System::RemoteSystems::RemoteSystemWatcher, Windows::System::RemoteSystems::RemoteSystemRemovedEventArgs> const& handler) const;
    void RemoteSystemRemoved(event_token const& token) const;
};
template <> struct consume<Windows::System::RemoteSystems::IRemoteSystemWatcher> { template <typename D> using type = consume_Windows_System_RemoteSystems_IRemoteSystemWatcher<D>; };

template <> struct abi<Windows::System::RemoteSystems::IKnownRemoteSystemCapabilitiesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AppService(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_LaunchUri(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RemoteSession(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SpatialEntity(HSTRING* value) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystem>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Kind(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Status(abi_t<Windows::System::RemoteSystems::RemoteSystemStatus>* value) = 0;
    virtual HRESULT __stdcall get_IsAvailableByProximity(bool* value) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystem2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsAvailableBySpatialProximity(bool* value) = 0;
    virtual HRESULT __stdcall GetCapabilitySupportedAsync(HSTRING capabilityName, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemAddedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RemoteSystem(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilter>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RemoteSystemAuthorizationKind(abi_t<Windows::System::RemoteSystems::RemoteSystemAuthorizationKind>* value) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemAuthorizationKindFilterFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(abi_t<Windows::System::RemoteSystems::RemoteSystemAuthorizationKind> remoteSystemAuthorizationKind, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemConnectionRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RemoteSystem(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemConnectionRequestFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* remoteSystem, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilter>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RemoteSystemDiscoveryType(abi_t<Windows::System::RemoteSystems::RemoteSystemDiscoveryType>* value) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemDiscoveryTypeFilterFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(abi_t<Windows::System::RemoteSystems::RemoteSystemDiscoveryType> discoveryType, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemFilter>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemKindFilter>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RemoteSystemKinds(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemKindFilterFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* remoteSystemKinds, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemKindStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Phone(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Hub(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Holographic(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Desktop(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Xbox(HSTRING* value) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemRemovedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RemoteSystemId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemSession>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ControllerDisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall add_Disconnected(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Disconnected(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall CreateParticipantWatcher(::IUnknown** result) = 0;
    virtual HRESULT __stdcall SendInvitationAsync(::IUnknown* invitee, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemSessionAddedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SessionInfo(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemSessionController>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_JoinRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_JoinRequested(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall RemoveParticipantAsync(::IUnknown* pParticipant, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateSessionAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemSessionControllerFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateController(HSTRING displayName, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateControllerWithSessionOptions(HSTRING displayName, ::IUnknown* options, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemSessionCreationResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::System::RemoteSystems::RemoteSystemSessionCreationStatus>* value) = 0;
    virtual HRESULT __stdcall get_Session(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemSessionDisconnectedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Reason(abi_t<Windows::System::RemoteSystems::RemoteSystemSessionDisconnectedReason>* value) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemSessionInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ControllerDisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall JoinAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemSessionInvitation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Sender(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SessionInfo(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemSessionInvitationListener>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_InvitationReceived(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_InvitationReceived(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemSessionInvitationReceivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Invitation(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Participant(::IUnknown** value) = 0;
    virtual HRESULT __stdcall Accept() = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemSessionJoinRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_JoinRequest(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemSessionJoinResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::System::RemoteSystems::RemoteSystemSessionJoinStatus>* value) = 0;
    virtual HRESULT __stdcall get_Session(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannel>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Session(::IUnknown** value) = 0;
    virtual HRESULT __stdcall BroadcastValueSetAsync(::IUnknown* messageData, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SendValueSetAsync(::IUnknown* messageData, ::IUnknown* participant, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall SendValueSetToParticipantsAsync(::IUnknown* messageData, ::IUnknown* participants, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall add_ValueSetReceived(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ValueSetReceived(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemSessionMessageChannelFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* session, HSTRING channelName, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateWithReliability(::IUnknown* session, HSTRING channelName, abi_t<Windows::System::RemoteSystems::RemoteSystemSessionMessageChannelReliability> reliability, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemSessionOptions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsInviteOnly(bool* value) = 0;
    virtual HRESULT __stdcall put_IsInviteOnly(bool value) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemSessionParticipant>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RemoteSystem(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetHostNames(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemSessionParticipantAddedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Participant(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemSessionParticipantRemovedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Participant(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemSessionParticipantWatcher>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Start() = 0;
    virtual HRESULT __stdcall Stop() = 0;
    virtual HRESULT __stdcall get_Status(abi_t<Windows::System::RemoteSystems::RemoteSystemSessionParticipantWatcherStatus>* value) = 0;
    virtual HRESULT __stdcall add_Added(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Added(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_Removed(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Removed(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_EnumerationCompleted(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_EnumerationCompleted(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemSessionRemovedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SessionInfo(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemSessionStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWatcher(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemSessionUpdatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SessionInfo(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemSessionValueSetReceivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Sender(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Message(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemSessionWatcher>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Start() = 0;
    virtual HRESULT __stdcall Stop() = 0;
    virtual HRESULT __stdcall get_Status(abi_t<Windows::System::RemoteSystems::RemoteSystemSessionWatcherStatus>* value) = 0;
    virtual HRESULT __stdcall add_Added(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Added(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_Updated(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Updated(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_Removed(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Removed(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FindByHostNameAsync(::IUnknown* hostName, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateWatcher(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateWatcherWithFilters(::IUnknown* filters, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall RequestAccessAsync(::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall IsAuthorizationKindEnabled(abi_t<Windows::System::RemoteSystems::RemoteSystemAuthorizationKind> kind, bool* value) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilter>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RemoteSystemStatusType(abi_t<Windows::System::RemoteSystems::RemoteSystemStatusType>* value) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemStatusTypeFilterFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(abi_t<Windows::System::RemoteSystems::RemoteSystemStatusType> remoteSystemStatusType, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemUpdatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RemoteSystem(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::RemoteSystems::IRemoteSystemWatcher>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Start() = 0;
    virtual HRESULT __stdcall Stop() = 0;
    virtual HRESULT __stdcall add_RemoteSystemAdded(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_RemoteSystemAdded(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_RemoteSystemUpdated(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_RemoteSystemUpdated(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_RemoteSystemRemoved(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_RemoteSystemRemoved(abi_t<event_token> token) = 0;
};};

}
