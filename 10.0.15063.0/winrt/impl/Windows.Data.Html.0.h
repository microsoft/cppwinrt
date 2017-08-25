// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Data::Html {

struct IHtmlUtilities;
struct HtmlUtilities;

}

namespace winrt::impl {

template <> struct category<Windows::Data::Html::IHtmlUtilities>{ using type = interface_category; };
template <> struct category<Windows::Data::Html::HtmlUtilities>{ using type = class_category; };
template <> struct name<Windows::Data::Html::IHtmlUtilities>{ static constexpr auto & value{ L"Windows.Data.Html.IHtmlUtilities" }; };
template <> struct name<Windows::Data::Html::HtmlUtilities>{ static constexpr auto & value{ L"Windows.Data.Html.HtmlUtilities" }; };
template <> struct guid<Windows::Data::Html::IHtmlUtilities>{ static constexpr GUID value{ 0xFEC00ADD,0x2399,0x4FAC,{ 0xB5,0xA7,0x05,0xE9,0xAC,0xD7,0x18,0x1D } }; };

template <typename D>
struct consume_Windows_Data_Html_IHtmlUtilities
{
    hstring ConvertToText(param::hstring const& html) const;
};
template <> struct consume<Windows::Data::Html::IHtmlUtilities> { template <typename D> using type = consume_Windows_Data_Html_IHtmlUtilities<D>; };

template <> struct abi<Windows::Data::Html::IHtmlUtilities>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ConvertToText(HSTRING html, HSTRING* text) = 0;
};};

}
