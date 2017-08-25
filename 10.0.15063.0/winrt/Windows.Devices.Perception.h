// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Devices.Enumeration.2.h"
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.Media.2.h"
#include "winrt/impl/Windows.Media.Devices.Core.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Devices.Perception.2.h"
#include "winrt/Windows.Devices.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Devices_Perception_IKnownCameraIntrinsicsPropertiesStatics<D>::FocalLength() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics)->get_FocalLength(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownCameraIntrinsicsPropertiesStatics<D>::PrincipalPoint() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics)->get_PrincipalPoint(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownCameraIntrinsicsPropertiesStatics<D>::RadialDistortion() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics)->get_RadialDistortion(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownCameraIntrinsicsPropertiesStatics<D>::TangentialDistortion() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics)->get_TangentialDistortion(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionColorFrameSourcePropertiesStatics<D>::Exposure() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics)->get_Exposure(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionColorFrameSourcePropertiesStatics<D>::AutoExposureEnabled() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics)->get_AutoExposureEnabled(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionColorFrameSourcePropertiesStatics<D>::ExposureCompensation() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics)->get_ExposureCompensation(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionDepthFrameSourcePropertiesStatics<D>::MinDepth() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics)->get_MinDepth(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionDepthFrameSourcePropertiesStatics<D>::MaxDepth() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics)->get_MaxDepth(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionFrameSourcePropertiesStatics<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionFrameSourcePropertiesStatics<D>::PhysicalDeviceIds() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics)->get_PhysicalDeviceIds(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionFrameSourcePropertiesStatics<D>::FrameKind() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics)->get_FrameKind(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionFrameSourcePropertiesStatics<D>::DeviceModelVersion() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics)->get_DeviceModelVersion(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionFrameSourcePropertiesStatics<D>::EnclosureLocation() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics)->get_EnclosureLocation(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionFrameSourcePropertiesStatics2<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics2)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionInfraredFrameSourcePropertiesStatics<D>::Exposure() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics)->get_Exposure(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionInfraredFrameSourcePropertiesStatics<D>::AutoExposureEnabled() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics)->get_AutoExposureEnabled(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionInfraredFrameSourcePropertiesStatics<D>::ExposureCompensation() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics)->get_ExposureCompensation(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionInfraredFrameSourcePropertiesStatics<D>::ActiveIlluminationEnabled() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics)->get_ActiveIlluminationEnabled(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionInfraredFrameSourcePropertiesStatics<D>::AmbientSubtractionEnabled() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics)->get_AmbientSubtractionEnabled(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionInfraredFrameSourcePropertiesStatics<D>::StructureLightPatternEnabled() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics)->get_StructureLightPatternEnabled(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionInfraredFrameSourcePropertiesStatics<D>::InterleavedIlluminationEnabled() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics)->get_InterleavedIlluminationEnabled(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionVideoFrameSourcePropertiesStatics<D>::VideoProfile() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics)->get_VideoProfile(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionVideoFrameSourcePropertiesStatics<D>::SupportedVideoProfiles() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics)->get_SupportedVideoProfiles(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionVideoFrameSourcePropertiesStatics<D>::AvailableVideoProfiles() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics)->get_AvailableVideoProfiles(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionVideoFrameSourcePropertiesStatics<D>::IsMirrored() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics)->get_IsMirrored(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionVideoFrameSourcePropertiesStatics<D>::CameraIntrinsics() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics)->get_CameraIntrinsics(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionVideoProfilePropertiesStatics<D>::BitmapPixelFormat() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics)->get_BitmapPixelFormat(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionVideoProfilePropertiesStatics<D>::BitmapAlphaMode() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics)->get_BitmapAlphaMode(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionVideoProfilePropertiesStatics<D>::Width() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics)->get_Width(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionVideoProfilePropertiesStatics<D>::Height() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics)->get_Height(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IKnownPerceptionVideoProfilePropertiesStatics<D>::FrameDuration() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics)->get_FrameDuration(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::VideoFrame consume_Windows_Devices_Perception_IPerceptionColorFrame<D>::VideoFrame() const
{
    Windows::Media::VideoFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrame)->get_VideoFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_Perception_IPerceptionColorFrameArrivedEventArgs<D>::RelativeTime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameArrivedEventArgs)->get_RelativeTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionColorFrame consume_Windows_Devices_Perception_IPerceptionColorFrameArrivedEventArgs<D>::TryOpenFrame() const
{
    Windows::Devices::Perception::PerceptionColorFrame result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameArrivedEventArgs)->TryOpenFrame(put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionColorFrameReader<D>::FrameArrived(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameReader, Windows::Devices::Perception::PerceptionColorFrameArrivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameReader)->add_FrameArrived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionColorFrameReader> consume_Windows_Devices_Perception_IPerceptionColorFrameReader<D>::FrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameReader, Windows::Devices::Perception::PerceptionColorFrameArrivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionColorFrameReader>(this, &abi_t<Windows::Devices::Perception::IPerceptionColorFrameReader>::remove_FrameArrived, FrameArrived(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionColorFrameReader<D>::FrameArrived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameReader)->remove_FrameArrived(get_abi(token)));
}

template <typename D> Windows::Devices::Perception::PerceptionColorFrameSource consume_Windows_Devices_Perception_IPerceptionColorFrameReader<D>::Source() const
{
    Windows::Devices::Perception::PerceptionColorFrameSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameReader)->get_Source(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionColorFrameReader<D>::IsPaused() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameReader)->get_IsPaused(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionColorFrameReader<D>::IsPaused(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameReader)->put_IsPaused(value));
}

template <typename D> Windows::Devices::Perception::PerceptionColorFrame consume_Windows_Devices_Perception_IPerceptionColorFrameReader<D>::TryReadLatestFrame() const
{
    Windows::Devices::Perception::PerceptionColorFrame result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameReader)->TryReadLatestFrame(put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::AvailableChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->add_AvailableChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSource> consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::AvailableChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionColorFrameSource>(this, &abi_t<Windows::Devices::Perception::IPerceptionColorFrameSource>::remove_AvailableChanged, AvailableChanged(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::AvailableChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->remove_AvailableChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::ActiveChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->add_ActiveChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSource> consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::ActiveChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionColorFrameSource>(this, &abi_t<Windows::Devices::Perception::IPerceptionColorFrameSource>::remove_ActiveChanged, ActiveChanged(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::ActiveChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->remove_ActiveChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::PropertiesChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->add_PropertiesChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSource> consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::PropertiesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionColorFrameSource>(this, &abi_t<Windows::Devices::Perception::IPerceptionColorFrameSource>::remove_PropertiesChanged, PropertiesChanged(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::PropertiesChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->remove_PropertiesChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::VideoProfileChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->add_VideoProfileChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSource> consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::VideoProfileChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionColorFrameSource>(this, &abi_t<Windows::Devices::Perception::IPerceptionColorFrameSource>::remove_VideoProfileChanged, VideoProfileChanged(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::VideoProfileChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->remove_VideoProfileChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::CameraIntrinsicsChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->add_CameraIntrinsicsChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSource> consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::CameraIntrinsicsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionColorFrameSource>(this, &abi_t<Windows::Devices::Perception::IPerceptionColorFrameSource>::remove_CameraIntrinsicsChanged, CameraIntrinsicsChanged(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::CameraIntrinsicsChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->remove_CameraIntrinsicsChanged(get_abi(token)));
}

template <typename D> hstring consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::DeviceKind() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->get_DeviceKind(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::Available() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->get_Available(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::Active() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->get_Active(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::IsControlled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->get_IsControlled(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::SupportedVideoProfiles() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->get_SupportedVideoProfiles(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::AvailableVideoProfiles() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->get_AvailableVideoProfiles(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionVideoProfile consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::VideoProfile() const
{
    Windows::Devices::Perception::PerceptionVideoProfile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->get_VideoProfile(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::Core::CameraIntrinsics consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::CameraIntrinsics() const
{
    Windows::Media::Devices::Core::CameraIntrinsics value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->get_CameraIntrinsics(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionControlSession consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::AcquireControlSession() const
{
    Windows::Devices::Perception::PerceptionControlSession value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->AcquireControlSession(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::CanControlIndependentlyFrom(param::hstring const& targetId) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->CanControlIndependentlyFrom(get_abi(targetId), &result));
    return result;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::IsCorrelatedWith(param::hstring const& targetId) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->IsCorrelatedWith(get_abi(targetId), &result));
    return result;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::TryGetTransformTo(param::hstring const& targetId, Windows::Foundation::Numerics::float4x4& result) const
{
    bool hasResult{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->TryGetTransformTo(get_abi(targetId), put_abi(result), &hasResult));
    return hasResult;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics> consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::TryGetDepthCorrelatedCameraIntrinsicsAsync(Windows::Devices::Perception::PerceptionDepthFrameSource const& correlatedDepthFrameSource) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->TryGetDepthCorrelatedCameraIntrinsicsAsync(get_abi(correlatedDepthFrameSource), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper> consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::TryGetDepthCorrelatedCoordinateMapperAsync(param::hstring const& targetSourceId, Windows::Devices::Perception::PerceptionDepthFrameSource const& correlatedDepthFrameSource) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->TryGetDepthCorrelatedCoordinateMapperAsync(get_abi(targetSourceId), get_abi(correlatedDepthFrameSource), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::TrySetVideoProfileAsync(Windows::Devices::Perception::PerceptionControlSession const& controlSession, Windows::Devices::Perception::PerceptionVideoProfile const& profile) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->TrySetVideoProfileAsync(get_abi(controlSession), get_abi(profile), put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::Perception::PerceptionColorFrameReader consume_Windows_Devices_Perception_IPerceptionColorFrameSource<D>::OpenReader() const
{
    Windows::Devices::Perception::PerceptionColorFrameReader result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource)->OpenReader(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_Perception_IPerceptionColorFrameSource2<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSource2)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionColorFrameSource consume_Windows_Devices_Perception_IPerceptionColorFrameSourceAddedEventArgs<D>::FrameSource() const
{
    Windows::Devices::Perception::PerceptionColorFrameSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceAddedEventArgs)->get_FrameSource(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionColorFrameSource consume_Windows_Devices_Perception_IPerceptionColorFrameSourceRemovedEventArgs<D>::FrameSource() const
{
    Windows::Devices::Perception::PerceptionColorFrameSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceRemovedEventArgs)->get_FrameSource(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionColorFrameSourceWatcher consume_Windows_Devices_Perception_IPerceptionColorFrameSourceStatics<D>::CreateWatcher() const
{
    Windows::Devices::Perception::PerceptionColorFrameSourceWatcher watcher{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceStatics)->CreateWatcher(put_abi(watcher)));
    return watcher;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionColorFrameSource>> consume_Windows_Devices_Perception_IPerceptionColorFrameSourceStatics<D>::FindAllAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionColorFrameSource>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceStatics)->FindAllAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionColorFrameSource> consume_Windows_Devices_Perception_IPerceptionColorFrameSourceStatics<D>::FromIdAsync(param::hstring const& id) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionColorFrameSource> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceStatics)->FromIdAsync(get_abi(id), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> consume_Windows_Devices_Perception_IPerceptionColorFrameSourceStatics<D>::RequestAccessAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceStatics)->RequestAccessAsync(put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::SourceAdded(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceAddedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher)->add_SourceAdded(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher> consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::SourceAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceAddedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>(this, &abi_t<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>::remove_SourceAdded, SourceAdded(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::SourceAdded(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher)->remove_SourceAdded(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::SourceRemoved(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceRemovedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher)->add_SourceRemoved(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher> consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::SourceRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceRemovedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>(this, &abi_t<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>::remove_SourceRemoved, SourceRemoved(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::SourceRemoved(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher)->remove_SourceRemoved(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::Stopped(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher)->add_Stopped(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher> consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>(this, &abi_t<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>::remove_Stopped, Stopped(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::Stopped(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher)->remove_Stopped(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher)->add_EnumerationCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher> consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>(this, &abi_t<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>::remove_EnumerationCompleted, EnumerationCompleted(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::EnumerationCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher)->remove_EnumerationCompleted(get_abi(token)));
}

template <typename D> Windows::Devices::Enumeration::DeviceWatcherStatus consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::Status() const
{
    Windows::Devices::Enumeration::DeviceWatcherStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher)->get_Status(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher)->Start());
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionColorFrameSourceWatcher<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher)->Stop());
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionControlSession<D>::ControlLost(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionControlSession, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionControlSession)->add_ControlLost(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionControlSession> consume_Windows_Devices_Perception_IPerceptionControlSession<D>::ControlLost(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionControlSession, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionControlSession>(this, &abi_t<Windows::Devices::Perception::IPerceptionControlSession>::remove_ControlLost, ControlLost(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionControlSession<D>::ControlLost(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionControlSession)->remove_ControlLost(get_abi(token)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> consume_Windows_Devices_Perception_IPerceptionControlSession<D>::TrySetPropertyAsync(param::hstring const& name, Windows::Foundation::IInspectable const& value) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionControlSession)->TrySetPropertyAsync(get_abi(name), get_abi(value), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Numerics::float3 consume_Windows_Devices_Perception_IPerceptionDepthCorrelatedCameraIntrinsics<D>::UnprojectPixelAtCorrelatedDepth(Windows::Foundation::Point const& pixelCoordinate, Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame) const
{
    Windows::Foundation::Numerics::float3 result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics)->UnprojectPixelAtCorrelatedDepth(get_abi(pixelCoordinate), get_abi(depthFrame), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionDepthCorrelatedCameraIntrinsics<D>::UnprojectPixelsAtCorrelatedDepth(array_view<Windows::Foundation::Point const> sourceCoordinates, Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame, array_view<Windows::Foundation::Numerics::float3> results) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics)->UnprojectPixelsAtCorrelatedDepth(sourceCoordinates.size(), get_abi(sourceCoordinates), get_abi(depthFrame), results.size(), get_abi(results)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_Perception_IPerceptionDepthCorrelatedCameraIntrinsics<D>::UnprojectRegionPixelsAtCorrelatedDepthAsync(Windows::Foundation::Rect const& region, Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame, array_view<Windows::Foundation::Numerics::float3> results) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics)->UnprojectRegionPixelsAtCorrelatedDepthAsync(get_abi(region), get_abi(depthFrame), results.size(), get_abi(results), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_Perception_IPerceptionDepthCorrelatedCameraIntrinsics<D>::UnprojectAllPixelsAtCorrelatedDepthAsync(Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame, array_view<Windows::Foundation::Numerics::float3> results) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics)->UnprojectAllPixelsAtCorrelatedDepthAsync(get_abi(depthFrame), results.size(), get_abi(results), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::Point consume_Windows_Devices_Perception_IPerceptionDepthCorrelatedCoordinateMapper<D>::MapPixelToTarget(Windows::Foundation::Point const& sourcePixelCoordinate, Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame) const
{
    Windows::Foundation::Point result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper)->MapPixelToTarget(get_abi(sourcePixelCoordinate), get_abi(depthFrame), put_abi(result)));
    return result;
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionDepthCorrelatedCoordinateMapper<D>::MapPixelsToTarget(array_view<Windows::Foundation::Point const> sourceCoordinates, Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame, array_view<Windows::Foundation::Point> results) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper)->MapPixelsToTarget(sourceCoordinates.size(), get_abi(sourceCoordinates), get_abi(depthFrame), results.size(), get_abi(results)));
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_Perception_IPerceptionDepthCorrelatedCoordinateMapper<D>::MapRegionOfPixelsToTargetAsync(Windows::Foundation::Rect const& region, Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame, array_view<Windows::Foundation::Point> targetCoordinates) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper)->MapRegionOfPixelsToTargetAsync(get_abi(region), get_abi(depthFrame), targetCoordinates.size(), get_abi(targetCoordinates), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Devices_Perception_IPerceptionDepthCorrelatedCoordinateMapper<D>::MapAllPixelsToTargetAsync(Windows::Devices::Perception::PerceptionDepthFrame const& depthFrame, array_view<Windows::Foundation::Point> targetCoordinates) const
{
    Windows::Foundation::IAsyncAction result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper)->MapAllPixelsToTargetAsync(get_abi(depthFrame), targetCoordinates.size(), get_abi(targetCoordinates), put_abi(result)));
    return result;
}

template <typename D> Windows::Media::VideoFrame consume_Windows_Devices_Perception_IPerceptionDepthFrame<D>::VideoFrame() const
{
    Windows::Media::VideoFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrame)->get_VideoFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_Perception_IPerceptionDepthFrameArrivedEventArgs<D>::RelativeTime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameArrivedEventArgs)->get_RelativeTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionDepthFrame consume_Windows_Devices_Perception_IPerceptionDepthFrameArrivedEventArgs<D>::TryOpenFrame() const
{
    Windows::Devices::Perception::PerceptionDepthFrame result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameArrivedEventArgs)->TryOpenFrame(put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionDepthFrameReader<D>::FrameArrived(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameReader, Windows::Devices::Perception::PerceptionDepthFrameArrivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameReader)->add_FrameArrived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameReader> consume_Windows_Devices_Perception_IPerceptionDepthFrameReader<D>::FrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameReader, Windows::Devices::Perception::PerceptionDepthFrameArrivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionDepthFrameReader>(this, &abi_t<Windows::Devices::Perception::IPerceptionDepthFrameReader>::remove_FrameArrived, FrameArrived(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionDepthFrameReader<D>::FrameArrived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameReader)->remove_FrameArrived(get_abi(token)));
}

template <typename D> Windows::Devices::Perception::PerceptionDepthFrameSource consume_Windows_Devices_Perception_IPerceptionDepthFrameReader<D>::Source() const
{
    Windows::Devices::Perception::PerceptionDepthFrameSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameReader)->get_Source(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionDepthFrameReader<D>::IsPaused() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameReader)->get_IsPaused(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionDepthFrameReader<D>::IsPaused(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameReader)->put_IsPaused(value));
}

template <typename D> Windows::Devices::Perception::PerceptionDepthFrame consume_Windows_Devices_Perception_IPerceptionDepthFrameReader<D>::TryReadLatestFrame() const
{
    Windows::Devices::Perception::PerceptionDepthFrame result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameReader)->TryReadLatestFrame(put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::AvailableChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->add_AvailableChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSource> consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::AvailableChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionDepthFrameSource>(this, &abi_t<Windows::Devices::Perception::IPerceptionDepthFrameSource>::remove_AvailableChanged, AvailableChanged(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::AvailableChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->remove_AvailableChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::ActiveChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->add_ActiveChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSource> consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::ActiveChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionDepthFrameSource>(this, &abi_t<Windows::Devices::Perception::IPerceptionDepthFrameSource>::remove_ActiveChanged, ActiveChanged(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::ActiveChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->remove_ActiveChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::PropertiesChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->add_PropertiesChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSource> consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::PropertiesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionDepthFrameSource>(this, &abi_t<Windows::Devices::Perception::IPerceptionDepthFrameSource>::remove_PropertiesChanged, PropertiesChanged(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::PropertiesChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->remove_PropertiesChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::VideoProfileChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->add_VideoProfileChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSource> consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::VideoProfileChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionDepthFrameSource>(this, &abi_t<Windows::Devices::Perception::IPerceptionDepthFrameSource>::remove_VideoProfileChanged, VideoProfileChanged(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::VideoProfileChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->remove_VideoProfileChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::CameraIntrinsicsChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->add_CameraIntrinsicsChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSource> consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::CameraIntrinsicsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionDepthFrameSource>(this, &abi_t<Windows::Devices::Perception::IPerceptionDepthFrameSource>::remove_CameraIntrinsicsChanged, CameraIntrinsicsChanged(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::CameraIntrinsicsChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->remove_CameraIntrinsicsChanged(get_abi(token)));
}

template <typename D> hstring consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::DeviceKind() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->get_DeviceKind(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::Available() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->get_Available(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::Active() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->get_Active(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::IsControlled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->get_IsControlled(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::SupportedVideoProfiles() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->get_SupportedVideoProfiles(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::AvailableVideoProfiles() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->get_AvailableVideoProfiles(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionVideoProfile consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::VideoProfile() const
{
    Windows::Devices::Perception::PerceptionVideoProfile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->get_VideoProfile(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::Core::CameraIntrinsics consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::CameraIntrinsics() const
{
    Windows::Media::Devices::Core::CameraIntrinsics value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->get_CameraIntrinsics(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionControlSession consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::AcquireControlSession() const
{
    Windows::Devices::Perception::PerceptionControlSession result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->AcquireControlSession(put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::CanControlIndependentlyFrom(param::hstring const& targetId) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->CanControlIndependentlyFrom(get_abi(targetId), &result));
    return result;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::IsCorrelatedWith(param::hstring const& targetId) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->IsCorrelatedWith(get_abi(targetId), &result));
    return result;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::TryGetTransformTo(param::hstring const& targetId, Windows::Foundation::Numerics::float4x4& result) const
{
    bool hasResult{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->TryGetTransformTo(get_abi(targetId), put_abi(result), &hasResult));
    return hasResult;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics> consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::TryGetDepthCorrelatedCameraIntrinsicsAsync(Windows::Devices::Perception::PerceptionDepthFrameSource const& target) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->TryGetDepthCorrelatedCameraIntrinsicsAsync(get_abi(target), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper> consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::TryGetDepthCorrelatedCoordinateMapperAsync(param::hstring const& targetId, Windows::Devices::Perception::PerceptionDepthFrameSource const& depthFrameSourceToMapWith) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->TryGetDepthCorrelatedCoordinateMapperAsync(get_abi(targetId), get_abi(depthFrameSourceToMapWith), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::TrySetVideoProfileAsync(Windows::Devices::Perception::PerceptionControlSession const& controlSession, Windows::Devices::Perception::PerceptionVideoProfile const& profile) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->TrySetVideoProfileAsync(get_abi(controlSession), get_abi(profile), put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::Perception::PerceptionDepthFrameReader consume_Windows_Devices_Perception_IPerceptionDepthFrameSource<D>::OpenReader() const
{
    Windows::Devices::Perception::PerceptionDepthFrameReader result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource)->OpenReader(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_Perception_IPerceptionDepthFrameSource2<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSource2)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionDepthFrameSource consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceAddedEventArgs<D>::FrameSource() const
{
    Windows::Devices::Perception::PerceptionDepthFrameSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceAddedEventArgs)->get_FrameSource(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionDepthFrameSource consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceRemovedEventArgs<D>::FrameSource() const
{
    Windows::Devices::Perception::PerceptionDepthFrameSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceRemovedEventArgs)->get_FrameSource(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceStatics<D>::CreateWatcher() const
{
    Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher watcher{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics)->CreateWatcher(put_abi(watcher)));
    return watcher;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionDepthFrameSource>> consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceStatics<D>::FindAllAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionDepthFrameSource>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics)->FindAllAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthFrameSource> consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceStatics<D>::FromIdAsync(param::hstring const& id) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthFrameSource> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics)->FromIdAsync(get_abi(id), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceStatics<D>::RequestAccessAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics)->RequestAccessAsync(put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::SourceAdded(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceAddedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher)->add_SourceAdded(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher> consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::SourceAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceAddedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>(this, &abi_t<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>::remove_SourceAdded, SourceAdded(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::SourceAdded(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher)->remove_SourceAdded(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::SourceRemoved(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceRemovedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher)->add_SourceRemoved(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher> consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::SourceRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceRemovedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>(this, &abi_t<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>::remove_SourceRemoved, SourceRemoved(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::SourceRemoved(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher)->remove_SourceRemoved(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::Stopped(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher)->add_Stopped(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher> consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>(this, &abi_t<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>::remove_Stopped, Stopped(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::Stopped(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher)->remove_Stopped(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher)->add_EnumerationCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher> consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>(this, &abi_t<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>::remove_EnumerationCompleted, EnumerationCompleted(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::EnumerationCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher)->remove_EnumerationCompleted(get_abi(token)));
}

template <typename D> Windows::Devices::Enumeration::DeviceWatcherStatus consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::Status() const
{
    Windows::Devices::Enumeration::DeviceWatcherStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher)->get_Status(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher)->Start());
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionDepthFrameSourceWatcher<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher)->Stop());
}

template <typename D> Windows::Foundation::Collections::CollectionChange consume_Windows_Devices_Perception_IPerceptionFrameSourcePropertiesChangedEventArgs<D>::CollectionChange() const
{
    Windows::Foundation::Collections::CollectionChange value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionFrameSourcePropertiesChangedEventArgs)->get_CollectionChange(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IPerceptionFrameSourcePropertiesChangedEventArgs<D>::Key() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionFrameSourcePropertiesChangedEventArgs)->get_Key(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus consume_Windows_Devices_Perception_IPerceptionFrameSourcePropertyChangeResult<D>::Status() const
{
    Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionFrameSourcePropertyChangeResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Devices_Perception_IPerceptionFrameSourcePropertyChangeResult<D>::NewValue() const
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionFrameSourcePropertyChangeResult)->get_NewValue(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::VideoFrame consume_Windows_Devices_Perception_IPerceptionInfraredFrame<D>::VideoFrame() const
{
    Windows::Media::VideoFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrame)->get_VideoFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_Perception_IPerceptionInfraredFrameArrivedEventArgs<D>::RelativeTime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameArrivedEventArgs)->get_RelativeTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionInfraredFrame consume_Windows_Devices_Perception_IPerceptionInfraredFrameArrivedEventArgs<D>::TryOpenFrame() const
{
    Windows::Devices::Perception::PerceptionInfraredFrame result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameArrivedEventArgs)->TryOpenFrame(put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionInfraredFrameReader<D>::FrameArrived(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameReader, Windows::Devices::Perception::PerceptionInfraredFrameArrivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameReader)->add_FrameArrived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameReader> consume_Windows_Devices_Perception_IPerceptionInfraredFrameReader<D>::FrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameReader, Windows::Devices::Perception::PerceptionInfraredFrameArrivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionInfraredFrameReader>(this, &abi_t<Windows::Devices::Perception::IPerceptionInfraredFrameReader>::remove_FrameArrived, FrameArrived(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionInfraredFrameReader<D>::FrameArrived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameReader)->remove_FrameArrived(get_abi(token)));
}

template <typename D> Windows::Devices::Perception::PerceptionInfraredFrameSource consume_Windows_Devices_Perception_IPerceptionInfraredFrameReader<D>::Source() const
{
    Windows::Devices::Perception::PerceptionInfraredFrameSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameReader)->get_Source(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionInfraredFrameReader<D>::IsPaused() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameReader)->get_IsPaused(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionInfraredFrameReader<D>::IsPaused(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameReader)->put_IsPaused(value));
}

template <typename D> Windows::Devices::Perception::PerceptionInfraredFrame consume_Windows_Devices_Perception_IPerceptionInfraredFrameReader<D>::TryReadLatestFrame() const
{
    Windows::Devices::Perception::PerceptionInfraredFrame result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameReader)->TryReadLatestFrame(put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::AvailableChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->add_AvailableChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSource> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::AvailableChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionInfraredFrameSource>(this, &abi_t<Windows::Devices::Perception::IPerceptionInfraredFrameSource>::remove_AvailableChanged, AvailableChanged(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::AvailableChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->remove_AvailableChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::ActiveChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->add_ActiveChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSource> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::ActiveChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionInfraredFrameSource>(this, &abi_t<Windows::Devices::Perception::IPerceptionInfraredFrameSource>::remove_ActiveChanged, ActiveChanged(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::ActiveChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->remove_ActiveChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::PropertiesChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->add_PropertiesChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSource> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::PropertiesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionInfraredFrameSource>(this, &abi_t<Windows::Devices::Perception::IPerceptionInfraredFrameSource>::remove_PropertiesChanged, PropertiesChanged(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::PropertiesChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->remove_PropertiesChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::VideoProfileChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->add_VideoProfileChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSource> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::VideoProfileChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionInfraredFrameSource>(this, &abi_t<Windows::Devices::Perception::IPerceptionInfraredFrameSource>::remove_VideoProfileChanged, VideoProfileChanged(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::VideoProfileChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->remove_VideoProfileChanged(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::CameraIntrinsicsChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->add_CameraIntrinsicsChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSource> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::CameraIntrinsicsChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionInfraredFrameSource>(this, &abi_t<Windows::Devices::Perception::IPerceptionInfraredFrameSource>::remove_CameraIntrinsicsChanged, CameraIntrinsicsChanged(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::CameraIntrinsicsChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->remove_CameraIntrinsicsChanged(get_abi(token)));
}

template <typename D> hstring consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::Id() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::DisplayName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::DeviceKind() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->get_DeviceKind(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::Available() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->get_Available(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::Active() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->get_Active(&value));
    return value;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::IsControlled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->get_IsControlled(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::Foundation::IInspectable> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::SupportedVideoProfiles() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->get_SupportedVideoProfiles(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::AvailableVideoProfiles() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->get_AvailableVideoProfiles(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionVideoProfile consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::VideoProfile() const
{
    Windows::Devices::Perception::PerceptionVideoProfile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->get_VideoProfile(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::Core::CameraIntrinsics consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::CameraIntrinsics() const
{
    Windows::Media::Devices::Core::CameraIntrinsics value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->get_CameraIntrinsics(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionControlSession consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::AcquireControlSession() const
{
    Windows::Devices::Perception::PerceptionControlSession result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->AcquireControlSession(put_abi(result)));
    return result;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::CanControlIndependentlyFrom(param::hstring const& targetId) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->CanControlIndependentlyFrom(get_abi(targetId), &result));
    return result;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::IsCorrelatedWith(param::hstring const& targetId) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->IsCorrelatedWith(get_abi(targetId), &result));
    return result;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::TryGetTransformTo(param::hstring const& targetId, Windows::Foundation::Numerics::float4x4& result) const
{
    bool hasResult{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->TryGetTransformTo(get_abi(targetId), put_abi(result), &hasResult));
    return hasResult;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::TryGetDepthCorrelatedCameraIntrinsicsAsync(Windows::Devices::Perception::PerceptionDepthFrameSource const& target) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->TryGetDepthCorrelatedCameraIntrinsicsAsync(get_abi(target), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::TryGetDepthCorrelatedCoordinateMapperAsync(param::hstring const& targetId, Windows::Devices::Perception::PerceptionDepthFrameSource const& depthFrameSourceToMapWith) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->TryGetDepthCorrelatedCoordinateMapperAsync(get_abi(targetId), get_abi(depthFrameSourceToMapWith), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::TrySetVideoProfileAsync(Windows::Devices::Perception::PerceptionControlSession const& controlSession, Windows::Devices::Perception::PerceptionVideoProfile const& profile) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->TrySetVideoProfileAsync(get_abi(controlSession), get_abi(profile), put_abi(result)));
    return result;
}

template <typename D> Windows::Devices::Perception::PerceptionInfraredFrameReader consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource<D>::OpenReader() const
{
    Windows::Devices::Perception::PerceptionInfraredFrameReader result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource)->OpenReader(put_abi(result)));
    return result;
}

template <typename D> hstring consume_Windows_Devices_Perception_IPerceptionInfraredFrameSource2<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSource2)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionInfraredFrameSource consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceAddedEventArgs<D>::FrameSource() const
{
    Windows::Devices::Perception::PerceptionInfraredFrameSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceAddedEventArgs)->get_FrameSource(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionInfraredFrameSource consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceRemovedEventArgs<D>::FrameSource() const
{
    Windows::Devices::Perception::PerceptionInfraredFrameSource value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceRemovedEventArgs)->get_FrameSource(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceStatics<D>::CreateWatcher() const
{
    Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher watcher{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics)->CreateWatcher(put_abi(watcher)));
    return watcher;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionInfraredFrameSource>> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceStatics<D>::FindAllAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionInfraredFrameSource>> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics)->FindAllAsync(put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionInfraredFrameSource> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceStatics<D>::FromIdAsync(param::hstring const& id) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionInfraredFrameSource> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics)->FromIdAsync(get_abi(id), put_abi(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceStatics<D>::RequestAccessAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> result{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics)->RequestAccessAsync(put_abi(result)));
    return result;
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::SourceAdded(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceAddedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher)->add_SourceAdded(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::SourceAdded(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceAddedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>(this, &abi_t<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>::remove_SourceAdded, SourceAdded(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::SourceAdded(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher)->remove_SourceAdded(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::SourceRemoved(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceRemovedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher)->add_SourceRemoved(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::SourceRemoved(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceRemovedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>(this, &abi_t<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>::remove_SourceRemoved, SourceRemoved(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::SourceRemoved(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher)->remove_SourceRemoved(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::Stopped(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher)->add_Stopped(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::Stopped(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>(this, &abi_t<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>::remove_Stopped, Stopped(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::Stopped(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher)->remove_Stopped(get_abi(token)));
}

template <typename D> event_token consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::EnumerationCompleted(Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher)->add_EnumerationCompleted(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher> consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::EnumerationCompleted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>(this, &abi_t<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>::remove_EnumerationCompleted, EnumerationCompleted(handler));
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::EnumerationCompleted(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher)->remove_EnumerationCompleted(get_abi(token)));
}

template <typename D> Windows::Devices::Enumeration::DeviceWatcherStatus consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::Status() const
{
    Windows::Devices::Enumeration::DeviceWatcherStatus value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher)->get_Status(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::Start() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher)->Start());
}

template <typename D> void consume_Windows_Devices_Perception_IPerceptionInfraredFrameSourceWatcher<D>::Stop() const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher)->Stop());
}

template <typename D> Windows::Graphics::Imaging::BitmapPixelFormat consume_Windows_Devices_Perception_IPerceptionVideoProfile<D>::BitmapPixelFormat() const
{
    Windows::Graphics::Imaging::BitmapPixelFormat value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionVideoProfile)->get_BitmapPixelFormat(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::BitmapAlphaMode consume_Windows_Devices_Perception_IPerceptionVideoProfile<D>::BitmapAlphaMode() const
{
    Windows::Graphics::Imaging::BitmapAlphaMode value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionVideoProfile)->get_BitmapAlphaMode(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Perception_IPerceptionVideoProfile<D>::Width() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionVideoProfile)->get_Width(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Devices_Perception_IPerceptionVideoProfile<D>::Height() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionVideoProfile)->get_Height(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_Perception_IPerceptionVideoProfile<D>::FrameDuration() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionVideoProfile)->get_FrameDuration(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Perception_IPerceptionVideoProfile<D>::IsEqual(Windows::Devices::Perception::PerceptionVideoProfile const& other) const
{
    bool result{};
    check_hresult(WINRT_SHIM(Windows::Devices::Perception::IPerceptionVideoProfile)->IsEqual(get_abi(other), &result));
    return result;
}

template <typename D>
struct produce<D, Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics> : produce_base<D, Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics>
{
    HRESULT __stdcall get_FocalLength(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FocalLength());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PrincipalPoint(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PrincipalPoint());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RadialDistortion(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RadialDistortion());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TangentialDistortion(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TangentialDistortion());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics> : produce_base<D, Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics>
{
    HRESULT __stdcall get_Exposure(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Exposure());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoExposureEnabled(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AutoExposureEnabled());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExposureCompensation(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExposureCompensation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics> : produce_base<D, Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics>
{
    HRESULT __stdcall get_MinDepth(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MinDepth());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxDepth(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxDepth());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics> : produce_base<D, Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics>
{
    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhysicalDeviceIds(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PhysicalDeviceIds());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FrameKind(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FrameKind());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceModelVersion(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceModelVersion());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EnclosureLocation(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EnclosureLocation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics2> : produce_base<D, Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics2>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics> : produce_base<D, Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics>
{
    HRESULT __stdcall get_Exposure(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Exposure());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoExposureEnabled(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AutoExposureEnabled());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExposureCompensation(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExposureCompensation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ActiveIlluminationEnabled(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ActiveIlluminationEnabled());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AmbientSubtractionEnabled(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AmbientSubtractionEnabled());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StructureLightPatternEnabled(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StructureLightPatternEnabled());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InterleavedIlluminationEnabled(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InterleavedIlluminationEnabled());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics> : produce_base<D, Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics>
{
    HRESULT __stdcall get_VideoProfile(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoProfile());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedVideoProfiles(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedVideoProfiles());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AvailableVideoProfiles(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AvailableVideoProfiles());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsMirrored(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsMirrored());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CameraIntrinsics(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CameraIntrinsics());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics> : produce_base<D, Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics>
{
    HRESULT __stdcall get_BitmapPixelFormat(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BitmapPixelFormat());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BitmapAlphaMode(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BitmapAlphaMode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Width(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Width());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Height(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Height());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FrameDuration(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FrameDuration());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionColorFrame> : produce_base<D, Windows::Devices::Perception::IPerceptionColorFrame>
{
    HRESULT __stdcall get_VideoFrame(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoFrame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionColorFrameArrivedEventArgs> : produce_base<D, Windows::Devices::Perception::IPerceptionColorFrameArrivedEventArgs>
{
    HRESULT __stdcall get_RelativeTime(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RelativeTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryOpenFrame(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryOpenFrame());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionColorFrameReader> : produce_base<D, Windows::Devices::Perception::IPerceptionColorFrameReader>
{
    HRESULT __stdcall add_FrameArrived(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().FrameArrived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameReader, Windows::Devices::Perception::PerceptionColorFrameArrivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_FrameArrived(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FrameArrived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPaused(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsPaused());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsPaused(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsPaused(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryReadLatestFrame(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryReadLatestFrame());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionColorFrameSource> : produce_base<D, Windows::Devices::Perception::IPerceptionColorFrameSource>
{
    HRESULT __stdcall add_AvailableChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().AvailableChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AvailableChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AvailableChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ActiveChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ActiveChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ActiveChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ActiveChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PropertiesChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PropertiesChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PropertiesChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PropertiesChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_VideoProfileChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().VideoProfileChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_VideoProfileChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoProfileChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CameraIntrinsicsChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().CameraIntrinsicsChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CameraIntrinsicsChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CameraIntrinsicsChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceKind(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceKind());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Available(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Available());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Active(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Active());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsControlled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsControlled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedVideoProfiles(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedVideoProfiles());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AvailableVideoProfiles(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AvailableVideoProfiles());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoProfile(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoProfile());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CameraIntrinsics(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CameraIntrinsics());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AcquireControlSession(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AcquireControlSession());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CanControlIndependentlyFrom(HSTRING targetId, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CanControlIndependentlyFrom(*reinterpret_cast<hstring const*>(&targetId)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsCorrelatedWith(HSTRING targetId, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsCorrelatedWith(*reinterpret_cast<hstring const*>(&targetId)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetTransformTo(HSTRING targetId, abi_t<Windows::Foundation::Numerics::float4x4>* result, bool* hasResult) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *hasResult = detach_abi(this->shim().TryGetTransformTo(*reinterpret_cast<hstring const*>(&targetId), *reinterpret_cast<Windows::Foundation::Numerics::float4x4*>(result)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetDepthCorrelatedCameraIntrinsicsAsync(::IUnknown* correlatedDepthFrameSource, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryGetDepthCorrelatedCameraIntrinsicsAsync(*reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrameSource const*>(&correlatedDepthFrameSource)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetDepthCorrelatedCoordinateMapperAsync(HSTRING targetSourceId, ::IUnknown* correlatedDepthFrameSource, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryGetDepthCorrelatedCoordinateMapperAsync(*reinterpret_cast<hstring const*>(&targetSourceId), *reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrameSource const*>(&correlatedDepthFrameSource)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TrySetVideoProfileAsync(::IUnknown* controlSession, ::IUnknown* profile, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TrySetVideoProfileAsync(*reinterpret_cast<Windows::Devices::Perception::PerceptionControlSession const*>(&controlSession), *reinterpret_cast<Windows::Devices::Perception::PerceptionVideoProfile const*>(&profile)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall OpenReader(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().OpenReader());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionColorFrameSource2> : produce_base<D, Windows::Devices::Perception::IPerceptionColorFrameSource2>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionColorFrameSourceAddedEventArgs> : produce_base<D, Windows::Devices::Perception::IPerceptionColorFrameSourceAddedEventArgs>
{
    HRESULT __stdcall get_FrameSource(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FrameSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionColorFrameSourceRemovedEventArgs> : produce_base<D, Windows::Devices::Perception::IPerceptionColorFrameSourceRemovedEventArgs>
{
    HRESULT __stdcall get_FrameSource(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FrameSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionColorFrameSourceStatics> : produce_base<D, Windows::Devices::Perception::IPerceptionColorFrameSourceStatics>
{
    HRESULT __stdcall CreateWatcher(::IUnknown** watcher) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *watcher = detach_abi(this->shim().CreateWatcher());
            return S_OK;
        }
        catch (...)
        {
            *watcher = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAllAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FindAllAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING id, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestAccessAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestAccessAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher> : produce_base<D, Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher>
{
    HRESULT __stdcall add_SourceAdded(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SourceAdded(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceAddedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceAdded(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceAdded(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SourceRemoved(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SourceRemoved(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceRemovedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceRemoved(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceRemoved(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Stopped(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Stopped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Stopped(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stopped(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_EnumerationCompleted(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().EnumerationCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_EnumerationCompleted(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnumerationCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(abi_t<Windows::Devices::Enumeration::DeviceWatcherStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Start() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Stop() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionControlSession> : produce_base<D, Windows::Devices::Perception::IPerceptionControlSession>
{
    HRESULT __stdcall add_ControlLost(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ControlLost(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionControlSession, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ControlLost(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ControlLost(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TrySetPropertyAsync(HSTRING name, ::IUnknown* value, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TrySetPropertyAsync(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics> : produce_base<D, Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics>
{
    HRESULT __stdcall UnprojectPixelAtCorrelatedDepth(abi_t<Windows::Foundation::Point> pixelCoordinate, ::IUnknown* depthFrame, abi_t<Windows::Foundation::Numerics::float3>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().UnprojectPixelAtCorrelatedDepth(*reinterpret_cast<Windows::Foundation::Point const*>(&pixelCoordinate), *reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrame const*>(&depthFrame)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UnprojectPixelsAtCorrelatedDepth(uint32_t __sourceCoordinatesSize, abi_t<Windows::Foundation::Point>* sourceCoordinates, ::IUnknown* depthFrame, uint32_t __resultsSize, abi_t<Windows::Foundation::Numerics::float3>* results) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UnprojectPixelsAtCorrelatedDepth(array_view<Windows::Foundation::Point const>(reinterpret_cast<Windows::Foundation::Point const *>(sourceCoordinates), reinterpret_cast<Windows::Foundation::Point const *>(sourceCoordinates) + __sourceCoordinatesSize), *reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrame const*>(&depthFrame), array_view<Windows::Foundation::Numerics::float3>(reinterpret_cast<Windows::Foundation::Numerics::float3*>(results), reinterpret_cast<Windows::Foundation::Numerics::float3*>(results) + __resultsSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UnprojectRegionPixelsAtCorrelatedDepthAsync(abi_t<Windows::Foundation::Rect> region, ::IUnknown* depthFrame, uint32_t __resultsSize, abi_t<Windows::Foundation::Numerics::float3>* results, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().UnprojectRegionPixelsAtCorrelatedDepthAsync(*reinterpret_cast<Windows::Foundation::Rect const*>(&region), *reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrame const*>(&depthFrame), array_view<Windows::Foundation::Numerics::float3>(reinterpret_cast<Windows::Foundation::Numerics::float3*>(results), reinterpret_cast<Windows::Foundation::Numerics::float3*>(results) + __resultsSize)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall UnprojectAllPixelsAtCorrelatedDepthAsync(::IUnknown* depthFrame, uint32_t __resultsSize, abi_t<Windows::Foundation::Numerics::float3>* results, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().UnprojectAllPixelsAtCorrelatedDepthAsync(*reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrame const*>(&depthFrame), array_view<Windows::Foundation::Numerics::float3>(reinterpret_cast<Windows::Foundation::Numerics::float3*>(results), reinterpret_cast<Windows::Foundation::Numerics::float3*>(results) + __resultsSize)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper> : produce_base<D, Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper>
{
    HRESULT __stdcall MapPixelToTarget(abi_t<Windows::Foundation::Point> sourcePixelCoordinate, ::IUnknown* depthFrame, abi_t<Windows::Foundation::Point>* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().MapPixelToTarget(*reinterpret_cast<Windows::Foundation::Point const*>(&sourcePixelCoordinate), *reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrame const*>(&depthFrame)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MapPixelsToTarget(uint32_t __sourceCoordinatesSize, abi_t<Windows::Foundation::Point>* sourceCoordinates, ::IUnknown* depthFrame, uint32_t __resultsSize, abi_t<Windows::Foundation::Point>* results) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MapPixelsToTarget(array_view<Windows::Foundation::Point const>(reinterpret_cast<Windows::Foundation::Point const *>(sourceCoordinates), reinterpret_cast<Windows::Foundation::Point const *>(sourceCoordinates) + __sourceCoordinatesSize), *reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrame const*>(&depthFrame), array_view<Windows::Foundation::Point>(reinterpret_cast<Windows::Foundation::Point*>(results), reinterpret_cast<Windows::Foundation::Point*>(results) + __resultsSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MapRegionOfPixelsToTargetAsync(abi_t<Windows::Foundation::Rect> region, ::IUnknown* depthFrame, uint32_t __targetCoordinatesSize, abi_t<Windows::Foundation::Point>* targetCoordinates, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().MapRegionOfPixelsToTargetAsync(*reinterpret_cast<Windows::Foundation::Rect const*>(&region), *reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrame const*>(&depthFrame), array_view<Windows::Foundation::Point>(reinterpret_cast<Windows::Foundation::Point*>(targetCoordinates), reinterpret_cast<Windows::Foundation::Point*>(targetCoordinates) + __targetCoordinatesSize)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MapAllPixelsToTargetAsync(::IUnknown* depthFrame, uint32_t __targetCoordinatesSize, abi_t<Windows::Foundation::Point>* targetCoordinates, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().MapAllPixelsToTargetAsync(*reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrame const*>(&depthFrame), array_view<Windows::Foundation::Point>(reinterpret_cast<Windows::Foundation::Point*>(targetCoordinates), reinterpret_cast<Windows::Foundation::Point*>(targetCoordinates) + __targetCoordinatesSize)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionDepthFrame> : produce_base<D, Windows::Devices::Perception::IPerceptionDepthFrame>
{
    HRESULT __stdcall get_VideoFrame(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoFrame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionDepthFrameArrivedEventArgs> : produce_base<D, Windows::Devices::Perception::IPerceptionDepthFrameArrivedEventArgs>
{
    HRESULT __stdcall get_RelativeTime(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RelativeTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryOpenFrame(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryOpenFrame());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionDepthFrameReader> : produce_base<D, Windows::Devices::Perception::IPerceptionDepthFrameReader>
{
    HRESULT __stdcall add_FrameArrived(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().FrameArrived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameReader, Windows::Devices::Perception::PerceptionDepthFrameArrivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_FrameArrived(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FrameArrived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPaused(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsPaused());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsPaused(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsPaused(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryReadLatestFrame(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryReadLatestFrame());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionDepthFrameSource> : produce_base<D, Windows::Devices::Perception::IPerceptionDepthFrameSource>
{
    HRESULT __stdcall add_AvailableChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().AvailableChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AvailableChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AvailableChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ActiveChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ActiveChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ActiveChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ActiveChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PropertiesChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PropertiesChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PropertiesChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PropertiesChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_VideoProfileChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().VideoProfileChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_VideoProfileChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoProfileChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CameraIntrinsicsChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().CameraIntrinsicsChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CameraIntrinsicsChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CameraIntrinsicsChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceKind(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceKind());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Available(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Available());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Active(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Active());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsControlled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsControlled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedVideoProfiles(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedVideoProfiles());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AvailableVideoProfiles(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AvailableVideoProfiles());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoProfile(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoProfile());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CameraIntrinsics(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CameraIntrinsics());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AcquireControlSession(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().AcquireControlSession());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CanControlIndependentlyFrom(HSTRING targetId, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CanControlIndependentlyFrom(*reinterpret_cast<hstring const*>(&targetId)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsCorrelatedWith(HSTRING targetId, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsCorrelatedWith(*reinterpret_cast<hstring const*>(&targetId)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetTransformTo(HSTRING targetId, abi_t<Windows::Foundation::Numerics::float4x4>* result, bool* hasResult) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *hasResult = detach_abi(this->shim().TryGetTransformTo(*reinterpret_cast<hstring const*>(&targetId), *reinterpret_cast<Windows::Foundation::Numerics::float4x4*>(result)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetDepthCorrelatedCameraIntrinsicsAsync(::IUnknown* target, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryGetDepthCorrelatedCameraIntrinsicsAsync(*reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrameSource const*>(&target)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetDepthCorrelatedCoordinateMapperAsync(HSTRING targetId, ::IUnknown* depthFrameSourceToMapWith, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryGetDepthCorrelatedCoordinateMapperAsync(*reinterpret_cast<hstring const*>(&targetId), *reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrameSource const*>(&depthFrameSourceToMapWith)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TrySetVideoProfileAsync(::IUnknown* controlSession, ::IUnknown* profile, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TrySetVideoProfileAsync(*reinterpret_cast<Windows::Devices::Perception::PerceptionControlSession const*>(&controlSession), *reinterpret_cast<Windows::Devices::Perception::PerceptionVideoProfile const*>(&profile)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall OpenReader(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().OpenReader());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionDepthFrameSource2> : produce_base<D, Windows::Devices::Perception::IPerceptionDepthFrameSource2>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionDepthFrameSourceAddedEventArgs> : produce_base<D, Windows::Devices::Perception::IPerceptionDepthFrameSourceAddedEventArgs>
{
    HRESULT __stdcall get_FrameSource(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FrameSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionDepthFrameSourceRemovedEventArgs> : produce_base<D, Windows::Devices::Perception::IPerceptionDepthFrameSourceRemovedEventArgs>
{
    HRESULT __stdcall get_FrameSource(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FrameSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics> : produce_base<D, Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics>
{
    HRESULT __stdcall CreateWatcher(::IUnknown** watcher) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *watcher = detach_abi(this->shim().CreateWatcher());
            return S_OK;
        }
        catch (...)
        {
            *watcher = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAllAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FindAllAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING id, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestAccessAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestAccessAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher> : produce_base<D, Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher>
{
    HRESULT __stdcall add_SourceAdded(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SourceAdded(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceAddedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceAdded(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceAdded(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SourceRemoved(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SourceRemoved(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceRemovedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceRemoved(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceRemoved(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Stopped(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Stopped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Stopped(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stopped(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_EnumerationCompleted(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().EnumerationCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_EnumerationCompleted(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnumerationCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(abi_t<Windows::Devices::Enumeration::DeviceWatcherStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Start() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Stop() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionFrameSourcePropertiesChangedEventArgs> : produce_base<D, Windows::Devices::Perception::IPerceptionFrameSourcePropertiesChangedEventArgs>
{
    HRESULT __stdcall get_CollectionChange(abi_t<Windows::Foundation::Collections::CollectionChange>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CollectionChange());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Key(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Key());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionFrameSourcePropertyChangeResult> : produce_base<D, Windows::Devices::Perception::IPerceptionFrameSourcePropertyChangeResult>
{
    HRESULT __stdcall get_Status(abi_t<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NewValue(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NewValue());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionInfraredFrame> : produce_base<D, Windows::Devices::Perception::IPerceptionInfraredFrame>
{
    HRESULT __stdcall get_VideoFrame(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoFrame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionInfraredFrameArrivedEventArgs> : produce_base<D, Windows::Devices::Perception::IPerceptionInfraredFrameArrivedEventArgs>
{
    HRESULT __stdcall get_RelativeTime(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RelativeTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryOpenFrame(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryOpenFrame());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionInfraredFrameReader> : produce_base<D, Windows::Devices::Perception::IPerceptionInfraredFrameReader>
{
    HRESULT __stdcall add_FrameArrived(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().FrameArrived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameReader, Windows::Devices::Perception::PerceptionInfraredFrameArrivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_FrameArrived(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FrameArrived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPaused(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsPaused());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsPaused(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsPaused(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryReadLatestFrame(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryReadLatestFrame());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionInfraredFrameSource> : produce_base<D, Windows::Devices::Perception::IPerceptionInfraredFrameSource>
{
    HRESULT __stdcall add_AvailableChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().AvailableChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AvailableChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AvailableChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ActiveChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().ActiveChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ActiveChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ActiveChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PropertiesChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().PropertiesChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PropertiesChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PropertiesChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_VideoProfileChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().VideoProfileChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_VideoProfileChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoProfileChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CameraIntrinsicsChanged(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().CameraIntrinsicsChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CameraIntrinsicsChanged(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CameraIntrinsicsChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceKind(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceKind());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Available(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Available());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Active(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Active());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsControlled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsControlled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedVideoProfiles(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SupportedVideoProfiles());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AvailableVideoProfiles(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AvailableVideoProfiles());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoProfile(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoProfile());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CameraIntrinsics(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CameraIntrinsics());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AcquireControlSession(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().AcquireControlSession());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CanControlIndependentlyFrom(HSTRING targetId, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().CanControlIndependentlyFrom(*reinterpret_cast<hstring const*>(&targetId)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsCorrelatedWith(HSTRING targetId, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsCorrelatedWith(*reinterpret_cast<hstring const*>(&targetId)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetTransformTo(HSTRING targetId, abi_t<Windows::Foundation::Numerics::float4x4>* result, bool* hasResult) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *hasResult = detach_abi(this->shim().TryGetTransformTo(*reinterpret_cast<hstring const*>(&targetId), *reinterpret_cast<Windows::Foundation::Numerics::float4x4*>(result)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetDepthCorrelatedCameraIntrinsicsAsync(::IUnknown* target, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryGetDepthCorrelatedCameraIntrinsicsAsync(*reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrameSource const*>(&target)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetDepthCorrelatedCoordinateMapperAsync(HSTRING targetId, ::IUnknown* depthFrameSourceToMapWith, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TryGetDepthCorrelatedCoordinateMapperAsync(*reinterpret_cast<hstring const*>(&targetId), *reinterpret_cast<Windows::Devices::Perception::PerceptionDepthFrameSource const*>(&depthFrameSourceToMapWith)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TrySetVideoProfileAsync(::IUnknown* controlSession, ::IUnknown* profile, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().TrySetVideoProfileAsync(*reinterpret_cast<Windows::Devices::Perception::PerceptionControlSession const*>(&controlSession), *reinterpret_cast<Windows::Devices::Perception::PerceptionVideoProfile const*>(&profile)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall OpenReader(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().OpenReader());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionInfraredFrameSource2> : produce_base<D, Windows::Devices::Perception::IPerceptionInfraredFrameSource2>
{
    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionInfraredFrameSourceAddedEventArgs> : produce_base<D, Windows::Devices::Perception::IPerceptionInfraredFrameSourceAddedEventArgs>
{
    HRESULT __stdcall get_FrameSource(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FrameSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionInfraredFrameSourceRemovedEventArgs> : produce_base<D, Windows::Devices::Perception::IPerceptionInfraredFrameSourceRemovedEventArgs>
{
    HRESULT __stdcall get_FrameSource(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FrameSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics> : produce_base<D, Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics>
{
    HRESULT __stdcall CreateWatcher(::IUnknown** watcher) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *watcher = detach_abi(this->shim().CreateWatcher());
            return S_OK;
        }
        catch (...)
        {
            *watcher = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindAllAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FindAllAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING id, ::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall RequestAccessAsync(::IUnknown** result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().RequestAccessAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher> : produce_base<D, Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher>
{
    HRESULT __stdcall add_SourceAdded(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SourceAdded(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceAddedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceAdded(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceAdded(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SourceRemoved(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SourceRemoved(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceRemovedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceRemoved(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SourceRemoved(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Stopped(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Stopped(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Stopped(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stopped(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_EnumerationCompleted(::IUnknown* handler, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().EnumerationCompleted(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_EnumerationCompleted(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnumerationCompleted(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(abi_t<Windows::Devices::Enumeration::DeviceWatcherStatus>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Start() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Stop() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Stop();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Perception::IPerceptionVideoProfile> : produce_base<D, Windows::Devices::Perception::IPerceptionVideoProfile>
{
    HRESULT __stdcall get_BitmapPixelFormat(abi_t<Windows::Graphics::Imaging::BitmapPixelFormat>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BitmapPixelFormat());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BitmapAlphaMode(abi_t<Windows::Graphics::Imaging::BitmapAlphaMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BitmapAlphaMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Width(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Width());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Height(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Height());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FrameDuration(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FrameDuration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsEqual(::IUnknown* other, bool* result) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_abi(this->shim().IsEqual(*reinterpret_cast<Windows::Devices::Perception::PerceptionVideoProfile const*>(&other)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::Perception {

inline hstring KnownCameraIntrinsicsProperties::FocalLength()
{
    return get_activation_factory<KnownCameraIntrinsicsProperties, Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics>().FocalLength();
}

inline hstring KnownCameraIntrinsicsProperties::PrincipalPoint()
{
    return get_activation_factory<KnownCameraIntrinsicsProperties, Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics>().PrincipalPoint();
}

inline hstring KnownCameraIntrinsicsProperties::RadialDistortion()
{
    return get_activation_factory<KnownCameraIntrinsicsProperties, Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics>().RadialDistortion();
}

inline hstring KnownCameraIntrinsicsProperties::TangentialDistortion()
{
    return get_activation_factory<KnownCameraIntrinsicsProperties, Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics>().TangentialDistortion();
}

inline hstring KnownPerceptionColorFrameSourceProperties::Exposure()
{
    return get_activation_factory<KnownPerceptionColorFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics>().Exposure();
}

inline hstring KnownPerceptionColorFrameSourceProperties::AutoExposureEnabled()
{
    return get_activation_factory<KnownPerceptionColorFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics>().AutoExposureEnabled();
}

inline hstring KnownPerceptionColorFrameSourceProperties::ExposureCompensation()
{
    return get_activation_factory<KnownPerceptionColorFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics>().ExposureCompensation();
}

inline hstring KnownPerceptionDepthFrameSourceProperties::MinDepth()
{
    return get_activation_factory<KnownPerceptionDepthFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics>().MinDepth();
}

inline hstring KnownPerceptionDepthFrameSourceProperties::MaxDepth()
{
    return get_activation_factory<KnownPerceptionDepthFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics>().MaxDepth();
}

inline hstring KnownPerceptionFrameSourceProperties::Id()
{
    return get_activation_factory<KnownPerceptionFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics>().Id();
}

inline hstring KnownPerceptionFrameSourceProperties::PhysicalDeviceIds()
{
    return get_activation_factory<KnownPerceptionFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics>().PhysicalDeviceIds();
}

inline hstring KnownPerceptionFrameSourceProperties::FrameKind()
{
    return get_activation_factory<KnownPerceptionFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics>().FrameKind();
}

inline hstring KnownPerceptionFrameSourceProperties::DeviceModelVersion()
{
    return get_activation_factory<KnownPerceptionFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics>().DeviceModelVersion();
}

inline hstring KnownPerceptionFrameSourceProperties::EnclosureLocation()
{
    return get_activation_factory<KnownPerceptionFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics>().EnclosureLocation();
}

inline hstring KnownPerceptionFrameSourceProperties::DeviceId()
{
    return get_activation_factory<KnownPerceptionFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics2>().DeviceId();
}

inline hstring KnownPerceptionInfraredFrameSourceProperties::Exposure()
{
    return get_activation_factory<KnownPerceptionInfraredFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics>().Exposure();
}

inline hstring KnownPerceptionInfraredFrameSourceProperties::AutoExposureEnabled()
{
    return get_activation_factory<KnownPerceptionInfraredFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics>().AutoExposureEnabled();
}

inline hstring KnownPerceptionInfraredFrameSourceProperties::ExposureCompensation()
{
    return get_activation_factory<KnownPerceptionInfraredFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics>().ExposureCompensation();
}

inline hstring KnownPerceptionInfraredFrameSourceProperties::ActiveIlluminationEnabled()
{
    return get_activation_factory<KnownPerceptionInfraredFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics>().ActiveIlluminationEnabled();
}

inline hstring KnownPerceptionInfraredFrameSourceProperties::AmbientSubtractionEnabled()
{
    return get_activation_factory<KnownPerceptionInfraredFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics>().AmbientSubtractionEnabled();
}

inline hstring KnownPerceptionInfraredFrameSourceProperties::StructureLightPatternEnabled()
{
    return get_activation_factory<KnownPerceptionInfraredFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics>().StructureLightPatternEnabled();
}

inline hstring KnownPerceptionInfraredFrameSourceProperties::InterleavedIlluminationEnabled()
{
    return get_activation_factory<KnownPerceptionInfraredFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics>().InterleavedIlluminationEnabled();
}

inline hstring KnownPerceptionVideoFrameSourceProperties::VideoProfile()
{
    return get_activation_factory<KnownPerceptionVideoFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics>().VideoProfile();
}

inline hstring KnownPerceptionVideoFrameSourceProperties::SupportedVideoProfiles()
{
    return get_activation_factory<KnownPerceptionVideoFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics>().SupportedVideoProfiles();
}

inline hstring KnownPerceptionVideoFrameSourceProperties::AvailableVideoProfiles()
{
    return get_activation_factory<KnownPerceptionVideoFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics>().AvailableVideoProfiles();
}

inline hstring KnownPerceptionVideoFrameSourceProperties::IsMirrored()
{
    return get_activation_factory<KnownPerceptionVideoFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics>().IsMirrored();
}

inline hstring KnownPerceptionVideoFrameSourceProperties::CameraIntrinsics()
{
    return get_activation_factory<KnownPerceptionVideoFrameSourceProperties, Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics>().CameraIntrinsics();
}

inline hstring KnownPerceptionVideoProfileProperties::BitmapPixelFormat()
{
    return get_activation_factory<KnownPerceptionVideoProfileProperties, Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics>().BitmapPixelFormat();
}

inline hstring KnownPerceptionVideoProfileProperties::BitmapAlphaMode()
{
    return get_activation_factory<KnownPerceptionVideoProfileProperties, Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics>().BitmapAlphaMode();
}

inline hstring KnownPerceptionVideoProfileProperties::Width()
{
    return get_activation_factory<KnownPerceptionVideoProfileProperties, Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics>().Width();
}

inline hstring KnownPerceptionVideoProfileProperties::Height()
{
    return get_activation_factory<KnownPerceptionVideoProfileProperties, Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics>().Height();
}

inline hstring KnownPerceptionVideoProfileProperties::FrameDuration()
{
    return get_activation_factory<KnownPerceptionVideoProfileProperties, Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics>().FrameDuration();
}

inline Windows::Devices::Perception::PerceptionColorFrameSourceWatcher PerceptionColorFrameSource::CreateWatcher()
{
    return get_activation_factory<PerceptionColorFrameSource, Windows::Devices::Perception::IPerceptionColorFrameSourceStatics>().CreateWatcher();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionColorFrameSource>> PerceptionColorFrameSource::FindAllAsync()
{
    return get_activation_factory<PerceptionColorFrameSource, Windows::Devices::Perception::IPerceptionColorFrameSourceStatics>().FindAllAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionColorFrameSource> PerceptionColorFrameSource::FromIdAsync(param::hstring const& id)
{
    return get_activation_factory<PerceptionColorFrameSource, Windows::Devices::Perception::IPerceptionColorFrameSourceStatics>().FromIdAsync(id);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> PerceptionColorFrameSource::RequestAccessAsync()
{
    return get_activation_factory<PerceptionColorFrameSource, Windows::Devices::Perception::IPerceptionColorFrameSourceStatics>().RequestAccessAsync();
}

inline Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher PerceptionDepthFrameSource::CreateWatcher()
{
    return get_activation_factory<PerceptionDepthFrameSource, Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics>().CreateWatcher();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionDepthFrameSource>> PerceptionDepthFrameSource::FindAllAsync()
{
    return get_activation_factory<PerceptionDepthFrameSource, Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics>().FindAllAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthFrameSource> PerceptionDepthFrameSource::FromIdAsync(param::hstring const& id)
{
    return get_activation_factory<PerceptionDepthFrameSource, Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics>().FromIdAsync(id);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> PerceptionDepthFrameSource::RequestAccessAsync()
{
    return get_activation_factory<PerceptionDepthFrameSource, Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics>().RequestAccessAsync();
}

inline Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher PerceptionInfraredFrameSource::CreateWatcher()
{
    return get_activation_factory<PerceptionInfraredFrameSource, Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics>().CreateWatcher();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionInfraredFrameSource>> PerceptionInfraredFrameSource::FindAllAsync()
{
    return get_activation_factory<PerceptionInfraredFrameSource, Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics>().FindAllAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionInfraredFrameSource> PerceptionInfraredFrameSource::FromIdAsync(param::hstring const& id)
{
    return get_activation_factory<PerceptionInfraredFrameSource, Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics>().FromIdAsync(id);
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> PerceptionInfraredFrameSource::RequestAccessAsync()
{
    return get_activation_factory<PerceptionInfraredFrameSource, Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics>().RequestAccessAsync();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics> {};

template<> struct hash<winrt::Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IKnownPerceptionColorFrameSourcePropertiesStatics> {};

template<> struct hash<winrt::Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IKnownPerceptionDepthFrameSourcePropertiesStatics> {};

template<> struct hash<winrt::Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics> {};

template<> struct hash<winrt::Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IKnownPerceptionFrameSourcePropertiesStatics2> {};

template<> struct hash<winrt::Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IKnownPerceptionInfraredFrameSourcePropertiesStatics> {};

template<> struct hash<winrt::Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IKnownPerceptionVideoFrameSourcePropertiesStatics> {};

template<> struct hash<winrt::Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IKnownPerceptionVideoProfilePropertiesStatics> {};

template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionColorFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IPerceptionColorFrame> {};

template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionColorFrameArrivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IPerceptionColorFrameArrivedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionColorFrameReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IPerceptionColorFrameReader> {};

template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionColorFrameSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IPerceptionColorFrameSource> {};

template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionColorFrameSource2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IPerceptionColorFrameSource2> {};

template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionColorFrameSourceAddedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IPerceptionColorFrameSourceAddedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionColorFrameSourceRemovedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IPerceptionColorFrameSourceRemovedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionColorFrameSourceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IPerceptionColorFrameSourceStatics> {};

template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher> {};

template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionControlSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IPerceptionControlSession> {};

template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IPerceptionDepthCorrelatedCameraIntrinsics> {};

template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IPerceptionDepthCorrelatedCoordinateMapper> {};

template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionDepthFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IPerceptionDepthFrame> {};

template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionDepthFrameArrivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IPerceptionDepthFrameArrivedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionDepthFrameReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IPerceptionDepthFrameReader> {};

template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSource> {};

template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSource2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSource2> {};

template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSourceAddedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSourceAddedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSourceRemovedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSourceRemovedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSourceStatics> {};

template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher> {};

template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionFrameSourcePropertiesChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IPerceptionFrameSourcePropertiesChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionFrameSourcePropertyChangeResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IPerceptionFrameSourcePropertyChangeResult> {};

template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionInfraredFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IPerceptionInfraredFrame> {};

template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameArrivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameArrivedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameReader> {};

template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSource> {};

template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSource2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSource2> {};

template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSourceAddedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSourceAddedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSourceRemovedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSourceRemovedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSourceStatics> {};

template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher> {};

template<> struct hash<winrt::Windows::Devices::Perception::IPerceptionVideoProfile> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::IPerceptionVideoProfile> {};

template<> struct hash<winrt::Windows::Devices::Perception::KnownCameraIntrinsicsProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::KnownCameraIntrinsicsProperties> {};

template<> struct hash<winrt::Windows::Devices::Perception::KnownPerceptionColorFrameSourceProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::KnownPerceptionColorFrameSourceProperties> {};

template<> struct hash<winrt::Windows::Devices::Perception::KnownPerceptionDepthFrameSourceProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::KnownPerceptionDepthFrameSourceProperties> {};

template<> struct hash<winrt::Windows::Devices::Perception::KnownPerceptionFrameSourceProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::KnownPerceptionFrameSourceProperties> {};

template<> struct hash<winrt::Windows::Devices::Perception::KnownPerceptionInfraredFrameSourceProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::KnownPerceptionInfraredFrameSourceProperties> {};

template<> struct hash<winrt::Windows::Devices::Perception::KnownPerceptionVideoFrameSourceProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::KnownPerceptionVideoFrameSourceProperties> {};

template<> struct hash<winrt::Windows::Devices::Perception::KnownPerceptionVideoProfileProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::KnownPerceptionVideoProfileProperties> {};

template<> struct hash<winrt::Windows::Devices::Perception::PerceptionColorFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::PerceptionColorFrame> {};

template<> struct hash<winrt::Windows::Devices::Perception::PerceptionColorFrameArrivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::PerceptionColorFrameArrivedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Perception::PerceptionColorFrameReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::PerceptionColorFrameReader> {};

template<> struct hash<winrt::Windows::Devices::Perception::PerceptionColorFrameSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::PerceptionColorFrameSource> {};

template<> struct hash<winrt::Windows::Devices::Perception::PerceptionColorFrameSourceAddedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::PerceptionColorFrameSourceAddedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Perception::PerceptionColorFrameSourceRemovedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::PerceptionColorFrameSourceRemovedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Perception::PerceptionColorFrameSourceWatcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::PerceptionColorFrameSourceWatcher> {};

template<> struct hash<winrt::Windows::Devices::Perception::PerceptionControlSession> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::PerceptionControlSession> {};

template<> struct hash<winrt::Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics> {};

template<> struct hash<winrt::Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper> {};

template<> struct hash<winrt::Windows::Devices::Perception::PerceptionDepthFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::PerceptionDepthFrame> {};

template<> struct hash<winrt::Windows::Devices::Perception::PerceptionDepthFrameArrivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::PerceptionDepthFrameArrivedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Perception::PerceptionDepthFrameReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::PerceptionDepthFrameReader> {};

template<> struct hash<winrt::Windows::Devices::Perception::PerceptionDepthFrameSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::PerceptionDepthFrameSource> {};

template<> struct hash<winrt::Windows::Devices::Perception::PerceptionDepthFrameSourceAddedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::PerceptionDepthFrameSourceAddedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Perception::PerceptionDepthFrameSourceRemovedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::PerceptionDepthFrameSourceRemovedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher> {};

template<> struct hash<winrt::Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> {};

template<> struct hash<winrt::Windows::Devices::Perception::PerceptionInfraredFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::PerceptionInfraredFrame> {};

template<> struct hash<winrt::Windows::Devices::Perception::PerceptionInfraredFrameArrivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::PerceptionInfraredFrameArrivedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Perception::PerceptionInfraredFrameReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::PerceptionInfraredFrameReader> {};

template<> struct hash<winrt::Windows::Devices::Perception::PerceptionInfraredFrameSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::PerceptionInfraredFrameSource> {};

template<> struct hash<winrt::Windows::Devices::Perception::PerceptionInfraredFrameSourceAddedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::PerceptionInfraredFrameSourceAddedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Perception::PerceptionInfraredFrameSourceRemovedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::PerceptionInfraredFrameSourceRemovedEventArgs> {};

template<> struct hash<winrt::Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher> {};

template<> struct hash<winrt::Windows::Devices::Perception::PerceptionVideoProfile> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Devices::Perception::PerceptionVideoProfile> {};

}

WINRT_WARNING_POP
