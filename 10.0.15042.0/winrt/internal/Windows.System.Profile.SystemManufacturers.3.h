// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.System.Profile.SystemManufacturers.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::System::Profile::SystemManufacturers {

struct SmbiosInformation
{
    SmbiosInformation() = delete;
    static hstring SerialNumber();
};

}

}
