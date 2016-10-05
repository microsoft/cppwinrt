// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Media.Streaming.Adaptive.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Media.Core.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Web.Http.0.h"
#include "Windows.Foundation.1.h"
#include "Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Media::Streaming::Adaptive {

struct __declspec(uuid("4c7332ef-d39f-4396-b4d9-043957a7c964")) __declspec(novtable) IAdaptiveMediaSource : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsLive(bool * value) = 0;
    virtual HRESULT __stdcall get_DesiredLiveOffset(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall put_DesiredLiveOffset(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_InitialBitrate(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_InitialBitrate(uint32_t value) = 0;
    virtual HRESULT __stdcall get_CurrentDownloadBitrate(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_CurrentPlaybackBitrate(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_AvailableBitrates(Windows::Foundation::Collections::IVectorView<uint32_t> ** value) = 0;
    virtual HRESULT __stdcall get_DesiredMinBitrate(Windows::Foundation::IReference<uint32_t> ** value) = 0;
    virtual HRESULT __stdcall put_DesiredMinBitrate(Windows::Foundation::IReference<uint32_t> * value) = 0;
    virtual HRESULT __stdcall get_DesiredMaxBitrate(Windows::Foundation::IReference<uint32_t> ** value) = 0;
    virtual HRESULT __stdcall put_DesiredMaxBitrate(Windows::Foundation::IReference<uint32_t> * value) = 0;
    virtual HRESULT __stdcall get_AudioOnlyPlayback(bool * value) = 0;
    virtual HRESULT __stdcall get_InboundBitsPerSecond(uint64_t * value) = 0;
    virtual HRESULT __stdcall get_InboundBitsPerSecondWindow(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall put_InboundBitsPerSecondWindow(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall add_DownloadBitrateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadBitrateChangedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_DownloadBitrateChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_PlaybackBitrateChanged(Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourcePlaybackBitrateChangedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_PlaybackBitrateChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_DownloadRequested(Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadRequestedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_DownloadRequested(event_token token) = 0;
    virtual HRESULT __stdcall add_DownloadCompleted(Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadCompletedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_DownloadCompleted(event_token token) = 0;
    virtual HRESULT __stdcall add_DownloadFailed(Windows::Foundation::TypedEventHandler<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource, Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadFailedEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_DownloadFailed(event_token token) = 0;
};

struct __declspec(uuid("17890342-6760-4bb9-a58a-f7aa98b08c0e")) __declspec(novtable) IAdaptiveMediaSource2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AdvancedSettings(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceAdvancedSettings ** value) = 0;
};

struct __declspec(uuid("55db1680-1aeb-47dc-aa08-9a11610ba45a")) __declspec(novtable) IAdaptiveMediaSourceAdvancedSettings : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AllSegmentsIndependent(bool * value) = 0;
    virtual HRESULT __stdcall put_AllSegmentsIndependent(bool value) = 0;
    virtual HRESULT __stdcall get_DesiredBitrateHeadroomRatio(Windows::Foundation::IReference<double> ** value) = 0;
    virtual HRESULT __stdcall put_DesiredBitrateHeadroomRatio(Windows::Foundation::IReference<double> * value) = 0;
    virtual HRESULT __stdcall get_BitrateDowngradeTriggerRatio(Windows::Foundation::IReference<double> ** value) = 0;
    virtual HRESULT __stdcall put_BitrateDowngradeTriggerRatio(Windows::Foundation::IReference<double> * value) = 0;
};

struct __declspec(uuid("4686b6b2-800f-4e31-9093-76d4782013e7")) __declspec(novtable) IAdaptiveMediaSourceCreationResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Status(winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationStatus * value) = 0;
    virtual HRESULT __stdcall get_MediaSource(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource ** value) = 0;
    virtual HRESULT __stdcall get_HttpResponseMessage(Windows::Web::Http::IHttpResponseMessage ** value) = 0;
};

struct __declspec(uuid("670c0a44-e04e-4eff-816a-17399f78f4ba")) __declspec(novtable) IAdaptiveMediaSourceDownloadBitrateChangedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_OldValue(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_NewValue(uint32_t * value) = 0;
};

struct __declspec(uuid("19240dc3-5b37-4a1a-8970-d621cb6ca83b")) __declspec(novtable) IAdaptiveMediaSourceDownloadCompletedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ResourceType(winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType * value) = 0;
    virtual HRESULT __stdcall get_ResourceUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall get_ResourceByteRangeOffset(Windows::Foundation::IReference<uint64_t> ** value) = 0;
    virtual HRESULT __stdcall get_ResourceByteRangeLength(Windows::Foundation::IReference<uint64_t> ** value) = 0;
    virtual HRESULT __stdcall get_HttpResponseMessage(Windows::Web::Http::IHttpResponseMessage ** value) = 0;
};

struct __declspec(uuid("37739048-f4ab-40a4-b135-c6dfd8bd7ff1")) __declspec(novtable) IAdaptiveMediaSourceDownloadFailedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ResourceType(winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType * value) = 0;
    virtual HRESULT __stdcall get_ResourceUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall get_ResourceByteRangeOffset(Windows::Foundation::IReference<uint64_t> ** value) = 0;
    virtual HRESULT __stdcall get_ResourceByteRangeLength(Windows::Foundation::IReference<uint64_t> ** value) = 0;
    virtual HRESULT __stdcall get_HttpResponseMessage(Windows::Web::Http::IHttpResponseMessage ** value) = 0;
};

struct __declspec(uuid("05c68f64-fa20-4dbd-9821-4bf4c9bf77ab")) __declspec(novtable) IAdaptiveMediaSourceDownloadRequestedDeferral : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_Complete() = 0;
};

struct __declspec(uuid("c83fdffd-44a9-47a2-bf96-03398b4bfaaf")) __declspec(novtable) IAdaptiveMediaSourceDownloadRequestedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ResourceType(winrt::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceResourceType * value) = 0;
    virtual HRESULT __stdcall get_ResourceUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall get_ResourceByteRangeOffset(Windows::Foundation::IReference<uint64_t> ** value) = 0;
    virtual HRESULT __stdcall get_ResourceByteRangeLength(Windows::Foundation::IReference<uint64_t> ** value) = 0;
    virtual HRESULT __stdcall get_Result(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult ** value) = 0;
    virtual HRESULT __stdcall abi_GetDeferral(Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedDeferral ** deferral) = 0;
};

struct __declspec(uuid("f4afdc73-bcee-4a6a-9f0a-fec41e2339b0")) __declspec(novtable) IAdaptiveMediaSourceDownloadResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ResourceUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_ResourceUri(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_InputStream(Windows::Storage::Streams::IInputStream ** value) = 0;
    virtual HRESULT __stdcall put_InputStream(Windows::Storage::Streams::IInputStream * value) = 0;
    virtual HRESULT __stdcall get_Buffer(Windows::Storage::Streams::IBuffer ** value) = 0;
    virtual HRESULT __stdcall put_Buffer(Windows::Storage::Streams::IBuffer * value) = 0;
    virtual HRESULT __stdcall get_ContentType(hstring * value) = 0;
    virtual HRESULT __stdcall put_ContentType(hstring value) = 0;
    virtual HRESULT __stdcall get_ExtendedStatus(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_ExtendedStatus(uint32_t value) = 0;
};

struct __declspec(uuid("15552cb7-7b80-4ac4-8660-a4b97f7c70f0")) __declspec(novtable) IAdaptiveMediaSourceDownloadResult2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ResourceByteRangeOffset(Windows::Foundation::IReference<uint64_t> ** value) = 0;
    virtual HRESULT __stdcall put_ResourceByteRangeOffset(Windows::Foundation::IReference<uint64_t> * value) = 0;
    virtual HRESULT __stdcall get_ResourceByteRangeLength(Windows::Foundation::IReference<uint64_t> ** value) = 0;
    virtual HRESULT __stdcall put_ResourceByteRangeLength(Windows::Foundation::IReference<uint64_t> * value) = 0;
};

struct __declspec(uuid("23a29f6d-7dda-4a51-87a9-6fa8c5b292be")) __declspec(novtable) IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_OldValue(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_NewValue(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_AudioOnly(bool * value) = 0;
};

struct __declspec(uuid("50a6bd5d-66ef-4cd3-9579-9e660507dc3f")) __declspec(novtable) IAdaptiveMediaSourceStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_IsContentTypeSupported(hstring contentType, bool * result) = 0;
    virtual HRESULT __stdcall abi_CreateFromUriAsync(Windows::Foundation::IUriRuntimeClass * uri, Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> ** result) = 0;
    virtual HRESULT __stdcall abi_CreateFromUriWithDownloaderAsync(Windows::Foundation::IUriRuntimeClass * uri, Windows::Web::Http::IHttpClient * httpClient, Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> ** result) = 0;
    virtual HRESULT __stdcall abi_CreateFromStreamAsync(Windows::Storage::Streams::IInputStream * stream, Windows::Foundation::IUriRuntimeClass * uri, hstring contentType, Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> ** result) = 0;
    virtual HRESULT __stdcall abi_CreateFromStreamWithDownloaderAsync(Windows::Storage::Streams::IInputStream * stream, Windows::Foundation::IUriRuntimeClass * uri, hstring contentType, Windows::Web::Http::IHttpClient * httpClient, Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> ** result) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource> { using default_interface = Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource; };
template <> struct traits<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceAdvancedSettings> { using default_interface = Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceAdvancedSettings; };
template <> struct traits<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> { using default_interface = Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult; };
template <> struct traits<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadBitrateChangedEventArgs> { using default_interface = Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadBitrateChangedEventArgs; };
template <> struct traits<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadCompletedEventArgs> { using default_interface = Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs; };
template <> struct traits<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadFailedEventArgs> { using default_interface = Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs; };
template <> struct traits<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadRequestedDeferral> { using default_interface = Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedDeferral; };
template <> struct traits<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadRequestedEventArgs> { using default_interface = Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs; };
template <> struct traits<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadResult> { using default_interface = Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult; };
template <> struct traits<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourcePlaybackBitrateChangedEventArgs> { using default_interface = Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs; };

}

namespace Windows::Media::Streaming::Adaptive {

template <typename T> struct impl_IAdaptiveMediaSource;
template <typename T> struct impl_IAdaptiveMediaSource2;
template <typename T> struct impl_IAdaptiveMediaSourceAdvancedSettings;
template <typename T> struct impl_IAdaptiveMediaSourceCreationResult;
template <typename T> struct impl_IAdaptiveMediaSourceDownloadBitrateChangedEventArgs;
template <typename T> struct impl_IAdaptiveMediaSourceDownloadCompletedEventArgs;
template <typename T> struct impl_IAdaptiveMediaSourceDownloadFailedEventArgs;
template <typename T> struct impl_IAdaptiveMediaSourceDownloadRequestedDeferral;
template <typename T> struct impl_IAdaptiveMediaSourceDownloadRequestedEventArgs;
template <typename T> struct impl_IAdaptiveMediaSourceDownloadResult;
template <typename T> struct impl_IAdaptiveMediaSourceDownloadResult2;
template <typename T> struct impl_IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs;
template <typename T> struct impl_IAdaptiveMediaSourceStatics;

}

namespace impl {

template <> struct traits<Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource>
{
    using abi = ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource;
    template <typename D> using consume = Windows::Media::Streaming::Adaptive::impl_IAdaptiveMediaSource<D>;
};

template <> struct traits<Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource2>
{
    using abi = ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource2;
    template <typename D> using consume = Windows::Media::Streaming::Adaptive::impl_IAdaptiveMediaSource2<D>;
};

template <> struct traits<Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceAdvancedSettings>
{
    using abi = ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceAdvancedSettings;
    template <typename D> using consume = Windows::Media::Streaming::Adaptive::impl_IAdaptiveMediaSourceAdvancedSettings<D>;
};

template <> struct traits<Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult>
{
    using abi = ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult;
    template <typename D> using consume = Windows::Media::Streaming::Adaptive::impl_IAdaptiveMediaSourceCreationResult<D>;
};

template <> struct traits<Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadBitrateChangedEventArgs>
{
    using abi = ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadBitrateChangedEventArgs;
    template <typename D> using consume = Windows::Media::Streaming::Adaptive::impl_IAdaptiveMediaSourceDownloadBitrateChangedEventArgs<D>;
};

template <> struct traits<Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs>
{
    using abi = ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs;
    template <typename D> using consume = Windows::Media::Streaming::Adaptive::impl_IAdaptiveMediaSourceDownloadCompletedEventArgs<D>;
};

template <> struct traits<Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs>
{
    using abi = ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs;
    template <typename D> using consume = Windows::Media::Streaming::Adaptive::impl_IAdaptiveMediaSourceDownloadFailedEventArgs<D>;
};

template <> struct traits<Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedDeferral>
{
    using abi = ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedDeferral;
    template <typename D> using consume = Windows::Media::Streaming::Adaptive::impl_IAdaptiveMediaSourceDownloadRequestedDeferral<D>;
};

template <> struct traits<Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs>
{
    using abi = ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs;
    template <typename D> using consume = Windows::Media::Streaming::Adaptive::impl_IAdaptiveMediaSourceDownloadRequestedEventArgs<D>;
};

template <> struct traits<Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult>
{
    using abi = ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult;
    template <typename D> using consume = Windows::Media::Streaming::Adaptive::impl_IAdaptiveMediaSourceDownloadResult<D>;
};

template <> struct traits<Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult2>
{
    using abi = ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult2;
    template <typename D> using consume = Windows::Media::Streaming::Adaptive::impl_IAdaptiveMediaSourceDownloadResult2<D>;
};

template <> struct traits<Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs>
{
    using abi = ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs;
    template <typename D> using consume = Windows::Media::Streaming::Adaptive::impl_IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs<D>;
};

template <> struct traits<Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceStatics>
{
    using abi = ABI::Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceStatics;
    template <typename D> using consume = Windows::Media::Streaming::Adaptive::impl_IAdaptiveMediaSourceStatics<D>;
};

template <> struct traits<Windows::Media::Streaming::Adaptive::AdaptiveMediaSource>
{
    using abi = ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSource;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSource"; }
};

template <> struct traits<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceAdvancedSettings>
{
    using abi = ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceAdvancedSettings;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceAdvancedSettings"; }
};

template <> struct traits<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult>
{
    using abi = ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceCreationResult"; }
};

template <> struct traits<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadBitrateChangedEventArgs>
{
    using abi = ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadBitrateChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadBitrateChangedEventArgs"; }
};

template <> struct traits<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadCompletedEventArgs>
{
    using abi = ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadCompletedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadCompletedEventArgs"; }
};

template <> struct traits<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadFailedEventArgs>
{
    using abi = ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadFailedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadFailedEventArgs"; }
};

template <> struct traits<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadRequestedDeferral>
{
    using abi = ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadRequestedDeferral;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadRequestedDeferral"; }
};

template <> struct traits<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadRequestedEventArgs>
{
    using abi = ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadRequestedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadRequestedEventArgs"; }
};

template <> struct traits<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadResult>
{
    using abi = ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceDownloadResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourceDownloadResult"; }
};

template <> struct traits<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourcePlaybackBitrateChangedEventArgs>
{
    using abi = ABI::Windows::Media::Streaming::Adaptive::AdaptiveMediaSourcePlaybackBitrateChangedEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Streaming.Adaptive.AdaptiveMediaSourcePlaybackBitrateChangedEventArgs"; }
};

}

}
