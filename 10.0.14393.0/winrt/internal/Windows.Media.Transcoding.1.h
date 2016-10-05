// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Media.Transcoding.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Media.Core.0.h"
#include "Windows.Media.MediaProperties.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Media::Transcoding {

struct __declspec(uuid("190c99d2-a0aa-4d34-86bc-eed1b12c2f5b")) __declspec(novtable) IMediaTranscoder : Windows::IInspectable
{
    virtual HRESULT __stdcall put_TrimStartTime(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_TrimStartTime(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall put_TrimStopTime(Windows::Foundation::TimeSpan value) = 0;
    virtual HRESULT __stdcall get_TrimStopTime(Windows::Foundation::TimeSpan * value) = 0;
    virtual HRESULT __stdcall put_AlwaysReencode(bool value) = 0;
    virtual HRESULT __stdcall get_AlwaysReencode(bool * value) = 0;
    virtual HRESULT __stdcall put_HardwareAccelerationEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_HardwareAccelerationEnabled(bool * value) = 0;
    virtual HRESULT __stdcall abi_AddAudioEffect(hstring activatableClassId) = 0;
    virtual HRESULT __stdcall abi_AddAudioEffectWithSettings(hstring activatableClassId, bool effectRequired, Windows::Foundation::Collections::IPropertySet * configuration) = 0;
    virtual HRESULT __stdcall abi_AddVideoEffect(hstring activatableClassId) = 0;
    virtual HRESULT __stdcall abi_AddVideoEffectWithSettings(hstring activatableClassId, bool effectRequired, Windows::Foundation::Collections::IPropertySet * configuration) = 0;
    virtual HRESULT __stdcall abi_ClearEffects() = 0;
    virtual HRESULT __stdcall abi_PrepareFileTranscodeAsync(Windows::Storage::IStorageFile * source, Windows::Storage::IStorageFile * destination, Windows::Media::MediaProperties::IMediaEncodingProfile * profile, Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::PrepareTranscodeResult> ** operation) = 0;
    virtual HRESULT __stdcall abi_PrepareStreamTranscodeAsync(Windows::Storage::Streams::IRandomAccessStream * source, Windows::Storage::Streams::IRandomAccessStream * destination, Windows::Media::MediaProperties::IMediaEncodingProfile * profile, Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::PrepareTranscodeResult> ** operation) = 0;
};

struct __declspec(uuid("40531d74-35e0-4f04-8574-ca8bc4e5a082")) __declspec(novtable) IMediaTranscoder2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_PrepareMediaStreamSourceTranscodeAsync(Windows::Media::Core::IMediaSource * source, Windows::Storage::Streams::IRandomAccessStream * destination, Windows::Media::MediaProperties::IMediaEncodingProfile * profile, Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::PrepareTranscodeResult> ** operation) = 0;
    virtual HRESULT __stdcall put_VideoProcessingAlgorithm(winrt::Windows::Media::Transcoding::MediaVideoProcessingAlgorithm value) = 0;
    virtual HRESULT __stdcall get_VideoProcessingAlgorithm(winrt::Windows::Media::Transcoding::MediaVideoProcessingAlgorithm * value) = 0;
};

struct __declspec(uuid("05f25dce-994f-4a34-9d68-97ccce1730d6")) __declspec(novtable) IPrepareTranscodeResult : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CanTranscode(bool * value) = 0;
    virtual HRESULT __stdcall get_FailureReason(winrt::Windows::Media::Transcoding::TranscodeFailureReason * value) = 0;
    virtual HRESULT __stdcall abi_TranscodeAsync(Windows::Foundation::IAsyncActionWithProgress<double> ** operation) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Media::Transcoding::MediaTranscoder> { using default_interface = Windows::Media::Transcoding::IMediaTranscoder; };
template <> struct traits<Windows::Media::Transcoding::PrepareTranscodeResult> { using default_interface = Windows::Media::Transcoding::IPrepareTranscodeResult; };

}

namespace Windows::Media::Transcoding {

template <typename T> struct impl_IMediaTranscoder;
template <typename T> struct impl_IMediaTranscoder2;
template <typename T> struct impl_IPrepareTranscodeResult;

}

namespace impl {

template <> struct traits<Windows::Media::Transcoding::IMediaTranscoder>
{
    using abi = ABI::Windows::Media::Transcoding::IMediaTranscoder;
    template <typename D> using consume = Windows::Media::Transcoding::impl_IMediaTranscoder<D>;
};

template <> struct traits<Windows::Media::Transcoding::IMediaTranscoder2>
{
    using abi = ABI::Windows::Media::Transcoding::IMediaTranscoder2;
    template <typename D> using consume = Windows::Media::Transcoding::impl_IMediaTranscoder2<D>;
};

template <> struct traits<Windows::Media::Transcoding::IPrepareTranscodeResult>
{
    using abi = ABI::Windows::Media::Transcoding::IPrepareTranscodeResult;
    template <typename D> using consume = Windows::Media::Transcoding::impl_IPrepareTranscodeResult<D>;
};

template <> struct traits<Windows::Media::Transcoding::MediaTranscoder>
{
    using abi = ABI::Windows::Media::Transcoding::MediaTranscoder;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Transcoding.MediaTranscoder"; }
};

template <> struct traits<Windows::Media::Transcoding::PrepareTranscodeResult>
{
    using abi = ABI::Windows::Media::Transcoding::PrepareTranscodeResult;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.Transcoding.PrepareTranscodeResult"; }
};

}

}
