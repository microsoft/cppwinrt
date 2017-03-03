// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Management.Deployment.Preview.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Management::Deployment::Preview {

struct IClassicAppManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IClassicAppManagerStatics>
{
    IClassicAppManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct IInstalledClassicAppInfo :
    Windows::Foundation::IInspectable,
    impl::consume<IInstalledClassicAppInfo>
{
    IInstalledClassicAppInfo(std::nullptr_t = nullptr) noexcept {}
};

}

}
