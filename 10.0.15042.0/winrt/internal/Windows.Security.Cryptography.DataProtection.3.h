// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Security.Cryptography.DataProtection.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Security::Cryptography::DataProtection {

struct WINRT_EBO DataProtectionProvider :
    Windows::Security::Cryptography::DataProtection::IDataProtectionProvider
{
    DataProtectionProvider(std::nullptr_t) noexcept {}
    DataProtectionProvider();
    DataProtectionProvider(hstring_view protectionDescriptor);
};

}

}
