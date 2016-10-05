// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.UI.Xaml.Resources.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::UI::Xaml::Resources {

template <typename D>
struct WINRT_EBO impl_ICustomXamlResourceLoader
{
};

template <typename D>
struct WINRT_EBO impl_ICustomXamlResourceLoaderFactory
{
    Windows::UI::Xaml::Resources::CustomXamlResourceLoader CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
struct WINRT_EBO impl_ICustomXamlResourceLoaderOverrides
{
    Windows::IInspectable GetResource(hstring_ref resourceId, hstring_ref objectType, hstring_ref propertyName, hstring_ref propertyType) const;
};

template <typename D>
struct WINRT_EBO impl_ICustomXamlResourceLoaderStatics
{
    Windows::UI::Xaml::Resources::CustomXamlResourceLoader Current() const;
    void Current(const Windows::UI::Xaml::Resources::CustomXamlResourceLoader & value) const;
};

struct ICustomXamlResourceLoader :
    Windows::IInspectable,
    impl::consume<ICustomXamlResourceLoader>
{
    ICustomXamlResourceLoader(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICustomXamlResourceLoader>(m_ptr); }
};

struct ICustomXamlResourceLoaderFactory :
    Windows::IInspectable,
    impl::consume<ICustomXamlResourceLoaderFactory>
{
    ICustomXamlResourceLoaderFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICustomXamlResourceLoaderFactory>(m_ptr); }
};

struct ICustomXamlResourceLoaderOverrides :
    Windows::IInspectable,
    impl::consume<ICustomXamlResourceLoaderOverrides>
{
    ICustomXamlResourceLoaderOverrides(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICustomXamlResourceLoaderOverrides>(m_ptr); }
};

struct ICustomXamlResourceLoaderStatics :
    Windows::IInspectable,
    impl::consume<ICustomXamlResourceLoaderStatics>
{
    ICustomXamlResourceLoaderStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ICustomXamlResourceLoaderStatics>(m_ptr); }
};

}

}
