// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::UI {

struct IColorHelper;
struct IColorHelperStatics;
struct IColorHelperStatics2;
struct IColors;
struct IColorsStatics;
struct ColorHelper;
struct Colors;
struct Color;

}

namespace winrt::impl {

template <> struct category<Windows::UI::IColorHelper>{ using type = interface_category; };
template <> struct category<Windows::UI::IColorHelperStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::IColorHelperStatics2>{ using type = interface_category; };
template <> struct category<Windows::UI::IColors>{ using type = interface_category; };
template <> struct category<Windows::UI::IColorsStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::ColorHelper>{ using type = class_category; };
template <> struct category<Windows::UI::Colors>{ using type = class_category; };
template <> struct category<Windows::UI::Color>{ using type = struct_category<uint8_t,uint8_t,uint8_t,uint8_t>; };
template <> struct name<Windows::UI::IColorHelper>{ static constexpr auto & value{ L"Windows.UI.IColorHelper" }; };
template <> struct name<Windows::UI::IColorHelperStatics>{ static constexpr auto & value{ L"Windows.UI.IColorHelperStatics" }; };
template <> struct name<Windows::UI::IColorHelperStatics2>{ static constexpr auto & value{ L"Windows.UI.IColorHelperStatics2" }; };
template <> struct name<Windows::UI::IColors>{ static constexpr auto & value{ L"Windows.UI.IColors" }; };
template <> struct name<Windows::UI::IColorsStatics>{ static constexpr auto & value{ L"Windows.UI.IColorsStatics" }; };
template <> struct name<Windows::UI::ColorHelper>{ static constexpr auto & value{ L"Windows.UI.ColorHelper" }; };
template <> struct name<Windows::UI::Colors>{ static constexpr auto & value{ L"Windows.UI.Colors" }; };
template <> struct name<Windows::UI::Color>{ static constexpr auto & value{ L"Windows.UI.Color" }; };
template <> struct guid<Windows::UI::IColorHelper>{ static constexpr GUID value{ 0x193CFBE7,0x65C7,0x4540,{ 0xAD,0x08,0x62,0x83,0xBA,0x76,0x87,0x9A } }; };
template <> struct guid<Windows::UI::IColorHelperStatics>{ static constexpr GUID value{ 0x8504DBEA,0xFB6A,0x4144,{ 0xA6,0xC2,0x33,0x49,0x9C,0x92,0x84,0xF5 } }; };
template <> struct guid<Windows::UI::IColorHelperStatics2>{ static constexpr GUID value{ 0x24D9AF02,0x6EB0,0x4B94,{ 0x85,0x5C,0xFC,0xF0,0x81,0x8D,0x9A,0x16 } }; };
template <> struct guid<Windows::UI::IColors>{ static constexpr GUID value{ 0x9B8C9326,0x4CA6,0x4CE5,{ 0x89,0x94,0x9E,0xFF,0x65,0xCA,0xBD,0xCC } }; };
template <> struct guid<Windows::UI::IColorsStatics>{ static constexpr GUID value{ 0xCFF52E04,0xCCA6,0x4614,{ 0xA1,0x7E,0x75,0x49,0x10,0xC8,0x4A,0x99 } }; };
template <> struct default_interface<Windows::UI::ColorHelper>{ using type = Windows::UI::IColorHelper; };
template <> struct default_interface<Windows::UI::Colors>{ using type = Windows::UI::IColors; };

template <typename D>
struct consume_Windows_UI_IColorHelper
{
};
template <> struct consume<Windows::UI::IColorHelper> { template <typename D> using type = consume_Windows_UI_IColorHelper<D>; };

template <typename D>
struct consume_Windows_UI_IColorHelperStatics
{
    Windows::UI::Color FromArgb(uint8_t a, uint8_t r, uint8_t g, uint8_t b) const;
};
template <> struct consume<Windows::UI::IColorHelperStatics> { template <typename D> using type = consume_Windows_UI_IColorHelperStatics<D>; };

template <typename D>
struct consume_Windows_UI_IColorHelperStatics2
{
    hstring ToDisplayName(Windows::UI::Color const& color) const;
};
template <> struct consume<Windows::UI::IColorHelperStatics2> { template <typename D> using type = consume_Windows_UI_IColorHelperStatics2<D>; };

template <typename D>
struct consume_Windows_UI_IColors
{
};
template <> struct consume<Windows::UI::IColors> { template <typename D> using type = consume_Windows_UI_IColors<D>; };

template <typename D>
struct consume_Windows_UI_IColorsStatics
{
    Windows::UI::Color AliceBlue() const;
    Windows::UI::Color AntiqueWhite() const;
    Windows::UI::Color Aqua() const;
    Windows::UI::Color Aquamarine() const;
    Windows::UI::Color Azure() const;
    Windows::UI::Color Beige() const;
    Windows::UI::Color Bisque() const;
    Windows::UI::Color Black() const;
    Windows::UI::Color BlanchedAlmond() const;
    Windows::UI::Color Blue() const;
    Windows::UI::Color BlueViolet() const;
    Windows::UI::Color Brown() const;
    Windows::UI::Color BurlyWood() const;
    Windows::UI::Color CadetBlue() const;
    Windows::UI::Color Chartreuse() const;
    Windows::UI::Color Chocolate() const;
    Windows::UI::Color Coral() const;
    Windows::UI::Color CornflowerBlue() const;
    Windows::UI::Color Cornsilk() const;
    Windows::UI::Color Crimson() const;
    Windows::UI::Color Cyan() const;
    Windows::UI::Color DarkBlue() const;
    Windows::UI::Color DarkCyan() const;
    Windows::UI::Color DarkGoldenrod() const;
    Windows::UI::Color DarkGray() const;
    Windows::UI::Color DarkGreen() const;
    Windows::UI::Color DarkKhaki() const;
    Windows::UI::Color DarkMagenta() const;
    Windows::UI::Color DarkOliveGreen() const;
    Windows::UI::Color DarkOrange() const;
    Windows::UI::Color DarkOrchid() const;
    Windows::UI::Color DarkRed() const;
    Windows::UI::Color DarkSalmon() const;
    Windows::UI::Color DarkSeaGreen() const;
    Windows::UI::Color DarkSlateBlue() const;
    Windows::UI::Color DarkSlateGray() const;
    Windows::UI::Color DarkTurquoise() const;
    Windows::UI::Color DarkViolet() const;
    Windows::UI::Color DeepPink() const;
    Windows::UI::Color DeepSkyBlue() const;
    Windows::UI::Color DimGray() const;
    Windows::UI::Color DodgerBlue() const;
    Windows::UI::Color Firebrick() const;
    Windows::UI::Color FloralWhite() const;
    Windows::UI::Color ForestGreen() const;
    Windows::UI::Color Fuchsia() const;
    Windows::UI::Color Gainsboro() const;
    Windows::UI::Color GhostWhite() const;
    Windows::UI::Color Gold() const;
    Windows::UI::Color Goldenrod() const;
    Windows::UI::Color Gray() const;
    Windows::UI::Color Green() const;
    Windows::UI::Color GreenYellow() const;
    Windows::UI::Color Honeydew() const;
    Windows::UI::Color HotPink() const;
    Windows::UI::Color IndianRed() const;
    Windows::UI::Color Indigo() const;
    Windows::UI::Color Ivory() const;
    Windows::UI::Color Khaki() const;
    Windows::UI::Color Lavender() const;
    Windows::UI::Color LavenderBlush() const;
    Windows::UI::Color LawnGreen() const;
    Windows::UI::Color LemonChiffon() const;
    Windows::UI::Color LightBlue() const;
    Windows::UI::Color LightCoral() const;
    Windows::UI::Color LightCyan() const;
    Windows::UI::Color LightGoldenrodYellow() const;
    Windows::UI::Color LightGreen() const;
    Windows::UI::Color LightGray() const;
    Windows::UI::Color LightPink() const;
    Windows::UI::Color LightSalmon() const;
    Windows::UI::Color LightSeaGreen() const;
    Windows::UI::Color LightSkyBlue() const;
    Windows::UI::Color LightSlateGray() const;
    Windows::UI::Color LightSteelBlue() const;
    Windows::UI::Color LightYellow() const;
    Windows::UI::Color Lime() const;
    Windows::UI::Color LimeGreen() const;
    Windows::UI::Color Linen() const;
    Windows::UI::Color Magenta() const;
    Windows::UI::Color Maroon() const;
    Windows::UI::Color MediumAquamarine() const;
    Windows::UI::Color MediumBlue() const;
    Windows::UI::Color MediumOrchid() const;
    Windows::UI::Color MediumPurple() const;
    Windows::UI::Color MediumSeaGreen() const;
    Windows::UI::Color MediumSlateBlue() const;
    Windows::UI::Color MediumSpringGreen() const;
    Windows::UI::Color MediumTurquoise() const;
    Windows::UI::Color MediumVioletRed() const;
    Windows::UI::Color MidnightBlue() const;
    Windows::UI::Color MintCream() const;
    Windows::UI::Color MistyRose() const;
    Windows::UI::Color Moccasin() const;
    Windows::UI::Color NavajoWhite() const;
    Windows::UI::Color Navy() const;
    Windows::UI::Color OldLace() const;
    Windows::UI::Color Olive() const;
    Windows::UI::Color OliveDrab() const;
    Windows::UI::Color Orange() const;
    Windows::UI::Color OrangeRed() const;
    Windows::UI::Color Orchid() const;
    Windows::UI::Color PaleGoldenrod() const;
    Windows::UI::Color PaleGreen() const;
    Windows::UI::Color PaleTurquoise() const;
    Windows::UI::Color PaleVioletRed() const;
    Windows::UI::Color PapayaWhip() const;
    Windows::UI::Color PeachPuff() const;
    Windows::UI::Color Peru() const;
    Windows::UI::Color Pink() const;
    Windows::UI::Color Plum() const;
    Windows::UI::Color PowderBlue() const;
    Windows::UI::Color Purple() const;
    Windows::UI::Color Red() const;
    Windows::UI::Color RosyBrown() const;
    Windows::UI::Color RoyalBlue() const;
    Windows::UI::Color SaddleBrown() const;
    Windows::UI::Color Salmon() const;
    Windows::UI::Color SandyBrown() const;
    Windows::UI::Color SeaGreen() const;
    Windows::UI::Color SeaShell() const;
    Windows::UI::Color Sienna() const;
    Windows::UI::Color Silver() const;
    Windows::UI::Color SkyBlue() const;
    Windows::UI::Color SlateBlue() const;
    Windows::UI::Color SlateGray() const;
    Windows::UI::Color Snow() const;
    Windows::UI::Color SpringGreen() const;
    Windows::UI::Color SteelBlue() const;
    Windows::UI::Color Tan() const;
    Windows::UI::Color Teal() const;
    Windows::UI::Color Thistle() const;
    Windows::UI::Color Tomato() const;
    Windows::UI::Color Transparent() const;
    Windows::UI::Color Turquoise() const;
    Windows::UI::Color Violet() const;
    Windows::UI::Color Wheat() const;
    Windows::UI::Color White() const;
    Windows::UI::Color WhiteSmoke() const;
    Windows::UI::Color Yellow() const;
    Windows::UI::Color YellowGreen() const;
};
template <> struct consume<Windows::UI::IColorsStatics> { template <typename D> using type = consume_Windows_UI_IColorsStatics<D>; };

template <> struct abi<Windows::UI::IColorHelper>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::IColorHelperStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall FromArgb(uint8_t a, uint8_t r, uint8_t g, uint8_t b, abi_t<Windows::UI::Color>* returnValue) = 0;
};};

template <> struct abi<Windows::UI::IColorHelperStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ToDisplayName(abi_t<Windows::UI::Color> color, HSTRING* returnValue) = 0;
};};

template <> struct abi<Windows::UI::IColors>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::IColorsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AliceBlue(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_AntiqueWhite(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Aqua(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Aquamarine(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Azure(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Beige(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Bisque(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Black(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_BlanchedAlmond(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Blue(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_BlueViolet(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Brown(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_BurlyWood(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_CadetBlue(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Chartreuse(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Chocolate(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Coral(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_CornflowerBlue(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Cornsilk(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Crimson(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Cyan(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_DarkBlue(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_DarkCyan(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_DarkGoldenrod(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_DarkGray(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_DarkGreen(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_DarkKhaki(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_DarkMagenta(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_DarkOliveGreen(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_DarkOrange(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_DarkOrchid(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_DarkRed(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_DarkSalmon(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_DarkSeaGreen(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_DarkSlateBlue(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_DarkSlateGray(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_DarkTurquoise(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_DarkViolet(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_DeepPink(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_DeepSkyBlue(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_DimGray(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_DodgerBlue(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Firebrick(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_FloralWhite(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_ForestGreen(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Fuchsia(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Gainsboro(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_GhostWhite(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Gold(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Goldenrod(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Gray(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Green(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_GreenYellow(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Honeydew(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_HotPink(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_IndianRed(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Indigo(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Ivory(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Khaki(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Lavender(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_LavenderBlush(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_LawnGreen(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_LemonChiffon(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_LightBlue(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_LightCoral(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_LightCyan(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_LightGoldenrodYellow(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_LightGreen(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_LightGray(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_LightPink(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_LightSalmon(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_LightSeaGreen(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_LightSkyBlue(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_LightSlateGray(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_LightSteelBlue(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_LightYellow(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Lime(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_LimeGreen(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Linen(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Magenta(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Maroon(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_MediumAquamarine(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_MediumBlue(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_MediumOrchid(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_MediumPurple(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_MediumSeaGreen(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_MediumSlateBlue(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_MediumSpringGreen(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_MediumTurquoise(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_MediumVioletRed(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_MidnightBlue(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_MintCream(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_MistyRose(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Moccasin(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_NavajoWhite(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Navy(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_OldLace(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Olive(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_OliveDrab(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Orange(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_OrangeRed(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Orchid(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_PaleGoldenrod(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_PaleGreen(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_PaleTurquoise(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_PaleVioletRed(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_PapayaWhip(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_PeachPuff(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Peru(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Pink(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Plum(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_PowderBlue(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Purple(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Red(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_RosyBrown(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_RoyalBlue(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_SaddleBrown(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Salmon(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_SandyBrown(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_SeaGreen(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_SeaShell(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Sienna(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Silver(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_SkyBlue(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_SlateBlue(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_SlateGray(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Snow(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_SpringGreen(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_SteelBlue(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Tan(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Teal(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Thistle(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Tomato(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Transparent(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Turquoise(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Violet(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Wheat(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_White(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_WhiteSmoke(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_Yellow(abi_t<Windows::UI::Color>* value) = 0;
    virtual HRESULT __stdcall get_YellowGreen(abi_t<Windows::UI::Color>* value) = 0;
};};

}
