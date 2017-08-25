// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration {

struct DeviceWatcher;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Deferral;
struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Globalization {

struct Language;

}

WINRT_EXPORT namespace winrt::Windows::Networking::Sockets {

enum class SocketSslErrorSeverity;

}

WINRT_EXPORT namespace winrt::Windows::Security::Credentials {

struct PasswordCredential;

}

WINRT_EXPORT namespace winrt::Windows::Security::Cryptography::Certificates {

enum class ChainValidationResult;
struct Certificate;

}

WINRT_EXPORT namespace winrt::Windows::Devices::AllJoyn {

enum class AllJoynAuthenticationMechanism
{
    None = 0,
    SrpAnonymous [[deprecated("SrpAnonymous is deprecated and might not work on all platforms. For more info, see MSDN.")]] = 1,
    SrpLogon [[deprecated("SrpLogon is deprecated and might not work on all platforms. For more info, see MSDN.")]] = 2,
    EcdheNull = 3,
    EcdhePsk [[deprecated("EcdhePsk is deprecated and might not work on all platforms. For more info, see MSDN.")]] = 4,
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

namespace winrt::impl {

template <> struct category<Windows::Devices::AllJoyn::IAllJoynAboutData>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynAboutDataView>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynAboutDataViewStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgsFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynBusAttachment>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynBusAttachment2>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynBusAttachmentFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynBusAttachmentStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynBusObject>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynBusObjectFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgsFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynCredentials>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynMessageInfo>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynMessageInfoFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynProducer>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgsFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynServiceInfo>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynServiceInfoFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgsFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynServiceInfoStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynSession>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgsFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgsFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgsFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgsFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynSessionStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynStatusStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgsFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::AllJoyn::AllJoynAboutData>{ using type = class_category; };
template <> struct category<Windows::Devices::AllJoyn::AllJoynAboutDataView>{ using type = class_category; };
template <> struct category<Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::AllJoyn::AllJoynAuthenticationCompleteEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::AllJoyn::AllJoynBusAttachment>{ using type = class_category; };
template <> struct category<Windows::Devices::AllJoyn::AllJoynBusAttachmentStateChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::AllJoyn::AllJoynBusObject>{ using type = class_category; };
template <> struct category<Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::AllJoyn::AllJoynCredentials>{ using type = class_category; };
template <> struct category<Windows::Devices::AllJoyn::AllJoynCredentialsRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::AllJoyn::AllJoynCredentialsVerificationRequestedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::AllJoyn::AllJoynMessageInfo>{ using type = class_category; };
template <> struct category<Windows::Devices::AllJoyn::AllJoynProducerStoppedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::AllJoyn::AllJoynServiceInfo>{ using type = class_category; };
template <> struct category<Windows::Devices::AllJoyn::AllJoynServiceInfoRemovedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::AllJoyn::AllJoynSession>{ using type = class_category; };
template <> struct category<Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::AllJoyn::AllJoynStatus>{ using type = class_category; };
template <> struct category<Windows::Devices::AllJoyn::AllJoynWatcherStoppedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism>{ using type = enum_category; };
template <> struct category<Windows::Devices::AllJoyn::AllJoynBusAttachmentState>{ using type = enum_category; };
template <> struct category<Windows::Devices::AllJoyn::AllJoynSessionLostReason>{ using type = enum_category; };
template <> struct category<Windows::Devices::AllJoyn::AllJoynTrafficType>{ using type = enum_category; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynAboutData>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynAboutData" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynAboutDataView>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynAboutDataView" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynAboutDataViewStatics>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynAboutDataViewStatics" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynAcceptSessionJoiner" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynAcceptSessionJoinerEventArgs" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgsFactory>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynAcceptSessionJoinerEventArgsFactory" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynAuthenticationCompleteEventArgs" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynBusAttachment>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynBusAttachment" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynBusAttachment2>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynBusAttachment2" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynBusAttachmentFactory>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynBusAttachmentFactory" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynBusAttachmentStateChangedEventArgs" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynBusAttachmentStatics>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynBusAttachmentStatics" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynBusObject>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynBusObject" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynBusObjectFactory>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynBusObjectFactory" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynBusObjectStoppedEventArgs" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgsFactory>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynBusObjectStoppedEventArgsFactory" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynCredentials>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynCredentials" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynCredentialsRequestedEventArgs" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynCredentialsVerificationRequestedEventArgs" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynMessageInfo>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynMessageInfo" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynMessageInfoFactory>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynMessageInfoFactory" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynProducer>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynProducer" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynProducerStoppedEventArgs" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgsFactory>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynProducerStoppedEventArgsFactory" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynServiceInfo>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynServiceInfo" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynServiceInfoFactory>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynServiceInfoFactory" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynServiceInfoRemovedEventArgs" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgsFactory>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynServiceInfoRemovedEventArgsFactory" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynServiceInfoStatics>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynServiceInfoStatics" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynSession>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynSession" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynSessionJoinedEventArgs" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgsFactory>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynSessionJoinedEventArgsFactory" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynSessionLostEventArgs" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgsFactory>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynSessionLostEventArgsFactory" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynSessionMemberAddedEventArgs" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgsFactory>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynSessionMemberAddedEventArgsFactory" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynSessionMemberRemovedEventArgs" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgsFactory>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynSessionMemberRemovedEventArgsFactory" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynSessionStatics>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynSessionStatics" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynStatusStatics>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynStatusStatics" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynWatcherStoppedEventArgs" }; };
template <> struct name<Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgsFactory>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.IAllJoynWatcherStoppedEventArgsFactory" }; };
template <> struct name<Windows::Devices::AllJoyn::AllJoynAboutData>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.AllJoynAboutData" }; };
template <> struct name<Windows::Devices::AllJoyn::AllJoynAboutDataView>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.AllJoynAboutDataView" }; };
template <> struct name<Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.AllJoynAcceptSessionJoinerEventArgs" }; };
template <> struct name<Windows::Devices::AllJoyn::AllJoynAuthenticationCompleteEventArgs>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.AllJoynAuthenticationCompleteEventArgs" }; };
template <> struct name<Windows::Devices::AllJoyn::AllJoynBusAttachment>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.AllJoynBusAttachment" }; };
template <> struct name<Windows::Devices::AllJoyn::AllJoynBusAttachmentStateChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.AllJoynBusAttachmentStateChangedEventArgs" }; };
template <> struct name<Windows::Devices::AllJoyn::AllJoynBusObject>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.AllJoynBusObject" }; };
template <> struct name<Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.AllJoynBusObjectStoppedEventArgs" }; };
template <> struct name<Windows::Devices::AllJoyn::AllJoynCredentials>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.AllJoynCredentials" }; };
template <> struct name<Windows::Devices::AllJoyn::AllJoynCredentialsRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.AllJoynCredentialsRequestedEventArgs" }; };
template <> struct name<Windows::Devices::AllJoyn::AllJoynCredentialsVerificationRequestedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.AllJoynCredentialsVerificationRequestedEventArgs" }; };
template <> struct name<Windows::Devices::AllJoyn::AllJoynMessageInfo>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.AllJoynMessageInfo" }; };
template <> struct name<Windows::Devices::AllJoyn::AllJoynProducerStoppedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.AllJoynProducerStoppedEventArgs" }; };
template <> struct name<Windows::Devices::AllJoyn::AllJoynServiceInfo>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.AllJoynServiceInfo" }; };
template <> struct name<Windows::Devices::AllJoyn::AllJoynServiceInfoRemovedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.AllJoynServiceInfoRemovedEventArgs" }; };
template <> struct name<Windows::Devices::AllJoyn::AllJoynSession>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.AllJoynSession" }; };
template <> struct name<Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.AllJoynSessionJoinedEventArgs" }; };
template <> struct name<Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.AllJoynSessionLostEventArgs" }; };
template <> struct name<Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.AllJoynSessionMemberAddedEventArgs" }; };
template <> struct name<Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.AllJoynSessionMemberRemovedEventArgs" }; };
template <> struct name<Windows::Devices::AllJoyn::AllJoynStatus>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.AllJoynStatus" }; };
template <> struct name<Windows::Devices::AllJoyn::AllJoynWatcherStoppedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.AllJoynWatcherStoppedEventArgs" }; };
template <> struct name<Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.AllJoynAuthenticationMechanism" }; };
template <> struct name<Windows::Devices::AllJoyn::AllJoynBusAttachmentState>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.AllJoynBusAttachmentState" }; };
template <> struct name<Windows::Devices::AllJoyn::AllJoynSessionLostReason>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.AllJoynSessionLostReason" }; };
template <> struct name<Windows::Devices::AllJoyn::AllJoynTrafficType>{ static constexpr auto & value{ L"Windows.Devices.AllJoyn.AllJoynTrafficType" }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynAboutData>{ static constexpr GUID value{ 0xE5A9BF00,0x1FA2,0x4839,{ 0x93,0xEF,0xF9,0xDF,0x40,0x48,0x90,0xF7 } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynAboutDataView>{ static constexpr GUID value{ 0x6823111F,0x6212,0x4934,{ 0x9C,0x48,0xE1,0x9C,0xA4,0x98,0x42,0x88 } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynAboutDataViewStatics>{ static constexpr GUID value{ 0x57EDB688,0x0C5E,0x416E,{ 0x88,0xB5,0x39,0xB3,0x2D,0x25,0xC4,0x7D } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner>{ static constexpr GUID value{ 0x4DA817D2,0xCD1D,0x4023,{ 0xA7,0xC4,0x16,0xDE,0xF8,0x9C,0x28,0xDF } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs>{ static constexpr GUID value{ 0x4EFB5365,0x3E8A,0x4257,{ 0x8F,0x10,0x53,0x9C,0xE0,0xD5,0x6C,0x0F } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgsFactory>{ static constexpr GUID value{ 0xB4435BC0,0x6145,0x429E,{ 0x84,0xDB,0xD5,0xBF,0xE7,0x72,0xB1,0x4F } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs>{ static constexpr GUID value{ 0x97B4701C,0x15DC,0x4B53,{ 0xB6,0xA4,0x7D,0x13,0x43,0x00,0xD7,0xBF } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynBusAttachment>{ static constexpr GUID value{ 0xF309F153,0x1EED,0x42C3,{ 0xA2,0x0E,0x43,0x6D,0x41,0xFE,0x62,0xF6 } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynBusAttachment2>{ static constexpr GUID value{ 0x3474CB1E,0x2368,0x43B2,{ 0xB4,0x3E,0x6A,0x3A,0xC1,0x27,0x8D,0x98 } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynBusAttachmentFactory>{ static constexpr GUID value{ 0x642EF1A4,0xAD85,0x4DDF,{ 0x90,0xAE,0x60,0x44,0x52,0xB2,0x22,0x88 } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs>{ static constexpr GUID value{ 0xD82E75F4,0xC02A,0x41EC,{ 0xA8,0xD5,0xEA,0xB1,0x55,0x89,0x53,0xAA } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynBusAttachmentStatics>{ static constexpr GUID value{ 0x839D4D3D,0x1051,0x40D7,{ 0x87,0x2A,0x8D,0x01,0x41,0x11,0x5B,0x1F } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynBusObject>{ static constexpr GUID value{ 0xE8FD825E,0xF73A,0x490C,{ 0x88,0x04,0x04,0xE0,0x26,0x64,0x30,0x47 } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynBusObjectFactory>{ static constexpr GUID value{ 0x2C2F9F0B,0x8E02,0x4F9C,{ 0xAC,0x27,0xEA,0x6D,0xAD,0x5D,0x3B,0x50 } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs>{ static constexpr GUID value{ 0xDE102115,0xEF8E,0x4D42,{ 0xB9,0x3B,0xA2,0xAE,0x74,0x51,0x97,0x66 } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgsFactory>{ static constexpr GUID value{ 0x6B22FD48,0xD0A3,0x4255,{ 0x95,0x3A,0x47,0x72,0xB4,0x02,0x80,0x73 } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynCredentials>{ static constexpr GUID value{ 0x824650F2,0xA190,0x40B1,{ 0xAB,0xAB,0x34,0x9E,0xC2,0x44,0xDF,0xAA } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs>{ static constexpr GUID value{ 0x6A87E34E,0xB069,0x4B80,{ 0x9E,0x1A,0x41,0xBC,0x83,0x7C,0x65,0xD2 } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs>{ static constexpr GUID value{ 0x800A7612,0xB805,0x44AF,{ 0xA2,0xE1,0x79,0x2A,0xB6,0x55,0xA2,0xD0 } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynMessageInfo>{ static constexpr GUID value{ 0xFF2B0127,0x2C12,0x4859,{ 0xAA,0x3A,0xC7,0x44,0x61,0xEE,0x81,0x4C } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynMessageInfoFactory>{ static constexpr GUID value{ 0x34664C2A,0x8289,0x43D4,{ 0xB4,0xA8,0x3F,0x4D,0xE3,0x59,0xF0,0x43 } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynProducer>{ static constexpr GUID value{ 0x9D084679,0x469B,0x495A,{ 0xA7,0x10,0xAC,0x50,0xF1,0x23,0x06,0x9F } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgs>{ static constexpr GUID value{ 0x51309770,0x4937,0x492D,{ 0x80,0x80,0x23,0x64,0x39,0x98,0x7C,0xEB } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgsFactory>{ static constexpr GUID value{ 0x56529961,0xB219,0x4D6E,{ 0x9F,0x78,0xFA,0x3F,0x99,0xFA,0x8F,0xE5 } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynServiceInfo>{ static constexpr GUID value{ 0x4CBE8209,0xB93E,0x4182,{ 0x99,0x9B,0xDD,0xD0,0x00,0xF9,0xC5,0x75 } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynServiceInfoFactory>{ static constexpr GUID value{ 0x7581DABD,0xFE03,0x4F4B,{ 0x94,0xA4,0xF0,0x2F,0xDC,0xBD,0x11,0xB8 } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgs>{ static constexpr GUID value{ 0x3057A95F,0x1D3F,0x41F3,{ 0x89,0x69,0xE3,0x27,0x92,0x62,0x73,0x96 } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgsFactory>{ static constexpr GUID value{ 0x0DBF8627,0x9AFF,0x4955,{ 0x92,0x27,0x69,0x53,0xBA,0xF4,0x15,0x69 } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynServiceInfoStatics>{ static constexpr GUID value{ 0x5678570A,0x603A,0x49FC,{ 0xB7,0x50,0x0E,0xF1,0x36,0x09,0x21,0x3C } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynSession>{ static constexpr GUID value{ 0xE8D11B0C,0xC0D4,0x406C,{ 0x88,0xA9,0xA9,0x3E,0xFA,0x85,0xD4,0xB1 } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs>{ static constexpr GUID value{ 0x9E9F5BD0,0xB5D7,0x47C5,{ 0x8D,0xAB,0xB0,0x40,0xCC,0x19,0x28,0x71 } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgsFactory>{ static constexpr GUID value{ 0x6824D689,0xD6CB,0x4D9E,{ 0xA0,0x9E,0x35,0x80,0x68,0x70,0xB1,0x7F } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs>{ static constexpr GUID value{ 0xE766A48A,0x8BB8,0x4954,{ 0xAE,0x67,0xD2,0xFA,0x43,0xD1,0xF9,0x6B } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgsFactory>{ static constexpr GUID value{ 0x13BBFD32,0xD2F4,0x49C9,{ 0x98,0x0E,0x28,0x05,0xE1,0x35,0x86,0xB1 } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs>{ static constexpr GUID value{ 0x49A2798A,0x0DD1,0x46C1,{ 0x9C,0xD6,0x27,0x19,0x0E,0x50,0x3A,0x5E } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgsFactory>{ static constexpr GUID value{ 0x341DE352,0x1D33,0x40A1,{ 0xA1,0xD3,0xE5,0x77,0x70,0x20,0xE1,0xF1 } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs>{ static constexpr GUID value{ 0x409A219F,0xAA4A,0x4893,{ 0xB4,0x30,0xBA,0xA1,0xB6,0x3C,0x62,0x19 } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgsFactory>{ static constexpr GUID value{ 0xC4D355E8,0x42B8,0x4B67,{ 0xB7,0x57,0xD0,0xCF,0xCA,0xD5,0x92,0x80 } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynSessionStatics>{ static constexpr GUID value{ 0x9E05D604,0xA06C,0x46D4,{ 0xB4,0x6C,0x0B,0x0B,0x54,0x10,0x5B,0x44 } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynStatusStatics>{ static constexpr GUID value{ 0xD0B7A17E,0x0D29,0x4DA9,{ 0x8A,0xC6,0x54,0xC5,0x54,0xBE,0xDB,0xC5 } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgs>{ static constexpr GUID value{ 0xC9FCA03B,0x701D,0x4AA8,{ 0x97,0xDD,0xA2,0xBB,0x0A,0x8F,0x5F,0xA3 } }; };
template <> struct guid<Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgsFactory>{ static constexpr GUID value{ 0x878FA5A8,0x2D50,0x47E1,{ 0x90,0x4A,0x20,0xBF,0x0D,0x48,0xC7,0x82 } }; };
template <> struct default_interface<Windows::Devices::AllJoyn::AllJoynAboutData>{ using type = Windows::Devices::AllJoyn::IAllJoynAboutData; };
template <> struct default_interface<Windows::Devices::AllJoyn::AllJoynAboutDataView>{ using type = Windows::Devices::AllJoyn::IAllJoynAboutDataView; };
template <> struct default_interface<Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs>{ using type = Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs; };
template <> struct default_interface<Windows::Devices::AllJoyn::AllJoynAuthenticationCompleteEventArgs>{ using type = Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs; };
template <> struct default_interface<Windows::Devices::AllJoyn::AllJoynBusAttachment>{ using type = Windows::Devices::AllJoyn::IAllJoynBusAttachment; };
template <> struct default_interface<Windows::Devices::AllJoyn::AllJoynBusAttachmentStateChangedEventArgs>{ using type = Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs; };
template <> struct default_interface<Windows::Devices::AllJoyn::AllJoynBusObject>{ using type = Windows::Devices::AllJoyn::IAllJoynBusObject; };
template <> struct default_interface<Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs>{ using type = Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs; };
template <> struct default_interface<Windows::Devices::AllJoyn::AllJoynCredentials>{ using type = Windows::Devices::AllJoyn::IAllJoynCredentials; };
template <> struct default_interface<Windows::Devices::AllJoyn::AllJoynCredentialsRequestedEventArgs>{ using type = Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs; };
template <> struct default_interface<Windows::Devices::AllJoyn::AllJoynCredentialsVerificationRequestedEventArgs>{ using type = Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs; };
template <> struct default_interface<Windows::Devices::AllJoyn::AllJoynMessageInfo>{ using type = Windows::Devices::AllJoyn::IAllJoynMessageInfo; };
template <> struct default_interface<Windows::Devices::AllJoyn::AllJoynProducerStoppedEventArgs>{ using type = Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgs; };
template <> struct default_interface<Windows::Devices::AllJoyn::AllJoynServiceInfo>{ using type = Windows::Devices::AllJoyn::IAllJoynServiceInfo; };
template <> struct default_interface<Windows::Devices::AllJoyn::AllJoynServiceInfoRemovedEventArgs>{ using type = Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgs; };
template <> struct default_interface<Windows::Devices::AllJoyn::AllJoynSession>{ using type = Windows::Devices::AllJoyn::IAllJoynSession; };
template <> struct default_interface<Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs>{ using type = Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs; };
template <> struct default_interface<Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs>{ using type = Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs; };
template <> struct default_interface<Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs>{ using type = Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs; };
template <> struct default_interface<Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs>{ using type = Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs; };
template <> struct default_interface<Windows::Devices::AllJoyn::AllJoynWatcherStoppedEventArgs>{ using type = Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgs; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynAboutData
{
    bool IsEnabled() const;
    void IsEnabled(bool value) const;
    hstring DefaultAppName() const;
    void DefaultAppName(param::hstring const& value) const;
    Windows::Foundation::Collections::IMap<hstring, hstring> AppNames() const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> DateOfManufacture() const;
    void DateOfManufacture(optional<Windows::Foundation::DateTime> const& value) const;
    hstring DefaultDescription() const;
    void DefaultDescription(param::hstring const& value) const;
    Windows::Foundation::Collections::IMap<hstring, hstring> Descriptions() const;
    hstring DefaultManufacturer() const;
    void DefaultManufacturer(param::hstring const& value) const;
    Windows::Foundation::Collections::IMap<hstring, hstring> Manufacturers() const;
    hstring ModelNumber() const;
    void ModelNumber(param::hstring const& value) const;
    hstring SoftwareVersion() const;
    void SoftwareVersion(param::hstring const& value) const;
    Windows::Foundation::Uri SupportUrl() const;
    void SupportUrl(Windows::Foundation::Uri const& value) const;
    GUID AppId() const;
    void AppId(GUID const& value) const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynAboutData> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynAboutData<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView
{
    int32_t Status() const;
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> Properties() const;
    hstring AJSoftwareVersion() const;
    GUID AppId() const;
    Windows::Foundation::IReference<Windows::Foundation::DateTime> DateOfManufacture() const;
    Windows::Globalization::Language DefaultLanguage() const;
    hstring DeviceId() const;
    hstring HardwareVersion() const;
    hstring ModelNumber() const;
    hstring SoftwareVersion() const;
    Windows::Foundation::Collections::IVectorView<Windows::Globalization::Language> SupportedLanguages() const;
    Windows::Foundation::Uri SupportUrl() const;
    hstring AppName() const;
    hstring Description() const;
    hstring DeviceName() const;
    hstring Manufacturer() const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynAboutDataView> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynAboutDataView<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynAboutDataViewStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView> GetDataBySessionPortAsync(param::hstring const& uniqueName, Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment, uint16_t sessionPort) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView> GetDataBySessionPortAsync(param::hstring const& uniqueName, Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment, uint16_t sessionPort, Windows::Globalization::Language const& language) const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynAboutDataViewStatics> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynAboutDataViewStatics<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynAcceptSessionJoiner
{
    void Accept() const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynAcceptSessionJoiner<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynAcceptSessionJoinerEventArgs
{
    hstring UniqueName() const;
    uint16_t SessionPort() const;
    Windows::Devices::AllJoyn::AllJoynTrafficType TrafficType() const;
    bool SamePhysicalNode() const;
    bool SameNetwork() const;
    void Accept() const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynAcceptSessionJoinerEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynAcceptSessionJoinerEventArgsFactory
{
    Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs Create(param::hstring const& uniqueName, uint16_t sessionPort, Windows::Devices::AllJoyn::AllJoynTrafficType const& trafficType, uint8_t proximity, Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner const& acceptSessionJoiner) const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgsFactory> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynAcceptSessionJoinerEventArgsFactory<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynAuthenticationCompleteEventArgs
{
    Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism AuthenticationMechanism() const;
    hstring PeerUniqueName() const;
    bool Succeeded() const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynAuthenticationCompleteEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment
{
    Windows::Devices::AllJoyn::AllJoynAboutData AboutData() const;
    hstring ConnectionSpecification() const;
    Windows::Devices::AllJoyn::AllJoynBusAttachmentState State() const;
    hstring UniqueName() const;
    Windows::Foundation::IAsyncOperation<int32_t> PingAsync(param::hstring const& uniqueName) const;
    void Connect() const;
    void Disconnect() const;
    event_token StateChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynBusAttachmentStateChangedEventArgs> const& handler) const;
    using StateChanged_revoker = event_revoker<Windows::Devices::AllJoyn::IAllJoynBusAttachment>;
    StateChanged_revoker StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynBusAttachmentStateChangedEventArgs> const& handler) const;
    void StateChanged(event_token const& token) const;
    Windows::Foundation::Collections::IVector<Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism> AuthenticationMechanisms() const;
    event_token CredentialsRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynCredentialsRequestedEventArgs> const& handler) const;
    using CredentialsRequested_revoker = event_revoker<Windows::Devices::AllJoyn::IAllJoynBusAttachment>;
    CredentialsRequested_revoker CredentialsRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynCredentialsRequestedEventArgs> const& handler) const;
    void CredentialsRequested(event_token const& token) const;
    event_token CredentialsVerificationRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynCredentialsVerificationRequestedEventArgs> const& handler) const;
    using CredentialsVerificationRequested_revoker = event_revoker<Windows::Devices::AllJoyn::IAllJoynBusAttachment>;
    CredentialsVerificationRequested_revoker CredentialsVerificationRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynCredentialsVerificationRequestedEventArgs> const& handler) const;
    void CredentialsVerificationRequested(event_token const& token) const;
    event_token AuthenticationComplete(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynAuthenticationCompleteEventArgs> const& handler) const;
    using AuthenticationComplete_revoker = event_revoker<Windows::Devices::AllJoyn::IAllJoynBusAttachment>;
    AuthenticationComplete_revoker AuthenticationComplete(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynAuthenticationCompleteEventArgs> const& handler) const;
    void AuthenticationComplete(event_token const& token) const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynBusAttachment> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment2
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView> GetAboutDataAsync(Windows::Devices::AllJoyn::AllJoynServiceInfo const& serviceInfo) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynAboutDataView> GetAboutDataAsync(Windows::Devices::AllJoyn::AllJoynServiceInfo const& serviceInfo, Windows::Globalization::Language const& language) const;
    event_token AcceptSessionJoinerRequested(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs> const& handler) const;
    using AcceptSessionJoinerRequested_revoker = event_revoker<Windows::Devices::AllJoyn::IAllJoynBusAttachment2>;
    AcceptSessionJoinerRequested_revoker AcceptSessionJoinerRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs> const& handler) const;
    void AcceptSessionJoinerRequested(event_token const& token) const;
    event_token SessionJoined(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs> const& handler) const;
    using SessionJoined_revoker = event_revoker<Windows::Devices::AllJoyn::IAllJoynBusAttachment2>;
    SessionJoined_revoker SessionJoined(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusAttachment, Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs> const& handler) const;
    void SessionJoined(event_token const& token) const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynBusAttachment2> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynBusAttachment2<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynBusAttachmentFactory
{
    Windows::Devices::AllJoyn::AllJoynBusAttachment Create(param::hstring const& connectionSpecification) const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynBusAttachmentFactory> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynBusAttachmentFactory<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynBusAttachmentStateChangedEventArgs
{
    Windows::Devices::AllJoyn::AllJoynBusAttachmentState State() const;
    int32_t Status() const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynBusAttachmentStateChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynBusAttachmentStatics
{
    Windows::Devices::AllJoyn::AllJoynBusAttachment GetDefault() const;
    Windows::Devices::Enumeration::DeviceWatcher GetWatcher(param::iterable<hstring> const& requiredInterfaces) const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynBusAttachmentStatics> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynBusAttachmentStatics<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynBusObject
{
    void Start() const;
    void Stop() const;
    void AddProducer(Windows::Devices::AllJoyn::IAllJoynProducer const& producer) const;
    Windows::Devices::AllJoyn::AllJoynBusAttachment BusAttachment() const;
    Windows::Devices::AllJoyn::AllJoynSession Session() const;
    event_token Stopped(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusObject, Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs> const& handler) const;
    using Stopped_revoker = event_revoker<Windows::Devices::AllJoyn::IAllJoynBusObject>;
    Stopped_revoker Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynBusObject, Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs> const& handler) const;
    void Stopped(event_token const& token) const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynBusObject> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynBusObject<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynBusObjectFactory
{
    Windows::Devices::AllJoyn::AllJoynBusObject Create(param::hstring const& objectPath) const;
    Windows::Devices::AllJoyn::AllJoynBusObject CreateWithBusAttachment(param::hstring const& objectPath, Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment) const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynBusObjectFactory> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynBusObjectFactory<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynBusObjectStoppedEventArgs
{
    int32_t Status() const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynBusObjectStoppedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynBusObjectStoppedEventArgsFactory
{
    Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs Create(int32_t status) const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgsFactory> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynBusObjectStoppedEventArgsFactory<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynCredentials
{
    Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism AuthenticationMechanism() const;
    Windows::Security::Cryptography::Certificates::Certificate Certificate() const;
    void Certificate(Windows::Security::Cryptography::Certificates::Certificate const& value) const;
    Windows::Security::Credentials::PasswordCredential PasswordCredential() const;
    void PasswordCredential(Windows::Security::Credentials::PasswordCredential const& value) const;
    Windows::Foundation::TimeSpan Timeout() const;
    void Timeout(Windows::Foundation::TimeSpan const& value) const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynCredentials> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynCredentials<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynCredentialsRequestedEventArgs
{
    uint16_t AttemptCount() const;
    Windows::Devices::AllJoyn::AllJoynCredentials Credentials() const;
    hstring PeerUniqueName() const;
    hstring RequestedUserName() const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynCredentialsRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynCredentialsVerificationRequestedEventArgs
{
    Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism AuthenticationMechanism() const;
    hstring PeerUniqueName() const;
    Windows::Security::Cryptography::Certificates::Certificate PeerCertificate() const;
    Windows::Networking::Sockets::SocketSslErrorSeverity PeerCertificateErrorSeverity() const;
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::ChainValidationResult> PeerCertificateErrors() const;
    Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate> PeerIntermediateCertificates() const;
    void Accept() const;
    Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynCredentialsVerificationRequestedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynMessageInfo
{
    hstring SenderUniqueName() const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynMessageInfo> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynMessageInfo<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynMessageInfoFactory
{
    Windows::Devices::AllJoyn::AllJoynMessageInfo Create(param::hstring const& senderUniqueName) const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynMessageInfoFactory> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynMessageInfoFactory<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynProducer
{
    void SetBusObject(Windows::Devices::AllJoyn::AllJoynBusObject const& busObject) const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynProducer> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynProducer<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynProducerStoppedEventArgs
{
    int32_t Status() const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgs> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynProducerStoppedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynProducerStoppedEventArgsFactory
{
    Windows::Devices::AllJoyn::AllJoynProducerStoppedEventArgs Create(int32_t status) const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgsFactory> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynProducerStoppedEventArgsFactory<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynServiceInfo
{
    hstring UniqueName() const;
    hstring ObjectPath() const;
    uint16_t SessionPort() const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynServiceInfo> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynServiceInfo<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynServiceInfoFactory
{
    Windows::Devices::AllJoyn::AllJoynServiceInfo Create(param::hstring const& uniqueName, param::hstring const& objectPath, uint16_t sessionPort) const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynServiceInfoFactory> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynServiceInfoFactory<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynServiceInfoRemovedEventArgs
{
    hstring UniqueName() const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgs> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynServiceInfoRemovedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynServiceInfoRemovedEventArgsFactory
{
    Windows::Devices::AllJoyn::AllJoynServiceInfoRemovedEventArgs Create(param::hstring const& uniqueName) const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgsFactory> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynServiceInfoRemovedEventArgsFactory<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynServiceInfoStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynServiceInfo> FromIdAsync(param::hstring const& deviceId) const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynServiceInfoStatics> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynServiceInfoStatics<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynSession
{
    int32_t Id() const;
    int32_t Status() const;
    Windows::Foundation::IAsyncOperation<int32_t> RemoveMemberAsync(param::hstring const& uniqueName) const;
    event_token MemberAdded(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs> const& handler) const;
    using MemberAdded_revoker = event_revoker<Windows::Devices::AllJoyn::IAllJoynSession>;
    MemberAdded_revoker MemberAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs> const& handler) const;
    void MemberAdded(event_token const& token) const;
    event_token MemberRemoved(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs> const& handler) const;
    using MemberRemoved_revoker = event_revoker<Windows::Devices::AllJoyn::IAllJoynSession>;
    MemberRemoved_revoker MemberRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs> const& handler) const;
    void MemberRemoved(event_token const& token) const;
    event_token Lost(Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs> const& handler) const;
    using Lost_revoker = event_revoker<Windows::Devices::AllJoyn::IAllJoynSession>;
    Lost_revoker Lost(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::AllJoyn::AllJoynSession, Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs> const& handler) const;
    void Lost(event_token const& token) const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynSession> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynSession<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynSessionJoinedEventArgs
{
    Windows::Devices::AllJoyn::AllJoynSession Session() const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynSessionJoinedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynSessionJoinedEventArgsFactory
{
    Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs Create(Windows::Devices::AllJoyn::AllJoynSession const& session) const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgsFactory> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynSessionJoinedEventArgsFactory<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynSessionLostEventArgs
{
    Windows::Devices::AllJoyn::AllJoynSessionLostReason Reason() const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynSessionLostEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynSessionLostEventArgsFactory
{
    Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs Create(Windows::Devices::AllJoyn::AllJoynSessionLostReason const& reason) const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgsFactory> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynSessionLostEventArgsFactory<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynSessionMemberAddedEventArgs
{
    hstring UniqueName() const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynSessionMemberAddedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynSessionMemberAddedEventArgsFactory
{
    Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs Create(param::hstring const& uniqueName) const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgsFactory> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynSessionMemberAddedEventArgsFactory<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynSessionMemberRemovedEventArgs
{
    hstring UniqueName() const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynSessionMemberRemovedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynSessionMemberRemovedEventArgsFactory
{
    Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs Create(param::hstring const& uniqueName) const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgsFactory> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynSessionMemberRemovedEventArgsFactory<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynSessionStatics
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynSession> GetFromServiceInfoAsync(Windows::Devices::AllJoyn::AllJoynServiceInfo const& serviceInfo) const;
    Windows::Foundation::IAsyncOperation<Windows::Devices::AllJoyn::AllJoynSession> GetFromServiceInfoAsync(Windows::Devices::AllJoyn::AllJoynServiceInfo const& serviceInfo, Windows::Devices::AllJoyn::AllJoynBusAttachment const& busAttachment) const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynSessionStatics> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynSessionStatics<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics
{
    int32_t Ok() const;
    int32_t Fail() const;
    int32_t OperationTimedOut() const;
    int32_t OtherEndClosed() const;
    int32_t ConnectionRefused() const;
    int32_t AuthenticationFailed() const;
    int32_t AuthenticationRejectedByUser() const;
    int32_t SslConnectFailed() const;
    int32_t SslIdentityVerificationFailed() const;
    int32_t InsufficientSecurity() const;
    int32_t InvalidArgument1() const;
    int32_t InvalidArgument2() const;
    int32_t InvalidArgument3() const;
    int32_t InvalidArgument4() const;
    int32_t InvalidArgument5() const;
    int32_t InvalidArgument6() const;
    int32_t InvalidArgument7() const;
    int32_t InvalidArgument8() const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynStatusStatics> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynStatusStatics<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynWatcherStoppedEventArgs
{
    int32_t Status() const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgs> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynWatcherStoppedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_AllJoyn_IAllJoynWatcherStoppedEventArgsFactory
{
    Windows::Devices::AllJoyn::AllJoynWatcherStoppedEventArgs Create(int32_t status) const;
};
template <> struct consume<Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgsFactory> { template <typename D> using type = consume_Windows_Devices_AllJoyn_IAllJoynWatcherStoppedEventArgsFactory<D>; };

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynAboutData>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_DefaultAppName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_DefaultAppName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_AppNames(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DateOfManufacture(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_DateOfManufacture(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_DefaultDescription(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_DefaultDescription(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Descriptions(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DefaultManufacturer(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_DefaultManufacturer(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Manufacturers(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ModelNumber(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_ModelNumber(HSTRING value) = 0;
    virtual HRESULT __stdcall get_SoftwareVersion(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_SoftwareVersion(HSTRING value) = 0;
    virtual HRESULT __stdcall get_SupportUrl(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_SupportUrl(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_AppId(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall put_AppId(abi_t<GUID> value) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynAboutDataView>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(int32_t* value) = 0;
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AJSoftwareVersion(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AppId(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall get_DateOfManufacture(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DefaultLanguage(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_HardwareVersion(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ModelNumber(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SoftwareVersion(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SupportedLanguages(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SupportUrl(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AppName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Description(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DeviceName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Manufacturer(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynAboutDataViewStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDataBySessionPortAsync(HSTRING uniqueName, ::IUnknown* busAttachment, uint16_t sessionPort, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetDataBySessionPortWithLanguageAsync(HSTRING uniqueName, ::IUnknown* busAttachment, uint16_t sessionPort, ::IUnknown* language, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Accept() = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_UniqueName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SessionPort(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_TrafficType(abi_t<Windows::Devices::AllJoyn::AllJoynTrafficType>* value) = 0;
    virtual HRESULT __stdcall get_SamePhysicalNode(bool* value) = 0;
    virtual HRESULT __stdcall get_SameNetwork(bool* value) = 0;
    virtual HRESULT __stdcall Accept() = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgsFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING uniqueName, uint16_t sessionPort, abi_t<Windows::Devices::AllJoyn::AllJoynTrafficType> trafficType, uint8_t proximity, ::IUnknown* acceptSessionJoiner, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AuthenticationMechanism(abi_t<Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism>* value) = 0;
    virtual HRESULT __stdcall get_PeerUniqueName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Succeeded(bool* value) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynBusAttachment>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AboutData(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ConnectionSpecification(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_State(abi_t<Windows::Devices::AllJoyn::AllJoynBusAttachmentState>* value) = 0;
    virtual HRESULT __stdcall get_UniqueName(HSTRING* value) = 0;
    virtual HRESULT __stdcall PingAsync(HSTRING uniqueName, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall Connect() = 0;
    virtual HRESULT __stdcall Disconnect() = 0;
    virtual HRESULT __stdcall add_StateChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_StateChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_AuthenticationMechanisms(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_CredentialsRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_CredentialsRequested(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_CredentialsVerificationRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_CredentialsVerificationRequested(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_AuthenticationComplete(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_AuthenticationComplete(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynBusAttachment2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetAboutDataAsync(::IUnknown* serviceInfo, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetAboutDataWithLanguageAsync(::IUnknown* serviceInfo, ::IUnknown* language, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall add_AcceptSessionJoinerRequested(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_AcceptSessionJoinerRequested(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_SessionJoined(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_SessionJoined(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynBusAttachmentFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING connectionSpecification, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_State(abi_t<Windows::Devices::AllJoyn::AllJoynBusAttachmentState>* value) = 0;
    virtual HRESULT __stdcall get_Status(int32_t* value) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynBusAttachmentStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefault(::IUnknown** defaultBusAttachment) = 0;
    virtual HRESULT __stdcall GetWatcher(::IUnknown* requiredInterfaces, ::IUnknown** deviceWatcher) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynBusObject>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Start() = 0;
    virtual HRESULT __stdcall Stop() = 0;
    virtual HRESULT __stdcall AddProducer(::IUnknown* producer) = 0;
    virtual HRESULT __stdcall get_BusAttachment(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Session(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_Stopped(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Stopped(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynBusObjectFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING objectPath, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall CreateWithBusAttachment(HSTRING objectPath, ::IUnknown* busAttachment, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(int32_t* value) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgsFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(int32_t status, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynCredentials>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AuthenticationMechanism(abi_t<Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism>* value) = 0;
    virtual HRESULT __stdcall get_Certificate(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Certificate(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_PasswordCredential(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_PasswordCredential(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Timeout(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall put_Timeout(abi_t<Windows::Foundation::TimeSpan> value) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AttemptCount(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_Credentials(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PeerUniqueName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RequestedUserName(HSTRING* value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AuthenticationMechanism(abi_t<Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism>* value) = 0;
    virtual HRESULT __stdcall get_PeerUniqueName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PeerCertificate(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PeerCertificateErrorSeverity(abi_t<Windows::Networking::Sockets::SocketSslErrorSeverity>* value) = 0;
    virtual HRESULT __stdcall get_PeerCertificateErrors(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PeerIntermediateCertificates(::IUnknown** value) = 0;
    virtual HRESULT __stdcall Accept() = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynMessageInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SenderUniqueName(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynMessageInfoFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING senderUniqueName, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynProducer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall SetBusObject(::IUnknown* busObject) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(int32_t* value) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgsFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(int32_t status, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynServiceInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_UniqueName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ObjectPath(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SessionPort(uint16_t* value) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynServiceInfoFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING uniqueName, HSTRING objectPath, uint16_t sessionPort, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_UniqueName(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgsFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING uniqueName, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynServiceInfoStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FromIdAsync(HSTRING deviceId, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynSession>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(int32_t* value) = 0;
    virtual HRESULT __stdcall get_Status(int32_t* value) = 0;
    virtual HRESULT __stdcall RemoveMemberAsync(HSTRING uniqueName, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall add_MemberAdded(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_MemberAdded(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_MemberRemoved(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_MemberRemoved(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_Lost(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Lost(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Session(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgsFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* session, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Reason(abi_t<Windows::Devices::AllJoyn::AllJoynSessionLostReason>* value) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgsFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(abi_t<Windows::Devices::AllJoyn::AllJoynSessionLostReason> reason, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_UniqueName(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgsFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING uniqueName, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_UniqueName(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgsFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING uniqueName, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynSessionStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetFromServiceInfoAsync(::IUnknown* serviceInfo, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetFromServiceInfoAndBusAttachmentAsync(::IUnknown* serviceInfo, ::IUnknown* busAttachment, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynStatusStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Ok(int32_t* value) = 0;
    virtual HRESULT __stdcall get_Fail(int32_t* value) = 0;
    virtual HRESULT __stdcall get_OperationTimedOut(int32_t* value) = 0;
    virtual HRESULT __stdcall get_OtherEndClosed(int32_t* value) = 0;
    virtual HRESULT __stdcall get_ConnectionRefused(int32_t* value) = 0;
    virtual HRESULT __stdcall get_AuthenticationFailed(int32_t* value) = 0;
    virtual HRESULT __stdcall get_AuthenticationRejectedByUser(int32_t* value) = 0;
    virtual HRESULT __stdcall get_SslConnectFailed(int32_t* value) = 0;
    virtual HRESULT __stdcall get_SslIdentityVerificationFailed(int32_t* value) = 0;
    virtual HRESULT __stdcall get_InsufficientSecurity(int32_t* value) = 0;
    virtual HRESULT __stdcall get_InvalidArgument1(int32_t* value) = 0;
    virtual HRESULT __stdcall get_InvalidArgument2(int32_t* value) = 0;
    virtual HRESULT __stdcall get_InvalidArgument3(int32_t* value) = 0;
    virtual HRESULT __stdcall get_InvalidArgument4(int32_t* value) = 0;
    virtual HRESULT __stdcall get_InvalidArgument5(int32_t* value) = 0;
    virtual HRESULT __stdcall get_InvalidArgument6(int32_t* value) = 0;
    virtual HRESULT __stdcall get_InvalidArgument7(int32_t* value) = 0;
    virtual HRESULT __stdcall get_InvalidArgument8(int32_t* value) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(int32_t* value) = 0;
};};

template <> struct abi<Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgsFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(int32_t status, ::IUnknown** result) = 0;
};};

}
