// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.System.Diagnostics.TraceReporting.1.h"

WINRT_EXPORT namespace winrt::Windows::System::Diagnostics::TraceReporting {

struct PlatformDiagnosticActions
{
    PlatformDiagnosticActions() = delete;
    static bool IsScenarioEnabled(GUID const& scenarioId);
    static bool TryEscalateScenario(GUID const& scenarioId, Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEscalationType const& escalationType, param::hstring const& outputDirectory, bool timestampOutputDirectory, bool forceEscalationUpload, param::map_view<hstring, hstring> const& triggers);
    static Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState DownloadLatestSettingsForNamespace(param::hstring const& partner, param::hstring const& feature, bool isScenarioNamespace, bool downloadOverCostedNetwork, bool downloadOverBattery);
    static Windows::Foundation::Collections::IVectorView<GUID> GetActiveScenarioList();
    static Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState ForceUpload(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEventBufferLatencies const& latency, bool uploadOverCostedNetwork, bool uploadOverBattery);
    static Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotState IsTraceRunning(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType const& slotType, GUID const& scenarioId, uint64_t traceProfileHash);
    static Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceRuntimeInfo GetActiveTraceRuntime(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType const& slotType);
    static Windows::Foundation::Collections::IVectorView<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceInfo> GetKnownTraceList(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType const& slotType);
};

struct WINRT_EBO PlatformDiagnosticTraceInfo :
    Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo
{
    PlatformDiagnosticTraceInfo(std::nullptr_t) noexcept {}
};

struct WINRT_EBO PlatformDiagnosticTraceRuntimeInfo :
    Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceRuntimeInfo
{
    PlatformDiagnosticTraceRuntimeInfo(std::nullptr_t) noexcept {}
};

}
