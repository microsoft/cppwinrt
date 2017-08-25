// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::System::Power::Diagnostics {

struct IBackgroundEnergyDiagnosticsStatics;
struct IForegroundEnergyDiagnosticsStatics;
struct BackgroundEnergyDiagnostics;
struct ForegroundEnergyDiagnostics;

}

namespace winrt::impl {

template <> struct category<Windows::System::Power::Diagnostics::IBackgroundEnergyDiagnosticsStatics>{ using type = interface_category; };
template <> struct category<Windows::System::Power::Diagnostics::IForegroundEnergyDiagnosticsStatics>{ using type = interface_category; };
template <> struct category<Windows::System::Power::Diagnostics::BackgroundEnergyDiagnostics>{ using type = class_category; };
template <> struct category<Windows::System::Power::Diagnostics::ForegroundEnergyDiagnostics>{ using type = class_category; };
template <> struct name<Windows::System::Power::Diagnostics::IBackgroundEnergyDiagnosticsStatics>{ static constexpr auto & value{ L"Windows.System.Power.Diagnostics.IBackgroundEnergyDiagnosticsStatics" }; };
template <> struct name<Windows::System::Power::Diagnostics::IForegroundEnergyDiagnosticsStatics>{ static constexpr auto & value{ L"Windows.System.Power.Diagnostics.IForegroundEnergyDiagnosticsStatics" }; };
template <> struct name<Windows::System::Power::Diagnostics::BackgroundEnergyDiagnostics>{ static constexpr auto & value{ L"Windows.System.Power.Diagnostics.BackgroundEnergyDiagnostics" }; };
template <> struct name<Windows::System::Power::Diagnostics::ForegroundEnergyDiagnostics>{ static constexpr auto & value{ L"Windows.System.Power.Diagnostics.ForegroundEnergyDiagnostics" }; };
template <> struct guid<Windows::System::Power::Diagnostics::IBackgroundEnergyDiagnosticsStatics>{ static constexpr GUID value{ 0xD7663702,0xD3A6,0x46E0,{ 0x8F,0x9B,0x50,0xB9,0x5B,0xB4,0xF9,0xC5 } }; };
template <> struct guid<Windows::System::Power::Diagnostics::IForegroundEnergyDiagnosticsStatics>{ static constexpr GUID value{ 0x23CA0917,0xCD07,0x4609,{ 0xBE,0x15,0x8F,0xE8,0x94,0xC5,0xE4,0x1E } }; };

template <typename D>
struct consume_Windows_System_Power_Diagnostics_IBackgroundEnergyDiagnosticsStatics
{
    double DeviceSpecificConversionFactor() const;
    uint64_t ComputeTotalEnergyUsage() const;
    void ResetTotalEnergyUsage() const;
};
template <> struct consume<Windows::System::Power::Diagnostics::IBackgroundEnergyDiagnosticsStatics> { template <typename D> using type = consume_Windows_System_Power_Diagnostics_IBackgroundEnergyDiagnosticsStatics<D>; };

template <typename D>
struct consume_Windows_System_Power_Diagnostics_IForegroundEnergyDiagnosticsStatics
{
    double DeviceSpecificConversionFactor() const;
    uint64_t ComputeTotalEnergyUsage() const;
    void ResetTotalEnergyUsage() const;
};
template <> struct consume<Windows::System::Power::Diagnostics::IForegroundEnergyDiagnosticsStatics> { template <typename D> using type = consume_Windows_System_Power_Diagnostics_IForegroundEnergyDiagnosticsStatics<D>; };

template <> struct abi<Windows::System::Power::Diagnostics::IBackgroundEnergyDiagnosticsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceSpecificConversionFactor(double* value) = 0;
    virtual HRESULT __stdcall ComputeTotalEnergyUsage(uint64_t* value) = 0;
    virtual HRESULT __stdcall ResetTotalEnergyUsage() = 0;
};};

template <> struct abi<Windows::System::Power::Diagnostics::IForegroundEnergyDiagnosticsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DeviceSpecificConversionFactor(double* value) = 0;
    virtual HRESULT __stdcall ComputeTotalEnergyUsage(uint64_t* value) = 0;
    virtual HRESULT __stdcall ResetTotalEnergyUsage() = 0;
};};

}
