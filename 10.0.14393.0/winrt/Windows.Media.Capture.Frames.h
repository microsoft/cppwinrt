// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Media.Capture.3.h"
#include "internal/Windows.Devices.Enumeration.3.h"
#include "internal/Windows.Perception.Spatial.3.h"
#include "internal/Windows.Media.Devices.Core.3.h"
#include "internal/Windows.Media.Devices.3.h"
#include "internal/Windows.Media.MediaProperties.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Graphics.Imaging.3.h"
#include "internal/Windows.Graphics.DirectX.Direct3D11.3.h"
#include "internal/Windows.Media.3.h"
#include "internal/Windows.Media.Capture.Frames.3.h"
#include "Windows.Media.Capture.h"
#include "Windows.Foundation.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Media::Capture::Frames::IBufferMediaFrame> : produce_base<D, Windows::Media::Capture::Frames::IBufferMediaFrame>
{
    HRESULT __stdcall get_FrameReference(abi_arg_out<Windows::Media::Capture::Frames::IMediaFrameReference> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FrameReference());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Buffer(abi_arg_out<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Buffer());
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
struct produce<D, Windows::Media::Capture::Frames::IDepthMediaFrame> : produce_base<D, Windows::Media::Capture::Frames::IDepthMediaFrame>
{
    HRESULT __stdcall get_FrameReference(abi_arg_out<Windows::Media::Capture::Frames::IMediaFrameReference> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FrameReference());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoMediaFrame(abi_arg_out<Windows::Media::Capture::Frames::IVideoMediaFrame> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VideoMediaFrame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DepthFormat(abi_arg_out<Windows::Media::Capture::Frames::IDepthMediaFrameFormat> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DepthFormat());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryCreateCoordinateMapper(abi_arg_in<Windows::Media::Devices::Core::ICameraIntrinsics> cameraIntrinsics, abi_arg_in<Windows::Perception::Spatial::ISpatialCoordinateSystem> coordinateSystem, abi_arg_out<Windows::Media::Devices::Core::IDepthCorrelatedCoordinateMapper> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TryCreateCoordinateMapper(*reinterpret_cast<const Windows::Media::Devices::Core::CameraIntrinsics *>(&cameraIntrinsics), *reinterpret_cast<const Windows::Perception::Spatial::SpatialCoordinateSystem *>(&coordinateSystem)));
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
struct produce<D, Windows::Media::Capture::Frames::IDepthMediaFrameFormat> : produce_base<D, Windows::Media::Capture::Frames::IDepthMediaFrameFormat>
{
    HRESULT __stdcall get_VideoFormat(abi_arg_out<Windows::Media::Capture::Frames::IVideoMediaFrameFormat> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VideoFormat());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DepthScaleInMeters(double * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DepthScaleInMeters());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::Frames::IInfraredMediaFrame> : produce_base<D, Windows::Media::Capture::Frames::IInfraredMediaFrame>
{
    HRESULT __stdcall get_FrameReference(abi_arg_out<Windows::Media::Capture::Frames::IMediaFrameReference> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FrameReference());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoMediaFrame(abi_arg_out<Windows::Media::Capture::Frames::IVideoMediaFrame> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VideoMediaFrame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsIlluminated(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsIlluminated());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::Frames::IMediaFrameArrivedEventArgs> : produce_base<D, Windows::Media::Capture::Frames::IMediaFrameArrivedEventArgs>
{};

template <typename D>
struct produce<D, Windows::Media::Capture::Frames::IMediaFrameFormat> : produce_base<D, Windows::Media::Capture::Frames::IMediaFrameFormat>
{
    HRESULT __stdcall get_MajorType(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MajorType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Subtype(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Subtype());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FrameRate(abi_arg_out<Windows::Media::MediaProperties::IMediaRatio> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FrameRate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(abi_arg_out<Windows::Foundation::Collections::IMapView<GUID, Windows::IInspectable>> value) noexcept override
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

    HRESULT __stdcall get_VideoFormat(abi_arg_out<Windows::Media::Capture::Frames::IVideoMediaFrameFormat> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VideoFormat());
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
struct produce<D, Windows::Media::Capture::Frames::IMediaFrameReader> : produce_base<D, Windows::Media::Capture::Frames::IMediaFrameReader>
{
    HRESULT __stdcall add_FrameArrived(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Frames::MediaFrameReader, Windows::Media::Capture::Frames::MediaFrameArrivedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().FrameArrived(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Frames::MediaFrameReader, Windows::Media::Capture::Frames::MediaFrameArrivedEventArgs> *>(&handler)));
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

    HRESULT __stdcall abi_TryAcquireLatestFrame(abi_arg_out<Windows::Media::Capture::Frames::IMediaFrameReference> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TryAcquireLatestFrame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StartAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Capture::Frames::MediaFrameReaderStartStatus>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().StartAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_StopAsync(abi_arg_out<Windows::Foundation::IAsyncAction> action) noexcept override
    {
        try
        {
            *action = detach(this->shim().StopAsync());
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::Frames::IMediaFrameReference> : produce_base<D, Windows::Media::Capture::Frames::IMediaFrameReference>
{
    HRESULT __stdcall get_SourceKind(Windows::Media::Capture::Frames::MediaFrameSourceKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SourceKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Format(abi_arg_out<Windows::Media::Capture::Frames::IMediaFrameFormat> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Format());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SystemRelativeTime(abi_arg_out<Windows::Foundation::IReference<Windows::Foundation::TimeSpan>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SystemRelativeTime());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Duration(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Duration());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(abi_arg_out<Windows::Foundation::Collections::IMapView<GUID, Windows::IInspectable>> value) noexcept override
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

    HRESULT __stdcall get_BufferMediaFrame(abi_arg_out<Windows::Media::Capture::Frames::IBufferMediaFrame> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BufferMediaFrame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoMediaFrame(abi_arg_out<Windows::Media::Capture::Frames::IVideoMediaFrame> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VideoMediaFrame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CoordinateSystem(abi_arg_out<Windows::Perception::Spatial::ISpatialCoordinateSystem> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CoordinateSystem());
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
struct produce<D, Windows::Media::Capture::Frames::IMediaFrameSource> : produce_base<D, Windows::Media::Capture::Frames::IMediaFrameSource>
{
    HRESULT __stdcall get_Info(abi_arg_out<Windows::Media::Capture::Frames::IMediaFrameSourceInfo> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Info());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Controller(abi_arg_out<Windows::Media::Capture::Frames::IMediaFrameSourceController> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Controller());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SupportedFormats(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::Frames::MediaFrameFormat>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SupportedFormats());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentFormat(abi_arg_out<Windows::Media::Capture::Frames::IMediaFrameFormat> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CurrentFormat());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetFormatAsync(abi_arg_in<Windows::Media::Capture::Frames::IMediaFrameFormat> format, abi_arg_out<Windows::Foundation::IAsyncAction> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SetFormatAsync(*reinterpret_cast<const Windows::Media::Capture::Frames::MediaFrameFormat *>(&format)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_FormatChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Frames::MediaFrameSource, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().FormatChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Frames::MediaFrameSource, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_FormatChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().FormatChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TryGetCameraIntrinsics(abi_arg_in<Windows::Media::Capture::Frames::IMediaFrameFormat> format, abi_arg_out<Windows::Media::Devices::Core::ICameraIntrinsics> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TryGetCameraIntrinsics(*reinterpret_cast<const Windows::Media::Capture::Frames::MediaFrameFormat *>(&format)));
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
struct produce<D, Windows::Media::Capture::Frames::IMediaFrameSourceController> : produce_base<D, Windows::Media::Capture::Frames::IMediaFrameSourceController>
{
    HRESULT __stdcall abi_GetPropertyAsync(abi_arg_in<hstring> propertyId, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyResult>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetPropertyAsync(*reinterpret_cast<const hstring *>(&propertyId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetPropertyAsync(abi_arg_in<hstring> propertyId, abi_arg_in<Windows::IInspectable> propertyValue, abi_arg_out<Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Capture::Frames::MediaFrameSourceSetPropertyStatus>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SetPropertyAsync(*reinterpret_cast<const hstring *>(&propertyId), *reinterpret_cast<const Windows::IInspectable *>(&propertyValue)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoDeviceController(abi_arg_out<Windows::Media::Devices::IVideoDeviceController> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VideoDeviceController());
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
struct produce<D, Windows::Media::Capture::Frames::IMediaFrameSourceGetPropertyResult> : produce_base<D, Windows::Media::Capture::Frames::IMediaFrameSourceGetPropertyResult>
{
    HRESULT __stdcall get_Status(Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyStatus * value) noexcept override
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

    HRESULT __stdcall get_Value(abi_arg_out<Windows::IInspectable> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Value());
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
struct produce<D, Windows::Media::Capture::Frames::IMediaFrameSourceGroup> : produce_base<D, Windows::Media::Capture::Frames::IMediaFrameSourceGroup>
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

    HRESULT __stdcall get_SourceInfos(abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::Frames::MediaFrameSourceInfo>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SourceInfos());
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
struct produce<D, Windows::Media::Capture::Frames::IMediaFrameSourceGroupStatics> : produce_base<D, Windows::Media::Capture::Frames::IMediaFrameSourceGroupStatics>
{
    HRESULT __stdcall abi_FindAllAsync(abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::Frames::MediaFrameSourceGroup>>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FindAllAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_FromIdAsync(abi_arg_in<hstring> id, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameSourceGroup>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FromIdAsync(*reinterpret_cast<const hstring *>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeviceSelector(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeviceSelector());
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
struct produce<D, Windows::Media::Capture::Frames::IMediaFrameSourceInfo> : produce_base<D, Windows::Media::Capture::Frames::IMediaFrameSourceInfo>
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

    HRESULT __stdcall get_MediaStreamType(Windows::Media::Capture::MediaStreamType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MediaStreamType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourceKind(Windows::Media::Capture::Frames::MediaFrameSourceKind * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SourceKind());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SourceGroup(abi_arg_out<Windows::Media::Capture::Frames::IMediaFrameSourceGroup> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SourceGroup());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceInformation(abi_arg_out<Windows::Devices::Enumeration::IDeviceInformation> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeviceInformation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Properties(abi_arg_out<Windows::Foundation::Collections::IMapView<GUID, Windows::IInspectable>> value) noexcept override
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

    HRESULT __stdcall get_CoordinateSystem(abi_arg_out<Windows::Perception::Spatial::ISpatialCoordinateSystem> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CoordinateSystem());
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
struct produce<D, Windows::Media::Capture::Frames::IVideoMediaFrame> : produce_base<D, Windows::Media::Capture::Frames::IVideoMediaFrame>
{
    HRESULT __stdcall get_FrameReference(abi_arg_out<Windows::Media::Capture::Frames::IMediaFrameReference> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FrameReference());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoFormat(abi_arg_out<Windows::Media::Capture::Frames::IVideoMediaFrameFormat> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VideoFormat());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SoftwareBitmap(abi_arg_out<Windows::Graphics::Imaging::ISoftwareBitmap> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SoftwareBitmap());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Direct3DSurface(abi_arg_out<Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Direct3DSurface());
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

    HRESULT __stdcall get_InfraredMediaFrame(abi_arg_out<Windows::Media::Capture::Frames::IInfraredMediaFrame> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InfraredMediaFrame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DepthMediaFrame(abi_arg_out<Windows::Media::Capture::Frames::IDepthMediaFrame> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DepthMediaFrame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetVideoFrame(abi_arg_out<Windows::Media::IVideoFrame> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetVideoFrame());
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
struct produce<D, Windows::Media::Capture::Frames::IVideoMediaFrameFormat> : produce_base<D, Windows::Media::Capture::Frames::IVideoMediaFrameFormat>
{
    HRESULT __stdcall get_MediaFrameFormat(abi_arg_out<Windows::Media::Capture::Frames::IMediaFrameFormat> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MediaFrameFormat());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DepthFormat(abi_arg_out<Windows::Media::Capture::Frames::IDepthMediaFrameFormat> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DepthFormat());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Width(uint32_t * value) noexcept override
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

    HRESULT __stdcall get_Height(uint32_t * value) noexcept override
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
};

}

namespace Windows::Media::Capture::Frames {

template <typename D> hstring impl_IMediaFrameSourceGroup<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IMediaFrameSourceGroup &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaFrameSourceGroup<D>::DisplayName() const
{
    hstring value;
    check_hresult(static_cast<const IMediaFrameSourceGroup &>(static_cast<const D &>(*this))->get_DisplayName(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::Frames::MediaFrameSourceInfo> impl_IMediaFrameSourceGroup<D>::SourceInfos() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::Frames::MediaFrameSourceInfo> value;
    check_hresult(static_cast<const IMediaFrameSourceGroup &>(static_cast<const D &>(*this))->get_SourceInfos(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::Frames::MediaFrameSourceGroup>> impl_IMediaFrameSourceGroupStatics<D>::FindAllAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::Frames::MediaFrameSourceGroup>> value;
    check_hresult(static_cast<const IMediaFrameSourceGroupStatics &>(static_cast<const D &>(*this))->abi_FindAllAsync(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameSourceGroup> impl_IMediaFrameSourceGroupStatics<D>::FromIdAsync(hstring_ref id) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameSourceGroup> value;
    check_hresult(static_cast<const IMediaFrameSourceGroupStatics &>(static_cast<const D &>(*this))->abi_FromIdAsync(get(id), put(value)));
    return value;
}

template <typename D> hstring impl_IMediaFrameSourceGroupStatics<D>::GetDeviceSelector() const
{
    hstring value;
    check_hresult(static_cast<const IMediaFrameSourceGroupStatics &>(static_cast<const D &>(*this))->abi_GetDeviceSelector(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaFrameSourceInfo<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IMediaFrameSourceInfo &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> Windows::Media::Capture::MediaStreamType impl_IMediaFrameSourceInfo<D>::MediaStreamType() const
{
    Windows::Media::Capture::MediaStreamType value {};
    check_hresult(static_cast<const IMediaFrameSourceInfo &>(static_cast<const D &>(*this))->get_MediaStreamType(&value));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameSourceKind impl_IMediaFrameSourceInfo<D>::SourceKind() const
{
    Windows::Media::Capture::Frames::MediaFrameSourceKind value {};
    check_hresult(static_cast<const IMediaFrameSourceInfo &>(static_cast<const D &>(*this))->get_SourceKind(&value));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameSourceGroup impl_IMediaFrameSourceInfo<D>::SourceGroup() const
{
    Windows::Media::Capture::Frames::MediaFrameSourceGroup value { nullptr };
    check_hresult(static_cast<const IMediaFrameSourceInfo &>(static_cast<const D &>(*this))->get_SourceGroup(put(value)));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DeviceInformation impl_IMediaFrameSourceInfo<D>::DeviceInformation() const
{
    Windows::Devices::Enumeration::DeviceInformation value { nullptr };
    check_hresult(static_cast<const IMediaFrameSourceInfo &>(static_cast<const D &>(*this))->get_DeviceInformation(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<GUID, Windows::IInspectable> impl_IMediaFrameSourceInfo<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<GUID, Windows::IInspectable> value;
    check_hresult(static_cast<const IMediaFrameSourceInfo &>(static_cast<const D &>(*this))->get_Properties(put(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialCoordinateSystem impl_IMediaFrameSourceInfo<D>::CoordinateSystem() const
{
    Windows::Perception::Spatial::SpatialCoordinateSystem value { nullptr };
    check_hresult(static_cast<const IMediaFrameSourceInfo &>(static_cast<const D &>(*this))->get_CoordinateSystem(put(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameSourceInfo impl_IMediaFrameSource<D>::Info() const
{
    Windows::Media::Capture::Frames::MediaFrameSourceInfo value { nullptr };
    check_hresult(static_cast<const IMediaFrameSource &>(static_cast<const D &>(*this))->get_Info(put(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameSourceController impl_IMediaFrameSource<D>::Controller() const
{
    Windows::Media::Capture::Frames::MediaFrameSourceController value { nullptr };
    check_hresult(static_cast<const IMediaFrameSource &>(static_cast<const D &>(*this))->get_Controller(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::Frames::MediaFrameFormat> impl_IMediaFrameSource<D>::SupportedFormats() const
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::Frames::MediaFrameFormat> value;
    check_hresult(static_cast<const IMediaFrameSource &>(static_cast<const D &>(*this))->get_SupportedFormats(put(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameFormat impl_IMediaFrameSource<D>::CurrentFormat() const
{
    Windows::Media::Capture::Frames::MediaFrameFormat value { nullptr };
    check_hresult(static_cast<const IMediaFrameSource &>(static_cast<const D &>(*this))->get_CurrentFormat(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaFrameSource<D>::SetFormatAsync(const Windows::Media::Capture::Frames::MediaFrameFormat & format) const
{
    Windows::Foundation::IAsyncAction value;
    check_hresult(static_cast<const IMediaFrameSource &>(static_cast<const D &>(*this))->abi_SetFormatAsync(get(format), put(value)));
    return value;
}

template <typename D> event_token impl_IMediaFrameSource<D>::FormatChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Frames::MediaFrameSource, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaFrameSource &>(static_cast<const D &>(*this))->add_FormatChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaFrameSource> impl_IMediaFrameSource<D>::FormatChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Frames::MediaFrameSource, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IMediaFrameSource>(this, &ABI::Windows::Media::Capture::Frames::IMediaFrameSource::remove_FormatChanged, FormatChanged(handler));
}

template <typename D> void impl_IMediaFrameSource<D>::FormatChanged(event_token token) const
{
    check_hresult(static_cast<const IMediaFrameSource &>(static_cast<const D &>(*this))->remove_FormatChanged(token));
}

template <typename D> Windows::Media::Devices::Core::CameraIntrinsics impl_IMediaFrameSource<D>::TryGetCameraIntrinsics(const Windows::Media::Capture::Frames::MediaFrameFormat & format) const
{
    Windows::Media::Devices::Core::CameraIntrinsics value { nullptr };
    check_hresult(static_cast<const IMediaFrameSource &>(static_cast<const D &>(*this))->abi_TryGetCameraIntrinsics(get(format), put(value)));
    return value;
}

template <typename D> event_token impl_IMediaFrameReader<D>::FrameArrived(const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Frames::MediaFrameReader, Windows::Media::Capture::Frames::MediaFrameArrivedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IMediaFrameReader &>(static_cast<const D &>(*this))->add_FrameArrived(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IMediaFrameReader> impl_IMediaFrameReader<D>::FrameArrived(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Frames::MediaFrameReader, Windows::Media::Capture::Frames::MediaFrameArrivedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IMediaFrameReader>(this, &ABI::Windows::Media::Capture::Frames::IMediaFrameReader::remove_FrameArrived, FrameArrived(handler));
}

template <typename D> void impl_IMediaFrameReader<D>::FrameArrived(event_token token) const
{
    check_hresult(static_cast<const IMediaFrameReader &>(static_cast<const D &>(*this))->remove_FrameArrived(token));
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameReference impl_IMediaFrameReader<D>::TryAcquireLatestFrame() const
{
    Windows::Media::Capture::Frames::MediaFrameReference value { nullptr };
    check_hresult(static_cast<const IMediaFrameReader &>(static_cast<const D &>(*this))->abi_TryAcquireLatestFrame(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Capture::Frames::MediaFrameReaderStartStatus> impl_IMediaFrameReader<D>::StartAsync() const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Capture::Frames::MediaFrameReaderStartStatus> operation;
    check_hresult(static_cast<const IMediaFrameReader &>(static_cast<const D &>(*this))->abi_StartAsync(put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction impl_IMediaFrameReader<D>::StopAsync() const
{
    Windows::Foundation::IAsyncAction action;
    check_hresult(static_cast<const IMediaFrameReader &>(static_cast<const D &>(*this))->abi_StopAsync(put(action)));
    return action;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyResult> impl_IMediaFrameSourceController<D>::GetPropertyAsync(hstring_ref propertyId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyResult> value;
    check_hresult(static_cast<const IMediaFrameSourceController &>(static_cast<const D &>(*this))->abi_GetPropertyAsync(get(propertyId), put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Capture::Frames::MediaFrameSourceSetPropertyStatus> impl_IMediaFrameSourceController<D>::SetPropertyAsync(hstring_ref propertyId, const Windows::IInspectable & propertyValue) const
{
    Windows::Foundation::IAsyncOperation<winrt::Windows::Media::Capture::Frames::MediaFrameSourceSetPropertyStatus> value;
    check_hresult(static_cast<const IMediaFrameSourceController &>(static_cast<const D &>(*this))->abi_SetPropertyAsync(get(propertyId), get(propertyValue), put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::VideoDeviceController impl_IMediaFrameSourceController<D>::VideoDeviceController() const
{
    Windows::Media::Devices::VideoDeviceController value { nullptr };
    check_hresult(static_cast<const IMediaFrameSourceController &>(static_cast<const D &>(*this))->get_VideoDeviceController(put(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyStatus impl_IMediaFrameSourceGetPropertyResult<D>::Status() const
{
    Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyStatus value {};
    check_hresult(static_cast<const IMediaFrameSourceGetPropertyResult &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::IInspectable impl_IMediaFrameSourceGetPropertyResult<D>::Value() const
{
    Windows::IInspectable value;
    check_hresult(static_cast<const IMediaFrameSourceGetPropertyResult &>(static_cast<const D &>(*this))->get_Value(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaFrameFormat<D>::MajorType() const
{
    hstring value;
    check_hresult(static_cast<const IMediaFrameFormat &>(static_cast<const D &>(*this))->get_MajorType(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaFrameFormat<D>::Subtype() const
{
    hstring value;
    check_hresult(static_cast<const IMediaFrameFormat &>(static_cast<const D &>(*this))->get_Subtype(put(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaRatio impl_IMediaFrameFormat<D>::FrameRate() const
{
    Windows::Media::MediaProperties::MediaRatio value { nullptr };
    check_hresult(static_cast<const IMediaFrameFormat &>(static_cast<const D &>(*this))->get_FrameRate(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<GUID, Windows::IInspectable> impl_IMediaFrameFormat<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<GUID, Windows::IInspectable> value;
    check_hresult(static_cast<const IMediaFrameFormat &>(static_cast<const D &>(*this))->get_Properties(put(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::VideoMediaFrameFormat impl_IMediaFrameFormat<D>::VideoFormat() const
{
    Windows::Media::Capture::Frames::VideoMediaFrameFormat value { nullptr };
    check_hresult(static_cast<const IMediaFrameFormat &>(static_cast<const D &>(*this))->get_VideoFormat(put(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameFormat impl_IVideoMediaFrameFormat<D>::MediaFrameFormat() const
{
    Windows::Media::Capture::Frames::MediaFrameFormat value { nullptr };
    check_hresult(static_cast<const IVideoMediaFrameFormat &>(static_cast<const D &>(*this))->get_MediaFrameFormat(put(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::DepthMediaFrameFormat impl_IVideoMediaFrameFormat<D>::DepthFormat() const
{
    Windows::Media::Capture::Frames::DepthMediaFrameFormat value { nullptr };
    check_hresult(static_cast<const IVideoMediaFrameFormat &>(static_cast<const D &>(*this))->get_DepthFormat(put(value)));
    return value;
}

template <typename D> uint32_t impl_IVideoMediaFrameFormat<D>::Width() const
{
    uint32_t value {};
    check_hresult(static_cast<const IVideoMediaFrameFormat &>(static_cast<const D &>(*this))->get_Width(&value));
    return value;
}

template <typename D> uint32_t impl_IVideoMediaFrameFormat<D>::Height() const
{
    uint32_t value {};
    check_hresult(static_cast<const IVideoMediaFrameFormat &>(static_cast<const D &>(*this))->get_Height(&value));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameSourceKind impl_IMediaFrameReference<D>::SourceKind() const
{
    Windows::Media::Capture::Frames::MediaFrameSourceKind value {};
    check_hresult(static_cast<const IMediaFrameReference &>(static_cast<const D &>(*this))->get_SourceKind(&value));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameFormat impl_IMediaFrameReference<D>::Format() const
{
    Windows::Media::Capture::Frames::MediaFrameFormat value { nullptr };
    check_hresult(static_cast<const IMediaFrameReference &>(static_cast<const D &>(*this))->get_Format(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> impl_IMediaFrameReference<D>::SystemRelativeTime() const
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value;
    check_hresult(static_cast<const IMediaFrameReference &>(static_cast<const D &>(*this))->get_SystemRelativeTime(put(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IMediaFrameReference<D>::Duration() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IMediaFrameReference &>(static_cast<const D &>(*this))->get_Duration(put(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<GUID, Windows::IInspectable> impl_IMediaFrameReference<D>::Properties() const
{
    Windows::Foundation::Collections::IMapView<GUID, Windows::IInspectable> value;
    check_hresult(static_cast<const IMediaFrameReference &>(static_cast<const D &>(*this))->get_Properties(put(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::BufferMediaFrame impl_IMediaFrameReference<D>::BufferMediaFrame() const
{
    Windows::Media::Capture::Frames::BufferMediaFrame value { nullptr };
    check_hresult(static_cast<const IMediaFrameReference &>(static_cast<const D &>(*this))->get_BufferMediaFrame(put(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::VideoMediaFrame impl_IMediaFrameReference<D>::VideoMediaFrame() const
{
    Windows::Media::Capture::Frames::VideoMediaFrame value { nullptr };
    check_hresult(static_cast<const IMediaFrameReference &>(static_cast<const D &>(*this))->get_VideoMediaFrame(put(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialCoordinateSystem impl_IMediaFrameReference<D>::CoordinateSystem() const
{
    Windows::Perception::Spatial::SpatialCoordinateSystem value { nullptr };
    check_hresult(static_cast<const IMediaFrameReference &>(static_cast<const D &>(*this))->get_CoordinateSystem(put(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameReference impl_IBufferMediaFrame<D>::FrameReference() const
{
    Windows::Media::Capture::Frames::MediaFrameReference value { nullptr };
    check_hresult(static_cast<const IBufferMediaFrame &>(static_cast<const D &>(*this))->get_FrameReference(put(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IBufferMediaFrame<D>::Buffer() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IBufferMediaFrame &>(static_cast<const D &>(*this))->get_Buffer(put(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameReference impl_IVideoMediaFrame<D>::FrameReference() const
{
    Windows::Media::Capture::Frames::MediaFrameReference value { nullptr };
    check_hresult(static_cast<const IVideoMediaFrame &>(static_cast<const D &>(*this))->get_FrameReference(put(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::VideoMediaFrameFormat impl_IVideoMediaFrame<D>::VideoFormat() const
{
    Windows::Media::Capture::Frames::VideoMediaFrameFormat value { nullptr };
    check_hresult(static_cast<const IVideoMediaFrame &>(static_cast<const D &>(*this))->get_VideoFormat(put(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::SoftwareBitmap impl_IVideoMediaFrame<D>::SoftwareBitmap() const
{
    Windows::Graphics::Imaging::SoftwareBitmap value { nullptr };
    check_hresult(static_cast<const IVideoMediaFrame &>(static_cast<const D &>(*this))->get_SoftwareBitmap(put(value)));
    return value;
}

template <typename D> Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface impl_IVideoMediaFrame<D>::Direct3DSurface() const
{
    Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface value;
    check_hresult(static_cast<const IVideoMediaFrame &>(static_cast<const D &>(*this))->get_Direct3DSurface(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::Core::CameraIntrinsics impl_IVideoMediaFrame<D>::CameraIntrinsics() const
{
    Windows::Media::Devices::Core::CameraIntrinsics value { nullptr };
    check_hresult(static_cast<const IVideoMediaFrame &>(static_cast<const D &>(*this))->get_CameraIntrinsics(put(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::InfraredMediaFrame impl_IVideoMediaFrame<D>::InfraredMediaFrame() const
{
    Windows::Media::Capture::Frames::InfraredMediaFrame value { nullptr };
    check_hresult(static_cast<const IVideoMediaFrame &>(static_cast<const D &>(*this))->get_InfraredMediaFrame(put(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::DepthMediaFrame impl_IVideoMediaFrame<D>::DepthMediaFrame() const
{
    Windows::Media::Capture::Frames::DepthMediaFrame value { nullptr };
    check_hresult(static_cast<const IVideoMediaFrame &>(static_cast<const D &>(*this))->get_DepthMediaFrame(put(value)));
    return value;
}

template <typename D> Windows::Media::VideoFrame impl_IVideoMediaFrame<D>::GetVideoFrame() const
{
    Windows::Media::VideoFrame value { nullptr };
    check_hresult(static_cast<const IVideoMediaFrame &>(static_cast<const D &>(*this))->abi_GetVideoFrame(put(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameReference impl_IInfraredMediaFrame<D>::FrameReference() const
{
    Windows::Media::Capture::Frames::MediaFrameReference value { nullptr };
    check_hresult(static_cast<const IInfraredMediaFrame &>(static_cast<const D &>(*this))->get_FrameReference(put(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::VideoMediaFrame impl_IInfraredMediaFrame<D>::VideoMediaFrame() const
{
    Windows::Media::Capture::Frames::VideoMediaFrame value { nullptr };
    check_hresult(static_cast<const IInfraredMediaFrame &>(static_cast<const D &>(*this))->get_VideoMediaFrame(put(value)));
    return value;
}

template <typename D> bool impl_IInfraredMediaFrame<D>::IsIlluminated() const
{
    bool value {};
    check_hresult(static_cast<const IInfraredMediaFrame &>(static_cast<const D &>(*this))->get_IsIlluminated(&value));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameReference impl_IDepthMediaFrame<D>::FrameReference() const
{
    Windows::Media::Capture::Frames::MediaFrameReference value { nullptr };
    check_hresult(static_cast<const IDepthMediaFrame &>(static_cast<const D &>(*this))->get_FrameReference(put(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::VideoMediaFrame impl_IDepthMediaFrame<D>::VideoMediaFrame() const
{
    Windows::Media::Capture::Frames::VideoMediaFrame value { nullptr };
    check_hresult(static_cast<const IDepthMediaFrame &>(static_cast<const D &>(*this))->get_VideoMediaFrame(put(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::DepthMediaFrameFormat impl_IDepthMediaFrame<D>::DepthFormat() const
{
    Windows::Media::Capture::Frames::DepthMediaFrameFormat value { nullptr };
    check_hresult(static_cast<const IDepthMediaFrame &>(static_cast<const D &>(*this))->get_DepthFormat(put(value)));
    return value;
}

template <typename D> Windows::Media::Devices::Core::DepthCorrelatedCoordinateMapper impl_IDepthMediaFrame<D>::TryCreateCoordinateMapper(const Windows::Media::Devices::Core::CameraIntrinsics & cameraIntrinsics, const Windows::Perception::Spatial::SpatialCoordinateSystem & coordinateSystem) const
{
    Windows::Media::Devices::Core::DepthCorrelatedCoordinateMapper value { nullptr };
    check_hresult(static_cast<const IDepthMediaFrame &>(static_cast<const D &>(*this))->abi_TryCreateCoordinateMapper(get(cameraIntrinsics), get(coordinateSystem), put(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::VideoMediaFrameFormat impl_IDepthMediaFrameFormat<D>::VideoFormat() const
{
    Windows::Media::Capture::Frames::VideoMediaFrameFormat value { nullptr };
    check_hresult(static_cast<const IDepthMediaFrameFormat &>(static_cast<const D &>(*this))->get_VideoFormat(put(value)));
    return value;
}

template <typename D> double impl_IDepthMediaFrameFormat<D>::DepthScaleInMeters() const
{
    double value {};
    check_hresult(static_cast<const IDepthMediaFrameFormat &>(static_cast<const D &>(*this))->get_DepthScaleInMeters(&value));
    return value;
}

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::Frames::MediaFrameSourceGroup>> MediaFrameSourceGroup::FindAllAsync()
{
    return get_activation_factory<MediaFrameSourceGroup, IMediaFrameSourceGroupStatics>().FindAllAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameSourceGroup> MediaFrameSourceGroup::FromIdAsync(hstring_ref id)
{
    return get_activation_factory<MediaFrameSourceGroup, IMediaFrameSourceGroupStatics>().FromIdAsync(id);
}

inline hstring MediaFrameSourceGroup::GetDeviceSelector()
{
    return get_activation_factory<MediaFrameSourceGroup, IMediaFrameSourceGroupStatics>().GetDeviceSelector();
}

}

}
