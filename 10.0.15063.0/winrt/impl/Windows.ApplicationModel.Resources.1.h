// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.ApplicationModel.Resources.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Resources {

struct WINRT_EBO IResourceLoader :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceLoader>
{
    IResourceLoader(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IResourceLoader2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceLoader2>
{
    IResourceLoader2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("ResourceLoader may be altered or unavailable for releases after Windows 8.1. Instead, use GetForCurrentView.")]] IResourceLoaderFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceLoaderFactory>
{
    IResourceLoaderFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("GetStringForReference may be altered or unavailable for releases after Windows Phone 'OSVersion' (TBD). Instead, use GetStringForUri.")]] IResourceLoaderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceLoaderStatics>
{
    IResourceLoaderStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IResourceLoaderStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceLoaderStatics2>
{
    IResourceLoaderStatics2(std::nullptr_t = nullptr) noexcept {}
};

}
