// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.ExtendedExecution.Foreground.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::ApplicationModel::ExtendedExecution::Foreground {

struct WINRT_EBO ExtendedExecutionForegroundRevokedEventArgs :
    Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundRevokedEventArgs
{
    ExtendedExecutionForegroundRevokedEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ExtendedExecutionForegroundSession :
    Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession
{
    ExtendedExecutionForegroundSession(std::nullptr_t) noexcept {}
    ExtendedExecutionForegroundSession();
};

}

}
