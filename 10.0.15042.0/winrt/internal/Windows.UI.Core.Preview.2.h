// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.UI.Core.Preview.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_01bca043_4d09_59e4_b1b3_a2ce24629e41
#define WINRT_GENERIC_01bca043_4d09_59e4_b1b3_a2ce24629e41
template <> struct __declspec(uuid("01bca043-4d09-59e4-b1b3-a2ce24629e41")) __declspec(novtable) EventHandler<Windows::UI::Core::Preview::SystemNavigationCloseRequestedPreviewEventArgs> : impl_EventHandler<Windows::UI::Core::Preview::SystemNavigationCloseRequestedPreviewEventArgs> {};
#endif


}

namespace Windows::UI::Core::Preview {

struct ISystemNavigationCloseRequestedPreviewEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume<ISystemNavigationCloseRequestedPreviewEventArgs>
{
    ISystemNavigationCloseRequestedPreviewEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemNavigationManagerPreview :
    Windows::Foundation::IInspectable,
    impl::consume<ISystemNavigationManagerPreview>
{
    ISystemNavigationManagerPreview(std::nullptr_t = nullptr) noexcept {}
};

struct ISystemNavigationManagerPreviewStatics :
    Windows::Foundation::IInspectable,
    impl::consume<ISystemNavigationManagerPreviewStatics>
{
    ISystemNavigationManagerPreviewStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
