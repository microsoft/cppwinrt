// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Management::Deployment::Preview {

struct IClassicAppManagerStatics;
struct IInstalledClassicAppInfo;
struct InstalledClassicAppInfo;

}

namespace Windows::Management::Deployment::Preview {

struct IClassicAppManagerStatics;
struct IInstalledClassicAppInfo;
struct ClassicAppManager;
struct InstalledClassicAppInfo;

}

namespace Windows::Management::Deployment::Preview {

template <typename T> struct impl_IClassicAppManagerStatics;
template <typename T> struct impl_IInstalledClassicAppInfo;

}

}
