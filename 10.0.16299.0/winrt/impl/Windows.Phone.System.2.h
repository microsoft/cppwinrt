// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Phone.System.1.h"

WINRT_EXPORT namespace winrt::Windows::Phone::System {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::Phone::System {

struct SystemProtection
{
    SystemProtection() = delete;
    static bool ScreenLocked();
    static void RequestScreenUnlock();
};

}
