// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Phone.Media.Devices.0.h"

WINRT_EXPORT namespace winrt::Windows::Phone::Media::Devices {

struct WINRT_EBO IAudioRoutingManager :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioRoutingManager>
{
    IAudioRoutingManager(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IAudioRoutingManagerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IAudioRoutingManagerStatics>
{
    IAudioRoutingManagerStatics(std::nullptr_t = nullptr) noexcept {}
};

}
