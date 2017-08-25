// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::Networking {

struct HostName;

}

WINRT_EXPORT namespace winrt::Windows::Security::Credentials {

struct PasswordCredential;

}

WINRT_EXPORT namespace winrt::Windows::Security::Cryptography::Certificates {

struct Certificate;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct Buffer;

}

WINRT_EXPORT namespace winrt::Windows::Networking::Vpn {

enum class VpnAppIdType
{
    PackageFamilyName = 0,
    FullyQualifiedBinaryName = 1,
    FilePath = 2,
};

enum class VpnAuthenticationMethod
{
    Mschapv2 = 0,
    Eap = 1,
    Certificate = 2,
    PresharedKey = 3,
};

enum class VpnChannelActivityEventType
{
    Idle = 0,
    Active = 1,
};

enum class VpnChannelRequestCredentialsOptions : unsigned
{
    None = 0x0,
    Retrying = 0x1,
    UseForSingleSignIn = 0x2,
};

DEFINE_ENUM_FLAG_OPERATORS(VpnChannelRequestCredentialsOptions)

enum class VpnCredentialType
{
    UsernamePassword = 0,
    UsernameOtpPin = 1,
    UsernamePasswordAndPin = 2,
    UsernamePasswordChange = 3,
    SmartCard = 4,
    ProtectedCertificate = 5,
    UnProtectedCertificate = 6,
};

enum class VpnDataPathType
{
    Send = 0,
    Receive = 1,
};

enum class VpnDomainNameType
{
    Suffix = 0,
    FullyQualified = 1,
    Reserved = 65535,
};

enum class VpnIPProtocol
{
    None = 0,
    Tcp = 6,
    Udp = 17,
    Icmp = 1,
    Ipv6Icmp = 58,
    Igmp = 2,
    Pgm = 113,
};

enum class VpnManagementConnectionStatus
{
    Disconnected = 0,
    Disconnecting = 1,
    Connected = 2,
    Connecting = 3,
};

enum class VpnManagementErrorStatus
{
    Ok = 0,
    Other = 1,
    InvalidXmlSyntax = 2,
    ProfileNameTooLong = 3,
    ProfileInvalidAppId = 4,
    AccessDenied = 5,
    CannotFindProfile = 6,
    AlreadyDisconnecting = 7,
    AlreadyConnected = 8,
    GeneralAuthenticationFailure = 9,
    EapFailure = 10,
    SmartCardFailure = 11,
    CertificateFailure = 12,
    ServerConfiguration = 13,
    NoConnection = 14,
    ServerConnection = 15,
    UserNamePassword = 16,
    DnsNotResolvable = 17,
    InvalidIP = 18,
};

enum class VpnNativeProtocolType
{
    Pptp = 0,
    L2tp = 1,
    IpsecIkev2 = 2,
};

enum class VpnPacketBufferStatus
{
    Ok = 0,
    InvalidBufferSize = 1,
};

enum class VpnRoutingPolicyType
{
    SplitRouting = 0,
    ForceAllTrafficOverVpn = 1,
};

struct IVpnAppId;
struct IVpnAppIdFactory;
struct IVpnChannel;
struct IVpnChannel2;
struct IVpnChannelActivityEventArgs;
struct IVpnChannelActivityStateChangedArgs;
struct IVpnChannelConfiguration;
struct IVpnChannelConfiguration2;
struct IVpnChannelStatics;
struct IVpnCredential;
struct IVpnCustomCheckBox;
struct IVpnCustomComboBox;
struct IVpnCustomEditBox;
struct IVpnCustomErrorBox;
struct IVpnCustomPrompt;
struct IVpnCustomPromptBooleanInput;
struct IVpnCustomPromptElement;
struct IVpnCustomPromptOptionSelector;
struct IVpnCustomPromptText;
struct IVpnCustomPromptTextInput;
struct IVpnCustomTextBox;
struct IVpnDomainNameAssignment;
struct IVpnDomainNameInfo;
struct IVpnDomainNameInfo2;
struct IVpnDomainNameInfoFactory;
struct IVpnInterfaceId;
struct IVpnInterfaceIdFactory;
struct IVpnManagementAgent;
struct IVpnNamespaceAssignment;
struct IVpnNamespaceInfo;
struct IVpnNamespaceInfoFactory;
struct IVpnNativeProfile;
struct IVpnNativeProfile2;
struct IVpnPacketBuffer;
struct IVpnPacketBuffer2;
struct IVpnPacketBufferFactory;
struct IVpnPacketBufferList;
struct IVpnPacketBufferList2;
struct IVpnPickedCredential;
struct IVpnPlugIn;
struct IVpnPlugInProfile;
struct IVpnPlugInProfile2;
struct IVpnProfile;
struct IVpnRoute;
struct IVpnRouteAssignment;
struct IVpnRouteFactory;
struct IVpnSystemHealth;
struct IVpnTrafficFilter;
struct IVpnTrafficFilterAssignment;
struct IVpnTrafficFilterFactory;
struct VpnAppId;
struct VpnChannel;
struct VpnChannelActivityEventArgs;
struct VpnChannelActivityStateChangedArgs;
struct VpnChannelConfiguration;
struct VpnCredential;
struct VpnCustomCheckBox;
struct VpnCustomComboBox;
struct VpnCustomEditBox;
struct VpnCustomErrorBox;
struct VpnCustomPromptBooleanInput;
struct VpnCustomPromptOptionSelector;
struct VpnCustomPromptText;
struct VpnCustomPromptTextInput;
struct VpnCustomTextBox;
struct VpnDomainNameAssignment;
struct VpnDomainNameInfo;
struct VpnInterfaceId;
struct VpnManagementAgent;
struct VpnNamespaceAssignment;
struct VpnNamespaceInfo;
struct VpnNativeProfile;
struct VpnPacketBuffer;
struct VpnPacketBufferList;
struct VpnPickedCredential;
struct VpnPlugInProfile;
struct VpnRoute;
struct VpnRouteAssignment;
struct VpnSystemHealth;
struct VpnTrafficFilter;
struct VpnTrafficFilterAssignment;

}

namespace winrt::impl {

template <> struct category<Windows::Networking::Vpn::IVpnAppId>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnAppIdFactory>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnChannel>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnChannel2>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnChannelActivityEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnChannelActivityStateChangedArgs>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnChannelConfiguration>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnChannelConfiguration2>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnChannelStatics>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnCredential>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnCustomCheckBox>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnCustomComboBox>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnCustomEditBox>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnCustomErrorBox>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnCustomPrompt>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnCustomPromptBooleanInput>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnCustomPromptElement>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnCustomPromptOptionSelector>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnCustomPromptText>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnCustomPromptTextInput>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnCustomTextBox>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnDomainNameAssignment>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnDomainNameInfo>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnDomainNameInfo2>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnDomainNameInfoFactory>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnInterfaceId>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnInterfaceIdFactory>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnManagementAgent>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnNamespaceAssignment>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnNamespaceInfo>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnNamespaceInfoFactory>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnNativeProfile>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnNativeProfile2>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnPacketBuffer>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnPacketBuffer2>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnPacketBufferFactory>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnPacketBufferList>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnPacketBufferList2>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnPickedCredential>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnPlugIn>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnPlugInProfile>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnPlugInProfile2>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnProfile>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnRoute>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnRouteAssignment>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnRouteFactory>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnSystemHealth>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnTrafficFilter>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnTrafficFilterAssignment>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::IVpnTrafficFilterFactory>{ using type = interface_category; };
template <> struct category<Windows::Networking::Vpn::VpnAppId>{ using type = class_category; };
template <> struct category<Windows::Networking::Vpn::VpnChannel>{ using type = class_category; };
template <> struct category<Windows::Networking::Vpn::VpnChannelActivityEventArgs>{ using type = class_category; };
template <> struct category<Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs>{ using type = class_category; };
template <> struct category<Windows::Networking::Vpn::VpnChannelConfiguration>{ using type = class_category; };
template <> struct category<Windows::Networking::Vpn::VpnCredential>{ using type = class_category; };
template <> struct category<Windows::Networking::Vpn::VpnCustomCheckBox>{ using type = class_category; };
template <> struct category<Windows::Networking::Vpn::VpnCustomComboBox>{ using type = class_category; };
template <> struct category<Windows::Networking::Vpn::VpnCustomEditBox>{ using type = class_category; };
template <> struct category<Windows::Networking::Vpn::VpnCustomErrorBox>{ using type = class_category; };
template <> struct category<Windows::Networking::Vpn::VpnCustomPromptBooleanInput>{ using type = class_category; };
template <> struct category<Windows::Networking::Vpn::VpnCustomPromptOptionSelector>{ using type = class_category; };
template <> struct category<Windows::Networking::Vpn::VpnCustomPromptText>{ using type = class_category; };
template <> struct category<Windows::Networking::Vpn::VpnCustomPromptTextInput>{ using type = class_category; };
template <> struct category<Windows::Networking::Vpn::VpnCustomTextBox>{ using type = class_category; };
template <> struct category<Windows::Networking::Vpn::VpnDomainNameAssignment>{ using type = class_category; };
template <> struct category<Windows::Networking::Vpn::VpnDomainNameInfo>{ using type = class_category; };
template <> struct category<Windows::Networking::Vpn::VpnInterfaceId>{ using type = class_category; };
template <> struct category<Windows::Networking::Vpn::VpnManagementAgent>{ using type = class_category; };
template <> struct category<Windows::Networking::Vpn::VpnNamespaceAssignment>{ using type = class_category; };
template <> struct category<Windows::Networking::Vpn::VpnNamespaceInfo>{ using type = class_category; };
template <> struct category<Windows::Networking::Vpn::VpnNativeProfile>{ using type = class_category; };
template <> struct category<Windows::Networking::Vpn::VpnPacketBuffer>{ using type = class_category; };
template <> struct category<Windows::Networking::Vpn::VpnPacketBufferList>{ using type = class_category; };
template <> struct category<Windows::Networking::Vpn::VpnPickedCredential>{ using type = class_category; };
template <> struct category<Windows::Networking::Vpn::VpnPlugInProfile>{ using type = class_category; };
template <> struct category<Windows::Networking::Vpn::VpnRoute>{ using type = class_category; };
template <> struct category<Windows::Networking::Vpn::VpnRouteAssignment>{ using type = class_category; };
template <> struct category<Windows::Networking::Vpn::VpnSystemHealth>{ using type = class_category; };
template <> struct category<Windows::Networking::Vpn::VpnTrafficFilter>{ using type = class_category; };
template <> struct category<Windows::Networking::Vpn::VpnTrafficFilterAssignment>{ using type = class_category; };
template <> struct category<Windows::Networking::Vpn::VpnAppIdType>{ using type = enum_category; };
template <> struct category<Windows::Networking::Vpn::VpnAuthenticationMethod>{ using type = enum_category; };
template <> struct category<Windows::Networking::Vpn::VpnChannelActivityEventType>{ using type = enum_category; };
template <> struct category<Windows::Networking::Vpn::VpnChannelRequestCredentialsOptions>{ using type = enum_category; };
template <> struct category<Windows::Networking::Vpn::VpnCredentialType>{ using type = enum_category; };
template <> struct category<Windows::Networking::Vpn::VpnDataPathType>{ using type = enum_category; };
template <> struct category<Windows::Networking::Vpn::VpnDomainNameType>{ using type = enum_category; };
template <> struct category<Windows::Networking::Vpn::VpnIPProtocol>{ using type = enum_category; };
template <> struct category<Windows::Networking::Vpn::VpnManagementConnectionStatus>{ using type = enum_category; };
template <> struct category<Windows::Networking::Vpn::VpnManagementErrorStatus>{ using type = enum_category; };
template <> struct category<Windows::Networking::Vpn::VpnNativeProtocolType>{ using type = enum_category; };
template <> struct category<Windows::Networking::Vpn::VpnPacketBufferStatus>{ using type = enum_category; };
template <> struct category<Windows::Networking::Vpn::VpnRoutingPolicyType>{ using type = enum_category; };
template <> struct name<Windows::Networking::Vpn::IVpnAppId>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnAppId" }; };
template <> struct name<Windows::Networking::Vpn::IVpnAppIdFactory>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnAppIdFactory" }; };
template <> struct name<Windows::Networking::Vpn::IVpnChannel>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnChannel" }; };
template <> struct name<Windows::Networking::Vpn::IVpnChannel2>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnChannel2" }; };
template <> struct name<Windows::Networking::Vpn::IVpnChannelActivityEventArgs>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnChannelActivityEventArgs" }; };
template <> struct name<Windows::Networking::Vpn::IVpnChannelActivityStateChangedArgs>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnChannelActivityStateChangedArgs" }; };
template <> struct name<Windows::Networking::Vpn::IVpnChannelConfiguration>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnChannelConfiguration" }; };
template <> struct name<Windows::Networking::Vpn::IVpnChannelConfiguration2>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnChannelConfiguration2" }; };
template <> struct name<Windows::Networking::Vpn::IVpnChannelStatics>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnChannelStatics" }; };
template <> struct name<Windows::Networking::Vpn::IVpnCredential>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnCredential" }; };
template <> struct name<Windows::Networking::Vpn::IVpnCustomCheckBox>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnCustomCheckBox" }; };
template <> struct name<Windows::Networking::Vpn::IVpnCustomComboBox>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnCustomComboBox" }; };
template <> struct name<Windows::Networking::Vpn::IVpnCustomEditBox>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnCustomEditBox" }; };
template <> struct name<Windows::Networking::Vpn::IVpnCustomErrorBox>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnCustomErrorBox" }; };
template <> struct name<Windows::Networking::Vpn::IVpnCustomPrompt>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnCustomPrompt" }; };
template <> struct name<Windows::Networking::Vpn::IVpnCustomPromptBooleanInput>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnCustomPromptBooleanInput" }; };
template <> struct name<Windows::Networking::Vpn::IVpnCustomPromptElement>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnCustomPromptElement" }; };
template <> struct name<Windows::Networking::Vpn::IVpnCustomPromptOptionSelector>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnCustomPromptOptionSelector" }; };
template <> struct name<Windows::Networking::Vpn::IVpnCustomPromptText>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnCustomPromptText" }; };
template <> struct name<Windows::Networking::Vpn::IVpnCustomPromptTextInput>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnCustomPromptTextInput" }; };
template <> struct name<Windows::Networking::Vpn::IVpnCustomTextBox>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnCustomTextBox" }; };
template <> struct name<Windows::Networking::Vpn::IVpnDomainNameAssignment>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnDomainNameAssignment" }; };
template <> struct name<Windows::Networking::Vpn::IVpnDomainNameInfo>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnDomainNameInfo" }; };
template <> struct name<Windows::Networking::Vpn::IVpnDomainNameInfo2>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnDomainNameInfo2" }; };
template <> struct name<Windows::Networking::Vpn::IVpnDomainNameInfoFactory>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnDomainNameInfoFactory" }; };
template <> struct name<Windows::Networking::Vpn::IVpnInterfaceId>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnInterfaceId" }; };
template <> struct name<Windows::Networking::Vpn::IVpnInterfaceIdFactory>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnInterfaceIdFactory" }; };
template <> struct name<Windows::Networking::Vpn::IVpnManagementAgent>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnManagementAgent" }; };
template <> struct name<Windows::Networking::Vpn::IVpnNamespaceAssignment>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnNamespaceAssignment" }; };
template <> struct name<Windows::Networking::Vpn::IVpnNamespaceInfo>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnNamespaceInfo" }; };
template <> struct name<Windows::Networking::Vpn::IVpnNamespaceInfoFactory>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnNamespaceInfoFactory" }; };
template <> struct name<Windows::Networking::Vpn::IVpnNativeProfile>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnNativeProfile" }; };
template <> struct name<Windows::Networking::Vpn::IVpnNativeProfile2>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnNativeProfile2" }; };
template <> struct name<Windows::Networking::Vpn::IVpnPacketBuffer>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnPacketBuffer" }; };
template <> struct name<Windows::Networking::Vpn::IVpnPacketBuffer2>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnPacketBuffer2" }; };
template <> struct name<Windows::Networking::Vpn::IVpnPacketBufferFactory>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnPacketBufferFactory" }; };
template <> struct name<Windows::Networking::Vpn::IVpnPacketBufferList>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnPacketBufferList" }; };
template <> struct name<Windows::Networking::Vpn::IVpnPacketBufferList2>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnPacketBufferList2" }; };
template <> struct name<Windows::Networking::Vpn::IVpnPickedCredential>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnPickedCredential" }; };
template <> struct name<Windows::Networking::Vpn::IVpnPlugIn>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnPlugIn" }; };
template <> struct name<Windows::Networking::Vpn::IVpnPlugInProfile>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnPlugInProfile" }; };
template <> struct name<Windows::Networking::Vpn::IVpnPlugInProfile2>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnPlugInProfile2" }; };
template <> struct name<Windows::Networking::Vpn::IVpnProfile>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnProfile" }; };
template <> struct name<Windows::Networking::Vpn::IVpnRoute>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnRoute" }; };
template <> struct name<Windows::Networking::Vpn::IVpnRouteAssignment>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnRouteAssignment" }; };
template <> struct name<Windows::Networking::Vpn::IVpnRouteFactory>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnRouteFactory" }; };
template <> struct name<Windows::Networking::Vpn::IVpnSystemHealth>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnSystemHealth" }; };
template <> struct name<Windows::Networking::Vpn::IVpnTrafficFilter>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnTrafficFilter" }; };
template <> struct name<Windows::Networking::Vpn::IVpnTrafficFilterAssignment>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnTrafficFilterAssignment" }; };
template <> struct name<Windows::Networking::Vpn::IVpnTrafficFilterFactory>{ static constexpr auto & value{ L"Windows.Networking.Vpn.IVpnTrafficFilterFactory" }; };
template <> struct name<Windows::Networking::Vpn::VpnAppId>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnAppId" }; };
template <> struct name<Windows::Networking::Vpn::VpnChannel>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnChannel" }; };
template <> struct name<Windows::Networking::Vpn::VpnChannelActivityEventArgs>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnChannelActivityEventArgs" }; };
template <> struct name<Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnChannelActivityStateChangedArgs" }; };
template <> struct name<Windows::Networking::Vpn::VpnChannelConfiguration>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnChannelConfiguration" }; };
template <> struct name<Windows::Networking::Vpn::VpnCredential>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnCredential" }; };
template <> struct name<Windows::Networking::Vpn::VpnCustomCheckBox>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnCustomCheckBox" }; };
template <> struct name<Windows::Networking::Vpn::VpnCustomComboBox>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnCustomComboBox" }; };
template <> struct name<Windows::Networking::Vpn::VpnCustomEditBox>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnCustomEditBox" }; };
template <> struct name<Windows::Networking::Vpn::VpnCustomErrorBox>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnCustomErrorBox" }; };
template <> struct name<Windows::Networking::Vpn::VpnCustomPromptBooleanInput>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnCustomPromptBooleanInput" }; };
template <> struct name<Windows::Networking::Vpn::VpnCustomPromptOptionSelector>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnCustomPromptOptionSelector" }; };
template <> struct name<Windows::Networking::Vpn::VpnCustomPromptText>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnCustomPromptText" }; };
template <> struct name<Windows::Networking::Vpn::VpnCustomPromptTextInput>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnCustomPromptTextInput" }; };
template <> struct name<Windows::Networking::Vpn::VpnCustomTextBox>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnCustomTextBox" }; };
template <> struct name<Windows::Networking::Vpn::VpnDomainNameAssignment>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnDomainNameAssignment" }; };
template <> struct name<Windows::Networking::Vpn::VpnDomainNameInfo>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnDomainNameInfo" }; };
template <> struct name<Windows::Networking::Vpn::VpnInterfaceId>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnInterfaceId" }; };
template <> struct name<Windows::Networking::Vpn::VpnManagementAgent>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnManagementAgent" }; };
template <> struct name<Windows::Networking::Vpn::VpnNamespaceAssignment>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnNamespaceAssignment" }; };
template <> struct name<Windows::Networking::Vpn::VpnNamespaceInfo>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnNamespaceInfo" }; };
template <> struct name<Windows::Networking::Vpn::VpnNativeProfile>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnNativeProfile" }; };
template <> struct name<Windows::Networking::Vpn::VpnPacketBuffer>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnPacketBuffer" }; };
template <> struct name<Windows::Networking::Vpn::VpnPacketBufferList>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnPacketBufferList" }; };
template <> struct name<Windows::Networking::Vpn::VpnPickedCredential>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnPickedCredential" }; };
template <> struct name<Windows::Networking::Vpn::VpnPlugInProfile>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnPlugInProfile" }; };
template <> struct name<Windows::Networking::Vpn::VpnRoute>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnRoute" }; };
template <> struct name<Windows::Networking::Vpn::VpnRouteAssignment>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnRouteAssignment" }; };
template <> struct name<Windows::Networking::Vpn::VpnSystemHealth>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnSystemHealth" }; };
template <> struct name<Windows::Networking::Vpn::VpnTrafficFilter>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnTrafficFilter" }; };
template <> struct name<Windows::Networking::Vpn::VpnTrafficFilterAssignment>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnTrafficFilterAssignment" }; };
template <> struct name<Windows::Networking::Vpn::VpnAppIdType>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnAppIdType" }; };
template <> struct name<Windows::Networking::Vpn::VpnAuthenticationMethod>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnAuthenticationMethod" }; };
template <> struct name<Windows::Networking::Vpn::VpnChannelActivityEventType>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnChannelActivityEventType" }; };
template <> struct name<Windows::Networking::Vpn::VpnChannelRequestCredentialsOptions>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnChannelRequestCredentialsOptions" }; };
template <> struct name<Windows::Networking::Vpn::VpnCredentialType>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnCredentialType" }; };
template <> struct name<Windows::Networking::Vpn::VpnDataPathType>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnDataPathType" }; };
template <> struct name<Windows::Networking::Vpn::VpnDomainNameType>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnDomainNameType" }; };
template <> struct name<Windows::Networking::Vpn::VpnIPProtocol>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnIPProtocol" }; };
template <> struct name<Windows::Networking::Vpn::VpnManagementConnectionStatus>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnManagementConnectionStatus" }; };
template <> struct name<Windows::Networking::Vpn::VpnManagementErrorStatus>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnManagementErrorStatus" }; };
template <> struct name<Windows::Networking::Vpn::VpnNativeProtocolType>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnNativeProtocolType" }; };
template <> struct name<Windows::Networking::Vpn::VpnPacketBufferStatus>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnPacketBufferStatus" }; };
template <> struct name<Windows::Networking::Vpn::VpnRoutingPolicyType>{ static constexpr auto & value{ L"Windows.Networking.Vpn.VpnRoutingPolicyType" }; };
template <> struct guid<Windows::Networking::Vpn::IVpnAppId>{ static constexpr GUID value{ 0x7B06A635,0x5C58,0x41D9,{ 0x94,0xA7,0xBF,0xBC,0xF1,0xD8,0xCA,0x54 } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnAppIdFactory>{ static constexpr GUID value{ 0x46ADFD2A,0x0AAB,0x4FDB,{ 0x82,0x1D,0xD3,0xDD,0xC9,0x19,0x78,0x8B } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnChannel>{ static constexpr GUID value{ 0x4AC78D07,0xD1A8,0x4303,{ 0xA0,0x91,0xC8,0xD2,0xE0,0x91,0x5B,0xC3 } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnChannel2>{ static constexpr GUID value{ 0x2255D165,0x993B,0x4629,{ 0xAD,0x60,0xF1,0xC3,0xF3,0x53,0x7F,0x50 } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnChannelActivityEventArgs>{ static constexpr GUID value{ 0xA36C88F2,0xAFDC,0x4775,{ 0x85,0x5D,0xD4,0xAC,0x0A,0x35,0xFC,0x55 } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnChannelActivityStateChangedArgs>{ static constexpr GUID value{ 0x3D750565,0xFDC0,0x4BBE,{ 0xA2,0x3B,0x45,0xFF,0xFC,0x6D,0x97,0xA1 } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnChannelConfiguration>{ static constexpr GUID value{ 0x0E2DDCA2,0x2012,0x4FE4,{ 0xB1,0x79,0x8C,0x65,0x2C,0x6D,0x10,0x7E } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnChannelConfiguration2>{ static constexpr GUID value{ 0xF30B574C,0x7824,0x471C,{ 0xA1,0x18,0x63,0xDB,0xC9,0x3A,0xE4,0xC7 } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnChannelStatics>{ static constexpr GUID value{ 0x88EB062D,0xE818,0x4FFD,{ 0x98,0xA6,0x36,0x3E,0x37,0x36,0xC9,0x5D } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnCredential>{ static constexpr GUID value{ 0xB7E78AF3,0xA46D,0x404B,{ 0x87,0x29,0x18,0x32,0x52,0x28,0x53,0xAC } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnCustomCheckBox>{ static constexpr GUID value{ 0x43878753,0x03C5,0x4E61,{ 0x93,0xD7,0xA9,0x57,0x71,0x4C,0x42,0x82 } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnCustomComboBox>{ static constexpr GUID value{ 0x9A24158E,0xDBA1,0x4C6F,{ 0x82,0x70,0xDC,0xF3,0xC9,0x76,0x1C,0x4C } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnCustomEditBox>{ static constexpr GUID value{ 0x3002D9A0,0xCFBF,0x4C0B,{ 0x8F,0x3C,0x66,0xF5,0x03,0xC2,0x0B,0x39 } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnCustomErrorBox>{ static constexpr GUID value{ 0x9EC4EFB2,0xC942,0x42AF,{ 0xB2,0x23,0x58,0x8B,0x48,0x32,0x87,0x21 } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnCustomPrompt>{ static constexpr GUID value{ 0x9B2EBE7B,0x87D5,0x433C,{ 0xB4,0xF6,0xEE,0xE6,0xAA,0x68,0xA2,0x44 } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnCustomPromptBooleanInput>{ static constexpr GUID value{ 0xC4C9A69E,0xFF47,0x4527,{ 0x9F,0x27,0xA4,0x92,0x92,0x01,0x99,0x79 } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnCustomPromptElement>{ static constexpr GUID value{ 0x73BD5638,0x6F04,0x404D,{ 0x93,0xDD,0x50,0xA4,0x49,0x24,0xA3,0x8B } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnCustomPromptOptionSelector>{ static constexpr GUID value{ 0x3B8F34D9,0x8EC1,0x4E95,{ 0x9A,0x4E,0x7B,0xA6,0x4D,0x38,0xF3,0x30 } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnCustomPromptText>{ static constexpr GUID value{ 0x3BC8BDEE,0x3A42,0x49A3,{ 0xAB,0xDD,0x07,0xB2,0xED,0xEA,0x75,0x2D } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnCustomPromptTextInput>{ static constexpr GUID value{ 0xC9DA9C75,0x913C,0x47D5,{ 0x88,0xBA,0x48,0xFC,0x48,0x93,0x02,0x35 } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnCustomTextBox>{ static constexpr GUID value{ 0xDAA4C3CA,0x8F23,0x4D36,{ 0x91,0xF1,0x76,0xD9,0x37,0x82,0x79,0x42 } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnDomainNameAssignment>{ static constexpr GUID value{ 0x4135B141,0xCCDB,0x49B5,{ 0x94,0x01,0x03,0x9A,0x8A,0xE7,0x67,0xE9 } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnDomainNameInfo>{ static constexpr GUID value{ 0xAD2EB82F,0xEA8E,0x4F7A,{ 0x84,0x3E,0x1A,0x87,0xE3,0x2E,0x1B,0x9A } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnDomainNameInfo2>{ static constexpr GUID value{ 0xAB871151,0x6C53,0x4828,{ 0x98,0x83,0xD8,0x86,0xDE,0x10,0x44,0x07 } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnDomainNameInfoFactory>{ static constexpr GUID value{ 0x2507BB75,0x028F,0x4688,{ 0x8D,0x3A,0xC4,0x53,0x1D,0xF3,0x7D,0xA8 } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnInterfaceId>{ static constexpr GUID value{ 0x9E2DDCA2,0x1712,0x4CE4,{ 0xB1,0x79,0x8C,0x65,0x2C,0x6D,0x10,0x11 } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnInterfaceIdFactory>{ static constexpr GUID value{ 0x9E2DDCA2,0x1712,0x4CE4,{ 0xB1,0x79,0x8C,0x65,0x2C,0x6D,0x10,0x00 } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnManagementAgent>{ static constexpr GUID value{ 0x193696CD,0xA5C4,0x4ABE,{ 0x85,0x2B,0x78,0x5B,0xE4,0xCB,0x3E,0x34 } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnNamespaceAssignment>{ static constexpr GUID value{ 0xD7F7DB18,0x307D,0x4C0E,{ 0xBD,0x62,0x8F,0xA2,0x70,0xBB,0xAD,0xD6 } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnNamespaceInfo>{ static constexpr GUID value{ 0x30EDFB43,0x444F,0x44C5,{ 0x81,0x67,0xA3,0x5A,0x91,0xF1,0xAF,0x94 } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnNamespaceInfoFactory>{ static constexpr GUID value{ 0xCB3E951A,0xB0CE,0x442B,{ 0xAC,0xBB,0x5F,0x99,0xB2,0x02,0xC3,0x1C } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnNativeProfile>{ static constexpr GUID value{ 0xA4AEE29E,0x6417,0x4333,{ 0x98,0x42,0xF0,0xA6,0x6D,0xB6,0x98,0x02 } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnNativeProfile2>{ static constexpr GUID value{ 0x0FEC2467,0xCDB5,0x4AC7,{ 0xB5,0xA3,0x0A,0xFB,0x5E,0xC4,0x76,0x82 } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnPacketBuffer>{ static constexpr GUID value{ 0xC2F891FC,0x4D5C,0x4A63,{ 0xB7,0x0D,0x4E,0x30,0x7E,0xAC,0xCE,0x55 } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnPacketBuffer2>{ static constexpr GUID value{ 0x665E91F0,0x8805,0x4BF5,{ 0xA6,0x19,0x2E,0x84,0x88,0x2E,0x6B,0x4F } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnPacketBufferFactory>{ static constexpr GUID value{ 0x9E2DDCA2,0x1712,0x4CE4,{ 0xB1,0x79,0x8C,0x65,0x2C,0x6D,0x99,0x99 } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnPacketBufferList>{ static constexpr GUID value{ 0xC2F891FC,0x4D5C,0x4A63,{ 0xB7,0x0D,0x4E,0x30,0x7E,0xAC,0xCE,0x77 } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnPacketBufferList2>{ static constexpr GUID value{ 0x3E7ACFE5,0xEA1E,0x482A,{ 0x8D,0x98,0xC0,0x65,0xF5,0x7D,0x89,0xEA } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnPickedCredential>{ static constexpr GUID value{ 0x9A793AC7,0x8854,0x4E52,{ 0xAD,0x97,0x24,0xDD,0x9A,0x84,0x2B,0xCE } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnPlugIn>{ static constexpr GUID value{ 0xCEB78D07,0xD0A8,0x4703,{ 0xA0,0x91,0xC8,0xC2,0xC0,0x91,0x5B,0xC4 } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnPlugInProfile>{ static constexpr GUID value{ 0x0EDF0DA4,0x4F00,0x4589,{ 0x8D,0x7B,0x4B,0xF9,0x88,0xF6,0x54,0x2C } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnPlugInProfile2>{ static constexpr GUID value{ 0x611C4892,0xCF94,0x4AD6,{ 0xBA,0x99,0x00,0xF4,0xFF,0x34,0x56,0x5E } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnProfile>{ static constexpr GUID value{ 0x7875B751,0xB0D7,0x43DB,{ 0x8A,0x93,0xD3,0xFE,0x24,0x79,0xE5,0x6A } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnRoute>{ static constexpr GUID value{ 0xB5731B83,0x0969,0x4699,{ 0x93,0x8E,0x77,0x76,0xDB,0x29,0xCF,0xB3 } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnRouteAssignment>{ static constexpr GUID value{ 0xDB64DE22,0xCE39,0x4A76,{ 0x95,0x50,0xF6,0x10,0x39,0xF8,0x0E,0x48 } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnRouteFactory>{ static constexpr GUID value{ 0xBDEAB5FF,0x45CF,0x4B99,{ 0x83,0xFB,0xDB,0x3B,0xC2,0x67,0x2B,0x02 } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnSystemHealth>{ static constexpr GUID value{ 0x99A8F8AF,0xC0EE,0x4E75,{ 0x81,0x7A,0xF2,0x31,0xAE,0xE5,0x12,0x3D } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnTrafficFilter>{ static constexpr GUID value{ 0x2F691B60,0x6C9F,0x47F5,{ 0xAC,0x36,0xBB,0x1B,0x04,0x2E,0x2C,0x50 } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnTrafficFilterAssignment>{ static constexpr GUID value{ 0x56CCD45C,0xE664,0x471E,{ 0x89,0xCD,0x60,0x16,0x03,0xB9,0xE0,0xF3 } }; };
template <> struct guid<Windows::Networking::Vpn::IVpnTrafficFilterFactory>{ static constexpr GUID value{ 0x480D41D5,0x7F99,0x474C,{ 0x86,0xEE,0x96,0xDF,0x16,0x83,0x18,0xF1 } }; };
template <> struct default_interface<Windows::Networking::Vpn::VpnAppId>{ using type = Windows::Networking::Vpn::IVpnAppId; };
template <> struct default_interface<Windows::Networking::Vpn::VpnChannel>{ using type = Windows::Networking::Vpn::IVpnChannel; };
template <> struct default_interface<Windows::Networking::Vpn::VpnChannelActivityEventArgs>{ using type = Windows::Networking::Vpn::IVpnChannelActivityEventArgs; };
template <> struct default_interface<Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs>{ using type = Windows::Networking::Vpn::IVpnChannelActivityStateChangedArgs; };
template <> struct default_interface<Windows::Networking::Vpn::VpnChannelConfiguration>{ using type = Windows::Networking::Vpn::IVpnChannelConfiguration; };
template <> struct default_interface<Windows::Networking::Vpn::VpnCredential>{ using type = Windows::Networking::Vpn::IVpnCredential; };
template <> struct default_interface<Windows::Networking::Vpn::VpnCustomCheckBox>{ using type = Windows::Networking::Vpn::IVpnCustomCheckBox; };
template <> struct default_interface<Windows::Networking::Vpn::VpnCustomComboBox>{ using type = Windows::Networking::Vpn::IVpnCustomComboBox; };
template <> struct default_interface<Windows::Networking::Vpn::VpnCustomEditBox>{ using type = Windows::Networking::Vpn::IVpnCustomEditBox; };
template <> struct default_interface<Windows::Networking::Vpn::VpnCustomErrorBox>{ using type = Windows::Networking::Vpn::IVpnCustomErrorBox; };
template <> struct default_interface<Windows::Networking::Vpn::VpnCustomPromptBooleanInput>{ using type = Windows::Networking::Vpn::IVpnCustomPromptBooleanInput; };
template <> struct default_interface<Windows::Networking::Vpn::VpnCustomPromptOptionSelector>{ using type = Windows::Networking::Vpn::IVpnCustomPromptOptionSelector; };
template <> struct default_interface<Windows::Networking::Vpn::VpnCustomPromptText>{ using type = Windows::Networking::Vpn::IVpnCustomPromptText; };
template <> struct default_interface<Windows::Networking::Vpn::VpnCustomPromptTextInput>{ using type = Windows::Networking::Vpn::IVpnCustomPromptTextInput; };
template <> struct default_interface<Windows::Networking::Vpn::VpnCustomTextBox>{ using type = Windows::Networking::Vpn::IVpnCustomTextBox; };
template <> struct default_interface<Windows::Networking::Vpn::VpnDomainNameAssignment>{ using type = Windows::Networking::Vpn::IVpnDomainNameAssignment; };
template <> struct default_interface<Windows::Networking::Vpn::VpnDomainNameInfo>{ using type = Windows::Networking::Vpn::IVpnDomainNameInfo; };
template <> struct default_interface<Windows::Networking::Vpn::VpnInterfaceId>{ using type = Windows::Networking::Vpn::IVpnInterfaceId; };
template <> struct default_interface<Windows::Networking::Vpn::VpnManagementAgent>{ using type = Windows::Networking::Vpn::IVpnManagementAgent; };
template <> struct default_interface<Windows::Networking::Vpn::VpnNamespaceAssignment>{ using type = Windows::Networking::Vpn::IVpnNamespaceAssignment; };
template <> struct default_interface<Windows::Networking::Vpn::VpnNamespaceInfo>{ using type = Windows::Networking::Vpn::IVpnNamespaceInfo; };
template <> struct default_interface<Windows::Networking::Vpn::VpnNativeProfile>{ using type = Windows::Networking::Vpn::IVpnNativeProfile; };
template <> struct default_interface<Windows::Networking::Vpn::VpnPacketBuffer>{ using type = Windows::Networking::Vpn::IVpnPacketBuffer; };
template <> struct default_interface<Windows::Networking::Vpn::VpnPacketBufferList>{ using type = Windows::Networking::Vpn::IVpnPacketBufferList; };
template <> struct default_interface<Windows::Networking::Vpn::VpnPickedCredential>{ using type = Windows::Networking::Vpn::IVpnPickedCredential; };
template <> struct default_interface<Windows::Networking::Vpn::VpnPlugInProfile>{ using type = Windows::Networking::Vpn::IVpnPlugInProfile; };
template <> struct default_interface<Windows::Networking::Vpn::VpnRoute>{ using type = Windows::Networking::Vpn::IVpnRoute; };
template <> struct default_interface<Windows::Networking::Vpn::VpnRouteAssignment>{ using type = Windows::Networking::Vpn::IVpnRouteAssignment; };
template <> struct default_interface<Windows::Networking::Vpn::VpnSystemHealth>{ using type = Windows::Networking::Vpn::IVpnSystemHealth; };
template <> struct default_interface<Windows::Networking::Vpn::VpnTrafficFilter>{ using type = Windows::Networking::Vpn::IVpnTrafficFilter; };
template <> struct default_interface<Windows::Networking::Vpn::VpnTrafficFilterAssignment>{ using type = Windows::Networking::Vpn::IVpnTrafficFilterAssignment; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnAppId
{
    Windows::Networking::Vpn::VpnAppIdType Type() const;
    void Type(Windows::Networking::Vpn::VpnAppIdType const& value) const;
    hstring Value() const;
    void Value(param::hstring const& value) const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnAppId> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnAppId<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnAppIdFactory
{
    Windows::Networking::Vpn::VpnAppId Create(Windows::Networking::Vpn::VpnAppIdType const& type, param::hstring const& value) const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnAppIdFactory> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnAppIdFactory<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnChannel
{
    void AssociateTransport(Windows::Foundation::IInspectable const& mainOuterTunnelTransport, Windows::Foundation::IInspectable const& optionalOuterTunnelTransport) const;
    void Start(param::vector_view<Windows::Networking::HostName> const& assignedClientIPv4list, param::vector_view<Windows::Networking::HostName> const& assignedClientIPv6list, Windows::Networking::Vpn::VpnInterfaceId const& vpnInterfaceId, Windows::Networking::Vpn::VpnRouteAssignment const& routeScope, Windows::Networking::Vpn::VpnNamespaceAssignment const& namespaceScope, uint32_t mtuSize, uint32_t maxFrameSize, bool optimizeForLowCostNetwork, Windows::Foundation::IInspectable const& mainOuterTunnelTransport, Windows::Foundation::IInspectable const& optionalOuterTunnelTransport) const;
    void Stop() const;
    Windows::Networking::Vpn::VpnPickedCredential RequestCredentials(Windows::Networking::Vpn::VpnCredentialType const& credType, bool isRetry, bool isSingleSignOnCredential, Windows::Security::Cryptography::Certificates::Certificate const& certificate) const;
    void RequestVpnPacketBuffer(Windows::Networking::Vpn::VpnDataPathType const& type, Windows::Networking::Vpn::VpnPacketBuffer& vpnPacketBuffer) const;
    void LogDiagnosticMessage(param::hstring const& message) const;
    uint32_t Id() const;
    Windows::Networking::Vpn::VpnChannelConfiguration Configuration() const;
    event_token ActivityChange(Windows::Foundation::TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityEventArgs> const& handler) const;
    using ActivityChange_revoker = event_revoker<Windows::Networking::Vpn::IVpnChannel>;
    ActivityChange_revoker ActivityChange(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityEventArgs> const& handler) const;
    void ActivityChange(event_token const& token) const;
    void PlugInContext(Windows::Foundation::IInspectable const& value) const;
    Windows::Foundation::IInspectable PlugInContext() const;
    Windows::Networking::Vpn::VpnSystemHealth SystemHealth() const;
    void RequestCustomPrompt(param::vector_view<Windows::Networking::Vpn::IVpnCustomPrompt> const& customPrompt) const;
    void SetErrorMessage(param::hstring const& message) const;
    void SetAllowedSslTlsVersions(Windows::Foundation::IInspectable const& tunnelTransport, bool useTls12) const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnChannel> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnChannel<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnChannel2
{
    void StartWithMainTransport(param::vector_view<Windows::Networking::HostName> const& assignedClientIPv4list, param::vector_view<Windows::Networking::HostName> const& assignedClientIPv6list, Windows::Networking::Vpn::VpnInterfaceId const& vpnInterfaceId, Windows::Networking::Vpn::VpnRouteAssignment const& assignedRoutes, Windows::Networking::Vpn::VpnDomainNameAssignment const& assignedDomainName, uint32_t mtuSize, uint32_t maxFrameSize, bool Reserved, Windows::Foundation::IInspectable const& mainOuterTunnelTransport) const;
    void StartExistingTransports(param::vector_view<Windows::Networking::HostName> const& assignedClientIPv4list, param::vector_view<Windows::Networking::HostName> const& assignedClientIPv6list, Windows::Networking::Vpn::VpnInterfaceId const& vpnInterfaceId, Windows::Networking::Vpn::VpnRouteAssignment const& assignedRoutes, Windows::Networking::Vpn::VpnDomainNameAssignment const& assignedDomainName, uint32_t mtuSize, uint32_t maxFrameSize, bool Reserved) const;
    event_token ActivityStateChange(Windows::Foundation::TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs> const& handler) const;
    using ActivityStateChange_revoker = event_revoker<Windows::Networking::Vpn::IVpnChannel2>;
    ActivityStateChange_revoker ActivityStateChange(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::Vpn::VpnChannel, Windows::Networking::Vpn::VpnChannelActivityStateChangedArgs> const& handler) const;
    void ActivityStateChange(event_token const& token) const;
    Windows::Networking::Vpn::VpnPacketBuffer GetVpnSendPacketBuffer() const;
    Windows::Networking::Vpn::VpnPacketBuffer GetVpnReceivePacketBuffer() const;
    Windows::Foundation::IAsyncAction RequestCustomPromptAsync(param::async_vector_view<Windows::Networking::Vpn::IVpnCustomPromptElement> const& customPromptElement) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential> RequestCredentialsAsync(Windows::Networking::Vpn::VpnCredentialType const& credType, uint32_t credOptions, Windows::Security::Cryptography::Certificates::Certificate const& certificate) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential> RequestCredentialsAsync(Windows::Networking::Vpn::VpnCredentialType const& credType, uint32_t credOptions) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnCredential> RequestCredentialsAsync(Windows::Networking::Vpn::VpnCredentialType const& credType) const;
    void TerminateConnection(param::hstring const& message) const;
    void StartWithTrafficFilter(param::vector_view<Windows::Networking::HostName> const& assignedClientIpv4List, param::vector_view<Windows::Networking::HostName> const& assignedClientIpv6List, Windows::Networking::Vpn::VpnInterfaceId const& vpnInterfaceId, Windows::Networking::Vpn::VpnRouteAssignment const& assignedRoutes, Windows::Networking::Vpn::VpnDomainNameAssignment const& assignedNamespace, uint32_t mtuSize, uint32_t maxFrameSize, bool reserved, Windows::Foundation::IInspectable const& mainOuterTunnelTransport, Windows::Foundation::IInspectable const& optionalOuterTunnelTransport, Windows::Networking::Vpn::VpnTrafficFilterAssignment const& assignedTrafficFilters) const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnChannel2> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnChannel2<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnChannelActivityEventArgs
{
    Windows::Networking::Vpn::VpnChannelActivityEventType Type() const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnChannelActivityEventArgs> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnChannelActivityEventArgs<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnChannelActivityStateChangedArgs
{
    Windows::Networking::Vpn::VpnChannelActivityEventType ActivityState() const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnChannelActivityStateChangedArgs> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnChannelActivityStateChangedArgs<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnChannelConfiguration
{
    hstring ServerServiceName() const;
    Windows::Foundation::Collections::IVectorView<Windows::Networking::HostName> ServerHostNameList() const;
    hstring CustomField() const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnChannelConfiguration> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnChannelConfiguration<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnChannelConfiguration2
{
    Windows::Foundation::Collections::IVectorView<Windows::Foundation::Uri> ServerUris() const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnChannelConfiguration2> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnChannelConfiguration2<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnChannelStatics
{
    void ProcessEventAsync(Windows::Foundation::IInspectable const& thirdPartyPlugIn, Windows::Foundation::IInspectable const& event) const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnChannelStatics> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnChannelStatics<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnCredential
{
    Windows::Security::Credentials::PasswordCredential PasskeyCredential() const;
    Windows::Security::Cryptography::Certificates::Certificate CertificateCredential() const;
    hstring AdditionalPin() const;
    Windows::Security::Credentials::PasswordCredential OldPasswordCredential() const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnCredential> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnCredential<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnCustomCheckBox
{
    void InitialCheckState(bool value) const;
    bool InitialCheckState() const;
    bool Checked() const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnCustomCheckBox> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnCustomCheckBox<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnCustomComboBox
{
    void OptionsText(param::async_vector_view<hstring> const& value) const;
    Windows::Foundation::Collections::IVectorView<hstring> OptionsText() const;
    uint32_t Selected() const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnCustomComboBox> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnCustomComboBox<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnCustomEditBox
{
    void DefaultText(param::hstring const& value) const;
    hstring DefaultText() const;
    void NoEcho(bool value) const;
    bool NoEcho() const;
    hstring Text() const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnCustomEditBox> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnCustomEditBox<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnCustomErrorBox
{
};
template <> struct consume<Windows::Networking::Vpn::IVpnCustomErrorBox> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnCustomErrorBox<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnCustomPrompt
{
    void Label(param::hstring const& value) const;
    hstring Label() const;
    void Compulsory(bool value) const;
    bool Compulsory() const;
    void Bordered(bool value) const;
    bool Bordered() const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnCustomPrompt> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnCustomPrompt<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnCustomPromptBooleanInput
{
    void InitialValue(bool value) const;
    bool InitialValue() const;
    bool Value() const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnCustomPromptBooleanInput> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnCustomPromptBooleanInput<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnCustomPromptElement
{
    void DisplayName(param::hstring const& value) const;
    hstring DisplayName() const;
    void Compulsory(bool value) const;
    bool Compulsory() const;
    void Emphasized(bool value) const;
    bool Emphasized() const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnCustomPromptElement> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnCustomPromptElement<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnCustomPromptOptionSelector
{
    Windows::Foundation::Collections::IVector<hstring> Options() const;
    uint32_t SelectedIndex() const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnCustomPromptOptionSelector> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnCustomPromptOptionSelector<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnCustomPromptText
{
    void Text(param::hstring const& value) const;
    hstring Text() const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnCustomPromptText> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnCustomPromptText<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnCustomPromptTextInput
{
    void PlaceholderText(param::hstring const& value) const;
    hstring PlaceholderText() const;
    void IsTextHidden(bool value) const;
    bool IsTextHidden() const;
    hstring Text() const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnCustomPromptTextInput> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnCustomPromptTextInput<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnCustomTextBox
{
    void DisplayText(param::hstring const& value) const;
    hstring DisplayText() const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnCustomTextBox> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnCustomTextBox<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnDomainNameAssignment
{
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnDomainNameInfo> DomainNameList() const;
    void ProxyAutoConfigurationUri(Windows::Foundation::Uri const& value) const;
    Windows::Foundation::Uri ProxyAutoConfigurationUri() const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnDomainNameAssignment> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnDomainNameAssignment<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnDomainNameInfo
{
    void DomainName(Windows::Networking::HostName const& value) const;
    Windows::Networking::HostName DomainName() const;
    void DomainNameType(Windows::Networking::Vpn::VpnDomainNameType const& value) const;
    Windows::Networking::Vpn::VpnDomainNameType DomainNameType() const;
    Windows::Foundation::Collections::IVector<Windows::Networking::HostName> DnsServers() const;
    Windows::Foundation::Collections::IVector<Windows::Networking::HostName> WebProxyServers() const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnDomainNameInfo> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnDomainNameInfo<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnDomainNameInfo2
{
    Windows::Foundation::Collections::IVector<Windows::Foundation::Uri> WebProxyUris() const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnDomainNameInfo2> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnDomainNameInfo2<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnDomainNameInfoFactory
{
    Windows::Networking::Vpn::VpnDomainNameInfo CreateVpnDomainNameInfo(param::hstring const& name, Windows::Networking::Vpn::VpnDomainNameType const& nameType, param::iterable<Windows::Networking::HostName> const& dnsServerList, param::iterable<Windows::Networking::HostName> const& proxyServerList) const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnDomainNameInfoFactory> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnDomainNameInfoFactory<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnInterfaceId
{
    void GetAddressInfo(com_array<uint8_t>& id) const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnInterfaceId> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnInterfaceId<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnInterfaceIdFactory
{
    Windows::Networking::Vpn::VpnInterfaceId CreateVpnInterfaceId(array_view<uint8_t const> address) const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnInterfaceIdFactory> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnInterfaceIdFactory<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnManagementAgent
{
    Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus> AddProfileFromXmlAsync(param::hstring const& xml) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus> AddProfileFromObjectAsync(Windows::Networking::Vpn::IVpnProfile const& profile) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus> UpdateProfileFromXmlAsync(param::hstring const& xml) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus> UpdateProfileFromObjectAsync(Windows::Networking::Vpn::IVpnProfile const& profile) const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::Vpn::IVpnProfile>> GetProfilesAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus> DeleteProfileAsync(Windows::Networking::Vpn::IVpnProfile const& profile) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus> ConnectProfileAsync(Windows::Networking::Vpn::IVpnProfile const& profile) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus> ConnectProfileWithPasswordCredentialAsync(Windows::Networking::Vpn::IVpnProfile const& profile, Windows::Security::Credentials::PasswordCredential const& passwordCredential) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::Vpn::VpnManagementErrorStatus> DisconnectProfileAsync(Windows::Networking::Vpn::IVpnProfile const& profile) const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnManagementAgent> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnManagementAgent<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnNamespaceAssignment
{
    void NamespaceList(param::vector<Windows::Networking::Vpn::VpnNamespaceInfo> const& value) const;
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnNamespaceInfo> NamespaceList() const;
    void ProxyAutoConfigUri(Windows::Foundation::Uri const& value) const;
    Windows::Foundation::Uri ProxyAutoConfigUri() const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnNamespaceAssignment> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnNamespaceAssignment<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnNamespaceInfo
{
    void Namespace(param::hstring const& value) const;
    hstring Namespace() const;
    void DnsServers(param::vector<Windows::Networking::HostName> const& value) const;
    Windows::Foundation::Collections::IVector<Windows::Networking::HostName> DnsServers() const;
    void WebProxyServers(param::vector<Windows::Networking::HostName> const& value) const;
    Windows::Foundation::Collections::IVector<Windows::Networking::HostName> WebProxyServers() const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnNamespaceInfo> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnNamespaceInfo<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnNamespaceInfoFactory
{
    Windows::Networking::Vpn::VpnNamespaceInfo CreateVpnNamespaceInfo(param::hstring const& name, param::vector<Windows::Networking::HostName> const& dnsServerList, param::vector<Windows::Networking::HostName> const& proxyServerList) const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnNamespaceInfoFactory> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnNamespaceInfoFactory<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnNativeProfile
{
    Windows::Foundation::Collections::IVector<hstring> Servers() const;
    Windows::Networking::Vpn::VpnRoutingPolicyType RoutingPolicyType() const;
    void RoutingPolicyType(Windows::Networking::Vpn::VpnRoutingPolicyType const& value) const;
    Windows::Networking::Vpn::VpnNativeProtocolType NativeProtocolType() const;
    void NativeProtocolType(Windows::Networking::Vpn::VpnNativeProtocolType const& value) const;
    Windows::Networking::Vpn::VpnAuthenticationMethod UserAuthenticationMethod() const;
    void UserAuthenticationMethod(Windows::Networking::Vpn::VpnAuthenticationMethod const& value) const;
    Windows::Networking::Vpn::VpnAuthenticationMethod TunnelAuthenticationMethod() const;
    void TunnelAuthenticationMethod(Windows::Networking::Vpn::VpnAuthenticationMethod const& value) const;
    hstring EapConfiguration() const;
    void EapConfiguration(param::hstring const& value) const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnNativeProfile> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnNativeProfile<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnNativeProfile2
{
    bool RequireVpnClientAppUI() const;
    void RequireVpnClientAppUI(bool value) const;
    Windows::Networking::Vpn::VpnManagementConnectionStatus ConnectionStatus() const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnNativeProfile2> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnNativeProfile2<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnPacketBuffer
{
    Windows::Storage::Streams::Buffer Buffer() const;
    void Status(Windows::Networking::Vpn::VpnPacketBufferStatus const& value) const;
    Windows::Networking::Vpn::VpnPacketBufferStatus Status() const;
    void TransportAffinity(uint32_t value) const;
    uint32_t TransportAffinity() const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnPacketBuffer> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnPacketBuffer<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnPacketBuffer2
{
    Windows::Networking::Vpn::VpnAppId AppId() const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnPacketBuffer2> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnPacketBuffer2<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnPacketBufferFactory
{
    Windows::Networking::Vpn::VpnPacketBuffer CreateVpnPacketBuffer(Windows::Networking::Vpn::VpnPacketBuffer const& parentBuffer, uint32_t offset, uint32_t length) const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnPacketBufferFactory> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnPacketBufferFactory<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnPacketBufferList
{
    void Append(Windows::Networking::Vpn::VpnPacketBuffer const& nextVpnPacketBuffer) const;
    void AddAtBegin(Windows::Networking::Vpn::VpnPacketBuffer const& nextVpnPacketBuffer) const;
    Windows::Networking::Vpn::VpnPacketBuffer RemoveAtEnd() const;
    Windows::Networking::Vpn::VpnPacketBuffer RemoveAtBegin() const;
    void Clear() const;
    void Status(Windows::Networking::Vpn::VpnPacketBufferStatus const& value) const;
    Windows::Networking::Vpn::VpnPacketBufferStatus Status() const;
    uint32_t Size() const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnPacketBufferList> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnPacketBufferList<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnPacketBufferList2
{
    void AddLeadingPacket(Windows::Networking::Vpn::VpnPacketBuffer const& nextVpnPacketBuffer) const;
    Windows::Networking::Vpn::VpnPacketBuffer RemoveLeadingPacket() const;
    void AddTrailingPacket(Windows::Networking::Vpn::VpnPacketBuffer const& nextVpnPacketBuffer) const;
    Windows::Networking::Vpn::VpnPacketBuffer RemoveTrailingPacket() const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnPacketBufferList2> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnPacketBufferList2<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnPickedCredential
{
    Windows::Security::Credentials::PasswordCredential PasskeyCredential() const;
    hstring AdditionalPin() const;
    Windows::Security::Credentials::PasswordCredential OldPasswordCredential() const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnPickedCredential> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnPickedCredential<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnPlugIn
{
    void Connect(Windows::Networking::Vpn::VpnChannel const& channel) const;
    void Disconnect(Windows::Networking::Vpn::VpnChannel const& channel) const;
    void GetKeepAlivePayload(Windows::Networking::Vpn::VpnChannel const& channel, Windows::Networking::Vpn::VpnPacketBuffer& keepAlivePacket) const;
    void Encapsulate(Windows::Networking::Vpn::VpnChannel const& channel, Windows::Networking::Vpn::VpnPacketBufferList const& packets, Windows::Networking::Vpn::VpnPacketBufferList const& encapulatedPackets) const;
    void Decapsulate(Windows::Networking::Vpn::VpnChannel const& channel, Windows::Networking::Vpn::VpnPacketBuffer const& encapBuffer, Windows::Networking::Vpn::VpnPacketBufferList const& decapsulatedPackets, Windows::Networking::Vpn::VpnPacketBufferList const& controlPacketsToSend) const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnPlugIn> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnPlugIn<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnPlugInProfile
{
    Windows::Foundation::Collections::IVector<Windows::Foundation::Uri> ServerUris() const;
    hstring CustomConfiguration() const;
    void CustomConfiguration(param::hstring const& value) const;
    hstring VpnPluginPackageFamilyName() const;
    void VpnPluginPackageFamilyName(param::hstring const& value) const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnPlugInProfile> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnPlugInProfile<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnPlugInProfile2
{
    bool RequireVpnClientAppUI() const;
    void RequireVpnClientAppUI(bool value) const;
    Windows::Networking::Vpn::VpnManagementConnectionStatus ConnectionStatus() const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnPlugInProfile2> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnPlugInProfile2<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnProfile
{
    hstring ProfileName() const;
    void ProfileName(param::hstring const& value) const;
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnAppId> AppTriggers() const;
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> Routes() const;
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnDomainNameInfo> DomainNameInfoList() const;
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnTrafficFilter> TrafficFilters() const;
    bool RememberCredentials() const;
    void RememberCredentials(bool value) const;
    bool AlwaysOn() const;
    void AlwaysOn(bool value) const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnProfile> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnProfile<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnRoute
{
    void Address(Windows::Networking::HostName const& value) const;
    Windows::Networking::HostName Address() const;
    void PrefixSize(uint8_t value) const;
    uint8_t PrefixSize() const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnRoute> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnRoute<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnRouteAssignment
{
    void Ipv4InclusionRoutes(param::vector<Windows::Networking::Vpn::VpnRoute> const& value) const;
    void Ipv6InclusionRoutes(param::vector<Windows::Networking::Vpn::VpnRoute> const& value) const;
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> Ipv4InclusionRoutes() const;
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> Ipv6InclusionRoutes() const;
    void Ipv4ExclusionRoutes(param::vector<Windows::Networking::Vpn::VpnRoute> const& value) const;
    void Ipv6ExclusionRoutes(param::vector<Windows::Networking::Vpn::VpnRoute> const& value) const;
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> Ipv4ExclusionRoutes() const;
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnRoute> Ipv6ExclusionRoutes() const;
    void ExcludeLocalSubnets(bool value) const;
    bool ExcludeLocalSubnets() const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnRouteAssignment> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnRouteAssignment<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnRouteFactory
{
    Windows::Networking::Vpn::VpnRoute CreateVpnRoute(Windows::Networking::HostName const& address, uint8_t prefixSize) const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnRouteFactory> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnRouteFactory<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnSystemHealth
{
    Windows::Storage::Streams::Buffer StatementOfHealth() const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnSystemHealth> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnSystemHealth<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnTrafficFilter
{
    Windows::Networking::Vpn::VpnAppId AppId() const;
    void AppId(Windows::Networking::Vpn::VpnAppId const& value) const;
    Windows::Foundation::Collections::IVector<hstring> AppClaims() const;
    Windows::Networking::Vpn::VpnIPProtocol Protocol() const;
    void Protocol(Windows::Networking::Vpn::VpnIPProtocol const& value) const;
    Windows::Foundation::Collections::IVector<hstring> LocalPortRanges() const;
    Windows::Foundation::Collections::IVector<hstring> RemotePortRanges() const;
    Windows::Foundation::Collections::IVector<hstring> LocalAddressRanges() const;
    Windows::Foundation::Collections::IVector<hstring> RemoteAddressRanges() const;
    Windows::Networking::Vpn::VpnRoutingPolicyType RoutingPolicyType() const;
    void RoutingPolicyType(Windows::Networking::Vpn::VpnRoutingPolicyType const& value) const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnTrafficFilter> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnTrafficFilter<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnTrafficFilterAssignment
{
    Windows::Foundation::Collections::IVector<Windows::Networking::Vpn::VpnTrafficFilter> TrafficFilterList() const;
    bool AllowOutbound() const;
    void AllowOutbound(bool value) const;
    bool AllowInbound() const;
    void AllowInbound(bool value) const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnTrafficFilterAssignment> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnTrafficFilterAssignment<D>; };

template <typename D>
struct consume_Windows_Networking_Vpn_IVpnTrafficFilterFactory
{
    Windows::Networking::Vpn::VpnTrafficFilter Create(Windows::Networking::Vpn::VpnAppId const& appId) const;
};
template <> struct consume<Windows::Networking::Vpn::IVpnTrafficFilterFactory> { template <typename D> using type = consume_Windows_Networking_Vpn_IVpnTrafficFilterFactory<D>; };

template <> struct abi<Windows::Networking::Vpn::IVpnAppId>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Type(abi_t<Windows::Networking::Vpn::VpnAppIdType>* value) = 0;
    virtual HRESULT __stdcall put_Type(abi_t<Windows::Networking::Vpn::VpnAppIdType> value) = 0;
    virtual HRESULT __stdcall get_Value(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Value(HSTRING value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnAppIdFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(abi_t<Windows::Networking::Vpn::VpnAppIdType> type, HSTRING value, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnChannel>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AssociateTransport(::IUnknown* mainOuterTunnelTransport, ::IUnknown* optionalOuterTunnelTransport) = 0;
    virtual HRESULT __stdcall Start(::IUnknown* assignedClientIPv4list, ::IUnknown* assignedClientIPv6list, ::IUnknown* vpnInterfaceId, ::IUnknown* routeScope, ::IUnknown* namespaceScope, uint32_t mtuSize, uint32_t maxFrameSize, bool optimizeForLowCostNetwork, ::IUnknown* mainOuterTunnelTransport, ::IUnknown* optionalOuterTunnelTransport) = 0;
    virtual HRESULT __stdcall Stop() = 0;
    virtual HRESULT __stdcall RequestCredentials(abi_t<Windows::Networking::Vpn::VpnCredentialType> credType, bool isRetry, bool isSingleSignOnCredential, ::IUnknown* certificate, ::IUnknown** credential) = 0;
    virtual HRESULT __stdcall RequestVpnPacketBuffer(abi_t<Windows::Networking::Vpn::VpnDataPathType> type, ::IUnknown** vpnPacketBuffer) = 0;
    virtual HRESULT __stdcall LogDiagnosticMessage(HSTRING message) = 0;
    virtual HRESULT __stdcall get_Id(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_Configuration(::IUnknown** value) = 0;
    virtual HRESULT __stdcall add_ActivityChange(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ActivityChange(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall put_PlugInContext(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_PlugInContext(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SystemHealth(::IUnknown** value) = 0;
    virtual HRESULT __stdcall RequestCustomPrompt(::IUnknown* customPrompt) = 0;
    virtual HRESULT __stdcall SetErrorMessage(HSTRING message) = 0;
    virtual HRESULT __stdcall SetAllowedSslTlsVersions(::IUnknown* tunnelTransport, bool useTls12) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnChannel2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall StartWithMainTransport(::IUnknown* assignedClientIPv4list, ::IUnknown* assignedClientIPv6list, ::IUnknown* vpnInterfaceId, ::IUnknown* assignedRoutes, ::IUnknown* assignedDomainName, uint32_t mtuSize, uint32_t maxFrameSize, bool Reserved, ::IUnknown* mainOuterTunnelTransport) = 0;
    virtual HRESULT __stdcall StartExistingTransports(::IUnknown* assignedClientIPv4list, ::IUnknown* assignedClientIPv6list, ::IUnknown* vpnInterfaceId, ::IUnknown* assignedRoutes, ::IUnknown* assignedDomainName, uint32_t mtuSize, uint32_t maxFrameSize, bool Reserved) = 0;
    virtual HRESULT __stdcall add_ActivityStateChange(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ActivityStateChange(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall GetVpnSendPacketBuffer(::IUnknown** vpnSendPacketBuffer) = 0;
    virtual HRESULT __stdcall GetVpnReceivePacketBuffer(::IUnknown** vpnReceivePacketBuffer) = 0;
    virtual HRESULT __stdcall RequestCustomPromptAsync(::IUnknown* customPromptElement, ::IUnknown** action) = 0;
    virtual HRESULT __stdcall RequestCredentialsWithCertificateAsync(abi_t<Windows::Networking::Vpn::VpnCredentialType> credType, uint32_t credOptions, ::IUnknown* certificate, ::IUnknown** credential) = 0;
    virtual HRESULT __stdcall RequestCredentialsWithOptionsAsync(abi_t<Windows::Networking::Vpn::VpnCredentialType> credType, uint32_t credOptions, ::IUnknown** credential) = 0;
    virtual HRESULT __stdcall RequestCredentialsSimpleAsync(abi_t<Windows::Networking::Vpn::VpnCredentialType> credType, ::IUnknown** credential) = 0;
    virtual HRESULT __stdcall TerminateConnection(HSTRING message) = 0;
    virtual HRESULT __stdcall StartWithTrafficFilter(::IUnknown* assignedClientIpv4List, ::IUnknown* assignedClientIpv6List, ::IUnknown* vpnInterfaceId, ::IUnknown* assignedRoutes, ::IUnknown* assignedNamespace, uint32_t mtuSize, uint32_t maxFrameSize, bool reserved, ::IUnknown* mainOuterTunnelTransport, ::IUnknown* optionalOuterTunnelTransport, ::IUnknown* assignedTrafficFilters) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnChannelActivityEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Type(abi_t<Windows::Networking::Vpn::VpnChannelActivityEventType>* value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnChannelActivityStateChangedArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ActivityState(abi_t<Windows::Networking::Vpn::VpnChannelActivityEventType>* value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnChannelConfiguration>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ServerServiceName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ServerHostNameList(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CustomField(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnChannelConfiguration2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ServerUris(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnChannelStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ProcessEventAsync(::IUnknown* thirdPartyPlugIn, ::IUnknown* event) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnCredential>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PasskeyCredential(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CertificateCredential(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AdditionalPin(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_OldPasswordCredential(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnCustomCheckBox>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_InitialCheckState(bool value) = 0;
    virtual HRESULT __stdcall get_InitialCheckState(bool* value) = 0;
    virtual HRESULT __stdcall get_Checked(bool* value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnCustomComboBox>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_OptionsText(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_OptionsText(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Selected(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnCustomEditBox>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_DefaultText(HSTRING value) = 0;
    virtual HRESULT __stdcall get_DefaultText(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_NoEcho(bool value) = 0;
    virtual HRESULT __stdcall get_NoEcho(bool* value) = 0;
    virtual HRESULT __stdcall get_Text(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnCustomErrorBox>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::Networking::Vpn::IVpnCustomPrompt>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_Label(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Label(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Compulsory(bool value) = 0;
    virtual HRESULT __stdcall get_Compulsory(bool* value) = 0;
    virtual HRESULT __stdcall put_Bordered(bool value) = 0;
    virtual HRESULT __stdcall get_Bordered(bool* value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnCustomPromptBooleanInput>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_InitialValue(bool value) = 0;
    virtual HRESULT __stdcall get_InitialValue(bool* value) = 0;
    virtual HRESULT __stdcall get_Value(bool* value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnCustomPromptElement>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_DisplayName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Compulsory(bool value) = 0;
    virtual HRESULT __stdcall get_Compulsory(bool* value) = 0;
    virtual HRESULT __stdcall put_Emphasized(bool value) = 0;
    virtual HRESULT __stdcall get_Emphasized(bool* value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnCustomPromptOptionSelector>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Options(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SelectedIndex(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnCustomPromptText>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_Text(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Text(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnCustomPromptTextInput>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_PlaceholderText(HSTRING value) = 0;
    virtual HRESULT __stdcall get_PlaceholderText(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_IsTextHidden(bool value) = 0;
    virtual HRESULT __stdcall get_IsTextHidden(bool* value) = 0;
    virtual HRESULT __stdcall get_Text(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnCustomTextBox>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_DisplayText(HSTRING value) = 0;
    virtual HRESULT __stdcall get_DisplayText(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnDomainNameAssignment>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DomainNameList(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ProxyAutoConfigurationUri(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ProxyAutoConfigurationUri(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnDomainNameInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_DomainName(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_DomainName(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_DomainNameType(abi_t<Windows::Networking::Vpn::VpnDomainNameType> value) = 0;
    virtual HRESULT __stdcall get_DomainNameType(abi_t<Windows::Networking::Vpn::VpnDomainNameType>* value) = 0;
    virtual HRESULT __stdcall get_DnsServers(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_WebProxyServers(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnDomainNameInfo2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_WebProxyUris(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnDomainNameInfoFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateVpnDomainNameInfo(HSTRING name, abi_t<Windows::Networking::Vpn::VpnDomainNameType> nameType, ::IUnknown* dnsServerList, ::IUnknown* proxyServerList, ::IUnknown** domainNameInfo) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnInterfaceId>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetAddressInfo(uint32_t* __idSize, uint8_t** id) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnInterfaceIdFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateVpnInterfaceId(uint32_t __addressSize, uint8_t* address, ::IUnknown** vpnInterfaceId) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnManagementAgent>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AddProfileFromXmlAsync(HSTRING xml, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall AddProfileFromObjectAsync(::IUnknown* profile, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall UpdateProfileFromXmlAsync(HSTRING xml, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall UpdateProfileFromObjectAsync(::IUnknown* profile, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall GetProfilesAsync(::IUnknown** operation) = 0;
    virtual HRESULT __stdcall DeleteProfileAsync(::IUnknown* profile, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ConnectProfileAsync(::IUnknown* profile, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall ConnectProfileWithPasswordCredentialAsync(::IUnknown* profile, ::IUnknown* passwordCredential, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall DisconnectProfileAsync(::IUnknown* profile, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnNamespaceAssignment>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_NamespaceList(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_NamespaceList(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ProxyAutoConfigUri(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ProxyAutoConfigUri(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnNamespaceInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_Namespace(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Namespace(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_DnsServers(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_DnsServers(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_WebProxyServers(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_WebProxyServers(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnNamespaceInfoFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateVpnNamespaceInfo(HSTRING name, ::IUnknown* dnsServerList, ::IUnknown* proxyServerList, ::IUnknown** namespaceInfo) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnNativeProfile>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Servers(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RoutingPolicyType(abi_t<Windows::Networking::Vpn::VpnRoutingPolicyType>* value) = 0;
    virtual HRESULT __stdcall put_RoutingPolicyType(abi_t<Windows::Networking::Vpn::VpnRoutingPolicyType> value) = 0;
    virtual HRESULT __stdcall get_NativeProtocolType(abi_t<Windows::Networking::Vpn::VpnNativeProtocolType>* value) = 0;
    virtual HRESULT __stdcall put_NativeProtocolType(abi_t<Windows::Networking::Vpn::VpnNativeProtocolType> value) = 0;
    virtual HRESULT __stdcall get_UserAuthenticationMethod(abi_t<Windows::Networking::Vpn::VpnAuthenticationMethod>* value) = 0;
    virtual HRESULT __stdcall put_UserAuthenticationMethod(abi_t<Windows::Networking::Vpn::VpnAuthenticationMethod> value) = 0;
    virtual HRESULT __stdcall get_TunnelAuthenticationMethod(abi_t<Windows::Networking::Vpn::VpnAuthenticationMethod>* value) = 0;
    virtual HRESULT __stdcall put_TunnelAuthenticationMethod(abi_t<Windows::Networking::Vpn::VpnAuthenticationMethod> value) = 0;
    virtual HRESULT __stdcall get_EapConfiguration(HSTRING* Value) = 0;
    virtual HRESULT __stdcall put_EapConfiguration(HSTRING value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnNativeProfile2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RequireVpnClientAppUI(bool* value) = 0;
    virtual HRESULT __stdcall put_RequireVpnClientAppUI(bool value) = 0;
    virtual HRESULT __stdcall get_ConnectionStatus(abi_t<Windows::Networking::Vpn::VpnManagementConnectionStatus>* value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnPacketBuffer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Buffer(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Status(abi_t<Windows::Networking::Vpn::VpnPacketBufferStatus> value) = 0;
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Networking::Vpn::VpnPacketBufferStatus>* value) = 0;
    virtual HRESULT __stdcall put_TransportAffinity(uint32_t value) = 0;
    virtual HRESULT __stdcall get_TransportAffinity(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnPacketBuffer2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AppId(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnPacketBufferFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateVpnPacketBuffer(::IUnknown* parentBuffer, uint32_t offset, uint32_t length, ::IUnknown** vpnPacketBuffer) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnPacketBufferList>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Append(::IUnknown* nextVpnPacketBuffer) = 0;
    virtual HRESULT __stdcall AddAtBegin(::IUnknown* nextVpnPacketBuffer) = 0;
    virtual HRESULT __stdcall RemoveAtEnd(::IUnknown** nextVpnPacketBuffer) = 0;
    virtual HRESULT __stdcall RemoveAtBegin(::IUnknown** nextVpnPacketBuffer) = 0;
    virtual HRESULT __stdcall Clear() = 0;
    virtual HRESULT __stdcall put_Status(abi_t<Windows::Networking::Vpn::VpnPacketBufferStatus> value) = 0;
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Networking::Vpn::VpnPacketBufferStatus>* value) = 0;
    virtual HRESULT __stdcall get_Size(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnPacketBufferList2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AddLeadingPacket(::IUnknown* nextVpnPacketBuffer) = 0;
    virtual HRESULT __stdcall RemoveLeadingPacket(::IUnknown** nextVpnPacketBuffer) = 0;
    virtual HRESULT __stdcall AddTrailingPacket(::IUnknown* nextVpnPacketBuffer) = 0;
    virtual HRESULT __stdcall RemoveTrailingPacket(::IUnknown** nextVpnPacketBuffer) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnPickedCredential>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_PasskeyCredential(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AdditionalPin(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_OldPasswordCredential(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnPlugIn>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Connect(::IUnknown* channel) = 0;
    virtual HRESULT __stdcall Disconnect(::IUnknown* channel) = 0;
    virtual HRESULT __stdcall GetKeepAlivePayload(::IUnknown* channel, ::IUnknown** keepAlivePacket) = 0;
    virtual HRESULT __stdcall Encapsulate(::IUnknown* channel, ::IUnknown* packets, ::IUnknown* encapulatedPackets) = 0;
    virtual HRESULT __stdcall Decapsulate(::IUnknown* channel, ::IUnknown* encapBuffer, ::IUnknown* decapsulatedPackets, ::IUnknown* controlPacketsToSend) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnPlugInProfile>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ServerUris(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CustomConfiguration(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_CustomConfiguration(HSTRING value) = 0;
    virtual HRESULT __stdcall get_VpnPluginPackageFamilyName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_VpnPluginPackageFamilyName(HSTRING value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnPlugInProfile2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RequireVpnClientAppUI(bool* value) = 0;
    virtual HRESULT __stdcall put_RequireVpnClientAppUI(bool value) = 0;
    virtual HRESULT __stdcall get_ConnectionStatus(abi_t<Windows::Networking::Vpn::VpnManagementConnectionStatus>* value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnProfile>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ProfileName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_ProfileName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_AppTriggers(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Routes(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DomainNameInfoList(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_TrafficFilters(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RememberCredentials(bool* value) = 0;
    virtual HRESULT __stdcall put_RememberCredentials(bool value) = 0;
    virtual HRESULT __stdcall get_AlwaysOn(bool* value) = 0;
    virtual HRESULT __stdcall put_AlwaysOn(bool value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnRoute>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_Address(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Address(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_PrefixSize(uint8_t value) = 0;
    virtual HRESULT __stdcall get_PrefixSize(uint8_t* value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnRouteAssignment>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall put_Ipv4InclusionRoutes(::IUnknown* value) = 0;
    virtual HRESULT __stdcall put_Ipv6InclusionRoutes(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Ipv4InclusionRoutes(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Ipv6InclusionRoutes(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Ipv4ExclusionRoutes(::IUnknown* value) = 0;
    virtual HRESULT __stdcall put_Ipv6ExclusionRoutes(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Ipv4ExclusionRoutes(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Ipv6ExclusionRoutes(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_ExcludeLocalSubnets(bool value) = 0;
    virtual HRESULT __stdcall get_ExcludeLocalSubnets(bool* value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnRouteFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateVpnRoute(::IUnknown* address, uint8_t prefixSize, ::IUnknown** route) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnSystemHealth>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_StatementOfHealth(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnTrafficFilter>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AppId(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_AppId(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_AppClaims(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Protocol(abi_t<Windows::Networking::Vpn::VpnIPProtocol>* value) = 0;
    virtual HRESULT __stdcall put_Protocol(abi_t<Windows::Networking::Vpn::VpnIPProtocol> value) = 0;
    virtual HRESULT __stdcall get_LocalPortRanges(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RemotePortRanges(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LocalAddressRanges(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RemoteAddressRanges(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RoutingPolicyType(abi_t<Windows::Networking::Vpn::VpnRoutingPolicyType>* value) = 0;
    virtual HRESULT __stdcall put_RoutingPolicyType(abi_t<Windows::Networking::Vpn::VpnRoutingPolicyType> value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnTrafficFilterAssignment>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TrafficFilterList(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AllowOutbound(bool* value) = 0;
    virtual HRESULT __stdcall put_AllowOutbound(bool value) = 0;
    virtual HRESULT __stdcall get_AllowInbound(bool* value) = 0;
    virtual HRESULT __stdcall put_AllowInbound(bool value) = 0;
};};

template <> struct abi<Windows::Networking::Vpn::IVpnTrafficFilterFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* appId, ::IUnknown** result) = 0;
};};

}
