// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.System.Diagnostics.3.h"
#include "Windows.System.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::System::Diagnostics::IProcessCpuUsage> : produce_base<D, Windows::System::Diagnostics::IProcessCpuUsage>
{
    HRESULT __stdcall abi_GetReport(impl::abi_arg_out<Windows::System::Diagnostics::IProcessCpuUsageReport> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetReport());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::IProcessCpuUsageReport> : produce_base<D, Windows::System::Diagnostics::IProcessCpuUsageReport>
{
    HRESULT __stdcall get_KernelTime(impl::abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KernelTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserTime(impl::abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UserTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::IProcessDiagnosticInfo> : produce_base<D, Windows::System::Diagnostics::IProcessDiagnosticInfo>
{
    HRESULT __stdcall get_ProcessId(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProcessId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExecutableFileName(impl::abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExecutableFileName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Parent(impl::abi_arg_out<Windows::System::Diagnostics::IProcessDiagnosticInfo> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Parent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProcessStartTime(impl::abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProcessStartTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DiskUsage(impl::abi_arg_out<Windows::System::Diagnostics::IProcessDiskUsage> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DiskUsage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MemoryUsage(impl::abi_arg_out<Windows::System::Diagnostics::IProcessMemoryUsage> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MemoryUsage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CpuUsage(impl::abi_arg_out<Windows::System::Diagnostics::IProcessCpuUsage> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CpuUsage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::IProcessDiagnosticInfoStatics> : produce_base<D, Windows::System::Diagnostics::IProcessDiagnosticInfoStatics>
{
    HRESULT __stdcall abi_GetForProcesses(impl::abi_arg_out<Windows::Foundation::Collections::IVectorView<Windows::System::Diagnostics::ProcessDiagnosticInfo>> processes) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *processes = detach_abi(this->shim().GetForProcesses());
            return S_OK;
        }
        catch (...)
        {
            *processes = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetForCurrentProcess(impl::abi_arg_out<Windows::System::Diagnostics::IProcessDiagnosticInfo> processes) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *processes = detach_abi(this->shim().GetForCurrentProcess());
            return S_OK;
        }
        catch (...)
        {
            *processes = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::IProcessDiskUsage> : produce_base<D, Windows::System::Diagnostics::IProcessDiskUsage>
{
    HRESULT __stdcall abi_GetReport(impl::abi_arg_out<Windows::System::Diagnostics::IProcessDiskUsageReport> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetReport());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::IProcessDiskUsageReport> : produce_base<D, Windows::System::Diagnostics::IProcessDiskUsageReport>
{
    HRESULT __stdcall get_ReadOperationCount(int64_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ReadOperationCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WriteOperationCount(int64_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WriteOperationCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OtherOperationCount(int64_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OtherOperationCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BytesReadCount(int64_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BytesReadCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BytesWrittenCount(int64_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BytesWrittenCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OtherBytesCount(int64_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OtherBytesCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::IProcessMemoryUsage> : produce_base<D, Windows::System::Diagnostics::IProcessMemoryUsage>
{
    HRESULT __stdcall abi_GetReport(impl::abi_arg_out<Windows::System::Diagnostics::IProcessMemoryUsageReport> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetReport());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::IProcessMemoryUsageReport> : produce_base<D, Windows::System::Diagnostics::IProcessMemoryUsageReport>
{
    HRESULT __stdcall get_NonPagedPoolSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NonPagedPoolSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PageFaultCount(uint32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PageFaultCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PageFileSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PageFileSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PagedPoolSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PagedPoolSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PeakNonPagedPoolSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PeakNonPagedPoolSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PeakPageFileSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PeakPageFileSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PeakPagedPoolSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PeakPagedPoolSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PeakVirtualMemorySizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PeakVirtualMemorySizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PeakWorkingSetSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PeakWorkingSetSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PrivatePageCount(uint64_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PrivatePageCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VirtualMemorySizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VirtualMemorySizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WorkingSetSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WorkingSetSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::ISystemCpuUsage> : produce_base<D, Windows::System::Diagnostics::ISystemCpuUsage>
{
    HRESULT __stdcall abi_GetReport(impl::abi_arg_out<Windows::System::Diagnostics::ISystemCpuUsageReport> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetReport());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::ISystemCpuUsageReport> : produce_base<D, Windows::System::Diagnostics::ISystemCpuUsageReport>
{
    HRESULT __stdcall get_KernelTime(impl::abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KernelTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UserTime(impl::abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UserTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IdleTime(impl::abi_arg_out<Windows::Foundation::TimeSpan> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IdleTime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::ISystemDiagnosticInfo> : produce_base<D, Windows::System::Diagnostics::ISystemDiagnosticInfo>
{
    HRESULT __stdcall get_MemoryUsage(impl::abi_arg_out<Windows::System::Diagnostics::ISystemMemoryUsage> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MemoryUsage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CpuUsage(impl::abi_arg_out<Windows::System::Diagnostics::ISystemCpuUsage> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CpuUsage());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::ISystemDiagnosticInfoStatics> : produce_base<D, Windows::System::Diagnostics::ISystemDiagnosticInfoStatics>
{
    HRESULT __stdcall abi_GetForCurrentSystem(impl::abi_arg_out<Windows::System::Diagnostics::ISystemDiagnosticInfo> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetForCurrentSystem());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::ISystemMemoryUsage> : produce_base<D, Windows::System::Diagnostics::ISystemMemoryUsage>
{
    HRESULT __stdcall abi_GetReport(impl::abi_arg_out<Windows::System::Diagnostics::ISystemMemoryUsageReport> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetReport());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::System::Diagnostics::ISystemMemoryUsageReport> : produce_base<D, Windows::System::Diagnostics::ISystemMemoryUsageReport>
{
    HRESULT __stdcall get_TotalPhysicalSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TotalPhysicalSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AvailableSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AvailableSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CommittedSizeInBytes(uint64_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CommittedSizeInBytes());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::System::Diagnostics {

template <typename D> uint32_t impl_IProcessDiagnosticInfo<D>::ProcessId() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IProcessDiagnosticInfo)->get_ProcessId(&value));
    return value;
}

template <typename D> hstring impl_IProcessDiagnosticInfo<D>::ExecutableFileName() const
{
    hstring value;
    check_hresult(WINRT_SHIM(IProcessDiagnosticInfo)->get_ExecutableFileName(put_abi(value)));
    return value;
}

template <typename D> Windows::System::Diagnostics::ProcessDiagnosticInfo impl_IProcessDiagnosticInfo<D>::Parent() const
{
    Windows::System::Diagnostics::ProcessDiagnosticInfo value { nullptr };
    check_hresult(WINRT_SHIM(IProcessDiagnosticInfo)->get_Parent(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IProcessDiagnosticInfo<D>::ProcessStartTime() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(WINRT_SHIM(IProcessDiagnosticInfo)->get_ProcessStartTime(put_abi(value)));
    return value;
}

template <typename D> Windows::System::Diagnostics::ProcessDiskUsage impl_IProcessDiagnosticInfo<D>::DiskUsage() const
{
    Windows::System::Diagnostics::ProcessDiskUsage value { nullptr };
    check_hresult(WINRT_SHIM(IProcessDiagnosticInfo)->get_DiskUsage(put_abi(value)));
    return value;
}

template <typename D> Windows::System::Diagnostics::ProcessMemoryUsage impl_IProcessDiagnosticInfo<D>::MemoryUsage() const
{
    Windows::System::Diagnostics::ProcessMemoryUsage value { nullptr };
    check_hresult(WINRT_SHIM(IProcessDiagnosticInfo)->get_MemoryUsage(put_abi(value)));
    return value;
}

template <typename D> Windows::System::Diagnostics::ProcessCpuUsage impl_IProcessDiagnosticInfo<D>::CpuUsage() const
{
    Windows::System::Diagnostics::ProcessCpuUsage value { nullptr };
    check_hresult(WINRT_SHIM(IProcessDiagnosticInfo)->get_CpuUsage(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Collections::IVectorView<Windows::System::Diagnostics::ProcessDiagnosticInfo> impl_IProcessDiagnosticInfoStatics<D>::GetForProcesses() const
{
    Windows::Foundation::Collections::IVectorView<Windows::System::Diagnostics::ProcessDiagnosticInfo> processes;
    check_hresult(WINRT_SHIM(IProcessDiagnosticInfoStatics)->abi_GetForProcesses(put_abi(processes)));
    return processes;
}

template <typename D> Windows::System::Diagnostics::ProcessDiagnosticInfo impl_IProcessDiagnosticInfoStatics<D>::GetForCurrentProcess() const
{
    Windows::System::Diagnostics::ProcessDiagnosticInfo processes { nullptr };
    check_hresult(WINRT_SHIM(IProcessDiagnosticInfoStatics)->abi_GetForCurrentProcess(put_abi(processes)));
    return processes;
}

template <typename D> Windows::System::Diagnostics::ProcessMemoryUsageReport impl_IProcessMemoryUsage<D>::GetReport() const
{
    Windows::System::Diagnostics::ProcessMemoryUsageReport value { nullptr };
    check_hresult(WINRT_SHIM(IProcessMemoryUsage)->abi_GetReport(put_abi(value)));
    return value;
}

template <typename D> uint64_t impl_IProcessMemoryUsageReport<D>::NonPagedPoolSizeInBytes() const
{
    uint64_t value {};
    check_hresult(WINRT_SHIM(IProcessMemoryUsageReport)->get_NonPagedPoolSizeInBytes(&value));
    return value;
}

template <typename D> uint32_t impl_IProcessMemoryUsageReport<D>::PageFaultCount() const
{
    uint32_t value {};
    check_hresult(WINRT_SHIM(IProcessMemoryUsageReport)->get_PageFaultCount(&value));
    return value;
}

template <typename D> uint64_t impl_IProcessMemoryUsageReport<D>::PageFileSizeInBytes() const
{
    uint64_t value {};
    check_hresult(WINRT_SHIM(IProcessMemoryUsageReport)->get_PageFileSizeInBytes(&value));
    return value;
}

template <typename D> uint64_t impl_IProcessMemoryUsageReport<D>::PagedPoolSizeInBytes() const
{
    uint64_t value {};
    check_hresult(WINRT_SHIM(IProcessMemoryUsageReport)->get_PagedPoolSizeInBytes(&value));
    return value;
}

template <typename D> uint64_t impl_IProcessMemoryUsageReport<D>::PeakNonPagedPoolSizeInBytes() const
{
    uint64_t value {};
    check_hresult(WINRT_SHIM(IProcessMemoryUsageReport)->get_PeakNonPagedPoolSizeInBytes(&value));
    return value;
}

template <typename D> uint64_t impl_IProcessMemoryUsageReport<D>::PeakPageFileSizeInBytes() const
{
    uint64_t value {};
    check_hresult(WINRT_SHIM(IProcessMemoryUsageReport)->get_PeakPageFileSizeInBytes(&value));
    return value;
}

template <typename D> uint64_t impl_IProcessMemoryUsageReport<D>::PeakPagedPoolSizeInBytes() const
{
    uint64_t value {};
    check_hresult(WINRT_SHIM(IProcessMemoryUsageReport)->get_PeakPagedPoolSizeInBytes(&value));
    return value;
}

template <typename D> uint64_t impl_IProcessMemoryUsageReport<D>::PeakVirtualMemorySizeInBytes() const
{
    uint64_t value {};
    check_hresult(WINRT_SHIM(IProcessMemoryUsageReport)->get_PeakVirtualMemorySizeInBytes(&value));
    return value;
}

template <typename D> uint64_t impl_IProcessMemoryUsageReport<D>::PeakWorkingSetSizeInBytes() const
{
    uint64_t value {};
    check_hresult(WINRT_SHIM(IProcessMemoryUsageReport)->get_PeakWorkingSetSizeInBytes(&value));
    return value;
}

template <typename D> uint64_t impl_IProcessMemoryUsageReport<D>::PrivatePageCount() const
{
    uint64_t value {};
    check_hresult(WINRT_SHIM(IProcessMemoryUsageReport)->get_PrivatePageCount(&value));
    return value;
}

template <typename D> uint64_t impl_IProcessMemoryUsageReport<D>::VirtualMemorySizeInBytes() const
{
    uint64_t value {};
    check_hresult(WINRT_SHIM(IProcessMemoryUsageReport)->get_VirtualMemorySizeInBytes(&value));
    return value;
}

template <typename D> uint64_t impl_IProcessMemoryUsageReport<D>::WorkingSetSizeInBytes() const
{
    uint64_t value {};
    check_hresult(WINRT_SHIM(IProcessMemoryUsageReport)->get_WorkingSetSizeInBytes(&value));
    return value;
}

template <typename D> Windows::System::Diagnostics::ProcessDiskUsageReport impl_IProcessDiskUsage<D>::GetReport() const
{
    Windows::System::Diagnostics::ProcessDiskUsageReport value { nullptr };
    check_hresult(WINRT_SHIM(IProcessDiskUsage)->abi_GetReport(put_abi(value)));
    return value;
}

template <typename D> int64_t impl_IProcessDiskUsageReport<D>::ReadOperationCount() const
{
    int64_t value {};
    check_hresult(WINRT_SHIM(IProcessDiskUsageReport)->get_ReadOperationCount(&value));
    return value;
}

template <typename D> int64_t impl_IProcessDiskUsageReport<D>::WriteOperationCount() const
{
    int64_t value {};
    check_hresult(WINRT_SHIM(IProcessDiskUsageReport)->get_WriteOperationCount(&value));
    return value;
}

template <typename D> int64_t impl_IProcessDiskUsageReport<D>::OtherOperationCount() const
{
    int64_t value {};
    check_hresult(WINRT_SHIM(IProcessDiskUsageReport)->get_OtherOperationCount(&value));
    return value;
}

template <typename D> int64_t impl_IProcessDiskUsageReport<D>::BytesReadCount() const
{
    int64_t value {};
    check_hresult(WINRT_SHIM(IProcessDiskUsageReport)->get_BytesReadCount(&value));
    return value;
}

template <typename D> int64_t impl_IProcessDiskUsageReport<D>::BytesWrittenCount() const
{
    int64_t value {};
    check_hresult(WINRT_SHIM(IProcessDiskUsageReport)->get_BytesWrittenCount(&value));
    return value;
}

template <typename D> int64_t impl_IProcessDiskUsageReport<D>::OtherBytesCount() const
{
    int64_t value {};
    check_hresult(WINRT_SHIM(IProcessDiskUsageReport)->get_OtherBytesCount(&value));
    return value;
}

template <typename D> Windows::System::Diagnostics::ProcessCpuUsageReport impl_IProcessCpuUsage<D>::GetReport() const
{
    Windows::System::Diagnostics::ProcessCpuUsageReport value { nullptr };
    check_hresult(WINRT_SHIM(IProcessCpuUsage)->abi_GetReport(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IProcessCpuUsageReport<D>::KernelTime() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(WINRT_SHIM(IProcessCpuUsageReport)->get_KernelTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_IProcessCpuUsageReport<D>::UserTime() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(WINRT_SHIM(IProcessCpuUsageReport)->get_UserTime(put_abi(value)));
    return value;
}

template <typename D> Windows::System::Diagnostics::SystemMemoryUsage impl_ISystemDiagnosticInfo<D>::MemoryUsage() const
{
    Windows::System::Diagnostics::SystemMemoryUsage value { nullptr };
    check_hresult(WINRT_SHIM(ISystemDiagnosticInfo)->get_MemoryUsage(put_abi(value)));
    return value;
}

template <typename D> Windows::System::Diagnostics::SystemCpuUsage impl_ISystemDiagnosticInfo<D>::CpuUsage() const
{
    Windows::System::Diagnostics::SystemCpuUsage value { nullptr };
    check_hresult(WINRT_SHIM(ISystemDiagnosticInfo)->get_CpuUsage(put_abi(value)));
    return value;
}

template <typename D> Windows::System::Diagnostics::SystemDiagnosticInfo impl_ISystemDiagnosticInfoStatics<D>::GetForCurrentSystem() const
{
    Windows::System::Diagnostics::SystemDiagnosticInfo value { nullptr };
    check_hresult(WINRT_SHIM(ISystemDiagnosticInfoStatics)->abi_GetForCurrentSystem(put_abi(value)));
    return value;
}

template <typename D> Windows::System::Diagnostics::SystemMemoryUsageReport impl_ISystemMemoryUsage<D>::GetReport() const
{
    Windows::System::Diagnostics::SystemMemoryUsageReport value { nullptr };
    check_hresult(WINRT_SHIM(ISystemMemoryUsage)->abi_GetReport(put_abi(value)));
    return value;
}

template <typename D> uint64_t impl_ISystemMemoryUsageReport<D>::TotalPhysicalSizeInBytes() const
{
    uint64_t value {};
    check_hresult(WINRT_SHIM(ISystemMemoryUsageReport)->get_TotalPhysicalSizeInBytes(&value));
    return value;
}

template <typename D> uint64_t impl_ISystemMemoryUsageReport<D>::AvailableSizeInBytes() const
{
    uint64_t value {};
    check_hresult(WINRT_SHIM(ISystemMemoryUsageReport)->get_AvailableSizeInBytes(&value));
    return value;
}

template <typename D> uint64_t impl_ISystemMemoryUsageReport<D>::CommittedSizeInBytes() const
{
    uint64_t value {};
    check_hresult(WINRT_SHIM(ISystemMemoryUsageReport)->get_CommittedSizeInBytes(&value));
    return value;
}

template <typename D> Windows::System::Diagnostics::SystemCpuUsageReport impl_ISystemCpuUsage<D>::GetReport() const
{
    Windows::System::Diagnostics::SystemCpuUsageReport value { nullptr };
    check_hresult(WINRT_SHIM(ISystemCpuUsage)->abi_GetReport(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_ISystemCpuUsageReport<D>::KernelTime() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(WINRT_SHIM(ISystemCpuUsageReport)->get_KernelTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_ISystemCpuUsageReport<D>::UserTime() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(WINRT_SHIM(ISystemCpuUsageReport)->get_UserTime(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan impl_ISystemCpuUsageReport<D>::IdleTime() const
{
    Windows::Foundation::TimeSpan value {};
    check_hresult(WINRT_SHIM(ISystemCpuUsageReport)->get_IdleTime(put_abi(value)));
    return value;
}

inline Windows::Foundation::Collections::IVectorView<Windows::System::Diagnostics::ProcessDiagnosticInfo> ProcessDiagnosticInfo::GetForProcesses()
{
    return get_activation_factory<ProcessDiagnosticInfo, IProcessDiagnosticInfoStatics>().GetForProcesses();
}

inline Windows::System::Diagnostics::ProcessDiagnosticInfo ProcessDiagnosticInfo::GetForCurrentProcess()
{
    return get_activation_factory<ProcessDiagnosticInfo, IProcessDiagnosticInfoStatics>().GetForCurrentProcess();
}

inline Windows::System::Diagnostics::SystemDiagnosticInfo SystemDiagnosticInfo::GetForCurrentSystem()
{
    return get_activation_factory<SystemDiagnosticInfo, ISystemDiagnosticInfoStatics>().GetForCurrentSystem();
}

}

}

template<>
struct std::hash<winrt::Windows::System::Diagnostics::IProcessCpuUsage>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::IProcessCpuUsage & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::IProcessCpuUsageReport>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::IProcessCpuUsageReport & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::IProcessDiagnosticInfo>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::IProcessDiagnosticInfo & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::IProcessDiagnosticInfoStatics>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::IProcessDiagnosticInfoStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::IProcessDiskUsage>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::IProcessDiskUsage & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::IProcessDiskUsageReport>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::IProcessDiskUsageReport & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::IProcessMemoryUsage>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::IProcessMemoryUsage & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::IProcessMemoryUsageReport>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::IProcessMemoryUsageReport & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::ISystemCpuUsage>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::ISystemCpuUsage & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::ISystemCpuUsageReport>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::ISystemCpuUsageReport & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::ISystemDiagnosticInfo>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::ISystemDiagnosticInfo & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::ISystemDiagnosticInfoStatics>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::ISystemDiagnosticInfoStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::ISystemMemoryUsage>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::ISystemMemoryUsage & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::ISystemMemoryUsageReport>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::ISystemMemoryUsageReport & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::ProcessCpuUsage>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::ProcessCpuUsage & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::ProcessCpuUsageReport>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::ProcessCpuUsageReport & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::ProcessDiagnosticInfo>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::ProcessDiagnosticInfo & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::ProcessDiskUsage>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::ProcessDiskUsage & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::ProcessDiskUsageReport>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::ProcessDiskUsageReport & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::ProcessMemoryUsage>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::ProcessMemoryUsage & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::ProcessMemoryUsageReport>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::ProcessMemoryUsageReport & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::SystemCpuUsage>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::SystemCpuUsage & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::SystemCpuUsageReport>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::SystemCpuUsageReport & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::SystemDiagnosticInfo>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::SystemDiagnosticInfo & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::SystemMemoryUsage>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::SystemMemoryUsage & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::System::Diagnostics::SystemMemoryUsageReport>
{
    size_t operator()(const winrt::Windows::System::Diagnostics::SystemMemoryUsageReport & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
