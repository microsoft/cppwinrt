// C++ for the Windows Runtime v1.0.private
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.Graphics.Display.Core.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::Graphics::Display::Core {

struct WINRT_EBO HdmiDisplayInformation :
    Windows::Graphics::Display::Core::IHdmiDisplayInformation
{
    HdmiDisplayInformation(std::nullptr_t) noexcept {}
    static Windows::Graphics::Display::Core::HdmiDisplayInformation GetForCurrentView();
};

struct WINRT_EBO HdmiDisplayMode :
    Windows::Graphics::Display::Core::IHdmiDisplayMode
{
    HdmiDisplayMode(std::nullptr_t) noexcept {}
};

}

}
