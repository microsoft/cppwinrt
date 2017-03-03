// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Gaming.Input.Preview.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Gaming::Input::Preview {

struct GameControllerProviderInfo
{
    GameControllerProviderInfo() = delete;
    static hstring GetParentProviderId(const Windows::Gaming::Input::Custom::IGameControllerProvider & provider);
    static hstring GetProviderId(const Windows::Gaming::Input::Custom::IGameControllerProvider & provider);
};

}

}
