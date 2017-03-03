// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.UI.Core.Preview.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::UI::Core::Preview {

struct WINRT_EBO SystemNavigationCloseRequestedPreviewEventArgs :
    Windows::UI::Core::Preview::ISystemNavigationCloseRequestedPreviewEventArgs
{
    SystemNavigationCloseRequestedPreviewEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SystemNavigationManagerPreview :
    Windows::UI::Core::Preview::ISystemNavigationManagerPreview
{
    SystemNavigationManagerPreview(std::nullptr_t) noexcept {}
    static Windows::UI::Core::Preview::SystemNavigationManagerPreview GetForCurrentView();
};

}

}
