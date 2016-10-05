// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.UI.0.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI {

struct Color
{
    uint8_t A;
    uint8_t R;
    uint8_t G;
    uint8_t B;
};

}

namespace Windows::UI {

using Color = ABI::Windows::UI::Color;

}

namespace ABI::Windows::UI {

struct __declspec(uuid("193cfbe7-65c7-4540-ad08-6283ba76879a")) __declspec(novtable) IColorHelper : Windows::IInspectable
{
};

struct __declspec(uuid("8504dbea-fb6a-4144-a6c2-33499c9284f5")) __declspec(novtable) IColorHelperStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_FromArgb(uint8_t a, uint8_t r, uint8_t g, uint8_t b, Windows::UI::Color * returnValue) = 0;
};

struct __declspec(uuid("9b8c9326-4ca6-4ce5-8994-9eff65cabdcc")) __declspec(novtable) IColors : Windows::IInspectable
{
};

struct __declspec(uuid("cff52e04-cca6-4614-a17e-754910c84a99")) __declspec(novtable) IColorsStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AliceBlue(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_AntiqueWhite(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Aqua(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Aquamarine(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Azure(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Beige(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Bisque(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Black(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_BlanchedAlmond(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Blue(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_BlueViolet(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Brown(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_BurlyWood(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_CadetBlue(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Chartreuse(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Chocolate(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Coral(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_CornflowerBlue(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Cornsilk(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Crimson(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Cyan(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_DarkBlue(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_DarkCyan(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_DarkGoldenrod(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_DarkGray(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_DarkGreen(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_DarkKhaki(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_DarkMagenta(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_DarkOliveGreen(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_DarkOrange(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_DarkOrchid(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_DarkRed(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_DarkSalmon(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_DarkSeaGreen(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_DarkSlateBlue(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_DarkSlateGray(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_DarkTurquoise(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_DarkViolet(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_DeepPink(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_DeepSkyBlue(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_DimGray(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_DodgerBlue(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Firebrick(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_FloralWhite(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_ForestGreen(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Fuchsia(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Gainsboro(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_GhostWhite(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Gold(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Goldenrod(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Gray(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Green(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_GreenYellow(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Honeydew(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_HotPink(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_IndianRed(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Indigo(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Ivory(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Khaki(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Lavender(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_LavenderBlush(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_LawnGreen(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_LemonChiffon(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_LightBlue(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_LightCoral(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_LightCyan(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_LightGoldenrodYellow(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_LightGreen(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_LightGray(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_LightPink(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_LightSalmon(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_LightSeaGreen(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_LightSkyBlue(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_LightSlateGray(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_LightSteelBlue(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_LightYellow(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Lime(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_LimeGreen(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Linen(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Magenta(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Maroon(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_MediumAquamarine(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_MediumBlue(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_MediumOrchid(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_MediumPurple(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_MediumSeaGreen(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_MediumSlateBlue(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_MediumSpringGreen(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_MediumTurquoise(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_MediumVioletRed(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_MidnightBlue(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_MintCream(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_MistyRose(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Moccasin(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_NavajoWhite(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Navy(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_OldLace(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Olive(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_OliveDrab(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Orange(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_OrangeRed(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Orchid(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_PaleGoldenrod(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_PaleGreen(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_PaleTurquoise(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_PaleVioletRed(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_PapayaWhip(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_PeachPuff(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Peru(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Pink(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Plum(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_PowderBlue(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Purple(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Red(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_RosyBrown(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_RoyalBlue(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_SaddleBrown(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Salmon(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_SandyBrown(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_SeaGreen(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_SeaShell(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Sienna(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Silver(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_SkyBlue(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_SlateBlue(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_SlateGray(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Snow(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_SpringGreen(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_SteelBlue(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Tan(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Teal(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Thistle(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Tomato(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Transparent(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Turquoise(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Violet(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Wheat(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_White(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_WhiteSmoke(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_Yellow(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_YellowGreen(Windows::UI::Color * value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::UI::ColorHelper> { using default_interface = Windows::UI::IColorHelper; };
template <> struct traits<Windows::UI::Colors> { using default_interface = Windows::UI::IColors; };

}

namespace Windows::UI {

template <typename T> struct impl_IColorHelper;
template <typename T> struct impl_IColorHelperStatics;
template <typename T> struct impl_IColors;
template <typename T> struct impl_IColorsStatics;

}

namespace impl {

template <> struct traits<Windows::UI::IColorHelper>
{
    using abi = ABI::Windows::UI::IColorHelper;
    template <typename D> using consume = Windows::UI::impl_IColorHelper<D>;
};

template <> struct traits<Windows::UI::IColorHelperStatics>
{
    using abi = ABI::Windows::UI::IColorHelperStatics;
    template <typename D> using consume = Windows::UI::impl_IColorHelperStatics<D>;
};

template <> struct traits<Windows::UI::IColors>
{
    using abi = ABI::Windows::UI::IColors;
    template <typename D> using consume = Windows::UI::impl_IColors<D>;
};

template <> struct traits<Windows::UI::IColorsStatics>
{
    using abi = ABI::Windows::UI::IColorsStatics;
    template <typename D> using consume = Windows::UI::impl_IColorsStatics<D>;
};

template <> struct traits<Windows::UI::ColorHelper>
{
    using abi = ABI::Windows::UI::ColorHelper;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.ColorHelper"; }
};

template <> struct traits<Windows::UI::Colors>
{
    using abi = ABI::Windows::UI::Colors;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Colors"; }
};

}

}
