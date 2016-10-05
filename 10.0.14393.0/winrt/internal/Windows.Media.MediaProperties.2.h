// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Media.MediaProperties.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_5ee3189c_7dbf_5998_ad07_5414fb82567c
#define WINRT_GENERIC_5ee3189c_7dbf_5998_ad07_5414fb82567c
template <> struct __declspec(uuid("5ee3189c-7dbf-5998-ad07-5414fb82567c")) __declspec(novtable) IMap<GUID, Windows::IInspectable> : impl_IMap<GUID, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_3bda1540_d089_5a1a_8f0d_94eba8068e58
#define WINRT_GENERIC_3bda1540_d089_5a1a_8f0d_94eba8068e58
template <> struct __declspec(uuid("3bda1540-d089-5a1a-8f0d-94eba8068e58")) __declspec(novtable) IKeyValuePair<GUID, Windows::IInspectable> : impl_IKeyValuePair<GUID, Windows::IInspectable> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_d4f86f16_c6cf_57c8_9743_5ec20c31ab79
#define WINRT_GENERIC_d4f86f16_c6cf_57c8_9743_5ec20c31ab79
template <> struct __declspec(uuid("d4f86f16-c6cf-57c8-9743-5ec20c31ab79")) __declspec(novtable) IAsyncOperation<Windows::Media::MediaProperties::MediaEncodingProfile> : impl_IAsyncOperation<Windows::Media::MediaProperties::MediaEncodingProfile> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_e4d2c732_bbc1_5ef4_869f_5007ceb55f6e
#define WINRT_GENERIC_e4d2c732_bbc1_5ef4_869f_5007ceb55f6e
template <> struct __declspec(uuid("e4d2c732-bbc1-5ef4-869f-5007ceb55f6e")) __declspec(novtable) IMapView<GUID, Windows::IInspectable> : impl_IMapView<GUID, Windows::IInspectable> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_37296fc1_86da_58a0_90c0_c807bd94395e
#define WINRT_GENERIC_37296fc1_86da_58a0_90c0_c807bd94395e
template <> struct __declspec(uuid("37296fc1-86da-58a0-90c0-c807bd94395e")) __declspec(novtable) AsyncOperationCompletedHandler<Windows::Media::MediaProperties::MediaEncodingProfile> : impl_AsyncOperationCompletedHandler<Windows::Media::MediaProperties::MediaEncodingProfile> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_f3b20528_e3b3_5331_b2d0_0c2623aee785
#define WINRT_GENERIC_f3b20528_e3b3_5331_b2d0_0c2623aee785
template <> struct __declspec(uuid("f3b20528-e3b3-5331-b2d0-0c2623aee785")) __declspec(novtable) IIterable<Windows::Foundation::Collections::IKeyValuePair<GUID, Windows::IInspectable>> : impl_IIterable<Windows::Foundation::Collections::IKeyValuePair<GUID, Windows::IInspectable>> {};
#endif

#ifndef WINRT_GENERIC_4f25059a_0b9a_5f25_9b9e_4b9f1d22ff65
#define WINRT_GENERIC_4f25059a_0b9a_5f25_9b9e_4b9f1d22ff65
template <> struct __declspec(uuid("4f25059a-0b9a-5f25-9b9e-4b9f1d22ff65")) __declspec(novtable) IIterator<Windows::Foundation::Collections::IKeyValuePair<GUID, Windows::IInspectable>> : impl_IIterator<Windows::Foundation::Collections::IKeyValuePair<GUID, Windows::IInspectable>> {};
#endif


}

namespace Windows::Media::MediaProperties {

template <typename D>
struct WINRT_EBO impl_IAudioEncodingProperties
{
    void Bitrate(uint32_t value) const;
    uint32_t Bitrate() const;
    void ChannelCount(uint32_t value) const;
    uint32_t ChannelCount() const;
    void SampleRate(uint32_t value) const;
    uint32_t SampleRate() const;
    void BitsPerSample(uint32_t value) const;
    uint32_t BitsPerSample() const;
};

template <typename D>
struct WINRT_EBO impl_IAudioEncodingPropertiesStatics
{
    Windows::Media::MediaProperties::AudioEncodingProperties CreateAac(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate) const;
    Windows::Media::MediaProperties::AudioEncodingProperties CreateAacAdts(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate) const;
    Windows::Media::MediaProperties::AudioEncodingProperties CreateMp3(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate) const;
    Windows::Media::MediaProperties::AudioEncodingProperties CreatePcm(uint32_t sampleRate, uint32_t channelCount, uint32_t bitsPerSample) const;
    Windows::Media::MediaProperties::AudioEncodingProperties CreateWma(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate) const;
};

template <typename D>
struct WINRT_EBO impl_IAudioEncodingPropertiesWithFormatUserData
{
    void SetFormatUserData(array_ref<const uint8_t> value) const;
    void GetFormatUserData(com_array<uint8_t> & value) const;
};

template <typename D>
struct WINRT_EBO impl_IContainerEncodingProperties
{
};

template <typename D>
struct WINRT_EBO impl_IH264ProfileIdsStatics
{
    int32_t ConstrainedBaseline() const;
    int32_t Baseline() const;
    int32_t Extended() const;
    int32_t Main() const;
    int32_t High() const;
    int32_t High10() const;
    int32_t High422() const;
    int32_t High444() const;
    int32_t StereoHigh() const;
    int32_t MultiviewHigh() const;
};

template <typename D>
struct WINRT_EBO impl_IImageEncodingProperties
{
    void Width(uint32_t value) const;
    uint32_t Width() const;
    void Height(uint32_t value) const;
    uint32_t Height() const;
};

template <typename D>
struct WINRT_EBO impl_IImageEncodingPropertiesStatics
{
    Windows::Media::MediaProperties::ImageEncodingProperties CreateJpeg() const;
    Windows::Media::MediaProperties::ImageEncodingProperties CreatePng() const;
    Windows::Media::MediaProperties::ImageEncodingProperties CreateJpegXR() const;
};

template <typename D>
struct WINRT_EBO impl_IImageEncodingPropertiesStatics2
{
    Windows::Media::MediaProperties::ImageEncodingProperties CreateUncompressed(Windows::Media::MediaProperties::MediaPixelFormat format) const;
    Windows::Media::MediaProperties::ImageEncodingProperties CreateBmp() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaEncodingProfile
{
    void Audio(const Windows::Media::MediaProperties::AudioEncodingProperties & value) const;
    Windows::Media::MediaProperties::AudioEncodingProperties Audio() const;
    void Video(const Windows::Media::MediaProperties::VideoEncodingProperties & value) const;
    Windows::Media::MediaProperties::VideoEncodingProperties Video() const;
    void Container(const Windows::Media::MediaProperties::ContainerEncodingProperties & value) const;
    Windows::Media::MediaProperties::ContainerEncodingProperties Container() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaEncodingProfileStatics
{
    Windows::Media::MediaProperties::MediaEncodingProfile CreateM4a(Windows::Media::MediaProperties::AudioEncodingQuality quality) const;
    Windows::Media::MediaProperties::MediaEncodingProfile CreateMp3(Windows::Media::MediaProperties::AudioEncodingQuality quality) const;
    Windows::Media::MediaProperties::MediaEncodingProfile CreateWma(Windows::Media::MediaProperties::AudioEncodingQuality quality) const;
    Windows::Media::MediaProperties::MediaEncodingProfile CreateMp4(Windows::Media::MediaProperties::VideoEncodingQuality quality) const;
    Windows::Media::MediaProperties::MediaEncodingProfile CreateWmv(Windows::Media::MediaProperties::VideoEncodingQuality quality) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::MediaProperties::MediaEncodingProfile> CreateFromFileAsync(const Windows::Storage::IStorageFile & file) const;
    Windows::Foundation::IAsyncOperation<Windows::Media::MediaProperties::MediaEncodingProfile> CreateFromStreamAsync(const Windows::Storage::Streams::IRandomAccessStream & stream) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaEncodingProfileStatics2
{
    Windows::Media::MediaProperties::MediaEncodingProfile CreateWav(Windows::Media::MediaProperties::AudioEncodingQuality quality) const;
    Windows::Media::MediaProperties::MediaEncodingProfile CreateAvi(Windows::Media::MediaProperties::VideoEncodingQuality quality) const;
};

template <typename D>
struct WINRT_EBO impl_IMediaEncodingProperties
{
    Windows::Media::MediaProperties::MediaPropertySet Properties() const;
    hstring Type() const;
    void Subtype(hstring_ref value) const;
    hstring Subtype() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaEncodingSubtypesStatics
{
    hstring Aac() const;
    hstring AacAdts() const;
    hstring Ac3() const;
    hstring AmrNb() const;
    hstring AmrWb() const;
    hstring Argb32() const;
    hstring Asf() const;
    hstring Avi() const;
    hstring Bgra8() const;
    hstring Bmp() const;
    hstring Eac3() const;
    hstring Float() const;
    hstring Gif() const;
    hstring H263() const;
    hstring H264() const;
    hstring H264Es() const;
    hstring Hevc() const;
    hstring HevcEs() const;
    hstring Iyuv() const;
    hstring Jpeg() const;
    hstring JpegXr() const;
    hstring Mjpg() const;
    hstring Mpeg() const;
    hstring Mpeg1() const;
    hstring Mpeg2() const;
    hstring Mp3() const;
    hstring Mpeg4() const;
    hstring Nv12() const;
    hstring Pcm() const;
    hstring Png() const;
    hstring Rgb24() const;
    hstring Rgb32() const;
    hstring Tiff() const;
    hstring Wave() const;
    hstring Wma8() const;
    hstring Wma9() const;
    hstring Wmv3() const;
    hstring Wvc1() const;
    hstring Yuy2() const;
    hstring Yv12() const;
};

template <typename D>
struct WINRT_EBO impl_IMediaRatio
{
    void Numerator(uint32_t value) const;
    uint32_t Numerator() const;
    void Denominator(uint32_t value) const;
    uint32_t Denominator() const;
};

template <typename D>
struct WINRT_EBO impl_IMpeg2ProfileIdsStatics
{
    int32_t Simple() const;
    int32_t Main() const;
    int32_t SignalNoiseRatioScalable() const;
    int32_t SpatiallyScalable() const;
    int32_t High() const;
};

template <typename D>
struct WINRT_EBO impl_IVideoEncodingProperties
{
    void Bitrate(uint32_t value) const;
    uint32_t Bitrate() const;
    void Width(uint32_t value) const;
    uint32_t Width() const;
    void Height(uint32_t value) const;
    uint32_t Height() const;
    Windows::Media::MediaProperties::MediaRatio FrameRate() const;
    Windows::Media::MediaProperties::MediaRatio PixelAspectRatio() const;
};

template <typename D>
struct WINRT_EBO impl_IVideoEncodingProperties2
{
    void SetFormatUserData(array_ref<const uint8_t> value) const;
    void GetFormatUserData(com_array<uint8_t> & value) const;
    void ProfileId(int32_t value) const;
    int32_t ProfileId() const;
};

template <typename D>
struct WINRT_EBO impl_IVideoEncodingProperties3
{
    Windows::Media::MediaProperties::StereoscopicVideoPackingMode StereoscopicVideoPackingMode() const;
};

template <typename D>
struct WINRT_EBO impl_IVideoEncodingPropertiesStatics
{
    Windows::Media::MediaProperties::VideoEncodingProperties CreateH264() const;
    Windows::Media::MediaProperties::VideoEncodingProperties CreateMpeg2() const;
    Windows::Media::MediaProperties::VideoEncodingProperties CreateUncompressed(hstring_ref subtype, uint32_t width, uint32_t height) const;
};

struct IAudioEncodingProperties :
    Windows::IInspectable,
    impl::consume<IAudioEncodingProperties>,
    impl::require<IAudioEncodingProperties, Windows::Media::MediaProperties::IMediaEncodingProperties>
{
    IAudioEncodingProperties(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioEncodingProperties>(m_ptr); }
};

struct IAudioEncodingPropertiesStatics :
    Windows::IInspectable,
    impl::consume<IAudioEncodingPropertiesStatics>
{
    IAudioEncodingPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioEncodingPropertiesStatics>(m_ptr); }
};

struct IAudioEncodingPropertiesWithFormatUserData :
    Windows::IInspectable,
    impl::consume<IAudioEncodingPropertiesWithFormatUserData>
{
    IAudioEncodingPropertiesWithFormatUserData(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IAudioEncodingPropertiesWithFormatUserData>(m_ptr); }
};

struct IContainerEncodingProperties :
    Windows::IInspectable,
    impl::consume<IContainerEncodingProperties>,
    impl::require<IContainerEncodingProperties, Windows::Media::MediaProperties::IMediaEncodingProperties>
{
    IContainerEncodingProperties(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IContainerEncodingProperties>(m_ptr); }
};

struct IH264ProfileIdsStatics :
    Windows::IInspectable,
    impl::consume<IH264ProfileIdsStatics>
{
    IH264ProfileIdsStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IH264ProfileIdsStatics>(m_ptr); }
};

struct IImageEncodingProperties :
    Windows::IInspectable,
    impl::consume<IImageEncodingProperties>,
    impl::require<IImageEncodingProperties, Windows::Media::MediaProperties::IMediaEncodingProperties>
{
    IImageEncodingProperties(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IImageEncodingProperties>(m_ptr); }
};

struct IImageEncodingPropertiesStatics :
    Windows::IInspectable,
    impl::consume<IImageEncodingPropertiesStatics>
{
    IImageEncodingPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IImageEncodingPropertiesStatics>(m_ptr); }
};

struct IImageEncodingPropertiesStatics2 :
    Windows::IInspectable,
    impl::consume<IImageEncodingPropertiesStatics2>
{
    IImageEncodingPropertiesStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IImageEncodingPropertiesStatics2>(m_ptr); }
};

struct IMediaEncodingProfile :
    Windows::IInspectable,
    impl::consume<IMediaEncodingProfile>
{
    IMediaEncodingProfile(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaEncodingProfile>(m_ptr); }
};

struct IMediaEncodingProfileStatics :
    Windows::IInspectable,
    impl::consume<IMediaEncodingProfileStatics>
{
    IMediaEncodingProfileStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaEncodingProfileStatics>(m_ptr); }
};

struct IMediaEncodingProfileStatics2 :
    Windows::IInspectable,
    impl::consume<IMediaEncodingProfileStatics2>
{
    IMediaEncodingProfileStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaEncodingProfileStatics2>(m_ptr); }
};

struct IMediaEncodingProperties :
    Windows::IInspectable,
    impl::consume<IMediaEncodingProperties>
{
    IMediaEncodingProperties(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaEncodingProperties>(m_ptr); }
};

struct IMediaEncodingSubtypesStatics :
    Windows::IInspectable,
    impl::consume<IMediaEncodingSubtypesStatics>
{
    IMediaEncodingSubtypesStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaEncodingSubtypesStatics>(m_ptr); }
};

struct IMediaRatio :
    Windows::IInspectable,
    impl::consume<IMediaRatio>
{
    IMediaRatio(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMediaRatio>(m_ptr); }
};

struct IMpeg2ProfileIdsStatics :
    Windows::IInspectable,
    impl::consume<IMpeg2ProfileIdsStatics>
{
    IMpeg2ProfileIdsStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IMpeg2ProfileIdsStatics>(m_ptr); }
};

struct IVideoEncodingProperties :
    Windows::IInspectable,
    impl::consume<IVideoEncodingProperties>,
    impl::require<IVideoEncodingProperties, Windows::Media::MediaProperties::IMediaEncodingProperties>
{
    IVideoEncodingProperties(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVideoEncodingProperties>(m_ptr); }
};

struct IVideoEncodingProperties2 :
    Windows::IInspectable,
    impl::consume<IVideoEncodingProperties2>
{
    IVideoEncodingProperties2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVideoEncodingProperties2>(m_ptr); }
};

struct IVideoEncodingProperties3 :
    Windows::IInspectable,
    impl::consume<IVideoEncodingProperties3>
{
    IVideoEncodingProperties3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVideoEncodingProperties3>(m_ptr); }
};

struct IVideoEncodingPropertiesStatics :
    Windows::IInspectable,
    impl::consume<IVideoEncodingPropertiesStatics>
{
    IVideoEncodingPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IVideoEncodingPropertiesStatics>(m_ptr); }
};

}

}
