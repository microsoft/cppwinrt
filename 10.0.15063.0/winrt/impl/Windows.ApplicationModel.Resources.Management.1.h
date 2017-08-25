// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.ApplicationModel.Resources.Management.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Resources::Management {

struct WINRT_EBO IIndexedResourceCandidate :
    Windows::Foundation::IInspectable,
    impl::consume_t<IIndexedResourceCandidate>
{
    IIndexedResourceCandidate(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IIndexedResourceQualifier :
    Windows::Foundation::IInspectable,
    impl::consume_t<IIndexedResourceQualifier>
{
    IIndexedResourceQualifier(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IResourceIndexer :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceIndexer>
{
    IResourceIndexer(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IResourceIndexerFactory :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceIndexerFactory>
{
    IResourceIndexerFactory(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IResourceIndexerFactory2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceIndexerFactory2>
{
    IResourceIndexerFactory2(std::nullptr_t = nullptr) noexcept {}
};

}
