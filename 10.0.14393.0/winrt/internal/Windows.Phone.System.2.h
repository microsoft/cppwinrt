// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Phone.System.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Phone::System {

template <typename D>
struct WINRT_EBO impl_ISystemProtectionStatics
{
    bool ScreenLocked() const;
};

template <typename D>
struct WINRT_EBO impl_ISystemProtectionUnlockStatics
{
    void RequestScreenUnlock() const;
};

struct ISystemProtectionStatics :
    Windows::IInspectable,
    impl::consume<ISystemProtectionStatics>
{
    ISystemProtectionStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISystemProtectionStatics>(m_ptr); }
};

struct ISystemProtectionUnlockStatics :
    Windows::IInspectable,
    impl::consume<ISystemProtectionUnlockStatics>
{
    ISystemProtectionUnlockStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISystemProtectionUnlockStatics>(m_ptr); }
};

}

}
