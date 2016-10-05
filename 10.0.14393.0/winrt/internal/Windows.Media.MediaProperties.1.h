// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Media.MediaProperties.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Media::MediaProperties {

struct __declspec(uuid("62bc7a16-005c-4b3b-8a0b-0a090e9687f3")) __declspec(novtable) IAudioEncodingProperties : Windows::IInspectable
{
    virtual HRESULT __stdcall put_Bitrate(uint32_t value) = 0;
    virtual HRESULT __stdcall get_Bitrate(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_ChannelCount(uint32_t value) = 0;
    virtual HRESULT __stdcall get_ChannelCount(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_SampleRate(uint32_t value) = 0;
    virtual HRESULT __stdcall get_SampleRate(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_BitsPerSample(uint32_t value) = 0;
    virtual HRESULT __stdcall get_BitsPerSample(uint32_t * value) = 0;
};

struct __declspec(uuid("0cad332c-ebe9-4527-b36d-e42a13cf38db")) __declspec(novtable) IAudioEncodingPropertiesStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateAac(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate, Windows::Media::MediaProperties::IAudioEncodingProperties ** value) = 0;
    virtual HRESULT __stdcall abi_CreateAacAdts(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate, Windows::Media::MediaProperties::IAudioEncodingProperties ** value) = 0;
    virtual HRESULT __stdcall abi_CreateMp3(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate, Windows::Media::MediaProperties::IAudioEncodingProperties ** value) = 0;
    virtual HRESULT __stdcall abi_CreatePcm(uint32_t sampleRate, uint32_t channelCount, uint32_t bitsPerSample, Windows::Media::MediaProperties::IAudioEncodingProperties ** value) = 0;
    virtual HRESULT __stdcall abi_CreateWma(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate, Windows::Media::MediaProperties::IAudioEncodingProperties ** value) = 0;
};

struct __declspec(uuid("98f10d79-13ea-49ff-be70-2673db69702c")) __declspec(novtable) IAudioEncodingPropertiesWithFormatUserData : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_SetFormatUserData(uint32_t __valueSize, uint8_t * value) = 0;
    virtual HRESULT __stdcall abi_GetFormatUserData(uint32_t * __valueSize, uint8_t ** value) = 0;
};

struct __declspec(uuid("59ac2a57-b32a-479e-8a61-4b7f2e9e7ea0")) __declspec(novtable) IContainerEncodingProperties : Windows::IInspectable
{
};

struct __declspec(uuid("38654ca7-846a-4f97-a2e5-c3a15bbf70fd")) __declspec(novtable) IH264ProfileIdsStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ConstrainedBaseline(int32_t * value) = 0;
    virtual HRESULT __stdcall get_Baseline(int32_t * value) = 0;
    virtual HRESULT __stdcall get_Extended(int32_t * value) = 0;
    virtual HRESULT __stdcall get_Main(int32_t * value) = 0;
    virtual HRESULT __stdcall get_High(int32_t * value) = 0;
    virtual HRESULT __stdcall get_High10(int32_t * value) = 0;
    virtual HRESULT __stdcall get_High422(int32_t * value) = 0;
    virtual HRESULT __stdcall get_High444(int32_t * value) = 0;
    virtual HRESULT __stdcall get_StereoHigh(int32_t * value) = 0;
    virtual HRESULT __stdcall get_MultiviewHigh(int32_t * value) = 0;
};

struct __declspec(uuid("78625635-f331-4189-b1c3-b48d5ae034f1")) __declspec(novtable) IImageEncodingProperties : Windows::IInspectable
{
    virtual HRESULT __stdcall put_Width(uint32_t value) = 0;
    virtual HRESULT __stdcall get_Width(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_Height(uint32_t value) = 0;
    virtual HRESULT __stdcall get_Height(uint32_t * value) = 0;
};

struct __declspec(uuid("257c68dc-8b99-439e-aa59-913a36161297")) __declspec(novtable) IImageEncodingPropertiesStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateJpeg(Windows::Media::MediaProperties::IImageEncodingProperties ** value) = 0;
    virtual HRESULT __stdcall abi_CreatePng(Windows::Media::MediaProperties::IImageEncodingProperties ** value) = 0;
    virtual HRESULT __stdcall abi_CreateJpegXR(Windows::Media::MediaProperties::IImageEncodingProperties ** value) = 0;
};

struct __declspec(uuid("f6c25b29-3824-46b0-956e-501329e1be3c")) __declspec(novtable) IImageEncodingPropertiesStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateUncompressed(winrt::Windows::Media::MediaProperties::MediaPixelFormat format, Windows::Media::MediaProperties::IImageEncodingProperties ** value) = 0;
    virtual HRESULT __stdcall abi_CreateBmp(Windows::Media::MediaProperties::IImageEncodingProperties ** value) = 0;
};

struct __declspec(uuid("e7dbf5a8-1db9-4783-876b-3dfe12acfdb3")) __declspec(novtable) IMediaEncodingProfile : Windows::IInspectable
{
    virtual HRESULT __stdcall put_Audio(Windows::Media::MediaProperties::IAudioEncodingProperties * value) = 0;
    virtual HRESULT __stdcall get_Audio(Windows::Media::MediaProperties::IAudioEncodingProperties ** value) = 0;
    virtual HRESULT __stdcall put_Video(Windows::Media::MediaProperties::IVideoEncodingProperties * value) = 0;
    virtual HRESULT __stdcall get_Video(Windows::Media::MediaProperties::IVideoEncodingProperties ** value) = 0;
    virtual HRESULT __stdcall put_Container(Windows::Media::MediaProperties::IContainerEncodingProperties * value) = 0;
    virtual HRESULT __stdcall get_Container(Windows::Media::MediaProperties::IContainerEncodingProperties ** value) = 0;
};

struct __declspec(uuid("197f352c-2ede-4a45-a896-817a4854f8fe")) __declspec(novtable) IMediaEncodingProfileStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateM4a(winrt::Windows::Media::MediaProperties::AudioEncodingQuality quality, Windows::Media::MediaProperties::IMediaEncodingProfile ** value) = 0;
    virtual HRESULT __stdcall abi_CreateMp3(winrt::Windows::Media::MediaProperties::AudioEncodingQuality quality, Windows::Media::MediaProperties::IMediaEncodingProfile ** value) = 0;
    virtual HRESULT __stdcall abi_CreateWma(winrt::Windows::Media::MediaProperties::AudioEncodingQuality quality, Windows::Media::MediaProperties::IMediaEncodingProfile ** value) = 0;
    virtual HRESULT __stdcall abi_CreateMp4(winrt::Windows::Media::MediaProperties::VideoEncodingQuality quality, Windows::Media::MediaProperties::IMediaEncodingProfile ** value) = 0;
    virtual HRESULT __stdcall abi_CreateWmv(winrt::Windows::Media::MediaProperties::VideoEncodingQuality quality, Windows::Media::MediaProperties::IMediaEncodingProfile ** value) = 0;
    virtual HRESULT __stdcall abi_CreateFromFileAsync(Windows::Storage::IStorageFile * file, Windows::Foundation::IAsyncOperation<Windows::Media::MediaProperties::MediaEncodingProfile> ** operation) = 0;
    virtual HRESULT __stdcall abi_CreateFromStreamAsync(Windows::Storage::Streams::IRandomAccessStream * stream, Windows::Foundation::IAsyncOperation<Windows::Media::MediaProperties::MediaEncodingProfile> ** operation) = 0;
};

struct __declspec(uuid("ce8de74f-6af4-4288-8fe2-79adf1f79a43")) __declspec(novtable) IMediaEncodingProfileStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateWav(winrt::Windows::Media::MediaProperties::AudioEncodingQuality quality, Windows::Media::MediaProperties::IMediaEncodingProfile ** value) = 0;
    virtual HRESULT __stdcall abi_CreateAvi(winrt::Windows::Media::MediaProperties::VideoEncodingQuality quality, Windows::Media::MediaProperties::IMediaEncodingProfile ** value) = 0;
};

struct __declspec(uuid("b4002af6-acd4-4e5a-a24b-5d7498a8b8c4")) __declspec(novtable) IMediaEncodingProperties : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Properties(Windows::Foundation::Collections::IMap<GUID, Windows::IInspectable> ** value) = 0;
    virtual HRESULT __stdcall get_Type(hstring * value) = 0;
    virtual HRESULT __stdcall put_Subtype(hstring value) = 0;
    virtual HRESULT __stdcall get_Subtype(hstring * value) = 0;
};

struct __declspec(uuid("37b6580e-a171-4464-ba5a-53189e48c1c8")) __declspec(novtable) IMediaEncodingSubtypesStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Aac(hstring * value) = 0;
    virtual HRESULT __stdcall get_AacAdts(hstring * value) = 0;
    virtual HRESULT __stdcall get_Ac3(hstring * value) = 0;
    virtual HRESULT __stdcall get_AmrNb(hstring * value) = 0;
    virtual HRESULT __stdcall get_AmrWb(hstring * value) = 0;
    virtual HRESULT __stdcall get_Argb32(hstring * value) = 0;
    virtual HRESULT __stdcall get_Asf(hstring * value) = 0;
    virtual HRESULT __stdcall get_Avi(hstring * value) = 0;
    virtual HRESULT __stdcall get_Bgra8(hstring * value) = 0;
    virtual HRESULT __stdcall get_Bmp(hstring * value) = 0;
    virtual HRESULT __stdcall get_Eac3(hstring * value) = 0;
    virtual HRESULT __stdcall get_Float(hstring * value) = 0;
    virtual HRESULT __stdcall get_Gif(hstring * value) = 0;
    virtual HRESULT __stdcall get_H263(hstring * value) = 0;
    virtual HRESULT __stdcall get_H264(hstring * value) = 0;
    virtual HRESULT __stdcall get_H264Es(hstring * value) = 0;
    virtual HRESULT __stdcall get_Hevc(hstring * value) = 0;
    virtual HRESULT __stdcall get_HevcEs(hstring * value) = 0;
    virtual HRESULT __stdcall get_Iyuv(hstring * value) = 0;
    virtual HRESULT __stdcall get_Jpeg(hstring * value) = 0;
    virtual HRESULT __stdcall get_JpegXr(hstring * value) = 0;
    virtual HRESULT __stdcall get_Mjpg(hstring * value) = 0;
    virtual HRESULT __stdcall get_Mpeg(hstring * value) = 0;
    virtual HRESULT __stdcall get_Mpeg1(hstring * value) = 0;
    virtual HRESULT __stdcall get_Mpeg2(hstring * value) = 0;
    virtual HRESULT __stdcall get_Mp3(hstring * value) = 0;
    virtual HRESULT __stdcall get_Mpeg4(hstring * value) = 0;
    virtual HRESULT __stdcall get_Nv12(hstring * value) = 0;
    virtual HRESULT __stdcall get_Pcm(hstring * value) = 0;
    virtual HRESULT __stdcall get_Png(hstring * value) = 0;
    virtual HRESULT __stdcall get_Rgb24(hstring * value) = 0;
    virtual HRESULT __stdcall get_Rgb32(hstring * value) = 0;
    virtual HRESULT __stdcall get_Tiff(hstring * value) = 0;
    virtual HRESULT __stdcall get_Wave(hstring * value) = 0;
    virtual HRESULT __stdcall get_Wma8(hstring * value) = 0;
    virtual HRESULT __stdcall get_Wma9(hstring * value) = 0;
    virtual HRESULT __stdcall get_Wmv3(hstring * value) = 0;
    virtual HRESULT __stdcall get_Wvc1(hstring * value) = 0;
    virtual HRESULT __stdcall get_Yuy2(hstring * value) = 0;
    virtual HRESULT __stdcall get_Yv12(hstring * value) = 0;
};

struct __declspec(uuid("d2d0fee5-8929-401d-ac78-7d357e378163")) __declspec(novtable) IMediaRatio : Windows::IInspectable
{
    virtual HRESULT __stdcall put_Numerator(uint32_t value) = 0;
    virtual HRESULT __stdcall get_Numerator(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_Denominator(uint32_t value) = 0;
    virtual HRESULT __stdcall get_Denominator(uint32_t * value) = 0;
};

struct __declspec(uuid("a461ff85-e57a-4128-9b21-d5331b04235c")) __declspec(novtable) IMpeg2ProfileIdsStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Simple(int32_t * value) = 0;
    virtual HRESULT __stdcall get_Main(int32_t * value) = 0;
    virtual HRESULT __stdcall get_SignalNoiseRatioScalable(int32_t * value) = 0;
    virtual HRESULT __stdcall get_SpatiallyScalable(int32_t * value) = 0;
    virtual HRESULT __stdcall get_High(int32_t * value) = 0;
};

struct __declspec(uuid("76ee6c9a-37c2-4f2a-880a-1282bbb4373d")) __declspec(novtable) IVideoEncodingProperties : Windows::IInspectable
{
    virtual HRESULT __stdcall put_Bitrate(uint32_t value) = 0;
    virtual HRESULT __stdcall get_Bitrate(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_Width(uint32_t value) = 0;
    virtual HRESULT __stdcall get_Width(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_Height(uint32_t value) = 0;
    virtual HRESULT __stdcall get_Height(uint32_t * value) = 0;
    virtual HRESULT __stdcall get_FrameRate(Windows::Media::MediaProperties::IMediaRatio ** value) = 0;
    virtual HRESULT __stdcall get_PixelAspectRatio(Windows::Media::MediaProperties::IMediaRatio ** value) = 0;
};

struct __declspec(uuid("f743a1ef-d465-4290-a94b-ef0f1528f8e3")) __declspec(novtable) IVideoEncodingProperties2 : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_SetFormatUserData(uint32_t __valueSize, uint8_t * value) = 0;
    virtual HRESULT __stdcall abi_GetFormatUserData(uint32_t * __valueSize, uint8_t ** value) = 0;
    virtual HRESULT __stdcall put_ProfileId(int32_t value) = 0;
    virtual HRESULT __stdcall get_ProfileId(int32_t * value) = 0;
};

struct __declspec(uuid("386bcdc4-873a-479f-b3eb-56c1fcbec6d7")) __declspec(novtable) IVideoEncodingProperties3 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_StereoscopicVideoPackingMode(winrt::Windows::Media::MediaProperties::StereoscopicVideoPackingMode * value) = 0;
};

struct __declspec(uuid("3ce14d44-1dc5-43db-9f38-ebebf90152cb")) __declspec(novtable) IVideoEncodingPropertiesStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateH264(Windows::Media::MediaProperties::IVideoEncodingProperties ** value) = 0;
    virtual HRESULT __stdcall abi_CreateMpeg2(Windows::Media::MediaProperties::IVideoEncodingProperties ** value) = 0;
    virtual HRESULT __stdcall abi_CreateUncompressed(hstring subtype, uint32_t width, uint32_t height, Windows::Media::MediaProperties::IVideoEncodingProperties ** value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Media::MediaProperties::AudioEncodingProperties> { using default_interface = Windows::Media::MediaProperties::IAudioEncodingProperties; };
template <> struct traits<Windows::Media::MediaProperties::ContainerEncodingProperties> { using default_interface = Windows::Media::MediaProperties::IContainerEncodingProperties; };
template <> struct traits<Windows::Media::MediaProperties::ImageEncodingProperties> { using default_interface = Windows::Media::MediaProperties::IImageEncodingProperties; };
template <> struct traits<Windows::Media::MediaProperties::MediaEncodingProfile> { using default_interface = Windows::Media::MediaProperties::IMediaEncodingProfile; };
template <> struct traits<Windows::Media::MediaProperties::MediaPropertySet> { using default_interface = Windows::Foundation::Collections::IMap<GUID, Windows::IInspectable>; };
template <> struct traits<Windows::Media::MediaProperties::MediaRatio> { using default_interface = Windows::Media::MediaProperties::IMediaRatio; };
template <> struct traits<Windows::Media::MediaProperties::VideoEncodingProperties> { using default_interface = Windows::Media::MediaProperties::IVideoEncodingProperties; };

}

namespace Windows::Media::MediaProperties {

template <typename T> struct impl_IAudioEncodingProperties;
template <typename T> struct impl_IAudioEncodingPropertiesStatics;
template <typename T> struct impl_IAudioEncodingPropertiesWithFormatUserData;
template <typename T> struct impl_IContainerEncodingProperties;
template <typename T> struct impl_IH264ProfileIdsStatics;
template <typename T> struct impl_IImageEncodingProperties;
template <typename T> struct impl_IImageEncodingPropertiesStatics;
template <typename T> struct impl_IImageEncodingPropertiesStatics2;
template <typename T> struct impl_IMediaEncodingProfile;
template <typename T> struct impl_IMediaEncodingProfileStatics;
template <typename T> struct impl_IMediaEncodingProfileStatics2;
template <typename T> struct impl_IMediaEncodingProperties;
template <typename T> struct impl_IMediaEncodingSubtypesStatics;
template <typename T> struct impl_IMediaRatio;
template <typename T> struct impl_IMpeg2ProfileIdsStatics;
template <typename T> struct impl_IVideoEncodingProperties;
template <typename T> struct impl_IVideoEncodingProperties2;
template <typename T> struct impl_IVideoEncodingProperties3;
template <typename T> struct impl_IVideoEncodingPropertiesStatics;

}

namespace impl {

template <> struct traits<Windows::Media::MediaProperties::IAudioEncodingProperties>
{
    using abi = ABI::Windows::Media::MediaProperties::IAudioEncodingProperties;
    template <typename D> using consume = Windows::Media::MediaProperties::impl_IAudioEncodingProperties<D>;
};

template <> struct traits<Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics>
{
    using abi = ABI::Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics;
    template <typename D> using consume = Windows::Media::MediaProperties::impl_IAudioEncodingPropertiesStatics<D>;
};

template <> struct traits<Windows::Media::MediaProperties::IAudioEncodingPropertiesWithFormatUserData>
{
    using abi = ABI::Windows::Media::MediaProperties::IAudioEncodingPropertiesWithFormatUserData;
    template <typename D> using consume = Windows::Media::MediaProperties::impl_IAudioEncodingPropertiesWithFormatUserData<D>;
};

template <> struct traits<Windows::Media::MediaProperties::IContainerEncodingProperties>
{
    using abi = ABI::Windows::Media::MediaProperties::IContainerEncodingProperties;
    template <typename D> using consume = Windows::Media::MediaProperties::impl_IContainerEncodingProperties<D>;
};

template <> struct traits<Windows::Media::MediaProperties::IH264ProfileIdsStatics>
{
    using abi = ABI::Windows::Media::MediaProperties::IH264ProfileIdsStatics;
    template <typename D> using consume = Windows::Media::MediaProperties::impl_IH264ProfileIdsStatics<D>;
};

template <> struct traits<Windows::Media::MediaProperties::IImageEncodingProperties>
{
    using abi = ABI::Windows::Media::MediaProperties::IImageEncodingProperties;
    template <typename D> using consume = Windows::Media::MediaProperties::impl_IImageEncodingProperties<D>;
};

template <> struct traits<Windows::Media::MediaProperties::IImageEncodingPropertiesStatics>
{
    using abi = ABI::Windows::Media::MediaProperties::IImageEncodingPropertiesStatics;
    template <typename D> using consume = Windows::Media::MediaProperties::impl_IImageEncodingPropertiesStatics<D>;
};

template <> struct traits<Windows::Media::MediaProperties::IImageEncodingPropertiesStatics2>
{
    using abi = ABI::Windows::Media::MediaProperties::IImageEncodingPropertiesStatics2;
    template <typename D> using consume = Windows::Media::MediaProperties::impl_IImageEncodingPropertiesStatics2<D>;
};

template <> struct traits<Windows::Media::MediaProperties::IMediaEncodingProfile>
{
    using abi = ABI::Windows::Media::MediaProperties::IMediaEncodingProfile;
    template <typename D> using consume = Windows::Media::MediaProperties::impl_IMediaEncodingProfile<D>;
};

template <> struct traits<Windows::Media::MediaProperties::IMediaEncodingProfileStatics>
{
    using abi = ABI::Windows::Media::MediaProperties::IMediaEncodingProfileStatics;
    template <typename D> using consume = Windows::Media::MediaProperties::impl_IMediaEncodingProfileStatics<D>;
};

template <> struct traits<Windows::Media::MediaProperties::IMediaEncodingProfileStatics2>
{
    using abi = ABI::Windows::Media::MediaProperties::IMediaEncodingProfileStatics2;
    template <typename D> using consume = Windows::Media::MediaProperties::impl_IMediaEncodingProfileStatics2<D>;
};

template <> struct traits<Windows::Media::MediaProperties::IMediaEncodingProperties>
{
    using abi = ABI::Windows::Media::MediaProperties::IMediaEncodingProperties;
    template <typename D> using consume = Windows::Media::MediaProperties::impl_IMediaEncodingProperties<D>;
};

template <> struct traits<Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>
{
    using abi = ABI::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics;
    template <typename D> using consume = Windows::Media::MediaProperties::impl_IMediaEncodingSubtypesStatics<D>;
};

template <> struct traits<Windows::Media::MediaProperties::IMediaRatio>
{
    using abi = ABI::Windows::Media::MediaProperties::IMediaRatio;
    template <typename D> using consume = Windows::Media::MediaProperties::impl_IMediaRatio<D>;
};

template <> struct traits<Windows::Media::MediaProperties::IMpeg2ProfileIdsStatics>
{
    using abi = ABI::Windows::Media::MediaProperties::IMpeg2ProfileIdsStatics;
    template <typename D> using consume = Windows::Media::MediaProperties::impl_IMpeg2ProfileIdsStatics<D>;
};

template <> struct traits<Windows::Media::MediaProperties::IVideoEncodingProperties>
{
    using abi = ABI::Windows::Media::MediaProperties::IVideoEncodingProperties;
    template <typename D> using consume = Windows::Media::MediaProperties::impl_IVideoEncodingProperties<D>;
};

template <> struct traits<Windows::Media::MediaProperties::IVideoEncodingProperties2>
{
    using abi = ABI::Windows::Media::MediaProperties::IVideoEncodingProperties2;
    template <typename D> using consume = Windows::Media::MediaProperties::impl_IVideoEncodingProperties2<D>;
};

template <> struct traits<Windows::Media::MediaProperties::IVideoEncodingProperties3>
{
    using abi = ABI::Windows::Media::MediaProperties::IVideoEncodingProperties3;
    template <typename D> using consume = Windows::Media::MediaProperties::impl_IVideoEncodingProperties3<D>;
};

template <> struct traits<Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics>
{
    using abi = ABI::Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics;
    template <typename D> using consume = Windows::Media::MediaProperties::impl_IVideoEncodingPropertiesStatics<D>;
};

template <> struct traits<Windows::Media::MediaProperties::AudioEncodingProperties>
{
    using abi = ABI::Windows::Media::MediaProperties::AudioEncodingProperties;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.MediaProperties.AudioEncodingProperties"; }
};

template <> struct traits<Windows::Media::MediaProperties::ContainerEncodingProperties>
{
    using abi = ABI::Windows::Media::MediaProperties::ContainerEncodingProperties;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.MediaProperties.ContainerEncodingProperties"; }
};

template <> struct traits<Windows::Media::MediaProperties::H264ProfileIds>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.MediaProperties.H264ProfileIds"; }
};

template <> struct traits<Windows::Media::MediaProperties::ImageEncodingProperties>
{
    using abi = ABI::Windows::Media::MediaProperties::ImageEncodingProperties;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.MediaProperties.ImageEncodingProperties"; }
};

template <> struct traits<Windows::Media::MediaProperties::MediaEncodingProfile>
{
    using abi = ABI::Windows::Media::MediaProperties::MediaEncodingProfile;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.MediaProperties.MediaEncodingProfile"; }
};

template <> struct traits<Windows::Media::MediaProperties::MediaEncodingSubtypes>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.MediaProperties.MediaEncodingSubtypes"; }
};

template <> struct traits<Windows::Media::MediaProperties::MediaPropertySet>
{
    using abi = ABI::Windows::Media::MediaProperties::MediaPropertySet;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.MediaProperties.MediaPropertySet"; }
};

template <> struct traits<Windows::Media::MediaProperties::MediaRatio>
{
    using abi = ABI::Windows::Media::MediaProperties::MediaRatio;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.MediaProperties.MediaRatio"; }
};

template <> struct traits<Windows::Media::MediaProperties::Mpeg2ProfileIds>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.MediaProperties.Mpeg2ProfileIds"; }
};

template <> struct traits<Windows::Media::MediaProperties::VideoEncodingProperties>
{
    using abi = ABI::Windows::Media::MediaProperties::VideoEncodingProperties;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Media.MediaProperties.VideoEncodingProperties"; }
};

}

}
