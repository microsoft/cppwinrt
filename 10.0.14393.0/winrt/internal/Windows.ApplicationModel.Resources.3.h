// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.Resources.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::ApplicationModel::Resources {

struct WINRT_EBO ResourceLoader :
    Windows::ApplicationModel::Resources::IResourceLoader,
    impl::require<ResourceLoader, Windows::ApplicationModel::Resources::IResourceLoader2>
{
    ResourceLoader(std::nullptr_t) noexcept {}
    ResourceLoader();
    ResourceLoader(hstring_ref name);
    static hstring GetStringForReference(const Windows::Foundation::Uri & uri);
    static Windows::ApplicationModel::Resources::ResourceLoader GetForCurrentView();
    static Windows::ApplicationModel::Resources::ResourceLoader GetForCurrentView(hstring_ref name);
    static Windows::ApplicationModel::Resources::ResourceLoader GetForViewIndependentUse();
    static Windows::ApplicationModel::Resources::ResourceLoader GetForViewIndependentUse(hstring_ref name);
};

}

}
