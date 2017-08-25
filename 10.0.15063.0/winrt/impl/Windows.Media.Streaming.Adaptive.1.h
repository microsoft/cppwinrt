// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Web.Http.0.h"
#include "winrt/impl/Windows.Media.Core.0.h"
#include "winrt/impl/Windows.Media.Streaming.Adaptive.0.h"

WINRT_EXPORT namespace winrt::Windows::Media::Streaming::Adaptive {

struct WINRT_EBO IAdaptiveMediaSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSource>,
    impl::require<IAdaptiveMediaSource, Windows::Media::Core::IMediaSource>
{
    IAdaptiveMediaSource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdaptiveMediaSource2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSource2>
{
    IAdaptiveMediaSource2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdaptiveMediaSource3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSource3>
{
    IAdaptiveMediaSource3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdaptiveMediaSourceAdvancedSettings :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceAdvancedSettings>
{
    IAdaptiveMediaSourceAdvancedSettings(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdaptiveMediaSourceCorrelatedTimes :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceCorrelatedTimes>
{
    IAdaptiveMediaSourceCorrelatedTimes(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdaptiveMediaSourceCreationResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceCreationResult>
{
    IAdaptiveMediaSourceCreationResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdaptiveMediaSourceCreationResult2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceCreationResult2>
{
    IAdaptiveMediaSourceCreationResult2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdaptiveMediaSourceDiagnosticAvailableEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceDiagnosticAvailableEventArgs>
{
    IAdaptiveMediaSourceDiagnosticAvailableEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdaptiveMediaSourceDiagnostics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceDiagnostics>
{
    IAdaptiveMediaSourceDiagnostics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdaptiveMediaSourceDownloadBitrateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceDownloadBitrateChangedEventArgs>
{
    IAdaptiveMediaSourceDownloadBitrateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2>
{
    IAdaptiveMediaSourceDownloadBitrateChangedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdaptiveMediaSourceDownloadCompletedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceDownloadCompletedEventArgs>
{
    IAdaptiveMediaSourceDownloadCompletedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdaptiveMediaSourceDownloadCompletedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceDownloadCompletedEventArgs2>
{
    IAdaptiveMediaSourceDownloadCompletedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdaptiveMediaSourceDownloadFailedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceDownloadFailedEventArgs>
{
    IAdaptiveMediaSourceDownloadFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdaptiveMediaSourceDownloadFailedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceDownloadFailedEventArgs2>
{
    IAdaptiveMediaSourceDownloadFailedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdaptiveMediaSourceDownloadRequestedDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceDownloadRequestedDeferral>
{
    IAdaptiveMediaSourceDownloadRequestedDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdaptiveMediaSourceDownloadRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceDownloadRequestedEventArgs>
{
    IAdaptiveMediaSourceDownloadRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdaptiveMediaSourceDownloadRequestedEventArgs2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceDownloadRequestedEventArgs2>
{
    IAdaptiveMediaSourceDownloadRequestedEventArgs2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdaptiveMediaSourceDownloadResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceDownloadResult>
{
    IAdaptiveMediaSourceDownloadResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdaptiveMediaSourceDownloadResult2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceDownloadResult2>
{
    IAdaptiveMediaSourceDownloadResult2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdaptiveMediaSourceDownloadStatistics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceDownloadStatistics>
{
    IAdaptiveMediaSourceDownloadStatistics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs>
{
    IAdaptiveMediaSourcePlaybackBitrateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAdaptiveMediaSourceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAdaptiveMediaSourceStatics>
{
    IAdaptiveMediaSourceStatics(std::nullptr_t = nullptr) noexcept {}
};

}
