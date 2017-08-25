// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.ApplicationModel.AppExtensions.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::AppExtensions {

struct WINRT_EBO IAppExtension :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppExtension>
{
    IAppExtension(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppExtensionCatalog :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppExtensionCatalog>
{
    IAppExtensionCatalog(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppExtensionCatalogStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppExtensionCatalogStatics>
{
    IAppExtensionCatalogStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppExtensionPackageInstalledEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppExtensionPackageInstalledEventArgs>
{
    IAppExtensionPackageInstalledEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppExtensionPackageStatusChangedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppExtensionPackageStatusChangedEventArgs>
{
    IAppExtensionPackageStatusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppExtensionPackageUninstallingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppExtensionPackageUninstallingEventArgs>
{
    IAppExtensionPackageUninstallingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppExtensionPackageUpdatedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppExtensionPackageUpdatedEventArgs>
{
    IAppExtensionPackageUpdatedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAppExtensionPackageUpdatingEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAppExtensionPackageUpdatingEventArgs>
{
    IAppExtensionPackageUpdatingEventArgs(std::nullptr_t = nullptr) noexcept {}
};

}
