// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::UI {

struct Color;

}

WINRT_EXPORT namespace winrt::Windows::Media::ClosedCaptioning {

enum class ClosedCaptionColor
{
    Default = 0,
    White = 1,
    Black = 2,
    Red = 3,
    Green = 4,
    Blue = 5,
    Yellow = 6,
    Magenta = 7,
    Cyan = 8,
};

enum class ClosedCaptionEdgeEffect
{
    Default = 0,
    None = 1,
    Raised = 2,
    Depressed = 3,
    Uniform = 4,
    DropShadow = 5,
};

enum class ClosedCaptionOpacity
{
    Default = 0,
    OneHundredPercent = 1,
    SeventyFivePercent = 2,
    TwentyFivePercent = 3,
    ZeroPercent = 4,
};

enum class ClosedCaptionSize
{
    Default = 0,
    FiftyPercent = 1,
    OneHundredPercent = 2,
    OneHundredFiftyPercent = 3,
    TwoHundredPercent = 4,
};

enum class ClosedCaptionStyle
{
    Default = 0,
    MonospacedWithSerifs = 1,
    ProportionalWithSerifs = 2,
    MonospacedWithoutSerifs = 3,
    ProportionalWithoutSerifs = 4,
    Casual = 5,
    Cursive = 6,
    SmallCapitals = 7,
};

struct IClosedCaptionPropertiesStatics;
struct ClosedCaptionProperties;

}

namespace winrt::impl {

template <> struct category<Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>{ using type = interface_category; };
template <> struct category<Windows::Media::ClosedCaptioning::ClosedCaptionProperties>{ using type = class_category; };
template <> struct category<Windows::Media::ClosedCaptioning::ClosedCaptionColor>{ using type = enum_category; };
template <> struct category<Windows::Media::ClosedCaptioning::ClosedCaptionEdgeEffect>{ using type = enum_category; };
template <> struct category<Windows::Media::ClosedCaptioning::ClosedCaptionOpacity>{ using type = enum_category; };
template <> struct category<Windows::Media::ClosedCaptioning::ClosedCaptionSize>{ using type = enum_category; };
template <> struct category<Windows::Media::ClosedCaptioning::ClosedCaptionStyle>{ using type = enum_category; };
template <> struct name<Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>{ static constexpr auto & value{ L"Windows.Media.ClosedCaptioning.IClosedCaptionPropertiesStatics" }; };
template <> struct name<Windows::Media::ClosedCaptioning::ClosedCaptionProperties>{ static constexpr auto & value{ L"Windows.Media.ClosedCaptioning.ClosedCaptionProperties" }; };
template <> struct name<Windows::Media::ClosedCaptioning::ClosedCaptionColor>{ static constexpr auto & value{ L"Windows.Media.ClosedCaptioning.ClosedCaptionColor" }; };
template <> struct name<Windows::Media::ClosedCaptioning::ClosedCaptionEdgeEffect>{ static constexpr auto & value{ L"Windows.Media.ClosedCaptioning.ClosedCaptionEdgeEffect" }; };
template <> struct name<Windows::Media::ClosedCaptioning::ClosedCaptionOpacity>{ static constexpr auto & value{ L"Windows.Media.ClosedCaptioning.ClosedCaptionOpacity" }; };
template <> struct name<Windows::Media::ClosedCaptioning::ClosedCaptionSize>{ static constexpr auto & value{ L"Windows.Media.ClosedCaptioning.ClosedCaptionSize" }; };
template <> struct name<Windows::Media::ClosedCaptioning::ClosedCaptionStyle>{ static constexpr auto & value{ L"Windows.Media.ClosedCaptioning.ClosedCaptionStyle" }; };
template <> struct guid<Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>{ static constexpr GUID value{ 0x10AA1F84,0xCC30,0x4141,{ 0xB5,0x03,0x52,0x72,0x28,0x9E,0x0C,0x20 } }; };

template <typename D>
struct consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics
{
    Windows::Media::ClosedCaptioning::ClosedCaptionColor FontColor() const;
    Windows::UI::Color ComputedFontColor() const;
    Windows::Media::ClosedCaptioning::ClosedCaptionOpacity FontOpacity() const;
    Windows::Media::ClosedCaptioning::ClosedCaptionSize FontSize() const;
    Windows::Media::ClosedCaptioning::ClosedCaptionStyle FontStyle() const;
    Windows::Media::ClosedCaptioning::ClosedCaptionEdgeEffect FontEffect() const;
    Windows::Media::ClosedCaptioning::ClosedCaptionColor BackgroundColor() const;
    Windows::UI::Color ComputedBackgroundColor() const;
    Windows::Media::ClosedCaptioning::ClosedCaptionOpacity BackgroundOpacity() const;
    Windows::Media::ClosedCaptioning::ClosedCaptionColor RegionColor() const;
    Windows::UI::Color ComputedRegionColor() const;
    Windows::Media::ClosedCaptioning::ClosedCaptionOpacity RegionOpacity() const;
};
template <> struct consume<Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics> { template <typename D> using type = consume_Windows_Media_ClosedCaptioning_IClosedCaptionPropertiesStatics<D>; };

template <> struct abi<Windows::Media::ClosedCaptioning::IClosedCaptionPropertiesStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FontColor(abi_t<Windows::Media::ClosedCaptioning::ClosedCaptionColor>* value) = 0;
    virtual HRESULT __stdcall get_ComputedFontColor(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_FontOpacity(abi_t<Windows::Media::ClosedCaptioning::ClosedCaptionOpacity>* value) = 0;
    virtual HRESULT __stdcall get_FontSize(abi_t<Windows::Media::ClosedCaptioning::ClosedCaptionSize>* value) = 0;
    virtual HRESULT __stdcall get_FontStyle(abi_t<Windows::Media::ClosedCaptioning::ClosedCaptionStyle>* value) = 0;
    virtual HRESULT __stdcall get_FontEffect(abi_t<Windows::Media::ClosedCaptioning::ClosedCaptionEdgeEffect>* value) = 0;
    virtual HRESULT __stdcall get_BackgroundColor(abi_t<Windows::Media::ClosedCaptioning::ClosedCaptionColor>* value) = 0;
    virtual HRESULT __stdcall get_ComputedBackgroundColor(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_BackgroundOpacity(abi_t<Windows::Media::ClosedCaptioning::ClosedCaptionOpacity>* value) = 0;
    virtual HRESULT __stdcall get_RegionColor(abi_t<Windows::Media::ClosedCaptioning::ClosedCaptionColor>* value) = 0;
    virtual HRESULT __stdcall get_ComputedRegionColor(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_RegionOpacity(abi_t<Windows::Media::ClosedCaptioning::ClosedCaptionOpacity>* value) = 0;
};};

}
