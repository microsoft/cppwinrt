// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Devices.Enumeration.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.2.h"
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.Media.2.h"
#include "winrt/impl/Windows.Media.Capture.2.h"
#include "winrt/impl/Windows.Media.Devices.2.h"
#include "winrt/impl/Windows.Media.Devices.Core.2.h"
#include "winrt/impl/Windows.Media.MediaProperties.2.h"
#include "winrt/impl/Windows.Perception.Spatial.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Media.Capture.Frames.2.h"
#include "winrt/Windows.Media.Capture.h"

namespace winrt::impl {

template <typename D> Windows::Media::Capture::Frames::MediaFrameReference consume_Windows_Media_Capture_Frames_IBufferMediaFrame<D>::FrameReference() const noexcept
{
    Windows::Media::Capture::Frames::MediaFrameReference value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IBufferMediaFrame)->get_FrameReference(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Media_Capture_Frames_IBufferMediaFrame<D>::Buffer() const noexcept
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IBufferMediaFrame)->get_Buffer(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameReference consume_Windows_Media_Capture_Frames_IDepthMediaFrame<D>::FrameReference() const noexcept
{
    Windows::Media::Capture::Frames::MediaFrameReference value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IDepthMediaFrame)->get_FrameReference(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::VideoMediaFrame consume_Windows_Media_Capture_Frames_IDepthMediaFrame<D>::VideoMediaFrame() const noexcept
{
    Windows::Media::Capture::Frames::VideoMediaFrame value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IDepthMediaFrame)->get_VideoMediaFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::DepthMediaFrameFormat consume_Windows_Media_Capture_Frames_IDepthMediaFrame<D>::DepthFormat() const noexcept
{
    Windows::Media::Capture::Frames::DepthMediaFrameFormat value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IDepthMediaFrame)->get_DepthFormat(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::Core::DepthCorrelatedCoordinateMapper consume_Windows_Media_Capture_Frames_IDepthMediaFrame<D>::TryCreateCoordinateMapper(Windows::Media::Devices::Core::CameraIntrinsics const& cameraIntrinsics, Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem) const
{
    Windows::Media::Devices::Core::DepthCorrelatedCoordinateMapper value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Frames::IDepthMediaFrame)->TryCreateCoordinateMapper(get_abi(cameraIntrinsics), get_abi(coordinateSystem), put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Capture_Frames_IDepthMediaFrame2<D>::MaxReliableDepth() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IDepthMediaFrame2)->get_MaxReliableDepth(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Capture_Frames_IDepthMediaFrame2<D>::MinReliableDepth() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IDepthMediaFrame2)->get_MinReliableDepth(&value));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::VideoMediaFrameFormat consume_Windows_Media_Capture_Frames_IDepthMediaFrameFormat<D>::VideoFormat() const noexcept
{
    Windows::Media::Capture::Frames::VideoMediaFrameFormat value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IDepthMediaFrameFormat)->get_VideoFormat(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Media_Capture_Frames_IDepthMediaFrameFormat<D>::DepthScaleInMeters() const noexcept
{
    double value{};
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IDepthMediaFrameFormat)->get_DepthScaleInMeters(&value));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameReference consume_Windows_Media_Capture_Frames_IInfraredMediaFrame<D>::FrameReference() const noexcept
{
    Windows::Media::Capture::Frames::MediaFrameReference value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IInfraredMediaFrame)->get_FrameReference(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::VideoMediaFrame consume_Windows_Media_Capture_Frames_IInfraredMediaFrame<D>::VideoMediaFrame() const noexcept
{
    Windows::Media::Capture::Frames::VideoMediaFrame value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IInfraredMediaFrame)->get_VideoMediaFrame(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Capture_Frames_IInfraredMediaFrame<D>::IsIlluminated() const noexcept
{
    bool value{};
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IInfraredMediaFrame)->get_IsIlluminated(&value));
    return value;
}

template <typename D> hstring consume_Windows_Media_Capture_Frames_IMediaFrameFormat<D>::MajorType() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameFormat)->get_MajorType(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Capture_Frames_IMediaFrameFormat<D>::Subtype() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameFormat)->get_Subtype(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaRatio consume_Windows_Media_Capture_Frames_IMediaFrameFormat<D>::FrameRate() const noexcept
{
    Windows::Media::MediaProperties::MediaRatio value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameFormat)->get_FrameRate(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<GUID, Windows::Foundation::IInspectable> consume_Windows_Media_Capture_Frames_IMediaFrameFormat<D>::Properties() const noexcept
{
    Windows::Foundation::Collections::IMapView<GUID, Windows::Foundation::IInspectable> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameFormat)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::VideoMediaFrameFormat consume_Windows_Media_Capture_Frames_IMediaFrameFormat<D>::VideoFormat() const noexcept
{
    Windows::Media::Capture::Frames::VideoMediaFrameFormat value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameFormat)->get_VideoFormat(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Capture_Frames_IMediaFrameReader<D>::FrameArrived(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Frames::MediaFrameReader, Windows::Media::Capture::Frames::MediaFrameArrivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameReader)->add_FrameArrived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::Frames::IMediaFrameReader> consume_Windows_Media_Capture_Frames_IMediaFrameReader<D>::FrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Frames::MediaFrameReader, Windows::Media::Capture::Frames::MediaFrameArrivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::Frames::IMediaFrameReader>(this, &abi_t<Windows::Media::Capture::Frames::IMediaFrameReader>::remove_FrameArrived, FrameArrived(handler));
}

template <typename D> void consume_Windows_Media_Capture_Frames_IMediaFrameReader<D>::FrameArrived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameReader)->remove_FrameArrived(get_abi(token)));
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameReference consume_Windows_Media_Capture_Frames_IMediaFrameReader<D>::TryAcquireLatestFrame() const
{
    Windows::Media::Capture::Frames::MediaFrameReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameReader)->TryAcquireLatestFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReaderStartStatus> consume_Windows_Media_Capture_Frames_IMediaFrameReader<D>::StartAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameReaderStartStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameReader)->StartAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_Frames_IMediaFrameReader<D>::StopAsync() const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameReader)->StopAsync(put_abi(action)));
    return action;
}

template <typename D> void consume_Windows_Media_Capture_Frames_IMediaFrameReader2<D>::AcquisitionMode(Windows::Media::Capture::Frames::MediaFrameReaderAcquisitionMode const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameReader2)->put_AcquisitionMode(get_abi(value)));
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameReaderAcquisitionMode consume_Windows_Media_Capture_Frames_IMediaFrameReader2<D>::AcquisitionMode() const noexcept
{
    Windows::Media::Capture::Frames::MediaFrameReaderAcquisitionMode value{};
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameReader2)->get_AcquisitionMode(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameSourceKind consume_Windows_Media_Capture_Frames_IMediaFrameReference<D>::SourceKind() const noexcept
{
    Windows::Media::Capture::Frames::MediaFrameSourceKind value{};
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameReference)->get_SourceKind(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameFormat consume_Windows_Media_Capture_Frames_IMediaFrameReference<D>::Format() const noexcept
{
    Windows::Media::Capture::Frames::MediaFrameFormat value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameReference)->get_Format(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<Windows::Foundation::TimeSpan> consume_Windows_Media_Capture_Frames_IMediaFrameReference<D>::SystemRelativeTime() const noexcept
{
    Windows::Foundation::IReference<Windows::Foundation::TimeSpan> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameReference)->get_SystemRelativeTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Capture_Frames_IMediaFrameReference<D>::Duration() const noexcept
{
    Windows::Foundation::TimeSpan value{};
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameReference)->get_Duration(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<GUID, Windows::Foundation::IInspectable> consume_Windows_Media_Capture_Frames_IMediaFrameReference<D>::Properties() const noexcept
{
    Windows::Foundation::Collections::IMapView<GUID, Windows::Foundation::IInspectable> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameReference)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::BufferMediaFrame consume_Windows_Media_Capture_Frames_IMediaFrameReference<D>::BufferMediaFrame() const noexcept
{
    Windows::Media::Capture::Frames::BufferMediaFrame value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameReference)->get_BufferMediaFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::VideoMediaFrame consume_Windows_Media_Capture_Frames_IMediaFrameReference<D>::VideoMediaFrame() const noexcept
{
    Windows::Media::Capture::Frames::VideoMediaFrame value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameReference)->get_VideoMediaFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialCoordinateSystem consume_Windows_Media_Capture_Frames_IMediaFrameReference<D>::CoordinateSystem() const noexcept
{
    Windows::Perception::Spatial::SpatialCoordinateSystem value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameReference)->get_CoordinateSystem(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameSourceInfo consume_Windows_Media_Capture_Frames_IMediaFrameSource<D>::Info() const noexcept
{
    Windows::Media::Capture::Frames::MediaFrameSourceInfo value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameSource)->get_Info(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameSourceController consume_Windows_Media_Capture_Frames_IMediaFrameSource<D>::Controller() const noexcept
{
    Windows::Media::Capture::Frames::MediaFrameSourceController value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameSource)->get_Controller(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::Frames::MediaFrameFormat> consume_Windows_Media_Capture_Frames_IMediaFrameSource<D>::SupportedFormats() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::Frames::MediaFrameFormat> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameSource)->get_SupportedFormats(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameFormat consume_Windows_Media_Capture_Frames_IMediaFrameSource<D>::CurrentFormat() const noexcept
{
    Windows::Media::Capture::Frames::MediaFrameFormat value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameSource)->get_CurrentFormat(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_Frames_IMediaFrameSource<D>::SetFormatAsync(Windows::Media::Capture::Frames::MediaFrameFormat const& format) const
{
    Windows::Foundation::IAsyncAction value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameSource)->SetFormatAsync(get_abi(format), put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Capture_Frames_IMediaFrameSource<D>::FormatChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Frames::MediaFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameSource)->add_FormatChanged(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::Frames::IMediaFrameSource> consume_Windows_Media_Capture_Frames_IMediaFrameSource<D>::FormatChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Frames::MediaFrameSource, Windows::Foundation::IInspectable> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::Frames::IMediaFrameSource>(this, &abi_t<Windows::Media::Capture::Frames::IMediaFrameSource>::remove_FormatChanged, FormatChanged(handler));
}

template <typename D> void consume_Windows_Media_Capture_Frames_IMediaFrameSource<D>::FormatChanged(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameSource)->remove_FormatChanged(get_abi(token)));
}

template <typename D> Windows::Media::Devices::Core::CameraIntrinsics consume_Windows_Media_Capture_Frames_IMediaFrameSource<D>::TryGetCameraIntrinsics(Windows::Media::Capture::Frames::MediaFrameFormat const& format) const
{
    Windows::Media::Devices::Core::CameraIntrinsics value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameSource)->TryGetCameraIntrinsics(get_abi(format), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyResult> consume_Windows_Media_Capture_Frames_IMediaFrameSourceController<D>::GetPropertyAsync(param::hstring const& propertyId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyResult> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameSourceController)->GetPropertyAsync(get_abi(propertyId), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameSourceSetPropertyStatus> consume_Windows_Media_Capture_Frames_IMediaFrameSourceController<D>::SetPropertyAsync(param::hstring const& propertyId, Windows::Foundation::IInspectable const& propertyValue) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameSourceSetPropertyStatus> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameSourceController)->SetPropertyAsync(get_abi(propertyId), get_abi(propertyValue), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::VideoDeviceController consume_Windows_Media_Capture_Frames_IMediaFrameSourceController<D>::VideoDeviceController() const noexcept
{
    Windows::Media::Devices::VideoDeviceController value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameSourceController)->get_VideoDeviceController(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyResult> consume_Windows_Media_Capture_Frames_IMediaFrameSourceController2<D>::GetPropertyByExtendedIdAsync(array_view<uint8_t const> extendedPropertyId, optional<uint32_t> const& maxPropertyValueSize) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameSourceController2)->GetPropertyByExtendedIdAsync(extendedPropertyId.size(), get_abi(extendedPropertyId), get_abi(maxPropertyValueSize), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameSourceSetPropertyStatus> consume_Windows_Media_Capture_Frames_IMediaFrameSourceController2<D>::SetPropertyByExtendedIdAsync(array_view<uint8_t const> extendedPropertyId, array_view<uint8_t const> propertyValue) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameSourceSetPropertyStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameSourceController2)->SetPropertyByExtendedIdAsync(extendedPropertyId.size(), get_abi(extendedPropertyId), propertyValue.size(), get_abi(propertyValue), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyStatus consume_Windows_Media_Capture_Frames_IMediaFrameSourceGetPropertyResult<D>::Status() const noexcept
{
    Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyStatus value{};
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameSourceGetPropertyResult)->get_Status(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_Media_Capture_Frames_IMediaFrameSourceGetPropertyResult<D>::Value() const noexcept
{
    Windows::Foundation::IInspectable value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameSourceGetPropertyResult)->get_Value(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Capture_Frames_IMediaFrameSourceGroup<D>::Id() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameSourceGroup)->get_Id(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Capture_Frames_IMediaFrameSourceGroup<D>::DisplayName() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameSourceGroup)->get_DisplayName(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::Frames::MediaFrameSourceInfo> consume_Windows_Media_Capture_Frames_IMediaFrameSourceGroup<D>::SourceInfos() const noexcept
{
    Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::Frames::MediaFrameSourceInfo> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameSourceGroup)->get_SourceInfos(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::Frames::MediaFrameSourceGroup>> consume_Windows_Media_Capture_Frames_IMediaFrameSourceGroupStatics<D>::FindAllAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::Frames::MediaFrameSourceGroup>> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameSourceGroupStatics)->FindAllAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameSourceGroup> consume_Windows_Media_Capture_Frames_IMediaFrameSourceGroupStatics<D>::FromIdAsync(param::hstring const& id) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameSourceGroup> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameSourceGroupStatics)->FromIdAsync(get_abi(id), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Capture_Frames_IMediaFrameSourceGroupStatics<D>::GetDeviceSelector() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameSourceGroupStatics)->GetDeviceSelector(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_Capture_Frames_IMediaFrameSourceInfo<D>::Id() const noexcept
{
    hstring value{};
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameSourceInfo)->get_Id(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::MediaStreamType consume_Windows_Media_Capture_Frames_IMediaFrameSourceInfo<D>::MediaStreamType() const noexcept
{
    Windows::Media::Capture::MediaStreamType value{};
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameSourceInfo)->get_MediaStreamType(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameSourceKind consume_Windows_Media_Capture_Frames_IMediaFrameSourceInfo<D>::SourceKind() const noexcept
{
    Windows::Media::Capture::Frames::MediaFrameSourceKind value{};
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameSourceInfo)->get_SourceKind(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameSourceGroup consume_Windows_Media_Capture_Frames_IMediaFrameSourceInfo<D>::SourceGroup() const noexcept
{
    Windows::Media::Capture::Frames::MediaFrameSourceGroup value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameSourceInfo)->get_SourceGroup(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DeviceInformation consume_Windows_Media_Capture_Frames_IMediaFrameSourceInfo<D>::DeviceInformation() const noexcept
{
    Windows::Devices::Enumeration::DeviceInformation value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameSourceInfo)->get_DeviceInformation(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IMapView<GUID, Windows::Foundation::IInspectable> consume_Windows_Media_Capture_Frames_IMediaFrameSourceInfo<D>::Properties() const noexcept
{
    Windows::Foundation::Collections::IMapView<GUID, Windows::Foundation::IInspectable> value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameSourceInfo)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> Windows::Perception::Spatial::SpatialCoordinateSystem consume_Windows_Media_Capture_Frames_IMediaFrameSourceInfo<D>::CoordinateSystem() const noexcept
{
    Windows::Perception::Spatial::SpatialCoordinateSystem value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMediaFrameSourceInfo)->get_CoordinateSystem(put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Media_Capture_Frames_IMultiSourceMediaFrameReader<D>::FrameArrived(Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Frames::MultiSourceMediaFrameReader, Windows::Media::Capture::Frames::MultiSourceMediaFrameArrivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader)->add_FrameArrived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader> consume_Windows_Media_Capture_Frames_IMultiSourceMediaFrameReader<D>::FrameArrived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Frames::MultiSourceMediaFrameReader, Windows::Media::Capture::Frames::MultiSourceMediaFrameArrivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader>(this, &abi_t<Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader>::remove_FrameArrived, FrameArrived(handler));
}

template <typename D> void consume_Windows_Media_Capture_Frames_IMultiSourceMediaFrameReader<D>::FrameArrived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader)->remove_FrameArrived(get_abi(token)));
}

template <typename D> Windows::Media::Capture::Frames::MultiSourceMediaFrameReference consume_Windows_Media_Capture_Frames_IMultiSourceMediaFrameReader<D>::TryAcquireLatestFrame() const
{
    Windows::Media::Capture::Frames::MultiSourceMediaFrameReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader)->TryAcquireLatestFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MultiSourceMediaFrameReaderStartStatus> consume_Windows_Media_Capture_Frames_IMultiSourceMediaFrameReader<D>::StartAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MultiSourceMediaFrameReaderStartStatus> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader)->StartAsync(put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncAction consume_Windows_Media_Capture_Frames_IMultiSourceMediaFrameReader<D>::StopAsync() const
{
    Windows::Foundation::IAsyncAction action{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader)->StopAsync(put_abi(action)));
    return action;
}

template <typename D> void consume_Windows_Media_Capture_Frames_IMultiSourceMediaFrameReader2<D>::AcquisitionMode(Windows::Media::Capture::Frames::MediaFrameReaderAcquisitionMode const& value) const noexcept
{
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader2)->put_AcquisitionMode(get_abi(value)));
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameReaderAcquisitionMode consume_Windows_Media_Capture_Frames_IMultiSourceMediaFrameReader2<D>::AcquisitionMode() const noexcept
{
    Windows::Media::Capture::Frames::MediaFrameReaderAcquisitionMode value{};
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader2)->get_AcquisitionMode(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameReference consume_Windows_Media_Capture_Frames_IMultiSourceMediaFrameReference<D>::TryGetFrameReferenceBySourceId(param::hstring const& sourceId) const
{
    Windows::Media::Capture::Frames::MediaFrameReference value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Frames::IMultiSourceMediaFrameReference)->TryGetFrameReferenceBySourceId(get_abi(sourceId), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameReference consume_Windows_Media_Capture_Frames_IVideoMediaFrame<D>::FrameReference() const noexcept
{
    Windows::Media::Capture::Frames::MediaFrameReference value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IVideoMediaFrame)->get_FrameReference(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::VideoMediaFrameFormat consume_Windows_Media_Capture_Frames_IVideoMediaFrame<D>::VideoFormat() const noexcept
{
    Windows::Media::Capture::Frames::VideoMediaFrameFormat value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IVideoMediaFrame)->get_VideoFormat(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::Imaging::SoftwareBitmap consume_Windows_Media_Capture_Frames_IVideoMediaFrame<D>::SoftwareBitmap() const noexcept
{
    Windows::Graphics::Imaging::SoftwareBitmap value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IVideoMediaFrame)->get_SoftwareBitmap(put_abi(value)));
    return value;
}

template <typename D> Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface consume_Windows_Media_Capture_Frames_IVideoMediaFrame<D>::Direct3DSurface() const noexcept
{
    Windows::Graphics::DirectX::Direct3D11::IDirect3DSurface value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IVideoMediaFrame)->get_Direct3DSurface(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Devices::Core::CameraIntrinsics consume_Windows_Media_Capture_Frames_IVideoMediaFrame<D>::CameraIntrinsics() const noexcept
{
    Windows::Media::Devices::Core::CameraIntrinsics value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IVideoMediaFrame)->get_CameraIntrinsics(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::InfraredMediaFrame consume_Windows_Media_Capture_Frames_IVideoMediaFrame<D>::InfraredMediaFrame() const noexcept
{
    Windows::Media::Capture::Frames::InfraredMediaFrame value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IVideoMediaFrame)->get_InfraredMediaFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::DepthMediaFrame consume_Windows_Media_Capture_Frames_IVideoMediaFrame<D>::DepthMediaFrame() const noexcept
{
    Windows::Media::Capture::Frames::DepthMediaFrame value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IVideoMediaFrame)->get_DepthMediaFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::VideoFrame consume_Windows_Media_Capture_Frames_IVideoMediaFrame<D>::GetVideoFrame() const
{
    Windows::Media::VideoFrame value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Capture::Frames::IVideoMediaFrame)->GetVideoFrame(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::MediaFrameFormat consume_Windows_Media_Capture_Frames_IVideoMediaFrameFormat<D>::MediaFrameFormat() const noexcept
{
    Windows::Media::Capture::Frames::MediaFrameFormat value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IVideoMediaFrameFormat)->get_MediaFrameFormat(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::Capture::Frames::DepthMediaFrameFormat consume_Windows_Media_Capture_Frames_IVideoMediaFrameFormat<D>::DepthFormat() const noexcept
{
    Windows::Media::Capture::Frames::DepthMediaFrameFormat value{ nullptr };
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IVideoMediaFrameFormat)->get_DepthFormat(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Capture_Frames_IVideoMediaFrameFormat<D>::Width() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IVideoMediaFrameFormat)->get_Width(&value));
    return value;
}

template <typename D> uint32_t consume_Windows_Media_Capture_Frames_IVideoMediaFrameFormat<D>::Height() const noexcept
{
    uint32_t value{};
    check_terminate(WINRT_SHIM(Windows::Media::Capture::Frames::IVideoMediaFrameFormat)->get_Height(&value));
    return value;
}

template <typename D>
struct produce<D, Windows::Media::Capture::Frames::IBufferMediaFrame> : produce_base<D, Windows::Media::Capture::Frames::IBufferMediaFrame>
{
    HRESULT __stdcall get_FrameReference(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().FrameReference());
        return S_OK;
    }

    HRESULT __stdcall get_Buffer(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Buffer());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::Frames::IDepthMediaFrame> : produce_base<D, Windows::Media::Capture::Frames::IDepthMediaFrame>
{
    HRESULT __stdcall get_FrameReference(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().FrameReference());
        return S_OK;
    }

    HRESULT __stdcall get_VideoMediaFrame(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().VideoMediaFrame());
        return S_OK;
    }

    HRESULT __stdcall get_DepthFormat(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DepthFormat());
        return S_OK;
    }

    HRESULT __stdcall TryCreateCoordinateMapper(::IUnknown* cameraIntrinsics, ::IUnknown* coordinateSystem, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryCreateCoordinateMapper(*reinterpret_cast<Windows::Media::Devices::Core::CameraIntrinsics const*>(&cameraIntrinsics), *reinterpret_cast<Windows::Perception::Spatial::SpatialCoordinateSystem const*>(&coordinateSystem)));
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
struct produce<D, Windows::Media::Capture::Frames::IDepthMediaFrame2> : produce_base<D, Windows::Media::Capture::Frames::IDepthMediaFrame2>
{
    HRESULT __stdcall get_MaxReliableDepth(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MaxReliableDepth());
        return S_OK;
    }

    HRESULT __stdcall get_MinReliableDepth(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MinReliableDepth());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::Frames::IDepthMediaFrameFormat> : produce_base<D, Windows::Media::Capture::Frames::IDepthMediaFrameFormat>
{
    HRESULT __stdcall get_VideoFormat(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().VideoFormat());
        return S_OK;
    }

    HRESULT __stdcall get_DepthScaleInMeters(double* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DepthScaleInMeters());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::Frames::IInfraredMediaFrame> : produce_base<D, Windows::Media::Capture::Frames::IInfraredMediaFrame>
{
    HRESULT __stdcall get_FrameReference(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().FrameReference());
        return S_OK;
    }

    HRESULT __stdcall get_VideoMediaFrame(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().VideoMediaFrame());
        return S_OK;
    }

    HRESULT __stdcall get_IsIlluminated(bool* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().IsIlluminated());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::Frames::IMediaFrameArrivedEventArgs> : produce_base<D, Windows::Media::Capture::Frames::IMediaFrameArrivedEventArgs>
{};

template <typename D>
struct produce<D, Windows::Media::Capture::Frames::IMediaFrameFormat> : produce_base<D, Windows::Media::Capture::Frames::IMediaFrameFormat>
{
    HRESULT __stdcall get_MajorType(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MajorType());
        return S_OK;
    }

    HRESULT __stdcall get_Subtype(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Subtype());
        return S_OK;
    }

    HRESULT __stdcall get_FrameRate(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().FrameRate());
        return S_OK;
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Properties());
        return S_OK;
    }

    HRESULT __stdcall get_VideoFormat(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().VideoFormat());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::Frames::IMediaFrameReader> : produce_base<D, Windows::Media::Capture::Frames::IMediaFrameReader>
{
    HRESULT __stdcall add_FrameArrived(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().FrameArrived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Frames::MediaFrameReader, Windows::Media::Capture::Frames::MediaFrameArrivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_FrameArrived(event_token token) noexcept final
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

    HRESULT __stdcall TryAcquireLatestFrame(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryAcquireLatestFrame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().StartAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopAsync(::IUnknown** action) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *action = detach_abi(this->shim().StopAsync());
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
struct produce<D, Windows::Media::Capture::Frames::IMediaFrameReader2> : produce_base<D, Windows::Media::Capture::Frames::IMediaFrameReader2>
{
    HRESULT __stdcall put_AcquisitionMode(Windows::Media::Capture::Frames::MediaFrameReaderAcquisitionMode value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().AcquisitionMode(*reinterpret_cast<Windows::Media::Capture::Frames::MediaFrameReaderAcquisitionMode const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_AcquisitionMode(Windows::Media::Capture::Frames::MediaFrameReaderAcquisitionMode* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().AcquisitionMode());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::Frames::IMediaFrameReference> : produce_base<D, Windows::Media::Capture::Frames::IMediaFrameReference>
{
    HRESULT __stdcall get_SourceKind(Windows::Media::Capture::Frames::MediaFrameSourceKind* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SourceKind());
        return S_OK;
    }

    HRESULT __stdcall get_Format(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Format());
        return S_OK;
    }

    HRESULT __stdcall get_SystemRelativeTime(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SystemRelativeTime());
        return S_OK;
    }

    HRESULT __stdcall get_Duration(Windows::Foundation::TimeSpan* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Duration());
        return S_OK;
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Properties());
        return S_OK;
    }

    HRESULT __stdcall get_BufferMediaFrame(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().BufferMediaFrame());
        return S_OK;
    }

    HRESULT __stdcall get_VideoMediaFrame(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().VideoMediaFrame());
        return S_OK;
    }

    HRESULT __stdcall get_CoordinateSystem(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CoordinateSystem());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::Frames::IMediaFrameSource> : produce_base<D, Windows::Media::Capture::Frames::IMediaFrameSource>
{
    HRESULT __stdcall get_Info(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Info());
        return S_OK;
    }

    HRESULT __stdcall get_Controller(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Controller());
        return S_OK;
    }

    HRESULT __stdcall get_SupportedFormats(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SupportedFormats());
        return S_OK;
    }

    HRESULT __stdcall get_CurrentFormat(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CurrentFormat());
        return S_OK;
    }

    HRESULT __stdcall SetFormatAsync(::IUnknown* format, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SetFormatAsync(*reinterpret_cast<Windows::Media::Capture::Frames::MediaFrameFormat const*>(&format)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_FormatChanged(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().FormatChanged(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Frames::MediaFrameSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_FormatChanged(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FormatChanged(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TryGetCameraIntrinsics(::IUnknown* format, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryGetCameraIntrinsics(*reinterpret_cast<Windows::Media::Capture::Frames::MediaFrameFormat const*>(&format)));
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
    HRESULT __stdcall GetPropertyAsync(HSTRING propertyId, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetPropertyAsync(*reinterpret_cast<hstring const*>(&propertyId)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPropertyAsync(HSTRING propertyId, ::IUnknown* propertyValue, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SetPropertyAsync(*reinterpret_cast<hstring const*>(&propertyId), *reinterpret_cast<Windows::Foundation::IInspectable const*>(&propertyValue)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoDeviceController(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().VideoDeviceController());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::Frames::IMediaFrameSourceController2> : produce_base<D, Windows::Media::Capture::Frames::IMediaFrameSourceController2>
{
    HRESULT __stdcall GetPropertyByExtendedIdAsync(uint32_t __extendedPropertyIdSize, uint8_t* extendedPropertyId, ::IUnknown* maxPropertyValueSize, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().GetPropertyByExtendedIdAsync(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(extendedPropertyId), reinterpret_cast<uint8_t const *>(extendedPropertyId) + __extendedPropertyIdSize), *reinterpret_cast<Windows::Foundation::IReference<uint32_t> const*>(&maxPropertyValueSize)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPropertyByExtendedIdAsync(uint32_t __extendedPropertyIdSize, uint8_t* extendedPropertyId, uint32_t __propertyValueSize, uint8_t* propertyValue, ::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SetPropertyByExtendedIdAsync(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(extendedPropertyId), reinterpret_cast<uint8_t const *>(extendedPropertyId) + __extendedPropertyIdSize), array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(propertyValue), reinterpret_cast<uint8_t const *>(propertyValue) + __propertyValueSize)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::Frames::IMediaFrameSourceGetPropertyResult> : produce_base<D, Windows::Media::Capture::Frames::IMediaFrameSourceGetPropertyResult>
{
    HRESULT __stdcall get_Status(Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyStatus* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Status());
        return S_OK;
    }

    HRESULT __stdcall get_Value(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Value());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::Frames::IMediaFrameSourceGroup> : produce_base<D, Windows::Media::Capture::Frames::IMediaFrameSourceGroup>
{
    HRESULT __stdcall get_Id(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Id());
        return S_OK;
    }

    HRESULT __stdcall get_DisplayName(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DisplayName());
        return S_OK;
    }

    HRESULT __stdcall get_SourceInfos(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SourceInfos());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::Frames::IMediaFrameSourceGroupStatics> : produce_base<D, Windows::Media::Capture::Frames::IMediaFrameSourceGroupStatics>
{
    HRESULT __stdcall FindAllAsync(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FindAllAsync());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FromIdAsync(HSTRING id, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&id)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelector(HSTRING* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDeviceSelector());
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
    HRESULT __stdcall get_Id(HSTRING* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Id());
        return S_OK;
    }

    HRESULT __stdcall get_MediaStreamType(Windows::Media::Capture::MediaStreamType* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MediaStreamType());
        return S_OK;
    }

    HRESULT __stdcall get_SourceKind(Windows::Media::Capture::Frames::MediaFrameSourceKind* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SourceKind());
        return S_OK;
    }

    HRESULT __stdcall get_SourceGroup(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SourceGroup());
        return S_OK;
    }

    HRESULT __stdcall get_DeviceInformation(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DeviceInformation());
        return S_OK;
    }

    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Properties());
        return S_OK;
    }

    HRESULT __stdcall get_CoordinateSystem(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CoordinateSystem());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::Frames::IMultiSourceMediaFrameArrivedEventArgs> : produce_base<D, Windows::Media::Capture::Frames::IMultiSourceMediaFrameArrivedEventArgs>
{};

template <typename D>
struct produce<D, Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader> : produce_base<D, Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader>
{
    HRESULT __stdcall add_FrameArrived(::IUnknown* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().FrameArrived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Media::Capture::Frames::MultiSourceMediaFrameReader, Windows::Media::Capture::Frames::MultiSourceMediaFrameArrivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_FrameArrived(event_token token) noexcept final
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

    HRESULT __stdcall TryAcquireLatestFrame(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryAcquireLatestFrame());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartAsync(::IUnknown** operation) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().StartAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StopAsync(::IUnknown** action) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *action = detach_abi(this->shim().StopAsync());
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
struct produce<D, Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader2> : produce_base<D, Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader2>
{
    HRESULT __stdcall put_AcquisitionMode(Windows::Media::Capture::Frames::MediaFrameReaderAcquisitionMode value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        this->shim().AcquisitionMode(*reinterpret_cast<Windows::Media::Capture::Frames::MediaFrameReaderAcquisitionMode const*>(&value));
        return S_OK;
    }

    HRESULT __stdcall get_AcquisitionMode(Windows::Media::Capture::Frames::MediaFrameReaderAcquisitionMode* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().AcquisitionMode());
        return S_OK;
    }
};

template <typename D>
struct produce<D, Windows::Media::Capture::Frames::IMultiSourceMediaFrameReference> : produce_base<D, Windows::Media::Capture::Frames::IMultiSourceMediaFrameReference>
{
    HRESULT __stdcall TryGetFrameReferenceBySourceId(HSTRING sourceId, ::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TryGetFrameReferenceBySourceId(*reinterpret_cast<hstring const*>(&sourceId)));
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
    HRESULT __stdcall get_FrameReference(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().FrameReference());
        return S_OK;
    }

    HRESULT __stdcall get_VideoFormat(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().VideoFormat());
        return S_OK;
    }

    HRESULT __stdcall get_SoftwareBitmap(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().SoftwareBitmap());
        return S_OK;
    }

    HRESULT __stdcall get_Direct3DSurface(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Direct3DSurface());
        return S_OK;
    }

    HRESULT __stdcall get_CameraIntrinsics(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().CameraIntrinsics());
        return S_OK;
    }

    HRESULT __stdcall get_InfraredMediaFrame(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().InfraredMediaFrame());
        return S_OK;
    }

    HRESULT __stdcall get_DepthMediaFrame(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DepthMediaFrame());
        return S_OK;
    }

    HRESULT __stdcall GetVideoFrame(::IUnknown** value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetVideoFrame());
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
    HRESULT __stdcall get_MediaFrameFormat(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().MediaFrameFormat());
        return S_OK;
    }

    HRESULT __stdcall get_DepthFormat(::IUnknown** value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().DepthFormat());
        return S_OK;
    }

    HRESULT __stdcall get_Width(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Width());
        return S_OK;
    }

    HRESULT __stdcall get_Height(uint32_t* value) noexcept final
    {
        typename D::abi_guard guard(this->shim());
        *value = detach_abi(this->shim().Height());
        return S_OK;
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Media::Capture::Frames {

inline Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Media::Capture::Frames::MediaFrameSourceGroup>> MediaFrameSourceGroup::FindAllAsync()
{
    return get_activation_factory<MediaFrameSourceGroup, Windows::Media::Capture::Frames::IMediaFrameSourceGroupStatics>().FindAllAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Media::Capture::Frames::MediaFrameSourceGroup> MediaFrameSourceGroup::FromIdAsync(param::hstring const& id)
{
    return get_activation_factory<MediaFrameSourceGroup, Windows::Media::Capture::Frames::IMediaFrameSourceGroupStatics>().FromIdAsync(id);
}

inline hstring MediaFrameSourceGroup::GetDeviceSelector()
{
    return get_activation_factory<MediaFrameSourceGroup, Windows::Media::Capture::Frames::IMediaFrameSourceGroupStatics>().GetDeviceSelector();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Media::Capture::Frames::IBufferMediaFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::IBufferMediaFrame> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::IDepthMediaFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::IDepthMediaFrame> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::IDepthMediaFrame2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::IDepthMediaFrame2> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::IDepthMediaFrameFormat> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::IDepthMediaFrameFormat> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::IInfraredMediaFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::IInfraredMediaFrame> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::IMediaFrameArrivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::IMediaFrameArrivedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::IMediaFrameFormat> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::IMediaFrameFormat> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::IMediaFrameReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::IMediaFrameReader> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::IMediaFrameReader2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::IMediaFrameReader2> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::IMediaFrameReference> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::IMediaFrameReference> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::IMediaFrameSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::IMediaFrameSource> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceController> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceController> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceController2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceController2> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceGetPropertyResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceGetPropertyResult> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceGroup> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceGroup> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceGroupStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceGroupStatics> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::IMediaFrameSourceInfo> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::IMultiSourceMediaFrameArrivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::IMultiSourceMediaFrameArrivedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReader2> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReference> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::IMultiSourceMediaFrameReference> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::IVideoMediaFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::IVideoMediaFrame> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::IVideoMediaFrameFormat> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::IVideoMediaFrameFormat> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::BufferMediaFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::BufferMediaFrame> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::DepthMediaFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::DepthMediaFrame> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::DepthMediaFrameFormat> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::DepthMediaFrameFormat> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::InfraredMediaFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::InfraredMediaFrame> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::MediaFrameArrivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::MediaFrameArrivedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::MediaFrameFormat> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::MediaFrameFormat> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::MediaFrameReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::MediaFrameReader> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::MediaFrameReference> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::MediaFrameReference> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::MediaFrameSource> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::MediaFrameSource> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::MediaFrameSourceController> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::MediaFrameSourceController> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::MediaFrameSourceGetPropertyResult> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::MediaFrameSourceGroup> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::MediaFrameSourceGroup> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::MediaFrameSourceInfo> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::MediaFrameSourceInfo> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::MultiSourceMediaFrameArrivedEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::MultiSourceMediaFrameArrivedEventArgs> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::MultiSourceMediaFrameReader> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::MultiSourceMediaFrameReader> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::MultiSourceMediaFrameReference> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::MultiSourceMediaFrameReference> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::VideoMediaFrame> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::VideoMediaFrame> {};

template<> struct hash<winrt::Windows::Media::Capture::Frames::VideoMediaFrameFormat> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Capture::Frames::VideoMediaFrameFormat> {};

}

WINRT_WARNING_POP
