// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Embedded.DeviceLockdown.0.h"

WINRT_EXPORT namespace winrt::Windows::Embedded::DeviceLockdown {

struct WINRT_EBO IDeviceLockdownProfileInformation :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceLockdownProfileInformation>
{
    IDeviceLockdownProfileInformation(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDeviceLockdownProfileStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDeviceLockdownProfileStatics>
{
    IDeviceLockdownProfileStatics(std::nullptr_t = nullptr) noexcept {}
};

}
