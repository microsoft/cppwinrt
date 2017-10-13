// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.System.RemoteDesktop.0.h"

WINRT_EXPORT namespace winrt::Windows::System::RemoteDesktop {

struct WINRT_EBO IInteractiveSessionStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IInteractiveSessionStatics>
{
    IInteractiveSessionStatics(std::nullptr_t = nullptr) noexcept {}
};

}
