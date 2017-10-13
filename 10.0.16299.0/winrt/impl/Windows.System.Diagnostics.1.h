// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Data.Json.0.h"
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.System.0.h"
#include "winrt/impl/Windows.System.Diagnostics.0.h"

WINRT_EXPORT namespace winrt::Windows::System::Diagnostics {

struct WINRT_EBO IDiagnosticActionResult :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDiagnosticActionResult>
{
    IDiagnosticActionResult(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDiagnosticInvoker :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDiagnosticInvoker>
{
    IDiagnosticInvoker(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IDiagnosticInvokerStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IDiagnosticInvokerStatics>
{
    IDiagnosticInvokerStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProcessCpuUsage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProcessCpuUsage>
{
    IProcessCpuUsage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProcessCpuUsageReport :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProcessCpuUsageReport>
{
    IProcessCpuUsageReport(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProcessDiagnosticInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProcessDiagnosticInfo>
{
    IProcessDiagnosticInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProcessDiagnosticInfo2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProcessDiagnosticInfo2>
{
    IProcessDiagnosticInfo2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProcessDiagnosticInfoStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProcessDiagnosticInfoStatics>
{
    IProcessDiagnosticInfoStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProcessDiagnosticInfoStatics2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProcessDiagnosticInfoStatics2>
{
    IProcessDiagnosticInfoStatics2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProcessDiskUsage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProcessDiskUsage>
{
    IProcessDiskUsage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProcessDiskUsageReport :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProcessDiskUsageReport>
{
    IProcessDiskUsageReport(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProcessMemoryUsage :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProcessMemoryUsage>
{
    IProcessMemoryUsage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO IProcessMemoryUsageReport :
    Windows::Foundation::IInspectable,
    impl::consume_t<IProcessMemoryUsageReport>
{
    IProcessMemoryUsageReport(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISystemCpuUsage :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemCpuUsage>
{
    ISystemCpuUsage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISystemCpuUsageReport :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemCpuUsageReport>
{
    ISystemCpuUsageReport(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISystemDiagnosticInfo :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemDiagnosticInfo>
{
    ISystemDiagnosticInfo(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISystemDiagnosticInfoStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemDiagnosticInfoStatics>
{
    ISystemDiagnosticInfoStatics(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISystemMemoryUsage :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemMemoryUsage>
{
    ISystemMemoryUsage(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO ISystemMemoryUsageReport :
    Windows::Foundation::IInspectable,
    impl::consume_t<ISystemMemoryUsageReport>
{
    ISystemMemoryUsageReport(std::nullptr_t = nullptr) noexcept {}
};

}
