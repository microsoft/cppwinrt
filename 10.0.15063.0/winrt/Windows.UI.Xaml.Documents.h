// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.UI.Text.2.h"
#include "winrt/impl/Windows.UI.Xaml.2.h"
#include "winrt/impl/Windows.UI.Xaml.Input.2.h"
#include "winrt/impl/Windows.UI.Xaml.Media.2.h"
#include "winrt/impl/Windows.UI.Xaml.Documents.2.h"
#include "winrt/Windows.UI.Xaml.h"

namespace winrt::impl {

template <typename D> Windows::UI::Xaml::TextAlignment consume_Windows_UI_Xaml_Documents_IBlock<D>::TextAlignment() const
{
    Windows::UI::Xaml::TextAlignment value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IBlock)->get_TextAlignment(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_IBlock<D>::TextAlignment(Windows::UI::Xaml::TextAlignment const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IBlock)->put_TextAlignment(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_Documents_IBlock<D>::LineHeight() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IBlock)->get_LineHeight(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_IBlock<D>::LineHeight(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IBlock)->put_LineHeight(value));
}

template <typename D> Windows::UI::Xaml::LineStackingStrategy consume_Windows_UI_Xaml_Documents_IBlock<D>::LineStackingStrategy() const
{
    Windows::UI::Xaml::LineStackingStrategy value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IBlock)->get_LineStackingStrategy(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_IBlock<D>::LineStackingStrategy(Windows::UI::Xaml::LineStackingStrategy const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IBlock)->put_LineStackingStrategy(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Thickness consume_Windows_UI_Xaml_Documents_IBlock<D>::Margin() const
{
    Windows::UI::Xaml::Thickness value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IBlock)->get_Margin(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_IBlock<D>::Margin(Windows::UI::Xaml::Thickness const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IBlock)->put_Margin(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Documents::Block consume_Windows_UI_Xaml_Documents_IBlockFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Documents::Block instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IBlockFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_IBlockStatics<D>::TextAlignmentProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IBlockStatics)->get_TextAlignmentProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_IBlockStatics<D>::LineHeightProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IBlockStatics)->get_LineHeightProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_IBlockStatics<D>::LineStackingStrategyProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IBlockStatics)->get_LineStackingStrategyProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_IBlockStatics<D>::MarginProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IBlockStatics)->get_MarginProperty(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Documents_IGlyphs<D>::UnicodeString() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IGlyphs)->get_UnicodeString(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_IGlyphs<D>::UnicodeString(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IGlyphs)->put_UnicodeString(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Xaml_Documents_IGlyphs<D>::Indices() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IGlyphs)->get_Indices(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_IGlyphs<D>::Indices(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IGlyphs)->put_Indices(get_abi(value)));
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_Xaml_Documents_IGlyphs<D>::FontUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IGlyphs)->get_FontUri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_IGlyphs<D>::FontUri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IGlyphs)->put_FontUri(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Media::StyleSimulations consume_Windows_UI_Xaml_Documents_IGlyphs<D>::StyleSimulations() const
{
    Windows::UI::Xaml::Media::StyleSimulations value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IGlyphs)->get_StyleSimulations(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_IGlyphs<D>::StyleSimulations(Windows::UI::Xaml::Media::StyleSimulations const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IGlyphs)->put_StyleSimulations(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_Documents_IGlyphs<D>::FontRenderingEmSize() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IGlyphs)->get_FontRenderingEmSize(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_IGlyphs<D>::FontRenderingEmSize(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IGlyphs)->put_FontRenderingEmSize(value));
}

template <typename D> double consume_Windows_UI_Xaml_Documents_IGlyphs<D>::OriginX() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IGlyphs)->get_OriginX(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_IGlyphs<D>::OriginX(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IGlyphs)->put_OriginX(value));
}

template <typename D> double consume_Windows_UI_Xaml_Documents_IGlyphs<D>::OriginY() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IGlyphs)->get_OriginY(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_IGlyphs<D>::OriginY(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IGlyphs)->put_OriginY(value));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Documents_IGlyphs<D>::Fill() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IGlyphs)->get_Fill(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_IGlyphs<D>::Fill(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IGlyphs)->put_Fill(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_IGlyphs2<D>::IsColorFontEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IGlyphs2)->get_IsColorFontEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_IGlyphs2<D>::IsColorFontEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IGlyphs2)->put_IsColorFontEnabled(value));
}

template <typename D> int32_t consume_Windows_UI_Xaml_Documents_IGlyphs2<D>::ColorFontPaletteIndex() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IGlyphs2)->get_ColorFontPaletteIndex(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_IGlyphs2<D>::ColorFontPaletteIndex(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IGlyphs2)->put_ColorFontPaletteIndex(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_IGlyphsStatics<D>::UnicodeStringProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IGlyphsStatics)->get_UnicodeStringProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_IGlyphsStatics<D>::IndicesProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IGlyphsStatics)->get_IndicesProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_IGlyphsStatics<D>::FontUriProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IGlyphsStatics)->get_FontUriProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_IGlyphsStatics<D>::StyleSimulationsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IGlyphsStatics)->get_StyleSimulationsProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_IGlyphsStatics<D>::FontRenderingEmSizeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IGlyphsStatics)->get_FontRenderingEmSizeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_IGlyphsStatics<D>::OriginXProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IGlyphsStatics)->get_OriginXProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_IGlyphsStatics<D>::OriginYProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IGlyphsStatics)->get_OriginYProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_IGlyphsStatics<D>::FillProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IGlyphsStatics)->get_FillProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_IGlyphsStatics2<D>::IsColorFontEnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IGlyphsStatics2)->get_IsColorFontEnabledProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_IGlyphsStatics2<D>::ColorFontPaletteIndexProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IGlyphsStatics2)->get_ColorFontPaletteIndexProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::Uri consume_Windows_UI_Xaml_Documents_IHyperlink<D>::NavigateUri() const
{
    Windows::Foundation::Uri value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlink)->get_NavigateUri(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_IHyperlink<D>::NavigateUri(Windows::Foundation::Uri const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlink)->put_NavigateUri(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Documents_IHyperlink<D>::Click(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Documents::Hyperlink, Windows::UI::Xaml::Documents::HyperlinkClickEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlink)->add_Click(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Documents::IHyperlink> consume_Windows_UI_Xaml_Documents_IHyperlink<D>::Click(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Documents::Hyperlink, Windows::UI::Xaml::Documents::HyperlinkClickEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Documents::IHyperlink>(this, &abi_t<Windows::UI::Xaml::Documents::IHyperlink>::remove_Click, Click(value));
}

template <typename D> void consume_Windows_UI_Xaml_Documents_IHyperlink<D>::Click(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlink)->remove_Click(get_abi(token)));
}

template <typename D> Windows::UI::Xaml::Documents::UnderlineStyle consume_Windows_UI_Xaml_Documents_IHyperlink2<D>::UnderlineStyle() const
{
    Windows::UI::Xaml::Documents::UnderlineStyle value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlink2)->get_UnderlineStyle(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_IHyperlink2<D>::UnderlineStyle(Windows::UI::Xaml::Documents::UnderlineStyle const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlink2)->put_UnderlineStyle(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_Documents_IHyperlink3<D>::XYFocusLeft() const
{
    Windows::UI::Xaml::DependencyObject value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlink3)->get_XYFocusLeft(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_IHyperlink3<D>::XYFocusLeft(Windows::UI::Xaml::DependencyObject const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlink3)->put_XYFocusLeft(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_Documents_IHyperlink3<D>::XYFocusRight() const
{
    Windows::UI::Xaml::DependencyObject value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlink3)->get_XYFocusRight(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_IHyperlink3<D>::XYFocusRight(Windows::UI::Xaml::DependencyObject const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlink3)->put_XYFocusRight(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_Documents_IHyperlink3<D>::XYFocusUp() const
{
    Windows::UI::Xaml::DependencyObject value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlink3)->get_XYFocusUp(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_IHyperlink3<D>::XYFocusUp(Windows::UI::Xaml::DependencyObject const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlink3)->put_XYFocusUp(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_Documents_IHyperlink3<D>::XYFocusDown() const
{
    Windows::UI::Xaml::DependencyObject value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlink3)->get_XYFocusDown(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_IHyperlink3<D>::XYFocusDown(Windows::UI::Xaml::DependencyObject const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlink3)->put_XYFocusDown(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::ElementSoundMode consume_Windows_UI_Xaml_Documents_IHyperlink3<D>::ElementSoundMode() const
{
    Windows::UI::Xaml::ElementSoundMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlink3)->get_ElementSoundMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_IHyperlink3<D>::ElementSoundMode(Windows::UI::Xaml::ElementSoundMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlink3)->put_ElementSoundMode(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::FocusState consume_Windows_UI_Xaml_Documents_IHyperlink4<D>::FocusState() const
{
    Windows::UI::Xaml::FocusState value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlink4)->get_FocusState(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Input::XYFocusNavigationStrategy consume_Windows_UI_Xaml_Documents_IHyperlink4<D>::XYFocusUpNavigationStrategy() const
{
    Windows::UI::Xaml::Input::XYFocusNavigationStrategy value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlink4)->get_XYFocusUpNavigationStrategy(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_IHyperlink4<D>::XYFocusUpNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlink4)->put_XYFocusUpNavigationStrategy(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Input::XYFocusNavigationStrategy consume_Windows_UI_Xaml_Documents_IHyperlink4<D>::XYFocusDownNavigationStrategy() const
{
    Windows::UI::Xaml::Input::XYFocusNavigationStrategy value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlink4)->get_XYFocusDownNavigationStrategy(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_IHyperlink4<D>::XYFocusDownNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlink4)->put_XYFocusDownNavigationStrategy(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Input::XYFocusNavigationStrategy consume_Windows_UI_Xaml_Documents_IHyperlink4<D>::XYFocusLeftNavigationStrategy() const
{
    Windows::UI::Xaml::Input::XYFocusNavigationStrategy value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlink4)->get_XYFocusLeftNavigationStrategy(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_IHyperlink4<D>::XYFocusLeftNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlink4)->put_XYFocusLeftNavigationStrategy(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Input::XYFocusNavigationStrategy consume_Windows_UI_Xaml_Documents_IHyperlink4<D>::XYFocusRightNavigationStrategy() const
{
    Windows::UI::Xaml::Input::XYFocusNavigationStrategy value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlink4)->get_XYFocusRightNavigationStrategy(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_IHyperlink4<D>::XYFocusRightNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlink4)->put_XYFocusRightNavigationStrategy(get_abi(value)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Documents_IHyperlink4<D>::GotFocus(Windows::UI::Xaml::RoutedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlink4)->add_GotFocus(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Documents::IHyperlink4> consume_Windows_UI_Xaml_Documents_IHyperlink4<D>::GotFocus(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Documents::IHyperlink4>(this, &abi_t<Windows::UI::Xaml::Documents::IHyperlink4>::remove_GotFocus, GotFocus(value));
}

template <typename D> void consume_Windows_UI_Xaml_Documents_IHyperlink4<D>::GotFocus(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlink4)->remove_GotFocus(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Documents_IHyperlink4<D>::LostFocus(Windows::UI::Xaml::RoutedEventHandler const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlink4)->add_LostFocus(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Documents::IHyperlink4> consume_Windows_UI_Xaml_Documents_IHyperlink4<D>::LostFocus(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Documents::IHyperlink4>(this, &abi_t<Windows::UI::Xaml::Documents::IHyperlink4>::remove_LostFocus, LostFocus(value));
}

template <typename D> void consume_Windows_UI_Xaml_Documents_IHyperlink4<D>::LostFocus(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlink4)->remove_LostFocus(get_abi(token)));
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_IHyperlink4<D>::Focus(Windows::UI::Xaml::FocusState const& value) const
{
    bool returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlink4)->Focus(get_abi(value), &returnValue));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_IHyperlinkStatics<D>::NavigateUriProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlinkStatics)->get_NavigateUriProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_IHyperlinkStatics2<D>::UnderlineStyleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlinkStatics2)->get_UnderlineStyleProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_IHyperlinkStatics3<D>::XYFocusLeftProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlinkStatics3)->get_XYFocusLeftProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_IHyperlinkStatics3<D>::XYFocusRightProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlinkStatics3)->get_XYFocusRightProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_IHyperlinkStatics3<D>::XYFocusUpProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlinkStatics3)->get_XYFocusUpProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_IHyperlinkStatics3<D>::XYFocusDownProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlinkStatics3)->get_XYFocusDownProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_IHyperlinkStatics3<D>::ElementSoundModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlinkStatics3)->get_ElementSoundModeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_IHyperlinkStatics4<D>::FocusStateProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlinkStatics4)->get_FocusStateProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_IHyperlinkStatics4<D>::XYFocusUpNavigationStrategyProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlinkStatics4)->get_XYFocusUpNavigationStrategyProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_IHyperlinkStatics4<D>::XYFocusDownNavigationStrategyProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlinkStatics4)->get_XYFocusDownNavigationStrategyProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_IHyperlinkStatics4<D>::XYFocusLeftNavigationStrategyProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlinkStatics4)->get_XYFocusLeftNavigationStrategyProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_IHyperlinkStatics4<D>::XYFocusRightNavigationStrategyProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IHyperlinkStatics4)->get_XYFocusRightNavigationStrategyProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Documents::Inline consume_Windows_UI_Xaml_Documents_IInlineFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Documents::Inline instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IInlineFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> Windows::UI::Xaml::UIElement consume_Windows_UI_Xaml_Documents_IInlineUIContainer<D>::Child() const
{
    Windows::UI::Xaml::UIElement value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IInlineUIContainer)->get_Child(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_IInlineUIContainer<D>::Child(Windows::UI::Xaml::UIElement const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IInlineUIContainer)->put_Child(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Documents::InlineCollection consume_Windows_UI_Xaml_Documents_IParagraph<D>::Inlines() const
{
    Windows::UI::Xaml::Documents::InlineCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IParagraph)->get_Inlines(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Documents_IParagraph<D>::TextIndent() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IParagraph)->get_TextIndent(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_IParagraph<D>::TextIndent(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IParagraph)->put_TextIndent(value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_IParagraphStatics<D>::TextIndentProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IParagraphStatics)->get_TextIndentProperty(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Xaml_Documents_IRun<D>::Text() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IRun)->get_Text(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_IRun<D>::Text(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IRun)->put_Text(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::FlowDirection consume_Windows_UI_Xaml_Documents_IRun<D>::FlowDirection() const
{
    Windows::UI::Xaml::FlowDirection value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IRun)->get_FlowDirection(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_IRun<D>::FlowDirection(Windows::UI::Xaml::FlowDirection const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IRun)->put_FlowDirection(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_IRunStatics<D>::FlowDirectionProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::IRunStatics)->get_FlowDirectionProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Documents::InlineCollection consume_Windows_UI_Xaml_Documents_ISpan<D>::Inlines() const
{
    Windows::UI::Xaml::Documents::InlineCollection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ISpan)->get_Inlines(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ISpan<D>::Inlines(Windows::UI::Xaml::Documents::InlineCollection const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ISpan)->put_Inlines(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Documents::Span consume_Windows_UI_Xaml_Documents_ISpanFactory<D>::CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const
{
    Windows::UI::Xaml::Documents::Span instance{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ISpanFactory)->CreateInstance(get_abi(outer), put_abi(inner), put_abi(instance)));
    return instance;
}

template <typename D> hstring consume_Windows_UI_Xaml_Documents_ITextElement<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement)->get_Name(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_UI_Xaml_Documents_ITextElement<D>::FontSize() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement)->get_FontSize(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITextElement<D>::FontSize(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement)->put_FontSize(value));
}

template <typename D> Windows::UI::Xaml::Media::FontFamily consume_Windows_UI_Xaml_Documents_ITextElement<D>::FontFamily() const
{
    Windows::UI::Xaml::Media::FontFamily value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement)->get_FontFamily(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITextElement<D>::FontFamily(Windows::UI::Xaml::Media::FontFamily const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement)->put_FontFamily(get_abi(value)));
}

template <typename D> Windows::UI::Text::FontWeight consume_Windows_UI_Xaml_Documents_ITextElement<D>::FontWeight() const
{
    Windows::UI::Text::FontWeight value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement)->get_FontWeight(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITextElement<D>::FontWeight(Windows::UI::Text::FontWeight const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement)->put_FontWeight(get_abi(value)));
}

template <typename D> Windows::UI::Text::FontStyle consume_Windows_UI_Xaml_Documents_ITextElement<D>::FontStyle() const
{
    Windows::UI::Text::FontStyle value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement)->get_FontStyle(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITextElement<D>::FontStyle(Windows::UI::Text::FontStyle const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement)->put_FontStyle(get_abi(value)));
}

template <typename D> Windows::UI::Text::FontStretch consume_Windows_UI_Xaml_Documents_ITextElement<D>::FontStretch() const
{
    Windows::UI::Text::FontStretch value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement)->get_FontStretch(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITextElement<D>::FontStretch(Windows::UI::Text::FontStretch const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement)->put_FontStretch(get_abi(value)));
}

template <typename D> int32_t consume_Windows_UI_Xaml_Documents_ITextElement<D>::CharacterSpacing() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement)->get_CharacterSpacing(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITextElement<D>::CharacterSpacing(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement)->put_CharacterSpacing(value));
}

template <typename D> Windows::UI::Xaml::Media::Brush consume_Windows_UI_Xaml_Documents_ITextElement<D>::Foreground() const
{
    Windows::UI::Xaml::Media::Brush value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement)->get_Foreground(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITextElement<D>::Foreground(Windows::UI::Xaml::Media::Brush const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement)->put_Foreground(get_abi(value)));
}

template <typename D> hstring consume_Windows_UI_Xaml_Documents_ITextElement<D>::Language() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement)->get_Language(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITextElement<D>::Language(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement)->put_Language(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Documents::TextPointer consume_Windows_UI_Xaml_Documents_ITextElement<D>::ContentStart() const
{
    Windows::UI::Xaml::Documents::TextPointer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement)->get_ContentStart(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Documents::TextPointer consume_Windows_UI_Xaml_Documents_ITextElement<D>::ContentEnd() const
{
    Windows::UI::Xaml::Documents::TextPointer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement)->get_ContentEnd(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Documents::TextPointer consume_Windows_UI_Xaml_Documents_ITextElement<D>::ElementStart() const
{
    Windows::UI::Xaml::Documents::TextPointer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement)->get_ElementStart(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Documents::TextPointer consume_Windows_UI_Xaml_Documents_ITextElement<D>::ElementEnd() const
{
    Windows::UI::Xaml::Documents::TextPointer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement)->get_ElementEnd(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IInspectable consume_Windows_UI_Xaml_Documents_ITextElement<D>::FindName(param::hstring const& name) const
{
    Windows::Foundation::IInspectable returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement)->FindName(get_abi(name), put_abi(returnValue)));
    return returnValue;
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITextElement2<D>::IsTextScaleFactorEnabled() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement2)->get_IsTextScaleFactorEnabled(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITextElement2<D>::IsTextScaleFactorEnabled(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement2)->put_IsTextScaleFactorEnabled(value));
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITextElement3<D>::AllowFocusOnInteraction() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement3)->get_AllowFocusOnInteraction(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITextElement3<D>::AllowFocusOnInteraction(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement3)->put_AllowFocusOnInteraction(value));
}

template <typename D> hstring consume_Windows_UI_Xaml_Documents_ITextElement3<D>::AccessKey() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement3)->get_AccessKey(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITextElement3<D>::AccessKey(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement3)->put_AccessKey(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITextElement3<D>::ExitDisplayModeOnAccessKeyInvoked() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement3)->get_ExitDisplayModeOnAccessKeyInvoked(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITextElement3<D>::ExitDisplayModeOnAccessKeyInvoked(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement3)->put_ExitDisplayModeOnAccessKeyInvoked(value));
}

template <typename D> Windows::UI::Text::TextDecorations consume_Windows_UI_Xaml_Documents_ITextElement4<D>::TextDecorations() const
{
    Windows::UI::Text::TextDecorations value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement4)->get_TextDecorations(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITextElement4<D>::TextDecorations(Windows::UI::Text::TextDecorations const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement4)->put_TextDecorations(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITextElement4<D>::IsAccessKeyScope() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement4)->get_IsAccessKeyScope(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITextElement4<D>::IsAccessKeyScope(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement4)->put_IsAccessKeyScope(value));
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_Documents_ITextElement4<D>::AccessKeyScopeOwner() const
{
    Windows::UI::Xaml::DependencyObject value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement4)->get_AccessKeyScopeOwner(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITextElement4<D>::AccessKeyScopeOwner(Windows::UI::Xaml::DependencyObject const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement4)->put_AccessKeyScopeOwner(get_abi(value)));
}

template <typename D> Windows::UI::Xaml::Input::KeyTipPlacementMode consume_Windows_UI_Xaml_Documents_ITextElement4<D>::KeyTipPlacementMode() const
{
    Windows::UI::Xaml::Input::KeyTipPlacementMode value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement4)->get_KeyTipPlacementMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITextElement4<D>::KeyTipPlacementMode(Windows::UI::Xaml::Input::KeyTipPlacementMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement4)->put_KeyTipPlacementMode(get_abi(value)));
}

template <typename D> double consume_Windows_UI_Xaml_Documents_ITextElement4<D>::KeyTipHorizontalOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement4)->get_KeyTipHorizontalOffset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITextElement4<D>::KeyTipHorizontalOffset(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement4)->put_KeyTipHorizontalOffset(value));
}

template <typename D> double consume_Windows_UI_Xaml_Documents_ITextElement4<D>::KeyTipVerticalOffset() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement4)->get_KeyTipVerticalOffset(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITextElement4<D>::KeyTipVerticalOffset(double value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement4)->put_KeyTipVerticalOffset(value));
}

template <typename D> event_token consume_Windows_UI_Xaml_Documents_ITextElement4<D>::AccessKeyDisplayRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement4)->add_AccessKeyDisplayRequested(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Documents::ITextElement4> consume_Windows_UI_Xaml_Documents_ITextElement4<D>::AccessKeyDisplayRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Documents::ITextElement4>(this, &abi_t<Windows::UI::Xaml::Documents::ITextElement4>::remove_AccessKeyDisplayRequested, AccessKeyDisplayRequested(value));
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITextElement4<D>::AccessKeyDisplayRequested(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement4)->remove_AccessKeyDisplayRequested(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Documents_ITextElement4<D>::AccessKeyDisplayDismissed(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement4)->add_AccessKeyDisplayDismissed(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Documents::ITextElement4> consume_Windows_UI_Xaml_Documents_ITextElement4<D>::AccessKeyDisplayDismissed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Documents::ITextElement4>(this, &abi_t<Windows::UI::Xaml::Documents::ITextElement4>::remove_AccessKeyDisplayDismissed, AccessKeyDisplayDismissed(value));
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITextElement4<D>::AccessKeyDisplayDismissed(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement4)->remove_AccessKeyDisplayDismissed(get_abi(token)));
}

template <typename D> event_token consume_Windows_UI_Xaml_Documents_ITextElement4<D>::AccessKeyInvoked(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs> const& value) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement4)->add_AccessKeyInvoked(get_abi(value), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::UI::Xaml::Documents::ITextElement4> consume_Windows_UI_Xaml_Documents_ITextElement4<D>::AccessKeyInvoked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs> const& value) const
{
    return impl::make_event_revoker<D, Windows::UI::Xaml::Documents::ITextElement4>(this, &abi_t<Windows::UI::Xaml::Documents::ITextElement4>::remove_AccessKeyInvoked, AccessKeyInvoked(value));
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITextElement4<D>::AccessKeyInvoked(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElement4)->remove_AccessKeyInvoked(get_abi(token)));
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITextElementOverrides<D>::OnDisconnectVisualChildren() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElementOverrides)->OnDisconnectVisualChildren());
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITextElementStatics<D>::FontSizeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElementStatics)->get_FontSizeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITextElementStatics<D>::FontFamilyProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElementStatics)->get_FontFamilyProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITextElementStatics<D>::FontWeightProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElementStatics)->get_FontWeightProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITextElementStatics<D>::FontStyleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElementStatics)->get_FontStyleProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITextElementStatics<D>::FontStretchProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElementStatics)->get_FontStretchProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITextElementStatics<D>::CharacterSpacingProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElementStatics)->get_CharacterSpacingProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITextElementStatics<D>::ForegroundProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElementStatics)->get_ForegroundProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITextElementStatics<D>::LanguageProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElementStatics)->get_LanguageProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITextElementStatics2<D>::IsTextScaleFactorEnabledProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElementStatics2)->get_IsTextScaleFactorEnabledProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITextElementStatics3<D>::AllowFocusOnInteractionProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElementStatics3)->get_AllowFocusOnInteractionProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITextElementStatics3<D>::AccessKeyProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElementStatics3)->get_AccessKeyProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITextElementStatics3<D>::ExitDisplayModeOnAccessKeyInvokedProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElementStatics3)->get_ExitDisplayModeOnAccessKeyInvokedProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITextElementStatics4<D>::TextDecorationsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElementStatics4)->get_TextDecorationsProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITextElementStatics4<D>::IsAccessKeyScopeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElementStatics4)->get_IsAccessKeyScopeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITextElementStatics4<D>::AccessKeyScopeOwnerProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElementStatics4)->get_AccessKeyScopeOwnerProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITextElementStatics4<D>::KeyTipPlacementModeProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElementStatics4)->get_KeyTipPlacementModeProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITextElementStatics4<D>::KeyTipHorizontalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElementStatics4)->get_KeyTipHorizontalOffsetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITextElementStatics4<D>::KeyTipVerticalOffsetProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextElementStatics4)->get_KeyTipVerticalOffsetProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::DependencyObject consume_Windows_UI_Xaml_Documents_ITextPointer<D>::Parent() const
{
    Windows::UI::Xaml::DependencyObject value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextPointer)->get_Parent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::FrameworkElement consume_Windows_UI_Xaml_Documents_ITextPointer<D>::VisualParent() const
{
    Windows::UI::Xaml::FrameworkElement value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextPointer)->get_VisualParent(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::Documents::LogicalDirection consume_Windows_UI_Xaml_Documents_ITextPointer<D>::LogicalDirection() const
{
    Windows::UI::Xaml::Documents::LogicalDirection value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextPointer)->get_LogicalDirection(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Documents_ITextPointer<D>::Offset() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextPointer)->get_Offset(&value));
    return value;
}

template <typename D> Windows::Foundation::Rect consume_Windows_UI_Xaml_Documents_ITextPointer<D>::GetCharacterRect(Windows::UI::Xaml::Documents::LogicalDirection const& direction) const
{
    Windows::Foundation::Rect returnValue{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextPointer)->GetCharacterRect(get_abi(direction), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::Documents::TextPointer consume_Windows_UI_Xaml_Documents_ITextPointer<D>::GetPositionAtOffset(int32_t offset, Windows::UI::Xaml::Documents::LogicalDirection const& direction) const
{
    Windows::UI::Xaml::Documents::TextPointer returnValue{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITextPointer)->GetPositionAtOffset(offset, get_abi(direction), put_abi(returnValue)));
    return returnValue;
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::AnnotationAlternatesProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_AnnotationAlternatesProperty(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetAnnotationAlternates(Windows::UI::Xaml::DependencyObject const& element) const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetAnnotationAlternates(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetAnnotationAlternates(Windows::UI::Xaml::DependencyObject const& element, int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetAnnotationAlternates(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::EastAsianExpertFormsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_EastAsianExpertFormsProperty(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetEastAsianExpertForms(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetEastAsianExpertForms(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetEastAsianExpertForms(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetEastAsianExpertForms(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::EastAsianLanguageProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_EastAsianLanguageProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::FontEastAsianLanguage consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetEastAsianLanguage(Windows::UI::Xaml::DependencyObject const& element) const
{
    Windows::UI::Xaml::FontEastAsianLanguage value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetEastAsianLanguage(get_abi(element), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetEastAsianLanguage(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontEastAsianLanguage const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetEastAsianLanguage(get_abi(element), get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::EastAsianWidthsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_EastAsianWidthsProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::FontEastAsianWidths consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetEastAsianWidths(Windows::UI::Xaml::DependencyObject const& element) const
{
    Windows::UI::Xaml::FontEastAsianWidths value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetEastAsianWidths(get_abi(element), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetEastAsianWidths(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontEastAsianWidths const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetEastAsianWidths(get_abi(element), get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::StandardLigaturesProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_StandardLigaturesProperty(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetStandardLigatures(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetStandardLigatures(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetStandardLigatures(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetStandardLigatures(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::ContextualLigaturesProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_ContextualLigaturesProperty(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetContextualLigatures(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetContextualLigatures(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetContextualLigatures(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetContextualLigatures(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::DiscretionaryLigaturesProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_DiscretionaryLigaturesProperty(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetDiscretionaryLigatures(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetDiscretionaryLigatures(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetDiscretionaryLigatures(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetDiscretionaryLigatures(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::HistoricalLigaturesProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_HistoricalLigaturesProperty(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetHistoricalLigatures(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetHistoricalLigatures(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetHistoricalLigatures(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetHistoricalLigatures(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::StandardSwashesProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_StandardSwashesProperty(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetStandardSwashes(Windows::UI::Xaml::DependencyObject const& element) const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetStandardSwashes(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetStandardSwashes(Windows::UI::Xaml::DependencyObject const& element, int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetStandardSwashes(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::ContextualSwashesProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_ContextualSwashesProperty(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetContextualSwashes(Windows::UI::Xaml::DependencyObject const& element) const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetContextualSwashes(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetContextualSwashes(Windows::UI::Xaml::DependencyObject const& element, int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetContextualSwashes(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::ContextualAlternatesProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_ContextualAlternatesProperty(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetContextualAlternates(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetContextualAlternates(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetContextualAlternates(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetContextualAlternates(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::StylisticAlternatesProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_StylisticAlternatesProperty(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetStylisticAlternates(Windows::UI::Xaml::DependencyObject const& element) const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetStylisticAlternates(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetStylisticAlternates(Windows::UI::Xaml::DependencyObject const& element, int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetStylisticAlternates(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::StylisticSet1Property() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_StylisticSet1Property(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetStylisticSet1(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetStylisticSet1(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetStylisticSet1(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetStylisticSet1(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::StylisticSet2Property() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_StylisticSet2Property(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetStylisticSet2(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetStylisticSet2(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetStylisticSet2(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetStylisticSet2(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::StylisticSet3Property() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_StylisticSet3Property(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetStylisticSet3(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetStylisticSet3(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetStylisticSet3(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetStylisticSet3(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::StylisticSet4Property() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_StylisticSet4Property(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetStylisticSet4(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetStylisticSet4(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetStylisticSet4(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetStylisticSet4(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::StylisticSet5Property() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_StylisticSet5Property(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetStylisticSet5(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetStylisticSet5(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetStylisticSet5(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetStylisticSet5(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::StylisticSet6Property() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_StylisticSet6Property(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetStylisticSet6(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetStylisticSet6(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetStylisticSet6(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetStylisticSet6(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::StylisticSet7Property() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_StylisticSet7Property(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetStylisticSet7(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetStylisticSet7(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetStylisticSet7(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetStylisticSet7(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::StylisticSet8Property() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_StylisticSet8Property(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetStylisticSet8(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetStylisticSet8(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetStylisticSet8(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetStylisticSet8(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::StylisticSet9Property() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_StylisticSet9Property(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetStylisticSet9(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetStylisticSet9(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetStylisticSet9(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetStylisticSet9(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::StylisticSet10Property() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_StylisticSet10Property(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetStylisticSet10(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetStylisticSet10(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetStylisticSet10(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetStylisticSet10(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::StylisticSet11Property() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_StylisticSet11Property(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetStylisticSet11(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetStylisticSet11(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetStylisticSet11(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetStylisticSet11(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::StylisticSet12Property() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_StylisticSet12Property(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetStylisticSet12(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetStylisticSet12(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetStylisticSet12(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetStylisticSet12(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::StylisticSet13Property() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_StylisticSet13Property(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetStylisticSet13(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetStylisticSet13(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetStylisticSet13(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetStylisticSet13(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::StylisticSet14Property() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_StylisticSet14Property(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetStylisticSet14(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetStylisticSet14(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetStylisticSet14(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetStylisticSet14(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::StylisticSet15Property() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_StylisticSet15Property(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetStylisticSet15(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetStylisticSet15(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetStylisticSet15(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetStylisticSet15(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::StylisticSet16Property() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_StylisticSet16Property(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetStylisticSet16(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetStylisticSet16(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetStylisticSet16(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetStylisticSet16(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::StylisticSet17Property() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_StylisticSet17Property(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetStylisticSet17(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetStylisticSet17(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetStylisticSet17(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetStylisticSet17(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::StylisticSet18Property() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_StylisticSet18Property(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetStylisticSet18(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetStylisticSet18(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetStylisticSet18(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetStylisticSet18(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::StylisticSet19Property() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_StylisticSet19Property(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetStylisticSet19(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetStylisticSet19(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetStylisticSet19(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetStylisticSet19(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::StylisticSet20Property() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_StylisticSet20Property(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetStylisticSet20(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetStylisticSet20(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetStylisticSet20(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetStylisticSet20(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::CapitalsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_CapitalsProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::FontCapitals consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetCapitals(Windows::UI::Xaml::DependencyObject const& element) const
{
    Windows::UI::Xaml::FontCapitals value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetCapitals(get_abi(element), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetCapitals(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontCapitals const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetCapitals(get_abi(element), get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::CapitalSpacingProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_CapitalSpacingProperty(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetCapitalSpacing(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetCapitalSpacing(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetCapitalSpacing(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetCapitalSpacing(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::KerningProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_KerningProperty(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetKerning(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetKerning(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetKerning(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetKerning(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::CaseSensitiveFormsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_CaseSensitiveFormsProperty(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetCaseSensitiveForms(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetCaseSensitiveForms(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetCaseSensitiveForms(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetCaseSensitiveForms(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::HistoricalFormsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_HistoricalFormsProperty(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetHistoricalForms(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetHistoricalForms(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetHistoricalForms(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetHistoricalForms(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::FractionProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_FractionProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::FontFraction consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetFraction(Windows::UI::Xaml::DependencyObject const& element) const
{
    Windows::UI::Xaml::FontFraction value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetFraction(get_abi(element), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetFraction(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontFraction const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetFraction(get_abi(element), get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::NumeralStyleProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_NumeralStyleProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::FontNumeralStyle consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetNumeralStyle(Windows::UI::Xaml::DependencyObject const& element) const
{
    Windows::UI::Xaml::FontNumeralStyle value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetNumeralStyle(get_abi(element), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetNumeralStyle(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontNumeralStyle const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetNumeralStyle(get_abi(element), get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::NumeralAlignmentProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_NumeralAlignmentProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::FontNumeralAlignment consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetNumeralAlignment(Windows::UI::Xaml::DependencyObject const& element) const
{
    Windows::UI::Xaml::FontNumeralAlignment value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetNumeralAlignment(get_abi(element), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetNumeralAlignment(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontNumeralAlignment const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetNumeralAlignment(get_abi(element), get_abi(value)));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SlashedZeroProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_SlashedZeroProperty(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetSlashedZero(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetSlashedZero(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetSlashedZero(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetSlashedZero(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::MathematicalGreekProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_MathematicalGreekProperty(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetMathematicalGreek(Windows::UI::Xaml::DependencyObject const& element) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetMathematicalGreek(get_abi(element), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetMathematicalGreek(Windows::UI::Xaml::DependencyObject const& element, bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetMathematicalGreek(get_abi(element), value));
}

template <typename D> Windows::UI::Xaml::DependencyProperty consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::VariantsProperty() const
{
    Windows::UI::Xaml::DependencyProperty value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->get_VariantsProperty(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Xaml::FontVariants consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::GetVariants(Windows::UI::Xaml::DependencyObject const& element) const
{
    Windows::UI::Xaml::FontVariants value{};
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->GetVariants(get_abi(element), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>::SetVariants(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontVariants const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Xaml::Documents::ITypographyStatics)->SetVariants(get_abi(element), get_abi(value)));
}

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::IBlock> : produce_base<D, Windows::UI::Xaml::Documents::IBlock>
{
    HRESULT __stdcall get_TextAlignment(abi_t<Windows::UI::Xaml::TextAlignment>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TextAlignment());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TextAlignment(abi_t<Windows::UI::Xaml::TextAlignment> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TextAlignment(*reinterpret_cast<Windows::UI::Xaml::TextAlignment const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LineHeight(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LineHeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LineHeight(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LineHeight(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LineStackingStrategy(abi_t<Windows::UI::Xaml::LineStackingStrategy>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LineStackingStrategy());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LineStackingStrategy(abi_t<Windows::UI::Xaml::LineStackingStrategy> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LineStackingStrategy(*reinterpret_cast<Windows::UI::Xaml::LineStackingStrategy const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Margin(abi_t<Windows::UI::Xaml::Thickness>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Margin());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Margin(abi_t<Windows::UI::Xaml::Thickness> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Margin(*reinterpret_cast<Windows::UI::Xaml::Thickness const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::IBlockFactory> : produce_base<D, Windows::UI::Xaml::Documents::IBlockFactory>
{
    HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::IBlockStatics> : produce_base<D, Windows::UI::Xaml::Documents::IBlockStatics>
{
    HRESULT __stdcall get_TextAlignmentProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TextAlignmentProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LineHeightProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LineHeightProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LineStackingStrategyProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LineStackingStrategyProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MarginProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MarginProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::IBold> : produce_base<D, Windows::UI::Xaml::Documents::IBold>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::IGlyphs> : produce_base<D, Windows::UI::Xaml::Documents::IGlyphs>
{
    HRESULT __stdcall get_UnicodeString(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UnicodeString());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UnicodeString(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UnicodeString(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Indices(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Indices());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Indices(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Indices(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FontUri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FontUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FontUri(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FontUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StyleSimulations(abi_t<Windows::UI::Xaml::Media::StyleSimulations>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StyleSimulations());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StyleSimulations(abi_t<Windows::UI::Xaml::Media::StyleSimulations> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StyleSimulations(*reinterpret_cast<Windows::UI::Xaml::Media::StyleSimulations const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FontRenderingEmSize(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FontRenderingEmSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FontRenderingEmSize(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FontRenderingEmSize(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OriginX(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OriginX());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OriginX(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OriginX(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OriginY(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OriginY());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_OriginY(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OriginY(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Fill(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Fill());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Fill(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Fill(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::IGlyphs2> : produce_base<D, Windows::UI::Xaml::Documents::IGlyphs2>
{
    HRESULT __stdcall get_IsColorFontEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsColorFontEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsColorFontEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsColorFontEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ColorFontPaletteIndex(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ColorFontPaletteIndex());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ColorFontPaletteIndex(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ColorFontPaletteIndex(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::IGlyphsStatics> : produce_base<D, Windows::UI::Xaml::Documents::IGlyphsStatics>
{
    HRESULT __stdcall get_UnicodeStringProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UnicodeStringProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IndicesProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IndicesProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FontUriProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FontUriProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StyleSimulationsProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StyleSimulationsProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FontRenderingEmSizeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FontRenderingEmSizeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OriginXProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OriginXProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_OriginYProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().OriginYProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FillProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FillProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::IGlyphsStatics2> : produce_base<D, Windows::UI::Xaml::Documents::IGlyphsStatics2>
{
    HRESULT __stdcall get_IsColorFontEnabledProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsColorFontEnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ColorFontPaletteIndexProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ColorFontPaletteIndexProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::IHyperlink> : produce_base<D, Windows::UI::Xaml::Documents::IHyperlink>
{
    HRESULT __stdcall get_NavigateUri(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NavigateUri());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NavigateUri(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NavigateUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Click(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().Click(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Documents::Hyperlink, Windows::UI::Xaml::Documents::HyperlinkClickEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Click(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Click(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::IHyperlink2> : produce_base<D, Windows::UI::Xaml::Documents::IHyperlink2>
{
    HRESULT __stdcall get_UnderlineStyle(abi_t<Windows::UI::Xaml::Documents::UnderlineStyle>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UnderlineStyle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UnderlineStyle(abi_t<Windows::UI::Xaml::Documents::UnderlineStyle> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UnderlineStyle(*reinterpret_cast<Windows::UI::Xaml::Documents::UnderlineStyle const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::IHyperlink3> : produce_base<D, Windows::UI::Xaml::Documents::IHyperlink3>
{
    HRESULT __stdcall get_XYFocusLeft(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().XYFocusLeft());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_XYFocusLeft(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().XYFocusLeft(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_XYFocusRight(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().XYFocusRight());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_XYFocusRight(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().XYFocusRight(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_XYFocusUp(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().XYFocusUp());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_XYFocusUp(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().XYFocusUp(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_XYFocusDown(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().XYFocusDown());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_XYFocusDown(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().XYFocusDown(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ElementSoundMode(abi_t<Windows::UI::Xaml::ElementSoundMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ElementSoundMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ElementSoundMode(abi_t<Windows::UI::Xaml::ElementSoundMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ElementSoundMode(*reinterpret_cast<Windows::UI::Xaml::ElementSoundMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::IHyperlink4> : produce_base<D, Windows::UI::Xaml::Documents::IHyperlink4>
{
    HRESULT __stdcall get_FocusState(abi_t<Windows::UI::Xaml::FocusState>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FocusState());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_XYFocusUpNavigationStrategy(abi_t<Windows::UI::Xaml::Input::XYFocusNavigationStrategy>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().XYFocusUpNavigationStrategy());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_XYFocusUpNavigationStrategy(abi_t<Windows::UI::Xaml::Input::XYFocusNavigationStrategy> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().XYFocusUpNavigationStrategy(*reinterpret_cast<Windows::UI::Xaml::Input::XYFocusNavigationStrategy const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_XYFocusDownNavigationStrategy(abi_t<Windows::UI::Xaml::Input::XYFocusNavigationStrategy>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().XYFocusDownNavigationStrategy());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_XYFocusDownNavigationStrategy(abi_t<Windows::UI::Xaml::Input::XYFocusNavigationStrategy> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().XYFocusDownNavigationStrategy(*reinterpret_cast<Windows::UI::Xaml::Input::XYFocusNavigationStrategy const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_XYFocusLeftNavigationStrategy(abi_t<Windows::UI::Xaml::Input::XYFocusNavigationStrategy>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().XYFocusLeftNavigationStrategy());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_XYFocusLeftNavigationStrategy(abi_t<Windows::UI::Xaml::Input::XYFocusNavigationStrategy> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().XYFocusLeftNavigationStrategy(*reinterpret_cast<Windows::UI::Xaml::Input::XYFocusNavigationStrategy const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_XYFocusRightNavigationStrategy(abi_t<Windows::UI::Xaml::Input::XYFocusNavigationStrategy>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().XYFocusRightNavigationStrategy());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_XYFocusRightNavigationStrategy(abi_t<Windows::UI::Xaml::Input::XYFocusNavigationStrategy> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().XYFocusRightNavigationStrategy(*reinterpret_cast<Windows::UI::Xaml::Input::XYFocusNavigationStrategy const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_GotFocus(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().GotFocus(*reinterpret_cast<Windows::UI::Xaml::RoutedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_GotFocus(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GotFocus(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_LostFocus(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().LostFocus(*reinterpret_cast<Windows::UI::Xaml::RoutedEventHandler const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_LostFocus(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LostFocus(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Focus(abi_t<Windows::UI::Xaml::FocusState> value, bool* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().Focus(*reinterpret_cast<Windows::UI::Xaml::FocusState const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::IHyperlinkClickEventArgs> : produce_base<D, Windows::UI::Xaml::Documents::IHyperlinkClickEventArgs>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::IHyperlinkStatics> : produce_base<D, Windows::UI::Xaml::Documents::IHyperlinkStatics>
{
    HRESULT __stdcall get_NavigateUriProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NavigateUriProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::IHyperlinkStatics2> : produce_base<D, Windows::UI::Xaml::Documents::IHyperlinkStatics2>
{
    HRESULT __stdcall get_UnderlineStyleProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UnderlineStyleProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::IHyperlinkStatics3> : produce_base<D, Windows::UI::Xaml::Documents::IHyperlinkStatics3>
{
    HRESULT __stdcall get_XYFocusLeftProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().XYFocusLeftProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_XYFocusRightProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().XYFocusRightProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_XYFocusUpProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().XYFocusUpProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_XYFocusDownProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().XYFocusDownProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ElementSoundModeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ElementSoundModeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::IHyperlinkStatics4> : produce_base<D, Windows::UI::Xaml::Documents::IHyperlinkStatics4>
{
    HRESULT __stdcall get_FocusStateProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FocusStateProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_XYFocusUpNavigationStrategyProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().XYFocusUpNavigationStrategyProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_XYFocusDownNavigationStrategyProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().XYFocusDownNavigationStrategyProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_XYFocusLeftNavigationStrategyProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().XYFocusLeftNavigationStrategyProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_XYFocusRightNavigationStrategyProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().XYFocusRightNavigationStrategyProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::IInline> : produce_base<D, Windows::UI::Xaml::Documents::IInline>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::IInlineFactory> : produce_base<D, Windows::UI::Xaml::Documents::IInlineFactory>
{
    HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::IInlineUIContainer> : produce_base<D, Windows::UI::Xaml::Documents::IInlineUIContainer>
{
    HRESULT __stdcall get_Child(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Child());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Child(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Child(*reinterpret_cast<Windows::UI::Xaml::UIElement const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::IItalic> : produce_base<D, Windows::UI::Xaml::Documents::IItalic>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::ILineBreak> : produce_base<D, Windows::UI::Xaml::Documents::ILineBreak>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::IParagraph> : produce_base<D, Windows::UI::Xaml::Documents::IParagraph>
{
    HRESULT __stdcall get_Inlines(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Inlines());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TextIndent(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TextIndent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TextIndent(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TextIndent(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::IParagraphStatics> : produce_base<D, Windows::UI::Xaml::Documents::IParagraphStatics>
{
    HRESULT __stdcall get_TextIndentProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TextIndentProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::IRun> : produce_base<D, Windows::UI::Xaml::Documents::IRun>
{
    HRESULT __stdcall get_Text(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Text());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Text(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Text(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FlowDirection(abi_t<Windows::UI::Xaml::FlowDirection>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FlowDirection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FlowDirection(abi_t<Windows::UI::Xaml::FlowDirection> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FlowDirection(*reinterpret_cast<Windows::UI::Xaml::FlowDirection const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::IRunStatics> : produce_base<D, Windows::UI::Xaml::Documents::IRunStatics>
{
    HRESULT __stdcall get_FlowDirectionProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FlowDirectionProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::ISpan> : produce_base<D, Windows::UI::Xaml::Documents::ISpan>
{
    HRESULT __stdcall get_Inlines(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Inlines());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Inlines(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Inlines(*reinterpret_cast<Windows::UI::Xaml::Documents::InlineCollection const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::ISpanFactory> : produce_base<D, Windows::UI::Xaml::Documents::ISpanFactory>
{
    HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            Windows::Foundation::IInspectable __local_inner;
            *instance = detach_abi(this->shim().CreateInstance(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&outer), __local_inner));
            if (inner) *inner = detach_abi(__local_inner);
            return S_OK;
        }
        catch (...)
        {
            if (inner) *inner = nullptr;
            *instance = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::ITextElement> : produce_base<D, Windows::UI::Xaml::Documents::ITextElement>
{
    HRESULT __stdcall get_Name(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Name());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FontSize(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FontSize());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FontSize(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FontSize(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FontFamily(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FontFamily());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FontFamily(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FontFamily(*reinterpret_cast<Windows::UI::Xaml::Media::FontFamily const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FontWeight(abi_t<Windows::UI::Text::FontWeight>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FontWeight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FontWeight(abi_t<Windows::UI::Text::FontWeight> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FontWeight(*reinterpret_cast<Windows::UI::Text::FontWeight const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FontStyle(abi_t<Windows::UI::Text::FontStyle>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FontStyle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FontStyle(abi_t<Windows::UI::Text::FontStyle> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FontStyle(*reinterpret_cast<Windows::UI::Text::FontStyle const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FontStretch(abi_t<Windows::UI::Text::FontStretch>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FontStretch());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FontStretch(abi_t<Windows::UI::Text::FontStretch> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FontStretch(*reinterpret_cast<Windows::UI::Text::FontStretch const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CharacterSpacing(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CharacterSpacing());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CharacterSpacing(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CharacterSpacing(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Foreground(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Foreground());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Foreground(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Foreground(*reinterpret_cast<Windows::UI::Xaml::Media::Brush const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Language(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Language());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Language(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Language(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentStart(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentStart());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContentEnd(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContentEnd());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ElementStart(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ElementStart());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ElementEnd(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ElementEnd());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindName(HSTRING name, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().FindName(*reinterpret_cast<hstring const*>(&name)));
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
struct produce<D, Windows::UI::Xaml::Documents::ITextElement2> : produce_base<D, Windows::UI::Xaml::Documents::ITextElement2>
{
    HRESULT __stdcall get_IsTextScaleFactorEnabled(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsTextScaleFactorEnabled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsTextScaleFactorEnabled(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsTextScaleFactorEnabled(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::ITextElement3> : produce_base<D, Windows::UI::Xaml::Documents::ITextElement3>
{
    HRESULT __stdcall get_AllowFocusOnInteraction(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AllowFocusOnInteraction());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AllowFocusOnInteraction(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowFocusOnInteraction(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AccessKey(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AccessKey());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AccessKey(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AccessKey(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExitDisplayModeOnAccessKeyInvoked(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExitDisplayModeOnAccessKeyInvoked());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ExitDisplayModeOnAccessKeyInvoked(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ExitDisplayModeOnAccessKeyInvoked(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::ITextElement4> : produce_base<D, Windows::UI::Xaml::Documents::ITextElement4>
{
    HRESULT __stdcall get_TextDecorations(abi_t<Windows::UI::Text::TextDecorations>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TextDecorations());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TextDecorations(abi_t<Windows::UI::Text::TextDecorations> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TextDecorations(*reinterpret_cast<Windows::UI::Text::TextDecorations const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsAccessKeyScope(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsAccessKeyScope());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IsAccessKeyScope(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsAccessKeyScope(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AccessKeyScopeOwner(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AccessKeyScopeOwner());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AccessKeyScopeOwner(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AccessKeyScopeOwner(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyTipPlacementMode(abi_t<Windows::UI::Xaml::Input::KeyTipPlacementMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyTipPlacementMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeyTipPlacementMode(abi_t<Windows::UI::Xaml::Input::KeyTipPlacementMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyTipPlacementMode(*reinterpret_cast<Windows::UI::Xaml::Input::KeyTipPlacementMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyTipHorizontalOffset(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyTipHorizontalOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeyTipHorizontalOffset(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyTipHorizontalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyTipVerticalOffset(double* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyTipVerticalOffset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeyTipVerticalOffset(double value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeyTipVerticalOffset(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AccessKeyDisplayRequested(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().AccessKeyDisplayRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AccessKeyDisplayRequested(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AccessKeyDisplayRequested(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AccessKeyDisplayDismissed(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().AccessKeyDisplayDismissed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AccessKeyDisplayDismissed(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AccessKeyDisplayDismissed(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_AccessKeyInvoked(::IUnknown* value, abi_t<event_token>* token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().AccessKeyInvoked(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs> const*>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_AccessKeyInvoked(abi_t<event_token> token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AccessKeyInvoked(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::ITextElementFactory> : produce_base<D, Windows::UI::Xaml::Documents::ITextElementFactory>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::ITextElementOverrides> : produce_base<D, Windows::UI::Xaml::Documents::ITextElementOverrides>
{
    HRESULT __stdcall OnDisconnectVisualChildren() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnDisconnectVisualChildren();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::ITextElementStatics> : produce_base<D, Windows::UI::Xaml::Documents::ITextElementStatics>
{
    HRESULT __stdcall get_FontSizeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FontSizeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FontFamilyProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FontFamilyProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FontWeightProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FontWeightProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FontStyleProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FontStyleProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FontStretchProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FontStretchProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CharacterSpacingProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CharacterSpacingProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ForegroundProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ForegroundProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LanguageProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LanguageProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::ITextElementStatics2> : produce_base<D, Windows::UI::Xaml::Documents::ITextElementStatics2>
{
    HRESULT __stdcall get_IsTextScaleFactorEnabledProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsTextScaleFactorEnabledProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::ITextElementStatics3> : produce_base<D, Windows::UI::Xaml::Documents::ITextElementStatics3>
{
    HRESULT __stdcall get_AllowFocusOnInteractionProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AllowFocusOnInteractionProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AccessKeyProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AccessKeyProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExitDisplayModeOnAccessKeyInvokedProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExitDisplayModeOnAccessKeyInvokedProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::ITextElementStatics4> : produce_base<D, Windows::UI::Xaml::Documents::ITextElementStatics4>
{
    HRESULT __stdcall get_TextDecorationsProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TextDecorationsProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsAccessKeyScopeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsAccessKeyScopeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AccessKeyScopeOwnerProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AccessKeyScopeOwnerProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyTipPlacementModeProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyTipPlacementModeProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyTipHorizontalOffsetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyTipHorizontalOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeyTipVerticalOffsetProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeyTipVerticalOffsetProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::ITextPointer> : produce_base<D, Windows::UI::Xaml::Documents::ITextPointer>
{
    HRESULT __stdcall get_Parent(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Parent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VisualParent(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VisualParent());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LogicalDirection(abi_t<Windows::UI::Xaml::Documents::LogicalDirection>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LogicalDirection());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Offset(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Offset());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCharacterRect(abi_t<Windows::UI::Xaml::Documents::LogicalDirection> direction, abi_t<Windows::Foundation::Rect>* returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetCharacterRect(*reinterpret_cast<Windows::UI::Xaml::Documents::LogicalDirection const*>(&direction)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPositionAtOffset(int32_t offset, abi_t<Windows::UI::Xaml::Documents::LogicalDirection> direction, ::IUnknown** returnValue) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *returnValue = detach_abi(this->shim().GetPositionAtOffset(offset, *reinterpret_cast<Windows::UI::Xaml::Documents::LogicalDirection const*>(&direction)));
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
struct produce<D, Windows::UI::Xaml::Documents::ITypography> : produce_base<D, Windows::UI::Xaml::Documents::ITypography>
{};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::ITypographyStatics> : produce_base<D, Windows::UI::Xaml::Documents::ITypographyStatics>
{
    HRESULT __stdcall get_AnnotationAlternatesProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AnnotationAlternatesProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetAnnotationAlternates(::IUnknown* element, int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetAnnotationAlternates(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetAnnotationAlternates(::IUnknown* element, int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetAnnotationAlternates(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EastAsianExpertFormsProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EastAsianExpertFormsProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetEastAsianExpertForms(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetEastAsianExpertForms(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetEastAsianExpertForms(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetEastAsianExpertForms(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EastAsianLanguageProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EastAsianLanguageProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetEastAsianLanguage(::IUnknown* element, abi_t<Windows::UI::Xaml::FontEastAsianLanguage>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetEastAsianLanguage(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetEastAsianLanguage(::IUnknown* element, abi_t<Windows::UI::Xaml::FontEastAsianLanguage> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetEastAsianLanguage(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<Windows::UI::Xaml::FontEastAsianLanguage const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EastAsianWidthsProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EastAsianWidthsProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetEastAsianWidths(::IUnknown* element, abi_t<Windows::UI::Xaml::FontEastAsianWidths>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetEastAsianWidths(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetEastAsianWidths(::IUnknown* element, abi_t<Windows::UI::Xaml::FontEastAsianWidths> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetEastAsianWidths(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<Windows::UI::Xaml::FontEastAsianWidths const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StandardLigaturesProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StandardLigaturesProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStandardLigatures(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetStandardLigatures(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetStandardLigatures(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStandardLigatures(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContextualLigaturesProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContextualLigaturesProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetContextualLigatures(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetContextualLigatures(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetContextualLigatures(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetContextualLigatures(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DiscretionaryLigaturesProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DiscretionaryLigaturesProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDiscretionaryLigatures(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDiscretionaryLigatures(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetDiscretionaryLigatures(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDiscretionaryLigatures(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HistoricalLigaturesProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HistoricalLigaturesProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetHistoricalLigatures(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetHistoricalLigatures(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetHistoricalLigatures(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetHistoricalLigatures(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StandardSwashesProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StandardSwashesProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStandardSwashes(::IUnknown* element, int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetStandardSwashes(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetStandardSwashes(::IUnknown* element, int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStandardSwashes(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContextualSwashesProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContextualSwashesProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetContextualSwashes(::IUnknown* element, int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetContextualSwashes(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetContextualSwashes(::IUnknown* element, int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetContextualSwashes(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ContextualAlternatesProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContextualAlternatesProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetContextualAlternates(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetContextualAlternates(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetContextualAlternates(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetContextualAlternates(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StylisticAlternatesProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StylisticAlternatesProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStylisticAlternates(::IUnknown* element, int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetStylisticAlternates(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetStylisticAlternates(::IUnknown* element, int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStylisticAlternates(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StylisticSet1Property(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StylisticSet1Property());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStylisticSet1(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetStylisticSet1(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetStylisticSet1(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStylisticSet1(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StylisticSet2Property(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StylisticSet2Property());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStylisticSet2(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetStylisticSet2(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetStylisticSet2(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStylisticSet2(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StylisticSet3Property(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StylisticSet3Property());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStylisticSet3(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetStylisticSet3(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetStylisticSet3(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStylisticSet3(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StylisticSet4Property(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StylisticSet4Property());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStylisticSet4(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetStylisticSet4(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetStylisticSet4(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStylisticSet4(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StylisticSet5Property(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StylisticSet5Property());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStylisticSet5(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetStylisticSet5(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetStylisticSet5(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStylisticSet5(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StylisticSet6Property(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StylisticSet6Property());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStylisticSet6(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetStylisticSet6(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetStylisticSet6(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStylisticSet6(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StylisticSet7Property(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StylisticSet7Property());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStylisticSet7(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetStylisticSet7(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetStylisticSet7(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStylisticSet7(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StylisticSet8Property(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StylisticSet8Property());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStylisticSet8(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetStylisticSet8(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetStylisticSet8(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStylisticSet8(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StylisticSet9Property(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StylisticSet9Property());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStylisticSet9(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetStylisticSet9(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetStylisticSet9(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStylisticSet9(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StylisticSet10Property(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StylisticSet10Property());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStylisticSet10(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetStylisticSet10(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetStylisticSet10(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStylisticSet10(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StylisticSet11Property(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StylisticSet11Property());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStylisticSet11(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetStylisticSet11(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetStylisticSet11(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStylisticSet11(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StylisticSet12Property(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StylisticSet12Property());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStylisticSet12(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetStylisticSet12(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetStylisticSet12(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStylisticSet12(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StylisticSet13Property(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StylisticSet13Property());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStylisticSet13(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetStylisticSet13(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetStylisticSet13(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStylisticSet13(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StylisticSet14Property(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StylisticSet14Property());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStylisticSet14(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetStylisticSet14(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetStylisticSet14(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStylisticSet14(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StylisticSet15Property(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StylisticSet15Property());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStylisticSet15(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetStylisticSet15(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetStylisticSet15(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStylisticSet15(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StylisticSet16Property(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StylisticSet16Property());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStylisticSet16(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetStylisticSet16(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetStylisticSet16(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStylisticSet16(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StylisticSet17Property(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StylisticSet17Property());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStylisticSet17(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetStylisticSet17(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetStylisticSet17(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStylisticSet17(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StylisticSet18Property(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StylisticSet18Property());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStylisticSet18(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetStylisticSet18(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetStylisticSet18(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStylisticSet18(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StylisticSet19Property(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StylisticSet19Property());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStylisticSet19(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetStylisticSet19(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetStylisticSet19(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStylisticSet19(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StylisticSet20Property(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StylisticSet20Property());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetStylisticSet20(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetStylisticSet20(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetStylisticSet20(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetStylisticSet20(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CapitalsProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CapitalsProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCapitals(::IUnknown* element, abi_t<Windows::UI::Xaml::FontCapitals>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCapitals(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetCapitals(::IUnknown* element, abi_t<Windows::UI::Xaml::FontCapitals> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetCapitals(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<Windows::UI::Xaml::FontCapitals const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CapitalSpacingProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CapitalSpacingProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCapitalSpacing(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCapitalSpacing(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetCapitalSpacing(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetCapitalSpacing(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KerningProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KerningProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetKerning(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetKerning(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetKerning(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetKerning(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CaseSensitiveFormsProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CaseSensitiveFormsProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCaseSensitiveForms(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetCaseSensitiveForms(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetCaseSensitiveForms(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetCaseSensitiveForms(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_HistoricalFormsProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().HistoricalFormsProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetHistoricalForms(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetHistoricalForms(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetHistoricalForms(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetHistoricalForms(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FractionProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FractionProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetFraction(::IUnknown* element, abi_t<Windows::UI::Xaml::FontFraction>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetFraction(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetFraction(::IUnknown* element, abi_t<Windows::UI::Xaml::FontFraction> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFraction(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<Windows::UI::Xaml::FontFraction const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumeralStyleProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NumeralStyleProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetNumeralStyle(::IUnknown* element, abi_t<Windows::UI::Xaml::FontNumeralStyle>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetNumeralStyle(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetNumeralStyle(::IUnknown* element, abi_t<Windows::UI::Xaml::FontNumeralStyle> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetNumeralStyle(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<Windows::UI::Xaml::FontNumeralStyle const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NumeralAlignmentProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NumeralAlignmentProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetNumeralAlignment(::IUnknown* element, abi_t<Windows::UI::Xaml::FontNumeralAlignment>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetNumeralAlignment(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetNumeralAlignment(::IUnknown* element, abi_t<Windows::UI::Xaml::FontNumeralAlignment> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetNumeralAlignment(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<Windows::UI::Xaml::FontNumeralAlignment const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SlashedZeroProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SlashedZeroProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetSlashedZero(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetSlashedZero(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetSlashedZero(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetSlashedZero(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MathematicalGreekProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MathematicalGreekProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetMathematicalGreek(::IUnknown* element, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetMathematicalGreek(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetMathematicalGreek(::IUnknown* element, bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetMathematicalGreek(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_VariantsProperty(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().VariantsProperty());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetVariants(::IUnknown* element, abi_t<Windows::UI::Xaml::FontVariants>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetVariants(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetVariants(::IUnknown* element, abi_t<Windows::UI::Xaml::FontVariants> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetVariants(*reinterpret_cast<Windows::UI::Xaml::DependencyObject const*>(&element), *reinterpret_cast<Windows::UI::Xaml::FontVariants const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Xaml::Documents::IUnderline> : produce_base<D, Windows::UI::Xaml::Documents::IUnderline>
{};

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Documents {

inline Windows::UI::Xaml::DependencyProperty Block::TextAlignmentProperty()
{
    return get_activation_factory<Block, Windows::UI::Xaml::Documents::IBlockStatics>().TextAlignmentProperty();
}

inline Windows::UI::Xaml::DependencyProperty Block::LineHeightProperty()
{
    return get_activation_factory<Block, Windows::UI::Xaml::Documents::IBlockStatics>().LineHeightProperty();
}

inline Windows::UI::Xaml::DependencyProperty Block::LineStackingStrategyProperty()
{
    return get_activation_factory<Block, Windows::UI::Xaml::Documents::IBlockStatics>().LineStackingStrategyProperty();
}

inline Windows::UI::Xaml::DependencyProperty Block::MarginProperty()
{
    return get_activation_factory<Block, Windows::UI::Xaml::Documents::IBlockStatics>().MarginProperty();
}

inline Bold::Bold() :
    Bold(activate_instance<Bold>())
{}

inline Glyphs::Glyphs() :
    Glyphs(activate_instance<Glyphs>())
{}

inline Windows::UI::Xaml::DependencyProperty Glyphs::UnicodeStringProperty()
{
    return get_activation_factory<Glyphs, Windows::UI::Xaml::Documents::IGlyphsStatics>().UnicodeStringProperty();
}

inline Windows::UI::Xaml::DependencyProperty Glyphs::IndicesProperty()
{
    return get_activation_factory<Glyphs, Windows::UI::Xaml::Documents::IGlyphsStatics>().IndicesProperty();
}

inline Windows::UI::Xaml::DependencyProperty Glyphs::FontUriProperty()
{
    return get_activation_factory<Glyphs, Windows::UI::Xaml::Documents::IGlyphsStatics>().FontUriProperty();
}

inline Windows::UI::Xaml::DependencyProperty Glyphs::StyleSimulationsProperty()
{
    return get_activation_factory<Glyphs, Windows::UI::Xaml::Documents::IGlyphsStatics>().StyleSimulationsProperty();
}

inline Windows::UI::Xaml::DependencyProperty Glyphs::FontRenderingEmSizeProperty()
{
    return get_activation_factory<Glyphs, Windows::UI::Xaml::Documents::IGlyphsStatics>().FontRenderingEmSizeProperty();
}

inline Windows::UI::Xaml::DependencyProperty Glyphs::OriginXProperty()
{
    return get_activation_factory<Glyphs, Windows::UI::Xaml::Documents::IGlyphsStatics>().OriginXProperty();
}

inline Windows::UI::Xaml::DependencyProperty Glyphs::OriginYProperty()
{
    return get_activation_factory<Glyphs, Windows::UI::Xaml::Documents::IGlyphsStatics>().OriginYProperty();
}

inline Windows::UI::Xaml::DependencyProperty Glyphs::FillProperty()
{
    return get_activation_factory<Glyphs, Windows::UI::Xaml::Documents::IGlyphsStatics>().FillProperty();
}

inline Windows::UI::Xaml::DependencyProperty Glyphs::IsColorFontEnabledProperty()
{
    return get_activation_factory<Glyphs, Windows::UI::Xaml::Documents::IGlyphsStatics2>().IsColorFontEnabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty Glyphs::ColorFontPaletteIndexProperty()
{
    return get_activation_factory<Glyphs, Windows::UI::Xaml::Documents::IGlyphsStatics2>().ColorFontPaletteIndexProperty();
}

inline Hyperlink::Hyperlink() :
    Hyperlink(activate_instance<Hyperlink>())
{}

inline Windows::UI::Xaml::DependencyProperty Hyperlink::NavigateUriProperty()
{
    return get_activation_factory<Hyperlink, Windows::UI::Xaml::Documents::IHyperlinkStatics>().NavigateUriProperty();
}

inline Windows::UI::Xaml::DependencyProperty Hyperlink::UnderlineStyleProperty()
{
    return get_activation_factory<Hyperlink, Windows::UI::Xaml::Documents::IHyperlinkStatics2>().UnderlineStyleProperty();
}

inline Windows::UI::Xaml::DependencyProperty Hyperlink::XYFocusLeftProperty()
{
    return get_activation_factory<Hyperlink, Windows::UI::Xaml::Documents::IHyperlinkStatics3>().XYFocusLeftProperty();
}

inline Windows::UI::Xaml::DependencyProperty Hyperlink::XYFocusRightProperty()
{
    return get_activation_factory<Hyperlink, Windows::UI::Xaml::Documents::IHyperlinkStatics3>().XYFocusRightProperty();
}

inline Windows::UI::Xaml::DependencyProperty Hyperlink::XYFocusUpProperty()
{
    return get_activation_factory<Hyperlink, Windows::UI::Xaml::Documents::IHyperlinkStatics3>().XYFocusUpProperty();
}

inline Windows::UI::Xaml::DependencyProperty Hyperlink::XYFocusDownProperty()
{
    return get_activation_factory<Hyperlink, Windows::UI::Xaml::Documents::IHyperlinkStatics3>().XYFocusDownProperty();
}

inline Windows::UI::Xaml::DependencyProperty Hyperlink::ElementSoundModeProperty()
{
    return get_activation_factory<Hyperlink, Windows::UI::Xaml::Documents::IHyperlinkStatics3>().ElementSoundModeProperty();
}

inline Windows::UI::Xaml::DependencyProperty Hyperlink::FocusStateProperty()
{
    return get_activation_factory<Hyperlink, Windows::UI::Xaml::Documents::IHyperlinkStatics4>().FocusStateProperty();
}

inline Windows::UI::Xaml::DependencyProperty Hyperlink::XYFocusUpNavigationStrategyProperty()
{
    return get_activation_factory<Hyperlink, Windows::UI::Xaml::Documents::IHyperlinkStatics4>().XYFocusUpNavigationStrategyProperty();
}

inline Windows::UI::Xaml::DependencyProperty Hyperlink::XYFocusDownNavigationStrategyProperty()
{
    return get_activation_factory<Hyperlink, Windows::UI::Xaml::Documents::IHyperlinkStatics4>().XYFocusDownNavigationStrategyProperty();
}

inline Windows::UI::Xaml::DependencyProperty Hyperlink::XYFocusLeftNavigationStrategyProperty()
{
    return get_activation_factory<Hyperlink, Windows::UI::Xaml::Documents::IHyperlinkStatics4>().XYFocusLeftNavigationStrategyProperty();
}

inline Windows::UI::Xaml::DependencyProperty Hyperlink::XYFocusRightNavigationStrategyProperty()
{
    return get_activation_factory<Hyperlink, Windows::UI::Xaml::Documents::IHyperlinkStatics4>().XYFocusRightNavigationStrategyProperty();
}

inline InlineUIContainer::InlineUIContainer() :
    InlineUIContainer(activate_instance<InlineUIContainer>())
{}

inline Italic::Italic() :
    Italic(activate_instance<Italic>())
{}

inline LineBreak::LineBreak() :
    LineBreak(activate_instance<LineBreak>())
{}

inline Paragraph::Paragraph() :
    Paragraph(activate_instance<Paragraph>())
{}

inline Windows::UI::Xaml::DependencyProperty Paragraph::TextIndentProperty()
{
    return get_activation_factory<Paragraph, Windows::UI::Xaml::Documents::IParagraphStatics>().TextIndentProperty();
}

inline Run::Run() :
    Run(activate_instance<Run>())
{}

inline Windows::UI::Xaml::DependencyProperty Run::FlowDirectionProperty()
{
    return get_activation_factory<Run, Windows::UI::Xaml::Documents::IRunStatics>().FlowDirectionProperty();
}

inline Span::Span()
{
    Windows::Foundation::IInspectable outer, inner;
    impl_move(get_activation_factory<Span, Windows::UI::Xaml::Documents::ISpanFactory>().CreateInstance(outer, inner));
}

inline Windows::UI::Xaml::DependencyProperty TextElement::FontSizeProperty()
{
    return get_activation_factory<TextElement, Windows::UI::Xaml::Documents::ITextElementStatics>().FontSizeProperty();
}

inline Windows::UI::Xaml::DependencyProperty TextElement::FontFamilyProperty()
{
    return get_activation_factory<TextElement, Windows::UI::Xaml::Documents::ITextElementStatics>().FontFamilyProperty();
}

inline Windows::UI::Xaml::DependencyProperty TextElement::FontWeightProperty()
{
    return get_activation_factory<TextElement, Windows::UI::Xaml::Documents::ITextElementStatics>().FontWeightProperty();
}

inline Windows::UI::Xaml::DependencyProperty TextElement::FontStyleProperty()
{
    return get_activation_factory<TextElement, Windows::UI::Xaml::Documents::ITextElementStatics>().FontStyleProperty();
}

inline Windows::UI::Xaml::DependencyProperty TextElement::FontStretchProperty()
{
    return get_activation_factory<TextElement, Windows::UI::Xaml::Documents::ITextElementStatics>().FontStretchProperty();
}

inline Windows::UI::Xaml::DependencyProperty TextElement::CharacterSpacingProperty()
{
    return get_activation_factory<TextElement, Windows::UI::Xaml::Documents::ITextElementStatics>().CharacterSpacingProperty();
}

inline Windows::UI::Xaml::DependencyProperty TextElement::ForegroundProperty()
{
    return get_activation_factory<TextElement, Windows::UI::Xaml::Documents::ITextElementStatics>().ForegroundProperty();
}

inline Windows::UI::Xaml::DependencyProperty TextElement::LanguageProperty()
{
    return get_activation_factory<TextElement, Windows::UI::Xaml::Documents::ITextElementStatics>().LanguageProperty();
}

inline Windows::UI::Xaml::DependencyProperty TextElement::IsTextScaleFactorEnabledProperty()
{
    return get_activation_factory<TextElement, Windows::UI::Xaml::Documents::ITextElementStatics2>().IsTextScaleFactorEnabledProperty();
}

inline Windows::UI::Xaml::DependencyProperty TextElement::AllowFocusOnInteractionProperty()
{
    return get_activation_factory<TextElement, Windows::UI::Xaml::Documents::ITextElementStatics3>().AllowFocusOnInteractionProperty();
}

inline Windows::UI::Xaml::DependencyProperty TextElement::AccessKeyProperty()
{
    return get_activation_factory<TextElement, Windows::UI::Xaml::Documents::ITextElementStatics3>().AccessKeyProperty();
}

inline Windows::UI::Xaml::DependencyProperty TextElement::ExitDisplayModeOnAccessKeyInvokedProperty()
{
    return get_activation_factory<TextElement, Windows::UI::Xaml::Documents::ITextElementStatics3>().ExitDisplayModeOnAccessKeyInvokedProperty();
}

inline Windows::UI::Xaml::DependencyProperty TextElement::TextDecorationsProperty()
{
    return get_activation_factory<TextElement, Windows::UI::Xaml::Documents::ITextElementStatics4>().TextDecorationsProperty();
}

inline Windows::UI::Xaml::DependencyProperty TextElement::IsAccessKeyScopeProperty()
{
    return get_activation_factory<TextElement, Windows::UI::Xaml::Documents::ITextElementStatics4>().IsAccessKeyScopeProperty();
}

inline Windows::UI::Xaml::DependencyProperty TextElement::AccessKeyScopeOwnerProperty()
{
    return get_activation_factory<TextElement, Windows::UI::Xaml::Documents::ITextElementStatics4>().AccessKeyScopeOwnerProperty();
}

inline Windows::UI::Xaml::DependencyProperty TextElement::KeyTipPlacementModeProperty()
{
    return get_activation_factory<TextElement, Windows::UI::Xaml::Documents::ITextElementStatics4>().KeyTipPlacementModeProperty();
}

inline Windows::UI::Xaml::DependencyProperty TextElement::KeyTipHorizontalOffsetProperty()
{
    return get_activation_factory<TextElement, Windows::UI::Xaml::Documents::ITextElementStatics4>().KeyTipHorizontalOffsetProperty();
}

inline Windows::UI::Xaml::DependencyProperty TextElement::KeyTipVerticalOffsetProperty()
{
    return get_activation_factory<TextElement, Windows::UI::Xaml::Documents::ITextElementStatics4>().KeyTipVerticalOffsetProperty();
}

inline Windows::UI::Xaml::DependencyProperty Typography::AnnotationAlternatesProperty()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().AnnotationAlternatesProperty();
}

inline int32_t Typography::GetAnnotationAlternates(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetAnnotationAlternates(element);
}

inline void Typography::SetAnnotationAlternates(Windows::UI::Xaml::DependencyObject const& element, int32_t value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetAnnotationAlternates(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::EastAsianExpertFormsProperty()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().EastAsianExpertFormsProperty();
}

inline bool Typography::GetEastAsianExpertForms(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetEastAsianExpertForms(element);
}

inline void Typography::SetEastAsianExpertForms(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetEastAsianExpertForms(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::EastAsianLanguageProperty()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().EastAsianLanguageProperty();
}

inline Windows::UI::Xaml::FontEastAsianLanguage Typography::GetEastAsianLanguage(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetEastAsianLanguage(element);
}

inline void Typography::SetEastAsianLanguage(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontEastAsianLanguage const& value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetEastAsianLanguage(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::EastAsianWidthsProperty()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().EastAsianWidthsProperty();
}

inline Windows::UI::Xaml::FontEastAsianWidths Typography::GetEastAsianWidths(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetEastAsianWidths(element);
}

inline void Typography::SetEastAsianWidths(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontEastAsianWidths const& value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetEastAsianWidths(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::StandardLigaturesProperty()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().StandardLigaturesProperty();
}

inline bool Typography::GetStandardLigatures(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetStandardLigatures(element);
}

inline void Typography::SetStandardLigatures(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetStandardLigatures(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::ContextualLigaturesProperty()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().ContextualLigaturesProperty();
}

inline bool Typography::GetContextualLigatures(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetContextualLigatures(element);
}

inline void Typography::SetContextualLigatures(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetContextualLigatures(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::DiscretionaryLigaturesProperty()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().DiscretionaryLigaturesProperty();
}

inline bool Typography::GetDiscretionaryLigatures(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetDiscretionaryLigatures(element);
}

inline void Typography::SetDiscretionaryLigatures(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetDiscretionaryLigatures(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::HistoricalLigaturesProperty()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().HistoricalLigaturesProperty();
}

inline bool Typography::GetHistoricalLigatures(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetHistoricalLigatures(element);
}

inline void Typography::SetHistoricalLigatures(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetHistoricalLigatures(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::StandardSwashesProperty()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().StandardSwashesProperty();
}

inline int32_t Typography::GetStandardSwashes(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetStandardSwashes(element);
}

inline void Typography::SetStandardSwashes(Windows::UI::Xaml::DependencyObject const& element, int32_t value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetStandardSwashes(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::ContextualSwashesProperty()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().ContextualSwashesProperty();
}

inline int32_t Typography::GetContextualSwashes(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetContextualSwashes(element);
}

inline void Typography::SetContextualSwashes(Windows::UI::Xaml::DependencyObject const& element, int32_t value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetContextualSwashes(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::ContextualAlternatesProperty()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().ContextualAlternatesProperty();
}

inline bool Typography::GetContextualAlternates(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetContextualAlternates(element);
}

inline void Typography::SetContextualAlternates(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetContextualAlternates(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::StylisticAlternatesProperty()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().StylisticAlternatesProperty();
}

inline int32_t Typography::GetStylisticAlternates(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetStylisticAlternates(element);
}

inline void Typography::SetStylisticAlternates(Windows::UI::Xaml::DependencyObject const& element, int32_t value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetStylisticAlternates(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::StylisticSet1Property()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().StylisticSet1Property();
}

inline bool Typography::GetStylisticSet1(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetStylisticSet1(element);
}

inline void Typography::SetStylisticSet1(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetStylisticSet1(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::StylisticSet2Property()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().StylisticSet2Property();
}

inline bool Typography::GetStylisticSet2(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetStylisticSet2(element);
}

inline void Typography::SetStylisticSet2(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetStylisticSet2(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::StylisticSet3Property()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().StylisticSet3Property();
}

inline bool Typography::GetStylisticSet3(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetStylisticSet3(element);
}

inline void Typography::SetStylisticSet3(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetStylisticSet3(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::StylisticSet4Property()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().StylisticSet4Property();
}

inline bool Typography::GetStylisticSet4(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetStylisticSet4(element);
}

inline void Typography::SetStylisticSet4(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetStylisticSet4(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::StylisticSet5Property()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().StylisticSet5Property();
}

inline bool Typography::GetStylisticSet5(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetStylisticSet5(element);
}

inline void Typography::SetStylisticSet5(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetStylisticSet5(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::StylisticSet6Property()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().StylisticSet6Property();
}

inline bool Typography::GetStylisticSet6(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetStylisticSet6(element);
}

inline void Typography::SetStylisticSet6(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetStylisticSet6(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::StylisticSet7Property()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().StylisticSet7Property();
}

inline bool Typography::GetStylisticSet7(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetStylisticSet7(element);
}

inline void Typography::SetStylisticSet7(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetStylisticSet7(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::StylisticSet8Property()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().StylisticSet8Property();
}

inline bool Typography::GetStylisticSet8(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetStylisticSet8(element);
}

inline void Typography::SetStylisticSet8(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetStylisticSet8(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::StylisticSet9Property()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().StylisticSet9Property();
}

inline bool Typography::GetStylisticSet9(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetStylisticSet9(element);
}

inline void Typography::SetStylisticSet9(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetStylisticSet9(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::StylisticSet10Property()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().StylisticSet10Property();
}

inline bool Typography::GetStylisticSet10(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetStylisticSet10(element);
}

inline void Typography::SetStylisticSet10(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetStylisticSet10(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::StylisticSet11Property()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().StylisticSet11Property();
}

inline bool Typography::GetStylisticSet11(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetStylisticSet11(element);
}

inline void Typography::SetStylisticSet11(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetStylisticSet11(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::StylisticSet12Property()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().StylisticSet12Property();
}

inline bool Typography::GetStylisticSet12(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetStylisticSet12(element);
}

inline void Typography::SetStylisticSet12(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetStylisticSet12(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::StylisticSet13Property()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().StylisticSet13Property();
}

inline bool Typography::GetStylisticSet13(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetStylisticSet13(element);
}

inline void Typography::SetStylisticSet13(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetStylisticSet13(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::StylisticSet14Property()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().StylisticSet14Property();
}

inline bool Typography::GetStylisticSet14(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetStylisticSet14(element);
}

inline void Typography::SetStylisticSet14(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetStylisticSet14(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::StylisticSet15Property()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().StylisticSet15Property();
}

inline bool Typography::GetStylisticSet15(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetStylisticSet15(element);
}

inline void Typography::SetStylisticSet15(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetStylisticSet15(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::StylisticSet16Property()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().StylisticSet16Property();
}

inline bool Typography::GetStylisticSet16(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetStylisticSet16(element);
}

inline void Typography::SetStylisticSet16(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetStylisticSet16(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::StylisticSet17Property()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().StylisticSet17Property();
}

inline bool Typography::GetStylisticSet17(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetStylisticSet17(element);
}

inline void Typography::SetStylisticSet17(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetStylisticSet17(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::StylisticSet18Property()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().StylisticSet18Property();
}

inline bool Typography::GetStylisticSet18(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetStylisticSet18(element);
}

inline void Typography::SetStylisticSet18(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetStylisticSet18(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::StylisticSet19Property()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().StylisticSet19Property();
}

inline bool Typography::GetStylisticSet19(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetStylisticSet19(element);
}

inline void Typography::SetStylisticSet19(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetStylisticSet19(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::StylisticSet20Property()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().StylisticSet20Property();
}

inline bool Typography::GetStylisticSet20(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetStylisticSet20(element);
}

inline void Typography::SetStylisticSet20(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetStylisticSet20(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::CapitalsProperty()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().CapitalsProperty();
}

inline Windows::UI::Xaml::FontCapitals Typography::GetCapitals(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetCapitals(element);
}

inline void Typography::SetCapitals(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontCapitals const& value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetCapitals(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::CapitalSpacingProperty()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().CapitalSpacingProperty();
}

inline bool Typography::GetCapitalSpacing(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetCapitalSpacing(element);
}

inline void Typography::SetCapitalSpacing(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetCapitalSpacing(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::KerningProperty()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().KerningProperty();
}

inline bool Typography::GetKerning(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetKerning(element);
}

inline void Typography::SetKerning(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetKerning(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::CaseSensitiveFormsProperty()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().CaseSensitiveFormsProperty();
}

inline bool Typography::GetCaseSensitiveForms(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetCaseSensitiveForms(element);
}

inline void Typography::SetCaseSensitiveForms(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetCaseSensitiveForms(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::HistoricalFormsProperty()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().HistoricalFormsProperty();
}

inline bool Typography::GetHistoricalForms(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetHistoricalForms(element);
}

inline void Typography::SetHistoricalForms(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetHistoricalForms(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::FractionProperty()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().FractionProperty();
}

inline Windows::UI::Xaml::FontFraction Typography::GetFraction(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetFraction(element);
}

inline void Typography::SetFraction(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontFraction const& value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetFraction(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::NumeralStyleProperty()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().NumeralStyleProperty();
}

inline Windows::UI::Xaml::FontNumeralStyle Typography::GetNumeralStyle(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetNumeralStyle(element);
}

inline void Typography::SetNumeralStyle(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontNumeralStyle const& value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetNumeralStyle(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::NumeralAlignmentProperty()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().NumeralAlignmentProperty();
}

inline Windows::UI::Xaml::FontNumeralAlignment Typography::GetNumeralAlignment(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetNumeralAlignment(element);
}

inline void Typography::SetNumeralAlignment(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontNumeralAlignment const& value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetNumeralAlignment(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::SlashedZeroProperty()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SlashedZeroProperty();
}

inline bool Typography::GetSlashedZero(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetSlashedZero(element);
}

inline void Typography::SetSlashedZero(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetSlashedZero(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::MathematicalGreekProperty()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().MathematicalGreekProperty();
}

inline bool Typography::GetMathematicalGreek(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetMathematicalGreek(element);
}

inline void Typography::SetMathematicalGreek(Windows::UI::Xaml::DependencyObject const& element, bool value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetMathematicalGreek(element, value);
}

inline Windows::UI::Xaml::DependencyProperty Typography::VariantsProperty()
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().VariantsProperty();
}

inline Windows::UI::Xaml::FontVariants Typography::GetVariants(Windows::UI::Xaml::DependencyObject const& element)
{
    return get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().GetVariants(element);
}

inline void Typography::SetVariants(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontVariants const& value)
{
    get_activation_factory<Typography, Windows::UI::Xaml::Documents::ITypographyStatics>().SetVariants(element, value);
}

inline Underline::Underline() :
    Underline(activate_instance<Underline>())
{}

template <typename D> void ITextElementOverridesT<D>::OnDisconnectVisualChildren() const
{
    return shim().template as<ITextElementOverrides>().OnDisconnectVisualChildren();
}

template <typename D, typename ... Interfaces>
struct BlockT :
    implements<D, Windows::UI::Xaml::Documents::ITextElementOverrides, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Documents::IBlock, Windows::UI::Xaml::Documents::ITextElement, Windows::UI::Xaml::Documents::ITextElement2, Windows::UI::Xaml::Documents::ITextElement3, Windows::UI::Xaml::Documents::ITextElement4, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Documents::ITextElementOverridesT<D>
{
    using composable = Block;

protected:
    BlockT()
    {
        get_activation_factory<Windows::UI::Xaml::Documents::Block, Windows::UI::Xaml::Documents::IBlockFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct InlineT :
    implements<D, Windows::UI::Xaml::Documents::ITextElementOverrides, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Documents::IInline, Windows::UI::Xaml::Documents::ITextElement, Windows::UI::Xaml::Documents::ITextElement2, Windows::UI::Xaml::Documents::ITextElement3, Windows::UI::Xaml::Documents::ITextElement4, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Documents::ITextElementOverridesT<D>
{
    using composable = Inline;

protected:
    InlineT()
    {
        get_activation_factory<Windows::UI::Xaml::Documents::Inline, Windows::UI::Xaml::Documents::IInlineFactory>().CreateInstance(*this, this->m_inner);
    }
};

template <typename D, typename ... Interfaces>
struct SpanT :
    implements<D, Windows::UI::Xaml::Documents::ITextElementOverrides, composing, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Documents::ISpan, Windows::UI::Xaml::Documents::IInline, Windows::UI::Xaml::Documents::ITextElement, Windows::UI::Xaml::Documents::ITextElement2, Windows::UI::Xaml::Documents::ITextElement3, Windows::UI::Xaml::Documents::ITextElement4, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>,
    Windows::UI::Xaml::Documents::ITextElementOverridesT<D>
{
    using composable = Span;

protected:
    SpanT()
    {
        get_activation_factory<Windows::UI::Xaml::Documents::Span, Windows::UI::Xaml::Documents::ISpanFactory>().CreateInstance(*this, this->m_inner);
    }
};

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Xaml::Documents::IBlock> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::IBlock> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::IBlockFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::IBlockFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::IBlockStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::IBlockStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::IBold> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::IBold> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::IGlyphs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::IGlyphs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::IGlyphs2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::IGlyphs2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::IGlyphsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::IGlyphsStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::IGlyphsStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::IGlyphsStatics2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::IHyperlink> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::IHyperlink> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::IHyperlink2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::IHyperlink2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::IHyperlink3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::IHyperlink3> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::IHyperlink4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::IHyperlink4> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::IHyperlinkClickEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::IHyperlinkClickEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::IHyperlinkStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::IHyperlinkStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::IHyperlinkStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::IHyperlinkStatics2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::IHyperlinkStatics3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::IHyperlinkStatics3> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::IHyperlinkStatics4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::IHyperlinkStatics4> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::IInline> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::IInline> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::IInlineFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::IInlineFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::IInlineUIContainer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::IInlineUIContainer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::IItalic> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::IItalic> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::ILineBreak> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::ILineBreak> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::IParagraph> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::IParagraph> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::IParagraphStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::IParagraphStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::IRun> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::IRun> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::IRunStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::IRunStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::ISpan> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::ISpan> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::ISpanFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::ISpanFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::ITextElement> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::ITextElement> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::ITextElement2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::ITextElement2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::ITextElement3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::ITextElement3> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::ITextElement4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::ITextElement4> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::ITextElementFactory> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::ITextElementFactory> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::ITextElementOverrides> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::ITextElementOverrides> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::ITextElementStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::ITextElementStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::ITextElementStatics2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::ITextElementStatics2> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::ITextElementStatics3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::ITextElementStatics3> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::ITextElementStatics4> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::ITextElementStatics4> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::ITextPointer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::ITextPointer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::ITypography> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::ITypography> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::ITypographyStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::ITypographyStatics> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::IUnderline> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::IUnderline> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::Block> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::Block> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::BlockCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::BlockCollection> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::Bold> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::Bold> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::Glyphs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::Glyphs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::Hyperlink> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::Hyperlink> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::HyperlinkClickEventArgs> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::HyperlinkClickEventArgs> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::Inline> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::Inline> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::InlineCollection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::InlineCollection> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::InlineUIContainer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::InlineUIContainer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::Italic> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::Italic> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::LineBreak> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::LineBreak> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::Paragraph> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::Paragraph> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::Run> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::Run> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::Span> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::Span> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::TextElement> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::TextElement> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::TextPointer> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::TextPointer> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::Typography> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::Typography> {};

template<> struct hash<winrt::Windows::UI::Xaml::Documents::Underline> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Xaml::Documents::Underline> {};

}

WINRT_WARNING_POP
