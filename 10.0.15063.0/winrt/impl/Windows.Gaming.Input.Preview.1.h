// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Gaming.Input.Custom.0.h"
#include "winrt/impl/Windows.Gaming.Input.Preview.0.h"

WINRT_EXPORT namespace winrt::Windows::Gaming::Input::Preview {

struct WINRT_EBO IGameControllerProviderInfoStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IGameControllerProviderInfoStatics>
{
    IGameControllerProviderInfoStatics(std::nullptr_t = nullptr) noexcept {}
};

}
