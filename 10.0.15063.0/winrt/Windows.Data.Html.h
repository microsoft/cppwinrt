// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Data.Html.2.h"

namespace winrt::impl {

template <typename D> hstring consume_Windows_Data_Html_IHtmlUtilities<D>::ConvertToText(param::hstring const& html) const
{
    hstring text{};
    check_hresult(WINRT_SHIM(Windows::Data::Html::IHtmlUtilities)->ConvertToText(get_abi(html), put_abi(text)));
    return text;
}

template <typename D>
struct produce<D, Windows::Data::Html::IHtmlUtilities> : produce_base<D, Windows::Data::Html::IHtmlUtilities>
{
    HRESULT __stdcall ConvertToText(HSTRING html, HSTRING* text) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *text = detach_abi(this->shim().ConvertToText(*reinterpret_cast<hstring const*>(&html)));
            return S_OK;
        }
        catch (...)
        {
            *text = nullptr;
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Data::Html {

inline hstring HtmlUtilities::ConvertToText(param::hstring const& html)
{
    return get_activation_factory<HtmlUtilities, Windows::Data::Html::IHtmlUtilities>().ConvertToText(html);
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Data::Html::IHtmlUtilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Html::IHtmlUtilities> {};

template<> struct hash<winrt::Windows::Data::Html::HtmlUtilities> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Data::Html::HtmlUtilities> {};

}

WINRT_WARNING_POP
