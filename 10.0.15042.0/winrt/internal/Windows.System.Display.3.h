// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.System.Display.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::System::Display {

struct WINRT_EBO DisplayRequest :
    Windows::System::Display::IDisplayRequest
{
    DisplayRequest(std::nullptr_t) noexcept {}
    DisplayRequest();
};

}

}
