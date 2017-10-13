// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.System.Profile.SystemManufacturers.1.h"

WINRT_EXPORT namespace winrt::Windows::System::Profile::SystemManufacturers {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::System::Profile::SystemManufacturers {

struct WINRT_EBO OemSupportInfo :
    Windows::System::Profile::SystemManufacturers::IOemSupportInfo
{
    OemSupportInfo(std::nullptr_t) noexcept {}
};

struct SmbiosInformation
{
    SmbiosInformation() = delete;
    static hstring SerialNumber();
};

struct SystemSupportInfo
{
    SystemSupportInfo() = delete;
    static hstring LocalSystemEdition();
    static Windows::System::Profile::SystemManufacturers::OemSupportInfo OemSupportInfo();
};

}
