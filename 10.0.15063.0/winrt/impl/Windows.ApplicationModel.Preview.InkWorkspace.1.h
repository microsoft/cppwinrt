// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Graphics.Imaging.0.h"
#include "winrt/impl/Windows.ApplicationModel.Preview.InkWorkspace.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Preview::InkWorkspace {

struct WINRT_EBO IInkWorkspaceHostedAppManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkWorkspaceHostedAppManager>
{
    IInkWorkspaceHostedAppManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IInkWorkspaceHostedAppManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInkWorkspaceHostedAppManagerStatics>
{
    IInkWorkspaceHostedAppManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

}
