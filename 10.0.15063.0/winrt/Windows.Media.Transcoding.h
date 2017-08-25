// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Media.Core.2.h"
#include "winrt/impl/Windows.Media.MediaProperties.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Media.Transcoding.2.h"
#include "winrt/Windows.Media.h"

namespace winrt::impl {

template <typename D> void consume_Windows_Media_Transcoding_IMediaTranscoder<D>::TrimStartTime(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Transcoding::IMediaTranscoder)->put_TrimStartTime(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Transcoding_IMediaTranscoder<D>::TrimStartTime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Transcoding::IMediaTranscoder)->get_TrimStartTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Transcoding_IMediaTranscoder<D>::TrimStopTime(Windows::Foundation::TimeSpan const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Transcoding::IMediaTranscoder)->put_TrimStopTime(get_abi(value)));
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Media_Transcoding_IMediaTranscoder<D>::TrimStopTime() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Media::Transcoding::IMediaTranscoder)->get_TrimStopTime(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_Transcoding_IMediaTranscoder<D>::AlwaysReencode(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Transcoding::IMediaTranscoder)->put_AlwaysReencode(value));
}

template <typename D> bool consume_Windows_Media_Transcoding_IMediaTranscoder<D>::AlwaysReencode() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Transcoding::IMediaTranscoder)->get_AlwaysReencode(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Transcoding_IMediaTranscoder<D>::HardwareAccelerationEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Transcoding::IMediaTranscoder)->put_HardwareAccelerationEnabled(value));
}

template <typename D> bool consume_Windows_Media_Transcoding_IMediaTranscoder<D>::HardwareAccelerationEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Transcoding::IMediaTranscoder)->get_HardwareAccelerationEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_Media_Transcoding_IMediaTranscoder<D>::AddAudioEffect(param::hstring const& activatableClassId) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Transcoding::IMediaTranscoder)->AddAudioEffect(get_abi(activatableClassId)));
}

template <typename D> void consume_Windows_Media_Transcoding_IMediaTranscoder<D>::AddAudioEffect(param::hstring const& activatableClassId, bool effectRequired, Windows::Foundation::Collections::IPropertySet const& configuration) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Transcoding::IMediaTranscoder)->AddAudioEffectWithSettings(get_abi(activatableClassId), effectRequired, get_abi(configuration)));
}

template <typename D> void consume_Windows_Media_Transcoding_IMediaTranscoder<D>::AddVideoEffect(param::hstring const& activatableClassId) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Transcoding::IMediaTranscoder)->AddVideoEffect(get_abi(activatableClassId)));
}

template <typename D> void consume_Windows_Media_Transcoding_IMediaTranscoder<D>::AddVideoEffect(param::hstring const& activatableClassId, bool effectRequired, Windows::Foundation::Collections::IPropertySet const& configuration) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Transcoding::IMediaTranscoder)->AddVideoEffectWithSettings(get_abi(activatableClassId), effectRequired, get_abi(configuration)));
}

template <typename D> void consume_Windows_Media_Transcoding_IMediaTranscoder<D>::ClearEffects() const
{
    check_hresult(WINRT_SHIM(Windows::Media::Transcoding::IMediaTranscoder)->ClearEffects());
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::PrepareTranscodeResult> consume_Windows_Media_Transcoding_IMediaTranscoder<D>::PrepareFileTranscodeAsync(Windows::Storage::IStorageFile const& source, Windows::Storage::IStorageFile const& destination, Windows::Media::MediaProperties::MediaEncodingProfile const& profile) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::PrepareTranscodeResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Transcoding::IMediaTranscoder)->PrepareFileTranscodeAsync(get_abi(source), get_abi(destination), get_abi(profile), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::PrepareTranscodeResult> consume_Windows_Media_Transcoding_IMediaTranscoder<D>::PrepareStreamTranscodeAsync(Windows::Storage::Streams::IRandomAccessStream const& source, Windows::Storage::Streams::IRandomAccessStream const& destination, Windows::Media::MediaProperties::MediaEncodingProfile const& profile) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::PrepareTranscodeResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Transcoding::IMediaTranscoder)->PrepareStreamTranscodeAsync(get_abi(source), get_abi(destination), get_abi(profile), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::PrepareTranscodeResult> consume_Windows_Media_Transcoding_IMediaTranscoder2<D>::PrepareMediaStreamSourceTranscodeAsync(Windows::Media::Core::IMediaSource const& source, Windows::Storage::Streams::IRandomAccessStream const& destination, Windows::Media::MediaProperties::MediaEncodingProfile const& profile) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::Transcoding::PrepareTranscodeResult> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Transcoding::IMediaTranscoder2)->PrepareMediaStreamSourceTranscodeAsync(get_abi(source), get_abi(destination), get_abi(profile), put_abi(operation)));
    return operation;
}

template <typename D> void consume_Windows_Media_Transcoding_IMediaTranscoder2<D>::VideoProcessingAlgorithm(Windows::Media::Transcoding::MediaVideoProcessingAlgorithm const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::Transcoding::IMediaTranscoder2)->put_VideoProcessingAlgorithm(get_abi(value)));
}

template <typename D> Windows::Media::Transcoding::MediaVideoProcessingAlgorithm consume_Windows_Media_Transcoding_IMediaTranscoder2<D>::VideoProcessingAlgorithm() const
{
    Windows::Media::Transcoding::MediaVideoProcessingAlgorithm value{};
    check_hresult(WINRT_SHIM(Windows::Media::Transcoding::IMediaTranscoder2)->get_VideoProcessingAlgorithm(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Media_Transcoding_IPrepareTranscodeResult<D>::CanTranscode() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::Transcoding::IPrepareTranscodeResult)->get_CanTranscode(&value));
    return value;
}

template <typename D> Windows::Media::Transcoding::TranscodeFailureReason consume_Windows_Media_Transcoding_IPrepareTranscodeResult<D>::FailureReason() const
{
    Windows::Media::Transcoding::TranscodeFailureReason value{};
    check_hresult(WINRT_SHIM(Windows::Media::Transcoding::IPrepareTranscodeResult)->get_FailureReason(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncActionWithProgress<double> consume_Windows_Media_Transcoding_IPrepareTranscodeResult<D>::TranscodeAsync() const
{
    Windows::Foundation::IAsyncActionWithProgress<double> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::Transcoding::IPrepareTranscodeResult)->TranscodeAsync(put_abi(operation)));
    return operation;
}

template <typename D>
struct produce<D, Windows::Media::Transcoding::IMediaTranscoder> : produce_base<D, Windows::Media::Transcoding::IMediaTranscoder>
{
    HRESULT __stdcall put_TrimStartTime(abi_t<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TrimStartTime(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrimStartTime(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TrimStartTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TrimStopTime(abi_t<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TrimStopTime(*reinterpret_cast<Windows::Foundation::TimeSpan const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TrimStopTime(abi_t<Windows::Foundation::TimeSpan>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TrimStopTime());
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
            typename D::abi_guard guard(this->shim());
            this->shim().AlwaysReencode(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AlwaysReencode(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlwaysReencode());
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
            typename D::abi_guard guard(this->shim());
            this->shim().HardwareAccelerationEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HardwareAccelerationEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HardwareAccelerationEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddAudioEffect(HSTRING activatableClassId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddAudioEffect(*reinterpret_cast<hstring const*>(&activatableClassId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddAudioEffectWithSettings(HSTRING activatableClassId, bool effectRequired, ::IUnknown* configuration) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddAudioEffect(*reinterpret_cast<hstring const*>(&activatableClassId), effectRequired, *reinterpret_cast<Windows::Foundation::Collections::IPropertySet const*>(&configuration));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddVideoEffect(HSTRING activatableClassId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddVideoEffect(*reinterpret_cast<hstring const*>(&activatableClassId));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddVideoEffectWithSettings(HSTRING activatableClassId, bool effectRequired, ::IUnknown* configuration) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddVideoEffect(*reinterpret_cast<hstring const*>(&activatableClassId), effectRequired, *reinterpret_cast<Windows::Foundation::Collections::IPropertySet const*>(&configuration));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ClearEffects() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClearEffects();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PrepareFileTranscodeAsync(::IUnknown* source, ::IUnknown* destination, ::IUnknown* profile, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PrepareFileTranscodeAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&source), *reinterpret_cast<Windows::Storage::IStorageFile const*>(&destination), *reinterpret_cast<Windows::Media::MediaProperties::MediaEncodingProfile const*>(&profile)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PrepareStreamTranscodeAsync(::IUnknown* source, ::IUnknown* destination, ::IUnknown* profile, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PrepareStreamTranscodeAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&source), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&destination), *reinterpret_cast<Windows::Media::MediaProperties::MediaEncodingProfile const*>(&profile)));
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
    HRESULT __stdcall PrepareMediaStreamSourceTranscodeAsync(::IUnknown* source, ::IUnknown* destination, ::IUnknown* profile, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().PrepareMediaStreamSourceTranscodeAsync(*reinterpret_cast<Windows::Media::Core::IMediaSource const*>(&source), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&destination), *reinterpret_cast<Windows::Media::MediaProperties::MediaEncodingProfile const*>(&profile)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_VideoProcessingAlgorithm(abi_t<Windows::Media::Transcoding::MediaVideoProcessingAlgorithm> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().VideoProcessingAlgorithm(*reinterpret_cast<Windows::Media::Transcoding::MediaVideoProcessingAlgorithm const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VideoProcessingAlgorithm(abi_t<Windows::Media::Transcoding::MediaVideoProcessingAlgorithm>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VideoProcessingAlgorithm());
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
    HRESULT __stdcall get_CanTranscode(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanTranscode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FailureReason(abi_t<Windows::Media::Transcoding::TranscodeFailureReason>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FailureReason());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TranscodeAsync(::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().TranscodeAsync());
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

WINRT_EXPORT namespace winrt::Windows::Media::Transcoding {

inline MediaTranscoder::MediaTranscoder() :
    MediaTranscoder(activate_instance<MediaTranscoder>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Media::Transcoding::IMediaTranscoder> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Transcoding::IMediaTranscoder> {};

template<> struct hash<winrt::Windows::Media::Transcoding::IMediaTranscoder2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Transcoding::IMediaTranscoder2> {};

template<> struct hash<winrt::Windows::Media::Transcoding::IPrepareTranscodeResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Transcoding::IPrepareTranscodeResult> {};

template<> struct hash<winrt::Windows::Media::Transcoding::MediaTranscoder> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Transcoding::MediaTranscoder> {};

template<> struct hash<winrt::Windows::Media::Transcoding::PrepareTranscodeResult> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::Transcoding::PrepareTranscodeResult> {};

}

WINRT_WARNING_POP
