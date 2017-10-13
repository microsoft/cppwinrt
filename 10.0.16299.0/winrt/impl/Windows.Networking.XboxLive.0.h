// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Networking {

struct HostName;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;

}

WINRT_EXPORT namespace winrt::Windows::Networking::XboxLive {

enum class XboxLiveEndpointPairCreationBehaviors : uint32_t
{
    None = 0x0,
    ReevaluatePath = 0x1,
};

enum class XboxLiveEndpointPairCreationStatus : int32_t
{
    Succeeded = 0,
    NoLocalNetworks = 1,
    NoCompatibleNetworkPaths = 2,
    LocalSystemNotAuthorized = 3,
    Canceled = 4,
    TimedOut = 5,
    RemoteSystemNotAuthorized = 6,
    RefusedDueToConfiguration = 7,
    UnexpectedInternalError = 8,
};

enum class XboxLiveEndpointPairState : int32_t
{
    Invalid = 0,
    CreatingOutbound = 1,
    CreatingInbound = 2,
    Ready = 3,
    DeletingLocally = 4,
    RemoteEndpointTerminating = 5,
    Deleted = 6,
};

enum class XboxLiveNetworkAccessKind : int32_t
{
    Open = 0,
    Moderate = 1,
    Strict = 2,
};

enum class XboxLiveQualityOfServiceMeasurementStatus : int32_t
{
    NotStarted = 0,
    InProgress = 1,
    InProgressWithProvisionalResults = 2,
    Succeeded = 3,
    NoLocalNetworks = 4,
    NoCompatibleNetworkPaths = 5,
    LocalSystemNotAuthorized = 6,
    Canceled = 7,
    TimedOut = 8,
    RemoteSystemNotAuthorized = 9,
    RefusedDueToConfiguration = 10,
    UnexpectedInternalError = 11,
};

enum class XboxLiveQualityOfServiceMetric : int32_t
{
    AverageLatencyInMilliseconds = 0,
    MinLatencyInMilliseconds = 1,
    MaxLatencyInMilliseconds = 2,
    AverageOutboundBitsPerSecond = 3,
    MinOutboundBitsPerSecond = 4,
    MaxOutboundBitsPerSecond = 5,
    AverageInboundBitsPerSecond = 6,
    MinInboundBitsPerSecond = 7,
    MaxInboundBitsPerSecond = 8,
};

enum class XboxLiveSocketKind : int32_t
{
    None = 0,
    Datagram = 1,
    Stream = 2,
};

struct IXboxLiveDeviceAddress;
struct IXboxLiveDeviceAddressStatics;
struct IXboxLiveEndpointPair;
struct IXboxLiveEndpointPairCreationResult;
struct IXboxLiveEndpointPairStateChangedEventArgs;
struct IXboxLiveEndpointPairStatics;
struct IXboxLiveEndpointPairTemplate;
struct IXboxLiveEndpointPairTemplateStatics;
struct IXboxLiveInboundEndpointPairCreatedEventArgs;
struct IXboxLiveQualityOfServiceMeasurement;
struct IXboxLiveQualityOfServiceMeasurementStatics;
struct IXboxLiveQualityOfServiceMetricResult;
struct IXboxLiveQualityOfServicePrivatePayloadResult;
struct XboxLiveDeviceAddress;
struct XboxLiveEndpointPair;
struct XboxLiveEndpointPairCreationResult;
struct XboxLiveEndpointPairStateChangedEventArgs;
struct XboxLiveEndpointPairTemplate;
struct XboxLiveInboundEndpointPairCreatedEventArgs;
struct XboxLiveQualityOfServiceMeasurement;
struct XboxLiveQualityOfServiceMetricResult;
struct XboxLiveQualityOfServicePrivatePayloadResult;

}

namespace winrt::impl {

template<> struct is_enum_flag<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationBehaviors> : std::true_type {};
template <> struct category<Windows::Networking::XboxLive::IXboxLiveDeviceAddress>{ using type = interface_category; };
template <> struct category<Windows::Networking::XboxLive::IXboxLiveDeviceAddressStatics>{ using type = interface_category; };
template <> struct category<Windows::Networking::XboxLive::IXboxLiveEndpointPair>{ using type = interface_category; };
template <> struct category<Windows::Networking::XboxLive::IXboxLiveEndpointPairCreationResult>{ using type = interface_category; };
template <> struct category<Windows::Networking::XboxLive::IXboxLiveEndpointPairStateChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Networking::XboxLive::IXboxLiveEndpointPairStatics>{ using type = interface_category; };
template <> struct category<Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate>{ using type = interface_category; };
template <> struct category<Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplateStatics>{ using type = interface_category; };
template <> struct category<Windows::Networking::XboxLive::IXboxLiveInboundEndpointPairCreatedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement>{ using type = interface_category; };
template <> struct category<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics>{ using type = interface_category; };
template <> struct category<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult>{ using type = interface_category; };
template <> struct category<Windows::Networking::XboxLive::IXboxLiveQualityOfServicePrivatePayloadResult>{ using type = interface_category; };
template <> struct category<Windows::Networking::XboxLive::XboxLiveDeviceAddress>{ using type = class_category; };
template <> struct category<Windows::Networking::XboxLive::XboxLiveEndpointPair>{ using type = class_category; };
template <> struct category<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult>{ using type = class_category; };
template <> struct category<Windows::Networking::XboxLive::XboxLiveEndpointPairStateChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate>{ using type = class_category; };
template <> struct category<Windows::Networking::XboxLive::XboxLiveInboundEndpointPairCreatedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurement>{ using type = class_category; };
template <> struct category<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult>{ using type = class_category; };
template <> struct category<Windows::Networking::XboxLive::XboxLiveQualityOfServicePrivatePayloadResult>{ using type = class_category; };
template <> struct category<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationBehaviors>{ using type = enum_category; };
template <> struct category<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationStatus>{ using type = enum_category; };
template <> struct category<Windows::Networking::XboxLive::XboxLiveEndpointPairState>{ using type = enum_category; };
template <> struct category<Windows::Networking::XboxLive::XboxLiveNetworkAccessKind>{ using type = enum_category; };
template <> struct category<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurementStatus>{ using type = enum_category; };
template <> struct category<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric>{ using type = enum_category; };
template <> struct category<Windows::Networking::XboxLive::XboxLiveSocketKind>{ using type = enum_category; };
template <> struct name<Windows::Networking::XboxLive::IXboxLiveDeviceAddress>{ static constexpr auto & value{ L"Windows.Networking.XboxLive.IXboxLiveDeviceAddress" }; };
template <> struct name<Windows::Networking::XboxLive::IXboxLiveDeviceAddressStatics>{ static constexpr auto & value{ L"Windows.Networking.XboxLive.IXboxLiveDeviceAddressStatics" }; };
template <> struct name<Windows::Networking::XboxLive::IXboxLiveEndpointPair>{ static constexpr auto & value{ L"Windows.Networking.XboxLive.IXboxLiveEndpointPair" }; };
template <> struct name<Windows::Networking::XboxLive::IXboxLiveEndpointPairCreationResult>{ static constexpr auto & value{ L"Windows.Networking.XboxLive.IXboxLiveEndpointPairCreationResult" }; };
template <> struct name<Windows::Networking::XboxLive::IXboxLiveEndpointPairStateChangedEventArgs>{ static constexpr auto & value{ L"Windows.Networking.XboxLive.IXboxLiveEndpointPairStateChangedEventArgs" }; };
template <> struct name<Windows::Networking::XboxLive::IXboxLiveEndpointPairStatics>{ static constexpr auto & value{ L"Windows.Networking.XboxLive.IXboxLiveEndpointPairStatics" }; };
template <> struct name<Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate>{ static constexpr auto & value{ L"Windows.Networking.XboxLive.IXboxLiveEndpointPairTemplate" }; };
template <> struct name<Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplateStatics>{ static constexpr auto & value{ L"Windows.Networking.XboxLive.IXboxLiveEndpointPairTemplateStatics" }; };
template <> struct name<Windows::Networking::XboxLive::IXboxLiveInboundEndpointPairCreatedEventArgs>{ static constexpr auto & value{ L"Windows.Networking.XboxLive.IXboxLiveInboundEndpointPairCreatedEventArgs" }; };
template <> struct name<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement>{ static constexpr auto & value{ L"Windows.Networking.XboxLive.IXboxLiveQualityOfServiceMeasurement" }; };
template <> struct name<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics>{ static constexpr auto & value{ L"Windows.Networking.XboxLive.IXboxLiveQualityOfServiceMeasurementStatics" }; };
template <> struct name<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult>{ static constexpr auto & value{ L"Windows.Networking.XboxLive.IXboxLiveQualityOfServiceMetricResult" }; };
template <> struct name<Windows::Networking::XboxLive::IXboxLiveQualityOfServicePrivatePayloadResult>{ static constexpr auto & value{ L"Windows.Networking.XboxLive.IXboxLiveQualityOfServicePrivatePayloadResult" }; };
template <> struct name<Windows::Networking::XboxLive::XboxLiveDeviceAddress>{ static constexpr auto & value{ L"Windows.Networking.XboxLive.XboxLiveDeviceAddress" }; };
template <> struct name<Windows::Networking::XboxLive::XboxLiveEndpointPair>{ static constexpr auto & value{ L"Windows.Networking.XboxLive.XboxLiveEndpointPair" }; };
template <> struct name<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult>{ static constexpr auto & value{ L"Windows.Networking.XboxLive.XboxLiveEndpointPairCreationResult" }; };
template <> struct name<Windows::Networking::XboxLive::XboxLiveEndpointPairStateChangedEventArgs>{ static constexpr auto & value{ L"Windows.Networking.XboxLive.XboxLiveEndpointPairStateChangedEventArgs" }; };
template <> struct name<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate>{ static constexpr auto & value{ L"Windows.Networking.XboxLive.XboxLiveEndpointPairTemplate" }; };
template <> struct name<Windows::Networking::XboxLive::XboxLiveInboundEndpointPairCreatedEventArgs>{ static constexpr auto & value{ L"Windows.Networking.XboxLive.XboxLiveInboundEndpointPairCreatedEventArgs" }; };
template <> struct name<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurement>{ static constexpr auto & value{ L"Windows.Networking.XboxLive.XboxLiveQualityOfServiceMeasurement" }; };
template <> struct name<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult>{ static constexpr auto & value{ L"Windows.Networking.XboxLive.XboxLiveQualityOfServiceMetricResult" }; };
template <> struct name<Windows::Networking::XboxLive::XboxLiveQualityOfServicePrivatePayloadResult>{ static constexpr auto & value{ L"Windows.Networking.XboxLive.XboxLiveQualityOfServicePrivatePayloadResult" }; };
template <> struct name<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationBehaviors>{ static constexpr auto & value{ L"Windows.Networking.XboxLive.XboxLiveEndpointPairCreationBehaviors" }; };
template <> struct name<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationStatus>{ static constexpr auto & value{ L"Windows.Networking.XboxLive.XboxLiveEndpointPairCreationStatus" }; };
template <> struct name<Windows::Networking::XboxLive::XboxLiveEndpointPairState>{ static constexpr auto & value{ L"Windows.Networking.XboxLive.XboxLiveEndpointPairState" }; };
template <> struct name<Windows::Networking::XboxLive::XboxLiveNetworkAccessKind>{ static constexpr auto & value{ L"Windows.Networking.XboxLive.XboxLiveNetworkAccessKind" }; };
template <> struct name<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurementStatus>{ static constexpr auto & value{ L"Windows.Networking.XboxLive.XboxLiveQualityOfServiceMeasurementStatus" }; };
template <> struct name<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric>{ static constexpr auto & value{ L"Windows.Networking.XboxLive.XboxLiveQualityOfServiceMetric" }; };
template <> struct name<Windows::Networking::XboxLive::XboxLiveSocketKind>{ static constexpr auto & value{ L"Windows.Networking.XboxLive.XboxLiveSocketKind" }; };
template <> struct guid<Windows::Networking::XboxLive::IXboxLiveDeviceAddress>{ static constexpr GUID value{ 0xF5BBD279,0x3C86,0x4B57,{ 0xA3,0x1A,0xB9,0x46,0x24,0x08,0xFD,0x01 } }; };
template <> struct guid<Windows::Networking::XboxLive::IXboxLiveDeviceAddressStatics>{ static constexpr GUID value{ 0x5954A819,0x4A79,0x4931,{ 0x82,0x7C,0x7F,0x50,0x3E,0x96,0x32,0x63 } }; };
template <> struct guid<Windows::Networking::XboxLive::IXboxLiveEndpointPair>{ static constexpr GUID value{ 0x1E9A839B,0x813E,0x44E0,{ 0xB8,0x7F,0xC8,0x7A,0x09,0x34,0x75,0xE4 } }; };
template <> struct guid<Windows::Networking::XboxLive::IXboxLiveEndpointPairCreationResult>{ static constexpr GUID value{ 0xD9A8BB95,0x2AAB,0x4D1E,{ 0x97,0x94,0x33,0xEC,0xC0,0xDC,0xF0,0xFE } }; };
template <> struct guid<Windows::Networking::XboxLive::IXboxLiveEndpointPairStateChangedEventArgs>{ static constexpr GUID value{ 0x592E3B55,0xDE08,0x44E7,{ 0xAC,0x3B,0xB9,0xB9,0xA1,0x69,0x58,0x3A } }; };
template <> struct guid<Windows::Networking::XboxLive::IXboxLiveEndpointPairStatics>{ static constexpr GUID value{ 0x64316B30,0x217A,0x4243,{ 0x8E,0xE1,0x67,0x29,0x28,0x1D,0x27,0xDB } }; };
template <> struct guid<Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate>{ static constexpr GUID value{ 0x6B286ECF,0x3457,0x40CE,{ 0xB9,0xA1,0xC0,0xCF,0xE0,0x21,0x3E,0xA7 } }; };
template <> struct guid<Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplateStatics>{ static constexpr GUID value{ 0x1E13137B,0x737B,0x4A23,{ 0xBC,0x64,0x08,0x70,0xF7,0x56,0x55,0xBA } }; };
template <> struct guid<Windows::Networking::XboxLive::IXboxLiveInboundEndpointPairCreatedEventArgs>{ static constexpr GUID value{ 0xDC183B62,0x22BA,0x48D2,{ 0x80,0xDE,0xC2,0x39,0x68,0xBD,0x19,0x8B } }; };
template <> struct guid<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement>{ static constexpr GUID value{ 0x4D682BCE,0xA5D6,0x47E6,{ 0xA2,0x36,0xCF,0xDE,0x5F,0xBD,0xF2,0xED } }; };
template <> struct guid<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics>{ static constexpr GUID value{ 0x6E352DCA,0x23CF,0x440A,{ 0xB0,0x77,0x5E,0x30,0x85,0x7A,0x82,0x34 } }; };
template <> struct guid<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult>{ static constexpr GUID value{ 0xAEEC53D1,0x3561,0x4782,{ 0xB0,0xCF,0xD3,0xAE,0x29,0xD9,0xFA,0x87 } }; };
template <> struct guid<Windows::Networking::XboxLive::IXboxLiveQualityOfServicePrivatePayloadResult>{ static constexpr GUID value{ 0x5A6302AE,0x6F38,0x41C0,{ 0x9F,0xCC,0xEA,0x6C,0xB9,0x78,0xCA,0xFC } }; };
template <> struct default_interface<Windows::Networking::XboxLive::XboxLiveDeviceAddress>{ using type = Windows::Networking::XboxLive::IXboxLiveDeviceAddress; };
template <> struct default_interface<Windows::Networking::XboxLive::XboxLiveEndpointPair>{ using type = Windows::Networking::XboxLive::IXboxLiveEndpointPair; };
template <> struct default_interface<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult>{ using type = Windows::Networking::XboxLive::IXboxLiveEndpointPairCreationResult; };
template <> struct default_interface<Windows::Networking::XboxLive::XboxLiveEndpointPairStateChangedEventArgs>{ using type = Windows::Networking::XboxLive::IXboxLiveEndpointPairStateChangedEventArgs; };
template <> struct default_interface<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate>{ using type = Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate; };
template <> struct default_interface<Windows::Networking::XboxLive::XboxLiveInboundEndpointPairCreatedEventArgs>{ using type = Windows::Networking::XboxLive::IXboxLiveInboundEndpointPairCreatedEventArgs; };
template <> struct default_interface<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurement>{ using type = Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement; };
template <> struct default_interface<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult>{ using type = Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult; };
template <> struct default_interface<Windows::Networking::XboxLive::XboxLiveQualityOfServicePrivatePayloadResult>{ using type = Windows::Networking::XboxLive::IXboxLiveQualityOfServicePrivatePayloadResult; };

template <typename D>
struct consume_Windows_Networking_XboxLive_IXboxLiveDeviceAddress
{
    event_token SnapshotChanged(Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveDeviceAddress, Windows::Foundation::IInspectable> const& handler) const;
    using SnapshotChanged_revoker = event_revoker<Windows::Networking::XboxLive::IXboxLiveDeviceAddress>;
    SnapshotChanged_revoker SnapshotChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveDeviceAddress, Windows::Foundation::IInspectable> const& handler) const;
    void SnapshotChanged(event_token const& token) const;
    hstring GetSnapshotAsBase64() const;
    Windows::Storage::Streams::IBuffer GetSnapshotAsBuffer() const;
    void GetSnapshotAsBytes(array_view<uint8_t> buffer, uint32_t& bytesWritten) const;
    int32_t Compare(Windows::Networking::XboxLive::XboxLiveDeviceAddress const& otherDeviceAddress) const;
    bool IsValid() const noexcept;
    bool IsLocal() const noexcept;
    Windows::Networking::XboxLive::XboxLiveNetworkAccessKind NetworkAccessKind() const noexcept;
};
template <> struct consume<Windows::Networking::XboxLive::IXboxLiveDeviceAddress> { template <typename D> using type = consume_Windows_Networking_XboxLive_IXboxLiveDeviceAddress<D>; };

template <typename D>
struct consume_Windows_Networking_XboxLive_IXboxLiveDeviceAddressStatics
{
    Windows::Networking::XboxLive::XboxLiveDeviceAddress CreateFromSnapshotBase64(param::hstring const& base64) const;
    Windows::Networking::XboxLive::XboxLiveDeviceAddress CreateFromSnapshotBuffer(Windows::Storage::Streams::IBuffer const& buffer) const;
    Windows::Networking::XboxLive::XboxLiveDeviceAddress CreateFromSnapshotBytes(array_view<uint8_t const> buffer) const;
    Windows::Networking::XboxLive::XboxLiveDeviceAddress GetLocal() const;
    uint32_t MaxSnapshotBytesSize() const noexcept;
};
template <> struct consume<Windows::Networking::XboxLive::IXboxLiveDeviceAddressStatics> { template <typename D> using type = consume_Windows_Networking_XboxLive_IXboxLiveDeviceAddressStatics<D>; };

template <typename D>
struct consume_Windows_Networking_XboxLive_IXboxLiveEndpointPair
{
    event_token StateChanged(Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveEndpointPair, Windows::Networking::XboxLive::XboxLiveEndpointPairStateChangedEventArgs> const& handler) const;
    using StateChanged_revoker = event_revoker<Windows::Networking::XboxLive::IXboxLiveEndpointPair>;
    StateChanged_revoker StateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveEndpointPair, Windows::Networking::XboxLive::XboxLiveEndpointPairStateChangedEventArgs> const& handler) const;
    void StateChanged(event_token const& token) const;
    Windows::Foundation::IAsyncAction DeleteAsync() const;
    void GetRemoteSocketAddressBytes(array_view<uint8_t> socketAddress) const;
    void GetLocalSocketAddressBytes(array_view<uint8_t> socketAddress) const;
    Windows::Networking::XboxLive::XboxLiveEndpointPairState State() const noexcept;
    Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate Template() const noexcept;
    Windows::Networking::XboxLive::XboxLiveDeviceAddress RemoteDeviceAddress() const noexcept;
    Windows::Networking::HostName RemoteHostName() const noexcept;
    hstring RemotePort() const noexcept;
    Windows::Networking::HostName LocalHostName() const noexcept;
    hstring LocalPort() const noexcept;
};
template <> struct consume<Windows::Networking::XboxLive::IXboxLiveEndpointPair> { template <typename D> using type = consume_Windows_Networking_XboxLive_IXboxLiveEndpointPair<D>; };

template <typename D>
struct consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairCreationResult
{
    Windows::Networking::XboxLive::XboxLiveDeviceAddress DeviceAddress() const noexcept;
    Windows::Networking::XboxLive::XboxLiveEndpointPairCreationStatus Status() const noexcept;
    bool IsExistingPathEvaluation() const noexcept;
    Windows::Networking::XboxLive::XboxLiveEndpointPair EndpointPair() const noexcept;
};
template <> struct consume<Windows::Networking::XboxLive::IXboxLiveEndpointPairCreationResult> { template <typename D> using type = consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairCreationResult<D>; };

template <typename D>
struct consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairStateChangedEventArgs
{
    Windows::Networking::XboxLive::XboxLiveEndpointPairState OldState() const noexcept;
    Windows::Networking::XboxLive::XboxLiveEndpointPairState NewState() const noexcept;
};
template <> struct consume<Windows::Networking::XboxLive::IXboxLiveEndpointPairStateChangedEventArgs> { template <typename D> using type = consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairStateChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairStatics
{
    Windows::Networking::XboxLive::XboxLiveEndpointPair FindEndpointPairBySocketAddressBytes(array_view<uint8_t const> localSocketAddress, array_view<uint8_t const> remoteSocketAddress) const;
    Windows::Networking::XboxLive::XboxLiveEndpointPair FindEndpointPairByHostNamesAndPorts(Windows::Networking::HostName const& localHostName, param::hstring const& localPort, Windows::Networking::HostName const& remoteHostName, param::hstring const& remotePort) const;
};
template <> struct consume<Windows::Networking::XboxLive::IXboxLiveEndpointPairStatics> { template <typename D> using type = consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairStatics<D>; };

template <typename D>
struct consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairTemplate
{
    event_token InboundEndpointPairCreated(Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate, Windows::Networking::XboxLive::XboxLiveInboundEndpointPairCreatedEventArgs> const& handler) const;
    using InboundEndpointPairCreated_revoker = event_revoker<Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate>;
    InboundEndpointPairCreated_revoker InboundEndpointPairCreated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate, Windows::Networking::XboxLive::XboxLiveInboundEndpointPairCreatedEventArgs> const& handler) const;
    void InboundEndpointPairCreated(event_token const& token) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult> CreateEndpointPairAsync(Windows::Networking::XboxLive::XboxLiveDeviceAddress const& deviceAddress) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult> CreateEndpointPairAsync(Windows::Networking::XboxLive::XboxLiveDeviceAddress const& deviceAddress, Windows::Networking::XboxLive::XboxLiveEndpointPairCreationBehaviors const& behaviors) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult> CreateEndpointPairForPortsAsync(Windows::Networking::XboxLive::XboxLiveDeviceAddress const& deviceAddress, param::hstring const& initiatorPort, param::hstring const& acceptorPort) const;
    Windows::Foundation::IAsyncOperation<Windows::Networking::XboxLive::XboxLiveEndpointPairCreationResult> CreateEndpointPairForPortsAsync(Windows::Networking::XboxLive::XboxLiveDeviceAddress const& deviceAddress, param::hstring const& initiatorPort, param::hstring const& acceptorPort, Windows::Networking::XboxLive::XboxLiveEndpointPairCreationBehaviors const& behaviors) const;
    hstring Name() const noexcept;
    Windows::Networking::XboxLive::XboxLiveSocketKind SocketKind() const noexcept;
    uint16_t InitiatorBoundPortRangeLower() const noexcept;
    uint16_t InitiatorBoundPortRangeUpper() const noexcept;
    uint16_t AcceptorBoundPortRangeLower() const noexcept;
    uint16_t AcceptorBoundPortRangeUpper() const noexcept;
    Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveEndpointPair> EndpointPairs() const noexcept;
};
template <> struct consume<Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate> { template <typename D> using type = consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairTemplate<D>; };

template <typename D>
struct consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairTemplateStatics
{
    Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate GetTemplateByName(param::hstring const& name) const;
    Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveEndpointPairTemplate> Templates() const noexcept;
};
template <> struct consume<Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplateStatics> { template <typename D> using type = consume_Windows_Networking_XboxLive_IXboxLiveEndpointPairTemplateStatics<D>; };

template <typename D>
struct consume_Windows_Networking_XboxLive_IXboxLiveInboundEndpointPairCreatedEventArgs
{
    Windows::Networking::XboxLive::XboxLiveEndpointPair EndpointPair() const noexcept;
};
template <> struct consume<Windows::Networking::XboxLive::IXboxLiveInboundEndpointPairCreatedEventArgs> { template <typename D> using type = consume_Windows_Networking_XboxLive_IXboxLiveInboundEndpointPairCreatedEventArgs<D>; };

template <typename D>
struct consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurement
{
    Windows::Foundation::IAsyncAction MeasureAsync() const;
    Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult> GetMetricResultsForDevice(Windows::Networking::XboxLive::XboxLiveDeviceAddress const& deviceAddress) const;
    Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult> GetMetricResultsForMetric(Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric const& metric) const;
    Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult GetMetricResult(Windows::Networking::XboxLive::XboxLiveDeviceAddress const& deviceAddress, Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric const& metric) const;
    Windows::Networking::XboxLive::XboxLiveQualityOfServicePrivatePayloadResult GetPrivatePayloadResult(Windows::Networking::XboxLive::XboxLiveDeviceAddress const& deviceAddress) const;
    Windows::Foundation::Collections::IVector<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric> Metrics() const noexcept;
    Windows::Foundation::Collections::IVector<Windows::Networking::XboxLive::XboxLiveDeviceAddress> DeviceAddresses() const noexcept;
    bool ShouldRequestPrivatePayloads() const noexcept;
    void ShouldRequestPrivatePayloads(bool value) const noexcept;
    uint32_t TimeoutInMilliseconds() const noexcept;
    void TimeoutInMilliseconds(uint32_t value) const noexcept;
    uint32_t NumberOfProbesToAttempt() const noexcept;
    void NumberOfProbesToAttempt(uint32_t value) const noexcept;
    uint32_t NumberOfResultsPending() const noexcept;
    Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetricResult> MetricResults() const noexcept;
    Windows::Foundation::Collections::IVectorView<Windows::Networking::XboxLive::XboxLiveQualityOfServicePrivatePayloadResult> PrivatePayloadResults() const noexcept;
};
template <> struct consume<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement> { template <typename D> using type = consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurement<D>; };

template <typename D>
struct consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurementStatics
{
    void PublishPrivatePayloadBytes(array_view<uint8_t const> payload) const;
    void ClearPrivatePayload() const;
    uint32_t MaxSimultaneousProbeConnections() const noexcept;
    void MaxSimultaneousProbeConnections(uint32_t value) const noexcept;
    bool IsSystemOutboundBandwidthConstrained() const noexcept;
    void IsSystemOutboundBandwidthConstrained(bool value) const noexcept;
    bool IsSystemInboundBandwidthConstrained() const noexcept;
    void IsSystemInboundBandwidthConstrained(bool value) const noexcept;
    Windows::Storage::Streams::IBuffer PublishedPrivatePayload() const noexcept;
    void PublishedPrivatePayload(Windows::Storage::Streams::IBuffer const& value) const noexcept;
    uint32_t MaxPrivatePayloadSize() const noexcept;
};
template <> struct consume<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics> { template <typename D> using type = consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMeasurementStatics<D>; };

template <typename D>
struct consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMetricResult
{
    Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurementStatus Status() const noexcept;
    Windows::Networking::XboxLive::XboxLiveDeviceAddress DeviceAddress() const noexcept;
    Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric Metric() const noexcept;
    uint64_t Value() const noexcept;
};
template <> struct consume<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult> { template <typename D> using type = consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServiceMetricResult<D>; };

template <typename D>
struct consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServicePrivatePayloadResult
{
    Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurementStatus Status() const noexcept;
    Windows::Networking::XboxLive::XboxLiveDeviceAddress DeviceAddress() const noexcept;
    Windows::Storage::Streams::IBuffer Value() const noexcept;
};
template <> struct consume<Windows::Networking::XboxLive::IXboxLiveQualityOfServicePrivatePayloadResult> { template <typename D> using type = consume_Windows_Networking_XboxLive_IXboxLiveQualityOfServicePrivatePayloadResult<D>; };

template <> struct abi<Windows::Networking::XboxLive::IXboxLiveDeviceAddress>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_SnapshotChanged(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_SnapshotChanged(event_token token) = 0;
    virtual HRESULT __stdcall GetSnapshotAsBase64(HSTRING* value) = 0;
    virtual HRESULT __stdcall GetSnapshotAsBuffer(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetSnapshotAsBytes(uint32_t __bufferSize, uint8_t* buffer, uint32_t* bytesWritten) = 0;
    virtual HRESULT __stdcall Compare(::IUnknown* otherDeviceAddress, int32_t* result) = 0;
    virtual HRESULT __stdcall get_IsValid(bool* value) = 0;
    virtual HRESULT __stdcall get_IsLocal(bool* value) = 0;
    virtual HRESULT __stdcall get_NetworkAccessKind(Windows::Networking::XboxLive::XboxLiveNetworkAccessKind* value) = 0;
};};

template <> struct abi<Windows::Networking::XboxLive::IXboxLiveDeviceAddressStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateFromSnapshotBase64(HSTRING base64, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateFromSnapshotBuffer(::IUnknown* buffer, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall CreateFromSnapshotBytes(uint32_t __bufferSize, uint8_t* buffer, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetLocal(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MaxSnapshotBytesSize(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Networking::XboxLive::IXboxLiveEndpointPair>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_StateChanged(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_StateChanged(event_token token) = 0;
    virtual HRESULT __stdcall DeleteAsync(::IUnknown** action) = 0;
    virtual HRESULT __stdcall GetRemoteSocketAddressBytes(uint32_t __socketAddressSize, uint8_t* socketAddress) = 0;
    virtual HRESULT __stdcall GetLocalSocketAddressBytes(uint32_t __socketAddressSize, uint8_t* socketAddress) = 0;
    virtual HRESULT __stdcall get_State(Windows::Networking::XboxLive::XboxLiveEndpointPairState* value) = 0;
    virtual HRESULT __stdcall get_Template(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RemoteDeviceAddress(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RemoteHostName(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_RemotePort(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_LocalHostName(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LocalPort(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Networking::XboxLive::IXboxLiveEndpointPairCreationResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceAddress(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Status(Windows::Networking::XboxLive::XboxLiveEndpointPairCreationStatus* value) = 0;
    virtual HRESULT __stdcall get_IsExistingPathEvaluation(bool* value) = 0;
    virtual HRESULT __stdcall get_EndpointPair(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::XboxLive::IXboxLiveEndpointPairStateChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_OldState(Windows::Networking::XboxLive::XboxLiveEndpointPairState* value) = 0;
    virtual HRESULT __stdcall get_NewState(Windows::Networking::XboxLive::XboxLiveEndpointPairState* value) = 0;
};};

template <> struct abi<Windows::Networking::XboxLive::IXboxLiveEndpointPairStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FindEndpointPairBySocketAddressBytes(uint32_t __localSocketAddressSize, uint8_t* localSocketAddress, uint32_t __remoteSocketAddressSize, uint8_t* remoteSocketAddress, ::IUnknown** endpointPair) = 0;
    virtual HRESULT __stdcall FindEndpointPairByHostNamesAndPorts(::IUnknown* localHostName, HSTRING localPort, ::IUnknown* remoteHostName, HSTRING remotePort, ::IUnknown** endpointPair) = 0;
};};

template <> struct abi<Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_InboundEndpointPairCreated(::IUnknown* handler, event_token* token) = 0;
    virtual HRESULT __stdcall remove_InboundEndpointPairCreated(event_token token) = 0;
    virtual HRESULT __stdcall CreateEndpointPairDefaultAsync(::IUnknown* deviceAddress, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateEndpointPairWithBehaviorsAsync(::IUnknown* deviceAddress, Windows::Networking::XboxLive::XboxLiveEndpointPairCreationBehaviors behaviors, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateEndpointPairForPortsDefaultAsync(::IUnknown* deviceAddress, HSTRING initiatorPort, HSTRING acceptorPort, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall CreateEndpointPairForPortsWithBehaviorsAsync(::IUnknown* deviceAddress, HSTRING initiatorPort, HSTRING acceptorPort, Windows::Networking::XboxLive::XboxLiveEndpointPairCreationBehaviors behaviors, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SocketKind(Windows::Networking::XboxLive::XboxLiveSocketKind* value) = 0;
    virtual HRESULT __stdcall get_InitiatorBoundPortRangeLower(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_InitiatorBoundPortRangeUpper(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_AcceptorBoundPortRangeLower(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_AcceptorBoundPortRangeUpper(uint16_t* value) = 0;
    virtual HRESULT __stdcall get_EndpointPairs(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplateStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetTemplateByName(HSTRING name, ::IUnknown** namedTemplate) = 0;
    virtual HRESULT __stdcall get_Templates(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::XboxLive::IXboxLiveInboundEndpointPairCreatedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EndpointPair(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall MeasureAsync(::IUnknown** action) = 0;
    virtual HRESULT __stdcall GetMetricResultsForDevice(::IUnknown* deviceAddress, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetMetricResultsForMetric(Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric metric, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetMetricResult(::IUnknown* deviceAddress, Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric metric, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetPrivatePayloadResult(::IUnknown* deviceAddress, ::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Metrics(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DeviceAddresses(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ShouldRequestPrivatePayloads(bool* value) = 0;
    virtual HRESULT __stdcall put_ShouldRequestPrivatePayloads(bool value) = 0;
    virtual HRESULT __stdcall get_TimeoutInMilliseconds(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_TimeoutInMilliseconds(uint32_t value) = 0;
    virtual HRESULT __stdcall get_NumberOfProbesToAttempt(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_NumberOfProbesToAttempt(uint32_t value) = 0;
    virtual HRESULT __stdcall get_NumberOfResultsPending(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_MetricResults(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_PrivatePayloadResults(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurementStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall PublishPrivatePayloadBytes(uint32_t __payloadSize, uint8_t* payload) = 0;
    virtual HRESULT __stdcall ClearPrivatePayload() = 0;
    virtual HRESULT __stdcall get_MaxSimultaneousProbeConnections(uint32_t* value) = 0;
    virtual HRESULT __stdcall put_MaxSimultaneousProbeConnections(uint32_t value) = 0;
    virtual HRESULT __stdcall get_IsSystemOutboundBandwidthConstrained(bool* value) = 0;
    virtual HRESULT __stdcall put_IsSystemOutboundBandwidthConstrained(bool value) = 0;
    virtual HRESULT __stdcall get_IsSystemInboundBandwidthConstrained(bool* value) = 0;
    virtual HRESULT __stdcall put_IsSystemInboundBandwidthConstrained(bool value) = 0;
    virtual HRESULT __stdcall get_PublishedPrivatePayload(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_PublishedPrivatePayload(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_MaxPrivatePayloadSize(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurementStatus* value) = 0;
    virtual HRESULT __stdcall get_DeviceAddress(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Metric(Windows::Networking::XboxLive::XboxLiveQualityOfServiceMetric* value) = 0;
    virtual HRESULT __stdcall get_Value(uint64_t* value) = 0;
};};

template <> struct abi<Windows::Networking::XboxLive::IXboxLiveQualityOfServicePrivatePayloadResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(Windows::Networking::XboxLive::XboxLiveQualityOfServiceMeasurementStatus* value) = 0;
    virtual HRESULT __stdcall get_DeviceAddress(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Value(::IUnknown** value) = 0;
};};

}
