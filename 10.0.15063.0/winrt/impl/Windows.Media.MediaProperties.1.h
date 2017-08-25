// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Media.MediaProperties.0.h"

WINRT_EXPORT namespace winrt::Windows::Media::MediaProperties {

struct WINRT_EBO IAudioEncodingProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioEncodingProperties>,
    impl::require<IAudioEncodingProperties, Windows::Media::MediaProperties::IMediaEncodingProperties>
{
    IAudioEncodingProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioEncodingProperties2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioEncodingProperties2>
{
    IAudioEncodingProperties2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioEncodingPropertiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioEncodingPropertiesStatics>
{
    IAudioEncodingPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioEncodingPropertiesStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioEncodingPropertiesStatics2>
{
    IAudioEncodingPropertiesStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioEncodingPropertiesWithFormatUserData :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioEncodingPropertiesWithFormatUserData>
{
    IAudioEncodingPropertiesWithFormatUserData(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IContainerEncodingProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IContainerEncodingProperties>,
    impl::require<IContainerEncodingProperties, Windows::Media::MediaProperties::IMediaEncodingProperties>
{
    IContainerEncodingProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IH264ProfileIdsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IH264ProfileIdsStatics>
{
    IH264ProfileIdsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IImageEncodingProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageEncodingProperties>,
    impl::require<IImageEncodingProperties, Windows::Media::MediaProperties::IMediaEncodingProperties>
{
    IImageEncodingProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IImageEncodingPropertiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageEncodingPropertiesStatics>
{
    IImageEncodingPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IImageEncodingPropertiesStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageEncodingPropertiesStatics2>
{
    IImageEncodingPropertiesStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaEncodingProfile :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaEncodingProfile>
{
    IMediaEncodingProfile(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaEncodingProfileStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaEncodingProfileStatics>
{
    IMediaEncodingProfileStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaEncodingProfileStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaEncodingProfileStatics2>
{
    IMediaEncodingProfileStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaEncodingProfileStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaEncodingProfileStatics3>
{
    IMediaEncodingProfileStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaEncodingProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaEncodingProperties>
{
    IMediaEncodingProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaEncodingSubtypesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaEncodingSubtypesStatics>
{
    IMediaEncodingSubtypesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaEncodingSubtypesStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaEncodingSubtypesStatics2>
{
    IMediaEncodingSubtypesStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaEncodingSubtypesStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaEncodingSubtypesStatics3>
{
    IMediaEncodingSubtypesStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMediaRatio :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMediaRatio>
{
    IMediaRatio(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMpeg2ProfileIdsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMpeg2ProfileIdsStatics>
{
    IMpeg2ProfileIdsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVideoEncodingProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoEncodingProperties>,
    impl::require<IVideoEncodingProperties, Windows::Media::MediaProperties::IMediaEncodingProperties>
{
    IVideoEncodingProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVideoEncodingProperties2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoEncodingProperties2>
{
    IVideoEncodingProperties2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVideoEncodingProperties3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoEncodingProperties3>
{
    IVideoEncodingProperties3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVideoEncodingProperties4 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoEncodingProperties4>
{
    IVideoEncodingProperties4(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVideoEncodingPropertiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoEncodingPropertiesStatics>
{
    IVideoEncodingPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVideoEncodingPropertiesStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoEncodingPropertiesStatics2>
{
    IVideoEncodingPropertiesStatics2(std::nullptr_t = nullptr) noexcept {}
};

}
