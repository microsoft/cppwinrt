// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.System.RemoteDesktop.1.h"

WINRT_EXPORT namespace winrt::Windows::System::RemoteDesktop {

}

namespace winrt::impl {

}

WINRT_EXPORT namespace winrt::Windows::System::RemoteDesktop {

struct InteractiveSession
{
    InteractiveSession() = delete;
    static bool IsRemote();
};

}
