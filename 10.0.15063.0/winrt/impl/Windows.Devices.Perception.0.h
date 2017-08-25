// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration {

enum class DeviceWatcherStatus;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging {

enum class BitmapAlphaMode;
enum class BitmapPixelFormat;

}

WINRT_EXPORT namespace winrt::Windows::Media {

struct VideoFrame;

}

WINRT_EXPORT namespace winrt::Windows::Media::Devices::Core {

struct CameraIntrinsics;

}

WINRT_EXPORT namespace winrt::Windows::Devices::Perception {

enum class [[deprecated("PerceptionFrameSourceAccessStatus may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] PerceptionFrameSourceAccessStatus
{
    Unspecified = 0,
    Allowed = 1,
    DeniedByUser = 2,
    DeniedBySystem = 3,
};

enum class [[deprecated("PerceptionFrameSourcePropertyChangeStatus may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] PerceptionFrameSourcePropertyChangeStatus
{
    Unknown = 0,
    Accepted = 1,
    LostControl = 2,
    PropertyNotSupported = 3,
    PropertyReadOnly = 4,
    ValueOutOfRange = 5,
};

struct IKnownCameraIntrinsicsPropertiesStatics;
struct IKnownPerceptionColorFrameSourcePropertiesStatics;
struct IKnownPerceptionDepthFrameSourcePropertiesStatics;
struct IKnownPerceptionFrameSourcePropertiesStatics;
struct IKnownPerceptionFrameSourcePropertiesStatics2;
struct IKnownPerceptionInfraredFrameSourcePropertiesStatics;
struct IKnownPerceptionVideoFrameSourcePropertiesStatics;
struct IKnownPerceptionVideoProfilePropertiesStatics;
struct IPerceptionColorFrame;
struct IPerceptionColorFrameArrivedEventArgs;
struct IPerceptionColorFrameReader;
struct IPerceptionColorFrameSource;
struct IPerceptionColorFrameSource2;
struct IPerceptionColorFrameSourceAddedEventArgs;
struct IPerceptionColorFrameSourceRemovedEventArgs;
struct IPerceptionColorFrameSourceStatics;
struct IPerceptionColorFrameSourceWatcher;
struct IPerceptionControlSession;
struct IPerceptionDepthCorrelatedCameraIntrinsics;
struct IPerceptionDepthCorrelatedCoordinateMapper;
struct IPerceptionDepthFrame;
struct IPerceptionDepthFrameArrivedEventArgs;
struct IPerceptionDepthFrameReader;
struct IPerceptionDepthFrameSource;
struct IPerceptionDepthFrameSource2;
struct IPerceptionDepthFrameSourceAddedEventArgs;
struct IPerceptionDepthFrameSourceRemovedEventArgs;
struct IPerceptionDepthFrameSourceStatics;
struct IPerceptionDepthFrameSourceWatcher;
struct IPerceptionFrameSourcePropertiesChangedEventArgs;
struct IPerceptionFrameSourcePropertyChangeResult;
struct IPerceptionInfraredFrame;
struct IPerceptionInfraredFrameArrivedEventArgs;
struct IPerceptionInfraredFrameReader;
struct IPerceptionInfraredFrameSource;
struct IPerceptionInfraredFrameSource2;
struct IPerceptionInfraredFrameSourceAddedEventArgs;
struct IPerceptionInfraredFrameSourceRemovedEventArgs;
struct IPerceptionInfraredFrameSourceStatics;
struct IPerceptionInfraredFrameSourceWatcher;
struct IPerceptionVideoProfile;
struct KnownCameraIntrinsicsProperties;
struct KnownPerceptionColorFrameSourceProperties;
struct KnownPerceptionDepthFrameSourceProperties;
struct KnownPerceptionFrameSourceProperties;
struct KnownPerceptionInfraredFrameSourceProperties;
struct KnownPerceptionVideoFrameSourceProperties;
struct KnownPerceptionVideoProfileProperties;
struct PerceptionColorFrame;
struct PerceptionColorFrameArrivedEventArgs;
struct PerceptionColorFrameReader;
struct PerceptionColorFrameSource;
struct PerceptionColorFrameSourceAddedEventArgs;
struct PerceptionColorFrameSourceRemovedEventArgs;
struct PerceptionColorFrameSourceWatcher;
struct PerceptionControlSession;
struct PerceptionDepthCorrelatedCameraIntrinsics;
struct PerceptionDepthCorrelatedCoordinateMapper;
struct PerceptionDepthFrame;
struct PerceptionDepthFrameArrivedEventArgs;
struct PerceptionDepthFrameReader;
struct PerceptionDepthFrameSource;
struct PerceptionDepthFrameSourceAddedEventArgs;
struct PerceptionDepthFrameSourceRemovedEventArgs;
struct PerceptionDepthFrameSourceWatcher;
struct PerceptionFrameSourcePropertiesChangedEventArgs;
struct PerceptionFrameSourcePropertyChangeResult;
struct PerceptionInfraredFrame;
struct PerceptionInfraredFrameArrivedEventArgs;
struct PerceptionInfraredFrameReader;
struct PerceptionInfraredFrameSource;
struct PerceptionInfraredFrameSourceAddedEventArgs;
struct PerceptionInfraredFrameSourceRemovedEventArgs;
struct PerceptionInfraredFrameSourceWatcher;
struct PerceptionVideoProfile;

}

namespace winrt::impl {

template <> struct category<Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IPerceptionColorFrame>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IPerceptionColorFrameArrivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IPerceptionColorFrameReader>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IPerceptionColorFrameSource>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IPerceptionColorFrameSource2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IPerceptionColorFrameSourceAddedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IPerceptionColorFrameSourceRemovedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IPerceptionColorFrameSourceStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IPerceptionControlSession>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IPerceptionDepthFrame>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IPerceptionDepthFrameArrivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IPerceptionDepthFrameReader>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IPerceptionDepthFrameSource>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IPerceptionDepthFrameSource2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IPerceptionDepthFrameSourceAddedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IPerceptionDepthFrameSourceRemovedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IPerceptionFrameSourcePropertiesChangedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IPerceptionFrameSourcePropertyChangeResult>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IPerceptionInfraredFrame>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IPerceptionInfraredFrameArrivedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IPerceptionInfraredFrameReader>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IPerceptionInfraredFrameSource>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IPerceptionInfraredFrameSource2>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IPerceptionInfraredFrameSourceAddedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IPerceptionInfraredFrameSourceRemovedEventArgs>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::IPerceptionVideoProfile>{ using type = interface_category; };
template <> struct category<Windows::Devices::Perception::KnownCameraIntrinsicsProperties>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::KnownPerceptionColorFrameSourceProperties>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::KnownPerceptionDepthFrameSourceProperties>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::KnownPerceptionFrameSourceProperties>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::KnownPerceptionInfraredFrameSourceProperties>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::KnownPerceptionVideoFrameSourceProperties>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::KnownPerceptionVideoProfileProperties>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::PerceptionColorFrame>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::PerceptionColorFrameArrivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::PerceptionColorFrameReader>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::PerceptionColorFrameSource>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::PerceptionColorFrameSourceAddedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::PerceptionColorFrameSourceRemovedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::PerceptionControlSession>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::PerceptionDepthFrame>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::PerceptionDepthFrameArrivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::PerceptionDepthFrameReader>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::PerceptionDepthFrameSource>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::PerceptionDepthFrameSourceAddedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::PerceptionDepthFrameSourceRemovedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::PerceptionInfraredFrame>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::PerceptionInfraredFrameArrivedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::PerceptionInfraredFrameReader>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::PerceptionInfraredFrameSource>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::PerceptionInfraredFrameSourceAddedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::PerceptionInfraredFrameSourceRemovedEventArgs>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::PerceptionVideoProfile>{ using type = class_category; };
template <> struct category<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus>{ using type = enum_category; };
template <> struct category<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus>{ using type = enum_category; };
template <> struct name<Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics>{ static constexpr auto & value{ L"Windows.Devices.Perception.IKnownCameraIntrinsicsPropertiesStatics" }; };
template <> struct name<Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics>{ static constexpr auto & value{ L"Windows.Devices.Perception.IKnownPerceptionColorFrameSourcePropertiesStatics" }; };
template <> struct name<Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics>{ static constexpr auto & value{ L"Windows.Devices.Perception.IKnownPerceptionDepthFrameSourcePropertiesStatics" }; };
template <> struct name<Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics>{ static constexpr auto & value{ L"Windows.Devices.Perception.IKnownPerceptionFrameSourcePropertiesStatics" }; };
template <> struct name<Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics2>{ static constexpr auto & value{ L"Windows.Devices.Perception.IKnownPerceptionFrameSourcePropertiesStatics2" }; };
template <> struct name<Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics>{ static constexpr auto & value{ L"Windows.Devices.Perception.IKnownPerceptionInfraredFrameSourcePropertiesStatics" }; };
template <> struct name<Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics>{ static constexpr auto & value{ L"Windows.Devices.Perception.IKnownPerceptionVideoFrameSourcePropertiesStatics" }; };
template <> struct name<Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics>{ static constexpr auto & value{ L"Windows.Devices.Perception.IKnownPerceptionVideoProfilePropertiesStatics" }; };
template <> struct name<Windows::Devices::Perception::IPerceptionColorFrame>{ static constexpr auto & value{ L"Windows.Devices.Perception.IPerceptionColorFrame" }; };
template <> struct name<Windows::Devices::Perception::IPerceptionColorFrameArrivedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Perception.IPerceptionColorFrameArrivedEventArgs" }; };
template <> struct name<Windows::Devices::Perception::IPerceptionColorFrameReader>{ static constexpr auto & value{ L"Windows.Devices.Perception.IPerceptionColorFrameReader" }; };
template <> struct name<Windows::Devices::Perception::IPerceptionColorFrameSource>{ static constexpr auto & value{ L"Windows.Devices.Perception.IPerceptionColorFrameSource" }; };
template <> struct name<Windows::Devices::Perception::IPerceptionColorFrameSource2>{ static constexpr auto & value{ L"Windows.Devices.Perception.IPerceptionColorFrameSource2" }; };
template <> struct name<Windows::Devices::Perception::IPerceptionColorFrameSourceAddedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Perception.IPerceptionColorFrameSourceAddedEventArgs" }; };
template <> struct name<Windows::Devices::Perception::IPerceptionColorFrameSourceRemovedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Perception.IPerceptionColorFrameSourceRemovedEventArgs" }; };
template <> struct name<Windows::Devices::Perception::IPerceptionColorFrameSourceStatics>{ static constexpr auto & value{ L"Windows.Devices.Perception.IPerceptionColorFrameSourceStatics" }; };
template <> struct name<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>{ static constexpr auto & value{ L"Windows.Devices.Perception.IPerceptionColorFrameSourceWatcher" }; };
template <> struct name<Windows::Devices::Perception::IPerceptionControlSession>{ static constexpr auto & value{ L"Windows.Devices.Perception.IPerceptionControlSession" }; };
template <> struct name<Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics>{ static constexpr auto & value{ L"Windows.Devices.Perception.IPerceptionDepthCorrelatedCameraIntrinsics" }; };
template <> struct name<Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper>{ static constexpr auto & value{ L"Windows.Devices.Perception.IPerceptionDepthCorrelatedCoordinateMapper" }; };
template <> struct name<Windows::Devices::Perception::IPerceptionDepthFrame>{ static constexpr auto & value{ L"Windows.Devices.Perception.IPerceptionDepthFrame" }; };
template <> struct name<Windows::Devices::Perception::IPerceptionDepthFrameArrivedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Perception.IPerceptionDepthFrameArrivedEventArgs" }; };
template <> struct name<Windows::Devices::Perception::IPerceptionDepthFrameReader>{ static constexpr auto & value{ L"Windows.Devices.Perception.IPerceptionDepthFrameReader" }; };
template <> struct name<Windows::Devices::Perception::IPerceptionDepthFrameSource>{ static constexpr auto & value{ L"Windows.Devices.Perception.IPerceptionDepthFrameSource" }; };
template <> struct name<Windows::Devices::Perception::IPerceptionDepthFrameSource2>{ static constexpr auto & value{ L"Windows.Devices.Perception.IPerceptionDepthFrameSource2" }; };
template <> struct name<Windows::Devices::Perception::IPerceptionDepthFrameSourceAddedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Perception.IPerceptionDepthFrameSourceAddedEventArgs" }; };
template <> struct name<Windows::Devices::Perception::IPerceptionDepthFrameSourceRemovedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Perception.IPerceptionDepthFrameSourceRemovedEventArgs" }; };
template <> struct name<Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics>{ static constexpr auto & value{ L"Windows.Devices.Perception.IPerceptionDepthFrameSourceStatics" }; };
template <> struct name<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>{ static constexpr auto & value{ L"Windows.Devices.Perception.IPerceptionDepthFrameSourceWatcher" }; };
template <> struct name<Windows::Devices::Perception::IPerceptionFrameSourcePropertiesChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Perception.IPerceptionFrameSourcePropertiesChangedEventArgs" }; };
template <> struct name<Windows::Devices::Perception::IPerceptionFrameSourcePropertyChangeResult>{ static constexpr auto & value{ L"Windows.Devices.Perception.IPerceptionFrameSourcePropertyChangeResult" }; };
template <> struct name<Windows::Devices::Perception::IPerceptionInfraredFrame>{ static constexpr auto & value{ L"Windows.Devices.Perception.IPerceptionInfraredFrame" }; };
template <> struct name<Windows::Devices::Perception::IPerceptionInfraredFrameArrivedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Perception.IPerceptionInfraredFrameArrivedEventArgs" }; };
template <> struct name<Windows::Devices::Perception::IPerceptionInfraredFrameReader>{ static constexpr auto & value{ L"Windows.Devices.Perception.IPerceptionInfraredFrameReader" }; };
template <> struct name<Windows::Devices::Perception::IPerceptionInfraredFrameSource>{ static constexpr auto & value{ L"Windows.Devices.Perception.IPerceptionInfraredFrameSource" }; };
template <> struct name<Windows::Devices::Perception::IPerceptionInfraredFrameSource2>{ static constexpr auto & value{ L"Windows.Devices.Perception.IPerceptionInfraredFrameSource2" }; };
template <> struct name<Windows::Devices::Perception::IPerceptionInfraredFrameSourceAddedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Perception.IPerceptionInfraredFrameSourceAddedEventArgs" }; };
template <> struct name<Windows::Devices::Perception::IPerceptionInfraredFrameSourceRemovedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Perception.IPerceptionInfraredFrameSourceRemovedEventArgs" }; };
template <> struct name<Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics>{ static constexpr auto & value{ L"Windows.Devices.Perception.IPerceptionInfraredFrameSourceStatics" }; };
template <> struct name<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>{ static constexpr auto & value{ L"Windows.Devices.Perception.IPerceptionInfraredFrameSourceWatcher" }; };
template <> struct name<Windows::Devices::Perception::IPerceptionVideoProfile>{ static constexpr auto & value{ L"Windows.Devices.Perception.IPerceptionVideoProfile" }; };
template <> struct name<Windows::Devices::Perception::KnownCameraIntrinsicsProperties>{ static constexpr auto & value{ L"Windows.Devices.Perception.KnownCameraIntrinsicsProperties" }; };
template <> struct name<Windows::Devices::Perception::KnownPerceptionColorFrameSourceProperties>{ static constexpr auto & value{ L"Windows.Devices.Perception.KnownPerceptionColorFrameSourceProperties" }; };
template <> struct name<Windows::Devices::Perception::KnownPerceptionDepthFrameSourceProperties>{ static constexpr auto & value{ L"Windows.Devices.Perception.KnownPerceptionDepthFrameSourceProperties" }; };
template <> struct name<Windows::Devices::Perception::KnownPerceptionFrameSourceProperties>{ static constexpr auto & value{ L"Windows.Devices.Perception.KnownPerceptionFrameSourceProperties" }; };
template <> struct name<Windows::Devices::Perception::KnownPerceptionInfraredFrameSourceProperties>{ static constexpr auto & value{ L"Windows.Devices.Perception.KnownPerceptionInfraredFrameSourceProperties" }; };
template <> struct name<Windows::Devices::Perception::KnownPerceptionVideoFrameSourceProperties>{ static constexpr auto & value{ L"Windows.Devices.Perception.KnownPerceptionVideoFrameSourceProperties" }; };
template <> struct name<Windows::Devices::Perception::KnownPerceptionVideoProfileProperties>{ static constexpr auto & value{ L"Windows.Devices.Perception.KnownPerceptionVideoProfileProperties" }; };
template <> struct name<Windows::Devices::Perception::PerceptionColorFrame>{ static constexpr auto & value{ L"Windows.Devices.Perception.PerceptionColorFrame" }; };
template <> struct name<Windows::Devices::Perception::PerceptionColorFrameArrivedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Perception.PerceptionColorFrameArrivedEventArgs" }; };
template <> struct name<Windows::Devices::Perception::PerceptionColorFrameReader>{ static constexpr auto & value{ L"Windows.Devices.Perception.PerceptionColorFrameReader" }; };
template <> struct name<Windows::Devices::Perception::PerceptionColorFrameSource>{ static constexpr auto & value{ L"Windows.Devices.Perception.PerceptionColorFrameSource" }; };
template <> struct name<Windows::Devices::Perception::PerceptionColorFrameSourceAddedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Perception.PerceptionColorFrameSourceAddedEventArgs" }; };
template <> struct name<Windows::Devices::Perception::PerceptionColorFrameSourceRemovedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Perception.PerceptionColorFrameSourceRemovedEventArgs" }; };
template <> struct name<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher>{ static constexpr auto & value{ L"Windows.Devices.Perception.PerceptionColorFrameSourceWatcher" }; };
template <> struct name<Windows::Devices::Perception::PerceptionControlSession>{ static constexpr auto & value{ L"Windows.Devices.Perception.PerceptionControlSession" }; };
template <> struct name<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics>{ static constexpr auto & value{ L"Windows.Devices.Perception.PerceptionDepthCorrelatedCameraIntrinsics" }; };
template <> struct name<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper>{ static constexpr auto & value{ L"Windows.Devices.Perception.PerceptionDepthCorrelatedCoordinateMapper" }; };
template <> struct name<Windows::Devices::Perception::PerceptionDepthFrame>{ static constexpr auto & value{ L"Windows.Devices.Perception.PerceptionDepthFrame" }; };
template <> struct name<Windows::Devices::Perception::PerceptionDepthFrameArrivedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Perception.PerceptionDepthFrameArrivedEventArgs" }; };
template <> struct name<Windows::Devices::Perception::PerceptionDepthFrameReader>{ static constexpr auto & value{ L"Windows.Devices.Perception.PerceptionDepthFrameReader" }; };
template <> struct name<Windows::Devices::Perception::PerceptionDepthFrameSource>{ static constexpr auto & value{ L"Windows.Devices.Perception.PerceptionDepthFrameSource" }; };
template <> struct name<Windows::Devices::Perception::PerceptionDepthFrameSourceAddedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Perception.PerceptionDepthFrameSourceAddedEventArgs" }; };
template <> struct name<Windows::Devices::Perception::PerceptionDepthFrameSourceRemovedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Perception.PerceptionDepthFrameSourceRemovedEventArgs" }; };
template <> struct name<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher>{ static constexpr auto & value{ L"Windows.Devices.Perception.PerceptionDepthFrameSourceWatcher" }; };
template <> struct name<Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Perception.PerceptionFrameSourcePropertiesChangedEventArgs" }; };
template <> struct name<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult>{ static constexpr auto & value{ L"Windows.Devices.Perception.PerceptionFrameSourcePropertyChangeResult" }; };
template <> struct name<Windows::Devices::Perception::PerceptionInfraredFrame>{ static constexpr auto & value{ L"Windows.Devices.Perception.PerceptionInfraredFrame" }; };
template <> struct name<Windows::Devices::Perception::PerceptionInfraredFrameArrivedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Perception.PerceptionInfraredFrameArrivedEventArgs" }; };
template <> struct name<Windows::Devices::Perception::PerceptionInfraredFrameReader>{ static constexpr auto & value{ L"Windows.Devices.Perception.PerceptionInfraredFrameReader" }; };
template <> struct name<Windows::Devices::Perception::PerceptionInfraredFrameSource>{ static constexpr auto & value{ L"Windows.Devices.Perception.PerceptionInfraredFrameSource" }; };
template <> struct name<Windows::Devices::Perception::PerceptionInfraredFrameSourceAddedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Perception.PerceptionInfraredFrameSourceAddedEventArgs" }; };
template <> struct name<Windows::Devices::Perception::PerceptionInfraredFrameSourceRemovedEventArgs>{ static constexpr auto & value{ L"Windows.Devices.Perception.PerceptionInfraredFrameSourceRemovedEventArgs" }; };
template <> struct name<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher>{ static constexpr auto & value{ L"Windows.Devices.Perception.PerceptionInfraredFrameSourceWatcher" }; };
template <> struct name<Windows::Devices::Perception::PerceptionVideoProfile>{ static constexpr auto & value{ L"Windows.Devices.Perception.PerceptionVideoProfile" }; };
template <> struct name<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus>{ static constexpr auto & value{ L"Windows.Devices.Perception.PerceptionFrameSourceAccessStatus" }; };
template <> struct name<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus>{ static constexpr auto & value{ L"Windows.Devices.Perception.PerceptionFrameSourcePropertyChangeStatus" }; };
template <> struct guid<Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics>{ static constexpr GUID value{ 0x08C03978,0x437A,0x4D97,{ 0xA6,0x63,0xFD,0x31,0x95,0x60,0x02,0x49 } }; };
template <> struct guid<Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics>{ static constexpr GUID value{ 0x5DF1CCA2,0x01F8,0x4A87,{ 0xB8,0x59,0xD5,0xE5,0xB7,0xE1,0xDE,0x4B } }; };
template <> struct guid<Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics>{ static constexpr GUID value{ 0x5DF1CCA2,0x01F8,0x4A87,{ 0xB8,0x59,0xD5,0xE5,0xB7,0xE1,0xDE,0x4A } }; };
template <> struct guid<Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics>{ static constexpr GUID value{ 0x5DF1CCA2,0x01F8,0x4A87,{ 0xB8,0x59,0xD5,0xE5,0xB7,0xE1,0xDE,0x47 } }; };
template <> struct guid<Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics2>{ static constexpr GUID value{ 0xA9C86871,0x05DC,0x4A4D,{ 0x8A,0x5C,0xA4,0xEC,0xF2,0x6B,0xBC,0x46 } }; };
template <> struct guid<Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics>{ static constexpr GUID value{ 0x5DF1CCA2,0x01F8,0x4A87,{ 0xB8,0x59,0xD5,0xE5,0xB7,0xE1,0xDE,0x49 } }; };
template <> struct guid<Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics>{ static constexpr GUID value{ 0x5DF1CCA2,0x01F8,0x4A87,{ 0xB8,0x59,0xD5,0xE5,0xB7,0xE1,0xDE,0x48 } }; };
template <> struct guid<Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics>{ static constexpr GUID value{ 0x8F08E2E7,0x5A76,0x43E3,{ 0xA1,0x3A,0xDA,0x3D,0x91,0xA9,0xEF,0x98 } }; };
template <> struct guid<Windows::Devices::Perception::IPerceptionColorFrame>{ static constexpr GUID value{ 0xFE621549,0x2CBF,0x4F94,{ 0x98,0x61,0xF8,0x17,0xEA,0x31,0x77,0x47 } }; };
template <> struct guid<Windows::Devices::Perception::IPerceptionColorFrameArrivedEventArgs>{ static constexpr GUID value{ 0x8FAD02D5,0x86F7,0x4D8D,{ 0xB9,0x66,0x5A,0x37,0x61,0xBA,0x9F,0x59 } }; };
template <> struct guid<Windows::Devices::Perception::IPerceptionColorFrameReader>{ static constexpr GUID value{ 0x7650F56E,0xB9F5,0x461B,{ 0x83,0xAD,0xF2,0x22,0xAF,0x2A,0xAA,0xDC } }; };
template <> struct guid<Windows::Devices::Perception::IPerceptionColorFrameSource>{ static constexpr GUID value{ 0xDC6DBA7C,0x0B58,0x468D,{ 0x9C,0xA1,0x6D,0xB0,0x4C,0xC0,0x47,0x7C } }; };
template <> struct guid<Windows::Devices::Perception::IPerceptionColorFrameSource2>{ static constexpr GUID value{ 0xF88008E5,0x5631,0x45ED,{ 0xAD,0x98,0x8C,0x6A,0xA0,0x4C,0xFB,0x91 } }; };
template <> struct guid<Windows::Devices::Perception::IPerceptionColorFrameSourceAddedEventArgs>{ static constexpr GUID value{ 0xD16BF4E6,0xDA24,0x442C,{ 0xBB,0xD5,0x55,0x54,0x9B,0x5B,0x94,0xF3 } }; };
template <> struct guid<Windows::Devices::Perception::IPerceptionColorFrameSourceRemovedEventArgs>{ static constexpr GUID value{ 0xD277FA69,0xEB4C,0x42EF,{ 0xBA,0x4F,0x28,0x8F,0x61,0x5C,0x93,0xC1 } }; };
template <> struct guid<Windows::Devices::Perception::IPerceptionColorFrameSourceStatics>{ static constexpr GUID value{ 0x5DF3CCA2,0x01F8,0x4A87,{ 0xB8,0x59,0xD5,0xE5,0xB7,0xE1,0xDE,0x49 } }; };
template <> struct guid<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>{ static constexpr GUID value{ 0x96BD1392,0xE667,0x40C4,{ 0x89,0xF9,0x14,0x62,0xDE,0xA6,0xA9,0xCC } }; };
template <> struct guid<Windows::Devices::Perception::IPerceptionControlSession>{ static constexpr GUID value{ 0x99998653,0x5A3D,0x417F,{ 0x92,0x39,0xF1,0x88,0x9E,0x54,0x8B,0x48 } }; };
template <> struct guid<Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics>{ static constexpr GUID value{ 0x6548CA01,0x86DE,0x5BE1,{ 0x65,0x82,0x80,0x7F,0xCF,0x4C,0x95,0xCF } }; };
template <> struct guid<Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper>{ static constexpr GUID value{ 0x5B4D9D1D,0xB5F6,0x469C,{ 0xB8,0xC2,0xB9,0x7A,0x45,0xE6,0x86,0x3B } }; };
template <> struct guid<Windows::Devices::Perception::IPerceptionDepthFrame>{ static constexpr GUID value{ 0xA37B81FC,0x9906,0x4FFD,{ 0x91,0x61,0x00,0x24,0xB3,0x60,0xB6,0x57 } }; };
template <> struct guid<Windows::Devices::Perception::IPerceptionDepthFrameArrivedEventArgs>{ static constexpr GUID value{ 0x443D25B2,0xB282,0x4637,{ 0x91,0x73,0xAC,0x97,0x84,0x35,0xC9,0x85 } }; };
template <> struct guid<Windows::Devices::Perception::IPerceptionDepthFrameReader>{ static constexpr GUID value{ 0xB1A3C09F,0x299B,0x4612,{ 0xA4,0xF7,0x27,0x0F,0x25,0xA0,0x96,0xEC } }; };
template <> struct guid<Windows::Devices::Perception::IPerceptionDepthFrameSource>{ static constexpr GUID value{ 0x79D433D6,0x47FB,0x4DF1,{ 0xBF,0xC9,0xF0,0x1D,0x40,0xBD,0x99,0x42 } }; };
template <> struct guid<Windows::Devices::Perception::IPerceptionDepthFrameSource2>{ static constexpr GUID value{ 0xE3D23D2E,0x6E2C,0x4E6D,{ 0x91,0xD9,0x70,0x4C,0xD8,0xDF,0xF7,0x9D } }; };
template <> struct guid<Windows::Devices::Perception::IPerceptionDepthFrameSourceAddedEventArgs>{ static constexpr GUID value{ 0x93A48168,0x8BF8,0x45D2,{ 0xA2,0xF8,0x4A,0xC0,0x93,0x1C,0xC7,0xA6 } }; };
template <> struct guid<Windows::Devices::Perception::IPerceptionDepthFrameSourceRemovedEventArgs>{ static constexpr GUID value{ 0xA0C0CC4D,0xE96C,0x4D81,{ 0x86,0xDD,0x38,0xB9,0x5E,0x49,0xC6,0xDF } }; };
template <> struct guid<Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics>{ static constexpr GUID value{ 0x5DF3CCA2,0x01F8,0x4A87,{ 0xB8,0x59,0xD5,0xE5,0xB7,0xE1,0xDE,0x48 } }; };
template <> struct guid<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>{ static constexpr GUID value{ 0x780E96D1,0x8D02,0x4D2B,{ 0xAD,0xA4,0x5B,0xA6,0x24,0xA0,0xEB,0x10 } }; };
template <> struct guid<Windows::Devices::Perception::IPerceptionFrameSourcePropertiesChangedEventArgs>{ static constexpr GUID value{ 0x6C68E068,0xBCF1,0x4ECC,{ 0xB8,0x91,0x76,0x25,0xD1,0x24,0x4B,0x6B } }; };
template <> struct guid<Windows::Devices::Perception::IPerceptionFrameSourcePropertyChangeResult>{ static constexpr GUID value{ 0x1E33390A,0x3C90,0x4D22,{ 0xB8,0x98,0xF4,0x2B,0xBA,0x64,0x18,0xFF } }; };
template <> struct guid<Windows::Devices::Perception::IPerceptionInfraredFrame>{ static constexpr GUID value{ 0xB0886276,0x849E,0x4C7A,{ 0x8A,0xE6,0xB5,0x60,0x64,0x53,0x21,0x53 } }; };
template <> struct guid<Windows::Devices::Perception::IPerceptionInfraredFrameArrivedEventArgs>{ static constexpr GUID value{ 0x9F77FAC7,0xB4BD,0x4857,{ 0x9D,0x50,0xBE,0x8E,0xF0,0x75,0xDA,0xEF } }; };
template <> struct guid<Windows::Devices::Perception::IPerceptionInfraredFrameReader>{ static constexpr GUID value{ 0x7960CE18,0xD39B,0x4FC8,{ 0xA0,0x4A,0x92,0x97,0x34,0xC6,0x75,0x6C } }; };
template <> struct guid<Windows::Devices::Perception::IPerceptionInfraredFrameSource>{ static constexpr GUID value{ 0x55B08742,0x1808,0x494E,{ 0x9E,0x30,0x9D,0x2A,0x7B,0xE8,0xF7,0x00 } }; };
template <> struct guid<Windows::Devices::Perception::IPerceptionInfraredFrameSource2>{ static constexpr GUID value{ 0xDCD4D798,0x4B0B,0x4300,{ 0x8D,0x85,0x41,0x08,0x17,0xFA,0xA0,0x32 } }; };
template <> struct guid<Windows::Devices::Perception::IPerceptionInfraredFrameSourceAddedEventArgs>{ static constexpr GUID value{ 0x6D334120,0x95CE,0x4660,{ 0x90,0x7A,0xD9,0x80,0x35,0xAA,0x2B,0x7C } }; };
template <> struct guid<Windows::Devices::Perception::IPerceptionInfraredFrameSourceRemovedEventArgs>{ static constexpr GUID value{ 0xEA1A8071,0x7A70,0x4A61,{ 0xAF,0x94,0x07,0x30,0x38,0x53,0xF6,0x95 } }; };
template <> struct guid<Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics>{ static constexpr GUID value{ 0x5DF3CCA2,0x01F8,0x4A87,{ 0xB8,0x59,0xD5,0xE5,0xB7,0xE1,0xDE,0x47 } }; };
template <> struct guid<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>{ static constexpr GUID value{ 0x383CFF99,0xD70C,0x444D,{ 0xA8,0xB0,0x72,0x0C,0x2E,0x66,0xFE,0x3B } }; };
template <> struct guid<Windows::Devices::Perception::IPerceptionVideoProfile>{ static constexpr GUID value{ 0x75763EA3,0x011A,0x470E,{ 0x82,0x25,0x6F,0x05,0xAD,0xE2,0x56,0x48 } }; };
template <> struct default_interface<Windows::Devices::Perception::PerceptionColorFrame>{ using type = Windows::Devices::Perception::IPerceptionColorFrame; };
template <> struct default_interface<Windows::Devices::Perception::PerceptionColorFrameArrivedEventArgs>{ using type = Windows::Devices::Perception::IPerceptionColorFrameArrivedEventArgs; };
template <> struct default_interface<Windows::Devices::Perception::PerceptionColorFrameReader>{ using type = Windows::Devices::Perception::IPerceptionColorFrameReader; };
template <> struct default_interface<Windows::Devices::Perception::PerceptionColorFrameSource>{ using type = Windows::Devices::Perception::IPerceptionColorFrameSource; };
template <> struct default_interface<Windows::Devices::Perception::PerceptionColorFrameSourceAddedEventArgs>{ using type = Windows::Devices::Perception::IPerceptionColorFrameSourceAddedEventArgs; };
template <> struct default_interface<Windows::Devices::Perception::PerceptionColorFrameSourceRemovedEventArgs>{ using type = Windows::Devices::Perception::IPerceptionColorFrameSourceRemovedEventArgs; };
template <> struct default_interface<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher>{ using type = Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher; };
template <> struct default_interface<Windows::Devices::Perception::PerceptionControlSession>{ using type = Windows::Devices::Perception::IPerceptionControlSession; };
template <> struct default_interface<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics>{ using type = Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics; };
template <> struct default_interface<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper>{ using type = Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper; };
template <> struct default_interface<Windows::Devices::Perception::PerceptionDepthFrame>{ using type = Windows::Devices::Perception::IPerceptionDepthFrame; };
template <> struct default_interface<Windows::Devices::Perception::PerceptionDepthFrameArrivedEventArgs>{ using type = Windows::Devices::Perception::IPerceptionDepthFrameArrivedEventArgs; };
template <> struct default_interface<Windows::Devices::Perception::PerceptionDepthFrameReader>{ using type = Windows::Devices::Perception::IPerceptionDepthFrameReader; };
template <> struct default_interface<Windows::Devices::Perception::PerceptionDepthFrameSource>{ using type = Windows::Devices::Perception::IPerceptionDepthFrameSource; };
template <> struct default_interface<Windows::Devices::Perception::PerceptionDepthFrameSourceAddedEventArgs>{ using type = Windows::Devices::Perception::IPerceptionDepthFrameSourceAddedEventArgs; };
template <> struct default_interface<Windows::Devices::Perception::PerceptionDepthFrameSourceRemovedEventArgs>{ using type = Windows::Devices::Perception::IPerceptionDepthFrameSourceRemovedEventArgs; };
template <> struct default_interface<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher>{ using type = Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher; };
template <> struct default_interface<Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs>{ using type = Windows::Devices::Perception::IPerceptionFrameSourcePropertiesChangedEventArgs; };
template <> struct default_interface<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult>{ using type = Windows::Devices::Perception::IPerceptionFrameSourcePropertyChangeResult; };
template <> struct default_interface<Windows::Devices::Perception::PerceptionInfraredFrame>{ using type = Windows::Devices::Perception::IPerceptionInfraredFrame; };
template <> struct default_interface<Windows::Devices::Perception::PerceptionInfraredFrameArrivedEventArgs>{ using type = Windows::Devices::Perception::IPerceptionInfraredFrameArrivedEventArgs; };
template <> struct default_interface<Windows::Devices::Perception::PerceptionInfraredFrameReader>{ using type = Windows::Devices::Perception::IPerceptionInfraredFrameReader; };
template <> struct default_interface<Windows::Devices::Perception::PerceptionInfraredFrameSource>{ using type = Windows::Devices::Perception::IPerceptionInfraredFrameSource; };
template <> struct default_interface<Windows::Devices::Perception::PerceptionInfraredFrameSourceAddedEventArgs>{ using type = Windows::Devices::Perception::IPerceptionInfraredFrameSourceAddedEventArgs; };
template <> struct default_interface<Windows::Devices::Perception::PerceptionInfraredFrameSourceRemovedEventArgs>{ using type = Windows::Devices::Perception::IPerceptionInfraredFrameSourceRemovedEventArgs; };
template <> struct default_interface<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher>{ using type = Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher; };
template <> struct default_interface<Windows::Devices::Perception::PerceptionVideoProfile>{ using type = Windows::Devices::Perception::IPerceptionVideoProfile; };

template <typename D>
struct consume_Windows_Devices_Perception_IKnownCameraIntrinsicsPropertiesStatics
{
    [[deprecated("KnownCameraIntrinsicsProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] hstring FocalLength() const;
    [[deprecated("KnownCameraIntrinsicsProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] hstring PrincipalPoint() const;
    [[deprecated("KnownCameraIntrinsicsProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] hstring RadialDistortion() const;
    [[deprecated("KnownCameraIntrinsicsProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] hstring TangentialDistortion() const;
};
template <> struct consume<Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics> { template <typename D> using type = consume_Windows_Devices_Perception_IKnownCameraIntrinsicsPropertiesStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IKnownPerceptionColorFrameSourcePropertiesStatics
{
    [[deprecated("KnownPerceptionColorFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] hstring Exposure() const;
    [[deprecated("KnownPerceptionColorFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] hstring AutoExposureEnabled() const;
    [[deprecated("KnownPerceptionColorFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] hstring ExposureCompensation() const;
};
template <> struct consume<Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics> { template <typename D> using type = consume_Windows_Devices_Perception_IKnownPerceptionColorFrameSourcePropertiesStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IKnownPerceptionDepthFrameSourcePropertiesStatics
{
    [[deprecated("KnownPerceptionDepthFrameSourceProperties may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.DepthMediaFrame instead.")]] hstring MinDepth() const;
    [[deprecated("KnownPerceptionDepthFrameSourceProperties may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.DepthMediaFrame instead.")]] hstring MaxDepth() const;
};
template <> struct consume<Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics> { template <typename D> using type = consume_Windows_Devices_Perception_IKnownPerceptionDepthFrameSourcePropertiesStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IKnownPerceptionFrameSourcePropertiesStatics
{
    [[deprecated("KnownPerceptionFrameSourceProperties may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation instead.")]] hstring Id() const;
    [[deprecated("KnownPerceptionFrameSourceProperties may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation instead.")]] hstring PhysicalDeviceIds() const;
    [[deprecated("KnownPerceptionFrameSourceProperties may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation instead.")]] hstring FrameKind() const;
    [[deprecated("KnownPerceptionFrameSourceProperties may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation instead.")]] hstring DeviceModelVersion() const;
    [[deprecated("KnownPerceptionFrameSourceProperties may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation instead.")]] hstring EnclosureLocation() const;
};
template <> struct consume<Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics> { template <typename D> using type = consume_Windows_Devices_Perception_IKnownPerceptionFrameSourcePropertiesStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IKnownPerceptionFrameSourcePropertiesStatics2
{
    [[deprecated("KnownPerceptionFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] hstring DeviceId() const;
};
template <> struct consume<Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics2> { template <typename D> using type = consume_Windows_Devices_Perception_IKnownPerceptionFrameSourcePropertiesStatics2<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IKnownPerceptionInfraredFrameSourcePropertiesStatics
{
    [[deprecated("KnownPerceptionInfraredFrameSourceProperties.Exposure may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.ExposureControl instead.")]] hstring Exposure() const;
    [[deprecated("KnownPerceptionInfraredFrameSourceProperties.AutoExposureEnabled may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.ExposureControl.Auto instead.")]] hstring AutoExposureEnabled() const;
    [[deprecated("KnownPerceptionInfraredFrameSourceProperties.ExposureCompensation may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.ExposureCompensationControl instead.")]] hstring ExposureCompensation() const;
    [[deprecated("KnownPerceptionInfraredFrameSourceProperties.ActiveIlluminationEnabled may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] hstring ActiveIlluminationEnabled() const;
    [[deprecated("KnownPerceptionInfraredFrameSourceProperties.AmbientSubtractionEnabled may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] hstring AmbientSubtractionEnabled() const;
    [[deprecated("KnownPerceptionInfraredFrameSourceProperties.StructureLightPatternEnabled may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] hstring StructureLightPatternEnabled() const;
    [[deprecated("KnownPerceptionInfraredFrameSourceProperties.InterleavedIlluminationEnabled may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] hstring InterleavedIlluminationEnabled() const;
};
template <> struct consume<Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics> { template <typename D> using type = consume_Windows_Devices_Perception_IKnownPerceptionInfraredFrameSourcePropertiesStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IKnownPerceptionVideoFrameSourcePropertiesStatics
{
    [[deprecated("KnownPerceptionVideoFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] hstring VideoProfile() const;
    [[deprecated("KnownPerceptionVideoFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] hstring SupportedVideoProfiles() const;
    [[deprecated("KnownPerceptionVideoFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] hstring AvailableVideoProfiles() const;
    [[deprecated("KnownPerceptionVideoFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] hstring IsMirrored() const;
    [[deprecated("KnownPerceptionVideoFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] hstring CameraIntrinsics() const;
};
template <> struct consume<Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics> { template <typename D> using type = consume_Windows_Devices_Perception_IKnownPerceptionVideoFrameSourcePropertiesStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IKnownPerceptionVideoProfilePropertiesStatics
{
    [[deprecated("KnownPerceptionVideoProfileProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] hstring BitmapPixelFormat() const;
    [[deprecated("KnownPerceptionVideoProfileProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] hstring BitmapAlphaMode() const;
    [[deprecated("KnownPerceptionVideoProfileProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] hstring Width() const;
    [[deprecated("KnownPerceptionVideoProfileProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] hstring Height() const;
    [[deprecated("KnownPerceptionVideoProfileProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] hstring FrameDuration() const;
};
template <> struct consume<Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics> { template <typename D> using type = consume_Windows_Devices_Perception_IKnownPerceptionVideoProfilePropertiesStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IPerceptionColorFrame
{
    [[deprecated("PerceptionColorFrame may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.VideoMediaFrame instead.")]] Windows::Media::VideoFrame VideoFrame() const;
};
template <> struct consume<Windows::Devices::Perception::IPerceptionColorFrame> { template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionColorFrame<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IPerceptionColorFrameArrivedEventArgs
{
    [[deprecated("PerceptionColorFrameArrivedEventArgs may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs instead.")]] Windows::Foundation::TimeSpan RelativeTime() const;
    [[deprecated("PerceptionColorFrameArrivedEventArgs may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs instead.")]] Windows::Devices::Perception::PerceptionColorFrame TryOpenFrame() const;
};
template <> struct consume<Windows::Devices::Perception::IPerceptionColorFrameArrivedEventArgs> { template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionColorFrameArrivedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IPerceptionColorFrameReader
{
    [[deprecated("PerceptionColorFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")]] event_token FrameArrived(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameReader, Windows::Devices::Perception::PerceptionColorFrameArrivedEventArgs> const& handler) const;
    using FrameArrived_revoker = event_revoker<Windows::Devices::Perception::IPerceptionColorFrameReader>;
    [[deprecated("PerceptionColorFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")]] FrameArrived_revoker FrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameReader, Windows::Devices::Perception::PerceptionColorFrameArrivedEventArgs> const& handler) const;
    [[deprecated("PerceptionColorFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")]] void FrameArrived(event_token const& token) const;
    [[deprecated("PerceptionColorFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")]] Windows::Devices::Perception::PerceptionColorFrameSource Source() const;
    [[deprecated("PerceptionColorFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")]] bool IsPaused() const;
    [[deprecated("PerceptionColorFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")]] void IsPaused(bool value) const;
    [[deprecated("PerceptionColorFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")]] Windows::Devices::Perception::PerceptionColorFrame TryReadLatestFrame() const;
};
template <> struct consume<Windows::Devices::Perception::IPerceptionColorFrameReader> { template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionColorFrameReader<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IPerceptionColorFrameSource
{
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] event_token AvailableChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const;
    using AvailableChanged_revoker = event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSource>;
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] AvailableChanged_revoker AvailableChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] void AvailableChanged(event_token const& token) const;
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] event_token ActiveChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const;
    using ActiveChanged_revoker = event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSource>;
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] ActiveChanged_revoker ActiveChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] void ActiveChanged(event_token const& token) const;
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] event_token PropertiesChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const& handler) const;
    using PropertiesChanged_revoker = event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSource>;
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] PropertiesChanged_revoker PropertiesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const& handler) const;
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] void PropertiesChanged(event_token const& token) const;
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] event_token VideoProfileChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const;
    using VideoProfileChanged_revoker = event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSource>;
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] VideoProfileChanged_revoker VideoProfileChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] void VideoProfileChanged(event_token const& token) const;
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] event_token CameraIntrinsicsChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const;
    using CameraIntrinsicsChanged_revoker = event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSource>;
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] CameraIntrinsicsChanged_revoker CameraIntrinsicsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] void CameraIntrinsicsChanged(event_token const& token) const;
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] hstring Id() const;
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] hstring DisplayName() const;
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] hstring DeviceKind() const;
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] bool Available() const;
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] bool Active() const;
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] bool IsControlled() const;
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> Properties() const;
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> SupportedVideoProfiles() const;
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> AvailableVideoProfiles() const;
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] Windows::Devices::Perception::PerceptionVideoProfile VideoProfile() const;
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] Windows::Media::Devices::Core::CameraIntrinsics CameraIntrinsics() const;
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] Windows::Devices::Perception::PerceptionControlSession AcquireControlSession() const;
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] bool CanControlIndependentlyFrom(param::hstring const& targetId) const;
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] bool IsCorrelatedWith(param::hstring const& targetId) const;
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] bool TryGetTransformTo(param::hstring const& targetId, Windows::Foundation::Numerics::float4x4& result) const;
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics> TryGetDepthCorrelatedCameraIntrinsicsAsync(Windows::Devices::Perception::PerceptionDepthFrameSource const& correlatedDepthFrameSource) const;
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper> TryGetDepthCorrelatedCoordinateMapperAsync(param::hstring const& targetSourceId, Windows::Devices::Perception::PerceptionDepthFrameSource const& correlatedDepthFrameSource) const;
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> TrySetVideoProfileAsync(Windows::Devices::Perception::PerceptionControlSession const& controlSession, Windows::Devices::Perception::PerceptionVideoProfile const& profile) const;
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] Windows::Devices::Perception::PerceptionColorFrameReader OpenReader() const;
};
template <> struct consume<Windows::Devices::Perception::IPerceptionColorFrameSource> { template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IPerceptionColorFrameSource2
{
    [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] hstring DeviceId() const;
};
template <> struct consume<Windows::Devices::Perception::IPerceptionColorFrameSource2> { template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionColorFrameSource2<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IPerceptionColorFrameSourceAddedEventArgs
{
    [[deprecated("PerceptionColorFrameSourceAddedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] Windows::Devices::Perception::PerceptionColorFrameSource FrameSource() const;
};
template <> struct consume<Windows::Devices::Perception::IPerceptionColorFrameSourceAddedEventArgs> { template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionColorFrameSourceAddedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IPerceptionColorFrameSourceRemovedEventArgs
{
    [[deprecated("PerceptionColorFrameSourceRemovedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] Windows::Devices::Perception::PerceptionColorFrameSource FrameSource() const;
};
template <> struct consume<Windows::Devices::Perception::IPerceptionColorFrameSourceRemovedEventArgs> { template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionColorFrameSourceRemovedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IPerceptionColorFrameSourceStatics
{
    [[deprecated("PerceptionColorFrameSource.CreateWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.CreateWatcher instead.")]] Windows::Devices::Perception::PerceptionColorFrameSourceWatcher CreateWatcher() const;
    [[deprecated("PerceptionColorFrameSource.FindAllAsync may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.FindAllAsync instead.")]] Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionColorFrameSource>> FindAllAsync() const;
    [[deprecated("PerceptionColorFrameSource.FromIdAsync may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.FromIdAsync instead.")]] Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionColorFrameSource> FromIdAsync(param::hstring const& id) const;
    [[deprecated("PerceptionColorFrameSource.RequestAccessAsync may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> RequestAccessAsync() const;
};
template <> struct consume<Windows::Devices::Perception::IPerceptionColorFrameSourceStatics> { template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionColorFrameSourceStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher
{
    [[deprecated("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] event_token SourceAdded(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceAddedEventArgs> const& handler) const;
    using SourceAdded_revoker = event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>;
    [[deprecated("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] SourceAdded_revoker SourceAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceAddedEventArgs> const& handler) const;
    [[deprecated("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] void SourceAdded(event_token const& token) const;
    [[deprecated("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] event_token SourceRemoved(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceRemovedEventArgs> const& handler) const;
    using SourceRemoved_revoker = event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>;
    [[deprecated("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] SourceRemoved_revoker SourceRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceRemovedEventArgs> const& handler) const;
    [[deprecated("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] void SourceRemoved(event_token const& token) const;
    [[deprecated("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] event_token Stopped(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const;
    using Stopped_revoker = event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>;
    [[deprecated("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] Stopped_revoker Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] void Stopped(event_token const& token) const;
    [[deprecated("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] event_token EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const;
    using EnumerationCompleted_revoker = event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>;
    [[deprecated("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] void EnumerationCompleted(event_token const& token) const;
    [[deprecated("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] Windows::Devices::Enumeration::DeviceWatcherStatus Status() const;
    [[deprecated("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] void Start() const;
    [[deprecated("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] void Stop() const;
};
template <> struct consume<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher> { template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IPerceptionControlSession
{
    [[deprecated("PerceptionControlSession may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] event_token ControlLost(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionControlSession, Windows::Foundation::IInspectable> const& handler) const;
    using ControlLost_revoker = event_revoker<Windows::Devices::Perception::IPerceptionControlSession>;
    [[deprecated("PerceptionControlSession may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] ControlLost_revoker ControlLost(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionControlSession, Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("PerceptionControlSession may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] void ControlLost(event_token const& token) const;
    [[deprecated("PerceptionControlSession may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> TrySetPropertyAsync(param::hstring const& name, Windows::Foundation::IInspectable const& value) const;
};
template <> struct consume<Windows::Devices::Perception::IPerceptionControlSession> { template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionControlSession<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IPerceptionDepthCorrelatedCameraIntrinsics
{
    [[deprecated("PerceptionDepthCorrelatedCameraIntrinsics may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper instead.")]] Windows::Foundation::Numerics::float3 UnprojectPixelAtCorrelatedDepth(Windows::Foundation::Point const& pixelCoordinate, Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame) const;
    [[deprecated("PerceptionDepthCorrelatedCameraIntrinsics may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper instead.")]] void UnprojectPixelsAtCorrelatedDepth(array_view<Windows::Foundation::Point const> sourceCoordinates, Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame, array_view<Windows::Foundation::Numerics::float3> results) const;
    [[deprecated("PerceptionDepthCorrelatedCameraIntrinsics may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper instead.")]] Windows::Foundation::IAsyncAction UnprojectRegionPixelsAtCorrelatedDepthAsync(Windows::Foundation::Rect const& region, Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame, array_view<Windows::Foundation::Numerics::float3> results) const;
    [[deprecated("PerceptionDepthCorrelatedCameraIntrinsics may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper instead.")]] Windows::Foundation::IAsyncAction UnprojectAllPixelsAtCorrelatedDepthAsync(Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame, array_view<Windows::Foundation::Numerics::float3> results) const;
};
template <> struct consume<Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics> { template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionDepthCorrelatedCameraIntrinsics<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IPerceptionDepthCorrelatedCoordinateMapper
{
    [[deprecated("PerceptionDepthCorrelatedCoordinateMapper may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper instead.")]] Windows::Foundation::Point MapPixelToTarget(Windows::Foundation::Point const& sourcePixelCoordinate, Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame) const;
    [[deprecated("PerceptionDepthCorrelatedCoordinateMapper may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper instead.")]] void MapPixelsToTarget(array_view<Windows::Foundation::Point const> sourceCoordinates, Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame, array_view<Windows::Foundation::Point> results) const;
    [[deprecated("PerceptionDepthCorrelatedCoordinateMapper may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper instead.")]] Windows::Foundation::IAsyncAction MapRegionOfPixelsToTargetAsync(Windows::Foundation::Rect const& region, Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame, array_view<Windows::Foundation::Point> targetCoordinates) const;
    [[deprecated("PerceptionDepthCorrelatedCoordinateMapper may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper instead.")]] Windows::Foundation::IAsyncAction MapAllPixelsToTargetAsync(Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame, array_view<Windows::Foundation::Point> targetCoordinates) const;
};
template <> struct consume<Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper> { template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionDepthCorrelatedCoordinateMapper<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IPerceptionDepthFrame
{
    [[deprecated("PerceptionDepthFrame may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.DepthMediaFrame instead.")]] Windows::Media::VideoFrame VideoFrame() const;
};
template <> struct consume<Windows::Devices::Perception::IPerceptionDepthFrame> { template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionDepthFrame<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IPerceptionDepthFrameArrivedEventArgs
{
    [[deprecated("PerceptionDepthFrameArrivedEventArgs may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs instead.")]] Windows::Foundation::TimeSpan RelativeTime() const;
    [[deprecated("PerceptionDepthFrameArrivedEventArgs may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs instead.")]] Windows::Devices::Perception::PerceptionDepthFrame TryOpenFrame() const;
};
template <> struct consume<Windows::Devices::Perception::IPerceptionDepthFrameArrivedEventArgs> { template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionDepthFrameArrivedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IPerceptionDepthFrameReader
{
    [[deprecated("PerceptionDepthFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")]] event_token FrameArrived(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameReader, Windows::Devices::Perception::PerceptionDepthFrameArrivedEventArgs> const& handler) const;
    using FrameArrived_revoker = event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameReader>;
    [[deprecated("PerceptionDepthFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")]] FrameArrived_revoker FrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameReader, Windows::Devices::Perception::PerceptionDepthFrameArrivedEventArgs> const& handler) const;
    [[deprecated("PerceptionDepthFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")]] void FrameArrived(event_token const& token) const;
    [[deprecated("PerceptionDepthFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")]] Windows::Devices::Perception::PerceptionDepthFrameSource Source() const;
    [[deprecated("PerceptionDepthFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")]] bool IsPaused() const;
    [[deprecated("PerceptionDepthFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")]] void IsPaused(bool value) const;
    [[deprecated("PerceptionDepthFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")]] Windows::Devices::Perception::PerceptionDepthFrame TryReadLatestFrame() const;
};
template <> struct consume<Windows::Devices::Perception::IPerceptionDepthFrameReader> { template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionDepthFrameReader<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IPerceptionDepthFrameSource
{
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] event_token AvailableChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const;
    using AvailableChanged_revoker = event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSource>;
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] AvailableChanged_revoker AvailableChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] void AvailableChanged(event_token const& token) const;
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] event_token ActiveChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const;
    using ActiveChanged_revoker = event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSource>;
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] ActiveChanged_revoker ActiveChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] void ActiveChanged(event_token const& token) const;
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] event_token PropertiesChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const& handler) const;
    using PropertiesChanged_revoker = event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSource>;
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] PropertiesChanged_revoker PropertiesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const& handler) const;
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] void PropertiesChanged(event_token const& token) const;
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] event_token VideoProfileChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const;
    using VideoProfileChanged_revoker = event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSource>;
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] VideoProfileChanged_revoker VideoProfileChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] void VideoProfileChanged(event_token const& token) const;
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] event_token CameraIntrinsicsChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const;
    using CameraIntrinsicsChanged_revoker = event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSource>;
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] CameraIntrinsicsChanged_revoker CameraIntrinsicsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] void CameraIntrinsicsChanged(event_token const& token) const;
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] hstring Id() const;
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] hstring DisplayName() const;
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] hstring DeviceKind() const;
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] bool Available() const;
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] bool Active() const;
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] bool IsControlled() const;
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> Properties() const;
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> SupportedVideoProfiles() const;
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> AvailableVideoProfiles() const;
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] Windows::Devices::Perception::PerceptionVideoProfile VideoProfile() const;
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] Windows::Media::Devices::Core::CameraIntrinsics CameraIntrinsics() const;
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] Windows::Devices::Perception::PerceptionControlSession AcquireControlSession() const;
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] bool CanControlIndependentlyFrom(param::hstring const& targetId) const;
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] bool IsCorrelatedWith(param::hstring const& targetId) const;
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] bool TryGetTransformTo(param::hstring const& targetId, Windows::Foundation::Numerics::float4x4& result) const;
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics> TryGetDepthCorrelatedCameraIntrinsicsAsync(Windows::Devices::Perception::PerceptionDepthFrameSource const& target) const;
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper> TryGetDepthCorrelatedCoordinateMapperAsync(param::hstring const& targetId, Windows::Devices::Perception::PerceptionDepthFrameSource const& depthFrameSourceToMapWith) const;
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> TrySetVideoProfileAsync(Windows::Devices::Perception::PerceptionControlSession const& controlSession, Windows::Devices::Perception::PerceptionVideoProfile const& profile) const;
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] Windows::Devices::Perception::PerceptionDepthFrameReader OpenReader() const;
};
template <> struct consume<Windows::Devices::Perception::IPerceptionDepthFrameSource> { template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IPerceptionDepthFrameSource2
{
    [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] hstring DeviceId() const;
};
template <> struct consume<Windows::Devices::Perception::IPerceptionDepthFrameSource2> { template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionDepthFrameSource2<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceAddedEventArgs
{
    [[deprecated("PerceptionDepthFrameSourceAddedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] Windows::Devices::Perception::PerceptionDepthFrameSource FrameSource() const;
};
template <> struct consume<Windows::Devices::Perception::IPerceptionDepthFrameSourceAddedEventArgs> { template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceAddedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceRemovedEventArgs
{
    [[deprecated("PerceptionDepthFrameSourceRemovedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] Windows::Devices::Perception::PerceptionDepthFrameSource FrameSource() const;
};
template <> struct consume<Windows::Devices::Perception::IPerceptionDepthFrameSourceRemovedEventArgs> { template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceRemovedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceStatics
{
    [[deprecated("PerceptionDepthFrameSource.CreateWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.CreateWatcher instead.")]] Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher CreateWatcher() const;
    [[deprecated("PerceptionDepthFrameSource.FindAllAsync may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.FindAllAsync instead.")]] Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionDepthFrameSource>> FindAllAsync() const;
    [[deprecated("PerceptionDepthFrameSource.FromIdAsync may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.FromIdAsync instead.")]] Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthFrameSource> FromIdAsync(param::hstring const& id) const;
    [[deprecated("PerceptionDepthFrameSource.RequestAccessAsync may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> RequestAccessAsync() const;
};
template <> struct consume<Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics> { template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher
{
    [[deprecated("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] event_token SourceAdded(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceAddedEventArgs> const& handler) const;
    using SourceAdded_revoker = event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>;
    [[deprecated("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] SourceAdded_revoker SourceAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceAddedEventArgs> const& handler) const;
    [[deprecated("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] void SourceAdded(event_token const& token) const;
    [[deprecated("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] event_token SourceRemoved(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceRemovedEventArgs> const& handler) const;
    using SourceRemoved_revoker = event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>;
    [[deprecated("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] SourceRemoved_revoker SourceRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceRemovedEventArgs> const& handler) const;
    [[deprecated("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] void SourceRemoved(event_token const& token) const;
    [[deprecated("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] event_token Stopped(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const;
    using Stopped_revoker = event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>;
    [[deprecated("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] Stopped_revoker Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] void Stopped(event_token const& token) const;
    [[deprecated("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] event_token EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const;
    using EnumerationCompleted_revoker = event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>;
    [[deprecated("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] void EnumerationCompleted(event_token const& token) const;
    [[deprecated("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] Windows::Devices::Enumeration::DeviceWatcherStatus Status() const;
    [[deprecated("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] void Start() const;
    [[deprecated("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] void Stop() const;
};
template <> struct consume<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher> { template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IPerceptionFrameSourcePropertiesChangedEventArgs
{
    [[deprecated("PerceptionFrameSourcePropertiesChangedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] Windows::Foundation::Collections::CollectionChange CollectionChange() const;
    [[deprecated("PerceptionFrameSourcePropertiesChangedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] hstring Key() const;
};
template <> struct consume<Windows::Devices::Perception::IPerceptionFrameSourcePropertiesChangedEventArgs> { template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionFrameSourcePropertiesChangedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IPerceptionFrameSourcePropertyChangeResult
{
    [[deprecated("PerceptionFrameSourcePropertyChangeResult may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus Status() const;
    [[deprecated("PerceptionFrameSourcePropertyChangeResult may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] Windows::Foundation::IInspectable NewValue() const;
};
template <> struct consume<Windows::Devices::Perception::IPerceptionFrameSourcePropertyChangeResult> { template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionFrameSourcePropertyChangeResult<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IPerceptionInfraredFrame
{
    [[deprecated("PerceptionInfraredFrame may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.InfraredMediaFrame instead.")]] Windows::Media::VideoFrame VideoFrame() const;
};
template <> struct consume<Windows::Devices::Perception::IPerceptionInfraredFrame> { template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionInfraredFrame<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IPerceptionInfraredFrameArrivedEventArgs
{
    [[deprecated("PerceptionInfraredFrameArrivedEventArgs may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs instead.")]] Windows::Foundation::TimeSpan RelativeTime() const;
    [[deprecated("PerceptionInfraredFrameArrivedEventArgs may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs instead.")]] Windows::Devices::Perception::PerceptionInfraredFrame TryOpenFrame() const;
};
template <> struct consume<Windows::Devices::Perception::IPerceptionInfraredFrameArrivedEventArgs> { template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionInfraredFrameArrivedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IPerceptionInfraredFrameReader
{
    [[deprecated("PerceptionInfraredFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")]] event_token FrameArrived(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameReader, Windows::Devices::Perception::PerceptionInfraredFrameArrivedEventArgs> const& handler) const;
    using FrameArrived_revoker = event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameReader>;
    [[deprecated("PerceptionInfraredFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")]] FrameArrived_revoker FrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameReader, Windows::Devices::Perception::PerceptionInfraredFrameArrivedEventArgs> const& handler) const;
    [[deprecated("PerceptionInfraredFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")]] void FrameArrived(event_token const& token) const;
    [[deprecated("PerceptionInfraredFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")]] Windows::Devices::Perception::PerceptionInfraredFrameSource Source() const;
    [[deprecated("PerceptionInfraredFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")]] bool IsPaused() const;
    [[deprecated("PerceptionInfraredFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")]] void IsPaused(bool value) const;
    [[deprecated("PerceptionInfraredFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")]] Windows::Devices::Perception::PerceptionInfraredFrame TryReadLatestFrame() const;
};
template <> struct consume<Windows::Devices::Perception::IPerceptionInfraredFrameReader> { template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionInfraredFrameReader<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource
{
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] event_token AvailableChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const;
    using AvailableChanged_revoker = event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSource>;
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] AvailableChanged_revoker AvailableChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] void AvailableChanged(event_token const& token) const;
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] event_token ActiveChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const;
    using ActiveChanged_revoker = event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSource>;
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] ActiveChanged_revoker ActiveChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] void ActiveChanged(event_token const& token) const;
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] event_token PropertiesChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const& handler) const;
    using PropertiesChanged_revoker = event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSource>;
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] PropertiesChanged_revoker PropertiesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const& handler) const;
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] void PropertiesChanged(event_token const& token) const;
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] event_token VideoProfileChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const;
    using VideoProfileChanged_revoker = event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSource>;
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] VideoProfileChanged_revoker VideoProfileChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] void VideoProfileChanged(event_token const& token) const;
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] event_token CameraIntrinsicsChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const;
    using CameraIntrinsicsChanged_revoker = event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSource>;
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] CameraIntrinsicsChanged_revoker CameraIntrinsicsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] void CameraIntrinsicsChanged(event_token const& token) const;
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] hstring Id() const;
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] hstring DisplayName() const;
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] hstring DeviceKind() const;
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] bool Available() const;
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] bool Active() const;
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] bool IsControlled() const;
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> Properties() const;
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> SupportedVideoProfiles() const;
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> AvailableVideoProfiles() const;
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] Windows::Devices::Perception::PerceptionVideoProfile VideoProfile() const;
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] Windows::Media::Devices::Core::CameraIntrinsics CameraIntrinsics() const;
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] Windows::Devices::Perception::PerceptionControlSession AcquireControlSession() const;
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] bool CanControlIndependentlyFrom(param::hstring const& targetId) const;
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] bool IsCorrelatedWith(param::hstring const& targetId) const;
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] bool TryGetTransformTo(param::hstring const& targetId, Windows::Foundation::Numerics::float4x4& result) const;
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics> TryGetDepthCorrelatedCameraIntrinsicsAsync(Windows::Devices::Perception::PerceptionDepthFrameSource const& target) const;
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper> TryGetDepthCorrelatedCoordinateMapperAsync(param::hstring const& targetId, Windows::Devices::Perception::PerceptionDepthFrameSource const& depthFrameSourceToMapWith) const;
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> TrySetVideoProfileAsync(Windows::Devices::Perception::PerceptionControlSession const& controlSession, Windows::Devices::Perception::PerceptionVideoProfile const& profile) const;
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] Windows::Devices::Perception::PerceptionInfraredFrameReader OpenReader() const;
};
template <> struct consume<Windows::Devices::Perception::IPerceptionInfraredFrameSource> { template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource2
{
    [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameSource instead.")]] hstring DeviceId() const;
};
template <> struct consume<Windows::Devices::Perception::IPerceptionInfraredFrameSource2> { template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource2<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceAddedEventArgs
{
    [[deprecated("PerceptionInfraredFrameSourceAddedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] Windows::Devices::Perception::PerceptionInfraredFrameSource FrameSource() const;
};
template <> struct consume<Windows::Devices::Perception::IPerceptionInfraredFrameSourceAddedEventArgs> { template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceAddedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceRemovedEventArgs
{
    [[deprecated("PerceptionInfraredFrameSourceRemovedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] Windows::Devices::Perception::PerceptionInfraredFrameSource FrameSource() const;
};
template <> struct consume<Windows::Devices::Perception::IPerceptionInfraredFrameSourceRemovedEventArgs> { template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceRemovedEventArgs<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceStatics
{
    [[deprecated("PerceptionInfraredFrameSource.CreateWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.CreateWatcher instead.")]] Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher CreateWatcher() const;
    [[deprecated("PerceptionInfraredFrameSource.FindAllAsync may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.FindAllAsync instead.")]] Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionInfraredFrameSource>> FindAllAsync() const;
    [[deprecated("PerceptionInfraredFrameSource.FromIdAsync may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.FromIdAsync instead.")]] Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionInfraredFrameSource> FromIdAsync(param::hstring const& id) const;
    [[deprecated("PerceptionInfraredFrameSource.RequestAccessAsync may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> RequestAccessAsync() const;
};
template <> struct consume<Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics> { template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceStatics<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher
{
    [[deprecated("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] event_token SourceAdded(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceAddedEventArgs> const& handler) const;
    using SourceAdded_revoker = event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>;
    [[deprecated("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] SourceAdded_revoker SourceAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceAddedEventArgs> const& handler) const;
    [[deprecated("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] void SourceAdded(event_token const& token) const;
    [[deprecated("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] event_token SourceRemoved(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceRemovedEventArgs> const& handler) const;
    using SourceRemoved_revoker = event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>;
    [[deprecated("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] SourceRemoved_revoker SourceRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceRemovedEventArgs> const& handler) const;
    [[deprecated("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] void SourceRemoved(event_token const& token) const;
    [[deprecated("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] event_token Stopped(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const;
    using Stopped_revoker = event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>;
    [[deprecated("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] Stopped_revoker Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] void Stopped(event_token const& token) const;
    [[deprecated("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] event_token EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const;
    using EnumerationCompleted_revoker = event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>;
    [[deprecated("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] EnumerationCompleted_revoker EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const;
    [[deprecated("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] void EnumerationCompleted(event_token const& token) const;
    [[deprecated("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] Windows::Devices::Enumeration::DeviceWatcherStatus Status() const;
    [[deprecated("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] void Start() const;
    [[deprecated("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] void Stop() const;
};
template <> struct consume<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher> { template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>; };

template <typename D>
struct consume_Windows_Devices_Perception_IPerceptionVideoProfile
{
    [[deprecated("PerceptionVideoProfile may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameFormat instead.")]] Windows::Graphics::Imaging::BitmapPixelFormat BitmapPixelFormat() const;
    [[deprecated("PerceptionVideoProfile may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameFormat instead.")]] Windows::Graphics::Imaging::BitmapAlphaMode BitmapAlphaMode() const;
    [[deprecated("PerceptionVideoProfile may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameFormat instead.")]] int32_t Width() const;
    [[deprecated("PerceptionVideoProfile may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameFormat instead.")]] int32_t Height() const;
    [[deprecated("PerceptionVideoProfile may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameFormat instead.")]] Windows::Foundation::TimeSpan FrameDuration() const;
    [[deprecated("PerceptionVideoProfile may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameFormat instead.")]] bool IsEqual(Windows::Devices::Perception::PerceptionVideoProfile const& other) const;
};
template <> struct consume<Windows::Devices::Perception::IPerceptionVideoProfile> { template <typename D> using type = consume_Windows_Devices_Perception_IPerceptionVideoProfile<D>; };

template <> struct abi<Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FocalLength(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PrincipalPoint(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_RadialDistortion(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_TangentialDistortion(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Exposure(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AutoExposureEnabled(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ExposureCompensation(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MinDepth(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_MaxDepth(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_PhysicalDeviceIds(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_FrameKind(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DeviceModelVersion(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_EnclosureLocation(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Exposure(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AutoExposureEnabled(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ExposureCompensation(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_ActiveIlluminationEnabled(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AmbientSubtractionEnabled(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_StructureLightPatternEnabled(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_InterleavedIlluminationEnabled(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_VideoProfile(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_SupportedVideoProfiles(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_AvailableVideoProfiles(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_IsMirrored(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_CameraIntrinsics(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BitmapPixelFormat(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_BitmapAlphaMode(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Width(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Height(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_FrameDuration(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IPerceptionColorFrame>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_VideoFrame(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IPerceptionColorFrameArrivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RelativeTime(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall TryOpenFrame(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IPerceptionColorFrameReader>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_FrameArrived(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_FrameArrived(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsPaused(bool* value) = 0;
    virtual HRESULT __stdcall put_IsPaused(bool value) = 0;
    virtual HRESULT __stdcall TryReadLatestFrame(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IPerceptionColorFrameSource>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_AvailableChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_AvailableChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_ActiveChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ActiveChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_PropertiesChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PropertiesChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_VideoProfileChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_VideoProfileChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_CameraIntrinsicsChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_CameraIntrinsicsChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DeviceKind(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Available(bool* value) = 0;
    virtual HRESULT __stdcall get_Active(bool* value) = 0;
    virtual HRESULT __stdcall get_IsControlled(bool* value) = 0;
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SupportedVideoProfiles(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AvailableVideoProfiles(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VideoProfile(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CameraIntrinsics(::IUnknown** value) = 0;
    virtual HRESULT __stdcall AcquireControlSession(::IUnknown** value) = 0;
    virtual HRESULT __stdcall CanControlIndependentlyFrom(HSTRING targetId, bool* result) = 0;
    virtual HRESULT __stdcall IsCorrelatedWith(HSTRING targetId, bool* result) = 0;
    virtual HRESULT __stdcall TryGetTransformTo(HSTRING targetId, abi_t<Windows::Foundation::Numerics::float4x4>* result, bool* hasResult) = 0;
    virtual HRESULT __stdcall TryGetDepthCorrelatedCameraIntrinsicsAsync(::IUnknown* correlatedDepthFrameSource, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall TryGetDepthCorrelatedCoordinateMapperAsync(HSTRING targetSourceId, ::IUnknown* correlatedDepthFrameSource, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall TrySetVideoProfileAsync(::IUnknown* controlSession, ::IUnknown* profile, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall OpenReader(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IPerceptionColorFrameSource2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IPerceptionColorFrameSourceAddedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FrameSource(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IPerceptionColorFrameSourceRemovedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FrameSource(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IPerceptionColorFrameSourceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWatcher(::IUnknown** watcher) = 0;
    virtual HRESULT __stdcall FindAllAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall FromIdAsync(HSTRING id, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall RequestAccessAsync(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_SourceAdded(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_SourceAdded(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_SourceRemoved(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_SourceRemoved(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_Stopped(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Stopped(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_EnumerationCompleted(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_EnumerationCompleted(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Devices::Enumeration::DeviceWatcherStatus>* value) = 0;
    virtual HRESULT __stdcall Start() = 0;
    virtual HRESULT __stdcall Stop() = 0;
};};

template <> struct abi<Windows::Devices::Perception::IPerceptionControlSession>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_ControlLost(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ControlLost(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall TrySetPropertyAsync(HSTRING name, ::IUnknown* value, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall UnprojectPixelAtCorrelatedDepth(abi_t<Windows::Foundation::Point> pixelCoordinate, ::IUnknown* depthFrame, abi_t<Windows::Foundation::Numerics::float3>* result) = 0;
    virtual HRESULT __stdcall UnprojectPixelsAtCorrelatedDepth(uint32_t __sourceCoordinatesSize, abi_t<Windows::Foundation::Point>* sourceCoordinates, ::IUnknown* depthFrame, uint32_t __resultsSize, abi_t<Windows::Foundation::Numerics::float3>* results) = 0;
    virtual HRESULT __stdcall UnprojectRegionPixelsAtCorrelatedDepthAsync(abi_t<Windows::Foundation::Rect> region, ::IUnknown* depthFrame, uint32_t __resultsSize, abi_t<Windows::Foundation::Numerics::float3>* results, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall UnprojectAllPixelsAtCorrelatedDepthAsync(::IUnknown* depthFrame, uint32_t __resultsSize, abi_t<Windows::Foundation::Numerics::float3>* results, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall MapPixelToTarget(abi_t<Windows::Foundation::Point> sourcePixelCoordinate, ::IUnknown* depthFrame, abi_t<Windows::Foundation::Point>* result) = 0;
    virtual HRESULT __stdcall MapPixelsToTarget(uint32_t __sourceCoordinatesSize, abi_t<Windows::Foundation::Point>* sourceCoordinates, ::IUnknown* depthFrame, uint32_t __resultsSize, abi_t<Windows::Foundation::Point>* results) = 0;
    virtual HRESULT __stdcall MapRegionOfPixelsToTargetAsync(abi_t<Windows::Foundation::Rect> region, ::IUnknown* depthFrame, uint32_t __targetCoordinatesSize, abi_t<Windows::Foundation::Point>* targetCoordinates, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall MapAllPixelsToTargetAsync(::IUnknown* depthFrame, uint32_t __targetCoordinatesSize, abi_t<Windows::Foundation::Point>* targetCoordinates, ::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IPerceptionDepthFrame>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_VideoFrame(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IPerceptionDepthFrameArrivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RelativeTime(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall TryOpenFrame(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IPerceptionDepthFrameReader>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_FrameArrived(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_FrameArrived(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsPaused(bool* value) = 0;
    virtual HRESULT __stdcall put_IsPaused(bool value) = 0;
    virtual HRESULT __stdcall TryReadLatestFrame(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IPerceptionDepthFrameSource>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_AvailableChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_AvailableChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_ActiveChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ActiveChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_PropertiesChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PropertiesChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_VideoProfileChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_VideoProfileChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_CameraIntrinsicsChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_CameraIntrinsicsChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DeviceKind(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Available(bool* value) = 0;
    virtual HRESULT __stdcall get_Active(bool* value) = 0;
    virtual HRESULT __stdcall get_IsControlled(bool* value) = 0;
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SupportedVideoProfiles(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AvailableVideoProfiles(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VideoProfile(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CameraIntrinsics(::IUnknown** value) = 0;
    virtual HRESULT __stdcall AcquireControlSession(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CanControlIndependentlyFrom(HSTRING targetId, bool* result) = 0;
    virtual HRESULT __stdcall IsCorrelatedWith(HSTRING targetId, bool* result) = 0;
    virtual HRESULT __stdcall TryGetTransformTo(HSTRING targetId, abi_t<Windows::Foundation::Numerics::float4x4>* result, bool* hasResult) = 0;
    virtual HRESULT __stdcall TryGetDepthCorrelatedCameraIntrinsicsAsync(::IUnknown* target, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall TryGetDepthCorrelatedCoordinateMapperAsync(HSTRING targetId, ::IUnknown* depthFrameSourceToMapWith, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall TrySetVideoProfileAsync(::IUnknown* controlSession, ::IUnknown* profile, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall OpenReader(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IPerceptionDepthFrameSource2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IPerceptionDepthFrameSourceAddedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FrameSource(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IPerceptionDepthFrameSourceRemovedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FrameSource(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWatcher(::IUnknown** watcher) = 0;
    virtual HRESULT __stdcall FindAllAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall FromIdAsync(HSTRING id, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall RequestAccessAsync(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_SourceAdded(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_SourceAdded(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_SourceRemoved(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_SourceRemoved(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_Stopped(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Stopped(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_EnumerationCompleted(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_EnumerationCompleted(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Devices::Enumeration::DeviceWatcherStatus>* value) = 0;
    virtual HRESULT __stdcall Start() = 0;
    virtual HRESULT __stdcall Stop() = 0;
};};

template <> struct abi<Windows::Devices::Perception::IPerceptionFrameSourcePropertiesChangedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CollectionChange(abi_t<Windows::Foundation::Collections::CollectionChange>* value) = 0;
    virtual HRESULT __stdcall get_Key(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IPerceptionFrameSourcePropertyChangeResult>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus>* value) = 0;
    virtual HRESULT __stdcall get_NewValue(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IPerceptionInfraredFrame>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_VideoFrame(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IPerceptionInfraredFrameArrivedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RelativeTime(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall TryOpenFrame(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IPerceptionInfraredFrameReader>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_FrameArrived(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_FrameArrived(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_Source(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsPaused(bool* value) = 0;
    virtual HRESULT __stdcall put_IsPaused(bool value) = 0;
    virtual HRESULT __stdcall TryReadLatestFrame(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IPerceptionInfraredFrameSource>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_AvailableChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_AvailableChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_ActiveChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ActiveChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_PropertiesChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_PropertiesChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_VideoProfileChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_VideoProfileChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_CameraIntrinsicsChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_CameraIntrinsicsChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_Id(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DisplayName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_DeviceKind(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Available(bool* value) = 0;
    virtual HRESULT __stdcall get_Active(bool* value) = 0;
    virtual HRESULT __stdcall get_IsControlled(bool* value) = 0;
    virtual HRESULT __stdcall get_Properties(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_SupportedVideoProfiles(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AvailableVideoProfiles(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VideoProfile(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CameraIntrinsics(::IUnknown** value) = 0;
    virtual HRESULT __stdcall AcquireControlSession(::IUnknown** result) = 0;
    virtual HRESULT __stdcall CanControlIndependentlyFrom(HSTRING targetId, bool* result) = 0;
    virtual HRESULT __stdcall IsCorrelatedWith(HSTRING targetId, bool* result) = 0;
    virtual HRESULT __stdcall TryGetTransformTo(HSTRING targetId, abi_t<Windows::Foundation::Numerics::float4x4>* result, bool* hasResult) = 0;
    virtual HRESULT __stdcall TryGetDepthCorrelatedCameraIntrinsicsAsync(::IUnknown* target, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall TryGetDepthCorrelatedCoordinateMapperAsync(HSTRING targetId, ::IUnknown* depthFrameSourceToMapWith, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall TrySetVideoProfileAsync(::IUnknown* controlSession, ::IUnknown* profile, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall OpenReader(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IPerceptionInfraredFrameSource2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceId(HSTRING* value) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IPerceptionInfraredFrameSourceAddedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FrameSource(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IPerceptionInfraredFrameSourceRemovedEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FrameSource(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateWatcher(::IUnknown** watcher) = 0;
    virtual HRESULT __stdcall FindAllAsync(::IUnknown** result) = 0;
    virtual HRESULT __stdcall FromIdAsync(HSTRING id, ::IUnknown** result) = 0;
    virtual HRESULT __stdcall RequestAccessAsync(::IUnknown** result) = 0;
};};

template <> struct abi<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall add_SourceAdded(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_SourceAdded(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_SourceRemoved(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_SourceRemoved(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_Stopped(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_Stopped(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_EnumerationCompleted(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_EnumerationCompleted(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_Status(abi_t<Windows::Devices::Enumeration::DeviceWatcherStatus>* value) = 0;
    virtual HRESULT __stdcall Start() = 0;
    virtual HRESULT __stdcall Stop() = 0;
};};

template <> struct abi<Windows::Devices::Perception::IPerceptionVideoProfile>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_BitmapPixelFormat(abi_t<Windows::Graphics::Imaging::BitmapPixelFormat>* value) = 0;
    virtual HRESULT __stdcall get_BitmapAlphaMode(abi_t<Windows::Graphics::Imaging::BitmapAlphaMode>* value) = 0;
    virtual HRESULT __stdcall get_Width(int32_t* value) = 0;
    virtual HRESULT __stdcall get_Height(int32_t* value) = 0;
    virtual HRESULT __stdcall get_FrameDuration(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall IsEqual(::IUnknown* other, bool* result) = 0;
};};

}
