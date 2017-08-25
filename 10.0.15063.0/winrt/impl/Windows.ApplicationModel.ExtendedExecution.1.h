// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.ApplicationModel.ExtendedExecution.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::ExtendedExecution {

struct WINRT_EBO IExtendedExecutionRevokedEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<IExtendedExecutionRevokedEventArgs>
{
    IExtendedExecutionRevokedEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IExtendedExecutionSession :
    Windows::Foundation::IInspectable,
    impl::consume_t<IExtendedExecutionSession>,
    impl::require<IExtendedExecutionSession, Windows::Foundation::IClosable>
{
    IExtendedExecutionSession(std::nullptr_t = nullptr) noexcept {}
};

}
