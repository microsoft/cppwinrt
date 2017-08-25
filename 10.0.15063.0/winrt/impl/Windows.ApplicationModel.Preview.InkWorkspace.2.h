// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Graphics.Imaging.1.h"
#include "winrt/impl/Windows.ApplicationModel.Preview.InkWorkspace.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Preview::InkWorkspace {

struct WINRT_EBO InkWorkspaceHostedAppManager :
    Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager
{
    InkWorkspaceHostedAppManager(std::nullptr_t) noexcept {}
    static Windows::ApplicationModel::Preview::InkWorkspace::InkWorkspaceHostedAppManager GetForCurrentApp();
};

}
