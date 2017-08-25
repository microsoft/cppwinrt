// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Storage.0.h"
#include "winrt/impl/Windows.Devices.Portable.0.h"

WINRT_EXPORT namespace winrt::Windows::Devices::Portable {

struct WINRT_EBO IServiceDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IServiceDeviceStatics>
{
    IServiceDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IStorageDeviceStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IStorageDeviceStatics>
{
    IStorageDeviceStatics(std::nullptr_t = nullptr) noexcept {}
};

}
