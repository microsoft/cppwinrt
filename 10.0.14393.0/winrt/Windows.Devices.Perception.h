// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Devices.Enumeration.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Media.Devices.Core.3.h"
#include "internal/Windows.Graphics.Imaging.3.h"
#include "internal/Windows.Media.3.h"
#include "internal/Windows.Devices.Perception.3.h"
#include "Windows.Devices.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics> : produce_base<D, Windows::Devices::Perception::IKnownCameraIntrinsicsPropertiesStatics>
{
    HRESULT __stdcall get_FocalLength(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FocalLength());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PrincipalPoint(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PrincipalPoint());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RadialDistortion(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RadialDistortion());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TangentialDistortion(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TangentialDistortion());
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
    HRESULT __stdcall get_Exposure(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Exposure());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoExposureEnabled(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AutoExposureEnabled());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExposureCompensation(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExposureCompensation());
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
    HRESULT __stdcall get_MinDepth(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MinDepth());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxDepth(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MaxDepth());
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
    HRESULT __stdcall get_Id(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PhysicalDeviceIds(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PhysicalDeviceIds());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FrameKind(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FrameKind());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceModelVersion(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceModelVersion());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EnclosureLocation(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().EnclosureLocation());
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
    HRESULT __stdcall get_DeviceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceId());
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
    HRESULT __stdcall get_Exposure(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Exposure());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AutoExposureEnabled(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AutoExposureEnabled());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExposureCompensation(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExposureCompensation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ActiveIlluminationEnabled(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ActiveIlluminationEnabled());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AmbientSubtractionEnabled(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AmbientSubtractionEnabled());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StructureLightPatternEnabled(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StructureLightPatternEnabled());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InterleavedIlluminationEnabled(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InterleavedIlluminationEnabled());
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
    HRESULT __stdcall get_VideoProfile(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VideoProfile());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedVideoProfiles(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SupportedVideoProfiles());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AvailableVideoProfiles(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AvailableVideoProfiles());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsMirrored(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsMirrored());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CameraIntrinsics(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CameraIntrinsics());
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
    HRESULT __stdcall get_BitmapPixelFormat(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BitmapPixelFormat());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BitmapAlphaMode(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BitmapAlphaMode());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Width(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Width());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Height(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Height());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FrameDuration(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FrameDuration());
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
    HRESULT __stdcall get_VideoFrame(abi_arg_out<Windows::Media::IVideoFrame> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VideoFrame());
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
    HRESULT __stdcall get_RelativeTime(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RelativeTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryOpenFrame(abi_arg_out<Windows::Devices::Perception::IPerceptionColorFrame> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryOpenFrame());
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
    HRESULT __stdcall add_FrameArrived(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameReader, Windows::Devices::Perception::PerceptionColorFrameArrivedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().FrameArrived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameReader, Windows::Devices::Perception::PerceptionColorFrameArrivedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_FrameArrived(event_token token) noexcept override
    {
        try
        {
            this->shim().FrameArrived(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(abi_arg_out<Windows::Devices::Perception::IPerceptionColorFrameSource> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPaused(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsPaused());
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
            this->shim().IsPaused(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryReadLatestFrame(abi_arg_out<Windows::Devices::Perception::IPerceptionColorFrame> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryReadLatestFrame());
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
    HRESULT __stdcall add_AvailableChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().AvailableChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AvailableChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().AvailableChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ActiveChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ActiveChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ActiveChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().ActiveChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PropertiesChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PropertiesChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PropertiesChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().PropertiesChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_VideoProfileChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().VideoProfileChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_VideoProfileChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().VideoProfileChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CameraIntrinsicsChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().CameraIntrinsicsChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CameraIntrinsicsChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().CameraIntrinsicsChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceKind(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceKind());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Available(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Available());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Active(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Active());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsControlled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsControlled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedVideoProfiles(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SupportedVideoProfiles());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AvailableVideoProfiles(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AvailableVideoProfiles());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoProfile(abi_arg_out<Windows::Devices::Perception::IPerceptionVideoProfile> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VideoProfile());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CameraIntrinsics(abi_arg_out<Windows::Media::Devices::Core::ICameraIntrinsics> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CameraIntrinsics());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AcquireControlSession(abi_arg_out<Windows::Devices::Perception::IPerceptionControlSession> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AcquireControlSession());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CanControlIndependentlyFrom(abi_arg_in<hstring> targetId, bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CanControlIndependentlyFrom(*reinterpret_cast<const hstring *>(&targetId)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsCorrelatedWith(abi_arg_in<hstring> targetId, bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsCorrelatedWith(*reinterpret_cast<const hstring *>(&targetId)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetTransformTo(abi_arg_in<hstring> targetId, abi_arg_out<Windows::Foundation::Numerics::float4x4> result, bool * hasResult) noexcept override
    {
        try
        {
            *hasResult = detach(this->shim().TryGetTransformTo(*reinterpret_cast<const hstring *>(&targetId), *result));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetDepthCorrelatedCameraIntrinsicsAsync(abi_arg_in<Windows::Devices::Perception::IPerceptionDepthFrameSource> correlatedDepthFrameSource, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryGetDepthCorrelatedCameraIntrinsicsAsync(*reinterpret_cast<const Windows::Devices::Perception::PerceptionDepthFrameSource *>(&correlatedDepthFrameSource)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetDepthCorrelatedCoordinateMapperAsync(abi_arg_in<hstring> targetSourceId, abi_arg_in<Windows::Devices::Perception::IPerceptionDepthFrameSource> correlatedDepthFrameSource, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryGetDepthCorrelatedCoordinateMapperAsync(*reinterpret_cast<const hstring *>(&targetSourceId), *reinterpret_cast<const Windows::Devices::Perception::PerceptionDepthFrameSource *>(&correlatedDepthFrameSource)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TrySetVideoProfileAsync(abi_arg_in<Windows::Devices::Perception::IPerceptionControlSession> controlSession, abi_arg_in<Windows::Devices::Perception::IPerceptionVideoProfile> profile, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TrySetVideoProfileAsync(*reinterpret_cast<const Windows::Devices::Perception::PerceptionControlSession *>(&controlSession), *reinterpret_cast<const Windows::Devices::Perception::PerceptionVideoProfile *>(&profile)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OpenReader(abi_arg_out<Windows::Devices::Perception::IPerceptionColorFrameReader> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().OpenReader());
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
    HRESULT __stdcall get_DeviceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceId());
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
    HRESULT __stdcall get_FrameSource(abi_arg_out<Windows::Devices::Perception::IPerceptionColorFrameSource> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FrameSource());
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
    HRESULT __stdcall get_FrameSource(abi_arg_out<Windows::Devices::Perception::IPerceptionColorFrameSource> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FrameSource());
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
    HRESULT __stdcall abi_CreateWatcher(abi_arg_out<Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher> watcher) noexcept override
    {
        try
        {
            *watcher = detach(this->shim().CreateWatcher());
            return S_OK;
        }
        catch (...)
        {
            *watcher = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAllAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionColorFrameSource>>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FindAllAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromIdAsync(abi_arg_in<hstring> id, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionColorFrameSource>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FromIdAsync(*reinterpret_cast<const hstring *>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestAccessAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Perception::PerceptionFrameSourceAccessStatus>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RequestAccessAsync());
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
    HRESULT __stdcall add_SourceAdded(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceAddedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().SourceAdded(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceAddedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceAdded(event_token token) noexcept override
    {
        try
        {
            this->shim().SourceAdded(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SourceRemoved(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceRemovedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().SourceRemoved(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceRemovedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceRemoved(event_token token) noexcept override
    {
        try
        {
            this->shim().SourceRemoved(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Stopped(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Stopped(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Stopped(event_token token) noexcept override
    {
        try
        {
            this->shim().Stopped(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_EnumerationCompleted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().EnumerationCompleted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_EnumerationCompleted(event_token token) noexcept override
    {
        try
        {
            this->shim().EnumerationCompleted(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Devices::Enumeration::DeviceWatcherStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Start() noexcept override
    {
        try
        {
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Stop() noexcept override
    {
        try
        {
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
    HRESULT __stdcall add_ControlLost(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionControlSession, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ControlLost(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionControlSession, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ControlLost(event_token token) noexcept override
    {
        try
        {
            this->shim().ControlLost(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TrySetPropertyAsync(abi_arg_in<hstring> name, abi_arg_in<Windows::IInspectable> value, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TrySetPropertyAsync(*reinterpret_cast<const hstring *>(&name), *reinterpret_cast<const Windows::IInspectable *>(&value)));
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
    HRESULT __stdcall abi_UnprojectPixelAtCorrelatedDepth(abi_arg_in<Windows::Foundation::Point> pixelCoordinate, abi_arg_in<Windows::Devices::Perception::IPerceptionDepthFrame> depthFrame, abi_arg_out<Windows::Foundation::Numerics::float3> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().UnprojectPixelAtCorrelatedDepth(*reinterpret_cast<const Windows::Foundation::Point *>(&pixelCoordinate), *reinterpret_cast<const Windows::Devices::Perception::PerceptionDepthFrame *>(&depthFrame)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UnprojectPixelsAtCorrelatedDepth(uint32_t __sourceCoordinatesSize, abi_arg_in<Windows::Foundation::Point> * sourceCoordinates, abi_arg_in<Windows::Devices::Perception::IPerceptionDepthFrame> depthFrame, uint32_t __resultsSize, abi_arg_out<Windows::Foundation::Numerics::float3> results) noexcept override
    {
        try
        {
            this->shim().UnprojectPixelsAtCorrelatedDepth(*reinterpret_cast<const Windows::Foundation::Point *>(&sourceCoordinates), *reinterpret_cast<const Windows::Devices::Perception::PerceptionDepthFrame *>(&depthFrame), *results);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UnprojectRegionPixelsAtCorrelatedDepthAsync(abi_arg_in<Windows::Foundation::Rect> region, abi_arg_in<Windows::Devices::Perception::IPerceptionDepthFrame> depthFrame, uint32_t __resultsSize, abi_arg_out<Windows::Foundation::Numerics::float3> results, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().UnprojectRegionPixelsAtCorrelatedDepthAsync(*reinterpret_cast<const Windows::Foundation::Rect *>(&region), *reinterpret_cast<const Windows::Devices::Perception::PerceptionDepthFrame *>(&depthFrame), *results));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_UnprojectAllPixelsAtCorrelatedDepthAsync(abi_arg_in<Windows::Devices::Perception::IPerceptionDepthFrame> depthFrame, uint32_t __resultsSize, abi_arg_out<Windows::Foundation::Numerics::float3> results, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().UnprojectAllPixelsAtCorrelatedDepthAsync(*reinterpret_cast<const Windows::Devices::Perception::PerceptionDepthFrame *>(&depthFrame), *results));
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
    HRESULT __stdcall abi_MapPixelToTarget(abi_arg_in<Windows::Foundation::Point> sourcePixelCoordinate, abi_arg_in<Windows::Devices::Perception::IPerceptionDepthFrame> depthFrame, abi_arg_out<Windows::Foundation::Point> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().MapPixelToTarget(*reinterpret_cast<const Windows::Foundation::Point *>(&sourcePixelCoordinate), *reinterpret_cast<const Windows::Devices::Perception::PerceptionDepthFrame *>(&depthFrame)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MapPixelsToTarget(uint32_t __sourceCoordinatesSize, abi_arg_in<Windows::Foundation::Point> * sourceCoordinates, abi_arg_in<Windows::Devices::Perception::IPerceptionDepthFrame> depthFrame, uint32_t __resultsSize, abi_arg_out<Windows::Foundation::Point> results) noexcept override
    {
        try
        {
            this->shim().MapPixelsToTarget(*reinterpret_cast<const Windows::Foundation::Point *>(&sourceCoordinates), *reinterpret_cast<const Windows::Devices::Perception::PerceptionDepthFrame *>(&depthFrame), *results);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MapRegionOfPixelsToTargetAsync(abi_arg_in<Windows::Foundation::Rect> region, abi_arg_in<Windows::Devices::Perception::IPerceptionDepthFrame> depthFrame, uint32_t __targetCoordinatesSize, abi_arg_out<Windows::Foundation::Point> targetCoordinates, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().MapRegionOfPixelsToTargetAsync(*reinterpret_cast<const Windows::Foundation::Rect *>(&region), *reinterpret_cast<const Windows::Devices::Perception::PerceptionDepthFrame *>(&depthFrame), *targetCoordinates));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_MapAllPixelsToTargetAsync(abi_arg_in<Windows::Devices::Perception::IPerceptionDepthFrame> depthFrame, uint32_t __targetCoordinatesSize, abi_arg_out<Windows::Foundation::Point> targetCoordinates, abi_arg_out<Windows::Foundation::IAsyncAction> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().MapAllPixelsToTargetAsync(*reinterpret_cast<const Windows::Devices::Perception::PerceptionDepthFrame *>(&depthFrame), *targetCoordinates));
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
    HRESULT __stdcall get_VideoFrame(abi_arg_out<Windows::Media::IVideoFrame> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VideoFrame());
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
    HRESULT __stdcall get_RelativeTime(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RelativeTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryOpenFrame(abi_arg_out<Windows::Devices::Perception::IPerceptionDepthFrame> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryOpenFrame());
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
    HRESULT __stdcall add_FrameArrived(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameReader, Windows::Devices::Perception::PerceptionDepthFrameArrivedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().FrameArrived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameReader, Windows::Devices::Perception::PerceptionDepthFrameArrivedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_FrameArrived(event_token token) noexcept override
    {
        try
        {
            this->shim().FrameArrived(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(abi_arg_out<Windows::Devices::Perception::IPerceptionDepthFrameSource> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPaused(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsPaused());
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
            this->shim().IsPaused(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryReadLatestFrame(abi_arg_out<Windows::Devices::Perception::IPerceptionDepthFrame> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryReadLatestFrame());
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
    HRESULT __stdcall add_AvailableChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().AvailableChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AvailableChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().AvailableChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ActiveChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ActiveChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ActiveChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().ActiveChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PropertiesChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PropertiesChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PropertiesChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().PropertiesChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_VideoProfileChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().VideoProfileChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_VideoProfileChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().VideoProfileChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CameraIntrinsicsChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().CameraIntrinsicsChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CameraIntrinsicsChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().CameraIntrinsicsChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceKind(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceKind());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Available(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Available());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Active(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Active());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsControlled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsControlled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedVideoProfiles(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SupportedVideoProfiles());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AvailableVideoProfiles(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AvailableVideoProfiles());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoProfile(abi_arg_out<Windows::Devices::Perception::IPerceptionVideoProfile> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VideoProfile());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CameraIntrinsics(abi_arg_out<Windows::Media::Devices::Core::ICameraIntrinsics> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CameraIntrinsics());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AcquireControlSession(abi_arg_out<Windows::Devices::Perception::IPerceptionControlSession> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().AcquireControlSession());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CanControlIndependentlyFrom(abi_arg_in<hstring> targetId, bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CanControlIndependentlyFrom(*reinterpret_cast<const hstring *>(&targetId)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsCorrelatedWith(abi_arg_in<hstring> targetId, bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsCorrelatedWith(*reinterpret_cast<const hstring *>(&targetId)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetTransformTo(abi_arg_in<hstring> targetId, abi_arg_out<Windows::Foundation::Numerics::float4x4> result, bool * hasResult) noexcept override
    {
        try
        {
            *hasResult = detach(this->shim().TryGetTransformTo(*reinterpret_cast<const hstring *>(&targetId), *result));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetDepthCorrelatedCameraIntrinsicsAsync(abi_arg_in<Windows::Devices::Perception::IPerceptionDepthFrameSource> target, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryGetDepthCorrelatedCameraIntrinsicsAsync(*reinterpret_cast<const Windows::Devices::Perception::PerceptionDepthFrameSource *>(&target)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetDepthCorrelatedCoordinateMapperAsync(abi_arg_in<hstring> targetId, abi_arg_in<Windows::Devices::Perception::IPerceptionDepthFrameSource> depthFrameSourceToMapWith, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryGetDepthCorrelatedCoordinateMapperAsync(*reinterpret_cast<const hstring *>(&targetId), *reinterpret_cast<const Windows::Devices::Perception::PerceptionDepthFrameSource *>(&depthFrameSourceToMapWith)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TrySetVideoProfileAsync(abi_arg_in<Windows::Devices::Perception::IPerceptionControlSession> controlSession, abi_arg_in<Windows::Devices::Perception::IPerceptionVideoProfile> profile, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TrySetVideoProfileAsync(*reinterpret_cast<const Windows::Devices::Perception::PerceptionControlSession *>(&controlSession), *reinterpret_cast<const Windows::Devices::Perception::PerceptionVideoProfile *>(&profile)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OpenReader(abi_arg_out<Windows::Devices::Perception::IPerceptionDepthFrameReader> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().OpenReader());
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
    HRESULT __stdcall get_DeviceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceId());
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
    HRESULT __stdcall get_FrameSource(abi_arg_out<Windows::Devices::Perception::IPerceptionDepthFrameSource> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FrameSource());
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
    HRESULT __stdcall get_FrameSource(abi_arg_out<Windows::Devices::Perception::IPerceptionDepthFrameSource> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FrameSource());
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
    HRESULT __stdcall abi_CreateWatcher(abi_arg_out<Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher> watcher) noexcept override
    {
        try
        {
            *watcher = detach(this->shim().CreateWatcher());
            return S_OK;
        }
        catch (...)
        {
            *watcher = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAllAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionDepthFrameSource>>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FindAllAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromIdAsync(abi_arg_in<hstring> id, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthFrameSource>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FromIdAsync(*reinterpret_cast<const hstring *>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestAccessAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Perception::PerceptionFrameSourceAccessStatus>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RequestAccessAsync());
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
    HRESULT __stdcall add_SourceAdded(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceAddedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().SourceAdded(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceAddedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceAdded(event_token token) noexcept override
    {
        try
        {
            this->shim().SourceAdded(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SourceRemoved(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceRemovedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().SourceRemoved(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceRemovedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceRemoved(event_token token) noexcept override
    {
        try
        {
            this->shim().SourceRemoved(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Stopped(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Stopped(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Stopped(event_token token) noexcept override
    {
        try
        {
            this->shim().Stopped(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_EnumerationCompleted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().EnumerationCompleted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_EnumerationCompleted(event_token token) noexcept override
    {
        try
        {
            this->shim().EnumerationCompleted(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Devices::Enumeration::DeviceWatcherStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Start() noexcept override
    {
        try
        {
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Stop() noexcept override
    {
        try
        {
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
    HRESULT __stdcall get_CollectionChange(Windows::Foundation::Collections::CollectionChange * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CollectionChange());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Key(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Key());
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
    HRESULT __stdcall get_Status(Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NewValue(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NewValue());
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
    HRESULT __stdcall get_VideoFrame(abi_arg_out<Windows::Media::IVideoFrame> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VideoFrame());
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
    HRESULT __stdcall get_RelativeTime(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RelativeTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryOpenFrame(abi_arg_out<Windows::Devices::Perception::IPerceptionInfraredFrame> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryOpenFrame());
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
    HRESULT __stdcall add_FrameArrived(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameReader, Windows::Devices::Perception::PerceptionInfraredFrameArrivedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().FrameArrived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameReader, Windows::Devices::Perception::PerceptionInfraredFrameArrivedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_FrameArrived(event_token token) noexcept override
    {
        try
        {
            this->shim().FrameArrived(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Source(abi_arg_out<Windows::Devices::Perception::IPerceptionInfraredFrameSource> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Source());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsPaused(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsPaused());
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
            this->shim().IsPaused(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryReadLatestFrame(abi_arg_out<Windows::Devices::Perception::IPerceptionInfraredFrame> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryReadLatestFrame());
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
    HRESULT __stdcall add_AvailableChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().AvailableChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AvailableChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().AvailableChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_ActiveChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().ActiveChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_ActiveChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().ActiveChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PropertiesChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PropertiesChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PropertiesChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().PropertiesChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_VideoProfileChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().VideoProfileChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_VideoProfileChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().VideoProfileChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_CameraIntrinsicsChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().CameraIntrinsicsChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_CameraIntrinsicsChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().CameraIntrinsicsChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Id(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DisplayName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DisplayName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceKind(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceKind());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Available(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Available());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Active(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Active());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsControlled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsControlled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(abi_arg_out<Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedVideoProfiles(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SupportedVideoProfiles());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AvailableVideoProfiles(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AvailableVideoProfiles());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoProfile(abi_arg_out<Windows::Devices::Perception::IPerceptionVideoProfile> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VideoProfile());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CameraIntrinsics(abi_arg_out<Windows::Media::Devices::Core::ICameraIntrinsics> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CameraIntrinsics());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AcquireControlSession(abi_arg_out<Windows::Devices::Perception::IPerceptionControlSession> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().AcquireControlSession());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CanControlIndependentlyFrom(abi_arg_in<hstring> targetId, bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CanControlIndependentlyFrom(*reinterpret_cast<const hstring *>(&targetId)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsCorrelatedWith(abi_arg_in<hstring> targetId, bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsCorrelatedWith(*reinterpret_cast<const hstring *>(&targetId)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetTransformTo(abi_arg_in<hstring> targetId, abi_arg_out<Windows::Foundation::Numerics::float4x4> result, bool * hasResult) noexcept override
    {
        try
        {
            *hasResult = detach(this->shim().TryGetTransformTo(*reinterpret_cast<const hstring *>(&targetId), *result));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetDepthCorrelatedCameraIntrinsicsAsync(abi_arg_in<Windows::Devices::Perception::IPerceptionDepthFrameSource> target, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryGetDepthCorrelatedCameraIntrinsicsAsync(*reinterpret_cast<const Windows::Devices::Perception::PerceptionDepthFrameSource *>(&target)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetDepthCorrelatedCoordinateMapperAsync(abi_arg_in<hstring> targetId, abi_arg_in<Windows::Devices::Perception::IPerceptionDepthFrameSource> depthFrameSourceToMapWith, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TryGetDepthCorrelatedCoordinateMapperAsync(*reinterpret_cast<const hstring *>(&targetId), *reinterpret_cast<const Windows::Devices::Perception::PerceptionDepthFrameSource *>(&depthFrameSourceToMapWith)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TrySetVideoProfileAsync(abi_arg_in<Windows::Devices::Perception::IPerceptionControlSession> controlSession, abi_arg_in<Windows::Devices::Perception::IPerceptionVideoProfile> profile, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TrySetVideoProfileAsync(*reinterpret_cast<const Windows::Devices::Perception::PerceptionControlSession *>(&controlSession), *reinterpret_cast<const Windows::Devices::Perception::PerceptionVideoProfile *>(&profile)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_OpenReader(abi_arg_out<Windows::Devices::Perception::IPerceptionInfraredFrameReader> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().OpenReader());
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
    HRESULT __stdcall get_DeviceId(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceId());
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
    HRESULT __stdcall get_FrameSource(abi_arg_out<Windows::Devices::Perception::IPerceptionInfraredFrameSource> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FrameSource());
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
    HRESULT __stdcall get_FrameSource(abi_arg_out<Windows::Devices::Perception::IPerceptionInfraredFrameSource> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FrameSource());
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
    HRESULT __stdcall abi_CreateWatcher(abi_arg_out<Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher> watcher) noexcept override
    {
        try
        {
            *watcher = detach(this->shim().CreateWatcher());
            return S_OK;
        }
        catch (...)
        {
            *watcher = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FindAllAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionInfraredFrameSource>>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FindAllAsync());
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromIdAsync(abi_arg_in<hstring> id, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionInfraredFrameSource>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().FromIdAsync(*reinterpret_cast<const hstring *>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RequestAccessAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Perception::PerceptionFrameSourceAccessStatus>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().RequestAccessAsync());
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
    HRESULT __stdcall add_SourceAdded(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceAddedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().SourceAdded(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceAddedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceAdded(event_token token) noexcept override
    {
        try
        {
            this->shim().SourceAdded(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SourceRemoved(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceRemovedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().SourceRemoved(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceRemovedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SourceRemoved(event_token token) noexcept override
    {
        try
        {
            this->shim().SourceRemoved(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Stopped(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Stopped(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Stopped(event_token token) noexcept override
    {
        try
        {
            this->shim().Stopped(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_EnumerationCompleted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().EnumerationCompleted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_EnumerationCompleted(event_token token) noexcept override
    {
        try
        {
            this->shim().EnumerationCompleted(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Status(Windows::Devices::Enumeration::DeviceWatcherStatus * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Status());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Start() noexcept override
    {
        try
        {
            this->shim().Start();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_Stop() noexcept override
    {
        try
        {
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
    HRESULT __stdcall get_BitmapPixelFormat(Windows::Graphics::Imaging::BitmapPixelFormat * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BitmapPixelFormat());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BitmapAlphaMode(Windows::Graphics::Imaging::BitmapAlphaMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BitmapAlphaMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Width(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Width());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Height(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Height());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FrameDuration(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FrameDuration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_IsEqual(abi_arg_in<Windows::Devices::Perception::IPerceptionVideoProfile> other, bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsEqual(*reinterpret_cast<const Windows::Devices::Perception::PerceptionVideoProfile *>(&other)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Devices::Perception {

template <typename D> event_token impl_IPerceptionColorFrameSourceWatcher<D>::SourceAdded(const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceAddedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPerceptionColorFrameSourceWatcher &>(static_cast<const D &>(*this))->add_SourceAdded(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPerceptionColorFrameSourceWatcher> impl_IPerceptionColorFrameSourceWatcher<D>::SourceAdded(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceAddedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPerceptionColorFrameSourceWatcher>(this, &ABI::Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher::remove_SourceAdded, SourceAdded(handler));
}

template <typename D> void impl_IPerceptionColorFrameSourceWatcher<D>::SourceAdded(event_token token) const
{
    check_hresult(static_cast<const IPerceptionColorFrameSourceWatcher &>(static_cast<const D &>(*this))->remove_SourceAdded(token));
}

template <typename D> event_token impl_IPerceptionColorFrameSourceWatcher<D>::SourceRemoved(const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceRemovedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPerceptionColorFrameSourceWatcher &>(static_cast<const D &>(*this))->add_SourceRemoved(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPerceptionColorFrameSourceWatcher> impl_IPerceptionColorFrameSourceWatcher<D>::SourceRemoved(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::Devices::Perception::PerceptionColorFrameSourceRemovedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPerceptionColorFrameSourceWatcher>(this, &ABI::Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher::remove_SourceRemoved, SourceRemoved(handler));
}

template <typename D> void impl_IPerceptionColorFrameSourceWatcher<D>::SourceRemoved(event_token token) const
{
    check_hresult(static_cast<const IPerceptionColorFrameSourceWatcher &>(static_cast<const D &>(*this))->remove_SourceRemoved(token));
}

template <typename D> event_token impl_IPerceptionColorFrameSourceWatcher<D>::Stopped(const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPerceptionColorFrameSourceWatcher &>(static_cast<const D &>(*this))->add_Stopped(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPerceptionColorFrameSourceWatcher> impl_IPerceptionColorFrameSourceWatcher<D>::Stopped(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IPerceptionColorFrameSourceWatcher>(this, &ABI::Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher::remove_Stopped, Stopped(handler));
}

template <typename D> void impl_IPerceptionColorFrameSourceWatcher<D>::Stopped(event_token token) const
{
    check_hresult(static_cast<const IPerceptionColorFrameSourceWatcher &>(static_cast<const D &>(*this))->remove_Stopped(token));
}

template <typename D> event_token impl_IPerceptionColorFrameSourceWatcher<D>::EnumerationCompleted(const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPerceptionColorFrameSourceWatcher &>(static_cast<const D &>(*this))->add_EnumerationCompleted(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPerceptionColorFrameSourceWatcher> impl_IPerceptionColorFrameSourceWatcher<D>::EnumerationCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSourceWatcher, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IPerceptionColorFrameSourceWatcher>(this, &ABI::Windows::Devices::Perception::IPerceptionColorFrameSourceWatcher::remove_EnumerationCompleted, EnumerationCompleted(handler));
}

template <typename D> void impl_IPerceptionColorFrameSourceWatcher<D>::EnumerationCompleted(event_token token) const
{
    check_hresult(static_cast<const IPerceptionColorFrameSourceWatcher &>(static_cast<const D &>(*this))->remove_EnumerationCompleted(token));
}

template <typename D> Windows::Devices::Enumeration::DeviceWatcherStatus impl_IPerceptionColorFrameSourceWatcher<D>::Status() const
{
    Windows::Devices::Enumeration::DeviceWatcherStatus value {};
    check_hresult(static_cast<const IPerceptionColorFrameSourceWatcher &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> void impl_IPerceptionColorFrameSourceWatcher<D>::Start() const
{
    check_hresult(static_cast<const IPerceptionColorFrameSourceWatcher &>(static_cast<const D &>(*this))->abi_Start());
}

template <typename D> void impl_IPerceptionColorFrameSourceWatcher<D>::Stop() const
{
    check_hresult(static_cast<const IPerceptionColorFrameSourceWatcher &>(static_cast<const D &>(*this))->abi_Stop());
}

template <typename D> event_token impl_IPerceptionDepthFrameSourceWatcher<D>::SourceAdded(const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceAddedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPerceptionDepthFrameSourceWatcher &>(static_cast<const D &>(*this))->add_SourceAdded(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPerceptionDepthFrameSourceWatcher> impl_IPerceptionDepthFrameSourceWatcher<D>::SourceAdded(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceAddedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPerceptionDepthFrameSourceWatcher>(this, &ABI::Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher::remove_SourceAdded, SourceAdded(handler));
}

template <typename D> void impl_IPerceptionDepthFrameSourceWatcher<D>::SourceAdded(event_token token) const
{
    check_hresult(static_cast<const IPerceptionDepthFrameSourceWatcher &>(static_cast<const D &>(*this))->remove_SourceAdded(token));
}

template <typename D> event_token impl_IPerceptionDepthFrameSourceWatcher<D>::SourceRemoved(const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceRemovedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPerceptionDepthFrameSourceWatcher &>(static_cast<const D &>(*this))->add_SourceRemoved(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPerceptionDepthFrameSourceWatcher> impl_IPerceptionDepthFrameSourceWatcher<D>::SourceRemoved(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::Devices::Perception::PerceptionDepthFrameSourceRemovedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPerceptionDepthFrameSourceWatcher>(this, &ABI::Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher::remove_SourceRemoved, SourceRemoved(handler));
}

template <typename D> void impl_IPerceptionDepthFrameSourceWatcher<D>::SourceRemoved(event_token token) const
{
    check_hresult(static_cast<const IPerceptionDepthFrameSourceWatcher &>(static_cast<const D &>(*this))->remove_SourceRemoved(token));
}

template <typename D> event_token impl_IPerceptionDepthFrameSourceWatcher<D>::Stopped(const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPerceptionDepthFrameSourceWatcher &>(static_cast<const D &>(*this))->add_Stopped(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPerceptionDepthFrameSourceWatcher> impl_IPerceptionDepthFrameSourceWatcher<D>::Stopped(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IPerceptionDepthFrameSourceWatcher>(this, &ABI::Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher::remove_Stopped, Stopped(handler));
}

template <typename D> void impl_IPerceptionDepthFrameSourceWatcher<D>::Stopped(event_token token) const
{
    check_hresult(static_cast<const IPerceptionDepthFrameSourceWatcher &>(static_cast<const D &>(*this))->remove_Stopped(token));
}

template <typename D> event_token impl_IPerceptionDepthFrameSourceWatcher<D>::EnumerationCompleted(const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPerceptionDepthFrameSourceWatcher &>(static_cast<const D &>(*this))->add_EnumerationCompleted(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPerceptionDepthFrameSourceWatcher> impl_IPerceptionDepthFrameSourceWatcher<D>::EnumerationCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IPerceptionDepthFrameSourceWatcher>(this, &ABI::Windows::Devices::Perception::IPerceptionDepthFrameSourceWatcher::remove_EnumerationCompleted, EnumerationCompleted(handler));
}

template <typename D> void impl_IPerceptionDepthFrameSourceWatcher<D>::EnumerationCompleted(event_token token) const
{
    check_hresult(static_cast<const IPerceptionDepthFrameSourceWatcher &>(static_cast<const D &>(*this))->remove_EnumerationCompleted(token));
}

template <typename D> Windows::Devices::Enumeration::DeviceWatcherStatus impl_IPerceptionDepthFrameSourceWatcher<D>::Status() const
{
    Windows::Devices::Enumeration::DeviceWatcherStatus value {};
    check_hresult(static_cast<const IPerceptionDepthFrameSourceWatcher &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> void impl_IPerceptionDepthFrameSourceWatcher<D>::Start() const
{
    check_hresult(static_cast<const IPerceptionDepthFrameSourceWatcher &>(static_cast<const D &>(*this))->abi_Start());
}

template <typename D> void impl_IPerceptionDepthFrameSourceWatcher<D>::Stop() const
{
    check_hresult(static_cast<const IPerceptionDepthFrameSourceWatcher &>(static_cast<const D &>(*this))->abi_Stop());
}

template <typename D> event_token impl_IPerceptionInfraredFrameSourceWatcher<D>::SourceAdded(const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceAddedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPerceptionInfraredFrameSourceWatcher &>(static_cast<const D &>(*this))->add_SourceAdded(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPerceptionInfraredFrameSourceWatcher> impl_IPerceptionInfraredFrameSourceWatcher<D>::SourceAdded(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceAddedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPerceptionInfraredFrameSourceWatcher>(this, &ABI::Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher::remove_SourceAdded, SourceAdded(handler));
}

template <typename D> void impl_IPerceptionInfraredFrameSourceWatcher<D>::SourceAdded(event_token token) const
{
    check_hresult(static_cast<const IPerceptionInfraredFrameSourceWatcher &>(static_cast<const D &>(*this))->remove_SourceAdded(token));
}

template <typename D> event_token impl_IPerceptionInfraredFrameSourceWatcher<D>::SourceRemoved(const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceRemovedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPerceptionInfraredFrameSourceWatcher &>(static_cast<const D &>(*this))->add_SourceRemoved(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPerceptionInfraredFrameSourceWatcher> impl_IPerceptionInfraredFrameSourceWatcher<D>::SourceRemoved(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::Devices::Perception::PerceptionInfraredFrameSourceRemovedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPerceptionInfraredFrameSourceWatcher>(this, &ABI::Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher::remove_SourceRemoved, SourceRemoved(handler));
}

template <typename D> void impl_IPerceptionInfraredFrameSourceWatcher<D>::SourceRemoved(event_token token) const
{
    check_hresult(static_cast<const IPerceptionInfraredFrameSourceWatcher &>(static_cast<const D &>(*this))->remove_SourceRemoved(token));
}

template <typename D> event_token impl_IPerceptionInfraredFrameSourceWatcher<D>::Stopped(const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPerceptionInfraredFrameSourceWatcher &>(static_cast<const D &>(*this))->add_Stopped(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPerceptionInfraredFrameSourceWatcher> impl_IPerceptionInfraredFrameSourceWatcher<D>::Stopped(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IPerceptionInfraredFrameSourceWatcher>(this, &ABI::Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher::remove_Stopped, Stopped(handler));
}

template <typename D> void impl_IPerceptionInfraredFrameSourceWatcher<D>::Stopped(event_token token) const
{
    check_hresult(static_cast<const IPerceptionInfraredFrameSourceWatcher &>(static_cast<const D &>(*this))->remove_Stopped(token));
}

template <typename D> event_token impl_IPerceptionInfraredFrameSourceWatcher<D>::EnumerationCompleted(const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPerceptionInfraredFrameSourceWatcher &>(static_cast<const D &>(*this))->add_EnumerationCompleted(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPerceptionInfraredFrameSourceWatcher> impl_IPerceptionInfraredFrameSourceWatcher<D>::EnumerationCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IPerceptionInfraredFrameSourceWatcher>(this, &ABI::Windows::Devices::Perception::IPerceptionInfraredFrameSourceWatcher::remove_EnumerationCompleted, EnumerationCompleted(handler));
}

template <typename D> void impl_IPerceptionInfraredFrameSourceWatcher<D>::EnumerationCompleted(event_token token) const
{
    check_hresult(static_cast<const IPerceptionInfraredFrameSourceWatcher &>(static_cast<const D &>(*this))->remove_EnumerationCompleted(token));
}

template <typename D> Windows::Devices::Enumeration::DeviceWatcherStatus impl_IPerceptionInfraredFrameSourceWatcher<D>::Status() const
{
    Windows::Devices::Enumeration::DeviceWatcherStatus value {};
    check_hresult(static_cast<const IPerceptionInfraredFrameSourceWatcher &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> void impl_IPerceptionInfraredFrameSourceWatcher<D>::Start() const
{
    check_hresult(static_cast<const IPerceptionInfraredFrameSourceWatcher &>(static_cast<const D &>(*this))->abi_Start());
}

template <typename D> void impl_IPerceptionInfraredFrameSourceWatcher<D>::Stop() const
{
    check_hresult(static_cast<const IPerceptionInfraredFrameSourceWatcher &>(static_cast<const D &>(*this))->abi_Stop());
}

template <typename D> Windows::Devices::Perception::PerceptionColorFrameSource impl_IPerceptionColorFrameSourceAddedEventArgs<D>::FrameSource() const
{
    Windows::Devices::Perception::PerceptionColorFrameSource value { nullptr };
    check_hresult(static_cast<const IPerceptionColorFrameSourceAddedEventArgs &>(static_cast<const D &>(*this))->get_FrameSource(put(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionColorFrameSource impl_IPerceptionColorFrameSourceRemovedEventArgs<D>::FrameSource() const
{
    Windows::Devices::Perception::PerceptionColorFrameSource value { nullptr };
    check_hresult(static_cast<const IPerceptionColorFrameSourceRemovedEventArgs &>(static_cast<const D &>(*this))->get_FrameSource(put(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionDepthFrameSource impl_IPerceptionDepthFrameSourceAddedEventArgs<D>::FrameSource() const
{
    Windows::Devices::Perception::PerceptionDepthFrameSource value { nullptr };
    check_hresult(static_cast<const IPerceptionDepthFrameSourceAddedEventArgs &>(static_cast<const D &>(*this))->get_FrameSource(put(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionDepthFrameSource impl_IPerceptionDepthFrameSourceRemovedEventArgs<D>::FrameSource() const
{
    Windows::Devices::Perception::PerceptionDepthFrameSource value { nullptr };
    check_hresult(static_cast<const IPerceptionDepthFrameSourceRemovedEventArgs &>(static_cast<const D &>(*this))->get_FrameSource(put(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionInfraredFrameSource impl_IPerceptionInfraredFrameSourceAddedEventArgs<D>::FrameSource() const
{
    Windows::Devices::Perception::PerceptionInfraredFrameSource value { nullptr };
    check_hresult(static_cast<const IPerceptionInfraredFrameSourceAddedEventArgs &>(static_cast<const D &>(*this))->get_FrameSource(put(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionInfraredFrameSource impl_IPerceptionInfraredFrameSourceRemovedEventArgs<D>::FrameSource() const
{
    Windows::Devices::Perception::PerceptionInfraredFrameSource value { nullptr };
    check_hresult(static_cast<const IPerceptionInfraredFrameSourceRemovedEventArgs &>(static_cast<const D &>(*this))->get_FrameSource(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownPerceptionFrameSourcePropertiesStatics<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IKnownPerceptionFrameSourcePropertiesStatics &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownPerceptionFrameSourcePropertiesStatics<D>::PhysicalDeviceIds() const
{
    hstring value;
    check_hresult(static_cast<const IKnownPerceptionFrameSourcePropertiesStatics &>(static_cast<const D &>(*this))->get_PhysicalDeviceIds(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownPerceptionFrameSourcePropertiesStatics<D>::FrameKind() const
{
    hstring value;
    check_hresult(static_cast<const IKnownPerceptionFrameSourcePropertiesStatics &>(static_cast<const D &>(*this))->get_FrameKind(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownPerceptionFrameSourcePropertiesStatics<D>::DeviceModelVersion() const
{
    hstring value;
    check_hresult(static_cast<const IKnownPerceptionFrameSourcePropertiesStatics &>(static_cast<const D &>(*this))->get_DeviceModelVersion(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownPerceptionFrameSourcePropertiesStatics<D>::EnclosureLocation() const
{
    hstring value;
    check_hresult(static_cast<const IKnownPerceptionFrameSourcePropertiesStatics &>(static_cast<const D &>(*this))->get_EnclosureLocation(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownPerceptionFrameSourcePropertiesStatics2<D>::DeviceId() const
{
    hstring value;
    check_hresult(static_cast<const IKnownPerceptionFrameSourcePropertiesStatics2 &>(static_cast<const D &>(*this))->get_DeviceId(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownPerceptionVideoFrameSourcePropertiesStatics<D>::VideoProfile() const
{
    hstring value;
    check_hresult(static_cast<const IKnownPerceptionVideoFrameSourcePropertiesStatics &>(static_cast<const D &>(*this))->get_VideoProfile(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownPerceptionVideoFrameSourcePropertiesStatics<D>::SupportedVideoProfiles() const
{
    hstring value;
    check_hresult(static_cast<const IKnownPerceptionVideoFrameSourcePropertiesStatics &>(static_cast<const D &>(*this))->get_SupportedVideoProfiles(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownPerceptionVideoFrameSourcePropertiesStatics<D>::AvailableVideoProfiles() const
{
    hstring value;
    check_hresult(static_cast<const IKnownPerceptionVideoFrameSourcePropertiesStatics &>(static_cast<const D &>(*this))->get_AvailableVideoProfiles(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownPerceptionVideoFrameSourcePropertiesStatics<D>::IsMirrored() const
{
    hstring value;
    check_hresult(static_cast<const IKnownPerceptionVideoFrameSourcePropertiesStatics &>(static_cast<const D &>(*this))->get_IsMirrored(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownPerceptionVideoFrameSourcePropertiesStatics<D>::CameraIntrinsics() const
{
    hstring value;
    check_hresult(static_cast<const IKnownPerceptionVideoFrameSourcePropertiesStatics &>(static_cast<const D &>(*this))->get_CameraIntrinsics(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownPerceptionInfraredFrameSourcePropertiesStatics<D>::Exposure() const
{
    hstring value;
    check_hresult(static_cast<const IKnownPerceptionInfraredFrameSourcePropertiesStatics &>(static_cast<const D &>(*this))->get_Exposure(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownPerceptionInfraredFrameSourcePropertiesStatics<D>::AutoExposureEnabled() const
{
    hstring value;
    check_hresult(static_cast<const IKnownPerceptionInfraredFrameSourcePropertiesStatics &>(static_cast<const D &>(*this))->get_AutoExposureEnabled(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownPerceptionInfraredFrameSourcePropertiesStatics<D>::ExposureCompensation() const
{
    hstring value;
    check_hresult(static_cast<const IKnownPerceptionInfraredFrameSourcePropertiesStatics &>(static_cast<const D &>(*this))->get_ExposureCompensation(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownPerceptionInfraredFrameSourcePropertiesStatics<D>::ActiveIlluminationEnabled() const
{
    hstring value;
    check_hresult(static_cast<const IKnownPerceptionInfraredFrameSourcePropertiesStatics &>(static_cast<const D &>(*this))->get_ActiveIlluminationEnabled(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownPerceptionInfraredFrameSourcePropertiesStatics<D>::AmbientSubtractionEnabled() const
{
    hstring value;
    check_hresult(static_cast<const IKnownPerceptionInfraredFrameSourcePropertiesStatics &>(static_cast<const D &>(*this))->get_AmbientSubtractionEnabled(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownPerceptionInfraredFrameSourcePropertiesStatics<D>::StructureLightPatternEnabled() const
{
    hstring value;
    check_hresult(static_cast<const IKnownPerceptionInfraredFrameSourcePropertiesStatics &>(static_cast<const D &>(*this))->get_StructureLightPatternEnabled(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownPerceptionInfraredFrameSourcePropertiesStatics<D>::InterleavedIlluminationEnabled() const
{
    hstring value;
    check_hresult(static_cast<const IKnownPerceptionInfraredFrameSourcePropertiesStatics &>(static_cast<const D &>(*this))->get_InterleavedIlluminationEnabled(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownPerceptionDepthFrameSourcePropertiesStatics<D>::MinDepth() const
{
    hstring value;
    check_hresult(static_cast<const IKnownPerceptionDepthFrameSourcePropertiesStatics &>(static_cast<const D &>(*this))->get_MinDepth(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownPerceptionDepthFrameSourcePropertiesStatics<D>::MaxDepth() const
{
    hstring value;
    check_hresult(static_cast<const IKnownPerceptionDepthFrameSourcePropertiesStatics &>(static_cast<const D &>(*this))->get_MaxDepth(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownPerceptionColorFrameSourcePropertiesStatics<D>::Exposure() const
{
    hstring value;
    check_hresult(static_cast<const IKnownPerceptionColorFrameSourcePropertiesStatics &>(static_cast<const D &>(*this))->get_Exposure(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownPerceptionColorFrameSourcePropertiesStatics<D>::AutoExposureEnabled() const
{
    hstring value;
    check_hresult(static_cast<const IKnownPerceptionColorFrameSourcePropertiesStatics &>(static_cast<const D &>(*this))->get_AutoExposureEnabled(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownPerceptionColorFrameSourcePropertiesStatics<D>::ExposureCompensation() const
{
    hstring value;
    check_hresult(static_cast<const IKnownPerceptionColorFrameSourcePropertiesStatics &>(static_cast<const D &>(*this))->get_ExposureCompensation(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownPerceptionVideoProfilePropertiesStatics<D>::BitmapPixelFormat() const
{
    hstring value;
    check_hresult(static_cast<const IKnownPerceptionVideoProfilePropertiesStatics &>(static_cast<const D &>(*this))->get_BitmapPixelFormat(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownPerceptionVideoProfilePropertiesStatics<D>::BitmapAlphaMode() const
{
    hstring value;
    check_hresult(static_cast<const IKnownPerceptionVideoProfilePropertiesStatics &>(static_cast<const D &>(*this))->get_BitmapAlphaMode(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownPerceptionVideoProfilePropertiesStatics<D>::Width() const
{
    hstring value;
    check_hresult(static_cast<const IKnownPerceptionVideoProfilePropertiesStatics &>(static_cast<const D &>(*this))->get_Width(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownPerceptionVideoProfilePropertiesStatics<D>::Height() const
{
    hstring value;
    check_hresult(static_cast<const IKnownPerceptionVideoProfilePropertiesStatics &>(static_cast<const D &>(*this))->get_Height(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownPerceptionVideoProfilePropertiesStatics<D>::FrameDuration() const
{
    hstring value;
    check_hresult(static_cast<const IKnownPerceptionVideoProfilePropertiesStatics &>(static_cast<const D &>(*this))->get_FrameDuration(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownCameraIntrinsicsPropertiesStatics<D>::FocalLength() const
{
    hstring value;
    check_hresult(static_cast<const IKnownCameraIntrinsicsPropertiesStatics &>(static_cast<const D &>(*this))->get_FocalLength(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownCameraIntrinsicsPropertiesStatics<D>::PrincipalPoint() const
{
    hstring value;
    check_hresult(static_cast<const IKnownCameraIntrinsicsPropertiesStatics &>(static_cast<const D &>(*this))->get_PrincipalPoint(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownCameraIntrinsicsPropertiesStatics<D>::RadialDistortion() const
{
    hstring value;
    check_hresult(static_cast<const IKnownCameraIntrinsicsPropertiesStatics &>(static_cast<const D &>(*this))->get_RadialDistortion(put(value)));
    return value;
}

template <typename D> hstring impl_IKnownCameraIntrinsicsPropertiesStatics<D>::TangentialDistortion() const
{
    hstring value;
    check_hresult(static_cast<const IKnownCameraIntrinsicsPropertiesStatics &>(static_cast<const D &>(*this))->get_TangentialDistortion(put(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus impl_IPerceptionFrameSourcePropertyChangeResult<D>::Status() const
{
    Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus value {};
    check_hresult(static_cast<const IPerceptionFrameSourcePropertyChangeResult &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::IInspectable impl_IPerceptionFrameSourcePropertyChangeResult<D>::NewValue() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IPerceptionFrameSourcePropertyChangeResult &>(static_cast<const D &>(*this))->get_NewValue(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::CollectionChange impl_IPerceptionFrameSourcePropertiesChangedEventArgs<D>::CollectionChange() const
{
    Windows::Foundation::Collections::CollectionChange value {};
    check_hresult(static_cast<const IPerceptionFrameSourcePropertiesChangedEventArgs &>(static_cast<const D &>(*this))->get_CollectionChange(&value));
    return value;
}

template <typename D> hstring impl_IPerceptionFrameSourcePropertiesChangedEventArgs<D>::Key() const
{
    hstring value;
    check_hresult(static_cast<const IPerceptionFrameSourcePropertiesChangedEventArgs &>(static_cast<const D &>(*this))->get_Key(put(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher impl_IPerceptionInfraredFrameSourceStatics<D>::CreateWatcher() const
{
    Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher watcher { nullptr };
    check_hresult(static_cast<const IPerceptionInfraredFrameSourceStatics &>(static_cast<const D &>(*this))->abi_CreateWatcher(put(watcher)));
    return watcher;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionInfraredFrameSource>> impl_IPerceptionInfraredFrameSourceStatics<D>::FindAllAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionInfraredFrameSource>> result;
    check_hresult(static_cast<const IPerceptionInfraredFrameSourceStatics &>(static_cast<const D &>(*this))->abi_FindAllAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionInfraredFrameSource> impl_IPerceptionInfraredFrameSourceStatics<D>::FromIdAsync(hstring_ref id) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionInfraredFrameSource> result;
    check_hresult(static_cast<const IPerceptionInfraredFrameSourceStatics &>(static_cast<const D &>(*this))->abi_FromIdAsync(get(id), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> impl_IPerceptionInfraredFrameSourceStatics<D>::RequestAccessAsync() const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> result;
    check_hresult(static_cast<const IPerceptionInfraredFrameSourceStatics &>(static_cast<const D &>(*this))->abi_RequestAccessAsync(put(result)));
    return result;
}

template <typename D> Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher impl_IPerceptionDepthFrameSourceStatics<D>::CreateWatcher() const
{
    Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher watcher { nullptr };
    check_hresult(static_cast<const IPerceptionDepthFrameSourceStatics &>(static_cast<const D &>(*this))->abi_CreateWatcher(put(watcher)));
    return watcher;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionDepthFrameSource>> impl_IPerceptionDepthFrameSourceStatics<D>::FindAllAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionDepthFrameSource>> result;
    check_hresult(static_cast<const IPerceptionDepthFrameSourceStatics &>(static_cast<const D &>(*this))->abi_FindAllAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthFrameSource> impl_IPerceptionDepthFrameSourceStatics<D>::FromIdAsync(hstring_ref id) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthFrameSource> result;
    check_hresult(static_cast<const IPerceptionDepthFrameSourceStatics &>(static_cast<const D &>(*this))->abi_FromIdAsync(get(id), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> impl_IPerceptionDepthFrameSourceStatics<D>::RequestAccessAsync() const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> result;
    check_hresult(static_cast<const IPerceptionDepthFrameSourceStatics &>(static_cast<const D &>(*this))->abi_RequestAccessAsync(put(result)));
    return result;
}

template <typename D> Windows::Devices::Perception::PerceptionColorFrameSourceWatcher impl_IPerceptionColorFrameSourceStatics<D>::CreateWatcher() const
{
    Windows::Devices::Perception::PerceptionColorFrameSourceWatcher watcher { nullptr };
    check_hresult(static_cast<const IPerceptionColorFrameSourceStatics &>(static_cast<const D &>(*this))->abi_CreateWatcher(put(watcher)));
    return watcher;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionColorFrameSource>> impl_IPerceptionColorFrameSourceStatics<D>::FindAllAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionColorFrameSource>> result;
    check_hresult(static_cast<const IPerceptionColorFrameSourceStatics &>(static_cast<const D &>(*this))->abi_FindAllAsync(put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionColorFrameSource> impl_IPerceptionColorFrameSourceStatics<D>::FromIdAsync(hstring_ref id) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionColorFrameSource> result;
    check_hresult(static_cast<const IPerceptionColorFrameSourceStatics &>(static_cast<const D &>(*this))->abi_FromIdAsync(get(id), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> impl_IPerceptionColorFrameSourceStatics<D>::RequestAccessAsync() const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> result;
    check_hresult(static_cast<const IPerceptionColorFrameSourceStatics &>(static_cast<const D &>(*this))->abi_RequestAccessAsync(put(result)));
    return result;
}

template <typename D> event_token impl_IPerceptionColorFrameSource<D>::AvailableChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPerceptionColorFrameSource &>(static_cast<const D &>(*this))->add_AvailableChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPerceptionColorFrameSource> impl_IPerceptionColorFrameSource<D>::AvailableChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IPerceptionColorFrameSource>(this, &ABI::Windows::Devices::Perception::IPerceptionColorFrameSource::remove_AvailableChanged, AvailableChanged(handler));
}

template <typename D> void impl_IPerceptionColorFrameSource<D>::AvailableChanged(event_token token) const
{
    check_hresult(static_cast<const IPerceptionColorFrameSource &>(static_cast<const D &>(*this))->remove_AvailableChanged(token));
}

template <typename D> event_token impl_IPerceptionColorFrameSource<D>::ActiveChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPerceptionColorFrameSource &>(static_cast<const D &>(*this))->add_ActiveChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPerceptionColorFrameSource> impl_IPerceptionColorFrameSource<D>::ActiveChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IPerceptionColorFrameSource>(this, &ABI::Windows::Devices::Perception::IPerceptionColorFrameSource::remove_ActiveChanged, ActiveChanged(handler));
}

template <typename D> void impl_IPerceptionColorFrameSource<D>::ActiveChanged(event_token token) const
{
    check_hresult(static_cast<const IPerceptionColorFrameSource &>(static_cast<const D &>(*this))->remove_ActiveChanged(token));
}

template <typename D> event_token impl_IPerceptionColorFrameSource<D>::PropertiesChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPerceptionColorFrameSource &>(static_cast<const D &>(*this))->add_PropertiesChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPerceptionColorFrameSource> impl_IPerceptionColorFrameSource<D>::PropertiesChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPerceptionColorFrameSource>(this, &ABI::Windows::Devices::Perception::IPerceptionColorFrameSource::remove_PropertiesChanged, PropertiesChanged(handler));
}

template <typename D> void impl_IPerceptionColorFrameSource<D>::PropertiesChanged(event_token token) const
{
    check_hresult(static_cast<const IPerceptionColorFrameSource &>(static_cast<const D &>(*this))->remove_PropertiesChanged(token));
}

template <typename D> event_token impl_IPerceptionColorFrameSource<D>::VideoProfileChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPerceptionColorFrameSource &>(static_cast<const D &>(*this))->add_VideoProfileChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPerceptionColorFrameSource> impl_IPerceptionColorFrameSource<D>::VideoProfileChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IPerceptionColorFrameSource>(this, &ABI::Windows::Devices::Perception::IPerceptionColorFrameSource::remove_VideoProfileChanged, VideoProfileChanged(handler));
}

template <typename D> void impl_IPerceptionColorFrameSource<D>::VideoProfileChanged(event_token token) const
{
    check_hresult(static_cast<const IPerceptionColorFrameSource &>(static_cast<const D &>(*this))->remove_VideoProfileChanged(token));
}

template <typename D> event_token impl_IPerceptionColorFrameSource<D>::CameraIntrinsicsChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPerceptionColorFrameSource &>(static_cast<const D &>(*this))->add_CameraIntrinsicsChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPerceptionColorFrameSource> impl_IPerceptionColorFrameSource<D>::CameraIntrinsicsChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameSource, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IPerceptionColorFrameSource>(this, &ABI::Windows::Devices::Perception::IPerceptionColorFrameSource::remove_CameraIntrinsicsChanged, CameraIntrinsicsChanged(handler));
}

template <typename D> void impl_IPerceptionColorFrameSource<D>::CameraIntrinsicsChanged(event_token token) const
{
    check_hresult(static_cast<const IPerceptionColorFrameSource &>(static_cast<const D &>(*this))->remove_CameraIntrinsicsChanged(token));
}

template <typename D> hstring impl_IPerceptionColorFrameSource<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IPerceptionColorFrameSource &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> hstring impl_IPerceptionColorFrameSource<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IPerceptionColorFrameSource &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> hstring impl_IPerceptionColorFrameSource<D>::DeviceKind() const
{
    hstring value;
    check_hresult(static_cast<const IPerceptionColorFrameSource &>(static_cast<const D &>(*this))->get_DeviceKind(put(value)));
    return value;
}

template <typename D> bool impl_IPerceptionColorFrameSource<D>::Available() const
{
    bool value {};
    check_hresult(static_cast<const IPerceptionColorFrameSource &>(static_cast<const D &>(*this))->get_Available(&value));
    return value;
}

template <typename D> bool impl_IPerceptionColorFrameSource<D>::Active() const
{
    bool value {};
    check_hresult(static_cast<const IPerceptionColorFrameSource &>(static_cast<const D &>(*this))->get_Active(&value));
    return value;
}

template <typename D> bool impl_IPerceptionColorFrameSource<D>::IsControlled() const
{
    bool value {};
    check_hresult(static_cast<const IPerceptionColorFrameSource &>(static_cast<const D &>(*this))->get_IsControlled(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> impl_IPerceptionColorFrameSource<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> value;
    check_hresult(static_cast<const IPerceptionColorFrameSource &>(static_cast<const D &>(*this))->get_Properties(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> impl_IPerceptionColorFrameSource<D>::SupportedVideoProfiles() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> value;
    check_hresult(static_cast<const IPerceptionColorFrameSource &>(static_cast<const D &>(*this))->get_SupportedVideoProfiles(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> impl_IPerceptionColorFrameSource<D>::AvailableVideoProfiles() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> value;
    check_hresult(static_cast<const IPerceptionColorFrameSource &>(static_cast<const D &>(*this))->get_AvailableVideoProfiles(put(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionVideoProfile impl_IPerceptionColorFrameSource<D>::VideoProfile() const
{
    Windows::Devices::Perception::PerceptionVideoProfile value { nullptr };
    check_hresult(static_cast<const IPerceptionColorFrameSource &>(static_cast<const D &>(*this))->get_VideoProfile(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::Core::CameraIntrinsics impl_IPerceptionColorFrameSource<D>::CameraIntrinsics() const
{
    Windows::Media::Devices::Core::CameraIntrinsics value { nullptr };
    check_hresult(static_cast<const IPerceptionColorFrameSource &>(static_cast<const D &>(*this))->get_CameraIntrinsics(put(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionControlSession impl_IPerceptionColorFrameSource<D>::AcquireControlSession() const
{
    Windows::Devices::Perception::PerceptionControlSession value { nullptr };
    check_hresult(static_cast<const IPerceptionColorFrameSource &>(static_cast<const D &>(*this))->abi_AcquireControlSession(put(value)));
    return value;
}

template <typename D> bool impl_IPerceptionColorFrameSource<D>::CanControlIndependentlyFrom(hstring_ref targetId) const
{
    bool result {};
    check_hresult(static_cast<const IPerceptionColorFrameSource &>(static_cast<const D &>(*this))->abi_CanControlIndependentlyFrom(get(targetId), &result));
    return result;
}

template <typename D> bool impl_IPerceptionColorFrameSource<D>::IsCorrelatedWith(hstring_ref targetId) const
{
    bool result {};
    check_hresult(static_cast<const IPerceptionColorFrameSource &>(static_cast<const D &>(*this))->abi_IsCorrelatedWith(get(targetId), &result));
    return result;
}

template <typename D> bool impl_IPerceptionColorFrameSource<D>::TryGetTransformTo(hstring_ref targetId, Windows::Foundation::Numerics::float4x4 & result) const
{
    bool hasResult {};
    check_hresult(static_cast<const IPerceptionColorFrameSource &>(static_cast<const D &>(*this))->abi_TryGetTransformTo(get(targetId), put(result), &hasResult));
    return hasResult;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics> impl_IPerceptionColorFrameSource<D>::TryGetDepthCorrelatedCameraIntrinsicsAsync(const Windows::Devices::Perception::PerceptionDepthFrameSource & correlatedDepthFrameSource) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics> result;
    check_hresult(static_cast<const IPerceptionColorFrameSource &>(static_cast<const D &>(*this))->abi_TryGetDepthCorrelatedCameraIntrinsicsAsync(get(correlatedDepthFrameSource), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper> impl_IPerceptionColorFrameSource<D>::TryGetDepthCorrelatedCoordinateMapperAsync(hstring_ref targetSourceId, const Windows::Devices::Perception::PerceptionDepthFrameSource & correlatedDepthFrameSource) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper> result;
    check_hresult(static_cast<const IPerceptionColorFrameSource &>(static_cast<const D &>(*this))->abi_TryGetDepthCorrelatedCoordinateMapperAsync(get(targetSourceId), get(correlatedDepthFrameSource), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> impl_IPerceptionColorFrameSource<D>::TrySetVideoProfileAsync(const Windows::Devices::Perception::PerceptionControlSession & controlSession, const Windows::Devices::Perception::PerceptionVideoProfile & profile) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> result;
    check_hresult(static_cast<const IPerceptionColorFrameSource &>(static_cast<const D &>(*this))->abi_TrySetVideoProfileAsync(get(controlSession), get(profile), put(result)));
    return result;
}

template <typename D> Windows::Devices::Perception::PerceptionColorFrameReader impl_IPerceptionColorFrameSource<D>::OpenReader() const
{
    Windows::Devices::Perception::PerceptionColorFrameReader result { nullptr };
    check_hresult(static_cast<const IPerceptionColorFrameSource &>(static_cast<const D &>(*this))->abi_OpenReader(put(result)));
    return result;
}

template <typename D> hstring impl_IPerceptionColorFrameSource2<D>::DeviceId() const
{
    hstring value;
    check_hresult(static_cast<const IPerceptionColorFrameSource2 &>(static_cast<const D &>(*this))->get_DeviceId(put(value)));
    return value;
}

template <typename D> event_token impl_IPerceptionDepthFrameSource<D>::AvailableChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPerceptionDepthFrameSource &>(static_cast<const D &>(*this))->add_AvailableChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPerceptionDepthFrameSource> impl_IPerceptionDepthFrameSource<D>::AvailableChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IPerceptionDepthFrameSource>(this, &ABI::Windows::Devices::Perception::IPerceptionDepthFrameSource::remove_AvailableChanged, AvailableChanged(handler));
}

template <typename D> void impl_IPerceptionDepthFrameSource<D>::AvailableChanged(event_token token) const
{
    check_hresult(static_cast<const IPerceptionDepthFrameSource &>(static_cast<const D &>(*this))->remove_AvailableChanged(token));
}

template <typename D> event_token impl_IPerceptionDepthFrameSource<D>::ActiveChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPerceptionDepthFrameSource &>(static_cast<const D &>(*this))->add_ActiveChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPerceptionDepthFrameSource> impl_IPerceptionDepthFrameSource<D>::ActiveChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IPerceptionDepthFrameSource>(this, &ABI::Windows::Devices::Perception::IPerceptionDepthFrameSource::remove_ActiveChanged, ActiveChanged(handler));
}

template <typename D> void impl_IPerceptionDepthFrameSource<D>::ActiveChanged(event_token token) const
{
    check_hresult(static_cast<const IPerceptionDepthFrameSource &>(static_cast<const D &>(*this))->remove_ActiveChanged(token));
}

template <typename D> event_token impl_IPerceptionDepthFrameSource<D>::PropertiesChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPerceptionDepthFrameSource &>(static_cast<const D &>(*this))->add_PropertiesChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPerceptionDepthFrameSource> impl_IPerceptionDepthFrameSource<D>::PropertiesChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPerceptionDepthFrameSource>(this, &ABI::Windows::Devices::Perception::IPerceptionDepthFrameSource::remove_PropertiesChanged, PropertiesChanged(handler));
}

template <typename D> void impl_IPerceptionDepthFrameSource<D>::PropertiesChanged(event_token token) const
{
    check_hresult(static_cast<const IPerceptionDepthFrameSource &>(static_cast<const D &>(*this))->remove_PropertiesChanged(token));
}

template <typename D> event_token impl_IPerceptionDepthFrameSource<D>::VideoProfileChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPerceptionDepthFrameSource &>(static_cast<const D &>(*this))->add_VideoProfileChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPerceptionDepthFrameSource> impl_IPerceptionDepthFrameSource<D>::VideoProfileChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IPerceptionDepthFrameSource>(this, &ABI::Windows::Devices::Perception::IPerceptionDepthFrameSource::remove_VideoProfileChanged, VideoProfileChanged(handler));
}

template <typename D> void impl_IPerceptionDepthFrameSource<D>::VideoProfileChanged(event_token token) const
{
    check_hresult(static_cast<const IPerceptionDepthFrameSource &>(static_cast<const D &>(*this))->remove_VideoProfileChanged(token));
}

template <typename D> event_token impl_IPerceptionDepthFrameSource<D>::CameraIntrinsicsChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPerceptionDepthFrameSource &>(static_cast<const D &>(*this))->add_CameraIntrinsicsChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPerceptionDepthFrameSource> impl_IPerceptionDepthFrameSource<D>::CameraIntrinsicsChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameSource, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IPerceptionDepthFrameSource>(this, &ABI::Windows::Devices::Perception::IPerceptionDepthFrameSource::remove_CameraIntrinsicsChanged, CameraIntrinsicsChanged(handler));
}

template <typename D> void impl_IPerceptionDepthFrameSource<D>::CameraIntrinsicsChanged(event_token token) const
{
    check_hresult(static_cast<const IPerceptionDepthFrameSource &>(static_cast<const D &>(*this))->remove_CameraIntrinsicsChanged(token));
}

template <typename D> hstring impl_IPerceptionDepthFrameSource<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IPerceptionDepthFrameSource &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> hstring impl_IPerceptionDepthFrameSource<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IPerceptionDepthFrameSource &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> hstring impl_IPerceptionDepthFrameSource<D>::DeviceKind() const
{
    hstring value;
    check_hresult(static_cast<const IPerceptionDepthFrameSource &>(static_cast<const D &>(*this))->get_DeviceKind(put(value)));
    return value;
}

template <typename D> bool impl_IPerceptionDepthFrameSource<D>::Available() const
{
    bool value {};
    check_hresult(static_cast<const IPerceptionDepthFrameSource &>(static_cast<const D &>(*this))->get_Available(&value));
    return value;
}

template <typename D> bool impl_IPerceptionDepthFrameSource<D>::Active() const
{
    bool value {};
    check_hresult(static_cast<const IPerceptionDepthFrameSource &>(static_cast<const D &>(*this))->get_Active(&value));
    return value;
}

template <typename D> bool impl_IPerceptionDepthFrameSource<D>::IsControlled() const
{
    bool value {};
    check_hresult(static_cast<const IPerceptionDepthFrameSource &>(static_cast<const D &>(*this))->get_IsControlled(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> impl_IPerceptionDepthFrameSource<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> value;
    check_hresult(static_cast<const IPerceptionDepthFrameSource &>(static_cast<const D &>(*this))->get_Properties(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> impl_IPerceptionDepthFrameSource<D>::SupportedVideoProfiles() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> value;
    check_hresult(static_cast<const IPerceptionDepthFrameSource &>(static_cast<const D &>(*this))->get_SupportedVideoProfiles(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> impl_IPerceptionDepthFrameSource<D>::AvailableVideoProfiles() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> value;
    check_hresult(static_cast<const IPerceptionDepthFrameSource &>(static_cast<const D &>(*this))->get_AvailableVideoProfiles(put(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionVideoProfile impl_IPerceptionDepthFrameSource<D>::VideoProfile() const
{
    Windows::Devices::Perception::PerceptionVideoProfile value { nullptr };
    check_hresult(static_cast<const IPerceptionDepthFrameSource &>(static_cast<const D &>(*this))->get_VideoProfile(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::Core::CameraIntrinsics impl_IPerceptionDepthFrameSource<D>::CameraIntrinsics() const
{
    Windows::Media::Devices::Core::CameraIntrinsics value { nullptr };
    check_hresult(static_cast<const IPerceptionDepthFrameSource &>(static_cast<const D &>(*this))->get_CameraIntrinsics(put(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionControlSession impl_IPerceptionDepthFrameSource<D>::AcquireControlSession() const
{
    Windows::Devices::Perception::PerceptionControlSession result { nullptr };
    check_hresult(static_cast<const IPerceptionDepthFrameSource &>(static_cast<const D &>(*this))->abi_AcquireControlSession(put(result)));
    return result;
}

template <typename D> bool impl_IPerceptionDepthFrameSource<D>::CanControlIndependentlyFrom(hstring_ref targetId) const
{
    bool result {};
    check_hresult(static_cast<const IPerceptionDepthFrameSource &>(static_cast<const D &>(*this))->abi_CanControlIndependentlyFrom(get(targetId), &result));
    return result;
}

template <typename D> bool impl_IPerceptionDepthFrameSource<D>::IsCorrelatedWith(hstring_ref targetId) const
{
    bool result {};
    check_hresult(static_cast<const IPerceptionDepthFrameSource &>(static_cast<const D &>(*this))->abi_IsCorrelatedWith(get(targetId), &result));
    return result;
}

template <typename D> bool impl_IPerceptionDepthFrameSource<D>::TryGetTransformTo(hstring_ref targetId, Windows::Foundation::Numerics::float4x4 & result) const
{
    bool hasResult {};
    check_hresult(static_cast<const IPerceptionDepthFrameSource &>(static_cast<const D &>(*this))->abi_TryGetTransformTo(get(targetId), put(result), &hasResult));
    return hasResult;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics> impl_IPerceptionDepthFrameSource<D>::TryGetDepthCorrelatedCameraIntrinsicsAsync(const Windows::Devices::Perception::PerceptionDepthFrameSource & target) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics> result;
    check_hresult(static_cast<const IPerceptionDepthFrameSource &>(static_cast<const D &>(*this))->abi_TryGetDepthCorrelatedCameraIntrinsicsAsync(get(target), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper> impl_IPerceptionDepthFrameSource<D>::TryGetDepthCorrelatedCoordinateMapperAsync(hstring_ref targetId, const Windows::Devices::Perception::PerceptionDepthFrameSource & depthFrameSourceToMapWith) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper> result;
    check_hresult(static_cast<const IPerceptionDepthFrameSource &>(static_cast<const D &>(*this))->abi_TryGetDepthCorrelatedCoordinateMapperAsync(get(targetId), get(depthFrameSourceToMapWith), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> impl_IPerceptionDepthFrameSource<D>::TrySetVideoProfileAsync(const Windows::Devices::Perception::PerceptionControlSession & controlSession, const Windows::Devices::Perception::PerceptionVideoProfile & profile) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> result;
    check_hresult(static_cast<const IPerceptionDepthFrameSource &>(static_cast<const D &>(*this))->abi_TrySetVideoProfileAsync(get(controlSession), get(profile), put(result)));
    return result;
}

template <typename D> Windows::Devices::Perception::PerceptionDepthFrameReader impl_IPerceptionDepthFrameSource<D>::OpenReader() const
{
    Windows::Devices::Perception::PerceptionDepthFrameReader result { nullptr };
    check_hresult(static_cast<const IPerceptionDepthFrameSource &>(static_cast<const D &>(*this))->abi_OpenReader(put(result)));
    return result;
}

template <typename D> hstring impl_IPerceptionDepthFrameSource2<D>::DeviceId() const
{
    hstring value;
    check_hresult(static_cast<const IPerceptionDepthFrameSource2 &>(static_cast<const D &>(*this))->get_DeviceId(put(value)));
    return value;
}

template <typename D> event_token impl_IPerceptionInfraredFrameSource<D>::AvailableChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPerceptionInfraredFrameSource &>(static_cast<const D &>(*this))->add_AvailableChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPerceptionInfraredFrameSource> impl_IPerceptionInfraredFrameSource<D>::AvailableChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IPerceptionInfraredFrameSource>(this, &ABI::Windows::Devices::Perception::IPerceptionInfraredFrameSource::remove_AvailableChanged, AvailableChanged(handler));
}

template <typename D> void impl_IPerceptionInfraredFrameSource<D>::AvailableChanged(event_token token) const
{
    check_hresult(static_cast<const IPerceptionInfraredFrameSource &>(static_cast<const D &>(*this))->remove_AvailableChanged(token));
}

template <typename D> event_token impl_IPerceptionInfraredFrameSource<D>::ActiveChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPerceptionInfraredFrameSource &>(static_cast<const D &>(*this))->add_ActiveChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPerceptionInfraredFrameSource> impl_IPerceptionInfraredFrameSource<D>::ActiveChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IPerceptionInfraredFrameSource>(this, &ABI::Windows::Devices::Perception::IPerceptionInfraredFrameSource::remove_ActiveChanged, ActiveChanged(handler));
}

template <typename D> void impl_IPerceptionInfraredFrameSource<D>::ActiveChanged(event_token token) const
{
    check_hresult(static_cast<const IPerceptionInfraredFrameSource &>(static_cast<const D &>(*this))->remove_ActiveChanged(token));
}

template <typename D> event_token impl_IPerceptionInfraredFrameSource<D>::PropertiesChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPerceptionInfraredFrameSource &>(static_cast<const D &>(*this))->add_PropertiesChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPerceptionInfraredFrameSource> impl_IPerceptionInfraredFrameSource<D>::PropertiesChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::Devices::Perception::PerceptionFrameSourcePropertiesChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPerceptionInfraredFrameSource>(this, &ABI::Windows::Devices::Perception::IPerceptionInfraredFrameSource::remove_PropertiesChanged, PropertiesChanged(handler));
}

template <typename D> void impl_IPerceptionInfraredFrameSource<D>::PropertiesChanged(event_token token) const
{
    check_hresult(static_cast<const IPerceptionInfraredFrameSource &>(static_cast<const D &>(*this))->remove_PropertiesChanged(token));
}

template <typename D> event_token impl_IPerceptionInfraredFrameSource<D>::VideoProfileChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPerceptionInfraredFrameSource &>(static_cast<const D &>(*this))->add_VideoProfileChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPerceptionInfraredFrameSource> impl_IPerceptionInfraredFrameSource<D>::VideoProfileChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IPerceptionInfraredFrameSource>(this, &ABI::Windows::Devices::Perception::IPerceptionInfraredFrameSource::remove_VideoProfileChanged, VideoProfileChanged(handler));
}

template <typename D> void impl_IPerceptionInfraredFrameSource<D>::VideoProfileChanged(event_token token) const
{
    check_hresult(static_cast<const IPerceptionInfraredFrameSource &>(static_cast<const D &>(*this))->remove_VideoProfileChanged(token));
}

template <typename D> event_token impl_IPerceptionInfraredFrameSource<D>::CameraIntrinsicsChanged(const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPerceptionInfraredFrameSource &>(static_cast<const D &>(*this))->add_CameraIntrinsicsChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPerceptionInfraredFrameSource> impl_IPerceptionInfraredFrameSource<D>::CameraIntrinsicsChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameSource, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IPerceptionInfraredFrameSource>(this, &ABI::Windows::Devices::Perception::IPerceptionInfraredFrameSource::remove_CameraIntrinsicsChanged, CameraIntrinsicsChanged(handler));
}

template <typename D> void impl_IPerceptionInfraredFrameSource<D>::CameraIntrinsicsChanged(event_token token) const
{
    check_hresult(static_cast<const IPerceptionInfraredFrameSource &>(static_cast<const D &>(*this))->remove_CameraIntrinsicsChanged(token));
}

template <typename D> hstring impl_IPerceptionInfraredFrameSource<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IPerceptionInfraredFrameSource &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> hstring impl_IPerceptionInfraredFrameSource<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IPerceptionInfraredFrameSource &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> hstring impl_IPerceptionInfraredFrameSource<D>::DeviceKind() const
{
    hstring value;
    check_hresult(static_cast<const IPerceptionInfraredFrameSource &>(static_cast<const D &>(*this))->get_DeviceKind(put(value)));
    return value;
}

template <typename D> bool impl_IPerceptionInfraredFrameSource<D>::Available() const
{
    bool value {};
    check_hresult(static_cast<const IPerceptionInfraredFrameSource &>(static_cast<const D &>(*this))->get_Available(&value));
    return value;
}

template <typename D> bool impl_IPerceptionInfraredFrameSource<D>::Active() const
{
    bool value {};
    check_hresult(static_cast<const IPerceptionInfraredFrameSource &>(static_cast<const D &>(*this))->get_Active(&value));
    return value;
}

template <typename D> bool impl_IPerceptionInfraredFrameSource<D>::IsControlled() const
{
    bool value {};
    check_hresult(static_cast<const IPerceptionInfraredFrameSource &>(static_cast<const D &>(*this))->get_IsControlled(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> impl_IPerceptionInfraredFrameSource<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<hstring, Windows::IInspectable> value;
    check_hresult(static_cast<const IPerceptionInfraredFrameSource &>(static_cast<const D &>(*this))->get_Properties(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> impl_IPerceptionInfraredFrameSource<D>::SupportedVideoProfiles() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> value;
    check_hresult(static_cast<const IPerceptionInfraredFrameSource &>(static_cast<const D &>(*this))->get_SupportedVideoProfiles(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> impl_IPerceptionInfraredFrameSource<D>::AvailableVideoProfiles() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionVideoProfile> value;
    check_hresult(static_cast<const IPerceptionInfraredFrameSource &>(static_cast<const D &>(*this))->get_AvailableVideoProfiles(put(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionVideoProfile impl_IPerceptionInfraredFrameSource<D>::VideoProfile() const
{
    Windows::Devices::Perception::PerceptionVideoProfile value { nullptr };
    check_hresult(static_cast<const IPerceptionInfraredFrameSource &>(static_cast<const D &>(*this))->get_VideoProfile(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::Core::CameraIntrinsics impl_IPerceptionInfraredFrameSource<D>::CameraIntrinsics() const
{
    Windows::Media::Devices::Core::CameraIntrinsics value { nullptr };
    check_hresult(static_cast<const IPerceptionInfraredFrameSource &>(static_cast<const D &>(*this))->get_CameraIntrinsics(put(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionControlSession impl_IPerceptionInfraredFrameSource<D>::AcquireControlSession() const
{
    Windows::Devices::Perception::PerceptionControlSession result { nullptr };
    check_hresult(static_cast<const IPerceptionInfraredFrameSource &>(static_cast<const D &>(*this))->abi_AcquireControlSession(put(result)));
    return result;
}

template <typename D> bool impl_IPerceptionInfraredFrameSource<D>::CanControlIndependentlyFrom(hstring_ref targetId) const
{
    bool result {};
    check_hresult(static_cast<const IPerceptionInfraredFrameSource &>(static_cast<const D &>(*this))->abi_CanControlIndependentlyFrom(get(targetId), &result));
    return result;
}

template <typename D> bool impl_IPerceptionInfraredFrameSource<D>::IsCorrelatedWith(hstring_ref targetId) const
{
    bool result {};
    check_hresult(static_cast<const IPerceptionInfraredFrameSource &>(static_cast<const D &>(*this))->abi_IsCorrelatedWith(get(targetId), &result));
    return result;
}

template <typename D> bool impl_IPerceptionInfraredFrameSource<D>::TryGetTransformTo(hstring_ref targetId, Windows::Foundation::Numerics::float4x4 & result) const
{
    bool hasResult {};
    check_hresult(static_cast<const IPerceptionInfraredFrameSource &>(static_cast<const D &>(*this))->abi_TryGetTransformTo(get(targetId), put(result), &hasResult));
    return hasResult;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics> impl_IPerceptionInfraredFrameSource<D>::TryGetDepthCorrelatedCameraIntrinsicsAsync(const Windows::Devices::Perception::PerceptionDepthFrameSource & target) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCameraIntrinsics> result;
    check_hresult(static_cast<const IPerceptionInfraredFrameSource &>(static_cast<const D &>(*this))->abi_TryGetDepthCorrelatedCameraIntrinsicsAsync(get(target), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper> impl_IPerceptionInfraredFrameSource<D>::TryGetDepthCorrelatedCoordinateMapperAsync(hstring_ref targetId, const Windows::Devices::Perception::PerceptionDepthFrameSource & depthFrameSourceToMapWith) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthCorrelatedCoordinateMapper> result;
    check_hresult(static_cast<const IPerceptionInfraredFrameSource &>(static_cast<const D &>(*this))->abi_TryGetDepthCorrelatedCoordinateMapperAsync(get(targetId), get(depthFrameSourceToMapWith), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> impl_IPerceptionInfraredFrameSource<D>::TrySetVideoProfileAsync(const Windows::Devices::Perception::PerceptionControlSession & controlSession, const Windows::Devices::Perception::PerceptionVideoProfile & profile) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> result;
    check_hresult(static_cast<const IPerceptionInfraredFrameSource &>(static_cast<const D &>(*this))->abi_TrySetVideoProfileAsync(get(controlSession), get(profile), put(result)));
    return result;
}

template <typename D> Windows::Devices::Perception::PerceptionInfraredFrameReader impl_IPerceptionInfraredFrameSource<D>::OpenReader() const
{
    Windows::Devices::Perception::PerceptionInfraredFrameReader result { nullptr };
    check_hresult(static_cast<const IPerceptionInfraredFrameSource &>(static_cast<const D &>(*this))->abi_OpenReader(put(result)));
    return result;
}

template <typename D> hstring impl_IPerceptionInfraredFrameSource2<D>::DeviceId() const
{
    hstring value;
    check_hresult(static_cast<const IPerceptionInfraredFrameSource2 &>(static_cast<const D &>(*this))->get_DeviceId(put(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::BitmapPixelFormat impl_IPerceptionVideoProfile<D>::BitmapPixelFormat() const
{
    Windows::Graphics::Imaging::BitmapPixelFormat value {};
    check_hresult(static_cast<const IPerceptionVideoProfile &>(static_cast<const D &>(*this))->get_BitmapPixelFormat(&value));
    return value;
}

template <typename D> Windows::Graphics::Imaging::BitmapAlphaMode impl_IPerceptionVideoProfile<D>::BitmapAlphaMode() const
{
    Windows::Graphics::Imaging::BitmapAlphaMode value {};
    check_hresult(static_cast<const IPerceptionVideoProfile &>(static_cast<const D &>(*this))->get_BitmapAlphaMode(&value));
    return value;
}

template <typename D> int32_t impl_IPerceptionVideoProfile<D>::Width() const
{
    int32_t value {};
    check_hresult(static_cast<const IPerceptionVideoProfile &>(static_cast<const D &>(*this))->get_Width(&value));
    return value;
}

template <typename D> int32_t impl_IPerceptionVideoProfile<D>::Height() const
{
    int32_t value {};
    check_hresult(static_cast<const IPerceptionVideoProfile &>(static_cast<const D &>(*this))->get_Height(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IPerceptionVideoProfile<D>::FrameDuration() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IPerceptionVideoProfile &>(static_cast<const D &>(*this))->get_FrameDuration(put(value)));
    return value;
}

template <typename D> bool impl_IPerceptionVideoProfile<D>::IsEqual(const Windows::Devices::Perception::PerceptionVideoProfile & other) const
{
    bool result {};
    check_hresult(static_cast<const IPerceptionVideoProfile &>(static_cast<const D &>(*this))->abi_IsEqual(get(other), &result));
    return result;
}

template <typename D> Windows::Foundation::TimeSpan impl_IPerceptionColorFrameArrivedEventArgs<D>::RelativeTime() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IPerceptionColorFrameArrivedEventArgs &>(static_cast<const D &>(*this))->get_RelativeTime(put(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionColorFrame impl_IPerceptionColorFrameArrivedEventArgs<D>::TryOpenFrame() const
{
    Windows::Devices::Perception::PerceptionColorFrame result { nullptr };
    check_hresult(static_cast<const IPerceptionColorFrameArrivedEventArgs &>(static_cast<const D &>(*this))->abi_TryOpenFrame(put(result)));
    return result;
}

template <typename D> Windows::Foundation::TimeSpan impl_IPerceptionDepthFrameArrivedEventArgs<D>::RelativeTime() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IPerceptionDepthFrameArrivedEventArgs &>(static_cast<const D &>(*this))->get_RelativeTime(put(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionDepthFrame impl_IPerceptionDepthFrameArrivedEventArgs<D>::TryOpenFrame() const
{
    Windows::Devices::Perception::PerceptionDepthFrame result { nullptr };
    check_hresult(static_cast<const IPerceptionDepthFrameArrivedEventArgs &>(static_cast<const D &>(*this))->abi_TryOpenFrame(put(result)));
    return result;
}

template <typename D> Windows::Foundation::TimeSpan impl_IPerceptionInfraredFrameArrivedEventArgs<D>::RelativeTime() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IPerceptionInfraredFrameArrivedEventArgs &>(static_cast<const D &>(*this))->get_RelativeTime(put(value)));
    return value;
}

template <typename D> Windows::Devices::Perception::PerceptionInfraredFrame impl_IPerceptionInfraredFrameArrivedEventArgs<D>::TryOpenFrame() const
{
    Windows::Devices::Perception::PerceptionInfraredFrame result { nullptr };
    check_hresult(static_cast<const IPerceptionInfraredFrameArrivedEventArgs &>(static_cast<const D &>(*this))->abi_TryOpenFrame(put(result)));
    return result;
}

template <typename D> Windows::Foundation::Numerics::float3 impl_IPerceptionDepthCorrelatedCameraIntrinsics<D>::UnprojectPixelAtCorrelatedDepth(const Windows::Foundation::Point & pixelCoordinate, const Windows::Devices::Perception::PerceptionDepthFrame & depthFrame) const
{
    Windows::Foundation::Numerics::float3 result {};
    check_hresult(static_cast<const IPerceptionDepthCorrelatedCameraIntrinsics &>(static_cast<const D &>(*this))->abi_UnprojectPixelAtCorrelatedDepth(get(pixelCoordinate), get(depthFrame), put(result)));
    return result;
}

template <typename D> void impl_IPerceptionDepthCorrelatedCameraIntrinsics<D>::UnprojectPixelsAtCorrelatedDepth(array_ref<const Windows::Foundation::Point> sourceCoordinates, const Windows::Devices::Perception::PerceptionDepthFrame & depthFrame, array_ref<Windows::Foundation::Numerics::float3> results) const
{
    check_hresult(static_cast<const IPerceptionDepthCorrelatedCameraIntrinsics &>(static_cast<const D &>(*this))->abi_UnprojectPixelsAtCorrelatedDepth(sourceCoordinates.size(), get(sourceCoordinates), get(depthFrame), results.size(), get(results)));
}

template <typename D> Windows::Foundation::IAsyncAction impl_IPerceptionDepthCorrelatedCameraIntrinsics<D>::UnprojectRegionPixelsAtCorrelatedDepthAsync(const Windows::Foundation::Rect & region, const Windows::Devices::Perception::PerceptionDepthFrame & depthFrame, array_ref<Windows::Foundation::Numerics::float3> results) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IPerceptionDepthCorrelatedCameraIntrinsics &>(static_cast<const D &>(*this))->abi_UnprojectRegionPixelsAtCorrelatedDepthAsync(get(region), get(depthFrame), results.size(), get(results), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IPerceptionDepthCorrelatedCameraIntrinsics<D>::UnprojectAllPixelsAtCorrelatedDepthAsync(const Windows::Devices::Perception::PerceptionDepthFrame & depthFrame, array_ref<Windows::Foundation::Numerics::float3> results) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IPerceptionDepthCorrelatedCameraIntrinsics &>(static_cast<const D &>(*this))->abi_UnprojectAllPixelsAtCorrelatedDepthAsync(get(depthFrame), results.size(), get(results), put(result)));
    return result;
}

template <typename D> Windows::Foundation::Point impl_IPerceptionDepthCorrelatedCoordinateMapper<D>::MapPixelToTarget(const Windows::Foundation::Point & sourcePixelCoordinate, const Windows::Devices::Perception::PerceptionDepthFrame & depthFrame) const
{
    Windows::Foundation::Point result {};
    check_hresult(static_cast<const IPerceptionDepthCorrelatedCoordinateMapper &>(static_cast<const D &>(*this))->abi_MapPixelToTarget(get(sourcePixelCoordinate), get(depthFrame), put(result)));
    return result;
}

template <typename D> void impl_IPerceptionDepthCorrelatedCoordinateMapper<D>::MapPixelsToTarget(array_ref<const Windows::Foundation::Point> sourceCoordinates, const Windows::Devices::Perception::PerceptionDepthFrame & depthFrame, array_ref<Windows::Foundation::Point> results) const
{
    check_hresult(static_cast<const IPerceptionDepthCorrelatedCoordinateMapper &>(static_cast<const D &>(*this))->abi_MapPixelsToTarget(sourceCoordinates.size(), get(sourceCoordinates), get(depthFrame), results.size(), get(results)));
}

template <typename D> Windows::Foundation::IAsyncAction impl_IPerceptionDepthCorrelatedCoordinateMapper<D>::MapRegionOfPixelsToTargetAsync(const Windows::Foundation::Rect & region, const Windows::Devices::Perception::PerceptionDepthFrame & depthFrame, array_ref<Windows::Foundation::Point> targetCoordinates) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IPerceptionDepthCorrelatedCoordinateMapper &>(static_cast<const D &>(*this))->abi_MapRegionOfPixelsToTargetAsync(get(region), get(depthFrame), targetCoordinates.size(), get(targetCoordinates), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IPerceptionDepthCorrelatedCoordinateMapper<D>::MapAllPixelsToTargetAsync(const Windows::Devices::Perception::PerceptionDepthFrame & depthFrame, array_ref<Windows::Foundation::Point> targetCoordinates) const
{
    Windows::Foundation::IAsyncAction result;
    check_hresult(static_cast<const IPerceptionDepthCorrelatedCoordinateMapper &>(static_cast<const D &>(*this))->abi_MapAllPixelsToTargetAsync(get(depthFrame), targetCoordinates.size(), get(targetCoordinates), put(result)));
    return result;
}

template <typename D> event_token impl_IPerceptionControlSession<D>::ControlLost(const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionControlSession, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPerceptionControlSession &>(static_cast<const D &>(*this))->add_ControlLost(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPerceptionControlSession> impl_IPerceptionControlSession<D>::ControlLost(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionControlSession, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IPerceptionControlSession>(this, &ABI::Windows::Devices::Perception::IPerceptionControlSession::remove_ControlLost, ControlLost(handler));
}

template <typename D> void impl_IPerceptionControlSession<D>::ControlLost(event_token token) const
{
    check_hresult(static_cast<const IPerceptionControlSession &>(static_cast<const D &>(*this))->remove_ControlLost(token));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> impl_IPerceptionControlSession<D>::TrySetPropertyAsync(hstring_ref name, const Windows::IInspectable & value) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeResult> result;
    check_hresult(static_cast<const IPerceptionControlSession &>(static_cast<const D &>(*this))->abi_TrySetPropertyAsync(get(name), get(value), put(result)));
    return result;
}

template <typename D> event_token impl_IPerceptionColorFrameReader<D>::FrameArrived(const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameReader, Windows::Devices::Perception::PerceptionColorFrameArrivedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPerceptionColorFrameReader &>(static_cast<const D &>(*this))->add_FrameArrived(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPerceptionColorFrameReader> impl_IPerceptionColorFrameReader<D>::FrameArrived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionColorFrameReader, Windows::Devices::Perception::PerceptionColorFrameArrivedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPerceptionColorFrameReader>(this, &ABI::Windows::Devices::Perception::IPerceptionColorFrameReader::remove_FrameArrived, FrameArrived(handler));
}

template <typename D> void impl_IPerceptionColorFrameReader<D>::FrameArrived(event_token token) const
{
    check_hresult(static_cast<const IPerceptionColorFrameReader &>(static_cast<const D &>(*this))->remove_FrameArrived(token));
}

template <typename D> Windows::Devices::Perception::PerceptionColorFrameSource impl_IPerceptionColorFrameReader<D>::Source() const
{
    Windows::Devices::Perception::PerceptionColorFrameSource value { nullptr };
    check_hresult(static_cast<const IPerceptionColorFrameReader &>(static_cast<const D &>(*this))->get_Source(put(value)));
    return value;
}

template <typename D> bool impl_IPerceptionColorFrameReader<D>::IsPaused() const
{
    bool value {};
    check_hresult(static_cast<const IPerceptionColorFrameReader &>(static_cast<const D &>(*this))->get_IsPaused(&value));
    return value;
}

template <typename D> void impl_IPerceptionColorFrameReader<D>::IsPaused(bool value) const
{
    check_hresult(static_cast<const IPerceptionColorFrameReader &>(static_cast<const D &>(*this))->put_IsPaused(value));
}

template <typename D> Windows::Devices::Perception::PerceptionColorFrame impl_IPerceptionColorFrameReader<D>::TryReadLatestFrame() const
{
    Windows::Devices::Perception::PerceptionColorFrame result { nullptr };
    check_hresult(static_cast<const IPerceptionColorFrameReader &>(static_cast<const D &>(*this))->abi_TryReadLatestFrame(put(result)));
    return result;
}

template <typename D> event_token impl_IPerceptionDepthFrameReader<D>::FrameArrived(const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameReader, Windows::Devices::Perception::PerceptionDepthFrameArrivedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPerceptionDepthFrameReader &>(static_cast<const D &>(*this))->add_FrameArrived(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPerceptionDepthFrameReader> impl_IPerceptionDepthFrameReader<D>::FrameArrived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionDepthFrameReader, Windows::Devices::Perception::PerceptionDepthFrameArrivedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPerceptionDepthFrameReader>(this, &ABI::Windows::Devices::Perception::IPerceptionDepthFrameReader::remove_FrameArrived, FrameArrived(handler));
}

template <typename D> void impl_IPerceptionDepthFrameReader<D>::FrameArrived(event_token token) const
{
    check_hresult(static_cast<const IPerceptionDepthFrameReader &>(static_cast<const D &>(*this))->remove_FrameArrived(token));
}

template <typename D> Windows::Devices::Perception::PerceptionDepthFrameSource impl_IPerceptionDepthFrameReader<D>::Source() const
{
    Windows::Devices::Perception::PerceptionDepthFrameSource value { nullptr };
    check_hresult(static_cast<const IPerceptionDepthFrameReader &>(static_cast<const D &>(*this))->get_Source(put(value)));
    return value;
}

template <typename D> bool impl_IPerceptionDepthFrameReader<D>::IsPaused() const
{
    bool value {};
    check_hresult(static_cast<const IPerceptionDepthFrameReader &>(static_cast<const D &>(*this))->get_IsPaused(&value));
    return value;
}

template <typename D> void impl_IPerceptionDepthFrameReader<D>::IsPaused(bool value) const
{
    check_hresult(static_cast<const IPerceptionDepthFrameReader &>(static_cast<const D &>(*this))->put_IsPaused(value));
}

template <typename D> Windows::Devices::Perception::PerceptionDepthFrame impl_IPerceptionDepthFrameReader<D>::TryReadLatestFrame() const
{
    Windows::Devices::Perception::PerceptionDepthFrame result { nullptr };
    check_hresult(static_cast<const IPerceptionDepthFrameReader &>(static_cast<const D &>(*this))->abi_TryReadLatestFrame(put(result)));
    return result;
}

template <typename D> event_token impl_IPerceptionInfraredFrameReader<D>::FrameArrived(const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameReader, Windows::Devices::Perception::PerceptionInfraredFrameArrivedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IPerceptionInfraredFrameReader &>(static_cast<const D &>(*this))->add_FrameArrived(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IPerceptionInfraredFrameReader> impl_IPerceptionInfraredFrameReader<D>::FrameArrived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Devices::Perception::PerceptionInfraredFrameReader, Windows::Devices::Perception::PerceptionInfraredFrameArrivedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IPerceptionInfraredFrameReader>(this, &ABI::Windows::Devices::Perception::IPerceptionInfraredFrameReader::remove_FrameArrived, FrameArrived(handler));
}

template <typename D> void impl_IPerceptionInfraredFrameReader<D>::FrameArrived(event_token token) const
{
    check_hresult(static_cast<const IPerceptionInfraredFrameReader &>(static_cast<const D &>(*this))->remove_FrameArrived(token));
}

template <typename D> Windows::Devices::Perception::PerceptionInfraredFrameSource impl_IPerceptionInfraredFrameReader<D>::Source() const
{
    Windows::Devices::Perception::PerceptionInfraredFrameSource value { nullptr };
    check_hresult(static_cast<const IPerceptionInfraredFrameReader &>(static_cast<const D &>(*this))->get_Source(put(value)));
    return value;
}

template <typename D> bool impl_IPerceptionInfraredFrameReader<D>::IsPaused() const
{
    bool value {};
    check_hresult(static_cast<const IPerceptionInfraredFrameReader &>(static_cast<const D &>(*this))->get_IsPaused(&value));
    return value;
}

template <typename D> void impl_IPerceptionInfraredFrameReader<D>::IsPaused(bool value) const
{
    check_hresult(static_cast<const IPerceptionInfraredFrameReader &>(static_cast<const D &>(*this))->put_IsPaused(value));
}

template <typename D> Windows::Devices::Perception::PerceptionInfraredFrame impl_IPerceptionInfraredFrameReader<D>::TryReadLatestFrame() const
{
    Windows::Devices::Perception::PerceptionInfraredFrame result { nullptr };
    check_hresult(static_cast<const IPerceptionInfraredFrameReader &>(static_cast<const D &>(*this))->abi_TryReadLatestFrame(put(result)));
    return result;
}

template <typename D> Windows::Media::VideoFrame impl_IPerceptionColorFrame<D>::VideoFrame() const
{
    Windows::Media::VideoFrame value { nullptr };
    check_hresult(static_cast<const IPerceptionColorFrame &>(static_cast<const D &>(*this))->get_VideoFrame(put(value)));
    return value;
}

template <typename D> Windows::Media::VideoFrame impl_IPerceptionDepthFrame<D>::VideoFrame() const
{
    Windows::Media::VideoFrame value { nullptr };
    check_hresult(static_cast<const IPerceptionDepthFrame &>(static_cast<const D &>(*this))->get_VideoFrame(put(value)));
    return value;
}

template <typename D> Windows::Media::VideoFrame impl_IPerceptionInfraredFrame<D>::VideoFrame() const
{
    Windows::Media::VideoFrame value { nullptr };
    check_hresult(static_cast<const IPerceptionInfraredFrame &>(static_cast<const D &>(*this))->get_VideoFrame(put(value)));
    return value;
}

inline hstring KnownCameraIntrinsicsProperties::FocalLength()
{
    return get_activation_factory<KnownCameraIntrinsicsProperties, IKnownCameraIntrinsicsPropertiesStatics>().FocalLength();
}

inline hstring KnownCameraIntrinsicsProperties::PrincipalPoint()
{
    return get_activation_factory<KnownCameraIntrinsicsProperties, IKnownCameraIntrinsicsPropertiesStatics>().PrincipalPoint();
}

inline hstring KnownCameraIntrinsicsProperties::RadialDistortion()
{
    return get_activation_factory<KnownCameraIntrinsicsProperties, IKnownCameraIntrinsicsPropertiesStatics>().RadialDistortion();
}

inline hstring KnownCameraIntrinsicsProperties::TangentialDistortion()
{
    return get_activation_factory<KnownCameraIntrinsicsProperties, IKnownCameraIntrinsicsPropertiesStatics>().TangentialDistortion();
}

inline hstring KnownPerceptionColorFrameSourceProperties::Exposure()
{
    return get_activation_factory<KnownPerceptionColorFrameSourceProperties, IKnownPerceptionColorFrameSourcePropertiesStatics>().Exposure();
}

inline hstring KnownPerceptionColorFrameSourceProperties::AutoExposureEnabled()
{
    return get_activation_factory<KnownPerceptionColorFrameSourceProperties, IKnownPerceptionColorFrameSourcePropertiesStatics>().AutoExposureEnabled();
}

inline hstring KnownPerceptionColorFrameSourceProperties::ExposureCompensation()
{
    return get_activation_factory<KnownPerceptionColorFrameSourceProperties, IKnownPerceptionColorFrameSourcePropertiesStatics>().ExposureCompensation();
}

inline hstring KnownPerceptionDepthFrameSourceProperties::MinDepth()
{
    return get_activation_factory<KnownPerceptionDepthFrameSourceProperties, IKnownPerceptionDepthFrameSourcePropertiesStatics>().MinDepth();
}

inline hstring KnownPerceptionDepthFrameSourceProperties::MaxDepth()
{
    return get_activation_factory<KnownPerceptionDepthFrameSourceProperties, IKnownPerceptionDepthFrameSourcePropertiesStatics>().MaxDepth();
}

inline hstring KnownPerceptionFrameSourceProperties::Id()
{
    return get_activation_factory<KnownPerceptionFrameSourceProperties, IKnownPerceptionFrameSourcePropertiesStatics>().Id();
}

inline hstring KnownPerceptionFrameSourceProperties::PhysicalDeviceIds()
{
    return get_activation_factory<KnownPerceptionFrameSourceProperties, IKnownPerceptionFrameSourcePropertiesStatics>().PhysicalDeviceIds();
}

inline hstring KnownPerceptionFrameSourceProperties::FrameKind()
{
    return get_activation_factory<KnownPerceptionFrameSourceProperties, IKnownPerceptionFrameSourcePropertiesStatics>().FrameKind();
}

inline hstring KnownPerceptionFrameSourceProperties::DeviceModelVersion()
{
    return get_activation_factory<KnownPerceptionFrameSourceProperties, IKnownPerceptionFrameSourcePropertiesStatics>().DeviceModelVersion();
}

inline hstring KnownPerceptionFrameSourceProperties::EnclosureLocation()
{
    return get_activation_factory<KnownPerceptionFrameSourceProperties, IKnownPerceptionFrameSourcePropertiesStatics>().EnclosureLocation();
}

inline hstring KnownPerceptionFrameSourceProperties::DeviceId()
{
    return get_activation_factory<KnownPerceptionFrameSourceProperties, IKnownPerceptionFrameSourcePropertiesStatics2>().DeviceId();
}

inline hstring KnownPerceptionInfraredFrameSourceProperties::Exposure()
{
    return get_activation_factory<KnownPerceptionInfraredFrameSourceProperties, IKnownPerceptionInfraredFrameSourcePropertiesStatics>().Exposure();
}

inline hstring KnownPerceptionInfraredFrameSourceProperties::AutoExposureEnabled()
{
    return get_activation_factory<KnownPerceptionInfraredFrameSourceProperties, IKnownPerceptionInfraredFrameSourcePropertiesStatics>().AutoExposureEnabled();
}

inline hstring KnownPerceptionInfraredFrameSourceProperties::ExposureCompensation()
{
    return get_activation_factory<KnownPerceptionInfraredFrameSourceProperties, IKnownPerceptionInfraredFrameSourcePropertiesStatics>().ExposureCompensation();
}

inline hstring KnownPerceptionInfraredFrameSourceProperties::ActiveIlluminationEnabled()
{
    return get_activation_factory<KnownPerceptionInfraredFrameSourceProperties, IKnownPerceptionInfraredFrameSourcePropertiesStatics>().ActiveIlluminationEnabled();
}

inline hstring KnownPerceptionInfraredFrameSourceProperties::AmbientSubtractionEnabled()
{
    return get_activation_factory<KnownPerceptionInfraredFrameSourceProperties, IKnownPerceptionInfraredFrameSourcePropertiesStatics>().AmbientSubtractionEnabled();
}

inline hstring KnownPerceptionInfraredFrameSourceProperties::StructureLightPatternEnabled()
{
    return get_activation_factory<KnownPerceptionInfraredFrameSourceProperties, IKnownPerceptionInfraredFrameSourcePropertiesStatics>().StructureLightPatternEnabled();
}

inline hstring KnownPerceptionInfraredFrameSourceProperties::InterleavedIlluminationEnabled()
{
    return get_activation_factory<KnownPerceptionInfraredFrameSourceProperties, IKnownPerceptionInfraredFrameSourcePropertiesStatics>().InterleavedIlluminationEnabled();
}

inline hstring KnownPerceptionVideoFrameSourceProperties::VideoProfile()
{
    return get_activation_factory<KnownPerceptionVideoFrameSourceProperties, IKnownPerceptionVideoFrameSourcePropertiesStatics>().VideoProfile();
}

inline hstring KnownPerceptionVideoFrameSourceProperties::SupportedVideoProfiles()
{
    return get_activation_factory<KnownPerceptionVideoFrameSourceProperties, IKnownPerceptionVideoFrameSourcePropertiesStatics>().SupportedVideoProfiles();
}

inline hstring KnownPerceptionVideoFrameSourceProperties::AvailableVideoProfiles()
{
    return get_activation_factory<KnownPerceptionVideoFrameSourceProperties, IKnownPerceptionVideoFrameSourcePropertiesStatics>().AvailableVideoProfiles();
}

inline hstring KnownPerceptionVideoFrameSourceProperties::IsMirrored()
{
    return get_activation_factory<KnownPerceptionVideoFrameSourceProperties, IKnownPerceptionVideoFrameSourcePropertiesStatics>().IsMirrored();
}

inline hstring KnownPerceptionVideoFrameSourceProperties::CameraIntrinsics()
{
    return get_activation_factory<KnownPerceptionVideoFrameSourceProperties, IKnownPerceptionVideoFrameSourcePropertiesStatics>().CameraIntrinsics();
}

inline hstring KnownPerceptionVideoProfileProperties::BitmapPixelFormat()
{
    return get_activation_factory<KnownPerceptionVideoProfileProperties, IKnownPerceptionVideoProfilePropertiesStatics>().BitmapPixelFormat();
}

inline hstring KnownPerceptionVideoProfileProperties::BitmapAlphaMode()
{
    return get_activation_factory<KnownPerceptionVideoProfileProperties, IKnownPerceptionVideoProfilePropertiesStatics>().BitmapAlphaMode();
}

inline hstring KnownPerceptionVideoProfileProperties::Width()
{
    return get_activation_factory<KnownPerceptionVideoProfileProperties, IKnownPerceptionVideoProfilePropertiesStatics>().Width();
}

inline hstring KnownPerceptionVideoProfileProperties::Height()
{
    return get_activation_factory<KnownPerceptionVideoProfileProperties, IKnownPerceptionVideoProfilePropertiesStatics>().Height();
}

inline hstring KnownPerceptionVideoProfileProperties::FrameDuration()
{
    return get_activation_factory<KnownPerceptionVideoProfileProperties, IKnownPerceptionVideoProfilePropertiesStatics>().FrameDuration();
}

inline Windows::Devices::Perception::PerceptionColorFrameSourceWatcher PerceptionColorFrameSource::CreateWatcher()
{
    return get_activation_factory<PerceptionColorFrameSource, IPerceptionColorFrameSourceStatics>().CreateWatcher();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionColorFrameSource>> PerceptionColorFrameSource::FindAllAsync()
{
    return get_activation_factory<PerceptionColorFrameSource, IPerceptionColorFrameSourceStatics>().FindAllAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionColorFrameSource> PerceptionColorFrameSource::FromIdAsync(hstring_ref id)
{
    return get_activation_factory<PerceptionColorFrameSource, IPerceptionColorFrameSourceStatics>().FromIdAsync(id);
}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> PerceptionColorFrameSource::RequestAccessAsync()
{
    return get_activation_factory<PerceptionColorFrameSource, IPerceptionColorFrameSourceStatics>().RequestAccessAsync();
}

inline Windows::Devices::Perception::PerceptionDepthFrameSourceWatcher PerceptionDepthFrameSource::CreateWatcher()
{
    return get_activation_factory<PerceptionDepthFrameSource, IPerceptionDepthFrameSourceStatics>().CreateWatcher();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionDepthFrameSource>> PerceptionDepthFrameSource::FindAllAsync()
{
    return get_activation_factory<PerceptionDepthFrameSource, IPerceptionDepthFrameSourceStatics>().FindAllAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionDepthFrameSource> PerceptionDepthFrameSource::FromIdAsync(hstring_ref id)
{
    return get_activation_factory<PerceptionDepthFrameSource, IPerceptionDepthFrameSourceStatics>().FromIdAsync(id);
}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> PerceptionDepthFrameSource::RequestAccessAsync()
{
    return get_activation_factory<PerceptionDepthFrameSource, IPerceptionDepthFrameSourceStatics>().RequestAccessAsync();
}

inline Windows::Devices::Perception::PerceptionInfraredFrameSourceWatcher PerceptionInfraredFrameSource::CreateWatcher()
{
    return get_activation_factory<PerceptionInfraredFrameSource, IPerceptionInfraredFrameSourceStatics>().CreateWatcher();
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Devices::Perception::PerceptionInfraredFrameSource>> PerceptionInfraredFrameSource::FindAllAsync()
{
    return get_activation_factory<PerceptionInfraredFrameSource, IPerceptionInfraredFrameSourceStatics>().FindAllAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Perception::PerceptionInfraredFrameSource> PerceptionInfraredFrameSource::FromIdAsync(hstring_ref id)
{
    return get_activation_factory<PerceptionInfraredFrameSource, IPerceptionInfraredFrameSourceStatics>().FromIdAsync(id);
}

inline Windows::Foundation::IAsyncOperation<winrt::Windows::Devices::Perception::PerceptionFrameSourceAccessStatus> PerceptionInfraredFrameSource::RequestAccessAsync()
{
    return get_activation_factory<PerceptionInfraredFrameSource, IPerceptionInfraredFrameSourceStatics>().RequestAccessAsync();
}

}

}
