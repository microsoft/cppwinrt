// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.UI.Xaml.Resources.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::UI::Xaml::Resources {

struct WINRT_EBO CustomXamlResourceLoader :
    Windows::UI::Xaml::Resources::ICustomXamlResourceLoader,
    impl::require<CustomXamlResourceLoader, Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides>
{
    CustomXamlResourceLoader(std::nullptr_t) noexcept {}
    CustomXamlResourceLoader();
    static Windows::UI::Xaml::Resources::CustomXamlResourceLoader Current();
    static void Current(const Windows::UI::Xaml::Resources::CustomXamlResourceLoader & value);
};

}

}
