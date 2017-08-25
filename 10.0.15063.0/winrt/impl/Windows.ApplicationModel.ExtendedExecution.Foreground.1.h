// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.ApplicationModel.ExtendedExecution.Foreground.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::ExtendedExecution::Foreground {

struct WINRT_EBO IExtendedExecutionForegroundRevokedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IExtendedExecutionForegroundRevokedEventArgs>
{
    IExtendedExecutionForegroundRevokedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IExtendedExecutionForegroundSession :
    Windows::Foundation::IInspectable,
    impl::consume_t<IExtendedExecutionForegroundSession>,
    impl::require<IExtendedExecutionForegroundSession, Windows::Foundation::IClosable>
{
    IExtendedExecutionForegroundSession(std::nullptr_t = nullptr) noexcept {}
};

}
