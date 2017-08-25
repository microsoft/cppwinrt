// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.ApplicationModel.Resources.Core.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Resources::Core {

struct WINRT_EBO INamedResource :
    Windows::Foundation::IInspectable,
    impl::consume_t<INamedResource>
{
    INamedResource(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IResourceCandidate :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceCandidate>
{
    IResourceCandidate(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IResourceCandidate2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceCandidate2>
{
    IResourceCandidate2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IResourceContext :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceContext>
{
    IResourceContext(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO [[deprecated("CreateMatchingContext may be altered or unavailable for releases after Windows 8.1. Instead, use ResourceContext.GetForCurrentView.OverrideToMatch.")]] IResourceContextStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceContextStatics>
{
    IResourceContextStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IResourceContextStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceContextStatics2>
{
    IResourceContextStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IResourceContextStatics3 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceContextStatics3>
{
    IResourceContextStatics3(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IResourceManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceManager>
{
    IResourceManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IResourceManager2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceManager2>
{
    IResourceManager2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IResourceManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceManagerStatics>
{
    IResourceManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IResourceMap :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceMap>,
    impl::require<IResourceMap, Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::ApplicationModel::Resources::Core::NamedResource>>, Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Resources::Core::NamedResource>>
{
    IResourceMap(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IResourceQualifier :
    Windows::Foundation::IInspectable,
    impl::consume_t<IResourceQualifier>
{
    IResourceQualifier(std::nullptr_t = nullptr) noexcept {}
};

}
