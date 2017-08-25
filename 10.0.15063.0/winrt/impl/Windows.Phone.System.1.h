// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Phone.System.0.h"

WINRT_EXPORT namespace winrt::Windows::Phone::System {

struct WINRT_EBO ISystemProtectionStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemProtectionStatics>
{
    ISystemProtectionStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISystemProtectionUnlockStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemProtectionUnlockStatics>
{
    ISystemProtectionUnlockStatics(std::nullptr_t = nullptr) noexcept {}
};

}
