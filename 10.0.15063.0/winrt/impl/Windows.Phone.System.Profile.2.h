// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Phone.System.Profile.1.h"

WINRT_EXPORT namespace winrt::Windows::Phone::System::Profile {

struct [[deprecated("Use Windows.System.Profile.RetailInfo instead.")]] RetailMode
{
    RetailMode() = delete;
    [[deprecated("Use Windows.System.Profile.IRetailInfoStatics instead.")]] static bool RetailModeEnabled();
};

}
