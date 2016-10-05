// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.UI.3.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::UI::IColorHelper> : produce_base<D, Windows::UI::IColorHelper>
{};

template <typename D>
struct produce<D, Windows::UI::IColorHelperStatics> : produce_base<D, Windows::UI::IColorHelperStatics>
{
    HRESULT __stdcall abi_FromArgb(uint8_t a, uint8_t r, uint8_t g, uint8_t b, abi_arg_out<Windows::UI::Color> returnValue) noexcept override
    {
        try
        {
            *returnValue = detach(this->shim().FromArgb(a, r, g, b));
            return S_OK;
        }
        catch (...)
        {
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
    HRESULT __stdcall get_AliceBlue(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AliceBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AntiqueWhite(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AntiqueWhite());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Aqua(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Aqua());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Aquamarine(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Aquamarine());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Azure(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Azure());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Beige(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Beige());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bisque(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Bisque());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Black(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Black());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BlanchedAlmond(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BlanchedAlmond());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Blue(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Blue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BlueViolet(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BlueViolet());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Brown(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Brown());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BurlyWood(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().BurlyWood());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CadetBlue(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CadetBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Chartreuse(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Chartreuse());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Chocolate(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Chocolate());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Coral(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Coral());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CornflowerBlue(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().CornflowerBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Cornsilk(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Cornsilk());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Crimson(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Crimson());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Cyan(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Cyan());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkBlue(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DarkBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkCyan(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DarkCyan());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkGoldenrod(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DarkGoldenrod());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkGray(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DarkGray());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkGreen(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DarkGreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkKhaki(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DarkKhaki());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkMagenta(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DarkMagenta());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkOliveGreen(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DarkOliveGreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkOrange(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DarkOrange());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkOrchid(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DarkOrchid());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkRed(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DarkRed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkSalmon(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DarkSalmon());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkSeaGreen(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DarkSeaGreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkSlateBlue(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DarkSlateBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkSlateGray(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DarkSlateGray());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkTurquoise(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DarkTurquoise());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DarkViolet(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DarkViolet());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeepPink(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeepPink());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DeepSkyBlue(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DeepSkyBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DimGray(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DimGray());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DodgerBlue(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().DodgerBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Firebrick(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Firebrick());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FloralWhite(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FloralWhite());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ForestGreen(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ForestGreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Fuchsia(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Fuchsia());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Gainsboro(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Gainsboro());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GhostWhite(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GhostWhite());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Gold(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Gold());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Goldenrod(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Goldenrod());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Gray(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Gray());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Green(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Green());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_GreenYellow(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GreenYellow());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Honeydew(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Honeydew());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HotPink(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().HotPink());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IndianRed(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IndianRed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Indigo(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Indigo());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Ivory(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Ivory());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Khaki(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Khaki());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Lavender(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Lavender());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LavenderBlush(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LavenderBlush());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LawnGreen(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LawnGreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LemonChiffon(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LemonChiffon());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightBlue(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LightBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightCoral(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LightCoral());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightCyan(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LightCyan());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightGoldenrodYellow(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LightGoldenrodYellow());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightGreen(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LightGreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightGray(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LightGray());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightPink(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LightPink());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightSalmon(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LightSalmon());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightSeaGreen(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LightSeaGreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightSkyBlue(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LightSkyBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightSlateGray(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LightSlateGray());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightSteelBlue(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LightSteelBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LightYellow(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LightYellow());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Lime(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Lime());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LimeGreen(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().LimeGreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Linen(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Linen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Magenta(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Magenta());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Maroon(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Maroon());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediumAquamarine(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MediumAquamarine());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediumBlue(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MediumBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediumOrchid(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MediumOrchid());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediumPurple(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MediumPurple());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediumSeaGreen(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MediumSeaGreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediumSlateBlue(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MediumSlateBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediumSpringGreen(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MediumSpringGreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediumTurquoise(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MediumTurquoise());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MediumVioletRed(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MediumVioletRed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MidnightBlue(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MidnightBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MintCream(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MintCream());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MistyRose(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().MistyRose());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Moccasin(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Moccasin());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NavajoWhite(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().NavajoWhite());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Navy(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Navy());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OldLace(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OldLace());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Olive(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Olive());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OliveDrab(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OliveDrab());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Orange(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Orange());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OrangeRed(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().OrangeRed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Orchid(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Orchid());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PaleGoldenrod(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PaleGoldenrod());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PaleGreen(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PaleGreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PaleTurquoise(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PaleTurquoise());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PaleVioletRed(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PaleVioletRed());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PapayaWhip(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PapayaWhip());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PeachPuff(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PeachPuff());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Peru(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Peru());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Pink(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Pink());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Plum(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Plum());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PowderBlue(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().PowderBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Purple(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Purple());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Red(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Red());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RosyBrown(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RosyBrown());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RoyalBlue(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().RoyalBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SaddleBrown(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SaddleBrown());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Salmon(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Salmon());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SandyBrown(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SandyBrown());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SeaGreen(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SeaGreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SeaShell(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SeaShell());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Sienna(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Sienna());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Silver(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Silver());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SkyBlue(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SkyBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SlateBlue(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SlateBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SlateGray(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SlateGray());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Snow(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Snow());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpringGreen(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SpringGreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SteelBlue(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SteelBlue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tan(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Tan());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Teal(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Teal());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Thistle(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Thistle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Tomato(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Tomato());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Transparent(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Transparent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Turquoise(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Turquoise());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Violet(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Violet());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Wheat(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Wheat());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_White(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().White());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WhiteSmoke(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().WhiteSmoke());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Yellow(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Yellow());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_YellowGreen(abi_arg_out<Windows::UI::Color> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().YellowGreen());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::UI {

template <typename D> Windows::UI::Color impl_IColorHelperStatics<D>::FromArgb(uint8_t a, uint8_t r, uint8_t g, uint8_t b) const
{
    Windows::UI::Color returnValue {};
    check_hresult(static_cast<const IColorHelperStatics &>(static_cast<const D &>(*this))->abi_FromArgb(a, r, g, b, put(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::AliceBlue() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_AliceBlue(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::AntiqueWhite() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_AntiqueWhite(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Aqua() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Aqua(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Aquamarine() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Aquamarine(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Azure() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Azure(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Beige() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Beige(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Bisque() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Bisque(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Black() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Black(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::BlanchedAlmond() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_BlanchedAlmond(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Blue() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Blue(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::BlueViolet() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_BlueViolet(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Brown() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Brown(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::BurlyWood() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_BurlyWood(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::CadetBlue() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_CadetBlue(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Chartreuse() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Chartreuse(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Chocolate() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Chocolate(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Coral() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Coral(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::CornflowerBlue() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_CornflowerBlue(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Cornsilk() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Cornsilk(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Crimson() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Crimson(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Cyan() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Cyan(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::DarkBlue() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_DarkBlue(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::DarkCyan() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_DarkCyan(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::DarkGoldenrod() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_DarkGoldenrod(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::DarkGray() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_DarkGray(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::DarkGreen() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_DarkGreen(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::DarkKhaki() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_DarkKhaki(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::DarkMagenta() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_DarkMagenta(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::DarkOliveGreen() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_DarkOliveGreen(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::DarkOrange() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_DarkOrange(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::DarkOrchid() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_DarkOrchid(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::DarkRed() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_DarkRed(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::DarkSalmon() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_DarkSalmon(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::DarkSeaGreen() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_DarkSeaGreen(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::DarkSlateBlue() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_DarkSlateBlue(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::DarkSlateGray() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_DarkSlateGray(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::DarkTurquoise() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_DarkTurquoise(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::DarkViolet() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_DarkViolet(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::DeepPink() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_DeepPink(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::DeepSkyBlue() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_DeepSkyBlue(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::DimGray() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_DimGray(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::DodgerBlue() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_DodgerBlue(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Firebrick() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Firebrick(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::FloralWhite() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_FloralWhite(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::ForestGreen() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_ForestGreen(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Fuchsia() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Fuchsia(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Gainsboro() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Gainsboro(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::GhostWhite() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_GhostWhite(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Gold() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Gold(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Goldenrod() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Goldenrod(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Gray() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Gray(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Green() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Green(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::GreenYellow() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_GreenYellow(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Honeydew() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Honeydew(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::HotPink() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_HotPink(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::IndianRed() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_IndianRed(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Indigo() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Indigo(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Ivory() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Ivory(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Khaki() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Khaki(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Lavender() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Lavender(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::LavenderBlush() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_LavenderBlush(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::LawnGreen() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_LawnGreen(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::LemonChiffon() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_LemonChiffon(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::LightBlue() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_LightBlue(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::LightCoral() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_LightCoral(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::LightCyan() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_LightCyan(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::LightGoldenrodYellow() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_LightGoldenrodYellow(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::LightGreen() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_LightGreen(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::LightGray() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_LightGray(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::LightPink() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_LightPink(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::LightSalmon() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_LightSalmon(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::LightSeaGreen() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_LightSeaGreen(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::LightSkyBlue() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_LightSkyBlue(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::LightSlateGray() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_LightSlateGray(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::LightSteelBlue() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_LightSteelBlue(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::LightYellow() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_LightYellow(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Lime() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Lime(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::LimeGreen() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_LimeGreen(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Linen() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Linen(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Magenta() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Magenta(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Maroon() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Maroon(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::MediumAquamarine() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_MediumAquamarine(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::MediumBlue() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_MediumBlue(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::MediumOrchid() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_MediumOrchid(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::MediumPurple() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_MediumPurple(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::MediumSeaGreen() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_MediumSeaGreen(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::MediumSlateBlue() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_MediumSlateBlue(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::MediumSpringGreen() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_MediumSpringGreen(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::MediumTurquoise() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_MediumTurquoise(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::MediumVioletRed() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_MediumVioletRed(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::MidnightBlue() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_MidnightBlue(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::MintCream() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_MintCream(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::MistyRose() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_MistyRose(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Moccasin() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Moccasin(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::NavajoWhite() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_NavajoWhite(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Navy() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Navy(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::OldLace() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_OldLace(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Olive() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Olive(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::OliveDrab() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_OliveDrab(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Orange() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Orange(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::OrangeRed() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_OrangeRed(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Orchid() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Orchid(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::PaleGoldenrod() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_PaleGoldenrod(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::PaleGreen() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_PaleGreen(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::PaleTurquoise() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_PaleTurquoise(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::PaleVioletRed() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_PaleVioletRed(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::PapayaWhip() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_PapayaWhip(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::PeachPuff() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_PeachPuff(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Peru() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Peru(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Pink() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Pink(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Plum() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Plum(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::PowderBlue() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_PowderBlue(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Purple() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Purple(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Red() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Red(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::RosyBrown() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_RosyBrown(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::RoyalBlue() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_RoyalBlue(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::SaddleBrown() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_SaddleBrown(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Salmon() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Salmon(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::SandyBrown() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_SandyBrown(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::SeaGreen() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_SeaGreen(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::SeaShell() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_SeaShell(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Sienna() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Sienna(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Silver() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Silver(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::SkyBlue() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_SkyBlue(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::SlateBlue() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_SlateBlue(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::SlateGray() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_SlateGray(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Snow() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Snow(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::SpringGreen() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_SpringGreen(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::SteelBlue() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_SteelBlue(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Tan() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Tan(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Teal() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Teal(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Thistle() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Thistle(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Tomato() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Tomato(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Transparent() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Transparent(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Turquoise() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Turquoise(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Violet() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Violet(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Wheat() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Wheat(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::White() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_White(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::WhiteSmoke() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_WhiteSmoke(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::Yellow() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_Yellow(put(value)));
    return value;
}

template <typename D> Windows::UI::Color impl_IColorsStatics<D>::YellowGreen() const
{
    Windows::UI::Color value {};
    check_hresult(static_cast<const IColorsStatics &>(static_cast<const D &>(*this))->get_YellowGreen(put(value)));
    return value;
}

inline Windows::UI::Color ColorHelper::FromArgb(uint8_t a, uint8_t r, uint8_t g, uint8_t b)
{
    return get_activation_factory<ColorHelper, IColorHelperStatics>().FromArgb(a, r, g, b);
}

inline Windows::UI::Color Colors::AliceBlue()
{
    return get_activation_factory<Colors, IColorsStatics>().AliceBlue();
}

inline Windows::UI::Color Colors::AntiqueWhite()
{
    return get_activation_factory<Colors, IColorsStatics>().AntiqueWhite();
}

inline Windows::UI::Color Colors::Aqua()
{
    return get_activation_factory<Colors, IColorsStatics>().Aqua();
}

inline Windows::UI::Color Colors::Aquamarine()
{
    return get_activation_factory<Colors, IColorsStatics>().Aquamarine();
}

inline Windows::UI::Color Colors::Azure()
{
    return get_activation_factory<Colors, IColorsStatics>().Azure();
}

inline Windows::UI::Color Colors::Beige()
{
    return get_activation_factory<Colors, IColorsStatics>().Beige();
}

inline Windows::UI::Color Colors::Bisque()
{
    return get_activation_factory<Colors, IColorsStatics>().Bisque();
}

inline Windows::UI::Color Colors::Black()
{
    return get_activation_factory<Colors, IColorsStatics>().Black();
}

inline Windows::UI::Color Colors::BlanchedAlmond()
{
    return get_activation_factory<Colors, IColorsStatics>().BlanchedAlmond();
}

inline Windows::UI::Color Colors::Blue()
{
    return get_activation_factory<Colors, IColorsStatics>().Blue();
}

inline Windows::UI::Color Colors::BlueViolet()
{
    return get_activation_factory<Colors, IColorsStatics>().BlueViolet();
}

inline Windows::UI::Color Colors::Brown()
{
    return get_activation_factory<Colors, IColorsStatics>().Brown();
}

inline Windows::UI::Color Colors::BurlyWood()
{
    return get_activation_factory<Colors, IColorsStatics>().BurlyWood();
}

inline Windows::UI::Color Colors::CadetBlue()
{
    return get_activation_factory<Colors, IColorsStatics>().CadetBlue();
}

inline Windows::UI::Color Colors::Chartreuse()
{
    return get_activation_factory<Colors, IColorsStatics>().Chartreuse();
}

inline Windows::UI::Color Colors::Chocolate()
{
    return get_activation_factory<Colors, IColorsStatics>().Chocolate();
}

inline Windows::UI::Color Colors::Coral()
{
    return get_activation_factory<Colors, IColorsStatics>().Coral();
}

inline Windows::UI::Color Colors::CornflowerBlue()
{
    return get_activation_factory<Colors, IColorsStatics>().CornflowerBlue();
}

inline Windows::UI::Color Colors::Cornsilk()
{
    return get_activation_factory<Colors, IColorsStatics>().Cornsilk();
}

inline Windows::UI::Color Colors::Crimson()
{
    return get_activation_factory<Colors, IColorsStatics>().Crimson();
}

inline Windows::UI::Color Colors::Cyan()
{
    return get_activation_factory<Colors, IColorsStatics>().Cyan();
}

inline Windows::UI::Color Colors::DarkBlue()
{
    return get_activation_factory<Colors, IColorsStatics>().DarkBlue();
}

inline Windows::UI::Color Colors::DarkCyan()
{
    return get_activation_factory<Colors, IColorsStatics>().DarkCyan();
}

inline Windows::UI::Color Colors::DarkGoldenrod()
{
    return get_activation_factory<Colors, IColorsStatics>().DarkGoldenrod();
}

inline Windows::UI::Color Colors::DarkGray()
{
    return get_activation_factory<Colors, IColorsStatics>().DarkGray();
}

inline Windows::UI::Color Colors::DarkGreen()
{
    return get_activation_factory<Colors, IColorsStatics>().DarkGreen();
}

inline Windows::UI::Color Colors::DarkKhaki()
{
    return get_activation_factory<Colors, IColorsStatics>().DarkKhaki();
}

inline Windows::UI::Color Colors::DarkMagenta()
{
    return get_activation_factory<Colors, IColorsStatics>().DarkMagenta();
}

inline Windows::UI::Color Colors::DarkOliveGreen()
{
    return get_activation_factory<Colors, IColorsStatics>().DarkOliveGreen();
}

inline Windows::UI::Color Colors::DarkOrange()
{
    return get_activation_factory<Colors, IColorsStatics>().DarkOrange();
}

inline Windows::UI::Color Colors::DarkOrchid()
{
    return get_activation_factory<Colors, IColorsStatics>().DarkOrchid();
}

inline Windows::UI::Color Colors::DarkRed()
{
    return get_activation_factory<Colors, IColorsStatics>().DarkRed();
}

inline Windows::UI::Color Colors::DarkSalmon()
{
    return get_activation_factory<Colors, IColorsStatics>().DarkSalmon();
}

inline Windows::UI::Color Colors::DarkSeaGreen()
{
    return get_activation_factory<Colors, IColorsStatics>().DarkSeaGreen();
}

inline Windows::UI::Color Colors::DarkSlateBlue()
{
    return get_activation_factory<Colors, IColorsStatics>().DarkSlateBlue();
}

inline Windows::UI::Color Colors::DarkSlateGray()
{
    return get_activation_factory<Colors, IColorsStatics>().DarkSlateGray();
}

inline Windows::UI::Color Colors::DarkTurquoise()
{
    return get_activation_factory<Colors, IColorsStatics>().DarkTurquoise();
}

inline Windows::UI::Color Colors::DarkViolet()
{
    return get_activation_factory<Colors, IColorsStatics>().DarkViolet();
}

inline Windows::UI::Color Colors::DeepPink()
{
    return get_activation_factory<Colors, IColorsStatics>().DeepPink();
}

inline Windows::UI::Color Colors::DeepSkyBlue()
{
    return get_activation_factory<Colors, IColorsStatics>().DeepSkyBlue();
}

inline Windows::UI::Color Colors::DimGray()
{
    return get_activation_factory<Colors, IColorsStatics>().DimGray();
}

inline Windows::UI::Color Colors::DodgerBlue()
{
    return get_activation_factory<Colors, IColorsStatics>().DodgerBlue();
}

inline Windows::UI::Color Colors::Firebrick()
{
    return get_activation_factory<Colors, IColorsStatics>().Firebrick();
}

inline Windows::UI::Color Colors::FloralWhite()
{
    return get_activation_factory<Colors, IColorsStatics>().FloralWhite();
}

inline Windows::UI::Color Colors::ForestGreen()
{
    return get_activation_factory<Colors, IColorsStatics>().ForestGreen();
}

inline Windows::UI::Color Colors::Fuchsia()
{
    return get_activation_factory<Colors, IColorsStatics>().Fuchsia();
}

inline Windows::UI::Color Colors::Gainsboro()
{
    return get_activation_factory<Colors, IColorsStatics>().Gainsboro();
}

inline Windows::UI::Color Colors::GhostWhite()
{
    return get_activation_factory<Colors, IColorsStatics>().GhostWhite();
}

inline Windows::UI::Color Colors::Gold()
{
    return get_activation_factory<Colors, IColorsStatics>().Gold();
}

inline Windows::UI::Color Colors::Goldenrod()
{
    return get_activation_factory<Colors, IColorsStatics>().Goldenrod();
}

inline Windows::UI::Color Colors::Gray()
{
    return get_activation_factory<Colors, IColorsStatics>().Gray();
}

inline Windows::UI::Color Colors::Green()
{
    return get_activation_factory<Colors, IColorsStatics>().Green();
}

inline Windows::UI::Color Colors::GreenYellow()
{
    return get_activation_factory<Colors, IColorsStatics>().GreenYellow();
}

inline Windows::UI::Color Colors::Honeydew()
{
    return get_activation_factory<Colors, IColorsStatics>().Honeydew();
}

inline Windows::UI::Color Colors::HotPink()
{
    return get_activation_factory<Colors, IColorsStatics>().HotPink();
}

inline Windows::UI::Color Colors::IndianRed()
{
    return get_activation_factory<Colors, IColorsStatics>().IndianRed();
}

inline Windows::UI::Color Colors::Indigo()
{
    return get_activation_factory<Colors, IColorsStatics>().Indigo();
}

inline Windows::UI::Color Colors::Ivory()
{
    return get_activation_factory<Colors, IColorsStatics>().Ivory();
}

inline Windows::UI::Color Colors::Khaki()
{
    return get_activation_factory<Colors, IColorsStatics>().Khaki();
}

inline Windows::UI::Color Colors::Lavender()
{
    return get_activation_factory<Colors, IColorsStatics>().Lavender();
}

inline Windows::UI::Color Colors::LavenderBlush()
{
    return get_activation_factory<Colors, IColorsStatics>().LavenderBlush();
}

inline Windows::UI::Color Colors::LawnGreen()
{
    return get_activation_factory<Colors, IColorsStatics>().LawnGreen();
}

inline Windows::UI::Color Colors::LemonChiffon()
{
    return get_activation_factory<Colors, IColorsStatics>().LemonChiffon();
}

inline Windows::UI::Color Colors::LightBlue()
{
    return get_activation_factory<Colors, IColorsStatics>().LightBlue();
}

inline Windows::UI::Color Colors::LightCoral()
{
    return get_activation_factory<Colors, IColorsStatics>().LightCoral();
}

inline Windows::UI::Color Colors::LightCyan()
{
    return get_activation_factory<Colors, IColorsStatics>().LightCyan();
}

inline Windows::UI::Color Colors::LightGoldenrodYellow()
{
    return get_activation_factory<Colors, IColorsStatics>().LightGoldenrodYellow();
}

inline Windows::UI::Color Colors::LightGreen()
{
    return get_activation_factory<Colors, IColorsStatics>().LightGreen();
}

inline Windows::UI::Color Colors::LightGray()
{
    return get_activation_factory<Colors, IColorsStatics>().LightGray();
}

inline Windows::UI::Color Colors::LightPink()
{
    return get_activation_factory<Colors, IColorsStatics>().LightPink();
}

inline Windows::UI::Color Colors::LightSalmon()
{
    return get_activation_factory<Colors, IColorsStatics>().LightSalmon();
}

inline Windows::UI::Color Colors::LightSeaGreen()
{
    return get_activation_factory<Colors, IColorsStatics>().LightSeaGreen();
}

inline Windows::UI::Color Colors::LightSkyBlue()
{
    return get_activation_factory<Colors, IColorsStatics>().LightSkyBlue();
}

inline Windows::UI::Color Colors::LightSlateGray()
{
    return get_activation_factory<Colors, IColorsStatics>().LightSlateGray();
}

inline Windows::UI::Color Colors::LightSteelBlue()
{
    return get_activation_factory<Colors, IColorsStatics>().LightSteelBlue();
}

inline Windows::UI::Color Colors::LightYellow()
{
    return get_activation_factory<Colors, IColorsStatics>().LightYellow();
}

inline Windows::UI::Color Colors::Lime()
{
    return get_activation_factory<Colors, IColorsStatics>().Lime();
}

inline Windows::UI::Color Colors::LimeGreen()
{
    return get_activation_factory<Colors, IColorsStatics>().LimeGreen();
}

inline Windows::UI::Color Colors::Linen()
{
    return get_activation_factory<Colors, IColorsStatics>().Linen();
}

inline Windows::UI::Color Colors::Magenta()
{
    return get_activation_factory<Colors, IColorsStatics>().Magenta();
}

inline Windows::UI::Color Colors::Maroon()
{
    return get_activation_factory<Colors, IColorsStatics>().Maroon();
}

inline Windows::UI::Color Colors::MediumAquamarine()
{
    return get_activation_factory<Colors, IColorsStatics>().MediumAquamarine();
}

inline Windows::UI::Color Colors::MediumBlue()
{
    return get_activation_factory<Colors, IColorsStatics>().MediumBlue();
}

inline Windows::UI::Color Colors::MediumOrchid()
{
    return get_activation_factory<Colors, IColorsStatics>().MediumOrchid();
}

inline Windows::UI::Color Colors::MediumPurple()
{
    return get_activation_factory<Colors, IColorsStatics>().MediumPurple();
}

inline Windows::UI::Color Colors::MediumSeaGreen()
{
    return get_activation_factory<Colors, IColorsStatics>().MediumSeaGreen();
}

inline Windows::UI::Color Colors::MediumSlateBlue()
{
    return get_activation_factory<Colors, IColorsStatics>().MediumSlateBlue();
}

inline Windows::UI::Color Colors::MediumSpringGreen()
{
    return get_activation_factory<Colors, IColorsStatics>().MediumSpringGreen();
}

inline Windows::UI::Color Colors::MediumTurquoise()
{
    return get_activation_factory<Colors, IColorsStatics>().MediumTurquoise();
}

inline Windows::UI::Color Colors::MediumVioletRed()
{
    return get_activation_factory<Colors, IColorsStatics>().MediumVioletRed();
}

inline Windows::UI::Color Colors::MidnightBlue()
{
    return get_activation_factory<Colors, IColorsStatics>().MidnightBlue();
}

inline Windows::UI::Color Colors::MintCream()
{
    return get_activation_factory<Colors, IColorsStatics>().MintCream();
}

inline Windows::UI::Color Colors::MistyRose()
{
    return get_activation_factory<Colors, IColorsStatics>().MistyRose();
}

inline Windows::UI::Color Colors::Moccasin()
{
    return get_activation_factory<Colors, IColorsStatics>().Moccasin();
}

inline Windows::UI::Color Colors::NavajoWhite()
{
    return get_activation_factory<Colors, IColorsStatics>().NavajoWhite();
}

inline Windows::UI::Color Colors::Navy()
{
    return get_activation_factory<Colors, IColorsStatics>().Navy();
}

inline Windows::UI::Color Colors::OldLace()
{
    return get_activation_factory<Colors, IColorsStatics>().OldLace();
}

inline Windows::UI::Color Colors::Olive()
{
    return get_activation_factory<Colors, IColorsStatics>().Olive();
}

inline Windows::UI::Color Colors::OliveDrab()
{
    return get_activation_factory<Colors, IColorsStatics>().OliveDrab();
}

inline Windows::UI::Color Colors::Orange()
{
    return get_activation_factory<Colors, IColorsStatics>().Orange();
}

inline Windows::UI::Color Colors::OrangeRed()
{
    return get_activation_factory<Colors, IColorsStatics>().OrangeRed();
}

inline Windows::UI::Color Colors::Orchid()
{
    return get_activation_factory<Colors, IColorsStatics>().Orchid();
}

inline Windows::UI::Color Colors::PaleGoldenrod()
{
    return get_activation_factory<Colors, IColorsStatics>().PaleGoldenrod();
}

inline Windows::UI::Color Colors::PaleGreen()
{
    return get_activation_factory<Colors, IColorsStatics>().PaleGreen();
}

inline Windows::UI::Color Colors::PaleTurquoise()
{
    return get_activation_factory<Colors, IColorsStatics>().PaleTurquoise();
}

inline Windows::UI::Color Colors::PaleVioletRed()
{
    return get_activation_factory<Colors, IColorsStatics>().PaleVioletRed();
}

inline Windows::UI::Color Colors::PapayaWhip()
{
    return get_activation_factory<Colors, IColorsStatics>().PapayaWhip();
}

inline Windows::UI::Color Colors::PeachPuff()
{
    return get_activation_factory<Colors, IColorsStatics>().PeachPuff();
}

inline Windows::UI::Color Colors::Peru()
{
    return get_activation_factory<Colors, IColorsStatics>().Peru();
}

inline Windows::UI::Color Colors::Pink()
{
    return get_activation_factory<Colors, IColorsStatics>().Pink();
}

inline Windows::UI::Color Colors::Plum()
{
    return get_activation_factory<Colors, IColorsStatics>().Plum();
}

inline Windows::UI::Color Colors::PowderBlue()
{
    return get_activation_factory<Colors, IColorsStatics>().PowderBlue();
}

inline Windows::UI::Color Colors::Purple()
{
    return get_activation_factory<Colors, IColorsStatics>().Purple();
}

inline Windows::UI::Color Colors::Red()
{
    return get_activation_factory<Colors, IColorsStatics>().Red();
}

inline Windows::UI::Color Colors::RosyBrown()
{
    return get_activation_factory<Colors, IColorsStatics>().RosyBrown();
}

inline Windows::UI::Color Colors::RoyalBlue()
{
    return get_activation_factory<Colors, IColorsStatics>().RoyalBlue();
}

inline Windows::UI::Color Colors::SaddleBrown()
{
    return get_activation_factory<Colors, IColorsStatics>().SaddleBrown();
}

inline Windows::UI::Color Colors::Salmon()
{
    return get_activation_factory<Colors, IColorsStatics>().Salmon();
}

inline Windows::UI::Color Colors::SandyBrown()
{
    return get_activation_factory<Colors, IColorsStatics>().SandyBrown();
}

inline Windows::UI::Color Colors::SeaGreen()
{
    return get_activation_factory<Colors, IColorsStatics>().SeaGreen();
}

inline Windows::UI::Color Colors::SeaShell()
{
    return get_activation_factory<Colors, IColorsStatics>().SeaShell();
}

inline Windows::UI::Color Colors::Sienna()
{
    return get_activation_factory<Colors, IColorsStatics>().Sienna();
}

inline Windows::UI::Color Colors::Silver()
{
    return get_activation_factory<Colors, IColorsStatics>().Silver();
}

inline Windows::UI::Color Colors::SkyBlue()
{
    return get_activation_factory<Colors, IColorsStatics>().SkyBlue();
}

inline Windows::UI::Color Colors::SlateBlue()
{
    return get_activation_factory<Colors, IColorsStatics>().SlateBlue();
}

inline Windows::UI::Color Colors::SlateGray()
{
    return get_activation_factory<Colors, IColorsStatics>().SlateGray();
}

inline Windows::UI::Color Colors::Snow()
{
    return get_activation_factory<Colors, IColorsStatics>().Snow();
}

inline Windows::UI::Color Colors::SpringGreen()
{
    return get_activation_factory<Colors, IColorsStatics>().SpringGreen();
}

inline Windows::UI::Color Colors::SteelBlue()
{
    return get_activation_factory<Colors, IColorsStatics>().SteelBlue();
}

inline Windows::UI::Color Colors::Tan()
{
    return get_activation_factory<Colors, IColorsStatics>().Tan();
}

inline Windows::UI::Color Colors::Teal()
{
    return get_activation_factory<Colors, IColorsStatics>().Teal();
}

inline Windows::UI::Color Colors::Thistle()
{
    return get_activation_factory<Colors, IColorsStatics>().Thistle();
}

inline Windows::UI::Color Colors::Tomato()
{
    return get_activation_factory<Colors, IColorsStatics>().Tomato();
}

inline Windows::UI::Color Colors::Transparent()
{
    return get_activation_factory<Colors, IColorsStatics>().Transparent();
}

inline Windows::UI::Color Colors::Turquoise()
{
    return get_activation_factory<Colors, IColorsStatics>().Turquoise();
}

inline Windows::UI::Color Colors::Violet()
{
    return get_activation_factory<Colors, IColorsStatics>().Violet();
}

inline Windows::UI::Color Colors::Wheat()
{
    return get_activation_factory<Colors, IColorsStatics>().Wheat();
}

inline Windows::UI::Color Colors::White()
{
    return get_activation_factory<Colors, IColorsStatics>().White();
}

inline Windows::UI::Color Colors::WhiteSmoke()
{
    return get_activation_factory<Colors, IColorsStatics>().WhiteSmoke();
}

inline Windows::UI::Color Colors::Yellow()
{
    return get_activation_factory<Colors, IColorsStatics>().Yellow();
}

inline Windows::UI::Color Colors::YellowGreen()
{
    return get_activation_factory<Colors, IColorsStatics>().YellowGreen();
}

}

}
