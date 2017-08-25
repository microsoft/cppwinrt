// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Devices.Geolocation.0.h"
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Storage.FileProperties.0.h"

WINRT_EXPORT namespace winrt::Windows::Storage::FileProperties {

struct WINRT_EBO IBasicProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IBasicProperties>
{
    IBasicProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDocumentProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDocumentProperties>,
    impl::require<IDocumentProperties, Windows::Storage::FileProperties::IStorageItemExtraProperties>
{
    IDocumentProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IGeotagHelperStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGeotagHelperStatics>
{
    IGeotagHelperStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IImageProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IImageProperties>,
    impl::require<IImageProperties, Windows::Storage::FileProperties::IStorageItemExtraProperties>
{
    IImageProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IMusicProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IMusicProperties>,
    impl::require<IMusicProperties, Windows::Storage::FileProperties::IStorageItemExtraProperties>
{
    IMusicProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageItemContentProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageItemContentProperties>,
    impl::require<IStorageItemContentProperties, Windows::Storage::FileProperties::IStorageItemExtraProperties>
{
    IStorageItemContentProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageItemExtraProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageItemExtraProperties>
{
    IStorageItemExtraProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IThumbnailProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IThumbnailProperties>
{
    IThumbnailProperties(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IVideoProperties :
    Windows::Foundation::IInspectable,
    impl::consume_t<IVideoProperties>,
    impl::require<IVideoProperties, Windows::Storage::FileProperties::IStorageItemExtraProperties>
{
    IVideoProperties(std::nullptr_t = nullptr) noexcept {}
};

}
