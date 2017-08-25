// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Media.PlayTo.0.h"

WINRT_EXPORT namespace winrt::Windows::Media::PlayTo {

struct WINRT_EBO ICurrentTimeChangeRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICurrentTimeChangeRequestedEventArgs>
{
    ICurrentTimeChangeRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMuteChangeRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMuteChangeRequestedEventArgs>
{
    IMuteChangeRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PlayToConnection may be altered or unavailable for releases after Windows 10. Instead, use CastingConnection.")]] IPlayToConnection :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayToConnection>
{
    IPlayToConnection(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PlayToConnectionErrorEventArgs may be altered or unavailable for releases after Windows 10. Instead, use CastingConnectionErrorOccurredEventArgs.")]] IPlayToConnectionErrorEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayToConnectionErrorEventArgs>
{
    IPlayToConnectionErrorEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PlayToConnectionStateChangedEventArgs may be altered or unavailable for releases after Windows 10.")]] IPlayToConnectionStateChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayToConnectionStateChangedEventArgs>
{
    IPlayToConnectionStateChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PlayToConnectionTransferredEventArgs may be altered or unavailable for releases after Windows 10.")]] IPlayToConnectionTransferredEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayToConnectionTransferredEventArgs>
{
    IPlayToConnectionTransferredEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PlayToManager may be altered or unavailable for releases after Windows 10.")]] IPlayToManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayToManager>
{
    IPlayToManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PlayToManager may be altered or unavailable for releases after Windows 10.")]] IPlayToManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayToManagerStatics>
{
    IPlayToManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPlayToReceiver :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayToReceiver>
{
    IPlayToReceiver(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PlayToSource may be altered or unavailable for releases after Windows 10. Instead, use CastingSource.")]] IPlayToSource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayToSource>
{
    IPlayToSource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PlayToSourceDeferral may be altered or unavailable for releases after Windows 10.")]] IPlayToSourceDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayToSourceDeferral>
{
    IPlayToSourceDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PlayToSourceRequest may be altered or unavailable for releases after Windows 10.")]] IPlayToSourceRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayToSourceRequest>
{
    IPlayToSourceRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PlayToSourceRequestedEventArgs may be altered or unavailable for releases after Windows 10.")]] IPlayToSourceRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayToSourceRequestedEventArgs>
{
    IPlayToSourceRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PlayToSourceSelectedEventArgs may be altered or unavailable for releases after Windows 10.")]] IPlayToSourceSelectedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayToSourceSelectedEventArgs>
{
    IPlayToSourceSelectedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("PlayToSourceWithPreferredSourceUri may be altered or unavailable for releases after Windows 10. Instead, use CastingSource.")]] IPlayToSourceWithPreferredSourceUri :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlayToSourceWithPreferredSourceUri>
{
    IPlayToSourceWithPreferredSourceUri(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPlaybackRateChangeRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlaybackRateChangeRequestedEventArgs>
{
    IPlaybackRateChangeRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISourceChangeRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISourceChangeRequestedEventArgs>
{
    ISourceChangeRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVolumeChangeRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVolumeChangeRequestedEventArgs>
{
    IVolumeChangeRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}
