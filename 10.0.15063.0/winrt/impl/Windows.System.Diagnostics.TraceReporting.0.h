// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::System::Diagnostics::TraceReporting {

enum class PlatformDiagnosticActionState
{
    Success = 0,
    FreeNetworkNotAvailable = 1,
    ACPowerNotAvailable = 2,
};

enum class PlatformDiagnosticEscalationType
{
    OnCompletion = 0,
    OnFailure = 1,
};

enum class PlatformDiagnosticEventBufferLatencies : unsigned
{
    Normal = 0x1,
    CostDeferred = 0x2,
    Realtime = 0x4,
};

DEFINE_ENUM_FLAG_OPERATORS(PlatformDiagnosticEventBufferLatencies)

enum class PlatformDiagnosticTracePriority
{
    Normal = 0,
    UserElevated = 1,
};

enum class PlatformDiagnosticTraceSlotState
{
    NotRunning = 0,
    Running = 1,
    Throttled = 2,
};

enum class PlatformDiagnosticTraceSlotType
{
    Alternative = 0,
    AlwaysOn = 1,
    Mini = 2,
};

struct IPlatformDiagnosticActionsStatics;
struct IPlatformDiagnosticTraceInfo;
struct IPlatformDiagnosticTraceRuntimeInfo;
struct PlatformDiagnosticActions;
struct PlatformDiagnosticTraceInfo;
struct PlatformDiagnosticTraceRuntimeInfo;

}

namespace winrt::impl {

template <> struct category<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics>{ using type = interface_category; };
template <> struct category<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo>{ using type = interface_category; };
template <> struct category<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceRuntimeInfo>{ using type = interface_category; };
template <> struct category<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActions>{ using type = class_category; };
template <> struct category<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceInfo>{ using type = class_category; };
template <> struct category<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceRuntimeInfo>{ using type = class_category; };
template <> struct category<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState>{ using type = enum_category; };
template <> struct category<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEscalationType>{ using type = enum_category; };
template <> struct category<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEventBufferLatencies>{ using type = enum_category; };
template <> struct category<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTracePriority>{ using type = enum_category; };
template <> struct category<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotState>{ using type = enum_category; };
template <> struct category<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType>{ using type = enum_category; };
template <> struct name<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics>{ static constexpr auto & value{ L"Windows.System.Diagnostics.TraceReporting.IPlatformDiagnosticActionsStatics" }; };
template <> struct name<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo>{ static constexpr auto & value{ L"Windows.System.Diagnostics.TraceReporting.IPlatformDiagnosticTraceInfo" }; };
template <> struct name<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceRuntimeInfo>{ static constexpr auto & value{ L"Windows.System.Diagnostics.TraceReporting.IPlatformDiagnosticTraceRuntimeInfo" }; };
template <> struct name<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActions>{ static constexpr auto & value{ L"Windows.System.Diagnostics.TraceReporting.PlatformDiagnosticActions" }; };
template <> struct name<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceInfo>{ static constexpr auto & value{ L"Windows.System.Diagnostics.TraceReporting.PlatformDiagnosticTraceInfo" }; };
template <> struct name<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceRuntimeInfo>{ static constexpr auto & value{ L"Windows.System.Diagnostics.TraceReporting.PlatformDiagnosticTraceRuntimeInfo" }; };
template <> struct name<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState>{ static constexpr auto & value{ L"Windows.System.Diagnostics.TraceReporting.PlatformDiagnosticActionState" }; };
template <> struct name<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEscalationType>{ static constexpr auto & value{ L"Windows.System.Diagnostics.TraceReporting.PlatformDiagnosticEscalationType" }; };
template <> struct name<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEventBufferLatencies>{ static constexpr auto & value{ L"Windows.System.Diagnostics.TraceReporting.PlatformDiagnosticEventBufferLatencies" }; };
template <> struct name<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTracePriority>{ static constexpr auto & value{ L"Windows.System.Diagnostics.TraceReporting.PlatformDiagnosticTracePriority" }; };
template <> struct name<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotState>{ static constexpr auto & value{ L"Windows.System.Diagnostics.TraceReporting.PlatformDiagnosticTraceSlotState" }; };
template <> struct name<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType>{ static constexpr auto & value{ L"Windows.System.Diagnostics.TraceReporting.PlatformDiagnosticTraceSlotType" }; };
template <> struct guid<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics>{ static constexpr GUID value{ 0xC1145CFA,0x9292,0x4267,{ 0x89,0x0A,0x9E,0xA3,0xED,0x07,0x23,0x12 } }; };
template <> struct guid<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo>{ static constexpr GUID value{ 0xF870ED97,0xD597,0x4BF7,{ 0x88,0xDC,0xCF,0x5C,0x7D,0xC2,0xA1,0xD2 } }; };
template <> struct guid<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceRuntimeInfo>{ static constexpr GUID value{ 0x3D4D5E2D,0x01D8,0x4768,{ 0x85,0x54,0x1E,0xB1,0xCA,0x61,0x09,0x86 } }; };
template <> struct default_interface<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceInfo>{ using type = Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo; };
template <> struct default_interface<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceRuntimeInfo>{ using type = Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceRuntimeInfo; };

template <typename D>
struct consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticActionsStatics
{
    bool IsScenarioEnabled(GUID const& scenarioId) const;
    bool TryEscalateScenario(GUID const& scenarioId, Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEscalationType const& escalationType, param::hstring const& outputDirectory, bool timestampOutputDirectory, bool forceEscalationUpload, param::map_view<hstring, hstring> const& triggers) const;
    Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState DownloadLatestSettingsForNamespace(param::hstring const& partner, param::hstring const& feature, bool isScenarioNamespace, bool downloadOverCostedNetwork, bool downloadOverBattery) const;
    Windows::Foundation::Collections::IVectorView<GUID> GetActiveScenarioList() const;
    Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState ForceUpload(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEventBufferLatencies const& latency, bool uploadOverCostedNetwork, bool uploadOverBattery) const;
    Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotState IsTraceRunning(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType const& slotType, GUID const& scenarioId, uint64_t traceProfileHash) const;
    Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceRuntimeInfo GetActiveTraceRuntime(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType const& slotType) const;
    Windows::Foundation::Collections::IVectorView<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceInfo> GetKnownTraceList(Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType const& slotType) const;
};
template <> struct consume<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics> { template <typename D> using type = consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticActionsStatics<D>; };

template <typename D>
struct consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticTraceInfo
{
    GUID ScenarioId() const;
    uint64_t ProfileHash() const;
    bool IsExclusive() const;
    bool IsAutoLogger() const;
    int64_t MaxTraceDurationFileTime() const;
    Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTracePriority Priority() const;
};
template <> struct consume<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo> { template <typename D> using type = consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticTraceInfo<D>; };

template <typename D>
struct consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticTraceRuntimeInfo
{
    int64_t RuntimeFileTime() const;
    int64_t EtwRuntimeFileTime() const;
};
template <> struct consume<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceRuntimeInfo> { template <typename D> using type = consume_Windows_System_Diagnostics_TraceReporting_IPlatformDiagnosticTraceRuntimeInfo<D>; };

template <> struct abi<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticActionsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall IsScenarioEnabled(abi_t<GUID> scenarioId, bool* isActive) = 0;
    virtual HRESULT __stdcall TryEscalateScenario(abi_t<GUID> scenarioId, abi_t<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEscalationType> escalationType, HSTRING outputDirectory, bool timestampOutputDirectory, bool forceEscalationUpload, ::IUnknown* triggers, bool* result) = 0;
    virtual HRESULT __stdcall DownloadLatestSettingsForNamespace(HSTRING partner, HSTRING feature, bool isScenarioNamespace, bool downloadOverCostedNetwork, bool downloadOverBattery, abi_t<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState>* result) = 0;
    virtual HRESULT __stdcall GetActiveScenarioList(::IUnknown** scenarioIds) = 0;
    virtual HRESULT __stdcall ForceUpload(abi_t<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticEventBufferLatencies> latency, bool uploadOverCostedNetwork, bool uploadOverBattery, abi_t<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticActionState>* result) = 0;
    virtual HRESULT __stdcall IsTraceRunning(abi_t<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType> slotType, abi_t<GUID> scenarioId, uint64_t traceProfileHash, abi_t<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotState>* slotState) = 0;
    virtual HRESULT __stdcall GetActiveTraceRuntime(abi_t<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType> slotType, ::IUnknown** traceRuntimeInfo) = 0;
    virtual HRESULT __stdcall GetKnownTraceList(abi_t<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTraceSlotType> slotType, ::IUnknown** traceInfo) = 0;
};};

template <> struct abi<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ScenarioId(abi_t<GUID>* value) = 0;
    virtual HRESULT __stdcall get_ProfileHash(uint64_t* value) = 0;
    virtual HRESULT __stdcall get_IsExclusive(bool* value) = 0;
    virtual HRESULT __stdcall get_IsAutoLogger(bool* value) = 0;
    virtual HRESULT __stdcall get_MaxTraceDurationFileTime(int64_t* value) = 0;
    virtual HRESULT __stdcall get_Priority(abi_t<Windows::System::Diagnostics::TraceReporting::PlatformDiagnosticTracePriority>* value) = 0;
};};

template <> struct abi<Windows::System::Diagnostics::TraceReporting::IPlatformDiagnosticTraceRuntimeInfo>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RuntimeFileTime(int64_t* value) = 0;
    virtual HRESULT __stdcall get_EtwRuntimeFileTime(int64_t* value) = 0;
};};

}
