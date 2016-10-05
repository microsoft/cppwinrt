// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Media.Core.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Media.MediaProperties.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Storage.3.h"
#include "internal/Windows.Media.Transcoding.3.h"
#include "Windows.Media.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Media::Transcoding::IMediaTranscoder> : produce_base<D, Windows::Media::Transcoding::IMediaTranscoder>
{
    HRESULT __stdcall put_TrimStartTime(abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            this->shim().TrimStartTime(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrimStartTime(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TrimStartTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TrimStopTime(abi_arg_in<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            this->shim().TrimStopTime(*reinterpret_cast<const Windows::Foundation::TimeSpan *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrimStopTime(abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TrimStopTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AlwaysReencode(bool value) noexcept override
    {
        try
        {
            this->shim().AlwaysReencode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlwaysReencode(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AlwaysReencode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_HardwareAccelerationEnabled(bool value) noexcept override
    {
        try
        {
            this->shim().HardwareAccelerationEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HardwareAccelerationEnabled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HardwareAccelerationEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddAudioEffect(abi_arg_in<hstring> activatableClassId) noexcept override
    {
        try
        {
            this->shim().AddAudioEffect(*reinterpret_cast<const hstring *>(&activatableClassId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddAudioEffectWithSettings(abi_arg_in<hstring> activatableClassId, bool effectRequired, abi_arg_in<Windows::Foundation::Collections::IPropertySet> configuration) noexcept override
    {
        try
        {
            this->shim().AddAudioEffect(*reinterpret_cast<const hstring *>(&activatableClassId), effectRequired, *reinterpret_cast<const Windows::Foundation::Collections::IPropertySet *>(&configuration));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddVideoEffect(abi_arg_in<hstring> activatableClassId) noexcept override
    {
        try
        {
            this->shim().AddVideoEffect(*reinterpret_cast<const hstring *>(&activatableClassId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_AddVideoEffectWithSettings(abi_arg_in<hstring> activatableClassId, bool effectRequired, abi_arg_in<Windows::Foundation::Collections::IPropertySet> configuration) noexcept override
    {
        try
        {
            this->shim().AddVideoEffect(*reinterpret_cast<const hstring *>(&activatableClassId), effectRequired, *reinterpret_cast<const Windows::Foundation::Collections::IPropertySet *>(&configuration));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ClearEffects() noexcept override
    {
        try
        {
            this->shim().ClearEffects();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PrepareFileTranscodeAsync(abi_arg_in<Windows::Storage::IStorageFile> source, abi_arg_in<Windows::Storage::IStorageFile> destination, abi_arg_in<Windows::Media::MediaProperties::IMediaEncodingProfile> profile, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::PrepareTranscodeResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().PrepareFileTranscodeAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&source), *reinterpret_cast<const Windows::Storage::IStorageFile *>(&destination), *reinterpret_cast<const Windows::Media::MediaProperties::MediaEncodingProfile *>(&profile)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_PrepareStreamTranscodeAsync(abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> source, abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> destination, abi_arg_in<Windows::Media::MediaProperties::IMediaEncodingProfile> profile, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::PrepareTranscodeResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().PrepareStreamTranscodeAsync(*reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&source), *reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&destination), *reinterpret_cast<const Windows::Media::MediaProperties::MediaEncodingProfile *>(&profile)));
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
struct produce<D, Windows::Media::Transcoding::IMediaTranscoder2> : produce_base<D, Windows::Media::Transcoding::IMediaTranscoder2>
{
    HRESULT __stdcall abi_PrepareMediaStreamSourceTranscodeAsync(abi_arg_in<Windows::Media::Core::IMediaSource> source, abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> destination, abi_arg_in<Windows::Media::MediaProperties::IMediaEncodingProfile> profile, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::PrepareTranscodeResult>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().PrepareMediaStreamSourceTranscodeAsync(*reinterpret_cast<const Windows::Media::Core::IMediaSource *>(&source), *reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&destination), *reinterpret_cast<const Windows::Media::MediaProperties::MediaEncodingProfile *>(&profile)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_VideoProcessingAlgorithm(Windows::Media::Transcoding::MediaVideoProcessingAlgorithm value) noexcept override
    {
        try
        {
            this->shim().VideoProcessingAlgorithm(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoProcessingAlgorithm(Windows::Media::Transcoding::MediaVideoProcessingAlgorithm * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().VideoProcessingAlgorithm());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::Transcoding::IPrepareTranscodeResult> : produce_base<D, Windows::Media::Transcoding::IPrepareTranscodeResult>
{
    HRESULT __stdcall get_CanTranscode(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CanTranscode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FailureReason(Windows::Media::Transcoding::TranscodeFailureReason * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FailureReason());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TranscodeAsync(abi_arg_out<Windows::Foundation::IAsyncActionWithProgress<double>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().TranscodeAsync());
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Media::Transcoding {

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::PrepareTranscodeResult> impl_IMediaTranscoder2<D>::PrepareMediaStreamSourceTranscodeAsync(const Windows::Media::Core::IMediaSource & source, const Windows::Storage::Streams::IRandomAccessStream & destination, const Windows::Media::MediaProperties::MediaEncodingProfile & profile) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::PrepareTranscodeResult> operation;
    check_hresult(static_cast<const IMediaTranscoder2 &>(static_cast<const D &>(*this))->abi_PrepareMediaStreamSourceTranscodeAsync(get(source), get(destination), get(profile), put(operation)));
    return operation;
}

template <typename D> void impl_IMediaTranscoder2<D>::VideoProcessingAlgorithm(Windows::Media::Transcoding::MediaVideoProcessingAlgorithm value) const
{
    check_hresult(static_cast<const IMediaTranscoder2 &>(static_cast<const D &>(*this))->put_VideoProcessingAlgorithm(value));
}

template <typename D> Windows::Media::Transcoding::MediaVideoProcessingAlgorithm impl_IMediaTranscoder2<D>::VideoProcessingAlgorithm() const
{
    Windows::Media::Transcoding::MediaVideoProcessingAlgorithm value {};
    check_hresult(static_cast<const IMediaTranscoder2 &>(static_cast<const D &>(*this))->get_VideoProcessingAlgorithm(&value));
    return value;
}

template <typename D> void impl_IMediaTranscoder<D>::TrimStartTime(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(static_cast<const IMediaTranscoder &>(static_cast<const D &>(*this))->put_TrimStartTime(get(value)));
}

template <typename D> Windows::Foundation::TimeSpan impl_IMediaTranscoder<D>::TrimStartTime() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IMediaTranscoder &>(static_cast<const D &>(*this))->get_TrimStartTime(put(value)));
    return value;
}

template <typename D> void impl_IMediaTranscoder<D>::TrimStopTime(const Windows::Foundation::TimeSpan & value) const
{
    check_hresult(static_cast<const IMediaTranscoder &>(static_cast<const D &>(*this))->put_TrimStopTime(get(value)));
}

template <typename D> Windows::Foundation::TimeSpan impl_IMediaTranscoder<D>::TrimStopTime() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(static_cast<const IMediaTranscoder &>(static_cast<const D &>(*this))->get_TrimStopTime(put(value)));
    return value;
}

template <typename D> void impl_IMediaTranscoder<D>::AlwaysReencode(bool value) const
{
    check_hresult(static_cast<const IMediaTranscoder &>(static_cast<const D &>(*this))->put_AlwaysReencode(value));
}

template <typename D> bool impl_IMediaTranscoder<D>::AlwaysReencode() const
{
    bool value {};
    check_hresult(static_cast<const IMediaTranscoder &>(static_cast<const D &>(*this))->get_AlwaysReencode(&value));
    return value;
}

template <typename D> void impl_IMediaTranscoder<D>::HardwareAccelerationEnabled(bool value) const
{
    check_hresult(static_cast<const IMediaTranscoder &>(static_cast<const D &>(*this))->put_HardwareAccelerationEnabled(value));
}

template <typename D> bool impl_IMediaTranscoder<D>::HardwareAccelerationEnabled() const
{
    bool value {};
    check_hresult(static_cast<const IMediaTranscoder &>(static_cast<const D &>(*this))->get_HardwareAccelerationEnabled(&value));
    return value;
}

template <typename D> void impl_IMediaTranscoder<D>::AddAudioEffect(hstring_ref activatableClassId) const
{
    check_hresult(static_cast<const IMediaTranscoder &>(static_cast<const D &>(*this))->abi_AddAudioEffect(get(activatableClassId)));
}

template <typename D> void impl_IMediaTranscoder<D>::AddAudioEffect(hstring_ref activatableClassId, bool effectRequired, const Windows::Foundation::Collections::IPropertySet & configuration) const
{
    check_hresult(static_cast<const IMediaTranscoder &>(static_cast<const D &>(*this))->abi_AddAudioEffectWithSettings(get(activatableClassId), effectRequired, get(configuration)));
}

template <typename D> void impl_IMediaTranscoder<D>::AddVideoEffect(hstring_ref activatableClassId) const
{
    check_hresult(static_cast<const IMediaTranscoder &>(static_cast<const D &>(*this))->abi_AddVideoEffect(get(activatableClassId)));
}

template <typename D> void impl_IMediaTranscoder<D>::AddVideoEffect(hstring_ref activatableClassId, bool effectRequired, const Windows::Foundation::Collections::IPropertySet & configuration) const
{
    check_hresult(static_cast<const IMediaTranscoder &>(static_cast<const D &>(*this))->abi_AddVideoEffectWithSettings(get(activatableClassId), effectRequired, get(configuration)));
}

template <typename D> void impl_IMediaTranscoder<D>::ClearEffects() const
{
    check_hresult(static_cast<const IMediaTranscoder &>(static_cast<const D &>(*this))->abi_ClearEffects());
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::PrepareTranscodeResult> impl_IMediaTranscoder<D>::PrepareFileTranscodeAsync(const Windows::Storage::IStorageFile & source, const Windows::Storage::IStorageFile & destination, const Windows::Media::MediaProperties::MediaEncodingProfile & profile) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::PrepareTranscodeResult> operation;
    check_hresult(static_cast<const IMediaTranscoder &>(static_cast<const D &>(*this))->abi_PrepareFileTranscodeAsync(get(source), get(destination), get(profile), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::PrepareTranscodeResult> impl_IMediaTranscoder<D>::PrepareStreamTranscodeAsync(const Windows::Storage::Streams::IRandomAccessStream & source, const Windows::Storage::Streams::IRandomAccessStream & destination, const Windows::Media::MediaProperties::MediaEncodingProfile & profile) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::PrepareTranscodeResult> operation;
    check_hresult(static_cast<const IMediaTranscoder &>(static_cast<const D &>(*this))->abi_PrepareStreamTranscodeAsync(get(source), get(destination), get(profile), put(operation)));
    return operation;
}

template <typename D> bool impl_IPrepareTranscodeResult<D>::CanTranscode() const
{
    bool value {};
    check_hresult(static_cast<const IPrepareTranscodeResult &>(static_cast<const D &>(*this))->get_CanTranscode(&value));
    return value;
}

template <typename D> Windows::Media::Transcoding::TranscodeFailureReason impl_IPrepareTranscodeResult<D>::FailureReason() const
{
    Windows::Media::Transcoding::TranscodeFailureReason value {};
    check_hresult(static_cast<const IPrepareTranscodeResult &>(static_cast<const D &>(*this))->get_FailureReason(&value));
    return value;
}

template <typename D> Windows::Foundation::IAsyncActionWithProgress<double> impl_IPrepareTranscodeResult<D>::TranscodeAsync() const
{
    Windows::Foundation::IAsyncActionWithProgress<double> operation;
    check_hresult(static_cast<const IPrepareTranscodeResult &>(static_cast<const D &>(*this))->abi_TranscodeAsync(put(operation)));
    return operation;
}

inline MediaTranscoder::MediaTranscoder() :
    MediaTranscoder(activate_instance<MediaTranscoder>())
{}

}

}
