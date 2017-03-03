// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.Preview.InkWorkspace.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::ApplicationModel::Preview::InkWorkspace {

struct WINRT_EBO InkWorkspaceHostedAppManager :
    Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager
{
    InkWorkspaceHostedAppManager(std::nullptr_t) noexcept {}
    static Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager GetForCurrentApp();
};

}

}
