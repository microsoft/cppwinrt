// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IRandomAccessStream;

}

WINRT_EXPORT namespace winrt::Windows::Graphics::Display {

enum class DisplayBrightnessOverrideOptions : unsigned
{
    None = 0x0,
    UseDimmedPolicyWhenBatteryIsLow = 0x1,
};

DEFINE_ENUM_FLAG_OPERATORS(DisplayBrightnessOverrideOptions)

enum class DisplayBrightnessScenario
{
    DefaultBrightness = 0,
    IdleBrightness = 1,
    BarcodeReadingBrightness = 2,
    FullBrightness = 3,
};

enum class DisplayOrientations : unsigned
{
    None = 0x0,
    Landscape = 0x1,
    Portrait = 0x2,
    LandscapeFlipped = 0x4,
    PortraitFlipped = 0x8,
};

DEFINE_ENUM_FLAG_OPERATORS(DisplayOrientations)

enum class ResolutionScale
{
    Invalid = 0,
    Scale100Percent = 100,
    Scale120Percent = 120,
    Scale125Percent = 125,
    Scale140Percent = 140,
    Scale150Percent = 150,
    Scale160Percent = 160,
    Scale175Percent = 175,
    Scale180Percent = 180,
    Scale200Percent = 200,
    Scale225Percent = 225,
    Scale250Percent = 250,
    Scale300Percent = 300,
    Scale350Percent = 350,
    Scale400Percent = 400,
    Scale450Percent = 450,
    Scale500Percent = 500,
};

struct IBrightnessOverride;
struct IBrightnessOverrideStatics;
struct IDisplayInformation;
struct IDisplayInformation2;
struct IDisplayInformation3;
struct IDisplayInformation4;
struct IDisplayInformationStatics;
struct IDisplayPropertiesStatics;
struct BrightnessOverride;
struct DisplayInformation;
struct DisplayProperties;
struct DisplayPropertiesEventHandler;

}

namespace winrt::impl {

template <> struct category<Windows::Graphics::Display::IBrightnessOverride>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Display::IBrightnessOverrideStatics>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Display::IDisplayInformation>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Display::IDisplayInformation2>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Display::IDisplayInformation3>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Display::IDisplayInformation4>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Display::IDisplayInformationStatics>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Display::IDisplayPropertiesStatics>{ using type = interface_category; };
template <> struct category<Windows::Graphics::Display::BrightnessOverride>{ using type = class_category; };
template <> struct category<Windows::Graphics::Display::DisplayInformation>{ using type = class_category; };
template <> struct category<Windows::Graphics::Display::DisplayProperties>{ using type = class_category; };
template <> struct category<Windows::Graphics::Display::DisplayBrightnessOverrideOptions>{ using type = enum_category; };
template <> struct category<Windows::Graphics::Display::DisplayBrightnessScenario>{ using type = enum_category; };
template <> struct category<Windows::Graphics::Display::DisplayOrientations>{ using type = enum_category; };
template <> struct category<Windows::Graphics::Display::ResolutionScale>{ using type = enum_category; };
template <> struct category<Windows::Graphics::Display::DisplayPropertiesEventHandler>{ using type = delegate_category; };
template <> struct name<Windows::Graphics::Display::IBrightnessOverride>{ static constexpr auto & value{ L"Windows.Graphics.Display.IBrightnessOverride" }; };
template <> struct name<Windows::Graphics::Display::IBrightnessOverrideStatics>{ static constexpr auto & value{ L"Windows.Graphics.Display.IBrightnessOverrideStatics" }; };
template <> struct name<Windows::Graphics::Display::IDisplayInformation>{ static constexpr auto & value{ L"Windows.Graphics.Display.IDisplayInformation" }; };
template <> struct name<Windows::Graphics::Display::IDisplayInformation2>{ static constexpr auto & value{ L"Windows.Graphics.Display.IDisplayInformation2" }; };
template <> struct name<Windows::Graphics::Display::IDisplayInformation3>{ static constexpr auto & value{ L"Windows.Graphics.Display.IDisplayInformation3" }; };
template <> struct name<Windows::Graphics::Display::IDisplayInformation4>{ static constexpr auto & value{ L"Windows.Graphics.Display.IDisplayInformation4" }; };
template <> struct name<Windows::Graphics::Display::IDisplayInformationStatics>{ static constexpr auto & value{ L"Windows.Graphics.Display.IDisplayInformationStatics" }; };
template <> struct name<Windows::Graphics::Display::IDisplayPropertiesStatics>{ static constexpr auto & value{ L"Windows.Graphics.Display.IDisplayPropertiesStatics" }; };
template <> struct name<Windows::Graphics::Display::BrightnessOverride>{ static constexpr auto & value{ L"Windows.Graphics.Display.BrightnessOverride" }; };
template <> struct name<Windows::Graphics::Display::DisplayInformation>{ static constexpr auto & value{ L"Windows.Graphics.Display.DisplayInformation" }; };
template <> struct name<Windows::Graphics::Display::DisplayProperties>{ static constexpr auto & value{ L"Windows.Graphics.Display.DisplayProperties" }; };
template <> struct name<Windows::Graphics::Display::DisplayBrightnessOverrideOptions>{ static constexpr auto & value{ L"Windows.Graphics.Display.DisplayBrightnessOverrideOptions" }; };
template <> struct name<Windows::Graphics::Display::DisplayBrightnessScenario>{ static constexpr auto & value{ L"Windows.Graphics.Display.DisplayBrightnessScenario" }; };
template <> struct name<Windows::Graphics::Display::DisplayOrientations>{ static constexpr auto & value{ L"Windows.Graphics.Display.DisplayOrientations" }; };
template <> struct name<Windows::Graphics::Display::ResolutionScale>{ static constexpr auto & value{ L"Windows.Graphics.Display.ResolutionScale" }; };
template <> struct name<Windows::Graphics::Display::DisplayPropertiesEventHandler>{ static constexpr auto & value{ L"Windows.Graphics.Display.DisplayPropertiesEventHandler" }; };
template <> struct guid<Windows::Graphics::Display::IBrightnessOverride>{ static constexpr GUID value{ 0x96C9621A,0xC143,0x4392,{ 0xBE,0xDD,0x4A,0x7E,0x95,0x74,0xC8,0xFD } }; };
template <> struct guid<Windows::Graphics::Display::IBrightnessOverrideStatics>{ static constexpr GUID value{ 0x03A7B9ED,0xE1F1,0x4A68,{ 0xA1,0x1F,0x94,0x6A,0xD8,0xCE,0x53,0x93 } }; };
template <> struct guid<Windows::Graphics::Display::IDisplayInformation>{ static constexpr GUID value{ 0xBED112AE,0xADC3,0x4DC9,{ 0xAE,0x65,0x85,0x1F,0x4D,0x7D,0x47,0x99 } }; };
template <> struct guid<Windows::Graphics::Display::IDisplayInformation2>{ static constexpr GUID value{ 0x4DCD0021,0xFAD1,0x4B8E,{ 0x8E,0xDF,0x77,0x58,0x87,0xB8,0xBF,0x19 } }; };
template <> struct guid<Windows::Graphics::Display::IDisplayInformation3>{ static constexpr GUID value{ 0xDB15011D,0x0F09,0x4466,{ 0x8F,0xF3,0x11,0xDE,0x9A,0x3C,0x92,0x9A } }; };
template <> struct guid<Windows::Graphics::Display::IDisplayInformation4>{ static constexpr GUID value{ 0xC972CE2F,0x1242,0x46BE,{ 0xB5,0x36,0xE1,0xAA,0xFE,0x9E,0x7A,0xCF } }; };
template <> struct guid<Windows::Graphics::Display::IDisplayInformationStatics>{ static constexpr GUID value{ 0xC6A02A6C,0xD452,0x44DC,{ 0xBA,0x07,0x96,0xF3,0xC6,0xAD,0xF9,0xD1 } }; };
template <> struct guid<Windows::Graphics::Display::IDisplayPropertiesStatics>{ static constexpr GUID value{ 0x6937ED8D,0x30EA,0x4DED,{ 0x82,0x71,0x45,0x53,0xFF,0x02,0xF6,0x8A } }; };
template <> struct guid<Windows::Graphics::Display::DisplayPropertiesEventHandler>{ static constexpr GUID value{ 0xDBDD8B01,0xF1A1,0x46D1,{ 0x9E,0xE3,0x54,0x3B,0xCC,0x99,0x59,0x80 } }; };
template <> struct default_interface<Windows::Graphics::Display::BrightnessOverride>{ using type = Windows::Graphics::Display::IBrightnessOverride; };
template <> struct default_interface<Windows::Graphics::Display::DisplayInformation>{ using type = Windows::Graphics::Display::IDisplayInformation; };

template <typename D>
struct consume_Windows_Graphics_Display_IBrightnessOverride
{
    bool IsSupported() const;
    bool IsOverrideActive() const;
    double BrightnessLevel() const;
    void SetBrightnessLevel(double brightnessLevel, Windows::Graphics::Display::DisplayBrightnessOverrideOptions const& options) const;
    void SetBrightnessScenario(Windows::Graphics::Display::DisplayBrightnessScenario const& scenario, Windows::Graphics::Display::DisplayBrightnessOverrideOptions const& options) const;
    double GetLevelForScenario(Windows::Graphics::Display::DisplayBrightnessScenario const& scenario) const;
    void StartOverride() const;
    void StopOverride() const;
    event_token IsSupportedChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const& handler) const;
    using IsSupportedChanged_revoker = event_revoker<Windows::Graphics::Display::IBrightnessOverride>;
    IsSupportedChanged_revoker IsSupportedChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const& handler) const;
    void IsSupportedChanged(event_token const& token) const;
    event_token IsOverrideActiveChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const& handler) const;
    using IsOverrideActiveChanged_revoker = event_revoker<Windows::Graphics::Display::IBrightnessOverride>;
    IsOverrideActiveChanged_revoker IsOverrideActiveChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const& handler) const;
    void IsOverrideActiveChanged(event_token const& token) const;
    event_token BrightnessLevelChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const& handler) const;
    using BrightnessLevelChanged_revoker = event_revoker<Windows::Graphics::Display::IBrightnessOverride>;
    BrightnessLevelChanged_revoker BrightnessLevelChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::BrightnessOverride, Windows::Foundation::IInspectable> const& handler) const;
    void BrightnessLevelChanged(event_token const& token) const;
};
template <> struct consume<Windows::Graphics::Display::IBrightnessOverride> { template <typename D> using type = consume_Windows_Graphics_Display_IBrightnessOverride<D>; };

template <typename D>
struct consume_Windows_Graphics_Display_IBrightnessOverrideStatics
{
    Windows::Graphics::Display::BrightnessOverride GetDefaultForSystem() const;
    Windows::Graphics::Display::BrightnessOverride GetForCurrentView() const;
    Windows::Foundation::IAsyncOperation<bool> SaveForSystemAsync(Windows::Graphics::Display::BrightnessOverride const& value) const;
};
template <> struct consume<Windows::Graphics::Display::IBrightnessOverrideStatics> { template <typename D> using type = consume_Windows_Graphics_Display_IBrightnessOverrideStatics<D>; };

template <typename D>
struct consume_Windows_Graphics_Display_IDisplayInformation
{
    Windows::Graphics::Display::DisplayOrientations CurrentOrientation() const;
    Windows::Graphics::Display::DisplayOrientations NativeOrientation() const;
    event_token OrientationChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
    using OrientationChanged_revoker = event_revoker<Windows::Graphics::Display::IDisplayInformation>;
    OrientationChanged_revoker OrientationChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
    void OrientationChanged(event_token const& token) const;
    Windows::Graphics::Display::ResolutionScale ResolutionScale() const;
    float LogicalDpi() const;
    float RawDpiX() const;
    float RawDpiY() const;
    event_token DpiChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
    using DpiChanged_revoker = event_revoker<Windows::Graphics::Display::IDisplayInformation>;
    DpiChanged_revoker DpiChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
    void DpiChanged(event_token const& token) const;
    bool StereoEnabled() const;
    event_token StereoEnabledChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
    using StereoEnabledChanged_revoker = event_revoker<Windows::Graphics::Display::IDisplayInformation>;
    StereoEnabledChanged_revoker StereoEnabledChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
    void StereoEnabledChanged(event_token const& token) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> GetColorProfileAsync() const;
    event_token ColorProfileChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
    using ColorProfileChanged_revoker = event_revoker<Windows::Graphics::Display::IDisplayInformation>;
    ColorProfileChanged_revoker ColorProfileChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
    void ColorProfileChanged(event_token const& token) const;
};
template <> struct consume<Windows::Graphics::Display::IDisplayInformation> { template <typename D> using type = consume_Windows_Graphics_Display_IDisplayInformation<D>; };

template <typename D>
struct consume_Windows_Graphics_Display_IDisplayInformation2
{
    double RawPixelsPerViewPixel() const;
};
template <> struct consume<Windows::Graphics::Display::IDisplayInformation2> { template <typename D> using type = consume_Windows_Graphics_Display_IDisplayInformation2<D>; };

template <typename D>
struct consume_Windows_Graphics_Display_IDisplayInformation3
{
    Windows::Foundation::IReference<double> DiagonalSizeInInches() const;
};
template <> struct consume<Windows::Graphics::Display::IDisplayInformation3> { template <typename D> using type = consume_Windows_Graphics_Display_IDisplayInformation3<D>; };

template <typename D>
struct consume_Windows_Graphics_Display_IDisplayInformation4
{
    uint32_t ScreenWidthInRawPixels() const;
    uint32_t ScreenHeightInRawPixels() const;
};
template <> struct consume<Windows::Graphics::Display::IDisplayInformation4> { template <typename D> using type = consume_Windows_Graphics_Display_IDisplayInformation4<D>; };

template <typename D>
struct consume_Windows_Graphics_Display_IDisplayInformationStatics
{
    Windows::Graphics::Display::DisplayInformation GetForCurrentView() const;
    Windows::Graphics::Display::DisplayOrientations AutoRotationPreferences() const;
    void AutoRotationPreferences(Windows::Graphics::Display::DisplayOrientations const& value) const;
    event_token DisplayContentsInvalidated(Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
    using DisplayContentsInvalidated_revoker = event_revoker<Windows::Graphics::Display::IDisplayInformationStatics>;
    DisplayContentsInvalidated_revoker DisplayContentsInvalidated(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Display::DisplayInformation, Windows::Foundation::IInspectable> const& handler) const;
    void DisplayContentsInvalidated(event_token const& token) const;
};
template <> struct consume<Windows::Graphics::Display::IDisplayInformationStatics> { template <typename D> using type = consume_Windows_Graphics_Display_IDisplayInformationStatics<D>; };

template <typename D>
struct consume_Windows_Graphics_Display_IDisplayPropertiesStatics
{
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] Windows::Graphics::Display::DisplayOrientations CurrentOrientation() const;
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] Windows::Graphics::Display::DisplayOrientations NativeOrientation() const;
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] Windows::Graphics::Display::DisplayOrientations AutoRotationPreferences() const;
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] void AutoRotationPreferences(Windows::Graphics::Display::DisplayOrientations const& value) const;
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] event_token OrientationChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const;
    using OrientationChanged_revoker = event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics>;
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] OrientationChanged_revoker OrientationChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const;
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] void OrientationChanged(event_token const& token) const;
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] Windows::Graphics::Display::ResolutionScale ResolutionScale() const;
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] float LogicalDpi() const;
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] event_token LogicalDpiChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const;
    using LogicalDpiChanged_revoker = event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics>;
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] LogicalDpiChanged_revoker LogicalDpiChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const;
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] void LogicalDpiChanged(event_token const& token) const;
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] bool StereoEnabled() const;
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] event_token StereoEnabledChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const;
    using StereoEnabledChanged_revoker = event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics>;
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] StereoEnabledChanged_revoker StereoEnabledChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const;
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] void StereoEnabledChanged(event_token const& token) const;
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream> GetColorProfileAsync() const;
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] event_token ColorProfileChanged(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const;
    using ColorProfileChanged_revoker = event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics>;
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] ColorProfileChanged_revoker ColorProfileChanged(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const;
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] void ColorProfileChanged(event_token const& token) const;
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] event_token DisplayContentsInvalidated(Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const;
    using DisplayContentsInvalidated_revoker = event_revoker<Windows::Graphics::Display::IDisplayPropertiesStatics>;
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] DisplayContentsInvalidated_revoker DisplayContentsInvalidated(auto_revoke_t, Windows::Graphics::Display::DisplayPropertiesEventHandler const& handler) const;
    [[deprecated("DisplayProperties may be altered or unavailable for releases after Windows Phone 8.1. Instead, use DisplayInformation.")]] void DisplayContentsInvalidated(event_token const& token) const;
};
template <> struct consume<Windows::Graphics::Display::IDisplayPropertiesStatics> { template <typename D> using type = consume_Windows_Graphics_Display_IDisplayPropertiesStatics<D>; };

template <> struct abi<Windows::Graphics::Display::IBrightnessOverride>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsSupported(bool* value) = 0;
    virtual HRESULT __stdcall get_IsOverrideActive(bool* value) = 0;
    virtual HRESULT __stdcall get_BrightnessLevel(double* level) = 0;
    virtual HRESULT __stdcall SetBrightnessLevel(double brightnessLevel, abi_t<Windows::Graphics::Display::DisplayBrightnessOverrideOptions> options) = 0;
    virtual HRESULT __stdcall SetBrightnessScenario(abi_t<Windows::Graphics::Display::DisplayBrightnessScenario> scenario, abi_t<Windows::Graphics::Display::DisplayBrightnessOverrideOptions> options) = 0;
    virtual HRESULT __stdcall GetLevelForScenario(abi_t<Windows::Graphics::Display::DisplayBrightnessScenario> scenario, double* brightnessLevel) = 0;
    virtual HRESULT __stdcall StartOverride() = 0;
    virtual HRESULT __stdcall StopOverride() = 0;
    virtual HRESULT __stdcall add_IsSupportedChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_IsSupportedChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_IsOverrideActiveChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_IsOverrideActiveChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_BrightnessLevelChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_BrightnessLevelChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Graphics::Display::IBrightnessOverrideStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetDefaultForSystem(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetForCurrentView(::IUnknown** value) = 0;
    virtual HRESULT __stdcall SaveForSystemAsync(::IUnknown* value, ::IUnknown** operation) = 0;
};};

template <> struct abi<Windows::Graphics::Display::IDisplayInformation>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CurrentOrientation(abi_t<Windows::Graphics::Display::DisplayOrientations>* value) = 0;
    virtual HRESULT __stdcall get_NativeOrientation(abi_t<Windows::Graphics::Display::DisplayOrientations>* value) = 0;
    virtual HRESULT __stdcall add_OrientationChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_OrientationChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_ResolutionScale(abi_t<Windows::Graphics::Display::ResolutionScale>* value) = 0;
    virtual HRESULT __stdcall get_LogicalDpi(float* value) = 0;
    virtual HRESULT __stdcall get_RawDpiX(float* value) = 0;
    virtual HRESULT __stdcall get_RawDpiY(float* value) = 0;
    virtual HRESULT __stdcall add_DpiChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_DpiChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_StereoEnabled(bool* value) = 0;
    virtual HRESULT __stdcall add_StereoEnabledChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_StereoEnabledChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall GetColorProfileAsync(::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall add_ColorProfileChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ColorProfileChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Graphics::Display::IDisplayInformation2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_RawPixelsPerViewPixel(double* value) = 0;
};};

template <> struct abi<Windows::Graphics::Display::IDisplayInformation3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_DiagonalSizeInInches(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::Graphics::Display::IDisplayInformation4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ScreenWidthInRawPixels(uint32_t* value) = 0;
    virtual HRESULT __stdcall get_ScreenHeightInRawPixels(uint32_t* value) = 0;
};};

template <> struct abi<Windows::Graphics::Display::IDisplayInformationStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForCurrentView(::IUnknown** current) = 0;
    virtual HRESULT __stdcall get_AutoRotationPreferences(abi_t<Windows::Graphics::Display::DisplayOrientations>* value) = 0;
    virtual HRESULT __stdcall put_AutoRotationPreferences(abi_t<Windows::Graphics::Display::DisplayOrientations> value) = 0;
    virtual HRESULT __stdcall add_DisplayContentsInvalidated(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_DisplayContentsInvalidated(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Graphics::Display::IDisplayPropertiesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_CurrentOrientation(abi_t<Windows::Graphics::Display::DisplayOrientations>* value) = 0;
    virtual HRESULT __stdcall get_NativeOrientation(abi_t<Windows::Graphics::Display::DisplayOrientations>* value) = 0;
    virtual HRESULT __stdcall get_AutoRotationPreferences(abi_t<Windows::Graphics::Display::DisplayOrientations>* value) = 0;
    virtual HRESULT __stdcall put_AutoRotationPreferences(abi_t<Windows::Graphics::Display::DisplayOrientations> value) = 0;
    virtual HRESULT __stdcall add_OrientationChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_OrientationChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_ResolutionScale(abi_t<Windows::Graphics::Display::ResolutionScale>* value) = 0;
    virtual HRESULT __stdcall get_LogicalDpi(float* value) = 0;
    virtual HRESULT __stdcall add_LogicalDpiChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_LogicalDpiChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall get_StereoEnabled(bool* value) = 0;
    virtual HRESULT __stdcall add_StereoEnabledChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_StereoEnabledChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall GetColorProfileAsync(::IUnknown** asyncInfo) = 0;
    virtual HRESULT __stdcall add_ColorProfileChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_ColorProfileChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_DisplayContentsInvalidated(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_DisplayContentsInvalidated(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::Graphics::Display::DisplayPropertiesEventHandler>{ struct type : ::IUnknown
{
    virtual HRESULT __stdcall Invoke(::IUnknown* sender) = 0;
};};

}
