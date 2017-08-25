// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Web.Http.1.h"
#include "winrt/impl/Windows.Media.Core.1.h"
#include "winrt/impl/Windows.Media.Streaming.Adaptive.1.h"

WINRT_EXPORT namespace winrt::Windows::Media::Streaming::Adaptive {

struct WINRT_EBO AdaptiveMediaSource :
    Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource,
    impl::require<AdaptiveMediaSource, Windows::Foundation::IClosable, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource2, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSource3>
{
    AdaptiveMediaSource(std::nullptr_t) noexcept {}
    static bool IsContentTypeSupported(param::hstring const& contentType);
    static Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> CreateFromUriAsync(Windows::Foundation::Uri const& uri);
    static Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> CreateFromUriAsync(Windows::Foundation::Uri const& uri, Windows::Web::Http::HttpClient const& httpClient);
    static Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> CreateFromStreamAsync(Windows::Storage::Streams::IInputStream const& stream, Windows::Foundation::Uri const& uri, param::hstring const& contentType);
    static Windows::Foundation::IAsyncOperation<Windows::Media::Streaming::Adaptive::AdaptiveMediaSourceCreationResult> CreateFromStreamAsync(Windows::Storage::Streams::IInputStream const& stream, Windows::Foundation::Uri const& uri, param::hstring const& contentType, Windows::Web::Http::HttpClient const& httpClient);
};

struct WINRT_EBO AdaptiveMediaSourceAdvancedSettings :
    Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceAdvancedSettings
{
    AdaptiveMediaSourceAdvancedSettings(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AdaptiveMediaSourceCorrelatedTimes :
    Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCorrelatedTimes
{
    AdaptiveMediaSourceCorrelatedTimes(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AdaptiveMediaSourceCreationResult :
    Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult,
    impl::require<AdaptiveMediaSourceCreationResult, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceCreationResult2>
{
    AdaptiveMediaSourceCreationResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AdaptiveMediaSourceDiagnosticAvailableEventArgs :
    Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnosticAvailableEventArgs
{
    AdaptiveMediaSourceDiagnosticAvailableEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AdaptiveMediaSourceDiagnostics :
    Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDiagnostics
{
    AdaptiveMediaSourceDiagnostics(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AdaptiveMediaSourceDownloadBitrateChangedEventArgs :
    Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadBitrateChangedEventArgs,
    impl::require<AdaptiveMediaSourceDownloadBitrateChangedEventArgs, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2>
{
    AdaptiveMediaSourceDownloadBitrateChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AdaptiveMediaSourceDownloadCompletedEventArgs :
    Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs,
    impl::require<AdaptiveMediaSourceDownloadCompletedEventArgs, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadCompletedEventArgs2>
{
    AdaptiveMediaSourceDownloadCompletedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AdaptiveMediaSourceDownloadFailedEventArgs :
    Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs,
    impl::require<AdaptiveMediaSourceDownloadFailedEventArgs, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadFailedEventArgs2>
{
    AdaptiveMediaSourceDownloadFailedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AdaptiveMediaSourceDownloadRequestedDeferral :
    Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedDeferral
{
    AdaptiveMediaSourceDownloadRequestedDeferral(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AdaptiveMediaSourceDownloadRequestedEventArgs :
    Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs,
    impl::require<AdaptiveMediaSourceDownloadRequestedEventArgs, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadRequestedEventArgs2>
{
    AdaptiveMediaSourceDownloadRequestedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AdaptiveMediaSourceDownloadResult :
    Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult,
    impl::require<AdaptiveMediaSourceDownloadResult, Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadResult2>
{
    AdaptiveMediaSourceDownloadResult(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AdaptiveMediaSourceDownloadStatistics :
    Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourceDownloadStatistics
{
    AdaptiveMediaSourceDownloadStatistics(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AdaptiveMediaSourcePlaybackBitrateChangedEventArgs :
    Windows::Media::Streaming::Adaptive::IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs
{
    AdaptiveMediaSourcePlaybackBitrateChangedEventArgs(std::nullptr_t) noexcept {}
};

}
