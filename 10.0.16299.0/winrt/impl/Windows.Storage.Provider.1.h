// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Storage.Provider.0.h"

WINRT_EXPORT namespace winrt::Windows::Storage::Provider {

struct WINRT_EBO ICachedFileUpdaterStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICachedFileUpdaterStatics>
{
    ICachedFileUpdaterStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICachedFileUpdaterUI :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICachedFileUpdaterUI>
{
    ICachedFileUpdaterUI(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICachedFileUpdaterUI2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICachedFileUpdaterUI2>,
    impl::require<ICachedFileUpdaterUI2, Windows::Storage::Provider::ICachedFileUpdaterUI>
{
    ICachedFileUpdaterUI2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFileUpdateRequest :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileUpdateRequest>
{
    IFileUpdateRequest(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFileUpdateRequest2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileUpdateRequest2>,
    impl::require<IFileUpdateRequest2, Windows::Storage::Provider::IFileUpdateRequest>
{
    IFileUpdateRequest2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFileUpdateRequestDeferral :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileUpdateRequestDeferral>
{
    IFileUpdateRequestDeferral(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IFileUpdateRequestedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IFileUpdateRequestedEventArgs>
{
    IFileUpdateRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageProviderItemPropertiesStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageProviderItemPropertiesStatics>
{
    IStorageProviderItemPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageProviderItemProperty :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageProviderItemProperty>
{
    IStorageProviderItemProperty(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageProviderItemPropertyDefinition :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageProviderItemPropertyDefinition>
{
    IStorageProviderItemPropertyDefinition(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageProviderItemPropertySource :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageProviderItemPropertySource>
{
    IStorageProviderItemPropertySource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageProviderPropertyCapabilities :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageProviderPropertyCapabilities>
{
    IStorageProviderPropertyCapabilities(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageProviderSyncRootInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageProviderSyncRootInfo>
{
    IStorageProviderSyncRootInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageProviderSyncRootManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageProviderSyncRootManagerStatics>
{
    IStorageProviderSyncRootManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

}
