// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.Resources.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::ApplicationModel::Resources {

template <typename D>
struct WINRT_EBO impl_IResourceLoader
{
    hstring GetString(hstring_ref resource) const;
};

template <typename D>
struct WINRT_EBO impl_IResourceLoader2
{
    hstring GetStringForUri(const Windows::Foundation::Uri & uri) const;
};

template <typename D>
struct WINRT_EBO impl_IResourceLoaderFactory
{
    Windows::ApplicationModel::Resources::ResourceLoader CreateResourceLoaderByName(hstring_ref name) const;
};

template <typename D>
struct WINRT_EBO impl_IResourceLoaderStatics
{
    hstring GetStringForReference(const Windows::Foundation::Uri & uri) const;
};

template <typename D>
struct WINRT_EBO impl_IResourceLoaderStatics2
{
    Windows::ApplicationModel::Resources::ResourceLoader GetForCurrentView() const;
    Windows::ApplicationModel::Resources::ResourceLoader GetForCurrentView(hstring_ref name) const;
    Windows::ApplicationModel::Resources::ResourceLoader GetForViewIndependentUse() const;
    Windows::ApplicationModel::Resources::ResourceLoader GetForViewIndependentUse(hstring_ref name) const;
};

struct IResourceLoader :
    Windows::IInspectable,
    impl::consume<IResourceLoader>
{
    IResourceLoader(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IResourceLoader>(m_ptr); }
};

struct IResourceLoader2 :
    Windows::IInspectable,
    impl::consume<IResourceLoader2>
{
    IResourceLoader2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IResourceLoader2>(m_ptr); }
};

struct IResourceLoaderFactory :
    Windows::IInspectable,
    impl::consume<IResourceLoaderFactory>
{
    IResourceLoaderFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IResourceLoaderFactory>(m_ptr); }
};

struct IResourceLoaderStatics :
    Windows::IInspectable,
    impl::consume<IResourceLoaderStatics>
{
    IResourceLoaderStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IResourceLoaderStatics>(m_ptr); }
};

struct IResourceLoaderStatics2 :
    Windows::IInspectable,
    impl::consume<IResourceLoaderStatics2>
{
    IResourceLoaderStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IResourceLoaderStatics2>(m_ptr); }
};

}

}
