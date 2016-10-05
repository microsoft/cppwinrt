// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Phone.System.Profile.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Phone::System::Profile {

struct RetailMode
{
    RetailMode() = delete;
    static bool RetailModeEnabled();
};

}

}
