// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.UI.Xaml.Documents.1.h"
#include "Windows.UI.Xaml.2.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_3ee78a34_160e_50ff_b5aa_09f263a669f8
#define WINRT_GENERIC_3ee78a34_160e_50ff_b5aa_09f263a669f8
template <> struct __declspec(uuid("3ee78a34-160e-50ff-b5aa-09f263a669f8")) __declspec(novtable) IVector<Windows::UI::Xaml::Documents::Block> : impl_IVector<Windows::UI::Xaml::Documents::Block> {};
#endif

#ifndef WINRT_GENERIC_f7023b9a_e6d1_5e2d_8f41_b28c33323e04
#define WINRT_GENERIC_f7023b9a_e6d1_5e2d_8f41_b28c33323e04
template <> struct __declspec(uuid("f7023b9a-e6d1-5e2d-8f41-b28c33323e04")) __declspec(novtable) IIterable<Windows::UI::Xaml::Documents::Block> : impl_IIterable<Windows::UI::Xaml::Documents::Block> {};
#endif

#ifndef WINRT_GENERIC_92ec9252_8ee3_55d6_84b4_30b635077778
#define WINRT_GENERIC_92ec9252_8ee3_55d6_84b4_30b635077778
template <> struct __declspec(uuid("92ec9252-8ee3-55d6-84b4-30b635077778")) __declspec(novtable) IVector<Windows::UI::Xaml::Documents::Inline> : impl_IVector<Windows::UI::Xaml::Documents::Inline> {};
#endif

#ifndef WINRT_GENERIC_e1d2b910_18c2_5906_8f8a_d62a63f93f18
#define WINRT_GENERIC_e1d2b910_18c2_5906_8f8a_d62a63f93f18
template <> struct __declspec(uuid("e1d2b910-18c2-5906-8f8a-d62a63f93f18")) __declspec(novtable) IIterable<Windows::UI::Xaml::Documents::Inline> : impl_IIterable<Windows::UI::Xaml::Documents::Inline> {};
#endif


}

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_5fead0d2_e657_5aef_a91b_7f52ead17fe3
#define WINRT_GENERIC_5fead0d2_e657_5aef_a91b_7f52ead17fe3
template <> struct __declspec(uuid("5fead0d2-e657-5aef-a91b-7f52ead17fe3")) __declspec(novtable) TypedEventHandler<Windows::UI::Xaml::Documents::Hyperlink, Windows::UI::Xaml::Documents::HyperlinkClickEventArgs> : impl_TypedEventHandler<Windows::UI::Xaml::Documents::Hyperlink, Windows::UI::Xaml::Documents::HyperlinkClickEventArgs> {};
#endif


}

namespace ABI::Windows::Foundation::Collections {

#ifndef WINRT_GENERIC_798d518e_a9f8_5fc7_8ccc_2a49069aba05
#define WINRT_GENERIC_798d518e_a9f8_5fc7_8ccc_2a49069aba05
template <> struct __declspec(uuid("798d518e-a9f8-5fc7-8ccc-2a49069aba05")) __declspec(novtable) IIterator<Windows::UI::Xaml::Documents::Block> : impl_IIterator<Windows::UI::Xaml::Documents::Block> {};
#endif

#ifndef WINRT_GENERIC_995f73c4_7cf8_5b59_a0fb_7e0c6477172e
#define WINRT_GENERIC_995f73c4_7cf8_5b59_a0fb_7e0c6477172e
template <> struct __declspec(uuid("995f73c4-7cf8-5b59-a0fb-7e0c6477172e")) __declspec(novtable) IVectorView<Windows::UI::Xaml::Documents::Block> : impl_IVectorView<Windows::UI::Xaml::Documents::Block> {};
#endif

#ifndef WINRT_GENERIC_f80dc964_2542_5c6a_ba65_b04824b5ed75
#define WINRT_GENERIC_f80dc964_2542_5c6a_ba65_b04824b5ed75
template <> struct __declspec(uuid("f80dc964-2542-5c6a-ba65-b04824b5ed75")) __declspec(novtable) IIterator<Windows::UI::Xaml::Documents::Inline> : impl_IIterator<Windows::UI::Xaml::Documents::Inline> {};
#endif

#ifndef WINRT_GENERIC_c2dd082f_8cb4_51d6_b91b_7e2377780cee
#define WINRT_GENERIC_c2dd082f_8cb4_51d6_b91b_7e2377780cee
template <> struct __declspec(uuid("c2dd082f-8cb4-51d6-b91b-7e2377780cee")) __declspec(novtable) IVectorView<Windows::UI::Xaml::Documents::Inline> : impl_IVectorView<Windows::UI::Xaml::Documents::Inline> {};
#endif


}

namespace Windows::UI::Xaml::Documents {

template <typename D>
struct WINRT_EBO impl_IBlock
{
    Windows::UI::Xaml::TextAlignment TextAlignment() const;
    void TextAlignment(Windows::UI::Xaml::TextAlignment value) const;
    double LineHeight() const;
    void LineHeight(double value) const;
    Windows::UI::Xaml::LineStackingStrategy LineStackingStrategy() const;
    void LineStackingStrategy(Windows::UI::Xaml::LineStackingStrategy value) const;
    Windows::UI::Xaml::Thickness Margin() const;
    void Margin(const Windows::UI::Xaml::Thickness & value) const;
};

template <typename D>
struct WINRT_EBO impl_IBlockFactory
{
    Windows::UI::Xaml::Documents::Block CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
struct WINRT_EBO impl_IBlockStatics
{
    Windows::UI::Xaml::DependencyProperty TextAlignmentProperty() const;
    Windows::UI::Xaml::DependencyProperty LineHeightProperty() const;
    Windows::UI::Xaml::DependencyProperty LineStackingStrategyProperty() const;
    Windows::UI::Xaml::DependencyProperty MarginProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IBold
{
};

template <typename D>
struct WINRT_EBO impl_IGlyphs
{
    hstring UnicodeString() const;
    void UnicodeString(hstring_ref value) const;
    hstring Indices() const;
    void Indices(hstring_ref value) const;
    Windows::Foundation::Uri FontUri() const;
    void FontUri(const Windows::Foundation::Uri & value) const;
    Windows::UI::Xaml::Media::StyleSimulations StyleSimulations() const;
    void StyleSimulations(Windows::UI::Xaml::Media::StyleSimulations value) const;
    double FontRenderingEmSize() const;
    void FontRenderingEmSize(double value) const;
    double OriginX() const;
    void OriginX(double value) const;
    double OriginY() const;
    void OriginY(double value) const;
    Windows::UI::Xaml::Media::Brush Fill() const;
    void Fill(const Windows::UI::Xaml::Media::Brush & value) const;
};

template <typename D>
struct WINRT_EBO impl_IGlyphs2
{
    bool IsColorFontEnabled() const;
    void IsColorFontEnabled(bool value) const;
    int32_t ColorFontPaletteIndex() const;
    void ColorFontPaletteIndex(int32_t value) const;
};

template <typename D>
struct WINRT_EBO impl_IGlyphsStatics
{
    Windows::UI::Xaml::DependencyProperty UnicodeStringProperty() const;
    Windows::UI::Xaml::DependencyProperty IndicesProperty() const;
    Windows::UI::Xaml::DependencyProperty FontUriProperty() const;
    Windows::UI::Xaml::DependencyProperty StyleSimulationsProperty() const;
    Windows::UI::Xaml::DependencyProperty FontRenderingEmSizeProperty() const;
    Windows::UI::Xaml::DependencyProperty OriginXProperty() const;
    Windows::UI::Xaml::DependencyProperty OriginYProperty() const;
    Windows::UI::Xaml::DependencyProperty FillProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IGlyphsStatics2
{
    Windows::UI::Xaml::DependencyProperty IsColorFontEnabledProperty() const;
    Windows::UI::Xaml::DependencyProperty ColorFontPaletteIndexProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IHyperlink
{
    Windows::Foundation::Uri NavigateUri() const;
    void NavigateUri(const Windows::Foundation::Uri & value) const;
    event_token Click(const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Documents::Hyperlink, Windows::UI::Xaml::Documents::HyperlinkClickEventArgs> & value) const;
    using Click_revoker = event_revoker<IHyperlink>;
    Click_revoker Click(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Documents::Hyperlink, Windows::UI::Xaml::Documents::HyperlinkClickEventArgs> & value) const;
    void Click(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_IHyperlink2
{
    Windows::UI::Xaml::Documents::UnderlineStyle UnderlineStyle() const;
    void UnderlineStyle(Windows::UI::Xaml::Documents::UnderlineStyle value) const;
};

template <typename D>
struct WINRT_EBO impl_IHyperlink3
{
    Windows::UI::Xaml::DependencyObject XYFocusLeft() const;
    void XYFocusLeft(const Windows::UI::Xaml::DependencyObject & value) const;
    Windows::UI::Xaml::DependencyObject XYFocusRight() const;
    void XYFocusRight(const Windows::UI::Xaml::DependencyObject & value) const;
    Windows::UI::Xaml::DependencyObject XYFocusUp() const;
    void XYFocusUp(const Windows::UI::Xaml::DependencyObject & value) const;
    Windows::UI::Xaml::DependencyObject XYFocusDown() const;
    void XYFocusDown(const Windows::UI::Xaml::DependencyObject & value) const;
    Windows::UI::Xaml::ElementSoundMode ElementSoundMode() const;
    void ElementSoundMode(Windows::UI::Xaml::ElementSoundMode value) const;
};

template <typename D>
struct WINRT_EBO impl_IHyperlinkClickEventArgs
{
};

template <typename D>
struct WINRT_EBO impl_IHyperlinkStatics
{
    Windows::UI::Xaml::DependencyProperty NavigateUriProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IHyperlinkStatics2
{
    Windows::UI::Xaml::DependencyProperty UnderlineStyleProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IHyperlinkStatics3
{
    Windows::UI::Xaml::DependencyProperty XYFocusLeftProperty() const;
    Windows::UI::Xaml::DependencyProperty XYFocusRightProperty() const;
    Windows::UI::Xaml::DependencyProperty XYFocusUpProperty() const;
    Windows::UI::Xaml::DependencyProperty XYFocusDownProperty() const;
    Windows::UI::Xaml::DependencyProperty ElementSoundModeProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IInline
{
};

template <typename D>
struct WINRT_EBO impl_IInlineFactory
{
    Windows::UI::Xaml::Documents::Inline CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
struct WINRT_EBO impl_IInlineUIContainer
{
    Windows::UI::Xaml::UIElement Child() const;
    void Child(const Windows::UI::Xaml::UIElement & value) const;
};

template <typename D>
struct WINRT_EBO impl_IItalic
{
};

template <typename D>
struct WINRT_EBO impl_ILineBreak
{
};

template <typename D>
struct WINRT_EBO impl_IParagraph
{
    Windows::UI::Xaml::Documents::InlineCollection Inlines() const;
    double TextIndent() const;
    void TextIndent(double value) const;
};

template <typename D>
struct WINRT_EBO impl_IParagraphStatics
{
    Windows::UI::Xaml::DependencyProperty TextIndentProperty() const;
};

template <typename D>
struct WINRT_EBO impl_IRun
{
    hstring Text() const;
    void Text(hstring_ref value) const;
    Windows::UI::Xaml::FlowDirection FlowDirection() const;
    void FlowDirection(Windows::UI::Xaml::FlowDirection value) const;
};

template <typename D>
struct WINRT_EBO impl_IRunStatics
{
    Windows::UI::Xaml::DependencyProperty FlowDirectionProperty() const;
};

template <typename D>
struct WINRT_EBO impl_ISpan
{
    Windows::UI::Xaml::Documents::InlineCollection Inlines() const;
    void Inlines(const Windows::UI::Xaml::Documents::InlineCollection & value) const;
};

template <typename D>
struct WINRT_EBO impl_ISpanFactory
{
    Windows::UI::Xaml::Documents::Span CreateInstance(const Windows::IInspectable & outer, Windows::IInspectable & inner) const;
};

template <typename D>
struct WINRT_EBO impl_ITextElement
{
    hstring Name() const;
    double FontSize() const;
    void FontSize(double value) const;
    Windows::UI::Xaml::Media::FontFamily FontFamily() const;
    void FontFamily(const Windows::UI::Xaml::Media::FontFamily & value) const;
    Windows::UI::Text::FontWeight FontWeight() const;
    void FontWeight(const Windows::UI::Text::FontWeight & value) const;
    Windows::UI::Text::FontStyle FontStyle() const;
    void FontStyle(Windows::UI::Text::FontStyle value) const;
    Windows::UI::Text::FontStretch FontStretch() const;
    void FontStretch(Windows::UI::Text::FontStretch value) const;
    int32_t CharacterSpacing() const;
    void CharacterSpacing(int32_t value) const;
    Windows::UI::Xaml::Media::Brush Foreground() const;
    void Foreground(const Windows::UI::Xaml::Media::Brush & value) const;
    hstring Language() const;
    void Language(hstring_ref value) const;
    Windows::UI::Xaml::Documents::TextPointer ContentStart() const;
    Windows::UI::Xaml::Documents::TextPointer ContentEnd() const;
    Windows::UI::Xaml::Documents::TextPointer ElementStart() const;
    Windows::UI::Xaml::Documents::TextPointer ElementEnd() const;
    Windows::IInspectable FindName(hstring_ref name) const;
};

template <typename D>
struct WINRT_EBO impl_ITextElement2
{
    bool IsTextScaleFactorEnabled() const;
    void IsTextScaleFactorEnabled(bool value) const;
};

template <typename D>
struct WINRT_EBO impl_ITextElement3
{
    bool AllowFocusOnInteraction() const;
    void AllowFocusOnInteraction(bool value) const;
    hstring AccessKey() const;
    void AccessKey(hstring_ref value) const;
    bool ExitDisplayModeOnAccessKeyInvoked() const;
    void ExitDisplayModeOnAccessKeyInvoked(bool value) const;
};

template <typename D>
struct WINRT_EBO impl_ITextElementFactory
{
};

template <typename D>
struct WINRT_EBO impl_ITextElementOverrides
{
    void OnDisconnectVisualChildren() const;
};

template <typename D>
struct WINRT_EBO impl_ITextElementStatics
{
    Windows::UI::Xaml::DependencyProperty FontSizeProperty() const;
    Windows::UI::Xaml::DependencyProperty FontFamilyProperty() const;
    Windows::UI::Xaml::DependencyProperty FontWeightProperty() const;
    Windows::UI::Xaml::DependencyProperty FontStyleProperty() const;
    Windows::UI::Xaml::DependencyProperty FontStretchProperty() const;
    Windows::UI::Xaml::DependencyProperty CharacterSpacingProperty() const;
    Windows::UI::Xaml::DependencyProperty ForegroundProperty() const;
    Windows::UI::Xaml::DependencyProperty LanguageProperty() const;
};

template <typename D>
struct WINRT_EBO impl_ITextElementStatics2
{
    Windows::UI::Xaml::DependencyProperty IsTextScaleFactorEnabledProperty() const;
};

template <typename D>
struct WINRT_EBO impl_ITextElementStatics3
{
    Windows::UI::Xaml::DependencyProperty AllowFocusOnInteractionProperty() const;
    Windows::UI::Xaml::DependencyProperty AccessKeyProperty() const;
    Windows::UI::Xaml::DependencyProperty ExitDisplayModeOnAccessKeyInvokedProperty() const;
};

template <typename D>
struct WINRT_EBO impl_ITextPointer
{
    Windows::UI::Xaml::DependencyObject Parent() const;
    Windows::UI::Xaml::FrameworkElement VisualParent() const;
    Windows::UI::Xaml::Documents::LogicalDirection LogicalDirection() const;
    int32_t Offset() const;
    Windows::Foundation::Rect GetCharacterRect(Windows::UI::Xaml::Documents::LogicalDirection direction) const;
    Windows::UI::Xaml::Documents::TextPointer GetPositionAtOffset(int32_t offset, Windows::UI::Xaml::Documents::LogicalDirection direction) const;
};

template <typename D>
struct WINRT_EBO impl_ITypography
{
};

template <typename D>
struct WINRT_EBO impl_ITypographyStatics
{
    Windows::UI::Xaml::DependencyProperty AnnotationAlternatesProperty() const;
    int32_t GetAnnotationAlternates(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetAnnotationAlternates(const Windows::UI::Xaml::DependencyObject & element, int32_t value) const;
    Windows::UI::Xaml::DependencyProperty EastAsianExpertFormsProperty() const;
    bool GetEastAsianExpertForms(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetEastAsianExpertForms(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty EastAsianLanguageProperty() const;
    Windows::UI::Xaml::FontEastAsianLanguage GetEastAsianLanguage(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetEastAsianLanguage(const Windows::UI::Xaml::DependencyObject & element, Windows::UI::Xaml::FontEastAsianLanguage value) const;
    Windows::UI::Xaml::DependencyProperty EastAsianWidthsProperty() const;
    Windows::UI::Xaml::FontEastAsianWidths GetEastAsianWidths(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetEastAsianWidths(const Windows::UI::Xaml::DependencyObject & element, Windows::UI::Xaml::FontEastAsianWidths value) const;
    Windows::UI::Xaml::DependencyProperty StandardLigaturesProperty() const;
    bool GetStandardLigatures(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetStandardLigatures(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty ContextualLigaturesProperty() const;
    bool GetContextualLigatures(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetContextualLigatures(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty DiscretionaryLigaturesProperty() const;
    bool GetDiscretionaryLigatures(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetDiscretionaryLigatures(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty HistoricalLigaturesProperty() const;
    bool GetHistoricalLigatures(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetHistoricalLigatures(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StandardSwashesProperty() const;
    int32_t GetStandardSwashes(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetStandardSwashes(const Windows::UI::Xaml::DependencyObject & element, int32_t value) const;
    Windows::UI::Xaml::DependencyProperty ContextualSwashesProperty() const;
    int32_t GetContextualSwashes(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetContextualSwashes(const Windows::UI::Xaml::DependencyObject & element, int32_t value) const;
    Windows::UI::Xaml::DependencyProperty ContextualAlternatesProperty() const;
    bool GetContextualAlternates(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetContextualAlternates(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticAlternatesProperty() const;
    int32_t GetStylisticAlternates(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetStylisticAlternates(const Windows::UI::Xaml::DependencyObject & element, int32_t value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet1Property() const;
    bool GetStylisticSet1(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetStylisticSet1(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet2Property() const;
    bool GetStylisticSet2(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetStylisticSet2(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet3Property() const;
    bool GetStylisticSet3(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetStylisticSet3(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet4Property() const;
    bool GetStylisticSet4(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetStylisticSet4(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet5Property() const;
    bool GetStylisticSet5(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetStylisticSet5(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet6Property() const;
    bool GetStylisticSet6(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetStylisticSet6(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet7Property() const;
    bool GetStylisticSet7(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetStylisticSet7(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet8Property() const;
    bool GetStylisticSet8(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetStylisticSet8(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet9Property() const;
    bool GetStylisticSet9(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetStylisticSet9(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet10Property() const;
    bool GetStylisticSet10(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetStylisticSet10(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet11Property() const;
    bool GetStylisticSet11(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetStylisticSet11(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet12Property() const;
    bool GetStylisticSet12(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetStylisticSet12(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet13Property() const;
    bool GetStylisticSet13(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetStylisticSet13(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet14Property() const;
    bool GetStylisticSet14(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetStylisticSet14(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet15Property() const;
    bool GetStylisticSet15(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetStylisticSet15(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet16Property() const;
    bool GetStylisticSet16(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetStylisticSet16(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet17Property() const;
    bool GetStylisticSet17(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetStylisticSet17(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet18Property() const;
    bool GetStylisticSet18(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetStylisticSet18(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet19Property() const;
    bool GetStylisticSet19(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetStylisticSet19(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet20Property() const;
    bool GetStylisticSet20(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetStylisticSet20(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty CapitalsProperty() const;
    Windows::UI::Xaml::FontCapitals GetCapitals(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetCapitals(const Windows::UI::Xaml::DependencyObject & element, Windows::UI::Xaml::FontCapitals value) const;
    Windows::UI::Xaml::DependencyProperty CapitalSpacingProperty() const;
    bool GetCapitalSpacing(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetCapitalSpacing(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty KerningProperty() const;
    bool GetKerning(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetKerning(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty CaseSensitiveFormsProperty() const;
    bool GetCaseSensitiveForms(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetCaseSensitiveForms(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty HistoricalFormsProperty() const;
    bool GetHistoricalForms(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetHistoricalForms(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty FractionProperty() const;
    Windows::UI::Xaml::FontFraction GetFraction(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetFraction(const Windows::UI::Xaml::DependencyObject & element, Windows::UI::Xaml::FontFraction value) const;
    Windows::UI::Xaml::DependencyProperty NumeralStyleProperty() const;
    Windows::UI::Xaml::FontNumeralStyle GetNumeralStyle(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetNumeralStyle(const Windows::UI::Xaml::DependencyObject & element, Windows::UI::Xaml::FontNumeralStyle value) const;
    Windows::UI::Xaml::DependencyProperty NumeralAlignmentProperty() const;
    Windows::UI::Xaml::FontNumeralAlignment GetNumeralAlignment(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetNumeralAlignment(const Windows::UI::Xaml::DependencyObject & element, Windows::UI::Xaml::FontNumeralAlignment value) const;
    Windows::UI::Xaml::DependencyProperty SlashedZeroProperty() const;
    bool GetSlashedZero(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetSlashedZero(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty MathematicalGreekProperty() const;
    bool GetMathematicalGreek(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetMathematicalGreek(const Windows::UI::Xaml::DependencyObject & element, bool value) const;
    Windows::UI::Xaml::DependencyProperty VariantsProperty() const;
    Windows::UI::Xaml::FontVariants GetVariants(const Windows::UI::Xaml::DependencyObject & element) const;
    void SetVariants(const Windows::UI::Xaml::DependencyObject & element, Windows::UI::Xaml::FontVariants value) const;
};

template <typename D>
struct WINRT_EBO impl_IUnderline
{
};

struct IBlock :
    Windows::IInspectable,
    impl::consume<IBlock>
{
    IBlock(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBlock>(m_ptr); }
};

struct IBlockFactory :
    Windows::IInspectable,
    impl::consume<IBlockFactory>
{
    IBlockFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBlockFactory>(m_ptr); }
};

struct IBlockStatics :
    Windows::IInspectable,
    impl::consume<IBlockStatics>
{
    IBlockStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBlockStatics>(m_ptr); }
};

struct IBold :
    Windows::IInspectable,
    impl::consume<IBold>
{
    IBold(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IBold>(m_ptr); }
};

struct IGlyphs :
    Windows::IInspectable,
    impl::consume<IGlyphs>
{
    IGlyphs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGlyphs>(m_ptr); }
};

struct IGlyphs2 :
    Windows::IInspectable,
    impl::consume<IGlyphs2>
{
    IGlyphs2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGlyphs2>(m_ptr); }
};

struct IGlyphsStatics :
    Windows::IInspectable,
    impl::consume<IGlyphsStatics>
{
    IGlyphsStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGlyphsStatics>(m_ptr); }
};

struct IGlyphsStatics2 :
    Windows::IInspectable,
    impl::consume<IGlyphsStatics2>
{
    IGlyphsStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IGlyphsStatics2>(m_ptr); }
};

struct IHyperlink :
    Windows::IInspectable,
    impl::consume<IHyperlink>
{
    IHyperlink(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHyperlink>(m_ptr); }
};

struct IHyperlink2 :
    Windows::IInspectable,
    impl::consume<IHyperlink2>
{
    IHyperlink2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHyperlink2>(m_ptr); }
};

struct IHyperlink3 :
    Windows::IInspectable,
    impl::consume<IHyperlink3>
{
    IHyperlink3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHyperlink3>(m_ptr); }
};

struct IHyperlinkClickEventArgs :
    Windows::IInspectable,
    impl::consume<IHyperlinkClickEventArgs>
{
    IHyperlinkClickEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHyperlinkClickEventArgs>(m_ptr); }
};

struct IHyperlinkStatics :
    Windows::IInspectable,
    impl::consume<IHyperlinkStatics>
{
    IHyperlinkStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHyperlinkStatics>(m_ptr); }
};

struct IHyperlinkStatics2 :
    Windows::IInspectable,
    impl::consume<IHyperlinkStatics2>
{
    IHyperlinkStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHyperlinkStatics2>(m_ptr); }
};

struct IHyperlinkStatics3 :
    Windows::IInspectable,
    impl::consume<IHyperlinkStatics3>
{
    IHyperlinkStatics3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IHyperlinkStatics3>(m_ptr); }
};

struct IInline :
    Windows::IInspectable,
    impl::consume<IInline>
{
    IInline(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInline>(m_ptr); }
};

struct IInlineFactory :
    Windows::IInspectable,
    impl::consume<IInlineFactory>
{
    IInlineFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInlineFactory>(m_ptr); }
};

struct IInlineUIContainer :
    Windows::IInspectable,
    impl::consume<IInlineUIContainer>
{
    IInlineUIContainer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IInlineUIContainer>(m_ptr); }
};

struct IItalic :
    Windows::IInspectable,
    impl::consume<IItalic>
{
    IItalic(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IItalic>(m_ptr); }
};

struct ILineBreak :
    Windows::IInspectable,
    impl::consume<ILineBreak>
{
    ILineBreak(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ILineBreak>(m_ptr); }
};

struct IParagraph :
    Windows::IInspectable,
    impl::consume<IParagraph>
{
    IParagraph(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IParagraph>(m_ptr); }
};

struct IParagraphStatics :
    Windows::IInspectable,
    impl::consume<IParagraphStatics>
{
    IParagraphStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IParagraphStatics>(m_ptr); }
};

struct IRun :
    Windows::IInspectable,
    impl::consume<IRun>
{
    IRun(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRun>(m_ptr); }
};

struct IRunStatics :
    Windows::IInspectable,
    impl::consume<IRunStatics>
{
    IRunStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IRunStatics>(m_ptr); }
};

struct ISpan :
    Windows::IInspectable,
    impl::consume<ISpan>
{
    ISpan(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISpan>(m_ptr); }
};

struct ISpanFactory :
    Windows::IInspectable,
    impl::consume<ISpanFactory>
{
    ISpanFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ISpanFactory>(m_ptr); }
};

struct ITextElement :
    Windows::IInspectable,
    impl::consume<ITextElement>
{
    ITextElement(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITextElement>(m_ptr); }
};

struct ITextElement2 :
    Windows::IInspectable,
    impl::consume<ITextElement2>
{
    ITextElement2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITextElement2>(m_ptr); }
};

struct ITextElement3 :
    Windows::IInspectable,
    impl::consume<ITextElement3>
{
    ITextElement3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITextElement3>(m_ptr); }
};

struct ITextElementFactory :
    Windows::IInspectable,
    impl::consume<ITextElementFactory>
{
    ITextElementFactory(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITextElementFactory>(m_ptr); }
};

struct ITextElementOverrides :
    Windows::IInspectable,
    impl::consume<ITextElementOverrides>
{
    ITextElementOverrides(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITextElementOverrides>(m_ptr); }
};

struct ITextElementStatics :
    Windows::IInspectable,
    impl::consume<ITextElementStatics>
{
    ITextElementStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITextElementStatics>(m_ptr); }
};

struct ITextElementStatics2 :
    Windows::IInspectable,
    impl::consume<ITextElementStatics2>
{
    ITextElementStatics2(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITextElementStatics2>(m_ptr); }
};

struct ITextElementStatics3 :
    Windows::IInspectable,
    impl::consume<ITextElementStatics3>
{
    ITextElementStatics3(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITextElementStatics3>(m_ptr); }
};

struct ITextPointer :
    Windows::IInspectable,
    impl::consume<ITextPointer>
{
    ITextPointer(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITextPointer>(m_ptr); }
};

struct ITypography :
    Windows::IInspectable,
    impl::consume<ITypography>
{
    ITypography(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITypography>(m_ptr); }
};

struct ITypographyStatics :
    Windows::IInspectable,
    impl::consume<ITypographyStatics>
{
    ITypographyStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITypographyStatics>(m_ptr); }
};

struct IUnderline :
    Windows::IInspectable,
    impl::consume<IUnderline>
{
    IUnderline(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IUnderline>(m_ptr); }
};

}

}
