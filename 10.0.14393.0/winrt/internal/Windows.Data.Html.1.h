// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Data.Html.0.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Data::Html {

struct __declspec(uuid("fec00add-2399-4fac-b5a7-05e9acd7181d")) __declspec(novtable) IHtmlUtilities : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_ConvertToText(hstring html, hstring * text) = 0;
};

}

namespace ABI {


}

namespace Windows::Data::Html {

template <typename T> struct impl_IHtmlUtilities;

}

namespace impl {

template <> struct traits<Windows::Data::Html::IHtmlUtilities>
{
    using abi = ABI::Windows::Data::Html::IHtmlUtilities;
    template <typename D> using consume = Windows::Data::Html::impl_IHtmlUtilities<D>;
};

template <> struct traits<Windows::Data::Html::HtmlUtilities>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.Data.Html.HtmlUtilities"; }
};

}

}
