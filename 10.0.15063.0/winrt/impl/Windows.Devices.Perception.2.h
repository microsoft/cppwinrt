// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Enumeration.1.h"
#include "winrt/impl/Windows.Graphics.Imaging.1.h"
#include "winrt/impl/Windows.Media.1.h"
#include "winrt/impl/Windows.Media.Devices.Core.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Devices.Perception.1.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Perception {

struct [[deprecated("KnownCameraIntrinsicsProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] KnownCameraIntrinsicsProperties
{
    KnownCameraIntrinsicsProperties() = delete;
    [[deprecated("KnownCameraIntrinsicsProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] static hstring FocalLength();
    [[deprecated("KnownCameraIntrinsicsProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] static hstring PrincipalPoint();
    [[deprecated("KnownCameraIntrinsicsProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] static hstring RadialDistortion();
    [[deprecated("KnownCameraIntrinsicsProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] static hstring TangentialDistortion();
};

struct [[deprecated("KnownPerceptionColorFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] KnownPerceptionColorFrameSourceProperties
{
    KnownPerceptionColorFrameSourceProperties() = delete;
    [[deprecated("KnownPerceptionColorFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] static hstring Exposure();
    [[deprecated("KnownPerceptionColorFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] static hstring AutoExposureEnabled();
    [[deprecated("KnownPerceptionColorFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] static hstring ExposureCompensation();
};

struct [[deprecated("KnownPerceptionDepthFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] KnownPerceptionDepthFrameSourceProperties
{
    KnownPerceptionDepthFrameSourceProperties() = delete;
    [[deprecated("KnownPerceptionDepthFrameSourceProperties may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.DepthMediaFrame instead.")]] static hstring MinDepth();
    [[deprecated("KnownPerceptionDepthFrameSourceProperties may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.DepthMediaFrame instead.")]] static hstring MaxDepth();
};

struct [[deprecated("KnownPerceptionFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] KnownPerceptionFrameSourceProperties
{
    KnownPerceptionFrameSourceProperties() = delete;
    [[deprecated("KnownPerceptionFrameSourceProperties may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation instead.")]] static hstring Id();
    [[deprecated("KnownPerceptionFrameSourceProperties may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation instead.")]] static hstring PhysicalDeviceIds();
    [[deprecated("KnownPerceptionFrameSourceProperties may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation instead.")]] static hstring FrameKind();
    [[deprecated("KnownPerceptionFrameSourceProperties may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation instead.")]] static hstring DeviceModelVersion();
    [[deprecated("KnownPerceptionFrameSourceProperties may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation instead.")]] static hstring EnclosureLocation();
    [[deprecated("KnownPerceptionFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] static hstring DeviceId();
};

struct [[deprecated("KnownPerceptionInfraredFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] KnownPerceptionInfraredFrameSourceProperties
{
    KnownPerceptionInfraredFrameSourceProperties() = delete;
    [[deprecated("KnownPerceptionInfraredFrameSourceProperties.Exposure may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.ExposureControl instead.")]] static hstring Exposure();
    [[deprecated("KnownPerceptionInfraredFrameSourceProperties.AutoExposureEnabled may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.ExposureControl.Auto instead.")]] static hstring AutoExposureEnabled();
    [[deprecated("KnownPerceptionInfraredFrameSourceProperties.ExposureCompensation may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.ExposureCompensationControl instead.")]] static hstring ExposureCompensation();
    [[deprecated("KnownPerceptionInfraredFrameSourceProperties.ActiveIlluminationEnabled may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] static hstring ActiveIlluminationEnabled();
    [[deprecated("KnownPerceptionInfraredFrameSourceProperties.AmbientSubtractionEnabled may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] static hstring AmbientSubtractionEnabled();
    [[deprecated("KnownPerceptionInfraredFrameSourceProperties.StructureLightPatternEnabled may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] static hstring StructureLightPatternEnabled();
    [[deprecated("KnownPerceptionInfraredFrameSourceProperties.InterleavedIlluminationEnabled may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] static hstring InterleavedIlluminationEnabled();
};

struct [[deprecated("KnownPerceptionVideoFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] KnownPerceptionVideoFrameSourceProperties
{
    KnownPerceptionVideoFrameSourceProperties() = delete;
    [[deprecated("KnownPerceptionVideoFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] static hstring VideoProfile();
    [[deprecated("KnownPerceptionVideoFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] static hstring SupportedVideoProfiles();
    [[deprecated("KnownPerceptionVideoFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] static hstring AvailableVideoProfiles();
    [[deprecated("KnownPerceptionVideoFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] static hstring IsMirrored();
    [[deprecated("KnownPerceptionVideoFrameSourceProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] static hstring CameraIntrinsics();
};

struct [[deprecated("KnownPerceptionVideoProfileProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] KnownPerceptionVideoProfileProperties
{
    KnownPerceptionVideoProfileProperties() = delete;
    [[deprecated("KnownPerceptionVideoProfileProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] static hstring BitmapPixelFormat();
    [[deprecated("KnownPerceptionVideoProfileProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] static hstring BitmapAlphaMode();
    [[deprecated("KnownPerceptionVideoProfileProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] static hstring Width();
    [[deprecated("KnownPerceptionVideoProfileProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] static hstring Height();
    [[deprecated("KnownPerceptionVideoProfileProperties may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] static hstring FrameDuration();
};

struct WINRT_EBO [[deprecated("PerceptionColorFrame may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.VideoMediaFrame instead.")]] PerceptionColorFrame :
    Windows::Devices::Perception::IPerceptionColorFrame
{
    PerceptionColorFrame(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionColorFrameArrivedEventArgs may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs instead.")]] PerceptionColorFrameArrivedEventArgs :
    Windows::Devices::Perception::IPerceptionColorFrameArrivedEventArgs
{
    PerceptionColorFrameArrivedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionColorFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")]] PerceptionColorFrameReader :
    Windows::Devices::Perception::IPerceptionColorFrameReader
{
    PerceptionColorFrameReader(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionColorFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Frames.MediaFrameSource instead.")]] PerceptionColorFrameSource :
    Windows::Devices::Perception::IPerceptionColorFrameSource,
    impl::require<PerceptionColorFrameSource, Windows::Devices::Perception::IPerceptionColorFrameSource2>
{
    PerceptionColorFrameSource(std::nullptr_t) noexcept {}
    [[deprecated("PerceptionColorFrameSource.CreateWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.CreateWatcher instead.")]] static Windows::Devices::Perception::PerceptionColorFrameSourceWatcher CreateWatcher();
    [[deprecated("PerceptionColorFrameSource.FindAllAsync may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.FindAllAsync instead.")]] static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionColorFrameSource>> FindAllAsync();
    [[deprecated("PerceptionColorFrameSource.FromIdAsync may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.FromIdAsync instead.")]] static Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionColorFrameSource> FromIdAsync(param::hstring const& id);
    [[deprecated("PerceptionColorFrameSource.RequestAccessAsync may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] static Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> RequestAccessAsync();
};

struct WINRT_EBO [[deprecated("PerceptionColorFrameSourceAddedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] PerceptionColorFrameSourceAddedEventArgs :
    Windows::Devices::Perception::IPerceptionColorFrameSourceAddedEventArgs
{
    PerceptionColorFrameSourceAddedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionColorFrameSourceRemovedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] PerceptionColorFrameSourceRemovedEventArgs :
    Windows::Devices::Perception::IPerceptionColorFrameSourceRemovedEventArgs
{
    PerceptionColorFrameSourceRemovedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionColorFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] PerceptionColorFrameSourceWatcher :
    Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher
{
    PerceptionColorFrameSourceWatcher(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionControlSession may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] PerceptionControlSession :
    Windows::Devices::Perception::IPerceptionControlSession
{
    PerceptionControlSession(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionDepthCorrelatedCameraIntrinsics may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper instead.")]] PerceptionDepthCorrelatedCameraIntrinsics :
    Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics
{
    PerceptionDepthCorrelatedCameraIntrinsics(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionDepthCorrelatedCoordinateMapper may be unavailable after Windows Creator Update.  Use Windows.Media.Devices.Core.DepthCorrelatedCoordinateMapper instead.")]] PerceptionDepthCorrelatedCoordinateMapper :
    Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper
{
    PerceptionDepthCorrelatedCoordinateMapper(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionDepthFrame may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.DepthMediaFrame instead.")]] PerceptionDepthFrame :
    Windows::Devices::Perception::IPerceptionDepthFrame
{
    PerceptionDepthFrame(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionDepthFrameArrivedEventArgs may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs instead.")]] PerceptionDepthFrameArrivedEventArgs :
    Windows::Devices::Perception::IPerceptionDepthFrameArrivedEventArgs
{
    PerceptionDepthFrameArrivedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionDepthFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")]] PerceptionDepthFrameReader :
    Windows::Devices::Perception::IPerceptionDepthFrameReader
{
    PerceptionDepthFrameReader(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionDepthFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Frames.MediaFrameSource instead.")]] PerceptionDepthFrameSource :
    Windows::Devices::Perception::IPerceptionDepthFrameSource,
    impl::require<PerceptionDepthFrameSource, Windows::Devices::Perception::IPerceptionDepthFrameSource2>
{
    PerceptionDepthFrameSource(std::nullptr_t) noexcept {}
    [[deprecated("PerceptionDepthFrameSource.CreateWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.CreateWatcher instead.")]] static Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher CreateWatcher();
    [[deprecated("PerceptionDepthFrameSource.FindAllAsync may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.FindAllAsync instead.")]] static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionDepthFrameSource>> FindAllAsync();
    [[deprecated("PerceptionDepthFrameSource.FromIdAsync may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.FromIdAsync instead.")]] static Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthFrameSource> FromIdAsync(param::hstring const& id);
    [[deprecated("PerceptionDepthFrameSource.RequestAccessAsync may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] static Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> RequestAccessAsync();
};

struct WINRT_EBO [[deprecated("PerceptionDepthFrameSourceAddedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] PerceptionDepthFrameSourceAddedEventArgs :
    Windows::Devices::Perception::IPerceptionDepthFrameSourceAddedEventArgs
{
    PerceptionDepthFrameSourceAddedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionDepthFrameSourceRemovedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] PerceptionDepthFrameSourceRemovedEventArgs :
    Windows::Devices::Perception::IPerceptionDepthFrameSourceRemovedEventArgs
{
    PerceptionDepthFrameSourceRemovedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionDepthFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] PerceptionDepthFrameSourceWatcher :
    Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher
{
    PerceptionDepthFrameSourceWatcher(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionFrameSourcePropertiesChangedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] PerceptionFrameSourcePropertiesChangedEventArgs :
    Windows::Devices::Perception::IPerceptionFrameSourcePropertiesChangedEventArgs
{
    PerceptionFrameSourcePropertiesChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionFrameSourcePropertyChangeResult may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] PerceptionFrameSourcePropertyChangeResult :
    Windows::Devices::Perception::IPerceptionFrameSourcePropertyChangeResult
{
    PerceptionFrameSourcePropertyChangeResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionInfraredFrame may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.InfraredMediaFrame instead.")]] PerceptionInfraredFrame :
    Windows::Devices::Perception::IPerceptionInfraredFrame
{
    PerceptionInfraredFrame(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionInfraredFrameArrivedEventArgs may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs instead.")]] PerceptionInfraredFrameArrivedEventArgs :
    Windows::Devices::Perception::IPerceptionInfraredFrameArrivedEventArgs
{
    PerceptionInfraredFrameArrivedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionInfraredFrameReader may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameReader instead.")]] PerceptionInfraredFrameReader :
    Windows::Devices::Perception::IPerceptionInfraredFrameReader
{
    PerceptionInfraredFrameReader(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionInfraredFrameSource may be unavailable after Windows Creator Update.  Use Windows.Media.Frames.MediaFrameSource instead.")]] PerceptionInfraredFrameSource :
    Windows::Devices::Perception::IPerceptionInfraredFrameSource,
    impl::require<PerceptionInfraredFrameSource, Windows::Devices::Perception::IPerceptionInfraredFrameSource2>
{
    PerceptionInfraredFrameSource(std::nullptr_t) noexcept {}
    [[deprecated("PerceptionInfraredFrameSource.CreateWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.CreateWatcher instead.")]] static Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher CreateWatcher();
    [[deprecated("PerceptionInfraredFrameSource.FindAllAsync may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.FindAllAsync instead.")]] static Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionInfraredFrameSource>> FindAllAsync();
    [[deprecated("PerceptionInfraredFrameSource.FromIdAsync may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceInformation.FromIdAsync instead.")]] static Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionInfraredFrameSource> FromIdAsync(param::hstring const& id);
    [[deprecated("PerceptionInfraredFrameSource.RequestAccessAsync may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] static Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> RequestAccessAsync();
};

struct WINRT_EBO [[deprecated("PerceptionInfraredFrameSourceAddedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] PerceptionInfraredFrameSourceAddedEventArgs :
    Windows::Devices::Perception::IPerceptionInfraredFrameSourceAddedEventArgs
{
    PerceptionInfraredFrameSourceAddedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionInfraredFrameSourceRemovedEventArgs may be unavailable after Windows Creator Update.  Please refer to Windows.Media.Capture.Frames APIs on MSDN.")]] PerceptionInfraredFrameSourceRemovedEventArgs :
    Windows::Devices::Perception::IPerceptionInfraredFrameSourceRemovedEventArgs
{
    PerceptionInfraredFrameSourceRemovedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionInfraredFrameSourceWatcher may be unavailable after Windows Creator Update.  Use Windows.Devices.Enumeration.DeviceWatcher instead.")]] PerceptionInfraredFrameSourceWatcher :
    Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher
{
    PerceptionInfraredFrameSourceWatcher(std::nullptr_t) noexcept {}
};

struct WINRT_EBO [[deprecated("PerceptionVideoProfile may be unavailable after Windows Creator Update.  Use Windows.Media.Capture.Frames.MediaFrameFormat instead.")]] PerceptionVideoProfile :
    Windows::Devices::Perception::IPerceptionVideoProfile
{
    PerceptionVideoProfile(std::nullptr_t) noexcept {}
};

}
