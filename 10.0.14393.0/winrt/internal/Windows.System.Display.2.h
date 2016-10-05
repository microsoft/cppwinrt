// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.System.Display.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::System::Display {

template <typename D>
struct WINRT_EBO impl_IDisplayRequest
{
    void RequestActive() const;
    void RequestRelease() const;
};

struct IDisplayRequest :
    Windows::IInspectable,
    impl::consume<IDisplayRequest>
{
    IDisplayRequest(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IDisplayRequest>(m_ptr); }
};

}

}
