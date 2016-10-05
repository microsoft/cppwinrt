// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.System.Diagnostics.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_74ab2473_9624_5a06_9025_6d91e622bf8e
#define WINRT_GENERIC_74ab2473_9624_5a06_9025_6d91e622bf8e
template <> struct __declspec(uuid("74ab2473-9624-5a06-9025-6d91e622bf8e")) __declspec(novtable) IVectorView<Windows::System::Diagnostics::ProcessDiagnosticInfo> : impl_IVectorView<Windows::System::Diagnostics::ProcessDiagnosticInfo> {};
#endif

#ifndef WINRT_GENERIC_a89b4418_4c3b_5f49_b957_785697c99abf
#define WINRT_GENERIC_a89b4418_4c3b_5f49_b957_785697c99abf
template <> struct __declspec(uuid("a89b4418-4c3b-5f49-b957-785697c99abf")) __declspec(novtable) IIterator<Windows::System::Diagnostics::ProcessDiagnosticInfo> : impl_IIterator<Windows::System::Diagnostics::ProcessDiagnosticInfo> {};
#endif

#ifndef WINRT_GENERIC_97b73627_b296_5076_b8cd_6bd8a240e966
#define WINRT_GENERIC_97b73627_b296_5076_b8cd_6bd8a240e966
template <> struct __declspec(uuid("97b73627-b296-5076-b8cd-6bd8a240e966")) __declspec(novtable) IIterable<Windows::System::Diagnostics::ProcessDiagnosticInfo> : impl_IIterable<Windows::System::Diagnostics::ProcessDiagnosticInfo> {};
#endif


}

namespace Windows::System::Diagnostics {

template <typename D>
struct WINRT_EBO impl_IProcessCpuUsage
{
    Windows::System::Diagnostics::ProcessCpuUsageReport GetReport() const;
};

template <typename D>
struct WINRT_EBO impl_IProcessCpuUsageReport
{
    Windows::Foundation::TimeSpan KernelTime() const;
    Windows::Foundation::TimeSpan UserTime() const;
};

template <typename D>
struct WINRT_EBO impl_IProcessDiagnosticInfo
{
    uint32_t ProcessId() const;
    hstring ExecutableFileName() const;
    Windows::System::Diagnostics::ProcessDiagnosticInfo Parent() const;
    Windows::Foundation::DateTime ProcessStartTime() const;
    Windows::System::Diagnostics::ProcessDiskUsage DiskUsage() const;
    Windows::System::Diagnostics::ProcessMemoryUsage MemoryUsage() const;
    Windows::System::Diagnostics::ProcessCpuUsage CpuUsage() const;
};

template <typename D>
struct WINRT_EBO impl_IProcessDiagnosticInfoStatics
{
    Windows::Foundation::Collections::IVectorView<Windows::System::Diagnostics::ProcessDiagnosticInfo> GetForProcesses() const;
    Windows::System::Diagnostics::ProcessDiagnosticInfo GetForCurrentProcess() const;
};

template <typename D>
struct WINRT_EBO impl_IProcessDiskUsage
{
    Windows::System::Diagnostics::ProcessDiskUsageReport GetReport() const;
};

template <typename D>
struct WINRT_EBO impl_IProcessDiskUsageReport
{
    int64_t ReadOperationCount() const;
    int64_t WriteOperationCount() const;
    int64_t OtherOperationCount() const;
    int64_t BytesReadCount() const;
    int64_t BytesWrittenCount() const;
    int64_t OtherBytesCount() const;
};

template <typename D>
struct WINRT_EBO impl_IProcessMemoryUsage
{
    Windows::System::Diagnostics::ProcessMemoryUsageReport GetReport() const;
};

template <typename D>
struct WINRT_EBO impl_IProcessMemoryUsageReport
{
    uint64_t NonPagedPoolSizeInBytes() const;
    uint32_t PageFaultCount() const;
    uint64_t PageFileSizeInBytes() const;
    uint64_t PagedPoolSizeInBytes() const;
    uint64_t PeakNonPagedPoolSizeInBytes() const;
    uint64_t PeakPageFileSizeInBytes() const;
    uint64_t PeakPagedPoolSizeInBytes() const;
    uint64_t PeakVirtualMemorySizeInBytes() const;
    uint64_t PeakWorkingSetSizeInBytes() const;
    uint64_t PrivatePageCount() const;
    uint64_t VirtualMemorySizeInBytes() const;
    uint64_t WorkingSetSizeInBytes() const;
};

struct IProcessCpuUsage :
    Windows::IInspectable,
    impl::consume<IProcessCpuUsage>
{
    IProcessCpuUsage(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IProcessCpuUsage>(m_ptr); }
};

struct IProcessCpuUsageReport :
    Windows::IInspectable,
    impl::consume<IProcessCpuUsageReport>
{
    IProcessCpuUsageReport(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IProcessCpuUsageReport>(m_ptr); }
};

struct IProcessDiagnosticInfo :
    Windows::IInspectable,
    impl::consume<IProcessDiagnosticInfo>
{
    IProcessDiagnosticInfo(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IProcessDiagnosticInfo>(m_ptr); }
};

struct IProcessDiagnosticInfoStatics :
    Windows::IInspectable,
    impl::consume<IProcessDiagnosticInfoStatics>
{
    IProcessDiagnosticInfoStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IProcessDiagnosticInfoStatics>(m_ptr); }
};

struct IProcessDiskUsage :
    Windows::IInspectable,
    impl::consume<IProcessDiskUsage>
{
    IProcessDiskUsage(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IProcessDiskUsage>(m_ptr); }
};

struct IProcessDiskUsageReport :
    Windows::IInspectable,
    impl::consume<IProcessDiskUsageReport>
{
    IProcessDiskUsageReport(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IProcessDiskUsageReport>(m_ptr); }
};

struct IProcessMemoryUsage :
    Windows::IInspectable,
    impl::consume<IProcessMemoryUsage>
{
    IProcessMemoryUsage(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IProcessMemoryUsage>(m_ptr); }
};

struct IProcessMemoryUsageReport :
    Windows::IInspectable,
    impl::consume<IProcessMemoryUsageReport>
{
    IProcessMemoryUsageReport(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IProcessMemoryUsageReport>(m_ptr); }
};

}

}
