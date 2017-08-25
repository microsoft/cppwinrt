// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.UI.Text.1.h"
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Input.1.h"
#include "winrt/impl/Windows.UI.Xaml.Media.1.h"
#include "winrt/impl/Windows.UI.Xaml.Documents.1.h"

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Documents {

struct WINRT_EBO Block :
    Windows::UI::Xaml::Documents::IBlock,
    impl::base<Block, Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<Block, Windows::UI::Xaml::Documents::ITextElement, Windows::UI::Xaml::Documents::ITextElement2, Windows::UI::Xaml::Documents::ITextElement3, Windows::UI::Xaml::Documents::ITextElement4, Windows::UI::Xaml::Documents::ITextElementOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    Block(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::DependencyProperty TextAlignmentProperty();
    static Windows::UI::Xaml::DependencyProperty LineHeightProperty();
    static Windows::UI::Xaml::DependencyProperty LineStackingStrategyProperty();
    static Windows::UI::Xaml::DependencyProperty MarginProperty();
};

struct WINRT_EBO BlockCollection :
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Documents::Block>
{
    BlockCollection(std::nullptr_t) noexcept {}
};

struct WINRT_EBO Bold :
    Windows::UI::Xaml::Documents::IBold,
    impl::base<Bold, Windows::UI::Xaml::Documents::Span, Windows::UI::Xaml::Documents::Inline, Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<Bold, Windows::UI::Xaml::Documents::IInline, Windows::UI::Xaml::Documents::ISpan, Windows::UI::Xaml::Documents::ITextElement, Windows::UI::Xaml::Documents::ITextElement2, Windows::UI::Xaml::Documents::ITextElement3, Windows::UI::Xaml::Documents::ITextElement4, Windows::UI::Xaml::Documents::ITextElementOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    Bold(std::nullptr_t) noexcept {}
    Bold();
};

struct WINRT_EBO Glyphs :
    Windows::UI::Xaml::Documents::IGlyphs,
    impl::base<Glyphs, Windows::UI::Xaml::FrameworkElement, Windows::UI::Xaml::UIElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<Glyphs, Windows::UI::Xaml::Documents::IGlyphs2, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2, Windows::UI::Xaml::IFrameworkElement, Windows::UI::Xaml::IFrameworkElement2, Windows::UI::Xaml::IFrameworkElement3, Windows::UI::Xaml::IFrameworkElement4, Windows::UI::Xaml::IFrameworkElementOverrides, Windows::UI::Xaml::IFrameworkElementOverrides2, Windows::UI::Xaml::IUIElement, Windows::UI::Xaml::IUIElement2, Windows::UI::Xaml::IUIElement3, Windows::UI::Xaml::IUIElement4, Windows::UI::Xaml::IUIElement5, Windows::UI::Xaml::IUIElementOverrides>
{
    Glyphs(std::nullptr_t) noexcept {}
    Glyphs();
    static Windows::UI::Xaml::DependencyProperty UnicodeStringProperty();
    static Windows::UI::Xaml::DependencyProperty IndicesProperty();
    static Windows::UI::Xaml::DependencyProperty FontUriProperty();
    static Windows::UI::Xaml::DependencyProperty StyleSimulationsProperty();
    static Windows::UI::Xaml::DependencyProperty FontRenderingEmSizeProperty();
    static Windows::UI::Xaml::DependencyProperty OriginXProperty();
    static Windows::UI::Xaml::DependencyProperty OriginYProperty();
    static Windows::UI::Xaml::DependencyProperty FillProperty();
    static Windows::UI::Xaml::DependencyProperty IsColorFontEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty ColorFontPaletteIndexProperty();
};

struct WINRT_EBO Hyperlink :
    Windows::UI::Xaml::Documents::IHyperlink,
    impl::base<Hyperlink, Windows::UI::Xaml::Documents::Span, Windows::UI::Xaml::Documents::Inline, Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<Hyperlink, Windows::UI::Xaml::Documents::IHyperlink2, Windows::UI::Xaml::Documents::IHyperlink3, Windows::UI::Xaml::Documents::IHyperlink4, Windows::UI::Xaml::Documents::IInline, Windows::UI::Xaml::Documents::ISpan, Windows::UI::Xaml::Documents::ITextElement, Windows::UI::Xaml::Documents::ITextElement2, Windows::UI::Xaml::Documents::ITextElement3, Windows::UI::Xaml::Documents::ITextElement4, Windows::UI::Xaml::Documents::ITextElementOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    Hyperlink(std::nullptr_t) noexcept {}
    Hyperlink();
    static Windows::UI::Xaml::DependencyProperty NavigateUriProperty();
    static Windows::UI::Xaml::DependencyProperty UnderlineStyleProperty();
    static Windows::UI::Xaml::DependencyProperty XYFocusLeftProperty();
    static Windows::UI::Xaml::DependencyProperty XYFocusRightProperty();
    static Windows::UI::Xaml::DependencyProperty XYFocusUpProperty();
    static Windows::UI::Xaml::DependencyProperty XYFocusDownProperty();
    static Windows::UI::Xaml::DependencyProperty ElementSoundModeProperty();
    static Windows::UI::Xaml::DependencyProperty FocusStateProperty();
    static Windows::UI::Xaml::DependencyProperty XYFocusUpNavigationStrategyProperty();
    static Windows::UI::Xaml::DependencyProperty XYFocusDownNavigationStrategyProperty();
    static Windows::UI::Xaml::DependencyProperty XYFocusLeftNavigationStrategyProperty();
    static Windows::UI::Xaml::DependencyProperty XYFocusRightNavigationStrategyProperty();
};

struct WINRT_EBO HyperlinkClickEventArgs :
    Windows::UI::Xaml::Documents::IHyperlinkClickEventArgs,
    impl::base<HyperlinkClickEventArgs, Windows::UI::Xaml::RoutedEventArgs>,
    impl::require<HyperlinkClickEventArgs, Windows::UI::Xaml::IRoutedEventArgs>
{
    HyperlinkClickEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO Inline :
    Windows::UI::Xaml::Documents::IInline,
    impl::base<Inline, Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<Inline, Windows::UI::Xaml::Documents::ITextElement, Windows::UI::Xaml::Documents::ITextElement2, Windows::UI::Xaml::Documents::ITextElement3, Windows::UI::Xaml::Documents::ITextElement4, Windows::UI::Xaml::Documents::ITextElementOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    Inline(std::nullptr_t) noexcept {}
};

struct WINRT_EBO InlineCollection :
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Documents::Inline>
{
    InlineCollection(std::nullptr_t) noexcept {}
};

struct WINRT_EBO InlineUIContainer :
    Windows::UI::Xaml::Documents::IInlineUIContainer,
    impl::base<InlineUIContainer, Windows::UI::Xaml::Documents::Inline, Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<InlineUIContainer, Windows::UI::Xaml::Documents::IInline, Windows::UI::Xaml::Documents::ITextElement, Windows::UI::Xaml::Documents::ITextElement2, Windows::UI::Xaml::Documents::ITextElement3, Windows::UI::Xaml::Documents::ITextElement4, Windows::UI::Xaml::Documents::ITextElementOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    InlineUIContainer(std::nullptr_t) noexcept {}
    InlineUIContainer();
};

struct WINRT_EBO Italic :
    Windows::UI::Xaml::Documents::IItalic,
    impl::base<Italic, Windows::UI::Xaml::Documents::Span, Windows::UI::Xaml::Documents::Inline, Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<Italic, Windows::UI::Xaml::Documents::IInline, Windows::UI::Xaml::Documents::ISpan, Windows::UI::Xaml::Documents::ITextElement, Windows::UI::Xaml::Documents::ITextElement2, Windows::UI::Xaml::Documents::ITextElement3, Windows::UI::Xaml::Documents::ITextElement4, Windows::UI::Xaml::Documents::ITextElementOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    Italic(std::nullptr_t) noexcept {}
    Italic();
};

struct WINRT_EBO LineBreak :
    Windows::UI::Xaml::Documents::ILineBreak,
    impl::base<LineBreak, Windows::UI::Xaml::Documents::Inline, Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<LineBreak, Windows::UI::Xaml::Documents::IInline, Windows::UI::Xaml::Documents::ITextElement, Windows::UI::Xaml::Documents::ITextElement2, Windows::UI::Xaml::Documents::ITextElement3, Windows::UI::Xaml::Documents::ITextElement4, Windows::UI::Xaml::Documents::ITextElementOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    LineBreak(std::nullptr_t) noexcept {}
    LineBreak();
};

struct WINRT_EBO Paragraph :
    Windows::UI::Xaml::Documents::IParagraph,
    impl::base<Paragraph, Windows::UI::Xaml::Documents::Block, Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<Paragraph, Windows::UI::Xaml::Documents::IBlock, Windows::UI::Xaml::Documents::ITextElement, Windows::UI::Xaml::Documents::ITextElement2, Windows::UI::Xaml::Documents::ITextElement3, Windows::UI::Xaml::Documents::ITextElement4, Windows::UI::Xaml::Documents::ITextElementOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    Paragraph(std::nullptr_t) noexcept {}
    Paragraph();
    static Windows::UI::Xaml::DependencyProperty TextIndentProperty();
};

struct WINRT_EBO Run :
    Windows::UI::Xaml::Documents::IRun,
    impl::base<Run, Windows::UI::Xaml::Documents::Inline, Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<Run, Windows::UI::Xaml::Documents::IInline, Windows::UI::Xaml::Documents::ITextElement, Windows::UI::Xaml::Documents::ITextElement2, Windows::UI::Xaml::Documents::ITextElement3, Windows::UI::Xaml::Documents::ITextElement4, Windows::UI::Xaml::Documents::ITextElementOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    Run(std::nullptr_t) noexcept {}
    Run();
    static Windows::UI::Xaml::DependencyProperty FlowDirectionProperty();
};

struct WINRT_EBO Span :
    Windows::UI::Xaml::Documents::ISpan,
    impl::base<Span, Windows::UI::Xaml::Documents::Inline, Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<Span, Windows::UI::Xaml::Documents::IInline, Windows::UI::Xaml::Documents::ITextElement, Windows::UI::Xaml::Documents::ITextElement2, Windows::UI::Xaml::Documents::ITextElement3, Windows::UI::Xaml::Documents::ITextElement4, Windows::UI::Xaml::Documents::ITextElementOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    Span(std::nullptr_t) noexcept {}
    Span();
};

struct WINRT_EBO TextElement :
    Windows::UI::Xaml::Documents::ITextElement,
    impl::base<TextElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<TextElement, Windows::UI::Xaml::Documents::ITextElement2, Windows::UI::Xaml::Documents::ITextElement3, Windows::UI::Xaml::Documents::ITextElement4, Windows::UI::Xaml::Documents::ITextElementOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    TextElement(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::DependencyProperty FontSizeProperty();
    static Windows::UI::Xaml::DependencyProperty FontFamilyProperty();
    static Windows::UI::Xaml::DependencyProperty FontWeightProperty();
    static Windows::UI::Xaml::DependencyProperty FontStyleProperty();
    static Windows::UI::Xaml::DependencyProperty FontStretchProperty();
    static Windows::UI::Xaml::DependencyProperty CharacterSpacingProperty();
    static Windows::UI::Xaml::DependencyProperty ForegroundProperty();
    static Windows::UI::Xaml::DependencyProperty LanguageProperty();
    static Windows::UI::Xaml::DependencyProperty IsTextScaleFactorEnabledProperty();
    static Windows::UI::Xaml::DependencyProperty AllowFocusOnInteractionProperty();
    static Windows::UI::Xaml::DependencyProperty AccessKeyProperty();
    static Windows::UI::Xaml::DependencyProperty ExitDisplayModeOnAccessKeyInvokedProperty();
    static Windows::UI::Xaml::DependencyProperty TextDecorationsProperty();
    static Windows::UI::Xaml::DependencyProperty IsAccessKeyScopeProperty();
    static Windows::UI::Xaml::DependencyProperty AccessKeyScopeOwnerProperty();
    static Windows::UI::Xaml::DependencyProperty KeyTipPlacementModeProperty();
    static Windows::UI::Xaml::DependencyProperty KeyTipHorizontalOffsetProperty();
    static Windows::UI::Xaml::DependencyProperty KeyTipVerticalOffsetProperty();
};

struct WINRT_EBO TextPointer :
    Windows::UI::Xaml::Documents::ITextPointer
{
    TextPointer(std::nullptr_t) noexcept {}
};

struct WINRT_EBO Typography :
    Windows::UI::Xaml::Documents::ITypography
{
    Typography(std::nullptr_t) noexcept {}
    static Windows::UI::Xaml::DependencyProperty AnnotationAlternatesProperty();
    static int32_t GetAnnotationAlternates(Windows::UI::Xaml::DependencyObject const& element);
    static void SetAnnotationAlternates(Windows::UI::Xaml::DependencyObject const& element, int32_t value);
    static Windows::UI::Xaml::DependencyProperty EastAsianExpertFormsProperty();
    static bool GetEastAsianExpertForms(Windows::UI::Xaml::DependencyObject const& element);
    static void SetEastAsianExpertForms(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty EastAsianLanguageProperty();
    static Windows::UI::Xaml::FontEastAsianLanguage GetEastAsianLanguage(Windows::UI::Xaml::DependencyObject const& element);
    static void SetEastAsianLanguage(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontEastAsianLanguage const& value);
    static Windows::UI::Xaml::DependencyProperty EastAsianWidthsProperty();
    static Windows::UI::Xaml::FontEastAsianWidths GetEastAsianWidths(Windows::UI::Xaml::DependencyObject const& element);
    static void SetEastAsianWidths(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontEastAsianWidths const& value);
    static Windows::UI::Xaml::DependencyProperty StandardLigaturesProperty();
    static bool GetStandardLigatures(Windows::UI::Xaml::DependencyObject const& element);
    static void SetStandardLigatures(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty ContextualLigaturesProperty();
    static bool GetContextualLigatures(Windows::UI::Xaml::DependencyObject const& element);
    static void SetContextualLigatures(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty DiscretionaryLigaturesProperty();
    static bool GetDiscretionaryLigatures(Windows::UI::Xaml::DependencyObject const& element);
    static void SetDiscretionaryLigatures(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty HistoricalLigaturesProperty();
    static bool GetHistoricalLigatures(Windows::UI::Xaml::DependencyObject const& element);
    static void SetHistoricalLigatures(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty StandardSwashesProperty();
    static int32_t GetStandardSwashes(Windows::UI::Xaml::DependencyObject const& element);
    static void SetStandardSwashes(Windows::UI::Xaml::DependencyObject const& element, int32_t value);
    static Windows::UI::Xaml::DependencyProperty ContextualSwashesProperty();
    static int32_t GetContextualSwashes(Windows::UI::Xaml::DependencyObject const& element);
    static void SetContextualSwashes(Windows::UI::Xaml::DependencyObject const& element, int32_t value);
    static Windows::UI::Xaml::DependencyProperty ContextualAlternatesProperty();
    static bool GetContextualAlternates(Windows::UI::Xaml::DependencyObject const& element);
    static void SetContextualAlternates(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty StylisticAlternatesProperty();
    static int32_t GetStylisticAlternates(Windows::UI::Xaml::DependencyObject const& element);
    static void SetStylisticAlternates(Windows::UI::Xaml::DependencyObject const& element, int32_t value);
    static Windows::UI::Xaml::DependencyProperty StylisticSet1Property();
    static bool GetStylisticSet1(Windows::UI::Xaml::DependencyObject const& element);
    static void SetStylisticSet1(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty StylisticSet2Property();
    static bool GetStylisticSet2(Windows::UI::Xaml::DependencyObject const& element);
    static void SetStylisticSet2(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty StylisticSet3Property();
    static bool GetStylisticSet3(Windows::UI::Xaml::DependencyObject const& element);
    static void SetStylisticSet3(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty StylisticSet4Property();
    static bool GetStylisticSet4(Windows::UI::Xaml::DependencyObject const& element);
    static void SetStylisticSet4(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty StylisticSet5Property();
    static bool GetStylisticSet5(Windows::UI::Xaml::DependencyObject const& element);
    static void SetStylisticSet5(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty StylisticSet6Property();
    static bool GetStylisticSet6(Windows::UI::Xaml::DependencyObject const& element);
    static void SetStylisticSet6(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty StylisticSet7Property();
    static bool GetStylisticSet7(Windows::UI::Xaml::DependencyObject const& element);
    static void SetStylisticSet7(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty StylisticSet8Property();
    static bool GetStylisticSet8(Windows::UI::Xaml::DependencyObject const& element);
    static void SetStylisticSet8(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty StylisticSet9Property();
    static bool GetStylisticSet9(Windows::UI::Xaml::DependencyObject const& element);
    static void SetStylisticSet9(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty StylisticSet10Property();
    static bool GetStylisticSet10(Windows::UI::Xaml::DependencyObject const& element);
    static void SetStylisticSet10(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty StylisticSet11Property();
    static bool GetStylisticSet11(Windows::UI::Xaml::DependencyObject const& element);
    static void SetStylisticSet11(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty StylisticSet12Property();
    static bool GetStylisticSet12(Windows::UI::Xaml::DependencyObject const& element);
    static void SetStylisticSet12(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty StylisticSet13Property();
    static bool GetStylisticSet13(Windows::UI::Xaml::DependencyObject const& element);
    static void SetStylisticSet13(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty StylisticSet14Property();
    static bool GetStylisticSet14(Windows::UI::Xaml::DependencyObject const& element);
    static void SetStylisticSet14(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty StylisticSet15Property();
    static bool GetStylisticSet15(Windows::UI::Xaml::DependencyObject const& element);
    static void SetStylisticSet15(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty StylisticSet16Property();
    static bool GetStylisticSet16(Windows::UI::Xaml::DependencyObject const& element);
    static void SetStylisticSet16(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty StylisticSet17Property();
    static bool GetStylisticSet17(Windows::UI::Xaml::DependencyObject const& element);
    static void SetStylisticSet17(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty StylisticSet18Property();
    static bool GetStylisticSet18(Windows::UI::Xaml::DependencyObject const& element);
    static void SetStylisticSet18(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty StylisticSet19Property();
    static bool GetStylisticSet19(Windows::UI::Xaml::DependencyObject const& element);
    static void SetStylisticSet19(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty StylisticSet20Property();
    static bool GetStylisticSet20(Windows::UI::Xaml::DependencyObject const& element);
    static void SetStylisticSet20(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty CapitalsProperty();
    static Windows::UI::Xaml::FontCapitals GetCapitals(Windows::UI::Xaml::DependencyObject const& element);
    static void SetCapitals(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontCapitals const& value);
    static Windows::UI::Xaml::DependencyProperty CapitalSpacingProperty();
    static bool GetCapitalSpacing(Windows::UI::Xaml::DependencyObject const& element);
    static void SetCapitalSpacing(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty KerningProperty();
    static bool GetKerning(Windows::UI::Xaml::DependencyObject const& element);
    static void SetKerning(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty CaseSensitiveFormsProperty();
    static bool GetCaseSensitiveForms(Windows::UI::Xaml::DependencyObject const& element);
    static void SetCaseSensitiveForms(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty HistoricalFormsProperty();
    static bool GetHistoricalForms(Windows::UI::Xaml::DependencyObject const& element);
    static void SetHistoricalForms(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty FractionProperty();
    static Windows::UI::Xaml::FontFraction GetFraction(Windows::UI::Xaml::DependencyObject const& element);
    static void SetFraction(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontFraction const& value);
    static Windows::UI::Xaml::DependencyProperty NumeralStyleProperty();
    static Windows::UI::Xaml::FontNumeralStyle GetNumeralStyle(Windows::UI::Xaml::DependencyObject const& element);
    static void SetNumeralStyle(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontNumeralStyle const& value);
    static Windows::UI::Xaml::DependencyProperty NumeralAlignmentProperty();
    static Windows::UI::Xaml::FontNumeralAlignment GetNumeralAlignment(Windows::UI::Xaml::DependencyObject const& element);
    static void SetNumeralAlignment(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontNumeralAlignment const& value);
    static Windows::UI::Xaml::DependencyProperty SlashedZeroProperty();
    static bool GetSlashedZero(Windows::UI::Xaml::DependencyObject const& element);
    static void SetSlashedZero(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty MathematicalGreekProperty();
    static bool GetMathematicalGreek(Windows::UI::Xaml::DependencyObject const& element);
    static void SetMathematicalGreek(Windows::UI::Xaml::DependencyObject const& element, bool value);
    static Windows::UI::Xaml::DependencyProperty VariantsProperty();
    static Windows::UI::Xaml::FontVariants GetVariants(Windows::UI::Xaml::DependencyObject const& element);
    static void SetVariants(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontVariants const& value);
};

struct WINRT_EBO Underline :
    Windows::UI::Xaml::Documents::IUnderline,
    impl::base<Underline, Windows::UI::Xaml::Documents::Span, Windows::UI::Xaml::Documents::Inline, Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::DependencyObject>,
    impl::require<Underline, Windows::UI::Xaml::Documents::IInline, Windows::UI::Xaml::Documents::ISpan, Windows::UI::Xaml::Documents::ITextElement, Windows::UI::Xaml::Documents::ITextElement2, Windows::UI::Xaml::Documents::ITextElement3, Windows::UI::Xaml::Documents::ITextElement4, Windows::UI::Xaml::Documents::ITextElementOverrides, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    Underline(std::nullptr_t) noexcept {}
    Underline();
};

template <typename D>
class ITextElementOverridesT
{
    D& shim() noexcept { return *static_cast<D*>(this); }
    D const& shim() const noexcept { return *static_cast<const D*>(this); }

public:

    using ITextElementOverrides = winrt::Windows::UI::Xaml::Documents::ITextElementOverrides;

    void OnDisconnectVisualChildren() const;
};

}
