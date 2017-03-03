// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::System::RemoteSystems {

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
struct RemoteSystem;
struct RemoteSystemAddedEventArgs;
struct RemoteSystemAuthorizationKindFilter;
struct RemoteSystemConnectionRequest;
struct RemoteSystemDiscoveryTypeFilter;
struct RemoteSystemKindFilter;
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

namespace Windows::System::RemoteSystems {

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

namespace Windows::System::RemoteSystems {

template <typename T> struct impl_IKnownRemoteSystemCapabilitiesStatics;
template <typename T> struct impl_IRemoteSystem;
template <typename T> struct impl_IRemoteSystem2;
template <typename T> struct impl_IRemoteSystemAddedEventArgs;
template <typename T> struct impl_IRemoteSystemAuthorizationKindFilter;
template <typename T> struct impl_IRemoteSystemAuthorizationKindFilterFactory;
template <typename T> struct impl_IRemoteSystemConnectionRequest;
template <typename T> struct impl_IRemoteSystemConnectionRequestFactory;
template <typename T> struct impl_IRemoteSystemDiscoveryTypeFilter;
template <typename T> struct impl_IRemoteSystemDiscoveryTypeFilterFactory;
template <typename T> struct impl_IRemoteSystemFilter;
template <typename T> struct impl_IRemoteSystemKindFilter;
template <typename T> struct impl_IRemoteSystemKindFilterFactory;
template <typename T> struct impl_IRemoteSystemKindStatics;
template <typename T> struct impl_IRemoteSystemRemovedEventArgs;
template <typename T> struct impl_IRemoteSystemSession;
template <typename T> struct impl_IRemoteSystemSessionAddedEventArgs;
template <typename T> struct impl_IRemoteSystemSessionController;
template <typename T> struct impl_IRemoteSystemSessionControllerFactory;
template <typename T> struct impl_IRemoteSystemSessionCreationResult;
template <typename T> struct impl_IRemoteSystemSessionDisconnectedEventArgs;
template <typename T> struct impl_IRemoteSystemSessionInfo;
template <typename T> struct impl_IRemoteSystemSessionInvitation;
template <typename T> struct impl_IRemoteSystemSessionInvitationListener;
template <typename T> struct impl_IRemoteSystemSessionInvitationReceivedEventArgs;
template <typename T> struct impl_IRemoteSystemSessionJoinRequest;
template <typename T> struct impl_IRemoteSystemSessionJoinRequestedEventArgs;
template <typename T> struct impl_IRemoteSystemSessionJoinResult;
template <typename T> struct impl_IRemoteSystemSessionMessageChannel;
template <typename T> struct impl_IRemoteSystemSessionMessageChannelFactory;
template <typename T> struct impl_IRemoteSystemSessionOptions;
template <typename T> struct impl_IRemoteSystemSessionParticipant;
template <typename T> struct impl_IRemoteSystemSessionParticipantAddedEventArgs;
template <typename T> struct impl_IRemoteSystemSessionParticipantRemovedEventArgs;
template <typename T> struct impl_IRemoteSystemSessionParticipantWatcher;
template <typename T> struct impl_IRemoteSystemSessionRemovedEventArgs;
template <typename T> struct impl_IRemoteSystemSessionStatics;
template <typename T> struct impl_IRemoteSystemSessionUpdatedEventArgs;
template <typename T> struct impl_IRemoteSystemSessionValueSetReceivedEventArgs;
template <typename T> struct impl_IRemoteSystemSessionWatcher;
template <typename T> struct impl_IRemoteSystemStatics;
template <typename T> struct impl_IRemoteSystemStatics2;
template <typename T> struct impl_IRemoteSystemStatusTypeFilter;
template <typename T> struct impl_IRemoteSystemStatusTypeFilterFactory;
template <typename T> struct impl_IRemoteSystemUpdatedEventArgs;
template <typename T> struct impl_IRemoteSystemWatcher;

}

namespace Windows::System::RemoteSystems {

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

}

}
