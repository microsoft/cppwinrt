// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Enumeration.0.h"
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Globalization.0.h"
#include "winrt/impl/Windows.Networking.Sockets.0.h"
#include "winrt/impl/Windows.Security.Credentials.0.h"
#include "winrt/impl/Windows.Security.Cryptography.Certificates.0.h"
#include "winrt/impl/Windows.Devices.AllJoyn.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::AllJoyn {

struct WINRT_EBO IAllJoynAboutData :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynAboutData>
{
    IAllJoynAboutData(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynAboutDataView :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynAboutDataView>
{
    IAllJoynAboutDataView(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynAboutDataViewStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynAboutDataViewStatics>
{
    IAllJoynAboutDataViewStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynAcceptSessionJoiner :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynAcceptSessionJoiner>
{
    IAllJoynAcceptSessionJoiner(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynAcceptSessionJoinerEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynAcceptSessionJoinerEventArgs>
{
    IAllJoynAcceptSessionJoinerEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynAcceptSessionJoinerEventArgsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynAcceptSessionJoinerEventArgsFactory>
{
    IAllJoynAcceptSessionJoinerEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynAuthenticationCompleteEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynAuthenticationCompleteEventArgs>
{
    IAllJoynAuthenticationCompleteEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynBusAttachment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynBusAttachment>
{
    IAllJoynBusAttachment(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynBusAttachment2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynBusAttachment2>
{
    IAllJoynBusAttachment2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynBusAttachmentFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynBusAttachmentFactory>
{
    IAllJoynBusAttachmentFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynBusAttachmentStateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynBusAttachmentStateChangedEventArgs>
{
    IAllJoynBusAttachmentStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynBusAttachmentStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynBusAttachmentStatics>
{
    IAllJoynBusAttachmentStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynBusObject :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynBusObject>
{
    IAllJoynBusObject(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynBusObjectFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynBusObjectFactory>
{
    IAllJoynBusObjectFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynBusObjectStoppedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynBusObjectStoppedEventArgs>
{
    IAllJoynBusObjectStoppedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynBusObjectStoppedEventArgsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynBusObjectStoppedEventArgsFactory>
{
    IAllJoynBusObjectStoppedEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynCredentials :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynCredentials>
{
    IAllJoynCredentials(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynCredentialsRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynCredentialsRequestedEventArgs>
{
    IAllJoynCredentialsRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynCredentialsVerificationRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynCredentialsVerificationRequestedEventArgs>
{
    IAllJoynCredentialsVerificationRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynMessageInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynMessageInfo>
{
    IAllJoynMessageInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynMessageInfoFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynMessageInfoFactory>
{
    IAllJoynMessageInfoFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynProducer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynProducer>
{
    IAllJoynProducer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynProducerStoppedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynProducerStoppedEventArgs>
{
    IAllJoynProducerStoppedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynProducerStoppedEventArgsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynProducerStoppedEventArgsFactory>
{
    IAllJoynProducerStoppedEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynServiceInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynServiceInfo>
{
    IAllJoynServiceInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynServiceInfoFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynServiceInfoFactory>
{
    IAllJoynServiceInfoFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynServiceInfoRemovedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynServiceInfoRemovedEventArgs>
{
    IAllJoynServiceInfoRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynServiceInfoRemovedEventArgsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynServiceInfoRemovedEventArgsFactory>
{
    IAllJoynServiceInfoRemovedEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynServiceInfoStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynServiceInfoStatics>
{
    IAllJoynServiceInfoStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynSession :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynSession>
{
    IAllJoynSession(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynSessionJoinedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynSessionJoinedEventArgs>
{
    IAllJoynSessionJoinedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynSessionJoinedEventArgsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynSessionJoinedEventArgsFactory>
{
    IAllJoynSessionJoinedEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynSessionLostEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynSessionLostEventArgs>
{
    IAllJoynSessionLostEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynSessionLostEventArgsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynSessionLostEventArgsFactory>
{
    IAllJoynSessionLostEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynSessionMemberAddedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynSessionMemberAddedEventArgs>
{
    IAllJoynSessionMemberAddedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynSessionMemberAddedEventArgsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynSessionMemberAddedEventArgsFactory>
{
    IAllJoynSessionMemberAddedEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynSessionMemberRemovedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynSessionMemberRemovedEventArgs>
{
    IAllJoynSessionMemberRemovedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynSessionMemberRemovedEventArgsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynSessionMemberRemovedEventArgsFactory>
{
    IAllJoynSessionMemberRemovedEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynSessionStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynSessionStatics>
{
    IAllJoynSessionStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynStatusStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynStatusStatics>
{
    IAllJoynStatusStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynWatcherStoppedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynWatcherStoppedEventArgs>
{
    IAllJoynWatcherStoppedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAllJoynWatcherStoppedEventArgsFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAllJoynWatcherStoppedEventArgsFactory>
{
    IAllJoynWatcherStoppedEventArgsFactory(std::nullptr_t = nullptr) noexcept {}
};

}
