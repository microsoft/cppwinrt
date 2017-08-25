// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.ApplicationModel.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.ApplicationModel.AppExtensions.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::AppExtensions {

struct WINRT_EBO AppExtension :
    Windows::ApplicationModel::AppExtensions::IAppExtension
{
    AppExtension(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppExtensionCatalog :
    Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog
{
    AppExtensionCatalog(std::nullptr_t) noexcept {}
    static Windows::ApplicationModel::AppExtensions::AppExtensionCatalog Open(param::hstring const& appExtensionName);
};

struct WINRT_EBO AppExtensionPackageInstalledEventArgs :
    Windows::ApplicationModel::AppExtensions::IAppExtensionPackageInstalledEventArgs
{
    AppExtensionPackageInstalledEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppExtensionPackageStatusChangedEventArgs :
    Windows::ApplicationModel::AppExtensions::IAppExtensionPackageStatusChangedEventArgs
{
    AppExtensionPackageStatusChangedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppExtensionPackageUninstallingEventArgs :
    Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUninstallingEventArgs
{
    AppExtensionPackageUninstallingEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppExtensionPackageUpdatedEventArgs :
    Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatedEventArgs
{
    AppExtensionPackageUpdatedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO AppExtensionPackageUpdatingEventArgs :
    Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatingEventArgs
{
    AppExtensionPackageUpdatingEventArgs(std::nullptr_t) noexcept {}
};

}
