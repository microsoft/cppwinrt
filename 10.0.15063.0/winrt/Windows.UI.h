// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.UI.2.h"

namespace winrt::impl {

template <typename D> Windows::UI::Color consume_Windows_UI_IColorHelperStatics<D>::FromArgb(uint8_t a, uint8_t r, uint8_t g, uint8_t b) const
{
    Windows::UI::Color returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorHelperStatics)->FromArgb(a, r, g, b, put_abi(returnValue)));
    return returnValue;
}

template <typename D> hstring consume_Windows_UI_IColorHelperStatics2<D>::ToDisplayName(Windows::UI::Color const& color) const
{
    hstring returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorHelperStatics2)->ToDisplayName(get_abi(color), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::AliceBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_AliceBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::AntiqueWhite() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_AntiqueWhite(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Aqua() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Aqua(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Aquamarine() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Aquamarine(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Azure() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Azure(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Beige() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Beige(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Bisque() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Bisque(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Black() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Black(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::BlanchedAlmond() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_BlanchedAlmond(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Blue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Blue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::BlueViolet() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_BlueViolet(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Brown() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Brown(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::BurlyWood() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_BurlyWood(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::CadetBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_CadetBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Chartreuse() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Chartreuse(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Chocolate() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Chocolate(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Coral() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Coral(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::CornflowerBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_CornflowerBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Cornsilk() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Cornsilk(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Crimson() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Crimson(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Cyan() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Cyan(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkCyan() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkCyan(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkGoldenrod() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkGoldenrod(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkGray() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkGray(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkGreen() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkGreen(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkKhaki() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkKhaki(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkMagenta() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkMagenta(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkOliveGreen() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkOliveGreen(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkOrange() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkOrange(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkOrchid() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkOrchid(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkRed() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkRed(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkSalmon() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkSalmon(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkSeaGreen() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkSeaGreen(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkSlateBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkSlateBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkSlateGray() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkSlateGray(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkTurquoise() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkTurquoise(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DarkViolet() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DarkViolet(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DeepPink() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DeepPink(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DeepSkyBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DeepSkyBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DimGray() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DimGray(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::DodgerBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_DodgerBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Firebrick() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Firebrick(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::FloralWhite() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_FloralWhite(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::ForestGreen() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_ForestGreen(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Fuchsia() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Fuchsia(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Gainsboro() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Gainsboro(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::GhostWhite() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_GhostWhite(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Gold() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Gold(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Goldenrod() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Goldenrod(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Gray() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Gray(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Green() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Green(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::GreenYellow() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_GreenYellow(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Honeydew() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Honeydew(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::HotPink() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_HotPink(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::IndianRed() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_IndianRed(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Indigo() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Indigo(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Ivory() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Ivory(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Khaki() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Khaki(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Lavender() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Lavender(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LavenderBlush() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LavenderBlush(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LawnGreen() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LawnGreen(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LemonChiffon() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LemonChiffon(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LightBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LightBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LightCoral() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LightCoral(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LightCyan() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LightCyan(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LightGoldenrodYellow() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LightGoldenrodYellow(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LightGreen() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LightGreen(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LightGray() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LightGray(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LightPink() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LightPink(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LightSalmon() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LightSalmon(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LightSeaGreen() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LightSeaGreen(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LightSkyBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LightSkyBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LightSlateGray() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LightSlateGray(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LightSteelBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LightSteelBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LightYellow() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LightYellow(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Lime() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Lime(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::LimeGreen() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_LimeGreen(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Linen() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Linen(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Magenta() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Magenta(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Maroon() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Maroon(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::MediumAquamarine() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_MediumAquamarine(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::MediumBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_MediumBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::MediumOrchid() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_MediumOrchid(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::MediumPurple() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_MediumPurple(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::MediumSeaGreen() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_MediumSeaGreen(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::MediumSlateBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_MediumSlateBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::MediumSpringGreen() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_MediumSpringGreen(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::MediumTurquoise() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_MediumTurquoise(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::MediumVioletRed() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_MediumVioletRed(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::MidnightBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_MidnightBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::MintCream() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_MintCream(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::MistyRose() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_MistyRose(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Moccasin() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Moccasin(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::NavajoWhite() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_NavajoWhite(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Navy() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Navy(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::OldLace() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_OldLace(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Olive() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Olive(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::OliveDrab() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_OliveDrab(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Orange() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Orange(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::OrangeRed() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_OrangeRed(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Orchid() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Orchid(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::PaleGoldenrod() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_PaleGoldenrod(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::PaleGreen() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_PaleGreen(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::PaleTurquoise() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_PaleTurquoise(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::PaleVioletRed() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_PaleVioletRed(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::PapayaWhip() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_PapayaWhip(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::PeachPuff() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_PeachPuff(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Peru() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Peru(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Pink() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Pink(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Plum() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Plum(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::PowderBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_PowderBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Purple() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Purple(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Red() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Red(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::RosyBrown() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_RosyBrown(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::RoyalBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_RoyalBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::SaddleBrown() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_SaddleBrown(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Salmon() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Salmon(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::SandyBrown() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_SandyBrown(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::SeaGreen() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_SeaGreen(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::SeaShell() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_SeaShell(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Sienna() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Sienna(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Silver() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Silver(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::SkyBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_SkyBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::SlateBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_SlateBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::SlateGray() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_SlateGray(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Snow() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Snow(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::SpringGreen() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_SpringGreen(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::SteelBlue() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_SteelBlue(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Tan() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Tan(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Teal() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Teal(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Thistle() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Thistle(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Tomato() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Tomato(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Transparent() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Transparent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Turquoise() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Turquoise(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Violet() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Violet(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Wheat() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Wheat(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::White() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_White(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::WhiteSmoke() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_WhiteSmoke(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::Yellow() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_Yellow(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_IColorsStatics<D>::YellowGreen() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::IColorsStatics)->get_YellowGreen(put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::UI::IColorHelper> : produce_base<D, Windows::UI::IColorHelper>
{};

template <typename D>
struct produce<D, Windows::UI::IColorHelperStatics> : produce_base<D, Windows::UI::IColorHelperStatics>
{
    HRESULT __stdcall FromArgb(uint8_t a, uint8_t r, uint8_t g, uint8_t b, abi_t<Windows::UI::Color>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().FromArgb(a, r, g, b));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::IColorHelperStatics2> : produce_base<D, Windows::UI::IColorHelperStatics2>
{
    HRESULT __stdcall ToDisplayName(abi_t<Windows::UI::Color> color, HSTRING* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().ToDisplayName(*reinterpret_cast<Windows::UI::Color const*>(&color)));
            return S_OK;
        }
        catch (...)
        {
            *returnValue = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::IColors> : produce_base<D, Windows::UI::IColors>
{};

template <typename D>
struct produce<D, Windows::UI::IColorsStatics> : produce_base<D, Windows::UI::IColorsStatics>
{
    HRESULT __stdcall get_AliceBlue(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AliceBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AntiqueWhite(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AntiqueWhite());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Aqua(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Aqua());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Aquamarine(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Aquamarine());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Azure(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Azure());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Beige(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Beige());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bisque(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Bisque());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Black(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Black());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BlanchedAlmond(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BlanchedAlmond());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Blue(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Blue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BlueViolet(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BlueViolet());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Brown(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Brown());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BurlyWood(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BurlyWood());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CadetBlue(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CadetBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Chartreuse(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Chartreuse());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Chocolate(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Chocolate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Coral(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Coral());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CornflowerBlue(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CornflowerBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Cornsilk(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Cornsilk());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Crimson(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Crimson());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Cyan(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Cyan());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkBlue(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DarkBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkCyan(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DarkCyan());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkGoldenrod(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DarkGoldenrod());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkGray(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DarkGray());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkGreen(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DarkGreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkKhaki(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DarkKhaki());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkMagenta(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DarkMagenta());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkOliveGreen(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DarkOliveGreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkOrange(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DarkOrange());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkOrchid(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DarkOrchid());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkRed(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DarkRed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkSalmon(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DarkSalmon());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkSeaGreen(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DarkSeaGreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkSlateBlue(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DarkSlateBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkSlateGray(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DarkSlateGray());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkTurquoise(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DarkTurquoise());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkViolet(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DarkViolet());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeepPink(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeepPink());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeepSkyBlue(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DeepSkyBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DimGray(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DimGray());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DodgerBlue(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DodgerBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Firebrick(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Firebrick());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FloralWhite(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FloralWhite());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ForestGreen(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ForestGreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Fuchsia(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Fuchsia());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Gainsboro(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Gainsboro());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GhostWhite(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GhostWhite());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Gold(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Gold());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Goldenrod(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Goldenrod());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Gray(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Gray());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Green(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Green());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GreenYellow(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GreenYellow());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Honeydew(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Honeydew());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HotPink(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HotPink());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IndianRed(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IndianRed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Indigo(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Indigo());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ivory(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Ivory());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Khaki(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Khaki());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Lavender(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Lavender());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LavenderBlush(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LavenderBlush());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LawnGreen(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LawnGreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LemonChiffon(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LemonChiffon());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightBlue(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LightBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightCoral(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LightCoral());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightCyan(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LightCyan());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightGoldenrodYellow(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LightGoldenrodYellow());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightGreen(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LightGreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightGray(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LightGray());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightPink(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LightPink());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightSalmon(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LightSalmon());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightSeaGreen(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LightSeaGreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightSkyBlue(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LightSkyBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightSlateGray(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LightSlateGray());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightSteelBlue(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LightSteelBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightYellow(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LightYellow());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Lime(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Lime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LimeGreen(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LimeGreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Linen(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Linen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Magenta(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Magenta());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Maroon(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Maroon());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediumAquamarine(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MediumAquamarine());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediumBlue(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MediumBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediumOrchid(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MediumOrchid());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediumPurple(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MediumPurple());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediumSeaGreen(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MediumSeaGreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediumSlateBlue(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MediumSlateBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediumSpringGreen(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MediumSpringGreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediumTurquoise(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MediumTurquoise());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediumVioletRed(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MediumVioletRed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MidnightBlue(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MidnightBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MintCream(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MintCream());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MistyRose(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MistyRose());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Moccasin(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Moccasin());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NavajoWhite(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NavajoWhite());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Navy(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Navy());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OldLace(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OldLace());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Olive(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Olive());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OliveDrab(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OliveDrab());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Orange(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Orange());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OrangeRed(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OrangeRed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Orchid(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Orchid());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PaleGoldenrod(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PaleGoldenrod());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PaleGreen(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PaleGreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PaleTurquoise(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PaleTurquoise());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PaleVioletRed(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PaleVioletRed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PapayaWhip(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PapayaWhip());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PeachPuff(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PeachPuff());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Peru(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Peru());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pink(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Pink());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Plum(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Plum());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PowderBlue(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PowderBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Purple(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Purple());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Red(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Red());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RosyBrown(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RosyBrown());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RoyalBlue(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RoyalBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SaddleBrown(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SaddleBrown());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Salmon(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Salmon());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SandyBrown(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SandyBrown());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SeaGreen(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SeaGreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SeaShell(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SeaShell());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sienna(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Sienna());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Silver(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Silver());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SkyBlue(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SkyBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SlateBlue(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SlateBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SlateGray(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SlateGray());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Snow(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Snow());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpringGreen(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SpringGreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SteelBlue(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SteelBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tan(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Tan());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Teal(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Teal());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Thistle(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Thistle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tomato(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Tomato());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Transparent(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Transparent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Turquoise(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Turquoise());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Violet(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Violet());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Wheat(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Wheat());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_White(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().White());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WhiteSmoke(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WhiteSmoke());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Yellow(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Yellow());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_YellowGreen(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().YellowGreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI {

inline Windows::UI::Color ColorHelper::FromArgb(uint8_t a, uint8_t r, uint8_t g, uint8_t b)
{
    return get_activation_factory<ColorHelper, Windows::UI::IColorHelperStatics>().FromArgb(a, r, g, b);
}

inline hstring ColorHelper::ToDisplayName(Windows::UI::Color const& color)
{
    return get_activation_factory<ColorHelper, Windows::UI::IColorHelperStatics2>().ToDisplayName(color);
}

inline Windows::UI::Color Colors::AliceBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().AliceBlue();
}

inline Windows::UI::Color Colors::AntiqueWhite()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().AntiqueWhite();
}

inline Windows::UI::Color Colors::Aqua()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Aqua();
}

inline Windows::UI::Color Colors::Aquamarine()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Aquamarine();
}

inline Windows::UI::Color Colors::Azure()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Azure();
}

inline Windows::UI::Color Colors::Beige()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Beige();
}

inline Windows::UI::Color Colors::Bisque()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Bisque();
}

inline Windows::UI::Color Colors::Black()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Black();
}

inline Windows::UI::Color Colors::BlanchedAlmond()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().BlanchedAlmond();
}

inline Windows::UI::Color Colors::Blue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Blue();
}

inline Windows::UI::Color Colors::BlueViolet()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().BlueViolet();
}

inline Windows::UI::Color Colors::Brown()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Brown();
}

inline Windows::UI::Color Colors::BurlyWood()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().BurlyWood();
}

inline Windows::UI::Color Colors::CadetBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().CadetBlue();
}

inline Windows::UI::Color Colors::Chartreuse()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Chartreuse();
}

inline Windows::UI::Color Colors::Chocolate()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Chocolate();
}

inline Windows::UI::Color Colors::Coral()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Coral();
}

inline Windows::UI::Color Colors::CornflowerBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().CornflowerBlue();
}

inline Windows::UI::Color Colors::Cornsilk()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Cornsilk();
}

inline Windows::UI::Color Colors::Crimson()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Crimson();
}

inline Windows::UI::Color Colors::Cyan()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Cyan();
}

inline Windows::UI::Color Colors::DarkBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkBlue();
}

inline Windows::UI::Color Colors::DarkCyan()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkCyan();
}

inline Windows::UI::Color Colors::DarkGoldenrod()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkGoldenrod();
}

inline Windows::UI::Color Colors::DarkGray()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkGray();
}

inline Windows::UI::Color Colors::DarkGreen()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkGreen();
}

inline Windows::UI::Color Colors::DarkKhaki()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkKhaki();
}

inline Windows::UI::Color Colors::DarkMagenta()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkMagenta();
}

inline Windows::UI::Color Colors::DarkOliveGreen()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkOliveGreen();
}

inline Windows::UI::Color Colors::DarkOrange()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkOrange();
}

inline Windows::UI::Color Colors::DarkOrchid()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkOrchid();
}

inline Windows::UI::Color Colors::DarkRed()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkRed();
}

inline Windows::UI::Color Colors::DarkSalmon()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkSalmon();
}

inline Windows::UI::Color Colors::DarkSeaGreen()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkSeaGreen();
}

inline Windows::UI::Color Colors::DarkSlateBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkSlateBlue();
}

inline Windows::UI::Color Colors::DarkSlateGray()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkSlateGray();
}

inline Windows::UI::Color Colors::DarkTurquoise()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkTurquoise();
}

inline Windows::UI::Color Colors::DarkViolet()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DarkViolet();
}

inline Windows::UI::Color Colors::DeepPink()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DeepPink();
}

inline Windows::UI::Color Colors::DeepSkyBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DeepSkyBlue();
}

inline Windows::UI::Color Colors::DimGray()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DimGray();
}

inline Windows::UI::Color Colors::DodgerBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().DodgerBlue();
}

inline Windows::UI::Color Colors::Firebrick()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Firebrick();
}

inline Windows::UI::Color Colors::FloralWhite()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().FloralWhite();
}

inline Windows::UI::Color Colors::ForestGreen()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().ForestGreen();
}

inline Windows::UI::Color Colors::Fuchsia()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Fuchsia();
}

inline Windows::UI::Color Colors::Gainsboro()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Gainsboro();
}

inline Windows::UI::Color Colors::GhostWhite()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().GhostWhite();
}

inline Windows::UI::Color Colors::Gold()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Gold();
}

inline Windows::UI::Color Colors::Goldenrod()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Goldenrod();
}

inline Windows::UI::Color Colors::Gray()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Gray();
}

inline Windows::UI::Color Colors::Green()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Green();
}

inline Windows::UI::Color Colors::GreenYellow()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().GreenYellow();
}

inline Windows::UI::Color Colors::Honeydew()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Honeydew();
}

inline Windows::UI::Color Colors::HotPink()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().HotPink();
}

inline Windows::UI::Color Colors::IndianRed()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().IndianRed();
}

inline Windows::UI::Color Colors::Indigo()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Indigo();
}

inline Windows::UI::Color Colors::Ivory()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Ivory();
}

inline Windows::UI::Color Colors::Khaki()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Khaki();
}

inline Windows::UI::Color Colors::Lavender()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Lavender();
}

inline Windows::UI::Color Colors::LavenderBlush()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LavenderBlush();
}

inline Windows::UI::Color Colors::LawnGreen()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LawnGreen();
}

inline Windows::UI::Color Colors::LemonChiffon()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LemonChiffon();
}

inline Windows::UI::Color Colors::LightBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LightBlue();
}

inline Windows::UI::Color Colors::LightCoral()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LightCoral();
}

inline Windows::UI::Color Colors::LightCyan()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LightCyan();
}

inline Windows::UI::Color Colors::LightGoldenrodYellow()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LightGoldenrodYellow();
}

inline Windows::UI::Color Colors::LightGreen()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LightGreen();
}

inline Windows::UI::Color Colors::LightGray()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LightGray();
}

inline Windows::UI::Color Colors::LightPink()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LightPink();
}

inline Windows::UI::Color Colors::LightSalmon()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LightSalmon();
}

inline Windows::UI::Color Colors::LightSeaGreen()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LightSeaGreen();
}

inline Windows::UI::Color Colors::LightSkyBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LightSkyBlue();
}

inline Windows::UI::Color Colors::LightSlateGray()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LightSlateGray();
}

inline Windows::UI::Color Colors::LightSteelBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LightSteelBlue();
}

inline Windows::UI::Color Colors::LightYellow()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LightYellow();
}

inline Windows::UI::Color Colors::Lime()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Lime();
}

inline Windows::UI::Color Colors::LimeGreen()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().LimeGreen();
}

inline Windows::UI::Color Colors::Linen()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Linen();
}

inline Windows::UI::Color Colors::Magenta()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Magenta();
}

inline Windows::UI::Color Colors::Maroon()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Maroon();
}

inline Windows::UI::Color Colors::MediumAquamarine()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().MediumAquamarine();
}

inline Windows::UI::Color Colors::MediumBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().MediumBlue();
}

inline Windows::UI::Color Colors::MediumOrchid()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().MediumOrchid();
}

inline Windows::UI::Color Colors::MediumPurple()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().MediumPurple();
}

inline Windows::UI::Color Colors::MediumSeaGreen()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().MediumSeaGreen();
}

inline Windows::UI::Color Colors::MediumSlateBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().MediumSlateBlue();
}

inline Windows::UI::Color Colors::MediumSpringGreen()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().MediumSpringGreen();
}

inline Windows::UI::Color Colors::MediumTurquoise()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().MediumTurquoise();
}

inline Windows::UI::Color Colors::MediumVioletRed()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().MediumVioletRed();
}

inline Windows::UI::Color Colors::MidnightBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().MidnightBlue();
}

inline Windows::UI::Color Colors::MintCream()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().MintCream();
}

inline Windows::UI::Color Colors::MistyRose()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().MistyRose();
}

inline Windows::UI::Color Colors::Moccasin()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Moccasin();
}

inline Windows::UI::Color Colors::NavajoWhite()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().NavajoWhite();
}

inline Windows::UI::Color Colors::Navy()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Navy();
}

inline Windows::UI::Color Colors::OldLace()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().OldLace();
}

inline Windows::UI::Color Colors::Olive()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Olive();
}

inline Windows::UI::Color Colors::OliveDrab()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().OliveDrab();
}

inline Windows::UI::Color Colors::Orange()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Orange();
}

inline Windows::UI::Color Colors::OrangeRed()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().OrangeRed();
}

inline Windows::UI::Color Colors::Orchid()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Orchid();
}

inline Windows::UI::Color Colors::PaleGoldenrod()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().PaleGoldenrod();
}

inline Windows::UI::Color Colors::PaleGreen()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().PaleGreen();
}

inline Windows::UI::Color Colors::PaleTurquoise()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().PaleTurquoise();
}

inline Windows::UI::Color Colors::PaleVioletRed()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().PaleVioletRed();
}

inline Windows::UI::Color Colors::PapayaWhip()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().PapayaWhip();
}

inline Windows::UI::Color Colors::PeachPuff()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().PeachPuff();
}

inline Windows::UI::Color Colors::Peru()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Peru();
}

inline Windows::UI::Color Colors::Pink()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Pink();
}

inline Windows::UI::Color Colors::Plum()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Plum();
}

inline Windows::UI::Color Colors::PowderBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().PowderBlue();
}

inline Windows::UI::Color Colors::Purple()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Purple();
}

inline Windows::UI::Color Colors::Red()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Red();
}

inline Windows::UI::Color Colors::RosyBrown()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().RosyBrown();
}

inline Windows::UI::Color Colors::RoyalBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().RoyalBlue();
}

inline Windows::UI::Color Colors::SaddleBrown()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().SaddleBrown();
}

inline Windows::UI::Color Colors::Salmon()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Salmon();
}

inline Windows::UI::Color Colors::SandyBrown()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().SandyBrown();
}

inline Windows::UI::Color Colors::SeaGreen()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().SeaGreen();
}

inline Windows::UI::Color Colors::SeaShell()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().SeaShell();
}

inline Windows::UI::Color Colors::Sienna()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Sienna();
}

inline Windows::UI::Color Colors::Silver()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Silver();
}

inline Windows::UI::Color Colors::SkyBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().SkyBlue();
}

inline Windows::UI::Color Colors::SlateBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().SlateBlue();
}

inline Windows::UI::Color Colors::SlateGray()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().SlateGray();
}

inline Windows::UI::Color Colors::Snow()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Snow();
}

inline Windows::UI::Color Colors::SpringGreen()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().SpringGreen();
}

inline Windows::UI::Color Colors::SteelBlue()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().SteelBlue();
}

inline Windows::UI::Color Colors::Tan()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Tan();
}

inline Windows::UI::Color Colors::Teal()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Teal();
}

inline Windows::UI::Color Colors::Thistle()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Thistle();
}

inline Windows::UI::Color Colors::Tomato()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Tomato();
}

inline Windows::UI::Color Colors::Transparent()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Transparent();
}

inline Windows::UI::Color Colors::Turquoise()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Turquoise();
}

inline Windows::UI::Color Colors::Violet()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Violet();
}

inline Windows::UI::Color Colors::Wheat()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Wheat();
}

inline Windows::UI::Color Colors::White()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().White();
}

inline Windows::UI::Color Colors::WhiteSmoke()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().WhiteSmoke();
}

inline Windows::UI::Color Colors::Yellow()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().Yellow();
}

inline Windows::UI::Color Colors::YellowGreen()
{
    return get_activation_factory<Colors, Windows::UI::IColorsStatics>().YellowGreen();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::IColorHelper> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::IColorHelper> {};

template<> struct hash<winrt::Windows::UI::IColorHelperStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::IColorHelperStatics> {};

template<> struct hash<winrt::Windows::UI::IColorHelperStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::IColorHelperStatics2> {};

template<> struct hash<winrt::Windows::UI::IColors> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::IColors> {};

template<> struct hash<winrt::Windows::UI::IColorsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::IColorsStatics> {};

template<> struct hash<winrt::Windows::UI::ColorHelper> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::ColorHelper> {};

template<> struct hash<winrt::Windows::UI::Colors> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Colors> {};

}

WINRT_WARNING_POP
