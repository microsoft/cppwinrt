// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Management.Deployment.Preview.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Management::Deployment::Preview {

template <typename D>
struct WINRT_EBO impl_IClassicAppManagerStatics
{
    Windows::Management::Deployment::Preview::InstalledClassicAppInfo FindInstalledApp(hstring_ref appUninstallKey) const;
};

template <typename D>
struct WINRT_EBO impl_IInstalledClassicAppInfo
{
    hstring DisplayName() const;
    hstring DisplayVersion() const;
};

struct IClassicAppManagerStatics :
    Windows::IInspectable,
    impl::consume<IClassicAppManagerStatics>
{
    IClassicAppManagerStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IClassicAppManagerStatics>(m_ptr); }
};

struct IInstalledClassicAppInfo :
    Windows::IInspectable,
    impl::consume<IInstalledClassicAppInfo>
{
    IInstalledClassicAppInfo(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInstalledClassicAppInfo>(m_ptr); }
};

}

}
