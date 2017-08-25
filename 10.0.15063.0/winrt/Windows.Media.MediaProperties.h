// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Media.MediaProperties.2.h"
#include "winrt/Windows.Media.h"

namespace winrt::impl {

template <typename D> void consume_Windows_Media_MediaProperties_IAudioEncodingProperties<D>::Bitrate(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IAudioEncodingProperties)->put_Bitrate(value));
}

template <typename D> uint32_t consume_Windows_Media_MediaProperties_IAudioEncodingProperties<D>::Bitrate() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IAudioEncodingProperties)->get_Bitrate(&value));
    return value;
}

template <typename D> void consume_Windows_Media_MediaProperties_IAudioEncodingProperties<D>::ChannelCount(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IAudioEncodingProperties)->put_ChannelCount(value));
}

template <typename D> uint32_t consume_Windows_Media_MediaProperties_IAudioEncodingProperties<D>::ChannelCount() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IAudioEncodingProperties)->get_ChannelCount(&value));
    return value;
}

template <typename D> void consume_Windows_Media_MediaProperties_IAudioEncodingProperties<D>::SampleRate(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IAudioEncodingProperties)->put_SampleRate(value));
}

template <typename D> uint32_t consume_Windows_Media_MediaProperties_IAudioEncodingProperties<D>::SampleRate() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IAudioEncodingProperties)->get_SampleRate(&value));
    return value;
}

template <typename D> void consume_Windows_Media_MediaProperties_IAudioEncodingProperties<D>::BitsPerSample(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IAudioEncodingProperties)->put_BitsPerSample(value));
}

template <typename D> uint32_t consume_Windows_Media_MediaProperties_IAudioEncodingProperties<D>::BitsPerSample() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IAudioEncodingProperties)->get_BitsPerSample(&value));
    return value;
}

template <typename D> bool consume_Windows_Media_MediaProperties_IAudioEncodingProperties2<D>::IsSpatial() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IAudioEncodingProperties2)->get_IsSpatial(&value));
    return value;
}

template <typename D> Windows::Media::MediaProperties::AudioEncodingProperties consume_Windows_Media_MediaProperties_IAudioEncodingPropertiesStatics<D>::CreateAac(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate) const
{
    Windows::Media::MediaProperties::AudioEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics)->CreateAac(sampleRate, channelCount, bitrate, put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::AudioEncodingProperties consume_Windows_Media_MediaProperties_IAudioEncodingPropertiesStatics<D>::CreateAacAdts(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate) const
{
    Windows::Media::MediaProperties::AudioEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics)->CreateAacAdts(sampleRate, channelCount, bitrate, put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::AudioEncodingProperties consume_Windows_Media_MediaProperties_IAudioEncodingPropertiesStatics<D>::CreateMp3(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate) const
{
    Windows::Media::MediaProperties::AudioEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics)->CreateMp3(sampleRate, channelCount, bitrate, put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::AudioEncodingProperties consume_Windows_Media_MediaProperties_IAudioEncodingPropertiesStatics<D>::CreatePcm(uint32_t sampleRate, uint32_t channelCount, uint32_t bitsPerSample) const
{
    Windows::Media::MediaProperties::AudioEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics)->CreatePcm(sampleRate, channelCount, bitsPerSample, put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::AudioEncodingProperties consume_Windows_Media_MediaProperties_IAudioEncodingPropertiesStatics<D>::CreateWma(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate) const
{
    Windows::Media::MediaProperties::AudioEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics)->CreateWma(sampleRate, channelCount, bitrate, put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::AudioEncodingProperties consume_Windows_Media_MediaProperties_IAudioEncodingPropertiesStatics2<D>::CreateAlac(uint32_t sampleRate, uint32_t channelCount, uint32_t bitsPerSample) const
{
    Windows::Media::MediaProperties::AudioEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics2)->CreateAlac(sampleRate, channelCount, bitsPerSample, put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::AudioEncodingProperties consume_Windows_Media_MediaProperties_IAudioEncodingPropertiesStatics2<D>::CreateFlac(uint32_t sampleRate, uint32_t channelCount, uint32_t bitsPerSample) const
{
    Windows::Media::MediaProperties::AudioEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics2)->CreateFlac(sampleRate, channelCount, bitsPerSample, put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_MediaProperties_IAudioEncodingPropertiesWithFormatUserData<D>::SetFormatUserData(array_view<uint8_t const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IAudioEncodingPropertiesWithFormatUserData)->SetFormatUserData(value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Media_MediaProperties_IAudioEncodingPropertiesWithFormatUserData<D>::GetFormatUserData(com_array<uint8_t>& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IAudioEncodingPropertiesWithFormatUserData)->GetFormatUserData(impl::put_size_abi(value), put_abi(value)));
}

template <typename D> int32_t consume_Windows_Media_MediaProperties_IH264ProfileIdsStatics<D>::ConstrainedBaseline() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IH264ProfileIdsStatics)->get_ConstrainedBaseline(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Media_MediaProperties_IH264ProfileIdsStatics<D>::Baseline() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IH264ProfileIdsStatics)->get_Baseline(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Media_MediaProperties_IH264ProfileIdsStatics<D>::Extended() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IH264ProfileIdsStatics)->get_Extended(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Media_MediaProperties_IH264ProfileIdsStatics<D>::Main() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IH264ProfileIdsStatics)->get_Main(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Media_MediaProperties_IH264ProfileIdsStatics<D>::High() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IH264ProfileIdsStatics)->get_High(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Media_MediaProperties_IH264ProfileIdsStatics<D>::High10() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IH264ProfileIdsStatics)->get_High10(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Media_MediaProperties_IH264ProfileIdsStatics<D>::High422() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IH264ProfileIdsStatics)->get_High422(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Media_MediaProperties_IH264ProfileIdsStatics<D>::High444() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IH264ProfileIdsStatics)->get_High444(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Media_MediaProperties_IH264ProfileIdsStatics<D>::StereoHigh() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IH264ProfileIdsStatics)->get_StereoHigh(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Media_MediaProperties_IH264ProfileIdsStatics<D>::MultiviewHigh() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IH264ProfileIdsStatics)->get_MultiviewHigh(&value));
    return value;
}

template <typename D> void consume_Windows_Media_MediaProperties_IImageEncodingProperties<D>::Width(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IImageEncodingProperties)->put_Width(value));
}

template <typename D> uint32_t consume_Windows_Media_MediaProperties_IImageEncodingProperties<D>::Width() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IImageEncodingProperties)->get_Width(&value));
    return value;
}

template <typename D> void consume_Windows_Media_MediaProperties_IImageEncodingProperties<D>::Height(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IImageEncodingProperties)->put_Height(value));
}

template <typename D> uint32_t consume_Windows_Media_MediaProperties_IImageEncodingProperties<D>::Height() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IImageEncodingProperties)->get_Height(&value));
    return value;
}

template <typename D> Windows::Media::MediaProperties::ImageEncodingProperties consume_Windows_Media_MediaProperties_IImageEncodingPropertiesStatics<D>::CreateJpeg() const
{
    Windows::Media::MediaProperties::ImageEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IImageEncodingPropertiesStatics)->CreateJpeg(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::ImageEncodingProperties consume_Windows_Media_MediaProperties_IImageEncodingPropertiesStatics<D>::CreatePng() const
{
    Windows::Media::MediaProperties::ImageEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IImageEncodingPropertiesStatics)->CreatePng(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::ImageEncodingProperties consume_Windows_Media_MediaProperties_IImageEncodingPropertiesStatics<D>::CreateJpegXR() const
{
    Windows::Media::MediaProperties::ImageEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IImageEncodingPropertiesStatics)->CreateJpegXR(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::ImageEncodingProperties consume_Windows_Media_MediaProperties_IImageEncodingPropertiesStatics2<D>::CreateUncompressed(Windows::Media::MediaProperties::MediaPixelFormat const& format) const
{
    Windows::Media::MediaProperties::ImageEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IImageEncodingPropertiesStatics2)->CreateUncompressed(get_abi(format), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::ImageEncodingProperties consume_Windows_Media_MediaProperties_IImageEncodingPropertiesStatics2<D>::CreateBmp() const
{
    Windows::Media::MediaProperties::ImageEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IImageEncodingPropertiesStatics2)->CreateBmp(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_MediaProperties_IMediaEncodingProfile<D>::Audio(Windows::Media::MediaProperties::AudioEncodingProperties const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingProfile)->put_Audio(get_abi(value)));
}

template <typename D> Windows::Media::MediaProperties::AudioEncodingProperties consume_Windows_Media_MediaProperties_IMediaEncodingProfile<D>::Audio() const
{
    Windows::Media::MediaProperties::AudioEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingProfile)->get_Audio(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_MediaProperties_IMediaEncodingProfile<D>::Video(Windows::Media::MediaProperties::VideoEncodingProperties const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingProfile)->put_Video(get_abi(value)));
}

template <typename D> Windows::Media::MediaProperties::VideoEncodingProperties consume_Windows_Media_MediaProperties_IMediaEncodingProfile<D>::Video() const
{
    Windows::Media::MediaProperties::VideoEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingProfile)->get_Video(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_MediaProperties_IMediaEncodingProfile<D>::Container(Windows::Media::MediaProperties::ContainerEncodingProperties const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingProfile)->put_Container(get_abi(value)));
}

template <typename D> Windows::Media::MediaProperties::ContainerEncodingProperties consume_Windows_Media_MediaProperties_IMediaEncodingProfile<D>::Container() const
{
    Windows::Media::MediaProperties::ContainerEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingProfile)->get_Container(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaEncodingProfile consume_Windows_Media_MediaProperties_IMediaEncodingProfileStatics<D>::CreateM4a(Windows::Media::MediaProperties::AudioEncodingQuality const& quality) const
{
    Windows::Media::MediaProperties::MediaEncodingProfile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingProfileStatics)->CreateM4a(get_abi(quality), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaEncodingProfile consume_Windows_Media_MediaProperties_IMediaEncodingProfileStatics<D>::CreateMp3(Windows::Media::MediaProperties::AudioEncodingQuality const& quality) const
{
    Windows::Media::MediaProperties::MediaEncodingProfile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingProfileStatics)->CreateMp3(get_abi(quality), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaEncodingProfile consume_Windows_Media_MediaProperties_IMediaEncodingProfileStatics<D>::CreateWma(Windows::Media::MediaProperties::AudioEncodingQuality const& quality) const
{
    Windows::Media::MediaProperties::MediaEncodingProfile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingProfileStatics)->CreateWma(get_abi(quality), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaEncodingProfile consume_Windows_Media_MediaProperties_IMediaEncodingProfileStatics<D>::CreateMp4(Windows::Media::MediaProperties::VideoEncodingQuality const& quality) const
{
    Windows::Media::MediaProperties::MediaEncodingProfile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingProfileStatics)->CreateMp4(get_abi(quality), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaEncodingProfile consume_Windows_Media_MediaProperties_IMediaEncodingProfileStatics<D>::CreateWmv(Windows::Media::MediaProperties::VideoEncodingQuality const& quality) const
{
    Windows::Media::MediaProperties::MediaEncodingProfile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingProfileStatics)->CreateWmv(get_abi(quality), put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::MediaProperties::MediaEncodingProfile> consume_Windows_Media_MediaProperties_IMediaEncodingProfileStatics<D>::CreateFromFileAsync(Windows::Storage::IStorageFile const& file) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::MediaProperties::MediaEncodingProfile> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingProfileStatics)->CreateFromFileAsync(get_abi(file), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Media::MediaProperties::MediaEncodingProfile> consume_Windows_Media_MediaProperties_IMediaEncodingProfileStatics<D>::CreateFromStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& stream) const
{
    Windows::Foundation::IAsyncOperation<Windows::Media::MediaProperties::MediaEncodingProfile> operation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingProfileStatics)->CreateFromStreamAsync(get_abi(stream), put_abi(operation)));
    return operation;
}

template <typename D> Windows::Media::MediaProperties::MediaEncodingProfile consume_Windows_Media_MediaProperties_IMediaEncodingProfileStatics2<D>::CreateWav(Windows::Media::MediaProperties::AudioEncodingQuality const& quality) const
{
    Windows::Media::MediaProperties::MediaEncodingProfile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingProfileStatics2)->CreateWav(get_abi(quality), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaEncodingProfile consume_Windows_Media_MediaProperties_IMediaEncodingProfileStatics2<D>::CreateAvi(Windows::Media::MediaProperties::VideoEncodingQuality const& quality) const
{
    Windows::Media::MediaProperties::MediaEncodingProfile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingProfileStatics2)->CreateAvi(get_abi(quality), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaEncodingProfile consume_Windows_Media_MediaProperties_IMediaEncodingProfileStatics3<D>::CreateAlac(Windows::Media::MediaProperties::AudioEncodingQuality const& quality) const
{
    Windows::Media::MediaProperties::MediaEncodingProfile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingProfileStatics3)->CreateAlac(get_abi(quality), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaEncodingProfile consume_Windows_Media_MediaProperties_IMediaEncodingProfileStatics3<D>::CreateFlac(Windows::Media::MediaProperties::AudioEncodingQuality const& quality) const
{
    Windows::Media::MediaProperties::MediaEncodingProfile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingProfileStatics3)->CreateFlac(get_abi(quality), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaEncodingProfile consume_Windows_Media_MediaProperties_IMediaEncodingProfileStatics3<D>::CreateHevc(Windows::Media::MediaProperties::VideoEncodingQuality const& quality) const
{
    Windows::Media::MediaProperties::MediaEncodingProfile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingProfileStatics3)->CreateHevc(get_abi(quality), put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaPropertySet consume_Windows_Media_MediaProperties_IMediaEncodingProperties<D>::Properties() const
{
    Windows::Media::MediaProperties::MediaPropertySet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingProperties)->get_Properties(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingProperties<D>::Type() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingProperties)->get_Type(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_MediaProperties_IMediaEncodingProperties<D>::Subtype(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingProperties)->put_Subtype(get_abi(value)));
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingProperties<D>::Subtype() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingProperties)->get_Subtype(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::Aac() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_Aac(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::AacAdts() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_AacAdts(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::Ac3() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_Ac3(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::AmrNb() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_AmrNb(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::AmrWb() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_AmrWb(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::Argb32() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_Argb32(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::Asf() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_Asf(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::Avi() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_Avi(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::Bgra8() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_Bgra8(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::Bmp() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_Bmp(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::Eac3() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_Eac3(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::Float() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_Float(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::Gif() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_Gif(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::H263() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_H263(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::H264() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_H264(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::H264Es() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_H264Es(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::Hevc() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_Hevc(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::HevcEs() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_HevcEs(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::Iyuv() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_Iyuv(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::Jpeg() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_Jpeg(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::JpegXr() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_JpegXr(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::Mjpg() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_Mjpg(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::Mpeg() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_Mpeg(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::Mpeg1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_Mpeg1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::Mpeg2() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_Mpeg2(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::Mp3() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_Mp3(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::Mpeg4() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_Mpeg4(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::Nv12() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_Nv12(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::Pcm() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_Pcm(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::Png() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_Png(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::Rgb24() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_Rgb24(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::Rgb32() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_Rgb32(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::Tiff() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_Tiff(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::Wave() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_Wave(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::Wma8() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_Wma8(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::Wma9() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_Wma9(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::Wmv3() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_Wmv3(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::Wvc1() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_Wvc1(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::Yuy2() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_Yuy2(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics<D>::Yv12() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics)->get_Yv12(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics2<D>::Vp9() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics2)->get_Vp9(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics2<D>::L8() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics2)->get_L8(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics2<D>::L16() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics2)->get_L16(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics2<D>::D16() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics2)->get_D16(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics3<D>::Alac() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics3)->get_Alac(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics3<D>::Flac() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics3)->get_Flac(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_MediaProperties_IMediaRatio<D>::Numerator(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaRatio)->put_Numerator(value));
}

template <typename D> uint32_t consume_Windows_Media_MediaProperties_IMediaRatio<D>::Numerator() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaRatio)->get_Numerator(&value));
    return value;
}

template <typename D> void consume_Windows_Media_MediaProperties_IMediaRatio<D>::Denominator(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaRatio)->put_Denominator(value));
}

template <typename D> uint32_t consume_Windows_Media_MediaProperties_IMediaRatio<D>::Denominator() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMediaRatio)->get_Denominator(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Media_MediaProperties_IMpeg2ProfileIdsStatics<D>::Simple() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMpeg2ProfileIdsStatics)->get_Simple(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Media_MediaProperties_IMpeg2ProfileIdsStatics<D>::Main() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMpeg2ProfileIdsStatics)->get_Main(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Media_MediaProperties_IMpeg2ProfileIdsStatics<D>::SignalNoiseRatioScalable() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMpeg2ProfileIdsStatics)->get_SignalNoiseRatioScalable(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Media_MediaProperties_IMpeg2ProfileIdsStatics<D>::SpatiallyScalable() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMpeg2ProfileIdsStatics)->get_SpatiallyScalable(&value));
    return value;
}

template <typename D> int32_t consume_Windows_Media_MediaProperties_IMpeg2ProfileIdsStatics<D>::High() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IMpeg2ProfileIdsStatics)->get_High(&value));
    return value;
}

template <typename D> void consume_Windows_Media_MediaProperties_IVideoEncodingProperties<D>::Bitrate(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IVideoEncodingProperties)->put_Bitrate(value));
}

template <typename D> uint32_t consume_Windows_Media_MediaProperties_IVideoEncodingProperties<D>::Bitrate() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IVideoEncodingProperties)->get_Bitrate(&value));
    return value;
}

template <typename D> void consume_Windows_Media_MediaProperties_IVideoEncodingProperties<D>::Width(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IVideoEncodingProperties)->put_Width(value));
}

template <typename D> uint32_t consume_Windows_Media_MediaProperties_IVideoEncodingProperties<D>::Width() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IVideoEncodingProperties)->get_Width(&value));
    return value;
}

template <typename D> void consume_Windows_Media_MediaProperties_IVideoEncodingProperties<D>::Height(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IVideoEncodingProperties)->put_Height(value));
}

template <typename D> uint32_t consume_Windows_Media_MediaProperties_IVideoEncodingProperties<D>::Height() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IVideoEncodingProperties)->get_Height(&value));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaRatio consume_Windows_Media_MediaProperties_IVideoEncodingProperties<D>::FrameRate() const
{
    Windows::Media::MediaProperties::MediaRatio value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IVideoEncodingProperties)->get_FrameRate(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::MediaRatio consume_Windows_Media_MediaProperties_IVideoEncodingProperties<D>::PixelAspectRatio() const
{
    Windows::Media::MediaProperties::MediaRatio value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IVideoEncodingProperties)->get_PixelAspectRatio(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Media_MediaProperties_IVideoEncodingProperties2<D>::SetFormatUserData(array_view<uint8_t const> value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IVideoEncodingProperties2)->SetFormatUserData(value.size(), get_abi(value)));
}

template <typename D> void consume_Windows_Media_MediaProperties_IVideoEncodingProperties2<D>::GetFormatUserData(com_array<uint8_t>& value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IVideoEncodingProperties2)->GetFormatUserData(impl::put_size_abi(value), put_abi(value)));
}

template <typename D> void consume_Windows_Media_MediaProperties_IVideoEncodingProperties2<D>::ProfileId(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IVideoEncodingProperties2)->put_ProfileId(value));
}

template <typename D> int32_t consume_Windows_Media_MediaProperties_IVideoEncodingProperties2<D>::ProfileId() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IVideoEncodingProperties2)->get_ProfileId(&value));
    return value;
}

template <typename D> Windows::Media::MediaProperties::StereoscopicVideoPackingMode consume_Windows_Media_MediaProperties_IVideoEncodingProperties3<D>::StereoscopicVideoPackingMode() const
{
    Windows::Media::MediaProperties::StereoscopicVideoPackingMode value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IVideoEncodingProperties3)->get_StereoscopicVideoPackingMode(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::SphericalVideoFrameFormat consume_Windows_Media_MediaProperties_IVideoEncodingProperties4<D>::SphericalVideoFrameFormat() const
{
    Windows::Media::MediaProperties::SphericalVideoFrameFormat value{};
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IVideoEncodingProperties4)->get_SphericalVideoFrameFormat(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::VideoEncodingProperties consume_Windows_Media_MediaProperties_IVideoEncodingPropertiesStatics<D>::CreateH264() const
{
    Windows::Media::MediaProperties::VideoEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics)->CreateH264(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::VideoEncodingProperties consume_Windows_Media_MediaProperties_IVideoEncodingPropertiesStatics<D>::CreateMpeg2() const
{
    Windows::Media::MediaProperties::VideoEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics)->CreateMpeg2(put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::VideoEncodingProperties consume_Windows_Media_MediaProperties_IVideoEncodingPropertiesStatics<D>::CreateUncompressed(param::hstring const& subtype, uint32_t width, uint32_t height) const
{
    Windows::Media::MediaProperties::VideoEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics)->CreateUncompressed(get_abi(subtype), width, height, put_abi(value)));
    return value;
}

template <typename D> Windows::Media::MediaProperties::VideoEncodingProperties consume_Windows_Media_MediaProperties_IVideoEncodingPropertiesStatics2<D>::CreateHevc() const
{
    Windows::Media::MediaProperties::VideoEncodingProperties value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics2)->CreateHevc(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Media::MediaProperties::IAudioEncodingProperties> : produce_base<D, Windows::Media::MediaProperties::IAudioEncodingProperties>
{
    HRESULT __stdcall put_Bitrate(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Bitrate(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bitrate(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Bitrate());
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
            typename D::abi_guard guard(this->shim());
            this->shim().ChannelCount(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ChannelCount(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ChannelCount());
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
            typename D::abi_guard guard(this->shim());
            this->shim().SampleRate(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SampleRate(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SampleRate());
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
            typename D::abi_guard guard(this->shim());
            this->shim().BitsPerSample(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BitsPerSample(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BitsPerSample());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::MediaProperties::IAudioEncodingProperties2> : produce_base<D, Windows::Media::MediaProperties::IAudioEncodingProperties2>
{
    HRESULT __stdcall get_IsSpatial(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsSpatial());
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
    HRESULT __stdcall CreateAac(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateAac(sampleRate, channelCount, bitrate));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateAacAdts(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateAacAdts(sampleRate, channelCount, bitrate));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateMp3(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateMp3(sampleRate, channelCount, bitrate));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreatePcm(uint32_t sampleRate, uint32_t channelCount, uint32_t bitsPerSample, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreatePcm(sampleRate, channelCount, bitsPerSample));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWma(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateWma(sampleRate, channelCount, bitrate));
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
struct produce<D, Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics2> : produce_base<D, Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics2>
{
    HRESULT __stdcall CreateAlac(uint32_t sampleRate, uint32_t channelCount, uint32_t bitsPerSample, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateAlac(sampleRate, channelCount, bitsPerSample));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFlac(uint32_t sampleRate, uint32_t channelCount, uint32_t bitsPerSample, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateFlac(sampleRate, channelCount, bitsPerSample));
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
    HRESULT __stdcall SetFormatUserData(uint32_t __valueSize, uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFormatUserData(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(value), reinterpret_cast<uint8_t const *>(value) + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFormatUserData(uint32_t* __valueSize, uint8_t** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetFormatUserData(detach_abi<uint8_t>(__valueSize, value));
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
    HRESULT __stdcall get_ConstrainedBaseline(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ConstrainedBaseline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Baseline(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Baseline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Extended(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Extended());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Main(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Main());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_High(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().High());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_High10(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().High10());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_High422(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().High422());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_High444(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().High444());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StereoHigh(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StereoHigh());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MultiviewHigh(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MultiviewHigh());
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
            typename D::abi_guard guard(this->shim());
            this->shim().Width(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Width(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Width());
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
            typename D::abi_guard guard(this->shim());
            this->shim().Height(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Height(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Height());
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
    HRESULT __stdcall CreateJpeg(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateJpeg());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreatePng(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreatePng());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateJpegXR(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateJpegXR());
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
    HRESULT __stdcall CreateUncompressed(abi_t<Windows::Media::MediaProperties::MediaPixelFormat> format, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateUncompressed(*reinterpret_cast<Windows::Media::MediaProperties::MediaPixelFormat const*>(&format)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateBmp(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateBmp());
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
    HRESULT __stdcall put_Audio(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Audio(*reinterpret_cast<Windows::Media::MediaProperties::AudioEncodingProperties const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Audio(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Audio());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Video(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Video(*reinterpret_cast<Windows::Media::MediaProperties::VideoEncodingProperties const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Video(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Video());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Container(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Container(*reinterpret_cast<Windows::Media::MediaProperties::ContainerEncodingProperties const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Container(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Container());
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
    HRESULT __stdcall CreateM4a(abi_t<Windows::Media::MediaProperties::AudioEncodingQuality> quality, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateM4a(*reinterpret_cast<Windows::Media::MediaProperties::AudioEncodingQuality const*>(&quality)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateMp3(abi_t<Windows::Media::MediaProperties::AudioEncodingQuality> quality, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateMp3(*reinterpret_cast<Windows::Media::MediaProperties::AudioEncodingQuality const*>(&quality)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWma(abi_t<Windows::Media::MediaProperties::AudioEncodingQuality> quality, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateWma(*reinterpret_cast<Windows::Media::MediaProperties::AudioEncodingQuality const*>(&quality)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateMp4(abi_t<Windows::Media::MediaProperties::VideoEncodingQuality> quality, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateMp4(*reinterpret_cast<Windows::Media::MediaProperties::VideoEncodingQuality const*>(&quality)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateWmv(abi_t<Windows::Media::MediaProperties::VideoEncodingQuality> quality, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateWmv(*reinterpret_cast<Windows::Media::MediaProperties::VideoEncodingQuality const*>(&quality)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromFileAsync(::IUnknown* file, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateFromFileAsync(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFromStreamAsync(::IUnknown* stream, ::IUnknown** operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().CreateFromStreamAsync(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&stream)));
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
    HRESULT __stdcall CreateWav(abi_t<Windows::Media::MediaProperties::AudioEncodingQuality> quality, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateWav(*reinterpret_cast<Windows::Media::MediaProperties::AudioEncodingQuality const*>(&quality)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateAvi(abi_t<Windows::Media::MediaProperties::VideoEncodingQuality> quality, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateAvi(*reinterpret_cast<Windows::Media::MediaProperties::VideoEncodingQuality const*>(&quality)));
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
struct produce<D, Windows::Media::MediaProperties::IMediaEncodingProfileStatics3> : produce_base<D, Windows::Media::MediaProperties::IMediaEncodingProfileStatics3>
{
    HRESULT __stdcall CreateAlac(abi_t<Windows::Media::MediaProperties::AudioEncodingQuality> quality, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateAlac(*reinterpret_cast<Windows::Media::MediaProperties::AudioEncodingQuality const*>(&quality)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateFlac(abi_t<Windows::Media::MediaProperties::AudioEncodingQuality> quality, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateFlac(*reinterpret_cast<Windows::Media::MediaProperties::AudioEncodingQuality const*>(&quality)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateHevc(abi_t<Windows::Media::MediaProperties::VideoEncodingQuality> quality, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateHevc(*reinterpret_cast<Windows::Media::MediaProperties::VideoEncodingQuality const*>(&quality)));
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
    HRESULT __stdcall get_Properties(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Properties());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Type(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Subtype(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Subtype(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Subtype(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Subtype());
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
    HRESULT __stdcall get_Aac(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Aac());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AacAdts(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AacAdts());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ac3(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Ac3());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AmrNb(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AmrNb());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AmrWb(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AmrWb());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Argb32(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Argb32());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Asf(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Asf());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Avi(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Avi());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bgra8(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Bgra8());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bmp(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Bmp());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Eac3(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Eac3());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Float(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Float());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Gif(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Gif());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_H263(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().H263());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_H264(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().H264());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_H264Es(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().H264Es());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Hevc(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Hevc());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HevcEs(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HevcEs());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Iyuv(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Iyuv());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Jpeg(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Jpeg());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_JpegXr(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().JpegXr());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mjpg(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mjpg());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mpeg(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mpeg());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mpeg1(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mpeg1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mpeg2(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mpeg2());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mp3(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mp3());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Mpeg4(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Mpeg4());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Nv12(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Nv12());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pcm(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Pcm());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Png(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Png());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Rgb24(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Rgb24());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Rgb32(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Rgb32());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tiff(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Tiff());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Wave(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Wave());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Wma8(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Wma8());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Wma9(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Wma9());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Wmv3(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Wmv3());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Wvc1(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Wvc1());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Yuy2(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Yuy2());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Yv12(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Yv12());
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
struct produce<D, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics2> : produce_base<D, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics2>
{
    HRESULT __stdcall get_Vp9(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Vp9());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_L8(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().L8());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_L16(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().L16());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_D16(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().D16());
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
struct produce<D, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics3> : produce_base<D, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics3>
{
    HRESULT __stdcall get_Alac(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Alac());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Flac(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Flac());
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
            typename D::abi_guard guard(this->shim());
            this->shim().Numerator(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Numerator(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Numerator());
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
            typename D::abi_guard guard(this->shim());
            this->shim().Denominator(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Denominator(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Denominator());
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
    HRESULT __stdcall get_Simple(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Simple());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Main(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Main());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SignalNoiseRatioScalable(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SignalNoiseRatioScalable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpatiallyScalable(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SpatiallyScalable());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_High(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().High());
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
            typename D::abi_guard guard(this->shim());
            this->shim().Bitrate(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bitrate(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Bitrate());
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
            typename D::abi_guard guard(this->shim());
            this->shim().Width(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Width(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Width());
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
            typename D::abi_guard guard(this->shim());
            this->shim().Height(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Height(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Height());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FrameRate(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FrameRate());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PixelAspectRatio(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PixelAspectRatio());
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
    HRESULT __stdcall SetFormatUserData(uint32_t __valueSize, uint8_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFormatUserData(array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(value), reinterpret_cast<uint8_t const *>(value) + __valueSize));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFormatUserData(uint32_t* __valueSize, uint8_t** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetFormatUserData(detach_abi<uint8_t>(__valueSize, value));
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
            typename D::abi_guard guard(this->shim());
            this->shim().ProfileId(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProfileId(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProfileId());
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
    HRESULT __stdcall get_StereoscopicVideoPackingMode(abi_t<Windows::Media::MediaProperties::StereoscopicVideoPackingMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StereoscopicVideoPackingMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Media::MediaProperties::IVideoEncodingProperties4> : produce_base<D, Windows::Media::MediaProperties::IVideoEncodingProperties4>
{
    HRESULT __stdcall get_SphericalVideoFrameFormat(abi_t<Windows::Media::MediaProperties::SphericalVideoFrameFormat>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SphericalVideoFrameFormat());
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
    HRESULT __stdcall CreateH264(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateH264());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateMpeg2(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateMpeg2());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CreateUncompressed(HSTRING subtype, uint32_t width, uint32_t height, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateUncompressed(*reinterpret_cast<hstring const*>(&subtype), width, height));
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
struct produce<D, Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics2> : produce_base<D, Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics2>
{
    HRESULT __stdcall CreateHevc(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CreateHevc());
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

WINRT_EXPORT namespace winrt::Windows::Media::MediaProperties {

inline AudioEncodingProperties::AudioEncodingProperties() :
    AudioEncodingProperties(activate_instance<AudioEncodingProperties>())
{}

inline Windows::Media::MediaProperties::AudioEncodingProperties AudioEncodingProperties::CreateAac(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate)
{
    return get_activation_factory<AudioEncodingProperties, Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics>().CreateAac(sampleRate, channelCount, bitrate);
}

inline Windows::Media::MediaProperties::AudioEncodingProperties AudioEncodingProperties::CreateAacAdts(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate)
{
    return get_activation_factory<AudioEncodingProperties, Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics>().CreateAacAdts(sampleRate, channelCount, bitrate);
}

inline Windows::Media::MediaProperties::AudioEncodingProperties AudioEncodingProperties::CreateMp3(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate)
{
    return get_activation_factory<AudioEncodingProperties, Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics>().CreateMp3(sampleRate, channelCount, bitrate);
}

inline Windows::Media::MediaProperties::AudioEncodingProperties AudioEncodingProperties::CreatePcm(uint32_t sampleRate, uint32_t channelCount, uint32_t bitsPerSample)
{
    return get_activation_factory<AudioEncodingProperties, Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics>().CreatePcm(sampleRate, channelCount, bitsPerSample);
}

inline Windows::Media::MediaProperties::AudioEncodingProperties AudioEncodingProperties::CreateWma(uint32_t sampleRate, uint32_t channelCount, uint32_t bitrate)
{
    return get_activation_factory<AudioEncodingProperties, Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics>().CreateWma(sampleRate, channelCount, bitrate);
}

inline Windows::Media::MediaProperties::AudioEncodingProperties AudioEncodingProperties::CreateAlac(uint32_t sampleRate, uint32_t channelCount, uint32_t bitsPerSample)
{
    return get_activation_factory<AudioEncodingProperties, Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics2>().CreateAlac(sampleRate, channelCount, bitsPerSample);
}

inline Windows::Media::MediaProperties::AudioEncodingProperties AudioEncodingProperties::CreateFlac(uint32_t sampleRate, uint32_t channelCount, uint32_t bitsPerSample)
{
    return get_activation_factory<AudioEncodingProperties, Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics2>().CreateFlac(sampleRate, channelCount, bitsPerSample);
}

inline ContainerEncodingProperties::ContainerEncodingProperties() :
    ContainerEncodingProperties(activate_instance<ContainerEncodingProperties>())
{}

inline int32_t H264ProfileIds::ConstrainedBaseline()
{
    return get_activation_factory<H264ProfileIds, Windows::Media::MediaProperties::IH264ProfileIdsStatics>().ConstrainedBaseline();
}

inline int32_t H264ProfileIds::Baseline()
{
    return get_activation_factory<H264ProfileIds, Windows::Media::MediaProperties::IH264ProfileIdsStatics>().Baseline();
}

inline int32_t H264ProfileIds::Extended()
{
    return get_activation_factory<H264ProfileIds, Windows::Media::MediaProperties::IH264ProfileIdsStatics>().Extended();
}

inline int32_t H264ProfileIds::Main()
{
    return get_activation_factory<H264ProfileIds, Windows::Media::MediaProperties::IH264ProfileIdsStatics>().Main();
}

inline int32_t H264ProfileIds::High()
{
    return get_activation_factory<H264ProfileIds, Windows::Media::MediaProperties::IH264ProfileIdsStatics>().High();
}

inline int32_t H264ProfileIds::High10()
{
    return get_activation_factory<H264ProfileIds, Windows::Media::MediaProperties::IH264ProfileIdsStatics>().High10();
}

inline int32_t H264ProfileIds::High422()
{
    return get_activation_factory<H264ProfileIds, Windows::Media::MediaProperties::IH264ProfileIdsStatics>().High422();
}

inline int32_t H264ProfileIds::High444()
{
    return get_activation_factory<H264ProfileIds, Windows::Media::MediaProperties::IH264ProfileIdsStatics>().High444();
}

inline int32_t H264ProfileIds::StereoHigh()
{
    return get_activation_factory<H264ProfileIds, Windows::Media::MediaProperties::IH264ProfileIdsStatics>().StereoHigh();
}

inline int32_t H264ProfileIds::MultiviewHigh()
{
    return get_activation_factory<H264ProfileIds, Windows::Media::MediaProperties::IH264ProfileIdsStatics>().MultiviewHigh();
}

inline ImageEncodingProperties::ImageEncodingProperties() :
    ImageEncodingProperties(activate_instance<ImageEncodingProperties>())
{}

inline Windows::Media::MediaProperties::ImageEncodingProperties ImageEncodingProperties::CreateJpeg()
{
    return get_activation_factory<ImageEncodingProperties, Windows::Media::MediaProperties::IImageEncodingPropertiesStatics>().CreateJpeg();
}

inline Windows::Media::MediaProperties::ImageEncodingProperties ImageEncodingProperties::CreatePng()
{
    return get_activation_factory<ImageEncodingProperties, Windows::Media::MediaProperties::IImageEncodingPropertiesStatics>().CreatePng();
}

inline Windows::Media::MediaProperties::ImageEncodingProperties ImageEncodingProperties::CreateJpegXR()
{
    return get_activation_factory<ImageEncodingProperties, Windows::Media::MediaProperties::IImageEncodingPropertiesStatics>().CreateJpegXR();
}

inline Windows::Media::MediaProperties::ImageEncodingProperties ImageEncodingProperties::CreateUncompressed(Windows::Media::MediaProperties::MediaPixelFormat const& format)
{
    return get_activation_factory<ImageEncodingProperties, Windows::Media::MediaProperties::IImageEncodingPropertiesStatics2>().CreateUncompressed(format);
}

inline Windows::Media::MediaProperties::ImageEncodingProperties ImageEncodingProperties::CreateBmp()
{
    return get_activation_factory<ImageEncodingProperties, Windows::Media::MediaProperties::IImageEncodingPropertiesStatics2>().CreateBmp();
}

inline MediaEncodingProfile::MediaEncodingProfile() :
    MediaEncodingProfile(activate_instance<MediaEncodingProfile>())
{}

inline Windows::Media::MediaProperties::MediaEncodingProfile MediaEncodingProfile::CreateM4a(Windows::Media::MediaProperties::AudioEncodingQuality const& quality)
{
    return get_activation_factory<MediaEncodingProfile, Windows::Media::MediaProperties::IMediaEncodingProfileStatics>().CreateM4a(quality);
}

inline Windows::Media::MediaProperties::MediaEncodingProfile MediaEncodingProfile::CreateMp3(Windows::Media::MediaProperties::AudioEncodingQuality const& quality)
{
    return get_activation_factory<MediaEncodingProfile, Windows::Media::MediaProperties::IMediaEncodingProfileStatics>().CreateMp3(quality);
}

inline Windows::Media::MediaProperties::MediaEncodingProfile MediaEncodingProfile::CreateWma(Windows::Media::MediaProperties::AudioEncodingQuality const& quality)
{
    return get_activation_factory<MediaEncodingProfile, Windows::Media::MediaProperties::IMediaEncodingProfileStatics>().CreateWma(quality);
}

inline Windows::Media::MediaProperties::MediaEncodingProfile MediaEncodingProfile::CreateMp4(Windows::Media::MediaProperties::VideoEncodingQuality const& quality)
{
    return get_activation_factory<MediaEncodingProfile, Windows::Media::MediaProperties::IMediaEncodingProfileStatics>().CreateMp4(quality);
}

inline Windows::Media::MediaProperties::MediaEncodingProfile MediaEncodingProfile::CreateWmv(Windows::Media::MediaProperties::VideoEncodingQuality const& quality)
{
    return get_activation_factory<MediaEncodingProfile, Windows::Media::MediaProperties::IMediaEncodingProfileStatics>().CreateWmv(quality);
}

inline Windows::Foundation::IAsyncOperation<Windows::Media::MediaProperties::MediaEncodingProfile> MediaEncodingProfile::CreateFromFileAsync(Windows::Storage::IStorageFile const& file)
{
    return get_activation_factory<MediaEncodingProfile, Windows::Media::MediaProperties::IMediaEncodingProfileStatics>().CreateFromFileAsync(file);
}

inline Windows::Foundation::IAsyncOperation<Windows::Media::MediaProperties::MediaEncodingProfile> MediaEncodingProfile::CreateFromStreamAsync(Windows::Storage::Streams::IRandomAccessStream const& stream)
{
    return get_activation_factory<MediaEncodingProfile, Windows::Media::MediaProperties::IMediaEncodingProfileStatics>().CreateFromStreamAsync(stream);
}

inline Windows::Media::MediaProperties::MediaEncodingProfile MediaEncodingProfile::CreateWav(Windows::Media::MediaProperties::AudioEncodingQuality const& quality)
{
    return get_activation_factory<MediaEncodingProfile, Windows::Media::MediaProperties::IMediaEncodingProfileStatics2>().CreateWav(quality);
}

inline Windows::Media::MediaProperties::MediaEncodingProfile MediaEncodingProfile::CreateAvi(Windows::Media::MediaProperties::VideoEncodingQuality const& quality)
{
    return get_activation_factory<MediaEncodingProfile, Windows::Media::MediaProperties::IMediaEncodingProfileStatics2>().CreateAvi(quality);
}

inline Windows::Media::MediaProperties::MediaEncodingProfile MediaEncodingProfile::CreateAlac(Windows::Media::MediaProperties::AudioEncodingQuality const& quality)
{
    return get_activation_factory<MediaEncodingProfile, Windows::Media::MediaProperties::IMediaEncodingProfileStatics3>().CreateAlac(quality);
}

inline Windows::Media::MediaProperties::MediaEncodingProfile MediaEncodingProfile::CreateFlac(Windows::Media::MediaProperties::AudioEncodingQuality const& quality)
{
    return get_activation_factory<MediaEncodingProfile, Windows::Media::MediaProperties::IMediaEncodingProfileStatics3>().CreateFlac(quality);
}

inline Windows::Media::MediaProperties::MediaEncodingProfile MediaEncodingProfile::CreateHevc(Windows::Media::MediaProperties::VideoEncodingQuality const& quality)
{
    return get_activation_factory<MediaEncodingProfile, Windows::Media::MediaProperties::IMediaEncodingProfileStatics3>().CreateHevc(quality);
}

inline hstring MediaEncodingSubtypes::Aac()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().Aac();
}

inline hstring MediaEncodingSubtypes::AacAdts()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().AacAdts();
}

inline hstring MediaEncodingSubtypes::Ac3()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().Ac3();
}

inline hstring MediaEncodingSubtypes::AmrNb()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().AmrNb();
}

inline hstring MediaEncodingSubtypes::AmrWb()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().AmrWb();
}

inline hstring MediaEncodingSubtypes::Argb32()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().Argb32();
}

inline hstring MediaEncodingSubtypes::Asf()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().Asf();
}

inline hstring MediaEncodingSubtypes::Avi()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().Avi();
}

inline hstring MediaEncodingSubtypes::Bgra8()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().Bgra8();
}

inline hstring MediaEncodingSubtypes::Bmp()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().Bmp();
}

inline hstring MediaEncodingSubtypes::Eac3()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().Eac3();
}

inline hstring MediaEncodingSubtypes::Float()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().Float();
}

inline hstring MediaEncodingSubtypes::Gif()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().Gif();
}

inline hstring MediaEncodingSubtypes::H263()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().H263();
}

inline hstring MediaEncodingSubtypes::H264()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().H264();
}

inline hstring MediaEncodingSubtypes::H264Es()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().H264Es();
}

inline hstring MediaEncodingSubtypes::Hevc()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().Hevc();
}

inline hstring MediaEncodingSubtypes::HevcEs()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().HevcEs();
}

inline hstring MediaEncodingSubtypes::Iyuv()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().Iyuv();
}

inline hstring MediaEncodingSubtypes::Jpeg()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().Jpeg();
}

inline hstring MediaEncodingSubtypes::JpegXr()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().JpegXr();
}

inline hstring MediaEncodingSubtypes::Mjpg()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().Mjpg();
}

inline hstring MediaEncodingSubtypes::Mpeg()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().Mpeg();
}

inline hstring MediaEncodingSubtypes::Mpeg1()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().Mpeg1();
}

inline hstring MediaEncodingSubtypes::Mpeg2()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().Mpeg2();
}

inline hstring MediaEncodingSubtypes::Mp3()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().Mp3();
}

inline hstring MediaEncodingSubtypes::Mpeg4()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().Mpeg4();
}

inline hstring MediaEncodingSubtypes::Nv12()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().Nv12();
}

inline hstring MediaEncodingSubtypes::Pcm()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().Pcm();
}

inline hstring MediaEncodingSubtypes::Png()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().Png();
}

inline hstring MediaEncodingSubtypes::Rgb24()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().Rgb24();
}

inline hstring MediaEncodingSubtypes::Rgb32()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().Rgb32();
}

inline hstring MediaEncodingSubtypes::Tiff()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().Tiff();
}

inline hstring MediaEncodingSubtypes::Wave()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().Wave();
}

inline hstring MediaEncodingSubtypes::Wma8()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().Wma8();
}

inline hstring MediaEncodingSubtypes::Wma9()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().Wma9();
}

inline hstring MediaEncodingSubtypes::Wmv3()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().Wmv3();
}

inline hstring MediaEncodingSubtypes::Wvc1()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().Wvc1();
}

inline hstring MediaEncodingSubtypes::Yuy2()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().Yuy2();
}

inline hstring MediaEncodingSubtypes::Yv12()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics>().Yv12();
}

inline hstring MediaEncodingSubtypes::Vp9()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics2>().Vp9();
}

inline hstring MediaEncodingSubtypes::L8()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics2>().L8();
}

inline hstring MediaEncodingSubtypes::L16()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics2>().L16();
}

inline hstring MediaEncodingSubtypes::D16()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics2>().D16();
}

inline hstring MediaEncodingSubtypes::Alac()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics3>().Alac();
}

inline hstring MediaEncodingSubtypes::Flac()
{
    return get_activation_factory<MediaEncodingSubtypes, Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics3>().Flac();
}

inline MediaPropertySet::MediaPropertySet() :
    MediaPropertySet(activate_instance<MediaPropertySet>())
{}

inline int32_t Mpeg2ProfileIds::Simple()
{
    return get_activation_factory<Mpeg2ProfileIds, Windows::Media::MediaProperties::IMpeg2ProfileIdsStatics>().Simple();
}

inline int32_t Mpeg2ProfileIds::Main()
{
    return get_activation_factory<Mpeg2ProfileIds, Windows::Media::MediaProperties::IMpeg2ProfileIdsStatics>().Main();
}

inline int32_t Mpeg2ProfileIds::SignalNoiseRatioScalable()
{
    return get_activation_factory<Mpeg2ProfileIds, Windows::Media::MediaProperties::IMpeg2ProfileIdsStatics>().SignalNoiseRatioScalable();
}

inline int32_t Mpeg2ProfileIds::SpatiallyScalable()
{
    return get_activation_factory<Mpeg2ProfileIds, Windows::Media::MediaProperties::IMpeg2ProfileIdsStatics>().SpatiallyScalable();
}

inline int32_t Mpeg2ProfileIds::High()
{
    return get_activation_factory<Mpeg2ProfileIds, Windows::Media::MediaProperties::IMpeg2ProfileIdsStatics>().High();
}

inline VideoEncodingProperties::VideoEncodingProperties() :
    VideoEncodingProperties(activate_instance<VideoEncodingProperties>())
{}

inline Windows::Media::MediaProperties::VideoEncodingProperties VideoEncodingProperties::CreateH264()
{
    return get_activation_factory<VideoEncodingProperties, Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics>().CreateH264();
}

inline Windows::Media::MediaProperties::VideoEncodingProperties VideoEncodingProperties::CreateMpeg2()
{
    return get_activation_factory<VideoEncodingProperties, Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics>().CreateMpeg2();
}

inline Windows::Media::MediaProperties::VideoEncodingProperties VideoEncodingProperties::CreateUncompressed(param::hstring const& subtype, uint32_t width, uint32_t height)
{
    return get_activation_factory<VideoEncodingProperties, Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics>().CreateUncompressed(subtype, width, height);
}

inline Windows::Media::MediaProperties::VideoEncodingProperties VideoEncodingProperties::CreateHevc()
{
    return get_activation_factory<VideoEncodingProperties, Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics2>().CreateHevc();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Media::MediaProperties::IAudioEncodingProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::IAudioEncodingProperties> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::IAudioEncodingProperties2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::IAudioEncodingProperties2> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::IAudioEncodingPropertiesStatics2> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::IAudioEncodingPropertiesWithFormatUserData> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::IAudioEncodingPropertiesWithFormatUserData> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::IContainerEncodingProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::IContainerEncodingProperties> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::IH264ProfileIdsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::IH264ProfileIdsStatics> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::IImageEncodingProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::IImageEncodingProperties> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::IImageEncodingPropertiesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::IImageEncodingPropertiesStatics> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::IImageEncodingPropertiesStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::IImageEncodingPropertiesStatics2> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::IMediaEncodingProfile> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::IMediaEncodingProfile> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::IMediaEncodingProfileStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::IMediaEncodingProfileStatics> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::IMediaEncodingProfileStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::IMediaEncodingProfileStatics2> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::IMediaEncodingProfileStatics3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::IMediaEncodingProfileStatics3> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::IMediaEncodingProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::IMediaEncodingProperties> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics2> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::IMediaEncodingSubtypesStatics3> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::IMediaRatio> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::IMediaRatio> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::IMpeg2ProfileIdsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::IMpeg2ProfileIdsStatics> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::IVideoEncodingProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::IVideoEncodingProperties> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::IVideoEncodingProperties2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::IVideoEncodingProperties2> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::IVideoEncodingProperties3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::IVideoEncodingProperties3> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::IVideoEncodingProperties4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::IVideoEncodingProperties4> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::IVideoEncodingPropertiesStatics2> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::AudioEncodingProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::AudioEncodingProperties> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::ContainerEncodingProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::ContainerEncodingProperties> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::H264ProfileIds> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::H264ProfileIds> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::ImageEncodingProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::ImageEncodingProperties> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::MediaEncodingProfile> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::MediaEncodingProfile> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::MediaEncodingSubtypes> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::MediaEncodingSubtypes> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::MediaPropertySet> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::MediaPropertySet> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::MediaRatio> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::MediaRatio> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::Mpeg2ProfileIds> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::Mpeg2ProfileIds> {};

template<> struct hash<winrt::Windows::Media::MediaProperties::VideoEncodingProperties> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Media::MediaProperties::VideoEncodingProperties> {};

}

WINRT_WARNING_POP
