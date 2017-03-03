// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.Preview.InkWorkspace.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::ApplicationModel::Preview::InkWorkspace {

struct IInkWorkspaceHostedAppManager :
    Windows::Foundation::IInspectable,
    impl::consume<IInkWorkspaceHostedAppManager>
{
    IInkWorkspaceHostedAppManager(std::nullptr_t = nullptr) noexcept {}
};

struct IInkWorkspaceHostedAppManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume<IInkWorkspaceHostedAppManagerStatics>
{
    IInkWorkspaceHostedAppManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
