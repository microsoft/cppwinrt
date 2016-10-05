// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.System.RemoteDesktop.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::System::RemoteDesktop {

template <typename D>
struct WINRT_EBO impl_IInteractiveSessionStatics
{
    bool IsRemote() const;
};

struct IInteractiveSessionStatics :
    Windows::IInspectable,
    impl::consume<IInteractiveSessionStatics>
{
    IInteractiveSessionStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInteractiveSessionStatics>(m_ptr); }
};

}

}
