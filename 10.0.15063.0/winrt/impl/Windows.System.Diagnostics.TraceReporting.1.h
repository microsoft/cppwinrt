// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.System.Diagnostics.TraceReporting.0.h"

WINRT_EXPORT namespace winrt::Windows::System::Diagnostics::TraceReporting {

struct WINRT_EBO IPlatformDiagnosticActionsStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlatformDiagnosticActionsStatics>
{
    IPlatformDiagnosticActionsStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPlatformDiagnosticTraceInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlatformDiagnosticTraceInfo>
{
    IPlatformDiagnosticTraceInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IPlatformDiagnosticTraceRuntimeInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IPlatformDiagnosticTraceRuntimeInfo>
{
    IPlatformDiagnosticTraceRuntimeInfo(std::nullptr_t = nullptr) noexcept {}
};

}
