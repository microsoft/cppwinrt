// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Web.Http.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Media.Streaming.Adaptive.3.h"
#include "Windows.Media.h"
#include "Windows.Media.Core.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource>
{
    HRESULT __stdcall get_IsLive(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsLive());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredLiveOffset(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DesiredLiveOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredLiveOffset(abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            this->shim().DesiredLiveOffset(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InitialBitrate(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InitialBitrate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InitialBitrate(uint32_t value) noexcept override
    {
        try
        {
            this->shim().InitialBitrate(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentDownloadBitrate(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CurrentDownloadBitrate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CurrentPlaybackBitrate(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CurrentPlaybackBitrate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AvailableBitrates(abi_arg_out<Windows::Foundation::Collections::IVectorView<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AvailableBitrates());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredMinBitrate(abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DesiredMinBitrate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredMinBitrate(abi_arg_in<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            this->shim().DesiredMinBitrate(*reinterpret_cast<const Windows::Foundation::IReference<uint32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredMaxBitrate(abi_arg_out<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DesiredMaxBitrate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredMaxBitrate(abi_arg_in<Windows::Foundation::IReference<uint32_t>> value) noexcept override
    {
        try
        {
            this->shim().DesiredMaxBitrate(*reinterpret_cast<const Windows::Foundation::IReference<uint32_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioOnlyPlayback(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AudioOnlyPlayback());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InboundBitsPerSecond(uint64_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InboundBitsPerSecond());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InboundBitsPerSecondWindow(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InboundBitsPerSecondWindow());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InboundBitsPerSecondWindow(abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            this->shim().InboundBitsPerSecondWindow(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DownloadBitrateChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadBitrateChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().DownloadBitrateChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadBitrateChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DownloadBitrateChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().DownloadBitrateChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_PlaybackBitrateChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourcePlaybackBitrateChangedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().PlaybackBitrateChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourcePlaybackBitrateChangedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_PlaybackBitrateChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().PlaybackBitrateChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DownloadRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadRequestedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().DownloadRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadRequestedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DownloadRequested(event_token token) noexcept override
    {
        try
        {
            this->shim().DownloadRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DownloadCompleted(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadCompletedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().DownloadCompleted(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadCompletedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DownloadCompleted(event_token token) noexcept override
    {
        try
        {
            this->shim().DownloadCompleted(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_DownloadFailed(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadFailedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().DownloadFailed(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadFailedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_DownloadFailed(event_token token) noexcept override
    {
        try
        {
            this->shim().DownloadFailed(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource2> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource2>
{
    HRESULT __stdcall get_AdvancedSettings(abi_arg_out<Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceAdvancedSettings> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AdvancedSettings());
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
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceAdvancedSettings> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceAdvancedSettings>
{
    HRESULT __stdcall get_AllSegmentsIndependent(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AllSegmentsIndependent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AllSegmentsIndependent(bool value) noexcept override
    {
        try
        {
            this->shim().AllSegmentsIndependent(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DesiredBitrateHeadroomRatio(abi_arg_out<Windows::Foundation::IReference<double>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DesiredBitrateHeadroomRatio());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DesiredBitrateHeadroomRatio(abi_arg_in<Windows::Foundation::IReference<double>> value) noexcept override
    {
        try
        {
            this->shim().DesiredBitrateHeadroomRatio(*reinterpret_cast<const Windows::Foundation::IReference<double> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BitrateDowngradeTriggerRatio(abi_arg_out<Windows::Foundation::IReference<double>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BitrateDowngradeTriggerRatio());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BitrateDowngradeTriggerRatio(abi_arg_in<Windows::Foundation::IReference<double>> value) noexcept override
    {
        try
        {
            this->shim().BitrateDowngradeTriggerRatio(*reinterpret_cast<const Windows::Foundation::IReference<double> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult>
{
    HRESULT __stdcall get_Status(Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationStatus * value) noexcept override
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

    HRESULT __stdcall get_MediaSource(abi_arg_out<Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MediaSource());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HttpResponseMessage(abi_arg_out<Windows::Web::Http::IHttpResponseMessage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HttpResponseMessage());
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
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadBitrateChangedEventArgs> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadBitrateChangedEventArgs>
{
    HRESULT __stdcall get_OldValue(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OldValue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NewValue(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NewValue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs>
{
    HRESULT __stdcall get_ResourceType(Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResourceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResourceUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResourceUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResourceByteRangeOffset(abi_arg_out<Windows::Foundation::IReference<uint64_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResourceByteRangeOffset());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResourceByteRangeLength(abi_arg_out<Windows::Foundation::IReference<uint64_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResourceByteRangeLength());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HttpResponseMessage(abi_arg_out<Windows::Web::Http::IHttpResponseMessage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HttpResponseMessage());
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
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs>
{
    HRESULT __stdcall get_ResourceType(Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResourceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResourceUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResourceUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResourceByteRangeOffset(abi_arg_out<Windows::Foundation::IReference<uint64_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResourceByteRangeOffset());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResourceByteRangeLength(abi_arg_out<Windows::Foundation::IReference<uint64_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResourceByteRangeLength());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HttpResponseMessage(abi_arg_out<Windows::Web::Http::IHttpResponseMessage> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HttpResponseMessage());
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
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedDeferral> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedDeferral>
{
    HRESULT __stdcall abi_Complete() noexcept override
    {
        try
        {
            this->shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs>
{
    HRESULT __stdcall get_ResourceType(Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResourceType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResourceUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResourceUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResourceByteRangeOffset(abi_arg_out<Windows::Foundation::IReference<uint64_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResourceByteRangeOffset());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResourceByteRangeLength(abi_arg_out<Windows::Foundation::IReference<uint64_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResourceByteRangeLength());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Result(abi_arg_out<Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Result());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedDeferral> deferral) noexcept override
    {
        try
        {
            *deferral = detach(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *deferral = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult>
{
    HRESULT __stdcall get_ResourceUri(abi_arg_out<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResourceUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ResourceUri(abi_arg_in<Windows::Foundation::IUriRuntimeClass> value) noexcept override
    {
        try
        {
            this->shim().ResourceUri(*reinterpret_cast<const Windows::Foundation::Uri *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_InputStream(abi_arg_out<Windows::Storage::Streams::IInputStream> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().InputStream());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_InputStream(abi_arg_in<Windows::Storage::Streams::IInputStream> value) noexcept override
    {
        try
        {
            this->shim().InputStream(*reinterpret_cast<const Windows::Storage::Streams::IInputStream *>(&value));
            return S_OK;
        }
        catch (...)
        {
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

    HRESULT __stdcall put_Buffer(abi_arg_in<Windows::Storage::Streams::IBuffer> value) noexcept override
    {
        try
        {
            this->shim().Buffer(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentType(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ContentType());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ContentType(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().ContentType(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtendedStatus(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ExtendedStatus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ExtendedStatus(uint32_t value) noexcept override
    {
        try
        {
            this->shim().ExtendedStatus(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult2> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult2>
{
    HRESULT __stdcall get_ResourceByteRangeOffset(abi_arg_out<Windows::Foundation::IReference<uint64_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResourceByteRangeOffset());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ResourceByteRangeOffset(abi_arg_in<Windows::Foundation::IReference<uint64_t>> value) noexcept override
    {
        try
        {
            this->shim().ResourceByteRangeOffset(*reinterpret_cast<const Windows::Foundation::IReference<uint64_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ResourceByteRangeLength(abi_arg_out<Windows::Foundation::IReference<uint64_t>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ResourceByteRangeLength());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ResourceByteRangeLength(abi_arg_in<Windows::Foundation::IReference<uint64_t>> value) noexcept override
    {
        try
        {
            this->shim().ResourceByteRangeLength(*reinterpret_cast<const Windows::Foundation::IReference<uint64_t> *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs>
{
    HRESULT __stdcall get_OldValue(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OldValue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NewValue(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NewValue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AudioOnly(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AudioOnly());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceStatics> : produce_base<D, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceStatics>
{
    HRESULT __stdcall abi_IsContentTypeSupported(abi_arg_in<hstring> contentType, bool * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().IsContentTypeSupported(*reinterpret_cast<const hstring *>(&contentType)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromUriAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateFromUriAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromUriWithDownloaderAsync(abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_in<Windows::Web::Http::IHttpClient> httpClient, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateFromUriAsync(*reinterpret_cast<const Windows::Foundation::Uri *>(&uri), *reinterpret_cast<const Windows::Web::Http::HttpClient *>(&httpClient)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromStreamAsync(abi_arg_in<Windows::Storage::Streams::IInputStream> stream, abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_in<hstring> contentType, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateFromStreamAsync(*reinterpret_cast<const Windows::Storage::Streams::IInputStream *>(&stream), *reinterpret_cast<const Windows::Foundation::Uri *>(&uri), *reinterpret_cast<const hstring *>(&contentType)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromStreamWithDownloaderAsync(abi_arg_in<Windows::Storage::Streams::IInputStream> stream, abi_arg_in<Windows::Foundation::IUriRuntimeClass> uri, abi_arg_in<hstring> contentType, abi_arg_in<Windows::Web::Http::IHttpClient> httpClient, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult>> result) noexcept override
    {
        try
        {
            *result = detach(this->shim().CreateFromStreamAsync(*reinterpret_cast<const Windows::Storage::Streams::IInputStream *>(&stream), *reinterpret_cast<const Windows::Foundation::Uri *>(&uri), *reinterpret_cast<const hstring *>(&contentType), *reinterpret_cast<const Windows::Web::Http::HttpClient *>(&httpClient)));
            return S_OK;
        }
        catch (...)
        {
            *result = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Media::Streaming::Adaptive {

template <typename D> Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationStatus impl_IAdaptiveMediaSourceCreationResult<D>::Status() const
{
    Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationStatus value {};
    check_hresult(static_cast<const IAdaptiveMediaSourceCreationResult &>(static_cast<const D &>(*this))->get_Status(&value));
    return value;
}

template <typename D> Windows::Media::Streaming::Adaptive::AdaptiveMediaSource impl_IAdaptiveMediaSourceCreationResult<D>::MediaSource() const
{
    Windows::Media::Streaming::Adaptive::AdaptiveMediaSource value { nullptr };
    check_hresult(static_cast<const IAdaptiveMediaSourceCreationResult &>(static_cast<const D &>(*this))->get_MediaSource(put(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpResponseMessage impl_IAdaptiveMediaSourceCreationResult<D>::HttpResponseMessage() const
{
    Windows::Web::Http::HttpResponseMessage value { nullptr };
    check_hresult(static_cast<const IAdaptiveMediaSourceCreationResult &>(static_cast<const D &>(*this))->get_HttpResponseMessage(put(value)));
    return value;
}

template <typename D> bool impl_IAdaptiveMediaSourceStatics<D>::IsContentTypeSupported(hstring_ref contentType) const
{
    bool result {};
    check_hresult(static_cast<const IAdaptiveMediaSourceStatics &>(static_cast<const D &>(*this))->abi_IsContentTypeSupported(get(contentType), &result));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> impl_IAdaptiveMediaSourceStatics<D>::CreateFromUriAsync(const Windows::Foundation::Uri & uri) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> result;
    check_hresult(static_cast<const IAdaptiveMediaSourceStatics &>(static_cast<const D &>(*this))->abi_CreateFromUriAsync(get(uri), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> impl_IAdaptiveMediaSourceStatics<D>::CreateFromUriAsync(const Windows::Foundation::Uri & uri, const Windows::Web::Http::HttpClient & httpClient) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> result;
    check_hresult(static_cast<const IAdaptiveMediaSourceStatics &>(static_cast<const D &>(*this))->abi_CreateFromUriWithDownloaderAsync(get(uri), get(httpClient), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> impl_IAdaptiveMediaSourceStatics<D>::CreateFromStreamAsync(const Windows::Storage::Streams::IInputStream & stream, const Windows::Foundation::Uri & uri, hstring_ref contentType) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> result;
    check_hresult(static_cast<const IAdaptiveMediaSourceStatics &>(static_cast<const D &>(*this))->abi_CreateFromStreamAsync(get(stream), get(uri), get(contentType), put(result)));
    return result;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> impl_IAdaptiveMediaSourceStatics<D>::CreateFromStreamAsync(const Windows::Storage::Streams::IInputStream & stream, const Windows::Foundation::Uri & uri, hstring_ref contentType, const Windows::Web::Http::HttpClient & httpClient) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> result;
    check_hresult(static_cast<const IAdaptiveMediaSourceStatics &>(static_cast<const D &>(*this))->abi_CreateFromStreamWithDownloaderAsync(get(stream), get(uri), get(contentType), get(httpClient), put(result)));
    return result;
}

template <typename D> bool impl_IAdaptiveMediaSource<D>::IsLive() const
{
    bool value {};
    check_hresult(static_cast<const IAdaptiveMediaSource &>(static_cast<const D &>(*this))->get_IsLive(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IAdaptiveMediaSource<D>::DesiredLiveOffset() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IAdaptiveMediaSource &>(static_cast<const D &>(*this))->get_DesiredLiveOffset(put(value)));
    return value;
}

template <typename D> void impl_IAdaptiveMediaSource<D>::DesiredLiveOffset(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(static_cast<const IAdaptiveMediaSource &>(static_cast<const D &>(*this))->put_DesiredLiveOffset(get(value)));
}

template <typename D> uint32_t impl_IAdaptiveMediaSource<D>::InitialBitrate() const
{
    uint32_t value {};
    check_hresult(static_cast<const IAdaptiveMediaSource &>(static_cast<const D &>(*this))->get_InitialBitrate(&value));
    return value;
}

template <typename D> void impl_IAdaptiveMediaSource<D>::InitialBitrate(uint32_t value) const
{
    check_hresult(static_cast<const IAdaptiveMediaSource &>(static_cast<const D &>(*this))->put_InitialBitrate(value));
}

template <typename D> uint32_t impl_IAdaptiveMediaSource<D>::CurrentDownloadBitrate() const
{
    uint32_t value {};
    check_hresult(static_cast<const IAdaptiveMediaSource &>(static_cast<const D &>(*this))->get_CurrentDownloadBitrate(&value));
    return value;
}

template <typename D> uint32_t impl_IAdaptiveMediaSource<D>::CurrentPlaybackBitrate() const
{
    uint32_t value {};
    check_hresult(static_cast<const IAdaptiveMediaSource &>(static_cast<const D &>(*this))->get_CurrentPlaybackBitrate(&value));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<uint32_t> impl_IAdaptiveMediaSource<D>::AvailableBitrates() const
{
    Windows::Foundation::Collections::IVectorView<uint32_t> value;
    check_hresult(static_cast<const IAdaptiveMediaSource &>(static_cast<const D &>(*this))->get_AvailableBitrates(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_IAdaptiveMediaSource<D>::DesiredMinBitrate() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(static_cast<const IAdaptiveMediaSource &>(static_cast<const D &>(*this))->get_DesiredMinBitrate(put(value)));
    return value;
}

template <typename D> void impl_IAdaptiveMediaSource<D>::DesiredMinBitrate(const Windows::Foundation::IReference<uint32_t> & value) const
{
    check_hresult(static_cast<const IAdaptiveMediaSource &>(static_cast<const D &>(*this))->put_DesiredMinBitrate(get(value)));
}

template <typename D> Windows::Foundation::IReference<uint32_t> impl_IAdaptiveMediaSource<D>::DesiredMaxBitrate() const
{
    Windows::Foundation::IReference<uint32_t> value;
    check_hresult(static_cast<const IAdaptiveMediaSource &>(static_cast<const D &>(*this))->get_DesiredMaxBitrate(put(value)));
    return value;
}

template <typename D> void impl_IAdaptiveMediaSource<D>::DesiredMaxBitrate(const Windows::Foundation::IReference<uint32_t> & value) const
{
    check_hresult(static_cast<const IAdaptiveMediaSource &>(static_cast<const D &>(*this))->put_DesiredMaxBitrate(get(value)));
}

template <typename D> bool impl_IAdaptiveMediaSource<D>::AudioOnlyPlayback() const
{
    bool value {};
    check_hresult(static_cast<const IAdaptiveMediaSource &>(static_cast<const D &>(*this))->get_AudioOnlyPlayback(&value));
    return value;
}

template <typename D> uint64_t impl_IAdaptiveMediaSource<D>::InboundBitsPerSecond() const
{
    uint64_t value {};
    check_hresult(static_cast<const IAdaptiveMediaSource &>(static_cast<const D &>(*this))->get_InboundBitsPerSecond(&value));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IAdaptiveMediaSource<D>::InboundBitsPerSecondWindow() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IAdaptiveMediaSource &>(static_cast<const D &>(*this))->get_InboundBitsPerSecondWindow(put(value)));
    return value;
}

template <typename D> void impl_IAdaptiveMediaSource<D>::InboundBitsPerSecondWindow(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(static_cast<const IAdaptiveMediaSource &>(static_cast<const D &>(*this))->put_InboundBitsPerSecondWindow(get(value)));
}

template <typename D> event_token impl_IAdaptiveMediaSource<D>::DownloadBitrateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadBitrateChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IAdaptiveMediaSource &>(static_cast<const D &>(*this))->add_DownloadBitrateChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAdaptiveMediaSource> impl_IAdaptiveMediaSource<D>::DownloadBitrateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadBitrateChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAdaptiveMediaSource>(this, &ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource::remove_DownloadBitrateChanged, DownloadBitrateChanged(handler));
}

template <typename D> void impl_IAdaptiveMediaSource<D>::DownloadBitrateChanged(event_token token) const
{
    check_hresult(static_cast<const IAdaptiveMediaSource &>(static_cast<const D &>(*this))->remove_DownloadBitrateChanged(token));
}

template <typename D> event_token impl_IAdaptiveMediaSource<D>::PlaybackBitrateChanged(const Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourcePlaybackBitrateChangedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IAdaptiveMediaSource &>(static_cast<const D &>(*this))->add_PlaybackBitrateChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAdaptiveMediaSource> impl_IAdaptiveMediaSource<D>::PlaybackBitrateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourcePlaybackBitrateChangedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAdaptiveMediaSource>(this, &ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource::remove_PlaybackBitrateChanged, PlaybackBitrateChanged(handler));
}

template <typename D> void impl_IAdaptiveMediaSource<D>::PlaybackBitrateChanged(event_token token) const
{
    check_hresult(static_cast<const IAdaptiveMediaSource &>(static_cast<const D &>(*this))->remove_PlaybackBitrateChanged(token));
}

template <typename D> event_token impl_IAdaptiveMediaSource<D>::DownloadRequested(const Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadRequestedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IAdaptiveMediaSource &>(static_cast<const D &>(*this))->add_DownloadRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAdaptiveMediaSource> impl_IAdaptiveMediaSource<D>::DownloadRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadRequestedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAdaptiveMediaSource>(this, &ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource::remove_DownloadRequested, DownloadRequested(handler));
}

template <typename D> void impl_IAdaptiveMediaSource<D>::DownloadRequested(event_token token) const
{
    check_hresult(static_cast<const IAdaptiveMediaSource &>(static_cast<const D &>(*this))->remove_DownloadRequested(token));
}

template <typename D> event_token impl_IAdaptiveMediaSource<D>::DownloadCompleted(const Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadCompletedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IAdaptiveMediaSource &>(static_cast<const D &>(*this))->add_DownloadCompleted(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAdaptiveMediaSource> impl_IAdaptiveMediaSource<D>::DownloadCompleted(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadCompletedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAdaptiveMediaSource>(this, &ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource::remove_DownloadCompleted, DownloadCompleted(handler));
}

template <typename D> void impl_IAdaptiveMediaSource<D>::DownloadCompleted(event_token token) const
{
    check_hresult(static_cast<const IAdaptiveMediaSource &>(static_cast<const D &>(*this))->remove_DownloadCompleted(token));
}

template <typename D> event_token impl_IAdaptiveMediaSource<D>::DownloadFailed(const Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadFailedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IAdaptiveMediaSource &>(static_cast<const D &>(*this))->add_DownloadFailed(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IAdaptiveMediaSource> impl_IAdaptiveMediaSource<D>::DownloadFailed(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadFailedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IAdaptiveMediaSource>(this, &ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource::remove_DownloadFailed, DownloadFailed(handler));
}

template <typename D> void impl_IAdaptiveMediaSource<D>::DownloadFailed(event_token token) const
{
    check_hresult(static_cast<const IAdaptiveMediaSource &>(static_cast<const D &>(*this))->remove_DownloadFailed(token));
}

template <typename D> Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceAdvancedSettings impl_IAdaptiveMediaSource2<D>::AdvancedSettings() const
{
    Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceAdvancedSettings value { nullptr };
    check_hresult(static_cast<const IAdaptiveMediaSource2 &>(static_cast<const D &>(*this))->get_AdvancedSettings(put(value)));
    return value;
}

template <typename D> bool impl_IAdaptiveMediaSourceAdvancedSettings<D>::AllSegmentsIndependent() const
{
    bool value {};
    check_hresult(static_cast<const IAdaptiveMediaSourceAdvancedSettings &>(static_cast<const D &>(*this))->get_AllSegmentsIndependent(&value));
    return value;
}

template <typename D> void impl_IAdaptiveMediaSourceAdvancedSettings<D>::AllSegmentsIndependent(bool value) const
{
    check_hresult(static_cast<const IAdaptiveMediaSourceAdvancedSettings &>(static_cast<const D &>(*this))->put_AllSegmentsIndependent(value));
}

template <typename D> Windows::Foundation::IReference<double> impl_IAdaptiveMediaSourceAdvancedSettings<D>::DesiredBitrateHeadroomRatio() const
{
    Windows::Foundation::IReference<double> value;
    check_hresult(static_cast<const IAdaptiveMediaSourceAdvancedSettings &>(static_cast<const D &>(*this))->get_DesiredBitrateHeadroomRatio(put(value)));
    return value;
}

template <typename D> void impl_IAdaptiveMediaSourceAdvancedSettings<D>::DesiredBitrateHeadroomRatio(const Windows::Foundation::IReference<double> & value) const
{
    check_hresult(static_cast<const IAdaptiveMediaSourceAdvancedSettings &>(static_cast<const D &>(*this))->put_DesiredBitrateHeadroomRatio(get(value)));
}

template <typename D> Windows::Foundation::IReference<double> impl_IAdaptiveMediaSourceAdvancedSettings<D>::BitrateDowngradeTriggerRatio() const
{
    Windows::Foundation::IReference<double> value;
    check_hresult(static_cast<const IAdaptiveMediaSourceAdvancedSettings &>(static_cast<const D &>(*this))->get_BitrateDowngradeTriggerRatio(put(value)));
    return value;
}

template <typename D> void impl_IAdaptiveMediaSourceAdvancedSettings<D>::BitrateDowngradeTriggerRatio(const Windows::Foundation::IReference<double> & value) const
{
    check_hresult(static_cast<const IAdaptiveMediaSourceAdvancedSettings &>(static_cast<const D &>(*this))->put_BitrateDowngradeTriggerRatio(get(value)));
}

template <typename D> uint32_t impl_IAdaptiveMediaSourceDownloadBitrateChangedEventArgs<D>::OldValue() const
{
    uint32_t value {};
    check_hresult(static_cast<const IAdaptiveMediaSourceDownloadBitrateChangedEventArgs &>(static_cast<const D &>(*this))->get_OldValue(&value));
    return value;
}

template <typename D> uint32_t impl_IAdaptiveMediaSourceDownloadBitrateChangedEventArgs<D>::NewValue() const
{
    uint32_t value {};
    check_hresult(static_cast<const IAdaptiveMediaSourceDownloadBitrateChangedEventArgs &>(static_cast<const D &>(*this))->get_NewValue(&value));
    return value;
}

template <typename D> uint32_t impl_IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs<D>::OldValue() const
{
    uint32_t value {};
    check_hresult(static_cast<const IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs &>(static_cast<const D &>(*this))->get_OldValue(&value));
    return value;
}

template <typename D> uint32_t impl_IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs<D>::NewValue() const
{
    uint32_t value {};
    check_hresult(static_cast<const IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs &>(static_cast<const D &>(*this))->get_NewValue(&value));
    return value;
}

template <typename D> bool impl_IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs<D>::AudioOnly() const
{
    bool value {};
    check_hresult(static_cast<const IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs &>(static_cast<const D &>(*this))->get_AudioOnly(&value));
    return value;
}

template <typename D> Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType impl_IAdaptiveMediaSourceDownloadRequestedEventArgs<D>::ResourceType() const
{
    Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType value {};
    check_hresult(static_cast<const IAdaptiveMediaSourceDownloadRequestedEventArgs &>(static_cast<const D &>(*this))->get_ResourceType(&value));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_IAdaptiveMediaSourceDownloadRequestedEventArgs<D>::ResourceUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IAdaptiveMediaSourceDownloadRequestedEventArgs &>(static_cast<const D &>(*this))->get_ResourceUri(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint64_t> impl_IAdaptiveMediaSourceDownloadRequestedEventArgs<D>::ResourceByteRangeOffset() const
{
    Windows::Foundation::IReference<uint64_t> value;
    check_hresult(static_cast<const IAdaptiveMediaSourceDownloadRequestedEventArgs &>(static_cast<const D &>(*this))->get_ResourceByteRangeOffset(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint64_t> impl_IAdaptiveMediaSourceDownloadRequestedEventArgs<D>::ResourceByteRangeLength() const
{
    Windows::Foundation::IReference<uint64_t> value;
    check_hresult(static_cast<const IAdaptiveMediaSourceDownloadRequestedEventArgs &>(static_cast<const D &>(*this))->get_ResourceByteRangeLength(put(value)));
    return value;
}

template <typename D> Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadResult impl_IAdaptiveMediaSourceDownloadRequestedEventArgs<D>::Result() const
{
    Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadResult value { nullptr };
    check_hresult(static_cast<const IAdaptiveMediaSourceDownloadRequestedEventArgs &>(static_cast<const D &>(*this))->get_Result(put(value)));
    return value;
}

template <typename D> Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadRequestedDeferral impl_IAdaptiveMediaSourceDownloadRequestedEventArgs<D>::GetDeferral() const
{
    Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadRequestedDeferral deferral { nullptr };
    check_hresult(static_cast<const IAdaptiveMediaSourceDownloadRequestedEventArgs &>(static_cast<const D &>(*this))->abi_GetDeferral(put(deferral)));
    return deferral;
}

template <typename D> Windows::Foundation::Uri impl_IAdaptiveMediaSourceDownloadResult<D>::ResourceUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IAdaptiveMediaSourceDownloadResult &>(static_cast<const D &>(*this))->get_ResourceUri(put(value)));
    return value;
}

template <typename D> void impl_IAdaptiveMediaSourceDownloadResult<D>::ResourceUri(const Windows::Foundation::Uri & value) const
{
    check_hresult(static_cast<const IAdaptiveMediaSourceDownloadResult &>(static_cast<const D &>(*this))->put_ResourceUri(get(value)));
}

template <typename D> Windows::Storage::Streams::IInputStream impl_IAdaptiveMediaSourceDownloadResult<D>::InputStream() const
{
    Windows::Storage::Streams::IInputStream value;
    check_hresult(static_cast<const IAdaptiveMediaSourceDownloadResult &>(static_cast<const D &>(*this))->get_InputStream(put(value)));
    return value;
}

template <typename D> void impl_IAdaptiveMediaSourceDownloadResult<D>::InputStream(const Windows::Storage::Streams::IInputStream & value) const
{
    check_hresult(static_cast<const IAdaptiveMediaSourceDownloadResult &>(static_cast<const D &>(*this))->put_InputStream(get(value)));
}

template <typename D> Windows::Storage::Streams::IBuffer impl_IAdaptiveMediaSourceDownloadResult<D>::Buffer() const
{
    Windows::Storage::Streams::IBuffer value;
    check_hresult(static_cast<const IAdaptiveMediaSourceDownloadResult &>(static_cast<const D &>(*this))->get_Buffer(put(value)));
    return value;
}

template <typename D> void impl_IAdaptiveMediaSourceDownloadResult<D>::Buffer(const Windows::Storage::Streams::IBuffer & value) const
{
    check_hresult(static_cast<const IAdaptiveMediaSourceDownloadResult &>(static_cast<const D &>(*this))->put_Buffer(get(value)));
}

template <typename D> hstring impl_IAdaptiveMediaSourceDownloadResult<D>::ContentType() const
{
    hstring value;
    check_hresult(static_cast<const IAdaptiveMediaSourceDownloadResult &>(static_cast<const D &>(*this))->get_ContentType(put(value)));
    return value;
}

template <typename D> void impl_IAdaptiveMediaSourceDownloadResult<D>::ContentType(hstring_ref value) const
{
    check_hresult(static_cast<const IAdaptiveMediaSourceDownloadResult &>(static_cast<const D &>(*this))->put_ContentType(get(value)));
}

template <typename D> uint32_t impl_IAdaptiveMediaSourceDownloadResult<D>::ExtendedStatus() const
{
    uint32_t value {};
    check_hresult(static_cast<const IAdaptiveMediaSourceDownloadResult &>(static_cast<const D &>(*this))->get_ExtendedStatus(&value));
    return value;
}

template <typename D> void impl_IAdaptiveMediaSourceDownloadResult<D>::ExtendedStatus(uint32_t value) const
{
    check_hresult(static_cast<const IAdaptiveMediaSourceDownloadResult &>(static_cast<const D &>(*this))->put_ExtendedStatus(value));
}

template <typename D> Windows::Foundation::IReference<uint64_t> impl_IAdaptiveMediaSourceDownloadResult2<D>::ResourceByteRangeOffset() const
{
    Windows::Foundation::IReference<uint64_t> value;
    check_hresult(static_cast<const IAdaptiveMediaSourceDownloadResult2 &>(static_cast<const D &>(*this))->get_ResourceByteRangeOffset(put(value)));
    return value;
}

template <typename D> void impl_IAdaptiveMediaSourceDownloadResult2<D>::ResourceByteRangeOffset(const Windows::Foundation::IReference<uint64_t> & value) const
{
    check_hresult(static_cast<const IAdaptiveMediaSourceDownloadResult2 &>(static_cast<const D &>(*this))->put_ResourceByteRangeOffset(get(value)));
}

template <typename D> Windows::Foundation::IReference<uint64_t> impl_IAdaptiveMediaSourceDownloadResult2<D>::ResourceByteRangeLength() const
{
    Windows::Foundation::IReference<uint64_t> value;
    check_hresult(static_cast<const IAdaptiveMediaSourceDownloadResult2 &>(static_cast<const D &>(*this))->get_ResourceByteRangeLength(put(value)));
    return value;
}

template <typename D> void impl_IAdaptiveMediaSourceDownloadResult2<D>::ResourceByteRangeLength(const Windows::Foundation::IReference<uint64_t> & value) const
{
    check_hresult(static_cast<const IAdaptiveMediaSourceDownloadResult2 &>(static_cast<const D &>(*this))->put_ResourceByteRangeLength(get(value)));
}

template <typename D> void impl_IAdaptiveMediaSourceDownloadRequestedDeferral<D>::Complete() const
{
    check_hresult(static_cast<const IAdaptiveMediaSourceDownloadRequestedDeferral &>(static_cast<const D &>(*this))->abi_Complete());
}

template <typename D> Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType impl_IAdaptiveMediaSourceDownloadCompletedEventArgs<D>::ResourceType() const
{
    Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType value {};
    check_hresult(static_cast<const IAdaptiveMediaSourceDownloadCompletedEventArgs &>(static_cast<const D &>(*this))->get_ResourceType(&value));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_IAdaptiveMediaSourceDownloadCompletedEventArgs<D>::ResourceUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IAdaptiveMediaSourceDownloadCompletedEventArgs &>(static_cast<const D &>(*this))->get_ResourceUri(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint64_t> impl_IAdaptiveMediaSourceDownloadCompletedEventArgs<D>::ResourceByteRangeOffset() const
{
    Windows::Foundation::IReference<uint64_t> value;
    check_hresult(static_cast<const IAdaptiveMediaSourceDownloadCompletedEventArgs &>(static_cast<const D &>(*this))->get_ResourceByteRangeOffset(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint64_t> impl_IAdaptiveMediaSourceDownloadCompletedEventArgs<D>::ResourceByteRangeLength() const
{
    Windows::Foundation::IReference<uint64_t> value;
    check_hresult(static_cast<const IAdaptiveMediaSourceDownloadCompletedEventArgs &>(static_cast<const D &>(*this))->get_ResourceByteRangeLength(put(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpResponseMessage impl_IAdaptiveMediaSourceDownloadCompletedEventArgs<D>::HttpResponseMessage() const
{
    Windows::Web::Http::HttpResponseMessage value { nullptr };
    check_hresult(static_cast<const IAdaptiveMediaSourceDownloadCompletedEventArgs &>(static_cast<const D &>(*this))->get_HttpResponseMessage(put(value)));
    return value;
}

template <typename D> Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType impl_IAdaptiveMediaSourceDownloadFailedEventArgs<D>::ResourceType() const
{
    Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType value {};
    check_hresult(static_cast<const IAdaptiveMediaSourceDownloadFailedEventArgs &>(static_cast<const D &>(*this))->get_ResourceType(&value));
    return value;
}

template <typename D> Windows::Foundation::Uri impl_IAdaptiveMediaSourceDownloadFailedEventArgs<D>::ResourceUri() const
{
    Windows::Foundation::Uri value { nullptr };
    check_hresult(static_cast<const IAdaptiveMediaSourceDownloadFailedEventArgs &>(static_cast<const D &>(*this))->get_ResourceUri(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint64_t> impl_IAdaptiveMediaSourceDownloadFailedEventArgs<D>::ResourceByteRangeOffset() const
{
    Windows::Foundation::IReference<uint64_t> value;
    check_hresult(static_cast<const IAdaptiveMediaSourceDownloadFailedEventArgs &>(static_cast<const D &>(*this))->get_ResourceByteRangeOffset(put(value)));
    return value;
}

template <typename D> Windows::Foundation::IReference<uint64_t> impl_IAdaptiveMediaSourceDownloadFailedEventArgs<D>::ResourceByteRangeLength() const
{
    Windows::Foundation::IReference<uint64_t> value;
    check_hresult(static_cast<const IAdaptiveMediaSourceDownloadFailedEventArgs &>(static_cast<const D &>(*this))->get_ResourceByteRangeLength(put(value)));
    return value;
}

template <typename D> Windows::Web::Http::HttpResponseMessage impl_IAdaptiveMediaSourceDownloadFailedEventArgs<D>::HttpResponseMessage() const
{
    Windows::Web::Http::HttpResponseMessage value { nullptr };
    check_hresult(static_cast<const IAdaptiveMediaSourceDownloadFailedEventArgs &>(static_cast<const D &>(*this))->get_HttpResponseMessage(put(value)));
    return value;
}

inline bool AdaptiveMediaSource::IsContentTypeSupported(hstring_ref contentType)
{
    return get_activation_factory<AdaptiveMediaSource, IAdaptiveMediaSourceStatics>().IsContentTypeSupported(contentType);
}

inline Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> AdaptiveMediaSource::CreateFromUriAsync(const Windows::Foundation::Uri & uri)
{
    return get_activation_factory<AdaptiveMediaSource, IAdaptiveMediaSourceStatics>().CreateFromUriAsync(uri);
}

inline Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> AdaptiveMediaSource::CreateFromUriAsync(const Windows::Foundation::Uri & uri, const Windows::Web::Http::HttpClient & httpClient)
{
    return get_activation_factory<AdaptiveMediaSource, IAdaptiveMediaSourceStatics>().CreateFromUriAsync(uri, httpClient);
}

inline Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> AdaptiveMediaSource::CreateFromStreamAsync(const Windows::Storage::Streams::IInputStream & stream, const Windows::Foundation::Uri & uri, hstring_ref contentType)
{
    return get_activation_factory<AdaptiveMediaSource, IAdaptiveMediaSourceStatics>().CreateFromStreamAsync(stream, uri, contentType);
}

inline Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> AdaptiveMediaSource::CreateFromStreamAsync(const Windows::Storage::Streams::IInputStream & stream, const Windows::Foundation::Uri & uri, hstring_ref contentType, const Windows::Web::Http::HttpClient & httpClient)
{
    return get_activation_factory<AdaptiveMediaSource, IAdaptiveMediaSourceStatics>().CreateFromStreamAsync(stream, uri, contentType, httpClient);
}

}

}
