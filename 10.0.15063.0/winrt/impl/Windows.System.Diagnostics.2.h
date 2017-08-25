// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.System.Diagnostics.1.h"

WINRT_EXPORT namespace winrt::Windows::System::Diagnostics {

struct WINRT_EBO ProcessCpuUsage :
    Windows::System::Diagnostics::IProcessCpuUsage
{
    ProcessCpuUsage(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ProcessCpuUsageReport :
    Windows::System::Diagnostics::IProcessCpuUsageReport
{
    ProcessCpuUsageReport(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ProcessDiagnosticInfo :
    Windows::System::Diagnostics::IProcessDiagnosticInfo
{
    ProcessDiagnosticInfo(std::nullptr_t) noexcept {}
    static Windows::Foundation::Collections::IVectorView<Windows::System::Diagnostics::ProcessDiagnosticInfo> GetForProcesses();
    static Windows::System::Diagnostics::ProcessDiagnosticInfo GetForCurrentProcess();
};

struct WINRT_EBO ProcessDiskUsage :
    Windows::System::Diagnostics::IProcessDiskUsage
{
    ProcessDiskUsage(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ProcessDiskUsageReport :
    Windows::System::Diagnostics::IProcessDiskUsageReport
{
    ProcessDiskUsageReport(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ProcessMemoryUsage :
    Windows::System::Diagnostics::IProcessMemoryUsage
{
    ProcessMemoryUsage(std::nullptr_t) noexcept {}
};

struct WINRT_EBO ProcessMemoryUsageReport :
    Windows::System::Diagnostics::IProcessMemoryUsageReport
{
    ProcessMemoryUsageReport(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SystemCpuUsage :
    Windows::System::Diagnostics::ISystemCpuUsage
{
    SystemCpuUsage(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SystemCpuUsageReport :
    Windows::System::Diagnostics::ISystemCpuUsageReport
{
    SystemCpuUsageReport(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SystemDiagnosticInfo :
    Windows::System::Diagnostics::ISystemDiagnosticInfo
{
    SystemDiagnosticInfo(std::nullptr_t) noexcept {}
    static Windows::System::Diagnostics::SystemDiagnosticInfo GetForCurrentSystem();
};

struct WINRT_EBO SystemMemoryUsage :
    Windows::System::Diagnostics::ISystemMemoryUsage
{
    SystemMemoryUsage(std::nullptr_t) noexcept {}
};

struct WINRT_EBO SystemMemoryUsageReport :
    Windows::System::Diagnostics::ISystemMemoryUsageReport
{
    SystemMemoryUsageReport(std::nullptr_t) noexcept {}
};

}
