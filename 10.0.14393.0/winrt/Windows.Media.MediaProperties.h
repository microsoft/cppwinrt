// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Storage.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Media.MediaProperties.3.h"
#include "Windows.Media.h"
#include "Windows.Foundation.Collections.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Media::MediaProperties::IAudioEncodingProperties> : produce_base<D, Windows::Media::MediaProperties::IAudioEncodingProperties>
{
    HRESULT __stdcall put_Bitrate(uint32_t value) noexcept override
    {
        try
        {
            this->shim().Bitrate(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bitrate(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Bitrate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ChannelCount(uint32_t value) noexcept override
    {
        try
        {
            this->shim().ChannelCount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ChannelCount(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ChannelCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SampleRate(uint32_t value) noexcept override
    {
        try
        {
            this->shim().SampleRate(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SampleRate(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SampleRate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BitsPerSample(uint32_t value) noexcept override
    {
        try
        {
            this->shim().BitsPerSample(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BitsPerSample(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BitsPerSample());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics> : produce_base<D, Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics>
{
    HRESULT __stdcall abi_CreateAac(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate, abi_arg_out<Windows::Media::MediaProperties::IAudioEncodingProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateAac(sampleRate, channelCount, bitrate));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateAacAdts(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate, abi_arg_out<Windows::Media::MediaProperties::IAudioEncodingProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateAacAdts(sampleRate, channelCount, bitrate));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateMp3(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate, abi_arg_out<Windows::Media::MediaProperties::IAudioEncodingProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateMp3(sampleRate, channelCount, bitrate));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreatePcm(uint32_t sampleRate, uint32_t channelCount, uint32_t bitsPerSample, abi_arg_out<Windows::Media::MediaProperties::IAudioEncodingProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreatePcm(sampleRate, channelCount, bitsPerSample));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWma(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate, abi_arg_out<Windows::Media::MediaProperties::IAudioEncodingProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateWma(sampleRate, channelCount, bitrate));
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
struct produce<D, Windows::Media::MediaProperties::IAudioEncodingPropertiesWithFormatUserData> : produce_base<D, Windows::Media::MediaProperties::IAudioEncodingPropertiesWithFormatUserData>
{
    HRESULT __stdcall abi_SetFormatUserData(uint32_t __valueSize, abi_arg_in<uint8_t> * value) noexcept override
    {
        try
        {
            this->shim().SetFormatUserData(array_ref<const uint8_t>(value, value + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetFormatUserData(uint32_t * __valueSize, abi_arg_out<uint8_t> * value) noexcept override
    {
        try
        {
            this->shim().GetFormatUserData(detach<uint8_t>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::MediaProperties::IContainerEncodingProperties> : produce_base<D, Windows::Media::MediaProperties::IContainerEncodingProperties>
{};

template <typename D>
struct produce<D, Windows::Media::MediaProperties::IH264ProfileIdsStatics> : produce_base<D, Windows::Media::MediaProperties::IH264ProfileIdsStatics>
{
    HRESULT __stdcall get_ConstrainedBaseline(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ConstrainedBaseline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Baseline(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Baseline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Extended(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Extended());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Main(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Main());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_High(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().High());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_High10(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().High10());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_High422(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().High422());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_High444(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().High444());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StereoHigh(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StereoHigh());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MultiviewHigh(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MultiviewHigh());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::MediaProperties::IImageEncodingProperties> : produce_base<D, Windows::Media::MediaProperties::IImageEncodingProperties>
{
    HRESULT __stdcall put_Width(uint32_t value) noexcept override
    {
        try
        {
            this->shim().Width(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Width(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Width());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Height(uint32_t value) noexcept override
    {
        try
        {
            this->shim().Height(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Height(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Height());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::MediaProperties::IImageEncodingPropertiesStatics> : produce_base<D, Windows::Media::MediaProperties::IImageEncodingPropertiesStatics>
{
    HRESULT __stdcall abi_CreateJpeg(abi_arg_out<Windows::Media::MediaProperties::IImageEncodingProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateJpeg());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreatePng(abi_arg_out<Windows::Media::MediaProperties::IImageEncodingProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreatePng());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateJpegXR(abi_arg_out<Windows::Media::MediaProperties::IImageEncodingProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateJpegXR());
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
struct produce<D, Windows::Media::MediaProperties::IImageEncodingPropertiesStatics2> : produce_base<D, Windows::Media::MediaProperties::IImageEncodingPropertiesStatics2>
{
    HRESULT __stdcall abi_CreateUncompressed(Windows::Media::MediaProperties::MediaPixelFormat format, abi_arg_out<Windows::Media::MediaProperties::IImageEncodingProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateUncompressed(format));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateBmp(abi_arg_out<Windows::Media::MediaProperties::IImageEncodingProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateBmp());
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
struct produce<D, Windows::Media::MediaProperties::IMediaEncodingProfile> : produce_base<D, Windows::Media::MediaProperties::IMediaEncodingProfile>
{
    HRESULT __stdcall put_Audio(abi_arg_in<Windows::Media::MediaProperties::IAudioEncodingProperties> value) noexcept override
    {
        try
        {
            this->shim().Audio(*reinterpret_cast<const Windows::Media::MediaProperties::AudioEncodingProperties *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Audio(abi_arg_out<Windows::Media::MediaProperties::IAudioEncodingProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Audio());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Video(abi_arg_in<Windows::Media::MediaProperties::IVideoEncodingProperties> value) noexcept override
    {
        try
        {
            this->shim().Video(*reinterpret_cast<const Windows::Media::MediaProperties::VideoEncodingProperties *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Video(abi_arg_out<Windows::Media::MediaProperties::IVideoEncodingProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Video());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Container(abi_arg_in<Windows::Media::MediaProperties::IContainerEncodingProperties> value) noexcept override
    {
        try
        {
            this->shim().Container(*reinterpret_cast<const Windows::Media::MediaProperties::ContainerEncodingProperties *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Container(abi_arg_out<Windows::Media::MediaProperties::IContainerEncodingProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Container());
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
struct produce<D, Windows::Media::MediaProperties::IMediaEncodingProfileStatics> : produce_base<D, Windows::Media::MediaProperties::IMediaEncodingProfileStatics>
{
    HRESULT __stdcall abi_CreateM4a(Windows::Media::MediaProperties::AudioEncodingQuality quality, abi_arg_out<Windows::Media::MediaProperties::IMediaEncodingProfile> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateM4a(quality));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateMp3(Windows::Media::MediaProperties::AudioEncodingQuality quality, abi_arg_out<Windows::Media::MediaProperties::IMediaEncodingProfile> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateMp3(quality));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWma(Windows::Media::MediaProperties::AudioEncodingQuality quality, abi_arg_out<Windows::Media::MediaProperties::IMediaEncodingProfile> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateWma(quality));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateMp4(Windows::Media::MediaProperties::VideoEncodingQuality quality, abi_arg_out<Windows::Media::MediaProperties::IMediaEncodingProfile> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateMp4(quality));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateWmv(Windows::Media::MediaProperties::VideoEncodingQuality quality, abi_arg_out<Windows::Media::MediaProperties::IMediaEncodingProfile> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateWmv(quality));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromFileAsync(abi_arg_in<Windows::Storage::IStorageFile> file, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::MediaProperties::MediaEncodingProfile>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CreateFromFileAsync(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateFromStreamAsync(abi_arg_in<Windows::Storage::Streams::IRandomAccessStream> stream, abi_arg_out<Windows::Foundation::IAsyncOperation<Windows::Media::MediaProperties::MediaEncodingProfile>> operation) noexcept override
    {
        try
        {
            *operation = detach(this->shim().CreateFromStreamAsync(*reinterpret_cast<const Windows::Storage::Streams::IRandomAccessStream *>(&stream)));
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
struct produce<D, Windows::Media::MediaProperties::IMediaEncodingProfileStatics2> : produce_base<D, Windows::Media::MediaProperties::IMediaEncodingProfileStatics2>
{
    HRESULT __stdcall abi_CreateWav(Windows::Media::MediaProperties::AudioEncodingQuality quality, abi_arg_out<Windows::Media::MediaProperties::IMediaEncodingProfile> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateWav(quality));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateAvi(Windows::Media::MediaProperties::VideoEncodingQuality quality, abi_arg_out<Windows::Media::MediaProperties::IMediaEncodingProfile> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateAvi(quality));
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
struct produce<D, Windows::Media::MediaProperties::IMediaEncodingProperties> : produce_base<D, Windows::Media::MediaProperties::IMediaEncodingProperties>
{
    HRESULT __stdcall get_Properties(abi_arg_out<Windows::Foundation::Collections::IMap<GUID, Windows::IInspectable>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Type(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Subtype(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Subtype(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Subtype(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Subtype());
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
struct produce<D, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics> : produce_base<D, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>
{
    HRESULT __stdcall get_Aac(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Aac());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AacAdts(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AacAdts());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ac3(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Ac3());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AmrNb(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AmrNb());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AmrWb(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AmrWb());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Argb32(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Argb32());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Asf(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Asf());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Avi(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Avi());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bgra8(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Bgra8());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bmp(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Bmp());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Eac3(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Eac3());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Float(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Float());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Gif(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Gif());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_H263(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().H263());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_H264(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().H264());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_H264Es(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().H264Es());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Hevc(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Hevc());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HevcEs(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HevcEs());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Iyuv(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Iyuv());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Jpeg(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Jpeg());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_JpegXr(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().JpegXr());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mjpg(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Mjpg());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mpeg(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Mpeg());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mpeg1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Mpeg1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mpeg2(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Mpeg2());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mp3(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Mp3());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mpeg4(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Mpeg4());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Nv12(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Nv12());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pcm(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Pcm());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Png(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Png());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Rgb24(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Rgb24());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Rgb32(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Rgb32());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tiff(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Tiff());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Wave(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Wave());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Wma8(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Wma8());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Wma9(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Wma9());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Wmv3(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Wmv3());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Wvc1(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Wvc1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Yuy2(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Yuy2());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Yv12(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Yv12());
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
struct produce<D, Windows::Media::MediaProperties::IMediaRatio> : produce_base<D, Windows::Media::MediaProperties::IMediaRatio>
{
    HRESULT __stdcall put_Numerator(uint32_t value) noexcept override
    {
        try
        {
            this->shim().Numerator(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Numerator(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Numerator());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Denominator(uint32_t value) noexcept override
    {
        try
        {
            this->shim().Denominator(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Denominator(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Denominator());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::MediaProperties::IMpeg2ProfileIdsStatics> : produce_base<D, Windows::Media::MediaProperties::IMpeg2ProfileIdsStatics>
{
    HRESULT __stdcall get_Simple(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Simple());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Main(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Main());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SignalNoiseRatioScalable(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SignalNoiseRatioScalable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpatiallyScalable(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SpatiallyScalable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_High(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().High());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::MediaProperties::IVideoEncodingProperties> : produce_base<D, Windows::Media::MediaProperties::IVideoEncodingProperties>
{
    HRESULT __stdcall put_Bitrate(uint32_t value) noexcept override
    {
        try
        {
            this->shim().Bitrate(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bitrate(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Bitrate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Width(uint32_t value) noexcept override
    {
        try
        {
            this->shim().Width(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Width(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Width());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Height(uint32_t value) noexcept override
    {
        try
        {
            this->shim().Height(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Height(uint32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Height());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FrameRate(abi_arg_out<Windows::Media::MediaProperties::IMediaRatio> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FrameRate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PixelAspectRatio(abi_arg_out<Windows::Media::MediaProperties::IMediaRatio> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PixelAspectRatio());
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
struct produce<D, Windows::Media::MediaProperties::IVideoEncodingProperties2> : produce_base<D, Windows::Media::MediaProperties::IVideoEncodingProperties2>
{
    HRESULT __stdcall abi_SetFormatUserData(uint32_t __valueSize, abi_arg_in<uint8_t> * value) noexcept override
    {
        try
        {
            this->shim().SetFormatUserData(array_ref<const uint8_t>(value, value + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetFormatUserData(uint32_t * __valueSize, abi_arg_out<uint8_t> * value) noexcept override
    {
        try
        {
            this->shim().GetFormatUserData(detach<uint8_t>(__valueSize, value));
            return S_OK;
        }
        catch (...)
        {
            *__valueSize = 0;
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ProfileId(int32_t value) noexcept override
    {
        try
        {
            this->shim().ProfileId(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProfileId(int32_t * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ProfileId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::MediaProperties::IVideoEncodingProperties3> : produce_base<D, Windows::Media::MediaProperties::IVideoEncodingProperties3>
{
    HRESULT __stdcall get_StereoscopicVideoPackingMode(Windows::Media::MediaProperties::StereoscopicVideoPackingMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().StereoscopicVideoPackingMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics> : produce_base<D, Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics>
{
    HRESULT __stdcall abi_CreateH264(abi_arg_out<Windows::Media::MediaProperties::IVideoEncodingProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateH264());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateMpeg2(abi_arg_out<Windows::Media::MediaProperties::IVideoEncodingProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateMpeg2());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CreateUncompressed(abi_arg_in<hstring> subtype, uint32_t width, uint32_t height, abi_arg_out<Windows::Media::MediaProperties::IVideoEncodingProperties> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CreateUncompressed(*reinterpret_cast<const hstring *>(&subtype), width, height));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Media::MediaProperties {

template <typename D> void impl_IMediaRatio<D>::Numerator(uint32_t value) const
{
    check_hresult(static_cast<const IMediaRatio &>(static_cast<const D &>(*this))->put_Numerator(value));
}

template <typename D> uint32_t impl_IMediaRatio<D>::Numerator() const
{
    uint32_t value {};
    check_hresult(static_cast<const IMediaRatio &>(static_cast<const D &>(*this))->get_Numerator(&value));
    return value;
}

template <typename D> void impl_IMediaRatio<D>::Denominator(uint32_t value) const
{
    check_hresult(static_cast<const IMediaRatio &>(static_cast<const D &>(*this))->put_Denominator(value));
}

template <typename D> uint32_t impl_IMediaRatio<D>::Denominator() const
{
    uint32_t value {};
    check_hresult(static_cast<const IMediaRatio &>(static_cast<const D &>(*this))->get_Denominator(&value));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaPropertySet impl_IMediaEncodingProperties<D>::Properties() const
{
    Windows::Media::MediaProperties::MediaPropertySet value { nullptr };
    check_hresult(static_cast<const IMediaEncodingProperties &>(static_cast<const D &>(*this))->get_Properties(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingProperties<D>::Type() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingProperties &>(static_cast<const D &>(*this))->get_Type(put(value)));
    return value;
}

template <typename D> void impl_IMediaEncodingProperties<D>::Subtype(hstring_ref value) const
{
    check_hresult(static_cast<const IMediaEncodingProperties &>(static_cast<const D &>(*this))->put_Subtype(get(value)));
}

template <typename D> hstring impl_IMediaEncodingProperties<D>::Subtype() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingProperties &>(static_cast<const D &>(*this))->get_Subtype(put(value)));
    return value;
}

template <typename D> void impl_IAudioEncodingProperties<D>::Bitrate(uint32_t value) const
{
    check_hresult(static_cast<const IAudioEncodingProperties &>(static_cast<const D &>(*this))->put_Bitrate(value));
}

template <typename D> uint32_t impl_IAudioEncodingProperties<D>::Bitrate() const
{
    uint32_t value {};
    check_hresult(static_cast<const IAudioEncodingProperties &>(static_cast<const D &>(*this))->get_Bitrate(&value));
    return value;
}

template <typename D> void impl_IAudioEncodingProperties<D>::ChannelCount(uint32_t value) const
{
    check_hresult(static_cast<const IAudioEncodingProperties &>(static_cast<const D &>(*this))->put_ChannelCount(value));
}

template <typename D> uint32_t impl_IAudioEncodingProperties<D>::ChannelCount() const
{
    uint32_t value {};
    check_hresult(static_cast<const IAudioEncodingProperties &>(static_cast<const D &>(*this))->get_ChannelCount(&value));
    return value;
}

template <typename D> void impl_IAudioEncodingProperties<D>::SampleRate(uint32_t value) const
{
    check_hresult(static_cast<const IAudioEncodingProperties &>(static_cast<const D &>(*this))->put_SampleRate(value));
}

template <typename D> uint32_t impl_IAudioEncodingProperties<D>::SampleRate() const
{
    uint32_t value {};
    check_hresult(static_cast<const IAudioEncodingProperties &>(static_cast<const D &>(*this))->get_SampleRate(&value));
    return value;
}

template <typename D> void impl_IAudioEncodingProperties<D>::BitsPerSample(uint32_t value) const
{
    check_hresult(static_cast<const IAudioEncodingProperties &>(static_cast<const D &>(*this))->put_BitsPerSample(value));
}

template <typename D> uint32_t impl_IAudioEncodingProperties<D>::BitsPerSample() const
{
    uint32_t value {};
    check_hresult(static_cast<const IAudioEncodingProperties &>(static_cast<const D &>(*this))->get_BitsPerSample(&value));
    return value;
}

template <typename D> void impl_IAudioEncodingPropertiesWithFormatUserData<D>::SetFormatUserData(array_ref<const uint8_t> value) const
{
    check_hresult(static_cast<const IAudioEncodingPropertiesWithFormatUserData &>(static_cast<const D &>(*this))->abi_SetFormatUserData(value.size(), get(value)));
}

template <typename D> void impl_IAudioEncodingPropertiesWithFormatUserData<D>::GetFormatUserData(com_array<uint8_t> & value) const
{
    check_hresult(static_cast<const IAudioEncodingPropertiesWithFormatUserData &>(static_cast<const D &>(*this))->abi_GetFormatUserData(put_size(value), put(value)));
}

template <typename D> Windows::Media::MediaProperties::AudioEncodingProperties impl_IAudioEncodingPropertiesStatics<D>::CreateAac(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate) const
{
    Windows::Media::MediaProperties::AudioEncodingProperties value { nullptr };
    check_hresult(static_cast<const IAudioEncodingPropertiesStatics &>(static_cast<const D &>(*this))->abi_CreateAac(sampleRate, channelCount, bitrate, put(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::AudioEncodingProperties impl_IAudioEncodingPropertiesStatics<D>::CreateAacAdts(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate) const
{
    Windows::Media::MediaProperties::AudioEncodingProperties value { nullptr };
    check_hresult(static_cast<const IAudioEncodingPropertiesStatics &>(static_cast<const D &>(*this))->abi_CreateAacAdts(sampleRate, channelCount, bitrate, put(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::AudioEncodingProperties impl_IAudioEncodingPropertiesStatics<D>::CreateMp3(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate) const
{
    Windows::Media::MediaProperties::AudioEncodingProperties value { nullptr };
    check_hresult(static_cast<const IAudioEncodingPropertiesStatics &>(static_cast<const D &>(*this))->abi_CreateMp3(sampleRate, channelCount, bitrate, put(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::AudioEncodingProperties impl_IAudioEncodingPropertiesStatics<D>::CreatePcm(uint32_t sampleRate, uint32_t channelCount, uint32_t bitsPerSample) const
{
    Windows::Media::MediaProperties::AudioEncodingProperties value { nullptr };
    check_hresult(static_cast<const IAudioEncodingPropertiesStatics &>(static_cast<const D &>(*this))->abi_CreatePcm(sampleRate, channelCount, bitsPerSample, put(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::AudioEncodingProperties impl_IAudioEncodingPropertiesStatics<D>::CreateWma(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate) const
{
    Windows::Media::MediaProperties::AudioEncodingProperties value { nullptr };
    check_hresult(static_cast<const IAudioEncodingPropertiesStatics &>(static_cast<const D &>(*this))->abi_CreateWma(sampleRate, channelCount, bitrate, put(value)));
    return value;
}

template <typename D> void impl_IVideoEncodingProperties<D>::Bitrate(uint32_t value) const
{
    check_hresult(static_cast<const IVideoEncodingProperties &>(static_cast<const D &>(*this))->put_Bitrate(value));
}

template <typename D> uint32_t impl_IVideoEncodingProperties<D>::Bitrate() const
{
    uint32_t value {};
    check_hresult(static_cast<const IVideoEncodingProperties &>(static_cast<const D &>(*this))->get_Bitrate(&value));
    return value;
}

template <typename D> void impl_IVideoEncodingProperties<D>::Width(uint32_t value) const
{
    check_hresult(static_cast<const IVideoEncodingProperties &>(static_cast<const D &>(*this))->put_Width(value));
}

template <typename D> uint32_t impl_IVideoEncodingProperties<D>::Width() const
{
    uint32_t value {};
    check_hresult(static_cast<const IVideoEncodingProperties &>(static_cast<const D &>(*this))->get_Width(&value));
    return value;
}

template <typename D> void impl_IVideoEncodingProperties<D>::Height(uint32_t value) const
{
    check_hresult(static_cast<const IVideoEncodingProperties &>(static_cast<const D &>(*this))->put_Height(value));
}

template <typename D> uint32_t impl_IVideoEncodingProperties<D>::Height() const
{
    uint32_t value {};
    check_hresult(static_cast<const IVideoEncodingProperties &>(static_cast<const D &>(*this))->get_Height(&value));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaRatio impl_IVideoEncodingProperties<D>::FrameRate() const
{
    Windows::Media::MediaProperties::MediaRatio value { nullptr };
    check_hresult(static_cast<const IVideoEncodingProperties &>(static_cast<const D &>(*this))->get_FrameRate(put(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaRatio impl_IVideoEncodingProperties<D>::PixelAspectRatio() const
{
    Windows::Media::MediaProperties::MediaRatio value { nullptr };
    check_hresult(static_cast<const IVideoEncodingProperties &>(static_cast<const D &>(*this))->get_PixelAspectRatio(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::Aac() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_Aac(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::AacAdts() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_AacAdts(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::Ac3() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_Ac3(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::AmrNb() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_AmrNb(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::AmrWb() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_AmrWb(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::Argb32() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_Argb32(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::Asf() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_Asf(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::Avi() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_Avi(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::Bgra8() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_Bgra8(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::Bmp() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_Bmp(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::Eac3() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_Eac3(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::Float() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_Float(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::Gif() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_Gif(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::H263() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_H263(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::H264() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_H264(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::H264Es() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_H264Es(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::Hevc() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_Hevc(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::HevcEs() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_HevcEs(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::Iyuv() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_Iyuv(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::Jpeg() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_Jpeg(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::JpegXr() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_JpegXr(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::Mjpg() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_Mjpg(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::Mpeg() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_Mpeg(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::Mpeg1() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_Mpeg1(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::Mpeg2() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_Mpeg2(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::Mp3() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_Mp3(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::Mpeg4() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_Mpeg4(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::Nv12() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_Nv12(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::Pcm() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_Pcm(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::Png() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_Png(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::Rgb24() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_Rgb24(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::Rgb32() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_Rgb32(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::Tiff() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_Tiff(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::Wave() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_Wave(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::Wma8() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_Wma8(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::Wma9() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_Wma9(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::Wmv3() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_Wmv3(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::Wvc1() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_Wvc1(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::Yuy2() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_Yuy2(put(value)));
    return value;
}

template <typename D> hstring impl_IMediaEncodingSubtypesStatics<D>::Yv12() const
{
    hstring value;
    check_hresult(static_cast<const IMediaEncodingSubtypesStatics &>(static_cast<const D &>(*this))->get_Yv12(put(value)));
    return value;
}

template <typename D> int32_t impl_IH264ProfileIdsStatics<D>::ConstrainedBaseline() const
{
    int32_t value {};
    check_hresult(static_cast<const IH264ProfileIdsStatics &>(static_cast<const D &>(*this))->get_ConstrainedBaseline(&value));
    return value;
}

template <typename D> int32_t impl_IH264ProfileIdsStatics<D>::Baseline() const
{
    int32_t value {};
    check_hresult(static_cast<const IH264ProfileIdsStatics &>(static_cast<const D &>(*this))->get_Baseline(&value));
    return value;
}

template <typename D> int32_t impl_IH264ProfileIdsStatics<D>::Extended() const
{
    int32_t value {};
    check_hresult(static_cast<const IH264ProfileIdsStatics &>(static_cast<const D &>(*this))->get_Extended(&value));
    return value;
}

template <typename D> int32_t impl_IH264ProfileIdsStatics<D>::Main() const
{
    int32_t value {};
    check_hresult(static_cast<const IH264ProfileIdsStatics &>(static_cast<const D &>(*this))->get_Main(&value));
    return value;
}

template <typename D> int32_t impl_IH264ProfileIdsStatics<D>::High() const
{
    int32_t value {};
    check_hresult(static_cast<const IH264ProfileIdsStatics &>(static_cast<const D &>(*this))->get_High(&value));
    return value;
}

template <typename D> int32_t impl_IH264ProfileIdsStatics<D>::High10() const
{
    int32_t value {};
    check_hresult(static_cast<const IH264ProfileIdsStatics &>(static_cast<const D &>(*this))->get_High10(&value));
    return value;
}

template <typename D> int32_t impl_IH264ProfileIdsStatics<D>::High422() const
{
    int32_t value {};
    check_hresult(static_cast<const IH264ProfileIdsStatics &>(static_cast<const D &>(*this))->get_High422(&value));
    return value;
}

template <typename D> int32_t impl_IH264ProfileIdsStatics<D>::High444() const
{
    int32_t value {};
    check_hresult(static_cast<const IH264ProfileIdsStatics &>(static_cast<const D &>(*this))->get_High444(&value));
    return value;
}

template <typename D> int32_t impl_IH264ProfileIdsStatics<D>::StereoHigh() const
{
    int32_t value {};
    check_hresult(static_cast<const IH264ProfileIdsStatics &>(static_cast<const D &>(*this))->get_StereoHigh(&value));
    return value;
}

template <typename D> int32_t impl_IH264ProfileIdsStatics<D>::MultiviewHigh() const
{
    int32_t value {};
    check_hresult(static_cast<const IH264ProfileIdsStatics &>(static_cast<const D &>(*this))->get_MultiviewHigh(&value));
    return value;
}

template <typename D> int32_t impl_IMpeg2ProfileIdsStatics<D>::Simple() const
{
    int32_t value {};
    check_hresult(static_cast<const IMpeg2ProfileIdsStatics &>(static_cast<const D &>(*this))->get_Simple(&value));
    return value;
}

template <typename D> int32_t impl_IMpeg2ProfileIdsStatics<D>::Main() const
{
    int32_t value {};
    check_hresult(static_cast<const IMpeg2ProfileIdsStatics &>(static_cast<const D &>(*this))->get_Main(&value));
    return value;
}

template <typename D> int32_t impl_IMpeg2ProfileIdsStatics<D>::SignalNoiseRatioScalable() const
{
    int32_t value {};
    check_hresult(static_cast<const IMpeg2ProfileIdsStatics &>(static_cast<const D &>(*this))->get_SignalNoiseRatioScalable(&value));
    return value;
}

template <typename D> int32_t impl_IMpeg2ProfileIdsStatics<D>::SpatiallyScalable() const
{
    int32_t value {};
    check_hresult(static_cast<const IMpeg2ProfileIdsStatics &>(static_cast<const D &>(*this))->get_SpatiallyScalable(&value));
    return value;
}

template <typename D> int32_t impl_IMpeg2ProfileIdsStatics<D>::High() const
{
    int32_t value {};
    check_hresult(static_cast<const IMpeg2ProfileIdsStatics &>(static_cast<const D &>(*this))->get_High(&value));
    return value;
}

template <typename D> void impl_IVideoEncodingProperties2<D>::SetFormatUserData(array_ref<const uint8_t> value) const
{
    check_hresult(static_cast<const IVideoEncodingProperties2 &>(static_cast<const D &>(*this))->abi_SetFormatUserData(value.size(), get(value)));
}

template <typename D> void impl_IVideoEncodingProperties2<D>::GetFormatUserData(com_array<uint8_t> & value) const
{
    check_hresult(static_cast<const IVideoEncodingProperties2 &>(static_cast<const D &>(*this))->abi_GetFormatUserData(put_size(value), put(value)));
}

template <typename D> void impl_IVideoEncodingProperties2<D>::ProfileId(int32_t value) const
{
    check_hresult(static_cast<const IVideoEncodingProperties2 &>(static_cast<const D &>(*this))->put_ProfileId(value));
}

template <typename D> int32_t impl_IVideoEncodingProperties2<D>::ProfileId() const
{
    int32_t value {};
    check_hresult(static_cast<const IVideoEncodingProperties2 &>(static_cast<const D &>(*this))->get_ProfileId(&value));
    return value;
}

template <typename D> Windows::Media::MediaProperties::StereoscopicVideoPackingMode impl_IVideoEncodingProperties3<D>::StereoscopicVideoPackingMode() const
{
    Windows::Media::MediaProperties::StereoscopicVideoPackingMode value {};
    check_hresult(static_cast<const IVideoEncodingProperties3 &>(static_cast<const D &>(*this))->get_StereoscopicVideoPackingMode(&value));
    return value;
}

template <typename D> Windows::Media::MediaProperties::VideoEncodingProperties impl_IVideoEncodingPropertiesStatics<D>::CreateH264() const
{
    Windows::Media::MediaProperties::VideoEncodingProperties value { nullptr };
    check_hresult(static_cast<const IVideoEncodingPropertiesStatics &>(static_cast<const D &>(*this))->abi_CreateH264(put(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::VideoEncodingProperties impl_IVideoEncodingPropertiesStatics<D>::CreateMpeg2() const
{
    Windows::Media::MediaProperties::VideoEncodingProperties value { nullptr };
    check_hresult(static_cast<const IVideoEncodingPropertiesStatics &>(static_cast<const D &>(*this))->abi_CreateMpeg2(put(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::VideoEncodingProperties impl_IVideoEncodingPropertiesStatics<D>::CreateUncompressed(hstring_ref subtype, uint32_t width, uint32_t height) const
{
    Windows::Media::MediaProperties::VideoEncodingProperties value { nullptr };
    check_hresult(static_cast<const IVideoEncodingPropertiesStatics &>(static_cast<const D &>(*this))->abi_CreateUncompressed(get(subtype), width, height, put(value)));
    return value;
}

template <typename D> void impl_IImageEncodingProperties<D>::Width(uint32_t value) const
{
    check_hresult(static_cast<const IImageEncodingProperties &>(static_cast<const D &>(*this))->put_Width(value));
}

template <typename D> uint32_t impl_IImageEncodingProperties<D>::Width() const
{
    uint32_t value {};
    check_hresult(static_cast<const IImageEncodingProperties &>(static_cast<const D &>(*this))->get_Width(&value));
    return value;
}

template <typename D> void impl_IImageEncodingProperties<D>::Height(uint32_t value) const
{
    check_hresult(static_cast<const IImageEncodingProperties &>(static_cast<const D &>(*this))->put_Height(value));
}

template <typename D> uint32_t impl_IImageEncodingProperties<D>::Height() const
{
    uint32_t value {};
    check_hresult(static_cast<const IImageEncodingProperties &>(static_cast<const D &>(*this))->get_Height(&value));
    return value;
}

template <typename D> Windows::Media::MediaProperties::ImageEncodingProperties impl_IImageEncodingPropertiesStatics<D>::CreateJpeg() const
{
    Windows::Media::MediaProperties::ImageEncodingProperties value { nullptr };
    check_hresult(static_cast<const IImageEncodingPropertiesStatics &>(static_cast<const D &>(*this))->abi_CreateJpeg(put(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::ImageEncodingProperties impl_IImageEncodingPropertiesStatics<D>::CreatePng() const
{
    Windows::Media::MediaProperties::ImageEncodingProperties value { nullptr };
    check_hresult(static_cast<const IImageEncodingPropertiesStatics &>(static_cast<const D &>(*this))->abi_CreatePng(put(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::ImageEncodingProperties impl_IImageEncodingPropertiesStatics<D>::CreateJpegXR() const
{
    Windows::Media::MediaProperties::ImageEncodingProperties value { nullptr };
    check_hresult(static_cast<const IImageEncodingPropertiesStatics &>(static_cast<const D &>(*this))->abi_CreateJpegXR(put(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::ImageEncodingProperties impl_IImageEncodingPropertiesStatics2<D>::CreateUncompressed(Windows::Media::MediaProperties::MediaPixelFormat format) const
{
    Windows::Media::MediaProperties::ImageEncodingProperties value { nullptr };
    check_hresult(static_cast<const IImageEncodingPropertiesStatics2 &>(static_cast<const D &>(*this))->abi_CreateUncompressed(format, put(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::ImageEncodingProperties impl_IImageEncodingPropertiesStatics2<D>::CreateBmp() const
{
    Windows::Media::MediaProperties::ImageEncodingProperties value { nullptr };
    check_hresult(static_cast<const IImageEncodingPropertiesStatics2 &>(static_cast<const D &>(*this))->abi_CreateBmp(put(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaEncodingProfile impl_IMediaEncodingProfileStatics<D>::CreateM4a(Windows::Media::MediaProperties::AudioEncodingQuality quality) const
{
    Windows::Media::MediaProperties::MediaEncodingProfile value { nullptr };
    check_hresult(static_cast<const IMediaEncodingProfileStatics &>(static_cast<const D &>(*this))->abi_CreateM4a(quality, put(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaEncodingProfile impl_IMediaEncodingProfileStatics<D>::CreateMp3(Windows::Media::MediaProperties::AudioEncodingQuality quality) const
{
    Windows::Media::MediaProperties::MediaEncodingProfile value { nullptr };
    check_hresult(static_cast<const IMediaEncodingProfileStatics &>(static_cast<const D &>(*this))->abi_CreateMp3(quality, put(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaEncodingProfile impl_IMediaEncodingProfileStatics<D>::CreateWma(Windows::Media::MediaProperties::AudioEncodingQuality quality) const
{
    Windows::Media::MediaProperties::MediaEncodingProfile value { nullptr };
    check_hresult(static_cast<const IMediaEncodingProfileStatics &>(static_cast<const D &>(*this))->abi_CreateWma(quality, put(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaEncodingProfile impl_IMediaEncodingProfileStatics<D>::CreateMp4(Windows::Media::MediaProperties::VideoEncodingQuality quality) const
{
    Windows::Media::MediaProperties::MediaEncodingProfile value { nullptr };
    check_hresult(static_cast<const IMediaEncodingProfileStatics &>(static_cast<const D &>(*this))->abi_CreateMp4(quality, put(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaEncodingProfile impl_IMediaEncodingProfileStatics<D>::CreateWmv(Windows::Media::MediaProperties::VideoEncodingQuality quality) const
{
    Windows::Media::MediaProperties::MediaEncodingProfile value { nullptr };
    check_hresult(static_cast<const IMediaEncodingProfileStatics &>(static_cast<const D &>(*this))->abi_CreateWmv(quality, put(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::MediaProperties::MediaEncodingProfile> impl_IMediaEncodingProfileStatics<D>::CreateFromFileAsync(const Windows::Storage::IStorageFile & file) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::MediaProperties::MediaEncodingProfile> operation;
    check_hresult(static_cast<const IMediaEncodingProfileStatics &>(static_cast<const D &>(*this))->abi_CreateFromFileAsync(get(file), put(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::MediaProperties::MediaEncodingProfile> impl_IMediaEncodingProfileStatics<D>::CreateFromStreamAsync(const Windows::Storage::Streams::IRandomAccessStream & stream) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::MediaProperties::MediaEncodingProfile> operation;
    check_hresult(static_cast<const IMediaEncodingProfileStatics &>(static_cast<const D &>(*this))->abi_CreateFromStreamAsync(get(stream), put(operation)));
    return operation;
}

template <typename D> Windows::Media::MediaProperties::MediaEncodingProfile impl_IMediaEncodingProfileStatics2<D>::CreateWav(Windows::Media::MediaProperties::AudioEncodingQuality quality) const
{
    Windows::Media::MediaProperties::MediaEncodingProfile value { nullptr };
    check_hresult(static_cast<const IMediaEncodingProfileStatics2 &>(static_cast<const D &>(*this))->abi_CreateWav(quality, put(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaEncodingProfile impl_IMediaEncodingProfileStatics2<D>::CreateAvi(Windows::Media::MediaProperties::VideoEncodingQuality quality) const
{
    Windows::Media::MediaProperties::MediaEncodingProfile value { nullptr };
    check_hresult(static_cast<const IMediaEncodingProfileStatics2 &>(static_cast<const D &>(*this))->abi_CreateAvi(quality, put(value)));
    return value;
}

template <typename D> void impl_IMediaEncodingProfile<D>::Audio(const Windows::Media::MediaProperties::AudioEncodingProperties & value) const
{
    check_hresult(static_cast<const IMediaEncodingProfile &>(static_cast<const D &>(*this))->put_Audio(get(value)));
}

template <typename D> Windows::Media::MediaProperties::AudioEncodingProperties impl_IMediaEncodingProfile<D>::Audio() const
{
    Windows::Media::MediaProperties::AudioEncodingProperties value { nullptr };
    check_hresult(static_cast<const IMediaEncodingProfile &>(static_cast<const D &>(*this))->get_Audio(put(value)));
    return value;
}

template <typename D> void impl_IMediaEncodingProfile<D>::Video(const Windows::Media::MediaProperties::VideoEncodingProperties & value) const
{
    check_hresult(static_cast<const IMediaEncodingProfile &>(static_cast<const D &>(*this))->put_Video(get(value)));
}

template <typename D> Windows::Media::MediaProperties::VideoEncodingProperties impl_IMediaEncodingProfile<D>::Video() const
{
    Windows::Media::MediaProperties::VideoEncodingProperties value { nullptr };
    check_hresult(static_cast<const IMediaEncodingProfile &>(static_cast<const D &>(*this))->get_Video(put(value)));
    return value;
}

template <typename D> void impl_IMediaEncodingProfile<D>::Container(const Windows::Media::MediaProperties::ContainerEncodingProperties & value) const
{
    check_hresult(static_cast<const IMediaEncodingProfile &>(static_cast<const D &>(*this))->put_Container(get(value)));
}

template <typename D> Windows::Media::MediaProperties::ContainerEncodingProperties impl_IMediaEncodingProfile<D>::Container() const
{
    Windows::Media::MediaProperties::ContainerEncodingProperties value { nullptr };
    check_hresult(static_cast<const IMediaEncodingProfile &>(static_cast<const D &>(*this))->get_Container(put(value)));
    return value;
}

inline AudioEncodingProperties::AudioEncodingProperties() :
    AudioEncodingProperties(activate_instance<AudioEncodingProperties>())
{}

inline Windows::Media::MediaProperties::AudioEncodingProperties AudioEncodingProperties::CreateAac(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate)
{
    return get_activation_factory<AudioEncodingProperties, IAudioEncodingPropertiesStatics>().CreateAac(sampleRate, channelCount, bitrate);
}

inline Windows::Media::MediaProperties::AudioEncodingProperties AudioEncodingProperties::CreateAacAdts(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate)
{
    return get_activation_factory<AudioEncodingProperties, IAudioEncodingPropertiesStatics>().CreateAacAdts(sampleRate, channelCount, bitrate);
}

inline Windows::Media::MediaProperties::AudioEncodingProperties AudioEncodingProperties::CreateMp3(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate)
{
    return get_activation_factory<AudioEncodingProperties, IAudioEncodingPropertiesStatics>().CreateMp3(sampleRate, channelCount, bitrate);
}

inline Windows::Media::MediaProperties::AudioEncodingProperties AudioEncodingProperties::CreatePcm(uint32_t sampleRate, uint32_t channelCount, uint32_t bitsPerSample)
{
    return get_activation_factory<AudioEncodingProperties, IAudioEncodingPropertiesStatics>().CreatePcm(sampleRate, channelCount, bitsPerSample);
}

inline Windows::Media::MediaProperties::AudioEncodingProperties AudioEncodingProperties::CreateWma(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate)
{
    return get_activation_factory<AudioEncodingProperties, IAudioEncodingPropertiesStatics>().CreateWma(sampleRate, channelCount, bitrate);
}

inline ContainerEncodingProperties::ContainerEncodingProperties() :
    ContainerEncodingProperties(activate_instance<ContainerEncodingProperties>())
{}

inline int32_t H264ProfileIds::ConstrainedBaseline()
{
    return get_activation_factory<H264ProfileIds, IH264ProfileIdsStatics>().ConstrainedBaseline();
}

inline int32_t H264ProfileIds::Baseline()
{
    return get_activation_factory<H264ProfileIds, IH264ProfileIdsStatics>().Baseline();
}

inline int32_t H264ProfileIds::Extended()
{
    return get_activation_factory<H264ProfileIds, IH264ProfileIdsStatics>().Extended();
}

inline int32_t H264ProfileIds::Main()
{
    return get_activation_factory<H264ProfileIds, IH264ProfileIdsStatics>().Main();
}

inline int32_t H264ProfileIds::High()
{
    return get_activation_factory<H264ProfileIds, IH264ProfileIdsStatics>().High();
}

inline int32_t H264ProfileIds::High10()
{
    return get_activation_factory<H264ProfileIds, IH264ProfileIdsStatics>().High10();
}

inline int32_t H264ProfileIds::High422()
{
    return get_activation_factory<H264ProfileIds, IH264ProfileIdsStatics>().High422();
}

inline int32_t H264ProfileIds::High444()
{
    return get_activation_factory<H264ProfileIds, IH264ProfileIdsStatics>().High444();
}

inline int32_t H264ProfileIds::StereoHigh()
{
    return get_activation_factory<H264ProfileIds, IH264ProfileIdsStatics>().StereoHigh();
}

inline int32_t H264ProfileIds::MultiviewHigh()
{
    return get_activation_factory<H264ProfileIds, IH264ProfileIdsStatics>().MultiviewHigh();
}

inline ImageEncodingProperties::ImageEncodingProperties() :
    ImageEncodingProperties(activate_instance<ImageEncodingProperties>())
{}

inline Windows::Media::MediaProperties::ImageEncodingProperties ImageEncodingProperties::CreateJpeg()
{
    return get_activation_factory<ImageEncodingProperties, IImageEncodingPropertiesStatics>().CreateJpeg();
}

inline Windows::Media::MediaProperties::ImageEncodingProperties ImageEncodingProperties::CreatePng()
{
    return get_activation_factory<ImageEncodingProperties, IImageEncodingPropertiesStatics>().CreatePng();
}

inline Windows::Media::MediaProperties::ImageEncodingProperties ImageEncodingProperties::CreateJpegXR()
{
    return get_activation_factory<ImageEncodingProperties, IImageEncodingPropertiesStatics>().CreateJpegXR();
}

inline Windows::Media::MediaProperties::ImageEncodingProperties ImageEncodingProperties::CreateUncompressed(Windows::Media::MediaProperties::MediaPixelFormat format)
{
    return get_activation_factory<ImageEncodingProperties, IImageEncodingPropertiesStatics2>().CreateUncompressed(format);
}

inline Windows::Media::MediaProperties::ImageEncodingProperties ImageEncodingProperties::CreateBmp()
{
    return get_activation_factory<ImageEncodingProperties, IImageEncodingPropertiesStatics2>().CreateBmp();
}

inline MediaEncodingProfile::MediaEncodingProfile() :
    MediaEncodingProfile(activate_instance<MediaEncodingProfile>())
{}

inline Windows::Media::MediaProperties::MediaEncodingProfile MediaEncodingProfile::CreateM4a(Windows::Media::MediaProperties::AudioEncodingQuality quality)
{
    return get_activation_factory<MediaEncodingProfile, IMediaEncodingProfileStatics>().CreateM4a(quality);
}

inline Windows::Media::MediaProperties::MediaEncodingProfile MediaEncodingProfile::CreateMp3(Windows::Media::MediaProperties::AudioEncodingQuality quality)
{
    return get_activation_factory<MediaEncodingProfile, IMediaEncodingProfileStatics>().CreateMp3(quality);
}

inline Windows::Media::MediaProperties::MediaEncodingProfile MediaEncodingProfile::CreateWma(Windows::Media::MediaProperties::AudioEncodingQuality quality)
{
    return get_activation_factory<MediaEncodingProfile, IMediaEncodingProfileStatics>().CreateWma(quality);
}

inline Windows::Media::MediaProperties::MediaEncodingProfile MediaEncodingProfile::CreateMp4(Windows::Media::MediaProperties::VideoEncodingQuality quality)
{
    return get_activation_factory<MediaEncodingProfile, IMediaEncodingProfileStatics>().CreateMp4(quality);
}

inline Windows::Media::MediaProperties::MediaEncodingProfile MediaEncodingProfile::CreateWmv(Windows::Media::MediaProperties::VideoEncodingQuality quality)
{
    return get_activation_factory<MediaEncodingProfile, IMediaEncodingProfileStatics>().CreateWmv(quality);
}

inline Windows::Foundation::IAsyncOperation<Windows::Media::MediaProperties::MediaEncodingProfile> MediaEncodingProfile::CreateFromFileAsync(const Windows::Storage::IStorageFile & file)
{
    return get_activation_factory<MediaEncodingProfile, IMediaEncodingProfileStatics>().CreateFromFileAsync(file);
}

inline Windows::Foundation::IAsyncOperation<Windows::Media::MediaProperties::MediaEncodingProfile> MediaEncodingProfile::CreateFromStreamAsync(const Windows::Storage::Streams::IRandomAccessStream & stream)
{
    return get_activation_factory<MediaEncodingProfile, IMediaEncodingProfileStatics>().CreateFromStreamAsync(stream);
}

inline Windows::Media::MediaProperties::MediaEncodingProfile MediaEncodingProfile::CreateWav(Windows::Media::MediaProperties::AudioEncodingQuality quality)
{
    return get_activation_factory<MediaEncodingProfile, IMediaEncodingProfileStatics2>().CreateWav(quality);
}

inline Windows::Media::MediaProperties::MediaEncodingProfile MediaEncodingProfile::CreateAvi(Windows::Media::MediaProperties::VideoEncodingQuality quality)
{
    return get_activation_factory<MediaEncodingProfile, IMediaEncodingProfileStatics2>().CreateAvi(quality);
}

inline hstring MediaEncodingSubtypes::Aac()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().Aac();
}

inline hstring MediaEncodingSubtypes::AacAdts()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().AacAdts();
}

inline hstring MediaEncodingSubtypes::Ac3()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().Ac3();
}

inline hstring MediaEncodingSubtypes::AmrNb()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().AmrNb();
}

inline hstring MediaEncodingSubtypes::AmrWb()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().AmrWb();
}

inline hstring MediaEncodingSubtypes::Argb32()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().Argb32();
}

inline hstring MediaEncodingSubtypes::Asf()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().Asf();
}

inline hstring MediaEncodingSubtypes::Avi()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().Avi();
}

inline hstring MediaEncodingSubtypes::Bgra8()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().Bgra8();
}

inline hstring MediaEncodingSubtypes::Bmp()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().Bmp();
}

inline hstring MediaEncodingSubtypes::Eac3()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().Eac3();
}

inline hstring MediaEncodingSubtypes::Float()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().Float();
}

inline hstring MediaEncodingSubtypes::Gif()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().Gif();
}

inline hstring MediaEncodingSubtypes::H263()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().H263();
}

inline hstring MediaEncodingSubtypes::H264()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().H264();
}

inline hstring MediaEncodingSubtypes::H264Es()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().H264Es();
}

inline hstring MediaEncodingSubtypes::Hevc()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().Hevc();
}

inline hstring MediaEncodingSubtypes::HevcEs()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().HevcEs();
}

inline hstring MediaEncodingSubtypes::Iyuv()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().Iyuv();
}

inline hstring MediaEncodingSubtypes::Jpeg()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().Jpeg();
}

inline hstring MediaEncodingSubtypes::JpegXr()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().JpegXr();
}

inline hstring MediaEncodingSubtypes::Mjpg()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().Mjpg();
}

inline hstring MediaEncodingSubtypes::Mpeg()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().Mpeg();
}

inline hstring MediaEncodingSubtypes::Mpeg1()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().Mpeg1();
}

inline hstring MediaEncodingSubtypes::Mpeg2()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().Mpeg2();
}

inline hstring MediaEncodingSubtypes::Mp3()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().Mp3();
}

inline hstring MediaEncodingSubtypes::Mpeg4()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().Mpeg4();
}

inline hstring MediaEncodingSubtypes::Nv12()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().Nv12();
}

inline hstring MediaEncodingSubtypes::Pcm()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().Pcm();
}

inline hstring MediaEncodingSubtypes::Png()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().Png();
}

inline hstring MediaEncodingSubtypes::Rgb24()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().Rgb24();
}

inline hstring MediaEncodingSubtypes::Rgb32()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().Rgb32();
}

inline hstring MediaEncodingSubtypes::Tiff()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().Tiff();
}

inline hstring MediaEncodingSubtypes::Wave()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().Wave();
}

inline hstring MediaEncodingSubtypes::Wma8()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().Wma8();
}

inline hstring MediaEncodingSubtypes::Wma9()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().Wma9();
}

inline hstring MediaEncodingSubtypes::Wmv3()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().Wmv3();
}

inline hstring MediaEncodingSubtypes::Wvc1()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().Wvc1();
}

inline hstring MediaEncodingSubtypes::Yuy2()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().Yuy2();
}

inline hstring MediaEncodingSubtypes::Yv12()
{
    return get_activation_factory<MediaEncodingSubtypes, IMediaEncodingSubtypesStatics>().Yv12();
}

inline MediaPropertySet::MediaPropertySet() :
    MediaPropertySet(activate_instance<MediaPropertySet>())
{}

inline int32_t Mpeg2ProfileIds::Simple()
{
    return get_activation_factory<Mpeg2ProfileIds, IMpeg2ProfileIdsStatics>().Simple();
}

inline int32_t Mpeg2ProfileIds::Main()
{
    return get_activation_factory<Mpeg2ProfileIds, IMpeg2ProfileIdsStatics>().Main();
}

inline int32_t Mpeg2ProfileIds::SignalNoiseRatioScalable()
{
    return get_activation_factory<Mpeg2ProfileIds, IMpeg2ProfileIdsStatics>().SignalNoiseRatioScalable();
}

inline int32_t Mpeg2ProfileIds::SpatiallyScalable()
{
    return get_activation_factory<Mpeg2ProfileIds, IMpeg2ProfileIdsStatics>().SpatiallyScalable();
}

inline int32_t Mpeg2ProfileIds::High()
{
    return get_activation_factory<Mpeg2ProfileIds, IMpeg2ProfileIdsStatics>().High();
}

inline VideoEncodingProperties::VideoEncodingProperties() :
    VideoEncodingProperties(activate_instance<VideoEncodingProperties>())
{}

inline Windows::Media::MediaProperties::VideoEncodingProperties VideoEncodingProperties::CreateH264()
{
    return get_activation_factory<VideoEncodingProperties, IVideoEncodingPropertiesStatics>().CreateH264();
}

inline Windows::Media::MediaProperties::VideoEncodingProperties VideoEncodingProperties::CreateMpeg2()
{
    return get_activation_factory<VideoEncodingProperties, IVideoEncodingPropertiesStatics>().CreateMpeg2();
}

inline Windows::Media::MediaProperties::VideoEncodingProperties VideoEncodingProperties::CreateUncompressed(hstring_ref subtype, uint32_t width, uint32_t height)
{
    return get_activation_factory<VideoEncodingProperties, IVideoEncodingPropertiesStatics>().CreateUncompressed(subtype, width, height);
}

}

}
