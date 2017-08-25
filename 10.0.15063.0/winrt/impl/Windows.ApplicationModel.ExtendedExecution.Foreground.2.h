// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.ApplicationModel.ExtendedExecution.Foreground.1.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::ExtendedExecution::Foreground {

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
