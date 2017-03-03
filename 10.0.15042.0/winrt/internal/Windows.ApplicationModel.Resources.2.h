// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.Resources.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::ApplicationModel::Resources {

struct IResourceLoader :
    Windows::Foundation::IInspectable,
    impl::consume<IResourceLoader>
{
    IResourceLoader(std::nullptr_t = nullptr) noexcept {}
};

struct IResourceLoader2 :
    Windows::Foundation::IInspectable,
    impl::consume<IResourceLoader2>
{
    IResourceLoader2(std::nullptr_t = nullptr) noexcept {}
};

struct IResourceLoaderFactory :
    Windows::Foundation::IInspectable,
    impl::consume<IResourceLoaderFactory>
{
    IResourceLoaderFactory(std::nullptr_t = nullptr) noexcept {}
};
struct [[deprecated("ResourceLoader may be altered or unavailable for releases after Windows 8.1. Instead, use GetForCurrentView.")]] IResourceLoaderFactory;

struct IResourceLoaderStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IResourceLoaderStatics>
{
    IResourceLoaderStatics(std::nullptr_t = nullptr) noexcept {}
};
struct [[deprecated("GetStringForReference may be altered or unavailable for releases after Windows Phone 'OSVersion' (TBD). Instead, use GetStringForUri.")]] IResourceLoaderStatics;

struct IResourceLoaderStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume<IResourceLoaderStatics2>
{
    IResourceLoaderStatics2(std::nullptr_t = nullptr) noexcept {}
};

}

}
