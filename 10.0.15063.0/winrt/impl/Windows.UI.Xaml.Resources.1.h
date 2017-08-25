// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.UI.Xaml.Resources.0.h"

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Resources {

struct WINRT_EBO ICustomXamlResourceLoader :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomXamlResourceLoader>
{
    ICustomXamlResourceLoader(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICustomXamlResourceLoaderFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomXamlResourceLoaderFactory>
{
    ICustomXamlResourceLoaderFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICustomXamlResourceLoaderOverrides :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomXamlResourceLoaderOverrides>
{
    ICustomXamlResourceLoaderOverrides(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ICustomXamlResourceLoaderStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ICustomXamlResourceLoaderStatics>
{
    ICustomXamlResourceLoaderStatics(std::nullptr_t = nullptr) noexcept {}
};

}
