// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.System.Diagnostics.TraceReporting.0.h"
#include "Windows.Foundation.Collections.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::System::Diagnostics::TraceReporting {

struct __declspec(uuid("c1145cfa-9292-4267-890a-9ea3ed072312")) __declspec(novtable) IPlatformDiagnosticActionsStatics : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall abi_IsScenarioEnabled(GUID scenarioId, bool * isActive) = 0;
    virtual HRESULT __stdcall abi_TryEscalateScenario(GUID scenarioId, winrt::Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEscalationType escalationType, hstring outputDirectory, bool timestampOutputDirectory, bool forceEscalationUpload, Windows::Foundation::Collections::IMapView<hstring, hstring> * triggers, bool * result) = 0;
    virtual HRESULT __stdcall abi_DownloadLatestSettingsForNamespace(hstring partner, hstring feature, bool isScenarioNamespace, bool downloadOverCostedNetwork, bool downloadOverBattery, winrt::Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState * result) = 0;
    virtual HRESULT __stdcall abi_GetActiveScenarioList(Windows::Foundation::Collections::IVectorView<GUID> ** scenarioIds) = 0;
    virtual HRESULT __stdcall abi_ForceUpload(winrt::Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEventBufferLatencies latency, bool uploadOverCostedNetwork, bool uploadOverBattery, winrt::Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState * result) = 0;
    virtual HRESULT __stdcall abi_IsTraceRunning(winrt::Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType slotType, GUID scenarioId, uint64_t traceProfileHash, winrt::Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotState * slotState) = 0;
    virtual HRESULT __stdcall abi_GetActiveTraceRuntime(winrt::Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType slotType, Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceRuntimeInfo ** traceRuntimeInfo) = 0;
    virtual HRESULT __stdcall abi_GetKnownTraceList(winrt::Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType slotType, Windows::Foundation::Collections::IVectorView<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceInfo> ** traceInfo) = 0;
};

struct __declspec(uuid("f870ed97-d597-4bf7-88dc-cf5c7dc2a1d2")) __declspec(novtable) IPlatformDiagnosticTraceInfo : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_ScenarioId(GUID * value) = 0;
    virtual HRESULT __stdcall get_ProfileHash(uint64_t * value) = 0;
    virtual HRESULT __stdcall get_IsExclusive(bool * value) = 0;
    virtual HRESULT __stdcall get_IsAutoLogger(bool * value) = 0;
    virtual HRESULT __stdcall get_MaxTraceDurationFileTime(int64_t * value) = 0;
    virtual HRESULT __stdcall get_Priority(winrt::Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTracePriority * value) = 0;
};

struct __declspec(uuid("3d4d5e2d-01d8-4768-8554-1eb1ca610986")) __declspec(novtable) IPlatformDiagnosticTraceRuntimeInfo : Windows::Foundation::IInspectable
{
    virtual HRESULT __stdcall get_RuntimeFileTime(int64_t * value) = 0;
    virtual HRESULT __stdcall get_EtwRuntimeFileTime(int64_t * value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceInfo> { using default_interface = Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo; };
template <> struct traits<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceRuntimeInfo> { using default_interface = Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceRuntimeInfo; };

}

namespace Windows::System::Diagnostics::TraceReporting {

template <typename D>
struct WINRT_EBO impl_IPlatformDiagnosticActionsStatics
{
    bool IsScenarioEnabled(GUID scenarioId) const;
    bool TryEscalateScenario(GUID scenarioId, Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEscalationType escalationType, hstring_view outputDirectory, bool timestampOutputDirectory, bool forceEscalationUpload, map_view<hstring, hstring> triggers) const;
    Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState DownloadLatestSettingsForNamespace(hstring_view partner, hstring_view feature, bool isScenarioNamespace, bool downloadOverCostedNetwork, bool downloadOverBattery) const;
    Windows::Foundation::Collections::IVectorView<GUID> GetActiveScenarioList() const;
    Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState ForceUpload(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEventBufferLatencies latency, bool uploadOverCostedNetwork, bool uploadOverBattery) const;
    Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotState IsTraceRunning(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType slotType, GUID scenarioId, uint64_t traceProfileHash) const;
    Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceRuntimeInfo GetActiveTraceRuntime(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType slotType) const;
    Windows::Foundation::Collections::IVectorView<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceInfo> GetKnownTraceList(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType slotType) const;
};

template <typename D>
struct WINRT_EBO impl_IPlatformDiagnosticTraceInfo
{
    GUID ScenarioId() const;
    uint64_t ProfileHash() const;
    bool IsExclusive() const;
    bool IsAutoLogger() const;
    int64_t MaxTraceDurationFileTime() const;
    Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTracePriority Priority() const;
};

template <typename D>
struct WINRT_EBO impl_IPlatformDiagnosticTraceRuntimeInfo
{
    int64_t RuntimeFileTime() const;
    int64_t EtwRuntimeFileTime() const;
};

}

namespace impl {

template <> struct traits<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics>
{
    using abi = ABI::Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics;
    template <typename D> using consume = Windows::System::Diagnostics::TraceReporting::impl_IPlatformDiagnosticActionsStatics<D>;
};

template <> struct traits<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo>
{
    using abi = ABI::Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo;
    template <typename D> using consume = Windows::System::Diagnostics::TraceReporting::impl_IPlatformDiagnosticTraceInfo<D>;
};

template <> struct traits<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceRuntimeInfo>
{
    using abi = ABI::Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceRuntimeInfo;
    template <typename D> using consume = Windows::System::Diagnostics::TraceReporting::impl_IPlatformDiagnosticTraceRuntimeInfo<D>;
};

template <> struct traits<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActions>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.Diagnostics.TraceReporting.PlatformDiagnosticActions"; }
};

template <> struct traits<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceInfo>
{
    using abi = ABI::Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.Diagnostics.TraceReporting.PlatformDiagnosticTraceInfo"; }
};

template <> struct traits<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceRuntimeInfo>
{
    using abi = ABI::Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceRuntimeInfo;
    static constexpr const wchar_t * name() noexcept { return L"Windows.System.Diagnostics.TraceReporting.PlatformDiagnosticTraceRuntimeInfo"; }
};

}

}
