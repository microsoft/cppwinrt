// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Gaming.Input.Custom.1.h"
#include "winrt/impl/Windows.Gaming.Input.Preview.1.h"

WINRT_EXPORT namespace winrt::Windows::Gaming::Input::Preview {

struct GameControllerProviderInfo
{
    GameControllerProviderInfo() = delete;
    static hstring GetParentProviderId(Windows::Gaming::Input::Custom::IGameControllerProvider const& provider);
    static hstring GetProviderId(Windows::Gaming::Input::Custom::IGameControllerProvider const& provider);
};

}
