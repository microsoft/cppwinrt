// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Management.Deployment.Preview.1.h"

WINRT_EXPORT namespace winrt::Windows::Management::Deployment::Preview {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::Management::Deployment::Preview {

struct ClassicAppManager
{
    ClassicAppManager() = delete;
    static Windows::Management::Deployment::Preview::InstalledClassicAppInfo FindInstalledApp(param::hstring const& appUninstallKey);
};

struct WINRT_EBO InstalledClassicAppInfo :
    Windows::Management::Deployment::Preview::IInstalledClassicAppInfo
{
    InstalledClassicAppInfo(std::nullptr_t) noexcept {}
};

}
