// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Security.Cryptography.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Security::Cryptography {

struct ICryptographicBufferStatics :
    Windows::Foundation::IInspectable,
    impl::consume<ICryptographicBufferStatics>
{
    ICryptographicBufferStatics(std::nullptr_t = nullptr) noexcept {}
};

}

}
