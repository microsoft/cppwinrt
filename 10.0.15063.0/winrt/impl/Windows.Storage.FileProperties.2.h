// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Geolocation.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Storage.FileProperties.1.h"

WINRT_EXPORT namespace winrt::Windows::Storage::FileProperties {

struct WINRT_EBO BasicProperties :
    Windows::Storage::FileProperties::IBasicProperties,
    impl::require<BasicProperties, Windows::Storage::FileProperties::IStorageItemExtraProperties>
{
    BasicProperties(std::nullptr_t) noexcept {}
};

struct WINRT_EBO DocumentProperties :
    Windows::Storage::FileProperties::IDocumentProperties
{
    DocumentProperties(std::nullptr_t) noexcept {}
};

struct GeotagHelper
{
    GeotagHelper() = delete;
    static Windows::Foundation::IAsyncOperation<Windows::Devices::Geolocation::Geopoint> GetGeotagAsync(Windows::Storage::IStorageFile const& file);
    static Windows::Foundation::IAsyncAction SetGeotagFromGeolocatorAsync(Windows::Storage::IStorageFile const& file, Windows::Devices::Geolocation::Geolocator const& geolocator);
    static Windows::Foundation::IAsyncAction SetGeotagAsync(Windows::Storage::IStorageFile const& file, Windows::Devices::Geolocation::Geopoint const& geopoint);
};

struct WINRT_EBO ImageProperties :
    Windows::Storage::FileProperties::IImageProperties
{
    ImageProperties(std::nullptr_t) noexcept {}
};

struct WINRT_EBO MusicProperties :
    Windows::Storage::FileProperties::IMusicProperties
{
    MusicProperties(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StorageItemContentProperties :
    Windows::Storage::FileProperties::IStorageItemContentProperties
{
    StorageItemContentProperties(std::nullptr_t) noexcept {}
};

struct WINRT_EBO StorageItemThumbnail :
    Windows::Storage::Streams::IRandomAccessStreamWithContentType,
    impl::require<StorageItemThumbnail, Windows::Storage::FileProperties::IThumbnailProperties>
{
    StorageItemThumbnail(std::nullptr_t) noexcept {}
};

struct WINRT_EBO VideoProperties :
    Windows::Storage::FileProperties::IVideoProperties
{
    VideoProperties(std::nullptr_t) noexcept {}
};

}
