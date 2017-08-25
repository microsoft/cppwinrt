// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.System.Profile.SystemManufacturers.1.h"

WINRT_EXPORT namespace winrt::Windows::System::Profile::SystemManufacturers {

struct SmbiosInformation
{
    SmbiosInformation() = delete;
    static hstring SerialNumber();
};

}
