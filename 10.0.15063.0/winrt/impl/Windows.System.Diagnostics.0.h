// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::System::Diagnostics {

struct IProcessCpuUsage;
struct IProcessCpuUsageReport;
struct IProcessDiagnosticInfo;
struct IProcessDiagnosticInfoStatics;
struct IProcessDiskUsage;
struct IProcessDiskUsageReport;
struct IProcessMemoryUsage;
struct IProcessMemoryUsageReport;
struct ISystemCpuUsage;
struct ISystemCpuUsageReport;
struct ISystemDiagnosticInfo;
struct ISystemDiagnosticInfoStatics;
struct ISystemMemoryUsage;
struct ISystemMemoryUsageReport;
struct ProcessCpuUsage;
struct ProcessCpuUsageReport;
struct ProcessDiagnosticInfo;
struct ProcessDiskUsage;
struct ProcessDiskUsageReport;
struct ProcessMemoryUsage;
struct ProcessMemoryUsageReport;
struct SystemCpuUsage;
struct SystemCpuUsageReport;
struct SystemDiagnosticInfo;
struct SystemMemoryUsage;
struct SystemMemoryUsageReport;

}

namespace winrt::impl {

template <> struct category<Windows::System::Diagnostics::IProcessCpuUsage>{ using type = interface_category; };
template <> struct category<Windows::System::Diagnostics::IProcessCpuUsageReport>{ using type = interface_category; };
template <> struct category<Windows::System::Diagnostics::IProcessDiagnosticInfo>{ using type = interface_category; };
template <> struct category<Windows::System::Diagnostics::IProcessDiagnosticInfoStatics>{ using type = interface_category; };
template <> struct category<Windows::System::Diagnostics::IProcessDiskUsage>{ using type = interface_category; };
template <> struct category<Windows::System::Diagnostics::IProcessDiskUsageReport>{ using type = interface_category; };
template <> struct category<Windows::System::Diagnostics::IProcessMemoryUsage>{ using type = interface_category; };
template <> struct category<Windows::System::Diagnostics::IProcessMemoryUsageReport>{ using type = interface_category; };
template <> struct category<Windows::System::Diagnostics::ISystemCpuUsage>{ using type = interface_category; };
template <> struct category<Windows::System::Diagnostics::ISystemCpuUsageReport>{ using type = interface_category; };
template <> struct category<Windows::System::Diagnostics::ISystemDiagnosticInfo>{ using type = interface_category; };
template <> struct category<Windows::System::Diagnostics::ISystemDiagnosticInfoStatics>{ using type = interface_category; };
template <> struct category<Windows::System::Diagnostics::ISystemMemoryUsage>{ using type = interface_category; };
template <> struct category<Windows::System::Diagnostics::ISystemMemoryUsageReport>{ using type = interface_category; };
template <> struct category<Windows::System::Diagnostics::ProcessCpuUsage>{ using type = class_category; };
template <> struct category<Windows::System::Diagnostics::ProcessCpuUsageReport>{ using type = class_category; };
template <> struct category<Windows::System::Diagnostics::ProcessDiagnosticInfo>{ using type = class_category; };
template <> struct category<Windows::System::Diagnostics::ProcessDiskUsage>{ using type = class_category; };
template <> struct category<Windows::System::Diagnostics::ProcessDiskUsageReport>{ using type = class_category; };
template <> struct category<Windows::System::Diagnostics::ProcessMemoryUsage>{ using type = class_category; };
template <> struct category<Windows::System::Diagnostics::ProcessMemoryUsageReport>{ using type = class_category; };
template <> struct category<Windows::System::Diagnostics::SystemCpuUsage>{ using type = class_category; };
template <> struct category<Windows::System::Diagnostics::SystemCpuUsageReport>{ using type = class_category; };
template <> struct category<Windows::System::Diagnostics::SystemDiagnosticInfo>{ using type = class_category; };
template <> struct category<Windows::System::Diagnostics::SystemMemoryUsage>{ using type = class_category; };
template <> struct category<Windows::System::Diagnostics::SystemMemoryUsageReport>{ using type = class_category; };
template <> struct name<Windows::System::Diagnostics::IProcessCpuUsage>{ static constexpr auto & value{ L"Windows.System.Diagnostics.IProcessCpuUsage" }; };
template <> struct name<Windows::System::Diagnostics::IProcessCpuUsageReport>{ static constexpr auto & value{ L"Windows.System.Diagnostics.IProcessCpuUsageReport" }; };
template <> struct name<Windows::System::Diagnostics::IProcessDiagnosticInfo>{ static constexpr auto & value{ L"Windows.System.Diagnostics.IProcessDiagnosticInfo" }; };
template <> struct name<Windows::System::Diagnostics::IProcessDiagnosticInfoStatics>{ static constexpr auto & value{ L"Windows.System.Diagnostics.IProcessDiagnosticInfoStatics" }; };
template <> struct name<Windows::System::Diagnostics::IProcessDiskUsage>{ static constexpr auto & value{ L"Windows.System.Diagnostics.IProcessDiskUsage" }; };
template <> struct name<Windows::System::Diagnostics::IProcessDiskUsageReport>{ static constexpr auto & value{ L"Windows.System.Diagnostics.IProcessDiskUsageReport" }; };
template <> struct name<Windows::System::Diagnostics::IProcessMemoryUsage>{ static constexpr auto & value{ L"Windows.System.Diagnostics.IProcessMemoryUsage" }; };
template <> struct name<Windows::System::Diagnostics::IProcessMemoryUsageReport>{ static constexpr auto & value{ L"Windows.System.Diagnostics.IProcessMemoryUsageReport" }; };
template <> struct name<Windows::System::Diagnostics::ISystemCpuUsage>{ static constexpr auto & value{ L"Windows.System.Diagnostics.ISystemCpuUsage" }; };
template <> struct name<Windows::System::Diagnostics::ISystemCpuUsageReport>{ static constexpr auto & value{ L"Windows.System.Diagnostics.ISystemCpuUsageReport" }; };
template <> struct name<Windows::System::Diagnostics::ISystemDiagnosticInfo>{ static constexpr auto & value{ L"Windows.System.Diagnostics.ISystemDiagnosticInfo" }; };
template <> struct name<Windows::System::Diagnostics::ISystemDiagnosticInfoStatics>{ static constexpr auto & value{ L"Windows.System.Diagnostics.ISystemDiagnosticInfoStatics" }; };
template <> struct name<Windows::System::Diagnostics::ISystemMemoryUsage>{ static constexpr auto & value{ L"Windows.System.Diagnostics.ISystemMemoryUsage" }; };
template <> struct name<Windows::System::Diagnostics::ISystemMemoryUsageReport>{ static constexpr auto & value{ L"Windows.System.Diagnostics.ISystemMemoryUsageReport" }; };
template <> struct name<Windows::System::Diagnostics::ProcessCpuUsage>{ static constexpr auto & value{ L"Windows.System.Diagnostics.ProcessCpuUsage" }; };
template <> struct name<Windows::System::Diagnostics::ProcessCpuUsageReport>{ static constexpr auto & value{ L"Windows.System.Diagnostics.ProcessCpuUsageReport" }; };
template <> struct name<Windows::System::Diagnostics::ProcessDiagnosticInfo>{ static constexpr auto & value{ L"Windows.System.Diagnostics.ProcessDiagnosticInfo" }; };
template <> struct name<Windows::System::Diagnostics::ProcessDiskUsage>{ static constexpr auto & value{ L"Windows.System.Diagnostics.ProcessDiskUsage" }; };
template <> struct name<Windows::System::Diagnostics::ProcessDiskUsageReport>{ static constexpr auto & value{ L"Windows.System.Diagnostics.ProcessDiskUsageReport" }; };
template <> struct name<Windows::System::Diagnostics::ProcessMemoryUsage>{ static constexpr auto & value{ L"Windows.System.Diagnostics.ProcessMemoryUsage" }; };
template <> struct name<Windows::System::Diagnostics::ProcessMemoryUsageReport>{ static constexpr auto & value{ L"Windows.System.Diagnostics.ProcessMemoryUsageReport" }; };
template <> struct name<Windows::System::Diagnostics::SystemCpuUsage>{ static constexpr auto & value{ L"Windows.System.Diagnostics.SystemCpuUsage" }; };
template <> struct name<Windows::System::Diagnostics::SystemCpuUsageReport>{ static constexpr auto & value{ L"Windows.System.Diagnostics.SystemCpuUsageReport" }; };
template <> struct name<Windows::System::Diagnostics::SystemDiagnosticInfo>{ static constexpr auto & value{ L"Windows.System.Diagnostics.SystemDiagnosticInfo" }; };
template <> struct name<Windows::System::Diagnostics::SystemMemoryUsage>{ static constexpr auto & value{ L"Windows.System.Diagnostics.SystemMemoryUsage" }; };
template <> struct name<Windows::System::Diagnostics::SystemMemoryUsageReport>{ static constexpr auto & value{ L"Windows.System.Diagnostics.SystemMemoryUsageReport" }; };
template <> struct guid<Windows::System::Diagnostics::IProcessCpuUsage>{ static constexpr GUID value{ 0x0BBB2472,0xC8BF,0x423A,{ 0xA8,0x10,0xB5,0x59,0xAE,0x43,0x54,0xE2 } }; };
template <> struct guid<Windows::System::Diagnostics::IProcessCpuUsageReport>{ static constexpr GUID value{ 0x8A6D9CAC,0x3987,0x4E2F,{ 0xA1,0x19,0x6B,0x5F,0xA2,0x14,0xF1,0xB4 } }; };
template <> struct guid<Windows::System::Diagnostics::IProcessDiagnosticInfo>{ static constexpr GUID value{ 0xE830B04B,0x300E,0x4EE6,{ 0xA0,0xAB,0x5B,0x5F,0x52,0x31,0xB4,0x34 } }; };
template <> struct guid<Windows::System::Diagnostics::IProcessDiagnosticInfoStatics>{ static constexpr GUID value{ 0x2F41B260,0xB49F,0x428C,{ 0xAA,0x0E,0x84,0x74,0x4F,0x49,0xCA,0x95 } }; };
template <> struct guid<Windows::System::Diagnostics::IProcessDiskUsage>{ static constexpr GUID value{ 0x5AD78BFD,0x7E51,0x4E53,{ 0xBF,0xAA,0x5A,0x6E,0xE1,0xAA,0xBB,0xF8 } }; };
template <> struct guid<Windows::System::Diagnostics::IProcessDiskUsageReport>{ static constexpr GUID value{ 0x401627FD,0x535D,0x4C1F,{ 0x81,0xB8,0xDA,0x54,0xE1,0xBE,0x63,0x5E } }; };
template <> struct guid<Windows::System::Diagnostics::IProcessMemoryUsage>{ static constexpr GUID value{ 0xF50B229B,0x827C,0x42B7,{ 0xB0,0x7C,0x0E,0x32,0x62,0x7E,0x6B,0x3E } }; };
template <> struct guid<Windows::System::Diagnostics::IProcessMemoryUsageReport>{ static constexpr GUID value{ 0xC2C77CBA,0x1951,0x4685,{ 0x85,0x32,0x7E,0x74,0x9E,0xCF,0x8E,0xEB } }; };
template <> struct guid<Windows::System::Diagnostics::ISystemCpuUsage>{ static constexpr GUID value{ 0x6037B3AC,0x02D6,0x4234,{ 0x83,0x62,0x7F,0xE3,0xAD,0xC8,0x1F,0x5F } }; };
template <> struct guid<Windows::System::Diagnostics::ISystemCpuUsageReport>{ static constexpr GUID value{ 0x2C26D0B2,0x9483,0x4F62,{ 0xAB,0x57,0x82,0xB2,0x9D,0x97,0x19,0xB8 } }; };
template <> struct guid<Windows::System::Diagnostics::ISystemDiagnosticInfo>{ static constexpr GUID value{ 0xA290FE05,0xDFF3,0x407F,{ 0x9A,0x1B,0x0B,0x2B,0x31,0x7C,0xA8,0x00 } }; };
template <> struct guid<Windows::System::Diagnostics::ISystemDiagnosticInfoStatics>{ static constexpr GUID value{ 0xD404AC21,0xFC7D,0x45F0,{ 0x9A,0x3F,0x39,0x20,0x3A,0xED,0x9F,0x7E } }; };
template <> struct guid<Windows::System::Diagnostics::ISystemMemoryUsage>{ static constexpr GUID value{ 0x17FFC595,0x1702,0x49CF,{ 0xAA,0x27,0x2F,0x0A,0x32,0x59,0x14,0x04 } }; };
template <> struct guid<Windows::System::Diagnostics::ISystemMemoryUsageReport>{ static constexpr GUID value{ 0x38663C87,0x2A9F,0x403A,{ 0xBD,0x19,0x2C,0xF3,0xE8,0x16,0x95,0x00 } }; };
template <> struct default_interface<Windows::System::Diagnostics::ProcessCpuUsage>{ using type = Windows::System::Diagnostics::IProcessCpuUsage; };
template <> struct default_interface<Windows::System::Diagnostics::ProcessCpuUsageReport>{ using type = Windows::System::Diagnostics::IProcessCpuUsageReport; };
template <> struct default_interface<Windows::System::Diagnostics::ProcessDiagnosticInfo>{ using type = Windows::System::Diagnostics::IProcessDiagnosticInfo; };
template <> struct default_interface<Windows::System::Diagnostics::ProcessDiskUsage>{ using type = Windows::System::Diagnostics::IProcessDiskUsage; };
template <> struct default_interface<Windows::System::Diagnostics::ProcessDiskUsageReport>{ using type = Windows::System::Diagnostics::IProcessDiskUsageReport; };
template <> struct default_interface<Windows::System::Diagnostics::ProcessMemoryUsage>{ using type = Windows::System::Diagnostics::IProcessMemoryUsage; };
template <> struct default_interface<Windows::System::Diagnostics::ProcessMemoryUsageReport>{ using type = Windows::System::Diagnostics::IProcessMemoryUsageReport; };
template <> struct default_interface<Windows::System::Diagnostics::SystemCpuUsage>{ using type = Windows::System::Diagnostics::ISystemCpuUsage; };
template <> struct default_interface<Windows::System::Diagnostics::SystemCpuUsageReport>{ using type = Windows::System::Diagnostics::ISystemCpuUsageReport; };
template <> struct default_interface<Windows::System::Diagnostics::SystemDiagnosticInfo>{ using type = Windows::System::Diagnostics::ISystemDiagnosticInfo; };
template <> struct default_interface<Windows::System::Diagnostics::SystemMemoryUsage>{ using type = Windows::System::Diagnostics::ISystemMemoryUsage; };
template <> struct default_interface<Windows::System::Diagnostics::SystemMemoryUsageReport>{ using type = Windows::System::Diagnostics::ISystemMemoryUsageReport; };

template <typename D>
struct consume_Windows_System_Diagnostics_IProcessCpuUsage
{
    Windows::System::Diagnostics::ProcessCpuUsageReport GetReport() const;
};
template <> struct consume<Windows::System::Diagnostics::IProcessCpuUsage> { template <typename D> using type = consume_Windows_System_Diagnostics_IProcessCpuUsage<D>; };

template <typename D>
struct consume_Windows_System_Diagnostics_IProcessCpuUsageReport
{
    Windows::Foundation::TimeSpan KernelTime() const;
    Windows::Foundation::TimeSpan UserTime() const;
};
template <> struct consume<Windows::System::Diagnostics::IProcessCpuUsageReport> { template <typename D> using type = consume_Windows_System_Diagnostics_IProcessCpuUsageReport<D>; };

template <typename D>
struct consume_Windows_System_Diagnostics_IProcessDiagnosticInfo
{
    uint32_t ProcessId() const;
    hstring ExecutableFileName() const;
    Windows::System::Diagnostics::ProcessDiagnosticInfo Parent() const;
    Windows::Foundation::DateTime ProcessStartTime() const;
    Windows::System::Diagnostics::ProcessDiskUsage DiskUsage() const;
    Windows::System::Diagnostics::ProcessMemoryUsage MemoryUsage() const;
    Windows::System::Diagnostics::ProcessCpuUsage CpuUsage() const;
};
template <> struct consume<Windows::System::Diagnostics::IProcessDiagnosticInfo> { template <typename D> using type = consume_Windows_System_Diagnostics_IProcessDiagnosticInfo<D>; };

template <typename D>
struct consume_Windows_System_Diagnostics_IProcessDiagnosticInfoStatics
{
    Windows::Foundation::Collections::IVectorView<Windows::System::Diagnostics::ProcessDiagnosticInfo> GetForProcesses() const;
    Windows::System::Diagnostics::ProcessDiagnosticInfo GetForCurrentProcess() const;
};
template <> struct consume<Windows::System::Diagnostics::IProcessDiagnosticInfoStatics> { template <typename D> using type = consume_Windows_System_Diagnostics_IProcessDiagnosticInfoStatics<D>; };

template <typename D>
struct consume_Windows_System_Diagnostics_IProcessDiskUsage
{
    Windows::System::Diagnostics::ProcessDiskUsageReport GetReport() const;
};
template <> struct consume<Windows::System::Diagnostics::IProcessDiskUsage> { template <typename D> using type = consume_Windows_System_Diagnostics_IProcessDiskUsage<D>; };

template <typename D>
struct consume_Windows_System_Diagnostics_IProcessDiskUsageReport
{
    int64_t ReadOperationCount() const;
    int64_t WriteOperationCount() const;
    int64_t OtherOperationCount() const;
    int64_t BytesReadCount() const;
    int64_t BytesWrittenCount() const;
    int64_t OtherBytesCount() const;
};
template <> struct consume<Windows::System::Diagnostics::IProcessDiskUsageReport> { template <typename D> using type = consume_Windows_System_Diagnostics_IProcessDiskUsageReport<D>; };

template <typename D>
struct consume_Windows_System_Diagnostics_IProcessMemoryUsage
{
    Windows::System::Diagnostics::ProcessMemoryUsageReport GetReport() const;
};
template <> struct consume<Windows::System::Diagnostics::IProcessMemoryUsage> { template <typename D> using type = consume_Windows_System_Diagnostics_IProcessMemoryUsage<D>; };

template <typename D>
struct consume_Windows_System_Diagnostics_IProcessMemoryUsageReport
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
template <> struct consume<Windows::System::Diagnostics::IProcessMemoryUsageReport> { template <typename D> using type = consume_Windows_System_Diagnostics_IProcessMemoryUsageReport<D>; };

template <typename D>
struct consume_Windows_System_Diagnostics_ISystemCpuUsage
{
    Windows::System::Diagnostics::SystemCpuUsageReport GetReport() const;
};
template <> struct consume<Windows::System::Diagnostics::ISystemCpuUsage> { template <typename D> using type = consume_Windows_System_Diagnostics_ISystemCpuUsage<D>; };

template <typename D>
struct consume_Windows_System_Diagnostics_ISystemCpuUsageReport
{
    Windows::Foundation::TimeSpan KernelTime() const;
    Windows::Foundation::TimeSpan UserTime() const;
    Windows::Foundation::TimeSpan IdleTime() const;
};
template <> struct consume<Windows::System::Diagnostics::ISystemCpuUsageReport> { template <typename D> using type = consume_Windows_System_Diagnostics_ISystemCpuUsageReport<D>; };

template <typename D>
struct consume_Windows_System_Diagnostics_ISystemDiagnosticInfo
{
    Windows::System::Diagnostics::SystemMemoryUsage MemoryUsage() const;
    Windows::System::Diagnostics::SystemCpuUsage CpuUsage() const;
};
template <> struct consume<Windows::System::Diagnostics::ISystemDiagnosticInfo> { template <typename D> using type = consume_Windows_System_Diagnostics_ISystemDiagnosticInfo<D>; };

template <typename D>
struct consume_Windows_System_Diagnostics_ISystemDiagnosticInfoStatics
{
    Windows::System::Diagnostics::SystemDiagnosticInfo GetForCurrentSystem() const;
};
template <> struct consume<Windows::System::Diagnostics::ISystemDiagnosticInfoStatics> { template <typename D> using type = consume_Windows_System_Diagnostics_ISystemDiagnosticInfoStatics<D>; };

template <typename D>
struct consume_Windows_System_Diagnostics_ISystemMemoryUsage
{
    Windows::System::Diagnostics::SystemMemoryUsageReport GetReport() const;
};
template <> struct consume<Windows::System::Diagnostics::ISystemMemoryUsage> { template <typename D> using type = consume_Windows_System_Diagnostics_ISystemMemoryUsage<D>; };

template <typename D>
struct consume_Windows_System_Diagnostics_ISystemMemoryUsageReport
{
    uint64_t TotalPhysicalSizeInBytes() const;
    uint64_t AvailableSizeInBytes() const;
    uint64_t CommittedSizeInBytes() const;
};
template <> struct consume<Windows::System::Diagnostics::ISystemMemoryUsageReport> { template <typename D> using type = consume_Windows_System_Diagnostics_ISystemMemoryUsageReport<D>; };

template <> struct abi<Windows::System::Diagnostics::IProcessCpuUsage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetReport(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::Diagnostics::IProcessCpuUsageReport>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_KernelTime(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_UserTime(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
};};

template <> struct abi<Windows::System::Diagnostics::IProcessDiagnosticInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ProcessId(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_ExecutableFileName(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_Parent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ProcessStartTime(abi_t<Windows::Foundation::DateTime>* value) = 0;
    virtual HRESULT __stdcall get_DiskUsage(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MemoryUsage(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CpuUsage(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::Diagnostics::IProcessDiagnosticInfoStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForProcesses(::IUnknown** processes) = 0;
    virtual HRESULT __stdcall GetForCurrentProcess(::IUnknown** processes) = 0;
};};

template <> struct abi<Windows::System::Diagnostics::IProcessDiskUsage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetReport(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::Diagnostics::IProcessDiskUsageReport>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ReadOperationCount(int64_t* value) = 0;
    virtual HRESULT __stdcall get_WriteOperationCount(int64_t* value) = 0;
    virtual HRESULT __stdcall get_OtherOperationCount(int64_t* value) = 0;
    virtual HRESULT __stdcall get_BytesReadCount(int64_t* value) = 0;
    virtual HRESULT __stdcall get_BytesWrittenCount(int64_t* value) = 0;
    virtual HRESULT __stdcall get_OtherBytesCount(int64_t* value) = 0;
};};

template <> struct abi<Windows::System::Diagnostics::IProcessMemoryUsage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetReport(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::Diagnostics::IProcessMemoryUsageReport>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_NonPagedPoolSizeInBytes(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_PageFaultCount(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_PageFileSizeInBytes(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_PagedPoolSizeInBytes(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_PeakNonPagedPoolSizeInBytes(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_PeakPageFileSizeInBytes(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_PeakPagedPoolSizeInBytes(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_PeakVirtualMemorySizeInBytes(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_PeakWorkingSetSizeInBytes(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_PrivatePageCount(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_VirtualMemorySizeInBytes(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_WorkingSetSizeInBytes(uint64_t* value) = 0;
};};

template <> struct abi<Windows::System::Diagnostics::ISystemCpuUsage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetReport(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::Diagnostics::ISystemCpuUsageReport>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_KernelTime(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_UserTime(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
    virtual HRESULT __stdcall get_IdleTime(abi_t<Windows::Foundation::TimeSpan>* value) = 0;
};};

template <> struct abi<Windows::System::Diagnostics::ISystemDiagnosticInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_MemoryUsage(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CpuUsage(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::Diagnostics::ISystemDiagnosticInfoStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForCurrentSystem(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::Diagnostics::ISystemMemoryUsage>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetReport(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::System::Diagnostics::ISystemMemoryUsageReport>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TotalPhysicalSizeInBytes(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_AvailableSizeInBytes(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_CommittedSizeInBytes(uint64_t* value) = 0;
};};

}
