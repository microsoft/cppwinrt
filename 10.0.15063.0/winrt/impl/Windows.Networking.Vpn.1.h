// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Networking.0.h"
#include "winrt/impl/Windows.Security.Credentials.0.h"
#include "winrt/impl/Windows.Security.Cryptography.Certificates.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Networking.Vpn.0.h"

WINRT_EXPORT namespace winrt::Windows::Networking::Vpn {

struct WINRT_EBO IVpnAppId :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnAppId>
{
    IVpnAppId(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnAppIdFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnAppIdFactory>
{
    IVpnAppIdFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnChannel :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnChannel>
{
    IVpnChannel(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnChannel2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnChannel2>
{
    IVpnChannel2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnChannelActivityEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnChannelActivityEventArgs>
{
    IVpnChannelActivityEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnChannelActivityStateChangedArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnChannelActivityStateChangedArgs>
{
    IVpnChannelActivityStateChangedArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnChannelConfiguration :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnChannelConfiguration>
{
    IVpnChannelConfiguration(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnChannelConfiguration2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnChannelConfiguration2>
{
    IVpnChannelConfiguration2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnChannelStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnChannelStatics>
{
    IVpnChannelStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnCredential :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnCredential>
{
    IVpnCredential(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnCustomCheckBox :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnCustomCheckBox>,
    impl::require<IVpnCustomCheckBox, Windows::Networking::Vpn::IVpnCustomPrompt>
{
    IVpnCustomCheckBox(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnCustomComboBox :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnCustomComboBox>,
    impl::require<IVpnCustomComboBox, Windows::Networking::Vpn::IVpnCustomPrompt>
{
    IVpnCustomComboBox(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnCustomEditBox :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnCustomEditBox>,
    impl::require<IVpnCustomEditBox, Windows::Networking::Vpn::IVpnCustomPrompt>
{
    IVpnCustomEditBox(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnCustomErrorBox :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnCustomErrorBox>,
    impl::require<IVpnCustomErrorBox, Windows::Networking::Vpn::IVpnCustomPrompt>
{
    IVpnCustomErrorBox(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnCustomPrompt :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnCustomPrompt>
{
    IVpnCustomPrompt(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnCustomPromptBooleanInput :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnCustomPromptBooleanInput>,
    impl::require<IVpnCustomPromptBooleanInput, Windows::Networking::Vpn::IVpnCustomPromptElement>
{
    IVpnCustomPromptBooleanInput(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnCustomPromptElement :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnCustomPromptElement>
{
    IVpnCustomPromptElement(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnCustomPromptOptionSelector :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnCustomPromptOptionSelector>,
    impl::require<IVpnCustomPromptOptionSelector, Windows::Networking::Vpn::IVpnCustomPromptElement>
{
    IVpnCustomPromptOptionSelector(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnCustomPromptText :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnCustomPromptText>,
    impl::require<IVpnCustomPromptText, Windows::Networking::Vpn::IVpnCustomPromptElement>
{
    IVpnCustomPromptText(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnCustomPromptTextInput :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnCustomPromptTextInput>,
    impl::require<IVpnCustomPromptTextInput, Windows::Networking::Vpn::IVpnCustomPromptElement>
{
    IVpnCustomPromptTextInput(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnCustomTextBox :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnCustomTextBox>,
    impl::require<IVpnCustomTextBox, Windows::Networking::Vpn::IVpnCustomPrompt>
{
    IVpnCustomTextBox(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnDomainNameAssignment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnDomainNameAssignment>
{
    IVpnDomainNameAssignment(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnDomainNameInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnDomainNameInfo>
{
    IVpnDomainNameInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnDomainNameInfo2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnDomainNameInfo2>
{
    IVpnDomainNameInfo2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnDomainNameInfoFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnDomainNameInfoFactory>
{
    IVpnDomainNameInfoFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnInterfaceId :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnInterfaceId>
{
    IVpnInterfaceId(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnInterfaceIdFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnInterfaceIdFactory>
{
    IVpnInterfaceIdFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnManagementAgent :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnManagementAgent>
{
    IVpnManagementAgent(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnNamespaceAssignment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnNamespaceAssignment>
{
    IVpnNamespaceAssignment(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnNamespaceInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnNamespaceInfo>
{
    IVpnNamespaceInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnNamespaceInfoFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnNamespaceInfoFactory>
{
    IVpnNamespaceInfoFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnNativeProfile :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnNativeProfile>,
    impl::require<IVpnNativeProfile, Windows::Networking::Vpn::IVpnProfile>
{
    IVpnNativeProfile(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnNativeProfile2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnNativeProfile2>
{
    IVpnNativeProfile2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnPacketBuffer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnPacketBuffer>
{
    IVpnPacketBuffer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnPacketBuffer2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnPacketBuffer2>
{
    IVpnPacketBuffer2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnPacketBufferFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnPacketBufferFactory>
{
    IVpnPacketBufferFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnPacketBufferList :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnPacketBufferList>,
    impl::require<IVpnPacketBufferList, Windows::Foundation::Collections::IIterable<Windows::Networking::Vpn::VpnPacketBuffer>>
{
    IVpnPacketBufferList(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnPacketBufferList2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnPacketBufferList2>,
    impl::require<IVpnPacketBufferList2, Windows::Foundation::Collections::IIterable<Windows::Networking::Vpn::VpnPacketBuffer>>
{
    IVpnPacketBufferList2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnPickedCredential :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnPickedCredential>
{
    IVpnPickedCredential(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnPlugIn :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnPlugIn>
{
    IVpnPlugIn(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnPlugInProfile :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnPlugInProfile>,
    impl::require<IVpnPlugInProfile, Windows::Networking::Vpn::IVpnProfile>
{
    IVpnPlugInProfile(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnPlugInProfile2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnPlugInProfile2>,
    impl::require<IVpnPlugInProfile2, Windows::Networking::Vpn::IVpnProfile>
{
    IVpnPlugInProfile2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnProfile :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnProfile>
{
    IVpnProfile(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnRoute :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnRoute>
{
    IVpnRoute(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnRouteAssignment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnRouteAssignment>
{
    IVpnRouteAssignment(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnRouteFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnRouteFactory>
{
    IVpnRouteFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnSystemHealth :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnSystemHealth>
{
    IVpnSystemHealth(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnTrafficFilter :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnTrafficFilter>
{
    IVpnTrafficFilter(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnTrafficFilterAssignment :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnTrafficFilterAssignment>
{
    IVpnTrafficFilterAssignment(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVpnTrafficFilterFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVpnTrafficFilterFactory>
{
    IVpnTrafficFilterFactory(std::nullptr_t = nullptr) noexcept {}
};

}
