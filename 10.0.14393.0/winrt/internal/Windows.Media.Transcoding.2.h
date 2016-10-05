// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Media.Transcoding.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_f5f07c13_3047_5bab_8eb7_6e5d7d14afae
#define WINRT_GENERIC_f5f07c13_3047_5bab_8eb7_6e5d7d14afae
template <> struct __declspec(uuid("f5f07c13-3047-5bab-8eb7-6e5d7d14afae")) __declspec(novtable) IAsyncOperation<Windows::Media::Transcoding::PrepareTranscodeResult> : impl_IAsyncOperation<Windows::Media::Transcoding::PrepareTranscodeResult> {};
#endif

#ifndef WINRT_GENERIC_4f1430a6_a825_56ca_b047_1a9bad52ba67
#define WINRT_GENERIC_4f1430a6_a825_56ca_b047_1a9bad52ba67
template <> struct __declspec(uuid("4f1430a6-a825-56ca-b047-1a9bad52ba67")) __declspec(novtable) IAsyncActionWithProgress<double> : impl_IAsyncActionWithProgress<double> {};
#endif

#ifndef WINRT_GENERIC_a44d7d07_8f74_52ee_9f02_c2b244b4ff2a
#define WINRT_GENERIC_a44d7d07_8f74_52ee_9f02_c2b244b4ff2a
template <> struct __declspec(uuid("a44d7d07-8f74-52ee-9f02-c2b244b4ff2a")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Media::Transcoding::PrepareTranscodeResult> : impl_AsyncOperationCompletedHandler<Windows::Media::Transcoding::PrepareTranscodeResult> {};
#endif

#ifndef WINRT_GENERIC_44825c7c_0da9_5691_b2b4_914f231eeced
#define WINRT_GENERIC_44825c7c_0da9_5691_b2b4_914f231eeced
template <> struct __declspec(uuid("44825c7c-0da9-5691-b2b4-914f231eeced")) __declspec(novtable) AsyncActionProgressHandler<double> : impl_AsyncActionProgressHandler<double> {};
#endif

#ifndef WINRT_GENERIC_94d64ac6_4491_53ef_8be8_36481f3ff1e8
#define WINRT_GENERIC_94d64ac6_4491_53ef_8be8_36481f3ff1e8
template <> struct __declspec(uuid("94d64ac6-4491-53ef-8be8-36481f3ff1e8")) __declspec(novtable) AsyncActionWithProgressCompletedHandler<double> : impl_AsyncActionWithProgressCompletedHandler<double> {};
#endif


}

namespace Windows::Media::Transcoding {

template <typename D>
struct WINRT_EBO impl_IMediaTranscoder
{
    void TrimStartTime(const Windows::Foundation::TimeSpan & value) const;
    Windows::Foundation::TimeSpan TrimStartTime() const;
    void TrimStopTime(const Windows::Foundation::TimeSpan & value) const;
    Windows::Foundation::TimeSpan TrimStopTime() const;
    void AlwaysReencode(bool value) const;
    bool AlwaysReencode() const;
    void HardwareAccelerationEnabled(bool value) const;
    bool HardwareAccelerationEnabled() const;
    void AddAudioEffect(hstring_ref activatableClassId) const;
    void AddAudioEffect(hstring_ref activatableClassId, bool effectRequired, const Windows::Foundation::Collections::IPropertySet & configuration) const;
    void AddVideoEffect(hstring_ref activatableClassId) const;
    void AddVideoEffect(hstring_ref activatableClassId, bool effectRequired, const Windows::Foundation::Collections::IPropertySet & configuration) const;
    void ClearEffects() const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::PrepareTranscodeResult> PrepareFileTranscodeAsync(const Windows::Storage::IStorageFile & source, const Windows::Storage::IStorageFile & destination, const Windows::Media::MediaProperties::MediaEncodingProfile & profile) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::PrepareTranscodeResult> PrepareStreamTranscodeAsync(const Windows::Storage::Streams::IRandomAccessStream & source, const Windows::Storage::Streams::IRandomAccessStream & destination, const Windows::Media::MediaProperties::MediaEncodingProfile & profile) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaTranscoder2
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::PrepareTranscodeResult> PrepareMediaStreamSourceTranscodeAsync(const Windows::Media::Core::IMediaSource & source, const Windows::Storage::Streams::IRandomAccessStream & destination, const Windows::Media::MediaProperties::MediaEncodingProfile & profile) const;
    void VideoProcessingAlgorithm(Windows::Media::Transcoding::MediaVideoProcessingAlgorithm value) const;
    Windows::Media::Transcoding::MediaVideoProcessingAlgorithm VideoProcessingAlgorithm() const;
};

template <typename D>
struct WINRT_EBO impl_IPrepareTranscodeResult
{
    bool CanTranscode() const;
    Windows::Media::Transcoding::TranscodeFailureReason FailureReason() const;
    Windows::Foundation::IAsyncActionWithProgress<double> TranscodeAsync() const;
};

struct IMediaTranscoder :
    Windows::IInspectable,
    impl::consume<IMediaTranscoder>
{
    IMediaTranscoder(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaTranscoder>(m_ptr); }
};

struct IMediaTranscoder2 :
    Windows::IInspectable,
    impl::consume<IMediaTranscoder2>
{
    IMediaTranscoder2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaTranscoder2>(m_ptr); }
};

struct IPrepareTranscodeResult :
    Windows::IInspectable,
    impl::consume<IPrepareTranscodeResult>
{
    IPrepareTranscodeResult(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IPrepareTranscodeResult>(m_ptr); }
};

}

}
