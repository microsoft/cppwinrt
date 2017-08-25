// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Phone.Media.Devices.1.h"

WINRT_EXPORT namespace winrt::Windows::Phone::Media::Devices {

struct WINRT_EBO AudioRoutingManager :
    Windows::Phone::Media::Devices::IAudioRoutingManager
{
    AudioRoutingManager(std::nullptr_t) noexcept {}
    static Windows::Phone::Media::Devices::AudioRoutingManager GetDefault();
};

}
