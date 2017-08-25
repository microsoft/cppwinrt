// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Perception {

enum class PerceptionFrameSourcePropertyChangeStatus;

}

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Deferral;
struct IMemoryBuffer;

}

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {

struct IPropertySet;
struct ValueSet;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging {

enum class BitmapAlphaMode;
enum class BitmapPixelFormat;

}

WINRT_EXPORT namespace winrt::Windows::Media {

struct VideoFrame;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Perception::Provider {

struct IKnownPerceptionFrameKindStatics;
struct IPerceptionControlGroup;
struct IPerceptionControlGroupFactory;
struct IPerceptionCorrelation;
struct IPerceptionCorrelationFactory;
struct IPerceptionCorrelationGroup;
struct IPerceptionCorrelationGroupFactory;
struct IPerceptionFaceAuthenticationGroup;
struct IPerceptionFaceAuthenticationGroupFactory;
struct IPerceptionFrame;
struct IPerceptionFrameProvider;
struct IPerceptionFrameProviderInfo;
struct IPerceptionFrameProviderManager;
struct IPerceptionFrameProviderManagerServiceStatics;
struct IPerceptionPropertyChangeRequest;
struct IPerceptionVideoFrameAllocator;
struct IPerceptionVideoFrameAllocatorFactory;
struct KnownPerceptionFrameKind;
struct PerceptionControlGroup;
struct PerceptionCorrelation;
struct PerceptionCorrelationGroup;
struct PerceptionFaceAuthenticationGroup;
struct PerceptionFrame;
struct PerceptionFrameProviderInfo;
struct PerceptionFrameProviderManagerService;
struct PerceptionPropertyChangeRequest;
struct PerceptionVideoFrameAllocator;
struct PerceptionStartFaceAuthenticationHandler;
struct PerceptionStopFaceAuthenticationHandler;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::Perception::Provider::IKnownPerceptionFrameKindStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::Provider::IPerceptionControlGroup>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::Provider::IPerceptionControlGroupFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::Provider::IPerceptionCorrelation>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::Provider::IPerceptionCorrelationFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::Provider::IPerceptionCorrelationGroup>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::Provider::IPerceptionCorrelationGroupFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroup>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroupFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::Provider::IPerceptionFrame>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::Provider::IPerceptionFrameProvider>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::Provider::IPerceptionFrameProviderInfo>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::Provider::IPerceptionFrameProviderManagerServiceStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::Provider::IPerceptionPropertyChangeRequest>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::Provider::IPerceptionVideoFrameAllocator>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::Provider::IPerceptionVideoFrameAllocatorFactory>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::Provider::KnownPerceptionFrameKind>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::Provider::PerceptionControlGroup>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::Provider::PerceptionCorrelation>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::Provider::PerceptionCorrelationGroup>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::Provider::PerceptionFrame>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::Provider::PerceptionFrameProviderManagerService>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::Provider::PerceptionPropertyChangeRequest>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::Provider::PerceptionVideoFrameAllocator>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::Provider::PerceptionStartFaceAuthenticationHandler>{ using type = delegate_category; };
template <> struct category<Windows::Devices::Perception::Provider::PerceptionStopFaceAuthenticationHandler>{ using type = delegate_category; };
template <> struct name<Windows::Devices::Perception::Provider::IKnownPerceptionFrameKindStatics>{ static constexpr auto & value{ L"Windows.Devices.Perception.Provider.IKnownPerceptionFrameKindStatics" }; };
template <> struct name<Windows::Devices::Perception::Provider::IPerceptionControlGroup>{ static constexpr auto & value{ L"Windows.Devices.Perception.Provider.IPerceptionControlGroup" }; };
template <> struct name<Windows::Devices::Perception::Provider::IPerceptionControlGroupFactory>{ static constexpr auto & value{ L"Windows.Devices.Perception.Provider.IPerceptionControlGroupFactory" }; };
template <> struct name<Windows::Devices::Perception::Provider::IPerceptionCorrelation>{ static constexpr auto & value{ L"Windows.Devices.Perception.Provider.IPerceptionCorrelation" }; };
template <> struct name<Windows::Devices::Perception::Provider::IPerceptionCorrelationFactory>{ static constexpr auto & value{ L"Windows.Devices.Perception.Provider.IPerceptionCorrelationFactory" }; };
template <> struct name<Windows::Devices::Perception::Provider::IPerceptionCorrelationGroup>{ static constexpr auto & value{ L"Windows.Devices.Perception.Provider.IPerceptionCorrelationGroup" }; };
template <> struct name<Windows::Devices::Perception::Provider::IPerceptionCorrelationGroupFactory>{ static constexpr auto & value{ L"Windows.Devices.Perception.Provider.IPerceptionCorrelationGroupFactory" }; };
template <> struct name<Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroup>{ static constexpr auto & value{ L"Windows.Devices.Perception.Provider.IPerceptionFaceAuthenticationGroup" }; };
template <> struct name<Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroupFactory>{ static constexpr auto & value{ L"Windows.Devices.Perception.Provider.IPerceptionFaceAuthenticationGroupFactory" }; };
template <> struct name<Windows::Devices::Perception::Provider::IPerceptionFrame>{ static constexpr auto & value{ L"Windows.Devices.Perception.Provider.IPerceptionFrame" }; };
template <> struct name<Windows::Devices::Perception::Provider::IPerceptionFrameProvider>{ static constexpr auto & value{ L"Windows.Devices.Perception.Provider.IPerceptionFrameProvider" }; };
template <> struct name<Windows::Devices::Perception::Provider::IPerceptionFrameProviderInfo>{ static constexpr auto & value{ L"Windows.Devices.Perception.Provider.IPerceptionFrameProviderInfo" }; };
template <> struct name<Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager>{ static constexpr auto & value{ L"Windows.Devices.Perception.Provider.IPerceptionFrameProviderManager" }; };
template <> struct name<Windows::Devices::Perception::Provider::IPerceptionFrameProviderManagerServiceStatics>{ static constexpr auto & value{ L"Windows.Devices.Perception.Provider.IPerceptionFrameProviderManagerServiceStatics" }; };
template <> struct name<Windows::Devices::Perception::Provider::IPerceptionPropertyChangeRequest>{ static constexpr auto & value{ L"Windows.Devices.Perception.Provider.IPerceptionPropertyChangeRequest" }; };
template <> struct name<Windows::Devices::Perception::Provider::IPerceptionVideoFrameAllocator>{ static constexpr auto & value{ L"Windows.Devices.Perception.Provider.IPerceptionVideoFrameAllocator" }; };
template <> struct name<Windows::Devices::Perception::Provider::IPerceptionVideoFrameAllocatorFactory>{ static constexpr auto & value{ L"Windows.Devices.Perception.Provider.IPerceptionVideoFrameAllocatorFactory" }; };
template <> struct name<Windows::Devices::Perception::Provider::KnownPerceptionFrameKind>{ static constexpr auto & value{ L"Windows.Devices.Perception.Provider.KnownPerceptionFrameKind" }; };
template <> struct name<Windows::Devices::Perception::Provider::PerceptionControlGroup>{ static constexpr auto & value{ L"Windows.Devices.Perception.Provider.PerceptionControlGroup" }; };
template <> struct name<Windows::Devices::Perception::Provider::PerceptionCorrelation>{ static constexpr auto & value{ L"Windows.Devices.Perception.Provider.PerceptionCorrelation" }; };
template <> struct name<Windows::Devices::Perception::Provider::PerceptionCorrelationGroup>{ static constexpr auto & value{ L"Windows.Devices.Perception.Provider.PerceptionCorrelationGroup" }; };
template <> struct name<Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup>{ static constexpr auto & value{ L"Windows.Devices.Perception.Provider.PerceptionFaceAuthenticationGroup" }; };
template <> struct name<Windows::Devices::Perception::Provider::PerceptionFrame>{ static constexpr auto & value{ L"Windows.Devices.Perception.Provider.PerceptionFrame" }; };
template <> struct name<Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo>{ static constexpr auto & value{ L"Windows.Devices.Perception.Provider.PerceptionFrameProviderInfo" }; };
template <> struct name<Windows::Devices::Perception::Provider::PerceptionFrameProviderManagerService>{ static constexpr auto & value{ L"Windows.Devices.Perception.Provider.PerceptionFrameProviderManagerService" }; };
template <> struct name<Windows::Devices::Perception::Provider::PerceptionPropertyChangeRequest>{ static constexpr auto & value{ L"Windows.Devices.Perception.Provider.PerceptionPropertyChangeRequest" }; };
template <> struct name<Windows::Devices::Perception::Provider::PerceptionVideoFrameAllocator>{ static constexpr auto & value{ L"Windows.Devices.Perception.Provider.PerceptionVideoFrameAllocator" }; };
template <> struct name<Windows::Devices::Perception::Provider::PerceptionStartFaceAuthenticationHandler>{ static constexpr auto & value{ L"Windows.Devices.Perception.Provider.PerceptionStartFaceAuthenticationHandler" }; };
template <> struct name<Windows::Devices::Perception::Provider::PerceptionStopFaceAuthenticationHandler>{ static constexpr auto & value{ L"Windows.Devices.Perception.Provider.PerceptionStopFaceAuthenticationHandler" }; };
template <> struct guid<Windows::Devices::Perception::Provider::IKnownPerceptionFrameKindStatics>{ static constexpr GUID value{ 0x3AE651D6,0x9669,0x4106,{ 0x9F,0xAE,0x48,0x35,0xC1,0xB9,0x61,0x04 } }; };
template <> struct guid<Windows::Devices::Perception::Provider::IPerceptionControlGroup>{ static constexpr GUID value{ 0x172C4882,0x2FD9,0x4C4E,{ 0xBA,0x34,0xFD,0xF2,0x0A,0x73,0xDD,0xE5 } }; };
template <> struct guid<Windows::Devices::Perception::Provider::IPerceptionControlGroupFactory>{ static constexpr GUID value{ 0x2F1AF2E0,0xBAF1,0x453B,{ 0xBE,0xD4,0xCD,0x9D,0x46,0x19,0x15,0x4C } }; };
template <> struct guid<Windows::Devices::Perception::Provider::IPerceptionCorrelation>{ static constexpr GUID value{ 0xB4131A82,0xDFF5,0x4047,{ 0x8A,0x19,0x3B,0x4D,0x80,0x5F,0x71,0x76 } }; };
template <> struct guid<Windows::Devices::Perception::Provider::IPerceptionCorrelationFactory>{ static constexpr GUID value{ 0xD4A6C425,0x2884,0x4A8F,{ 0x81,0x34,0x28,0x35,0xD7,0x28,0x6C,0xBF } }; };
template <> struct guid<Windows::Devices::Perception::Provider::IPerceptionCorrelationGroup>{ static constexpr GUID value{ 0x752A0906,0x36A7,0x47BB,{ 0x9B,0x79,0x56,0xCC,0x6B,0x74,0x67,0x70 } }; };
template <> struct guid<Windows::Devices::Perception::Provider::IPerceptionCorrelationGroupFactory>{ static constexpr GUID value{ 0x7DFE2088,0x63DF,0x48ED,{ 0x83,0xB1,0x4A,0xB8,0x29,0x13,0x29,0x95 } }; };
template <> struct guid<Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroup>{ static constexpr GUID value{ 0xE8019814,0x4A91,0x41B0,{ 0x83,0xA6,0x88,0x1A,0x17,0x75,0x35,0x3E } }; };
template <> struct guid<Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroupFactory>{ static constexpr GUID value{ 0xE68A05D4,0xB60C,0x40F4,{ 0xBC,0xB9,0xF2,0x4D,0x46,0x46,0x73,0x20 } }; };
template <> struct guid<Windows::Devices::Perception::Provider::IPerceptionFrame>{ static constexpr GUID value{ 0x7CFE7825,0x54BB,0x4D9D,{ 0xBE,0xC5,0x8E,0xF6,0x61,0x51,0xD2,0xAC } }; };
template <> struct guid<Windows::Devices::Perception::Provider::IPerceptionFrameProvider>{ static constexpr GUID value{ 0x794F7AB9,0xB37D,0x3B33,{ 0xA1,0x0D,0x30,0x62,0x64,0x19,0xCE,0x65 } }; };
template <> struct guid<Windows::Devices::Perception::Provider::IPerceptionFrameProviderInfo>{ static constexpr GUID value{ 0xCCA959E8,0x797E,0x4E83,{ 0x9B,0x87,0x03,0x6A,0x74,0x14,0x2F,0xC4 } }; };
template <> struct guid<Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager>{ static constexpr GUID value{ 0xA959CE07,0xEAD3,0x33DF,{ 0x8E,0xC1,0xB9,0x24,0xAB,0xE0,0x19,0xC4 } }; };
template <> struct guid<Windows::Devices::Perception::Provider::IPerceptionFrameProviderManagerServiceStatics>{ static constexpr GUID value{ 0xAE8386E6,0xCAD9,0x4359,{ 0x8F,0x96,0x8E,0xAE,0x51,0x81,0x05,0x26 } }; };
template <> struct guid<Windows::Devices::Perception::Provider::IPerceptionPropertyChangeRequest>{ static constexpr GUID value{ 0x3C5AEB51,0x350B,0x4DF8,{ 0x94,0x14,0x59,0xE0,0x98,0x15,0x51,0x0B } }; };
template <> struct guid<Windows::Devices::Perception::Provider::IPerceptionVideoFrameAllocator>{ static constexpr GUID value{ 0x4C38A7DA,0xFDD8,0x4ED4,{ 0xA0,0x39,0x2A,0x6F,0x9B,0x23,0x50,0x38 } }; };
template <> struct guid<Windows::Devices::Perception::Provider::IPerceptionVideoFrameAllocatorFactory>{ static constexpr GUID value{ 0x1A58B0E1,0xE91A,0x481E,{ 0xB8,0x76,0xA8,0x9E,0x2B,0xBC,0x6B,0x33 } }; };
template <> struct guid<Windows::Devices::Perception::Provider::PerceptionStartFaceAuthenticationHandler>{ static constexpr GUID value{ 0x74816D2A,0x2090,0x4670,{ 0x8C,0x48,0xEF,0x39,0xE7,0xFF,0x7C,0x26 } }; };
template <> struct guid<Windows::Devices::Perception::Provider::PerceptionStopFaceAuthenticationHandler>{ static constexpr GUID value{ 0x387EE6AA,0x89CD,0x481E,{ 0xAA,0xDE,0xDD,0x92,0xF7,0x0B,0x2A,0xD7 } }; };
template <> struct default_interface<Windows::Devices::Perception::Provider::PerceptionControlGroup>{ using type = Windows::Devices::Perception::Provider::IPerceptionControlGroup; };
template <> struct default_interface<Windows::Devices::Perception::Provider::PerceptionCorrelation>{ using type = Windows::Devices::Perception::Provider::IPerceptionCorrelation; };
template <> struct default_interface<Windows::Devices::Perception::Provider::PerceptionCorrelationGroup>{ using type = Windows::Devices::Perception::Provider::IPerceptionCorrelationGroup; };
template <> struct default_interface<Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup>{ using type = Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroup; };
template <> struct default_interface<Windows::Devices::Perception::Provider::PerceptionFrame>{ using type = Windows::Devices::Perception::Provider::IPerceptionFrame; };
template <> struct default_interface<Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo>{ using type = Windows::Devices::Perception::Provider::IPerceptionFrameProviderInfo; };
template <> struct default_interface<Windows::Devices::Perception::Provider::PerceptionPropertyChangeRequest>{ using type = Windows::Devices::Perception::Provider::IPerceptionPropertyChangeRequest; };
template <> struct default_interface<Windows::Devices::Perception::Provider::PerceptionVideoFrameAllocator>{ using type = Windows::Devices::Perception::Provider::IPerceptionVideoFrameAllocator; };

template <typename D>
struct consume_Windows_Devices_Perception_Provider_IKnownPerceptionFrameKindStatics
{
    [[deprecated("KnownPerceptionFrameKind may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] hstring Color() const;
    [[deprecated("KnownPerceptionFrameKind may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] hstring Depth() const;
    [[deprecated("KnownPerceptionFrameKind may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] hstring Infrared() const;
};
template <> struct consume<Windows::Devices::Perception::Provider::IKnownPerceptionFrameKindStatics> { template <typename D> using type = consume_Windows_Devices_Perception_Provider_IKnownPerceptionFrameKindStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_Provider_IPerceptionControlGroup
{
    [[deprecated("PerceptionControlGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] Windows::Foundation::Collections::IVectorView<hstring> FrameProviderIds() const;
};
template <> struct consume<Windows::Devices::Perception::Provider::IPerceptionControlGroup> { template <typename D> using type = consume_Windows_Devices_Perception_Provider_IPerceptionControlGroup<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_Provider_IPerceptionControlGroupFactory
{
    [[deprecated("PerceptionControlGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] Windows::Devices::Perception::Provider::PerceptionControlGroup Create(param::iterable<hstring> const& ids) const;
};
template <> struct consume<Windows::Devices::Perception::Provider::IPerceptionControlGroupFactory> { template <typename D> using type = consume_Windows_Devices_Perception_Provider_IPerceptionControlGroupFactory<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_Provider_IPerceptionCorrelation
{
    [[deprecated("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] hstring TargetId() const;
    [[deprecated("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] Windows::Foundation::Numerics::float3 Position() const;
    [[deprecated("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] Windows::Foundation::Numerics::quaternion Orientation() const;
};
template <> struct consume<Windows::Devices::Perception::Provider::IPerceptionCorrelation> { template <typename D> using type = consume_Windows_Devices_Perception_Provider_IPerceptionCorrelation<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_Provider_IPerceptionCorrelationFactory
{
    [[deprecated("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] Windows::Devices::Perception::Provider::PerceptionCorrelation Create(param::hstring const& targetId, Windows::Foundation::Numerics::float3 const& position, Windows::Foundation::Numerics::quaternion const& orientation) const;
};
template <> struct consume<Windows::Devices::Perception::Provider::IPerceptionCorrelationFactory> { template <typename D> using type = consume_Windows_Devices_Perception_Provider_IPerceptionCorrelationFactory<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_Provider_IPerceptionCorrelationGroup
{
    [[deprecated("PerceptionCorrelationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::Provider::PerceptionCorrelation> RelativeLocations() const;
};
template <> struct consume<Windows::Devices::Perception::Provider::IPerceptionCorrelationGroup> { template <typename D> using type = consume_Windows_Devices_Perception_Provider_IPerceptionCorrelationGroup<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_Provider_IPerceptionCorrelationGroupFactory
{
    [[deprecated("PerceptionCorrelationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] Windows::Devices::Perception::Provider::PerceptionCorrelationGroup Create(param::iterable<Windows::Devices::Perception::Provider::PerceptionCorrelation> const& relativeLocations) const;
};
template <> struct consume<Windows::Devices::Perception::Provider::IPerceptionCorrelationGroupFactory> { template <typename D> using type = consume_Windows_Devices_Perception_Provider_IPerceptionCorrelationGroupFactory<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_Provider_IPerceptionFaceAuthenticationGroup
{
    [[deprecated("PerceptionFaceAuthenticationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] Windows::Foundation::Collections::IVectorView<hstring> FrameProviderIds() const;
};
template <> struct consume<Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroup> { template <typename D> using type = consume_Windows_Devices_Perception_Provider_IPerceptionFaceAuthenticationGroup<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_Provider_IPerceptionFaceAuthenticationGroupFactory
{
    [[deprecated("PerceptionFaceAuthenticationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup Create(param::iterable<hstring> const& ids, Windows::Devices::Perception::Provider::PerceptionStartFaceAuthenticationHandler const& startHandler, Windows::Devices::Perception::Provider::PerceptionStopFaceAuthenticationHandler const& stopHandler) const;
};
template <> struct consume<Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroupFactory> { template <typename D> using type = consume_Windows_Devices_Perception_Provider_IPerceptionFaceAuthenticationGroupFactory<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_Provider_IPerceptionFrame
{
    [[deprecated("PerceptionFrame may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] Windows::Foundation::TimeSpan RelativeTime() const;
    [[deprecated("PerceptionFrame may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] void RelativeTime(Windows::Foundation::TimeSpan const& value) const;
    [[deprecated("PerceptionFrame may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] Windows::Foundation::Collections::ValueSet Properties() const;
    [[deprecated("PerceptionFrame may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] Windows::Foundation::IMemoryBuffer FrameData() const;
};
template <> struct consume<Windows::Devices::Perception::Provider::IPerceptionFrame> { template <typename D> using type = consume_Windows_Devices_Perception_Provider_IPerceptionFrame<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_Provider_IPerceptionFrameProvider
{
    [[deprecated("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo FrameProviderInfo() const;
    [[deprecated("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] bool Available() const;
    [[deprecated("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] Windows::Foundation::Collections::IPropertySet Properties() const;
    [[deprecated("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] void Start() const;
    [[deprecated("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] void Stop() const;
    [[deprecated("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] void SetProperty(Windows::Devices::Perception::Provider::PerceptionPropertyChangeRequest const& value) const;
};
template <> struct consume<Windows::Devices::Perception::Provider::IPerceptionFrameProvider> { template <typename D> using type = consume_Windows_Devices_Perception_Provider_IPerceptionFrameProvider<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_Provider_IPerceptionFrameProviderInfo
{
    [[deprecated("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] hstring Id() const;
    [[deprecated("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] void Id(param::hstring const& value) const;
    [[deprecated("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] hstring DisplayName() const;
    [[deprecated("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] void DisplayName(param::hstring const& value) const;
    [[deprecated("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] hstring DeviceKind() const;
    [[deprecated("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] void DeviceKind(param::hstring const& value) const;
    [[deprecated("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] hstring FrameKind() const;
    [[deprecated("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] void FrameKind(param::hstring const& value) const;
    [[deprecated("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] bool Hidden() const;
    [[deprecated("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] void Hidden(bool value) const;
};
template <> struct consume<Windows::Devices::Perception::Provider::IPerceptionFrameProviderInfo> { template <typename D> using type = consume_Windows_Devices_Perception_Provider_IPerceptionFrameProviderInfo<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_Provider_IPerceptionFrameProviderManager
{
    [[deprecated("IPerceptionFrameProviderManager may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] Windows::Devices::Perception::Provider::IPerceptionFrameProvider GetFrameProvider(Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo const& frameProviderInfo) const;
};
template <> struct consume<Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager> { template <typename D> using type = consume_Windows_Devices_Perception_Provider_IPerceptionFrameProviderManager<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_Provider_IPerceptionFrameProviderManagerServiceStatics
{
    [[deprecated("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] void RegisterFrameProviderInfo(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo const& frameProviderInfo) const;
    [[deprecated("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] void UnregisterFrameProviderInfo(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionFrameProviderInfo const& frameProviderInfo) const;
    [[deprecated("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] void RegisterFaceAuthenticationGroup(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup const& faceAuthenticationGroup) const;
    [[deprecated("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] void UnregisterFaceAuthenticationGroup(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionFaceAuthenticationGroup const& faceAuthenticationGroup) const;
    [[deprecated("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] void RegisterControlGroup(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionControlGroup const& controlGroup) const;
    [[deprecated("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] void UnregisterControlGroup(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionControlGroup const& controlGroup) const;
    [[deprecated("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] void RegisterCorrelationGroup(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionCorrelationGroup const& correlationGroup) const;
    [[deprecated("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] void UnregisterCorrelationGroup(Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager const& manager, Windows::Devices::Perception::Provider::PerceptionCorrelationGroup const& correlationGroup) const;
    [[deprecated("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] void UpdateAvailabilityForProvider(Windows::Devices::Perception::Provider::IPerceptionFrameProvider const& provider, bool available) const;
    [[deprecated("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] void PublishFrameForProvider(Windows::Devices::Perception::Provider::IPerceptionFrameProvider const& provider, Windows::Devices::Perception::Provider::PerceptionFrame const& frame) const;
};
template <> struct consume<Windows::Devices::Perception::Provider::IPerceptionFrameProviderManagerServiceStatics> { template <typename D> using type = consume_Windows_Devices_Perception_Provider_IPerceptionFrameProviderManagerServiceStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_Provider_IPerceptionPropertyChangeRequest
{
    [[deprecated("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] hstring Name() const;
    [[deprecated("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] Windows::Foundation::IInspectable Value() const;
    [[deprecated("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus Status() const;
    [[deprecated("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] void Status(Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus const& value) const;
    [[deprecated("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] Windows::Foundation::Deferral GetDeferral() const;
};
template <> struct consume<Windows::Devices::Perception::Provider::IPerceptionPropertyChangeRequest> { template <typename D> using type = consume_Windows_Devices_Perception_Provider_IPerceptionPropertyChangeRequest<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_Provider_IPerceptionVideoFrameAllocator
{
    [[deprecated("PerceptionVideoFrameAllocator may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] Windows::Devices::Perception::Provider::PerceptionFrame AllocateFrame() const;
    [[deprecated("PerceptionVideoFrameAllocator may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] Windows::Devices::Perception::Provider::PerceptionFrame CopyFromVideoFrame(Windows::Media::VideoFrame const& frame) const;
};
template <> struct consume<Windows::Devices::Perception::Provider::IPerceptionVideoFrameAllocator> { template <typename D> using type = consume_Windows_Devices_Perception_Provider_IPerceptionVideoFrameAllocator<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_Provider_IPerceptionVideoFrameAllocatorFactory
{
    [[deprecated("PerceptionVideoFrameAllocator may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")]] Windows::Devices::Perception::Provider::PerceptionVideoFrameAllocator Create(uint32_t maxOutstandingFrameCountForWrite, Windows::Graphics::Imaging::BitmapPixelFormat const& format, Windows::Foundation::Size const& resolution, Windows::Graphics::Imaging::BitmapAlphaMode const& alpha) const;
};
template <> struct consume<Windows::Devices::Perception::Provider::IPerceptionVideoFrameAllocatorFactory> { template <typename D> using type = consume_Windows_Devices_Perception_Provider_IPerceptionVideoFrameAllocatorFactory<D>; };

template <> struct abi<Windows::Devices::Perception::Provider::IKnownPerceptionFrameKindStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Color(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Depth(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Infrared(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::Perception::Provider::IPerceptionControlGroup>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FrameProviderIds(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Perception::Provider::IPerceptionControlGroupFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* ids, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Perception::Provider::IPerceptionCorrelation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TargetId(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Position(abi_t<Windows::Foundation::Numerics::float3>* value) = 0;
    virtual HRESULT __stdcall get_Orientation(abi_t<Windows::Foundation::Numerics::quaternion>* value) = 0;
};};

template <> struct abi<Windows::Devices::Perception::Provider::IPerceptionCorrelationFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(HSTRING targetId, abi_t<Windows::Foundation::Numerics::float3> position, abi_t<Windows::Foundation::Numerics::quaternion> orientation, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Perception::Provider::IPerceptionCorrelationGroup>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RelativeLocations(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Perception::Provider::IPerceptionCorrelationGroupFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* relativeLocations, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroup>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FrameProviderIds(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroupFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(::IUnknown* ids, ::IUnknown* startHandler, ::IUnknown* stopHandler, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Perception::Provider::IPerceptionFrame>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RelativeTime(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall put_RelativeTime(abi_t<Windows::Foundation::TimeSpan> value) = 0;
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FrameData(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Perception::Provider::IPerceptionFrameProvider>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FrameProviderInfo(::IUnknown** result) = 0;
    virtual HRESULT __stdcall get_Available(bool* value) = 0;
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall Start() = 0;
    virtual HRESULT __stdcall Stop() = 0;
    virtual HRESULT __stdcall SetProperty(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::Devices::Perception::Provider::IPerceptionFrameProviderInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Id(HSTRING value) = 0;
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_DisplayName(HSTRING value) = 0;
    virtual HRESULT __stdcall get_DeviceKind(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_DeviceKind(HSTRING value) = 0;
    virtual HRESULT __stdcall get_FrameKind(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_FrameKind(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Hidden(bool* value) = 0;
    virtual HRESULT __stdcall put_Hidden(bool value) = 0;
};};

template <> struct abi<Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetFrameProvider(::IUnknown* frameProviderInfo, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Perception::Provider::IPerceptionFrameProviderManagerServiceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall RegisterFrameProviderInfo(::IUnknown* manager, ::IUnknown* frameProviderInfo) = 0;
    virtual HRESULT __stdcall UnregisterFrameProviderInfo(::IUnknown* manager, ::IUnknown* frameProviderInfo) = 0;
    virtual HRESULT __stdcall RegisterFaceAuthenticationGroup(::IUnknown* manager, ::IUnknown* faceAuthenticationGroup) = 0;
    virtual HRESULT __stdcall UnregisterFaceAuthenticationGroup(::IUnknown* manager, ::IUnknown* faceAuthenticationGroup) = 0;
    virtual HRESULT __stdcall RegisterControlGroup(::IUnknown* manager, ::IUnknown* controlGroup) = 0;
    virtual HRESULT __stdcall UnregisterControlGroup(::IUnknown* manager, ::IUnknown* controlGroup) = 0;
    virtual HRESULT __stdcall RegisterCorrelationGroup(::IUnknown* manager, ::IUnknown* correlationGroup) = 0;
    virtual HRESULT __stdcall UnregisterCorrelationGroup(::IUnknown* manager, ::IUnknown* correlationGroup) = 0;
    virtual HRESULT __stdcall UpdateAvailabilityForProvider(::IUnknown* provider, bool available) = 0;
    virtual HRESULT __stdcall PublishFrameForProvider(::IUnknown* provider, ::IUnknown* frame) = 0;
};};

template <> struct abi<Windows::Devices::Perception::Provider::IPerceptionPropertyChangeRequest>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Value(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus>* value) = 0;
    virtual HRESULT __stdcall put_Status(abi_t<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus> value) = 0;
    virtual HRESULT __stdcall GetDeferral(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Perception::Provider::IPerceptionVideoFrameAllocator>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall AllocateFrame(::IUnknown** value) = 0;
    virtual HRESULT __stdcall CopyFromVideoFrame(::IUnknown* frame, ::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Perception::Provider::IPerceptionVideoFrameAllocatorFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall Create(uint32_t maxOutstandingFrameCountForWrite, abi_t<Windows::Graphics::Imaging::BitmapPixelFormat> format, abi_t<Windows::Foundation::Size> resolution, abi_t<Windows::Graphics::Imaging::BitmapAlphaMode> alpha, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Perception::Provider::PerceptionStartFaceAuthenticationHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender, bool* result) = 0;
};};

template <> struct abi<Windows::Devices::Perception::Provider::PerceptionStopFaceAuthenticationHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender) = 0;
};};

}
