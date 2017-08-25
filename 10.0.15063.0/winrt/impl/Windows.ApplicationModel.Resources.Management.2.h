// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.ApplicationModel.Resources.Management.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Resources::Management {

struct WINRT_EBO IndexedResourceCandidate :
    Windows::ApplicationModel::Resources::Management::IIndexedResourceCandidate
{
    IndexedResourceCandidate(std::nullptr_t) noexcept {}
};

struct WINRT_EBO IndexedResourceQualifier :
    Windows::ApplicationModel::Resources::Management::IIndexedResourceQualifier
{
    IndexedResourceQualifier(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ResourceIndexer :
    Windows::ApplicationModel::Resources::Management::IResourceIndexer
{
    ResourceIndexer(std::nullptr_t) noexcept {}
    ResourceIndexer(Windows::Foundation::Uri const& projectRoot);
    ResourceIndexer(Windows::Foundation::Uri const& projectRoot, Windows::Foundation::Uri const& extensionDllPath);
};

}
