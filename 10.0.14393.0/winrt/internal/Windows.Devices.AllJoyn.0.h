// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::AllJoyn {

struct IAllJoynAboutData;
struct IAllJoynAboutDataView;
struct IAllJoynAboutDataViewStatics;
struct IAllJoynAcceptSessionJoiner;
struct IAllJoynAcceptSessionJoinerEventArgs;
struct IAllJoynAcceptSessionJoinerEventArgsFactory;
struct IAllJoynAuthenticationCompleteEventArgs;
struct IAllJoynBusAttachment;
struct IAllJoynBusAttachment2;
struct IAllJoynBusAttachmentFactory;
struct IAllJoynBusAttachmentStateChangedEventArgs;
struct IAllJoynBusAttachmentStatics;
struct IAllJoynBusObject;
struct IAllJoynBusObjectFactory;
struct IAllJoynBusObjectStoppedEventArgs;
struct IAllJoynBusObjectStoppedEventArgsFactory;
struct IAllJoynCredentials;
struct IAllJoynCredentialsRequestedEventArgs;
struct IAllJoynCredentialsVerificationRequestedEventArgs;
struct IAllJoynMessageInfo;
struct IAllJoynMessageInfoFactory;
struct IAllJoynProducer;
struct IAllJoynProducerStoppedEventArgs;
struct IAllJoynProducerStoppedEventArgsFactory;
struct IAllJoynServiceInfo;
struct IAllJoynServiceInfoFactory;
struct IAllJoynServiceInfoRemovedEventArgs;
struct IAllJoynServiceInfoRemovedEventArgsFactory;
struct IAllJoynServiceInfoStatics;
struct IAllJoynSession;
struct IAllJoynSessionJoinedEventArgs;
struct IAllJoynSessionJoinedEventArgsFactory;
struct IAllJoynSessionLostEventArgs;
struct IAllJoynSessionLostEventArgsFactory;
struct IAllJoynSessionMemberAddedEventArgs;
struct IAllJoynSessionMemberAddedEventArgsFactory;
struct IAllJoynSessionMemberRemovedEventArgs;
struct IAllJoynSessionMemberRemovedEventArgsFactory;
struct IAllJoynSessionStatics;
struct IAllJoynStatusStatics;
struct IAllJoynWatcherStoppedEventArgs;
struct IAllJoynWatcherStoppedEventArgsFactory;
struct AllJoynAboutData;
struct AllJoynAboutDataView;
struct AllJoynAcceptSessionJoinerEventArgs;
struct AllJoynAuthenticationCompleteEventArgs;
struct AllJoynBusAttachment;
struct AllJoynBusAttachmentStateChangedEventArgs;
struct AllJoynBusObject;
struct AllJoynBusObjectStoppedEventArgs;
struct AllJoynCredentials;
struct AllJoynCredentialsRequestedEventArgs;
struct AllJoynCredentialsVerificationRequestedEventArgs;
struct AllJoynMessageInfo;
struct AllJoynProducerStoppedEventArgs;
struct AllJoynServiceInfo;
struct AllJoynServiceInfoRemovedEventArgs;
struct AllJoynSession;
struct AllJoynSessionJoinedEventArgs;
struct AllJoynSessionLostEventArgs;
struct AllJoynSessionMemberAddedEventArgs;
struct AllJoynSessionMemberRemovedEventArgs;
struct AllJoynWatcherStoppedEventArgs;

}

namespace Windows::Devices::AllJoyn {

struct IAllJoynAboutData;
struct IAllJoynAboutDataView;
struct IAllJoynAboutDataViewStatics;
struct IAllJoynAcceptSessionJoiner;
struct IAllJoynAcceptSessionJoinerEventArgs;
struct IAllJoynAcceptSessionJoinerEventArgsFactory;
struct IAllJoynAuthenticationCompleteEventArgs;
struct IAllJoynBusAttachment;
struct IAllJoynBusAttachment2;
struct IAllJoynBusAttachmentFactory;
struct IAllJoynBusAttachmentStateChangedEventArgs;
struct IAllJoynBusAttachmentStatics;
struct IAllJoynBusObject;
struct IAllJoynBusObjectFactory;
struct IAllJoynBusObjectStoppedEventArgs;
struct IAllJoynBusObjectStoppedEventArgsFactory;
struct IAllJoynCredentials;
struct IAllJoynCredentialsRequestedEventArgs;
struct IAllJoynCredentialsVerificationRequestedEventArgs;
struct IAllJoynMessageInfo;
struct IAllJoynMessageInfoFactory;
struct IAllJoynProducer;
struct IAllJoynProducerStoppedEventArgs;
struct IAllJoynProducerStoppedEventArgsFactory;
struct IAllJoynServiceInfo;
struct IAllJoynServiceInfoFactory;
struct IAllJoynServiceInfoRemovedEventArgs;
struct IAllJoynServiceInfoRemovedEventArgsFactory;
struct IAllJoynServiceInfoStatics;
struct IAllJoynSession;
struct IAllJoynSessionJoinedEventArgs;
struct IAllJoynSessionJoinedEventArgsFactory;
struct IAllJoynSessionLostEventArgs;
struct IAllJoynSessionLostEventArgsFactory;
struct IAllJoynSessionMemberAddedEventArgs;
struct IAllJoynSessionMemberAddedEventArgsFactory;
struct IAllJoynSessionMemberRemovedEventArgs;
struct IAllJoynSessionMemberRemovedEventArgsFactory;
struct IAllJoynSessionStatics;
struct IAllJoynStatusStatics;
struct IAllJoynWatcherStoppedEventArgs;
struct IAllJoynWatcherStoppedEventArgsFactory;
struct AllJoynAboutData;
struct AllJoynAboutDataView;
struct AllJoynAcceptSessionJoinerEventArgs;
struct AllJoynAuthenticationCompleteEventArgs;
struct AllJoynBusAttachment;
struct AllJoynBusAttachmentStateChangedEventArgs;
struct AllJoynBusObject;
struct AllJoynBusObjectStoppedEventArgs;
struct AllJoynCredentials;
struct AllJoynCredentialsRequestedEventArgs;
struct AllJoynCredentialsVerificationRequestedEventArgs;
struct AllJoynMessageInfo;
struct AllJoynProducerStoppedEventArgs;
struct AllJoynServiceInfo;
struct AllJoynServiceInfoRemovedEventArgs;
struct AllJoynSession;
struct AllJoynSessionJoinedEventArgs;
struct AllJoynSessionLostEventArgs;
struct AllJoynSessionMemberAddedEventArgs;
struct AllJoynSessionMemberRemovedEventArgs;
struct AllJoynStatus;
struct AllJoynWatcherStoppedEventArgs;

}

namespace Windows::Devices::AllJoyn {

enum class AllJoynAuthenticationMechanism
{
    None = 0,
    SrpAnonymous = 1,
    SrpLogon = 2,
    EcdheNull = 3,
    EcdhePsk = 4,
    EcdheEcdsa = 5,
    EcdheSpeke = 6,
};

enum class AllJoynBusAttachmentState
{
    Disconnected = 0,
    Connecting = 1,
    Connected = 2,
    Disconnecting = 3,
};

enum class AllJoynSessionLostReason
{
    None = 0,
    ProducerLeftSession = 1,
    ProducerClosedAbruptly = 2,
    RemovedByProducer = 3,
    LinkTimeout = 4,
    Other = 5,
};

enum class AllJoynTrafficType
{
    Unknown = 0,
    Messages = 1,
    RawUnreliable = 2,
    RawReliable = 4,
};

}

}
