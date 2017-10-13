// C++/WinRT v1.0.171013.2
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation {

struct Uri;

}

WINRT_EXPORT namespace winrt::Windows::UI::Text {

enum class FontStretch;
enum class FontStyle;
enum class TextDecorations : unsigned;
struct FontWeight;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml {

enum class ElementSoundMode;
enum class FlowDirection;
enum class FocusState;
enum class FontCapitals;
enum class FontEastAsianLanguage;
enum class FontEastAsianWidths;
enum class FontFraction;
enum class FontNumeralAlignment;
enum class FontNumeralStyle;
enum class FontVariants;
enum class LineStackingStrategy;
enum class TextAlignment;
struct DependencyObject;
struct DependencyProperty;
struct FrameworkElement;
struct RoutedEventHandler;
struct Thickness;
struct UIElement;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Input {

enum class KeyTipPlacementMode;
enum class XYFocusNavigationStrategy;
struct AccessKeyDisplayDismissedEventArgs;
struct AccessKeyDisplayRequestedEventArgs;
struct AccessKeyInvokedEventArgs;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media {

enum class StyleSimulations;
struct Brush;
struct FontFamily;

}

WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Documents {

enum class LogicalDirection : int32_t
{
    Backward = 0,
    Forward = 1,
};

enum class UnderlineStyle : int32_t
{
    None = 0,
    Single = 1,
};

struct IBlock;
struct IBlock2;
struct IBlockFactory;
struct IBlockStatics;
struct IBlockStatics2;
struct IBold;
struct IGlyphs;
struct IGlyphs2;
struct IGlyphsStatics;
struct IGlyphsStatics2;
struct IHyperlink;
struct IHyperlink2;
struct IHyperlink3;
struct IHyperlink4;
struct IHyperlink5;
struct IHyperlinkClickEventArgs;
struct IHyperlinkStatics;
struct IHyperlinkStatics2;
struct IHyperlinkStatics3;
struct IHyperlinkStatics4;
struct IHyperlinkStatics5;
struct IInline;
struct IInlineFactory;
struct IInlineUIContainer;
struct IItalic;
struct ILineBreak;
struct IParagraph;
struct IParagraphStatics;
struct IRun;
struct IRunStatics;
struct ISpan;
struct ISpanFactory;
struct ITextElement;
struct ITextElement2;
struct ITextElement3;
struct ITextElement4;
struct ITextElementFactory;
struct ITextElementOverrides;
struct ITextElementStatics;
struct ITextElementStatics2;
struct ITextElementStatics3;
struct ITextElementStatics4;
struct ITextHighlighter;
struct ITextHighlighterBase;
struct ITextHighlighterBaseFactory;
struct ITextHighlighterFactory;
struct ITextHighlighterStatics;
struct ITextPointer;
struct ITypography;
struct ITypographyStatics;
struct IUnderline;
struct Block;
struct BlockCollection;
struct Bold;
struct Glyphs;
struct Hyperlink;
struct HyperlinkClickEventArgs;
struct Inline;
struct InlineCollection;
struct InlineUIContainer;
struct Italic;
struct LineBreak;
struct Paragraph;
struct Run;
struct Span;
struct TextElement;
struct TextHighlighter;
struct TextHighlighterBase;
struct TextPointer;
struct Typography;
struct Underline;
struct TextRange;

}

namespace winrt::impl {

template <> struct category<Windows::UI::Xaml::Documents::IBlock>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::IBlock2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::IBlockFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::IBlockStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::IBlockStatics2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::IBold>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::IGlyphs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::IGlyphs2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::IGlyphsStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::IGlyphsStatics2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::IHyperlink>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::IHyperlink2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::IHyperlink3>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::IHyperlink4>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::IHyperlink5>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::IHyperlinkClickEventArgs>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::IHyperlinkStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::IHyperlinkStatics2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::IHyperlinkStatics3>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::IHyperlinkStatics4>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::IHyperlinkStatics5>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::IInline>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::IInlineFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::IInlineUIContainer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::IItalic>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::ILineBreak>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::IParagraph>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::IParagraphStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::IRun>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::IRunStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::ISpan>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::ISpanFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::ITextElement>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::ITextElement2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::ITextElement3>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::ITextElement4>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::ITextElementFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::ITextElementOverrides>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::ITextElementStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::ITextElementStatics2>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::ITextElementStatics3>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::ITextElementStatics4>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::ITextHighlighter>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::ITextHighlighterBase>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::ITextHighlighterBaseFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::ITextHighlighterFactory>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::ITextHighlighterStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::ITextPointer>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::ITypography>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::ITypographyStatics>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::IUnderline>{ using type = interface_category; };
template <> struct category<Windows::UI::Xaml::Documents::Block>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Documents::BlockCollection>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Documents::Bold>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Documents::Glyphs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Documents::Hyperlink>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Documents::HyperlinkClickEventArgs>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Documents::Inline>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Documents::InlineCollection>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Documents::InlineUIContainer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Documents::Italic>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Documents::LineBreak>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Documents::Paragraph>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Documents::Run>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Documents::Span>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Documents::TextElement>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Documents::TextHighlighter>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Documents::TextHighlighterBase>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Documents::TextPointer>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Documents::Typography>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Documents::Underline>{ using type = class_category; };
template <> struct category<Windows::UI::Xaml::Documents::LogicalDirection>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Documents::UnderlineStyle>{ using type = enum_category; };
template <> struct category<Windows::UI::Xaml::Documents::TextRange>{ using type = struct_category<int32_t,int32_t>; };
template <> struct name<Windows::UI::Xaml::Documents::IBlock>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IBlock" }; };
template <> struct name<Windows::UI::Xaml::Documents::IBlock2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IBlock2" }; };
template <> struct name<Windows::UI::Xaml::Documents::IBlockFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IBlockFactory" }; };
template <> struct name<Windows::UI::Xaml::Documents::IBlockStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IBlockStatics" }; };
template <> struct name<Windows::UI::Xaml::Documents::IBlockStatics2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IBlockStatics2" }; };
template <> struct name<Windows::UI::Xaml::Documents::IBold>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IBold" }; };
template <> struct name<Windows::UI::Xaml::Documents::IGlyphs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IGlyphs" }; };
template <> struct name<Windows::UI::Xaml::Documents::IGlyphs2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IGlyphs2" }; };
template <> struct name<Windows::UI::Xaml::Documents::IGlyphsStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IGlyphsStatics" }; };
template <> struct name<Windows::UI::Xaml::Documents::IGlyphsStatics2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IGlyphsStatics2" }; };
template <> struct name<Windows::UI::Xaml::Documents::IHyperlink>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IHyperlink" }; };
template <> struct name<Windows::UI::Xaml::Documents::IHyperlink2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IHyperlink2" }; };
template <> struct name<Windows::UI::Xaml::Documents::IHyperlink3>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IHyperlink3" }; };
template <> struct name<Windows::UI::Xaml::Documents::IHyperlink4>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IHyperlink4" }; };
template <> struct name<Windows::UI::Xaml::Documents::IHyperlink5>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IHyperlink5" }; };
template <> struct name<Windows::UI::Xaml::Documents::IHyperlinkClickEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IHyperlinkClickEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Documents::IHyperlinkStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IHyperlinkStatics" }; };
template <> struct name<Windows::UI::Xaml::Documents::IHyperlinkStatics2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IHyperlinkStatics2" }; };
template <> struct name<Windows::UI::Xaml::Documents::IHyperlinkStatics3>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IHyperlinkStatics3" }; };
template <> struct name<Windows::UI::Xaml::Documents::IHyperlinkStatics4>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IHyperlinkStatics4" }; };
template <> struct name<Windows::UI::Xaml::Documents::IHyperlinkStatics5>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IHyperlinkStatics5" }; };
template <> struct name<Windows::UI::Xaml::Documents::IInline>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IInline" }; };
template <> struct name<Windows::UI::Xaml::Documents::IInlineFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IInlineFactory" }; };
template <> struct name<Windows::UI::Xaml::Documents::IInlineUIContainer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IInlineUIContainer" }; };
template <> struct name<Windows::UI::Xaml::Documents::IItalic>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IItalic" }; };
template <> struct name<Windows::UI::Xaml::Documents::ILineBreak>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ILineBreak" }; };
template <> struct name<Windows::UI::Xaml::Documents::IParagraph>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IParagraph" }; };
template <> struct name<Windows::UI::Xaml::Documents::IParagraphStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IParagraphStatics" }; };
template <> struct name<Windows::UI::Xaml::Documents::IRun>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IRun" }; };
template <> struct name<Windows::UI::Xaml::Documents::IRunStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IRunStatics" }; };
template <> struct name<Windows::UI::Xaml::Documents::ISpan>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ISpan" }; };
template <> struct name<Windows::UI::Xaml::Documents::ISpanFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ISpanFactory" }; };
template <> struct name<Windows::UI::Xaml::Documents::ITextElement>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITextElement" }; };
template <> struct name<Windows::UI::Xaml::Documents::ITextElement2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITextElement2" }; };
template <> struct name<Windows::UI::Xaml::Documents::ITextElement3>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITextElement3" }; };
template <> struct name<Windows::UI::Xaml::Documents::ITextElement4>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITextElement4" }; };
template <> struct name<Windows::UI::Xaml::Documents::ITextElementFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITextElementFactory" }; };
template <> struct name<Windows::UI::Xaml::Documents::ITextElementOverrides>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITextElementOverrides" }; };
template <> struct name<Windows::UI::Xaml::Documents::ITextElementStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITextElementStatics" }; };
template <> struct name<Windows::UI::Xaml::Documents::ITextElementStatics2>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITextElementStatics2" }; };
template <> struct name<Windows::UI::Xaml::Documents::ITextElementStatics3>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITextElementStatics3" }; };
template <> struct name<Windows::UI::Xaml::Documents::ITextElementStatics4>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITextElementStatics4" }; };
template <> struct name<Windows::UI::Xaml::Documents::ITextHighlighter>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITextHighlighter" }; };
template <> struct name<Windows::UI::Xaml::Documents::ITextHighlighterBase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITextHighlighterBase" }; };
template <> struct name<Windows::UI::Xaml::Documents::ITextHighlighterBaseFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITextHighlighterBaseFactory" }; };
template <> struct name<Windows::UI::Xaml::Documents::ITextHighlighterFactory>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITextHighlighterFactory" }; };
template <> struct name<Windows::UI::Xaml::Documents::ITextHighlighterStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITextHighlighterStatics" }; };
template <> struct name<Windows::UI::Xaml::Documents::ITextPointer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITextPointer" }; };
template <> struct name<Windows::UI::Xaml::Documents::ITypography>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITypography" }; };
template <> struct name<Windows::UI::Xaml::Documents::ITypographyStatics>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.ITypographyStatics" }; };
template <> struct name<Windows::UI::Xaml::Documents::IUnderline>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.IUnderline" }; };
template <> struct name<Windows::UI::Xaml::Documents::Block>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.Block" }; };
template <> struct name<Windows::UI::Xaml::Documents::BlockCollection>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.BlockCollection" }; };
template <> struct name<Windows::UI::Xaml::Documents::Bold>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.Bold" }; };
template <> struct name<Windows::UI::Xaml::Documents::Glyphs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.Glyphs" }; };
template <> struct name<Windows::UI::Xaml::Documents::Hyperlink>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.Hyperlink" }; };
template <> struct name<Windows::UI::Xaml::Documents::HyperlinkClickEventArgs>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.HyperlinkClickEventArgs" }; };
template <> struct name<Windows::UI::Xaml::Documents::Inline>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.Inline" }; };
template <> struct name<Windows::UI::Xaml::Documents::InlineCollection>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.InlineCollection" }; };
template <> struct name<Windows::UI::Xaml::Documents::InlineUIContainer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.InlineUIContainer" }; };
template <> struct name<Windows::UI::Xaml::Documents::Italic>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.Italic" }; };
template <> struct name<Windows::UI::Xaml::Documents::LineBreak>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.LineBreak" }; };
template <> struct name<Windows::UI::Xaml::Documents::Paragraph>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.Paragraph" }; };
template <> struct name<Windows::UI::Xaml::Documents::Run>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.Run" }; };
template <> struct name<Windows::UI::Xaml::Documents::Span>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.Span" }; };
template <> struct name<Windows::UI::Xaml::Documents::TextElement>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.TextElement" }; };
template <> struct name<Windows::UI::Xaml::Documents::TextHighlighter>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.TextHighlighter" }; };
template <> struct name<Windows::UI::Xaml::Documents::TextHighlighterBase>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.TextHighlighterBase" }; };
template <> struct name<Windows::UI::Xaml::Documents::TextPointer>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.TextPointer" }; };
template <> struct name<Windows::UI::Xaml::Documents::Typography>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.Typography" }; };
template <> struct name<Windows::UI::Xaml::Documents::Underline>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.Underline" }; };
template <> struct name<Windows::UI::Xaml::Documents::LogicalDirection>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.LogicalDirection" }; };
template <> struct name<Windows::UI::Xaml::Documents::UnderlineStyle>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.UnderlineStyle" }; };
template <> struct name<Windows::UI::Xaml::Documents::TextRange>{ static constexpr auto & value{ L"Windows.UI.Xaml.Documents.TextRange" }; };
template <> struct guid<Windows::UI::Xaml::Documents::IBlock>{ static constexpr GUID value{ 0x4BCE0016,0xDD47,0x4350,{ 0x8C,0xB0,0xE1,0x71,0x60,0x0A,0xC8,0x96 } }; };
template <> struct guid<Windows::UI::Xaml::Documents::IBlock2>{ static constexpr GUID value{ 0x5EC7BDF3,0x1333,0x4A92,{ 0x83,0x18,0x6C,0xAE,0xDC,0x12,0xEF,0x89 } }; };
template <> struct guid<Windows::UI::Xaml::Documents::IBlockFactory>{ static constexpr GUID value{ 0x07110532,0x4F59,0x4F3B,{ 0x9C,0xE5,0x25,0x78,0x4C,0x43,0x05,0x07 } }; };
template <> struct guid<Windows::UI::Xaml::Documents::IBlockStatics>{ static constexpr GUID value{ 0xF86A8C34,0x8D18,0x4C53,{ 0xAE,0xBD,0x91,0xE6,0x10,0xA5,0xE0,0x10 } }; };
template <> struct guid<Windows::UI::Xaml::Documents::IBlockStatics2>{ static constexpr GUID value{ 0xAF01A4D6,0x03E3,0x4CEE,{ 0x9B,0x02,0x2B,0xFC,0x30,0x8B,0x27,0xA9 } }; };
template <> struct guid<Windows::UI::Xaml::Documents::IBold>{ static constexpr GUID value{ 0xADE73784,0x1B59,0x4DA4,{ 0xBB,0x23,0x0F,0x20,0xE8,0x85,0xB4,0xBF } }; };
template <> struct guid<Windows::UI::Xaml::Documents::IGlyphs>{ static constexpr GUID value{ 0xD079498B,0xF2B1,0x4281,{ 0x99,0xA2,0xE4,0xD0,0x59,0x32,0xB2,0xB5 } }; };
template <> struct guid<Windows::UI::Xaml::Documents::IGlyphs2>{ static constexpr GUID value{ 0xAA8BFE5C,0x3754,0x4BEE,{ 0xBB,0xE1,0x44,0x03,0xEE,0x9B,0x86,0xF0 } }; };
template <> struct guid<Windows::UI::Xaml::Documents::IGlyphsStatics>{ static constexpr GUID value{ 0x225CF4C5,0xFDF1,0x43ED,{ 0x95,0x8F,0x41,0x4E,0x86,0xF1,0x03,0xF2 } }; };
template <> struct guid<Windows::UI::Xaml::Documents::IGlyphsStatics2>{ static constexpr GUID value{ 0x10489AA7,0x1615,0x4A33,{ 0xAA,0x02,0xD7,0xEF,0x2A,0xEF,0xC7,0x39 } }; };
template <> struct guid<Windows::UI::Xaml::Documents::IHyperlink>{ static constexpr GUID value{ 0x0FE2363B,0x14E9,0x4152,{ 0x9E,0x58,0x5A,0xEA,0x5B,0x21,0xF0,0x8D } }; };
template <> struct guid<Windows::UI::Xaml::Documents::IHyperlink2>{ static constexpr GUID value{ 0x4CE9DA5F,0x7CFF,0x4291,{ 0xB7,0x8F,0xDF,0xEC,0x72,0x49,0x05,0x76 } }; };
template <> struct guid<Windows::UI::Xaml::Documents::IHyperlink3>{ static constexpr GUID value{ 0xC3F157D9,0xE5D3,0x4FB7,{ 0x87,0x02,0x4F,0x6D,0x85,0xDD,0x9E,0x0A } }; };
template <> struct guid<Windows::UI::Xaml::Documents::IHyperlink4>{ static constexpr GUID value{ 0xF7D02959,0x82FB,0x400A,{ 0xA4,0x07,0x5A,0x4E,0xE6,0x77,0x98,0x8A } }; };
template <> struct guid<Windows::UI::Xaml::Documents::IHyperlink5>{ static constexpr GUID value{ 0x607DD7D2,0x0945,0x4328,{ 0x91,0xEE,0x94,0xCC,0xEC,0x2E,0xA6,0xC3 } }; };
template <> struct guid<Windows::UI::Xaml::Documents::IHyperlinkClickEventArgs>{ static constexpr GUID value{ 0xC755916B,0x7BDC,0x4BE7,{ 0xB3,0x73,0x92,0x40,0xA5,0x03,0xD8,0x70 } }; };
template <> struct guid<Windows::UI::Xaml::Documents::IHyperlinkStatics>{ static constexpr GUID value{ 0x3A44D3D4,0xFD41,0x41DB,{ 0x8C,0x72,0x3B,0x79,0x0A,0xCD,0x9F,0xD3 } }; };
template <> struct guid<Windows::UI::Xaml::Documents::IHyperlinkStatics2>{ static constexpr GUID value{ 0x5028D8B7,0x7ADF,0x43EE,{ 0xA4,0xAE,0x9C,0x92,0x5F,0x75,0x57,0x16 } }; };
template <> struct guid<Windows::UI::Xaml::Documents::IHyperlinkStatics3>{ static constexpr GUID value{ 0x3E15DEA0,0x205E,0x4947,{ 0x99,0xA5,0x74,0xE7,0x57,0xE8,0xE1,0xB4 } }; };
template <> struct guid<Windows::UI::Xaml::Documents::IHyperlinkStatics4>{ static constexpr GUID value{ 0x0476B378,0x8FAA,0x4E24,{ 0xB3,0xB6,0xE9,0xDE,0x4D,0x3C,0x70,0x8C } }; };
template <> struct guid<Windows::UI::Xaml::Documents::IHyperlinkStatics5>{ static constexpr GUID value{ 0x59308CEA,0x1E49,0x4921,{ 0xBD,0x88,0xA2,0x87,0x8D,0x07,0xE3,0x0E } }; };
template <> struct guid<Windows::UI::Xaml::Documents::IInline>{ static constexpr GUID value{ 0x0C92712D,0x1BC9,0x4931,{ 0x8C,0xB1,0x1A,0xEA,0xDF,0x1C,0xC6,0x85 } }; };
template <> struct guid<Windows::UI::Xaml::Documents::IInlineFactory>{ static constexpr GUID value{ 0x4058ACD1,0x2F90,0x4B8F,{ 0x99,0xDD,0x42,0x18,0xEF,0x5F,0x03,0xDE } }; };
template <> struct guid<Windows::UI::Xaml::Documents::IInlineUIContainer>{ static constexpr GUID value{ 0x1416CE81,0x28EE,0x452E,{ 0xB1,0x21,0x5F,0xC4,0xF6,0x0B,0x86,0xA6 } }; };
template <> struct guid<Windows::UI::Xaml::Documents::IItalic>{ static constexpr GUID value{ 0x91F4619C,0xFCBB,0x4157,{ 0x80,0x2C,0x76,0xF6,0x3B,0x5F,0xB6,0x57 } }; };
template <> struct guid<Windows::UI::Xaml::Documents::ILineBreak>{ static constexpr GUID value{ 0x645589C4,0xF769,0x41ED,{ 0x89,0x5B,0x8A,0x1B,0x2F,0xB3,0x15,0x62 } }; };
template <> struct guid<Windows::UI::Xaml::Documents::IParagraph>{ static constexpr GUID value{ 0xF83EF59A,0xFA61,0x4BEF,{ 0xAE,0x33,0x0B,0x0A,0xD7,0x56,0xA8,0x4D } }; };
template <> struct guid<Windows::UI::Xaml::Documents::IParagraphStatics>{ static constexpr GUID value{ 0xEF08889A,0x535B,0x4E4C,{ 0x8D,0x84,0x28,0x3B,0x33,0xE9,0x8A,0x37 } }; };
template <> struct guid<Windows::UI::Xaml::Documents::IRun>{ static constexpr GUID value{ 0x59553C83,0x0E14,0x49BD,{ 0xB8,0x4B,0xC5,0x26,0xF3,0x03,0x43,0x49 } }; };
template <> struct guid<Windows::UI::Xaml::Documents::IRunStatics>{ static constexpr GUID value{ 0xE9303CEF,0x65A0,0x4B8D,{ 0xA7,0xF7,0x8F,0xDB,0x28,0x7B,0x46,0xF3 } }; };
template <> struct guid<Windows::UI::Xaml::Documents::ISpan>{ static constexpr GUID value{ 0x9839D4A9,0x02AF,0x4811,{ 0xAA,0x15,0x6B,0xEF,0x3A,0xCA,0xC9,0x7A } }; };
template <> struct guid<Windows::UI::Xaml::Documents::ISpanFactory>{ static constexpr GUID value{ 0x5B916F5C,0xCD2D,0x40C0,{ 0x95,0x6A,0x38,0x64,0x48,0x32,0x2F,0x79 } }; };
template <> struct guid<Windows::UI::Xaml::Documents::ITextElement>{ static constexpr GUID value{ 0xE83B0062,0xD776,0x4F92,{ 0xBA,0xEA,0x40,0xE7,0x7D,0x47,0x91,0xD5 } }; };
template <> struct guid<Windows::UI::Xaml::Documents::ITextElement2>{ static constexpr GUID value{ 0xA8076AA8,0xF892,0x49F6,{ 0x8C,0xD2,0x89,0xAD,0xDA,0xF0,0x6D,0x2D } }; };
template <> struct guid<Windows::UI::Xaml::Documents::ITextElement3>{ static constexpr GUID value{ 0xD1DB340F,0x1BC4,0x4CA8,{ 0xBC,0xF7,0x77,0x0B,0xFF,0x9B,0x27,0xAB } }; };
template <> struct guid<Windows::UI::Xaml::Documents::ITextElement4>{ static constexpr GUID value{ 0xB196E222,0xCA0E,0x48A9,{ 0x83,0xBC,0x36,0xCE,0x50,0x56,0x6A,0xC7 } }; };
template <> struct guid<Windows::UI::Xaml::Documents::ITextElementFactory>{ static constexpr GUID value{ 0x35007285,0xCF47,0x4BFE,{ 0xB1,0xBC,0x39,0xC9,0x3A,0xF4,0xAE,0x80 } }; };
template <> struct guid<Windows::UI::Xaml::Documents::ITextElementOverrides>{ static constexpr GUID value{ 0x0CE21EE7,0x4F76,0x4DD9,{ 0xBF,0x91,0x16,0x3B,0xEC,0xCF,0x84,0xBC } }; };
template <> struct guid<Windows::UI::Xaml::Documents::ITextElementStatics>{ static constexpr GUID value{ 0x0A2F9B98,0x6C03,0x4470,{ 0xA7,0x9B,0x32,0x98,0xA1,0x04,0x82,0xCE } }; };
template <> struct guid<Windows::UI::Xaml::Documents::ITextElementStatics2>{ static constexpr GUID value{ 0x164297B2,0x982B,0x49E1,{ 0x8C,0x03,0xCA,0x43,0xBC,0x4D,0x5B,0x6D } }; };
template <> struct guid<Windows::UI::Xaml::Documents::ITextElementStatics3>{ static constexpr GUID value{ 0xCFEFCFAF,0x0FA1,0x45EC,{ 0x9A,0x4E,0x9B,0x33,0x66,0x4D,0xC8,0xB1 } }; };
template <> struct guid<Windows::UI::Xaml::Documents::ITextElementStatics4>{ static constexpr GUID value{ 0xFD8F641E,0x6B12,0x40D5,{ 0xB6,0xEF,0xD1,0xBD,0x12,0xAC,0x90,0x66 } }; };
template <> struct guid<Windows::UI::Xaml::Documents::ITextHighlighter>{ static constexpr GUID value{ 0xBA6CB54B,0x7D75,0x4535,{ 0xB3,0x0D,0xA8,0x1A,0x00,0xB6,0x37,0xA4 } }; };
template <> struct guid<Windows::UI::Xaml::Documents::ITextHighlighterBase>{ static constexpr GUID value{ 0xD957601A,0x5F0D,0x4CDF,{ 0x97,0x58,0x97,0xE0,0xEB,0x95,0xC8,0xFA } }; };
template <> struct guid<Windows::UI::Xaml::Documents::ITextHighlighterBaseFactory>{ static constexpr GUID value{ 0x9592B2D0,0xEADC,0x4C74,{ 0x92,0xC8,0x6E,0x89,0x6E,0x22,0x50,0x6D } }; };
template <> struct guid<Windows::UI::Xaml::Documents::ITextHighlighterFactory>{ static constexpr GUID value{ 0x70125461,0x9A8F,0x4FA0,{ 0xB2,0x35,0x8F,0xFA,0xA5,0x07,0xBE,0xF2 } }; };
template <> struct guid<Windows::UI::Xaml::Documents::ITextHighlighterStatics>{ static constexpr GUID value{ 0xB3B009C4,0x3A7E,0x49CC,{ 0xAB,0x84,0x29,0xC4,0x05,0x48,0x87,0x65 } }; };
template <> struct guid<Windows::UI::Xaml::Documents::ITextPointer>{ static constexpr GUID value{ 0xAC687AA1,0x6A41,0x43FF,{ 0x85,0x1E,0x45,0x34,0x8A,0xA2,0xCF,0x7B } }; };
template <> struct guid<Windows::UI::Xaml::Documents::ITypography>{ static constexpr GUID value{ 0x866F65D5,0xEA97,0x42AB,{ 0x92,0x88,0x9C,0x01,0xAE,0xBC,0x7A,0x97 } }; };
template <> struct guid<Windows::UI::Xaml::Documents::ITypographyStatics>{ static constexpr GUID value{ 0x67B9EC88,0x6C57,0x4CE0,{ 0x95,0xF1,0xD4,0xB9,0xED,0x63,0x2F,0xB4 } }; };
template <> struct guid<Windows::UI::Xaml::Documents::IUnderline>{ static constexpr GUID value{ 0xA5FA8202,0x61C0,0x47D7,{ 0x93,0xEF,0xBC,0x0B,0x57,0x7C,0x5F,0x26 } }; };
template <> struct default_interface<Windows::UI::Xaml::Documents::Block>{ using type = Windows::UI::Xaml::Documents::IBlock; };
template <> struct default_interface<Windows::UI::Xaml::Documents::BlockCollection>{ using type = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Documents::Block>; };
template <> struct default_interface<Windows::UI::Xaml::Documents::Bold>{ using type = Windows::UI::Xaml::Documents::IBold; };
template <> struct default_interface<Windows::UI::Xaml::Documents::Glyphs>{ using type = Windows::UI::Xaml::Documents::IGlyphs; };
template <> struct default_interface<Windows::UI::Xaml::Documents::Hyperlink>{ using type = Windows::UI::Xaml::Documents::IHyperlink; };
template <> struct default_interface<Windows::UI::Xaml::Documents::HyperlinkClickEventArgs>{ using type = Windows::UI::Xaml::Documents::IHyperlinkClickEventArgs; };
template <> struct default_interface<Windows::UI::Xaml::Documents::Inline>{ using type = Windows::UI::Xaml::Documents::IInline; };
template <> struct default_interface<Windows::UI::Xaml::Documents::InlineCollection>{ using type = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Documents::Inline>; };
template <> struct default_interface<Windows::UI::Xaml::Documents::InlineUIContainer>{ using type = Windows::UI::Xaml::Documents::IInlineUIContainer; };
template <> struct default_interface<Windows::UI::Xaml::Documents::Italic>{ using type = Windows::UI::Xaml::Documents::IItalic; };
template <> struct default_interface<Windows::UI::Xaml::Documents::LineBreak>{ using type = Windows::UI::Xaml::Documents::ILineBreak; };
template <> struct default_interface<Windows::UI::Xaml::Documents::Paragraph>{ using type = Windows::UI::Xaml::Documents::IParagraph; };
template <> struct default_interface<Windows::UI::Xaml::Documents::Run>{ using type = Windows::UI::Xaml::Documents::IRun; };
template <> struct default_interface<Windows::UI::Xaml::Documents::Span>{ using type = Windows::UI::Xaml::Documents::ISpan; };
template <> struct default_interface<Windows::UI::Xaml::Documents::TextElement>{ using type = Windows::UI::Xaml::Documents::ITextElement; };
template <> struct default_interface<Windows::UI::Xaml::Documents::TextHighlighter>{ using type = Windows::UI::Xaml::Documents::ITextHighlighter; };
template <> struct default_interface<Windows::UI::Xaml::Documents::TextHighlighterBase>{ using type = Windows::UI::Xaml::Documents::ITextHighlighterBase; };
template <> struct default_interface<Windows::UI::Xaml::Documents::TextPointer>{ using type = Windows::UI::Xaml::Documents::ITextPointer; };
template <> struct default_interface<Windows::UI::Xaml::Documents::Typography>{ using type = Windows::UI::Xaml::Documents::ITypography; };
template <> struct default_interface<Windows::UI::Xaml::Documents::Underline>{ using type = Windows::UI::Xaml::Documents::IUnderline; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_IBlock
{
    Windows::UI::Xaml::TextAlignment TextAlignment() const noexcept;
    void TextAlignment(Windows::UI::Xaml::TextAlignment const& value) const noexcept;
    double LineHeight() const noexcept;
    void LineHeight(double value) const noexcept;
    Windows::UI::Xaml::LineStackingStrategy LineStackingStrategy() const noexcept;
    void LineStackingStrategy(Windows::UI::Xaml::LineStackingStrategy const& value) const noexcept;
    Windows::UI::Xaml::Thickness Margin() const noexcept;
    void Margin(Windows::UI::Xaml::Thickness const& value) const noexcept;
};
template <> struct consume<Windows::UI::Xaml::Documents::IBlock> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_IBlock<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_IBlock2
{
    Windows::UI::Xaml::TextAlignment HorizontalTextAlignment() const noexcept;
    void HorizontalTextAlignment(Windows::UI::Xaml::TextAlignment const& value) const noexcept;
};
template <> struct consume<Windows::UI::Xaml::Documents::IBlock2> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_IBlock2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_IBlockFactory
{
    Windows::UI::Xaml::Documents::Block CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Documents::IBlockFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_IBlockFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_IBlockStatics
{
    Windows::UI::Xaml::DependencyProperty TextAlignmentProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty LineHeightProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty LineStackingStrategyProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty MarginProperty() const noexcept;
};
template <> struct consume<Windows::UI::Xaml::Documents::IBlockStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_IBlockStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_IBlockStatics2
{
    Windows::UI::Xaml::DependencyProperty HorizontalTextAlignmentProperty() const noexcept;
};
template <> struct consume<Windows::UI::Xaml::Documents::IBlockStatics2> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_IBlockStatics2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_IBold
{
};
template <> struct consume<Windows::UI::Xaml::Documents::IBold> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_IBold<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_IGlyphs
{
    hstring UnicodeString() const noexcept;
    void UnicodeString(param::hstring const& value) const noexcept;
    hstring Indices() const noexcept;
    void Indices(param::hstring const& value) const noexcept;
    Windows::Foundation::Uri FontUri() const noexcept;
    void FontUri(Windows::Foundation::Uri const& value) const noexcept;
    Windows::UI::Xaml::Media::StyleSimulations StyleSimulations() const noexcept;
    void StyleSimulations(Windows::UI::Xaml::Media::StyleSimulations const& value) const noexcept;
    double FontRenderingEmSize() const noexcept;
    void FontRenderingEmSize(double value) const noexcept;
    double OriginX() const noexcept;
    void OriginX(double value) const noexcept;
    double OriginY() const noexcept;
    void OriginY(double value) const noexcept;
    Windows::UI::Xaml::Media::Brush Fill() const noexcept;
    void Fill(Windows::UI::Xaml::Media::Brush const& value) const noexcept;
};
template <> struct consume<Windows::UI::Xaml::Documents::IGlyphs> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_IGlyphs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_IGlyphs2
{
    bool IsColorFontEnabled() const noexcept;
    void IsColorFontEnabled(bool value) const noexcept;
    int32_t ColorFontPaletteIndex() const noexcept;
    void ColorFontPaletteIndex(int32_t value) const noexcept;
};
template <> struct consume<Windows::UI::Xaml::Documents::IGlyphs2> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_IGlyphs2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_IGlyphsStatics
{
    Windows::UI::Xaml::DependencyProperty UnicodeStringProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty IndicesProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty FontUriProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty StyleSimulationsProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty FontRenderingEmSizeProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty OriginXProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty OriginYProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty FillProperty() const noexcept;
};
template <> struct consume<Windows::UI::Xaml::Documents::IGlyphsStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_IGlyphsStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_IGlyphsStatics2
{
    Windows::UI::Xaml::DependencyProperty IsColorFontEnabledProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty ColorFontPaletteIndexProperty() const noexcept;
};
template <> struct consume<Windows::UI::Xaml::Documents::IGlyphsStatics2> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_IGlyphsStatics2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_IHyperlink
{
    Windows::Foundation::Uri NavigateUri() const noexcept;
    void NavigateUri(Windows::Foundation::Uri const& value) const noexcept;
    event_token Click(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Documents::Hyperlink, Windows::UI::Xaml::Documents::HyperlinkClickEventArgs> const& value) const;
    using Click_revoker = event_revoker<Windows::UI::Xaml::Documents::IHyperlink>;
    Click_revoker Click(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Documents::Hyperlink, Windows::UI::Xaml::Documents::HyperlinkClickEventArgs> const& value) const;
    void Click(event_token const& token) const;
};
template <> struct consume<Windows::UI::Xaml::Documents::IHyperlink> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_IHyperlink<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_IHyperlink2
{
    Windows::UI::Xaml::Documents::UnderlineStyle UnderlineStyle() const noexcept;
    void UnderlineStyle(Windows::UI::Xaml::Documents::UnderlineStyle const& value) const noexcept;
};
template <> struct consume<Windows::UI::Xaml::Documents::IHyperlink2> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_IHyperlink2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_IHyperlink3
{
    Windows::UI::Xaml::DependencyObject XYFocusLeft() const noexcept;
    void XYFocusLeft(Windows::UI::Xaml::DependencyObject const& value) const noexcept;
    Windows::UI::Xaml::DependencyObject XYFocusRight() const noexcept;
    void XYFocusRight(Windows::UI::Xaml::DependencyObject const& value) const noexcept;
    Windows::UI::Xaml::DependencyObject XYFocusUp() const noexcept;
    void XYFocusUp(Windows::UI::Xaml::DependencyObject const& value) const noexcept;
    Windows::UI::Xaml::DependencyObject XYFocusDown() const noexcept;
    void XYFocusDown(Windows::UI::Xaml::DependencyObject const& value) const noexcept;
    Windows::UI::Xaml::ElementSoundMode ElementSoundMode() const noexcept;
    void ElementSoundMode(Windows::UI::Xaml::ElementSoundMode const& value) const noexcept;
};
template <> struct consume<Windows::UI::Xaml::Documents::IHyperlink3> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_IHyperlink3<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_IHyperlink4
{
    Windows::UI::Xaml::FocusState FocusState() const noexcept;
    Windows::UI::Xaml::Input::XYFocusNavigationStrategy XYFocusUpNavigationStrategy() const noexcept;
    void XYFocusUpNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy const& value) const noexcept;
    Windows::UI::Xaml::Input::XYFocusNavigationStrategy XYFocusDownNavigationStrategy() const noexcept;
    void XYFocusDownNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy const& value) const noexcept;
    Windows::UI::Xaml::Input::XYFocusNavigationStrategy XYFocusLeftNavigationStrategy() const noexcept;
    void XYFocusLeftNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy const& value) const noexcept;
    Windows::UI::Xaml::Input::XYFocusNavigationStrategy XYFocusRightNavigationStrategy() const noexcept;
    void XYFocusRightNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy const& value) const noexcept;
    event_token GotFocus(Windows::UI::Xaml::RoutedEventHandler const& value) const;
    using GotFocus_revoker = event_revoker<Windows::UI::Xaml::Documents::IHyperlink4>;
    GotFocus_revoker GotFocus(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& value) const;
    void GotFocus(event_token const& token) const;
    event_token LostFocus(Windows::UI::Xaml::RoutedEventHandler const& value) const;
    using LostFocus_revoker = event_revoker<Windows::UI::Xaml::Documents::IHyperlink4>;
    LostFocus_revoker LostFocus(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& value) const;
    void LostFocus(event_token const& token) const;
    bool Focus(Windows::UI::Xaml::FocusState const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Documents::IHyperlink4> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_IHyperlink4<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_IHyperlink5
{
    bool IsTabStop() const noexcept;
    void IsTabStop(bool value) const noexcept;
    int32_t TabIndex() const noexcept;
    void TabIndex(int32_t value) const noexcept;
};
template <> struct consume<Windows::UI::Xaml::Documents::IHyperlink5> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_IHyperlink5<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_IHyperlinkClickEventArgs
{
};
template <> struct consume<Windows::UI::Xaml::Documents::IHyperlinkClickEventArgs> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_IHyperlinkClickEventArgs<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_IHyperlinkStatics
{
    Windows::UI::Xaml::DependencyProperty NavigateUriProperty() const noexcept;
};
template <> struct consume<Windows::UI::Xaml::Documents::IHyperlinkStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_IHyperlinkStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_IHyperlinkStatics2
{
    Windows::UI::Xaml::DependencyProperty UnderlineStyleProperty() const noexcept;
};
template <> struct consume<Windows::UI::Xaml::Documents::IHyperlinkStatics2> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_IHyperlinkStatics2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_IHyperlinkStatics3
{
    Windows::UI::Xaml::DependencyProperty XYFocusLeftProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty XYFocusRightProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty XYFocusUpProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty XYFocusDownProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty ElementSoundModeProperty() const noexcept;
};
template <> struct consume<Windows::UI::Xaml::Documents::IHyperlinkStatics3> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_IHyperlinkStatics3<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_IHyperlinkStatics4
{
    Windows::UI::Xaml::DependencyProperty FocusStateProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty XYFocusUpNavigationStrategyProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty XYFocusDownNavigationStrategyProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty XYFocusLeftNavigationStrategyProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty XYFocusRightNavigationStrategyProperty() const noexcept;
};
template <> struct consume<Windows::UI::Xaml::Documents::IHyperlinkStatics4> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_IHyperlinkStatics4<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_IHyperlinkStatics5
{
    Windows::UI::Xaml::DependencyProperty IsTabStopProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty TabIndexProperty() const noexcept;
};
template <> struct consume<Windows::UI::Xaml::Documents::IHyperlinkStatics5> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_IHyperlinkStatics5<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_IInline
{
};
template <> struct consume<Windows::UI::Xaml::Documents::IInline> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_IInline<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_IInlineFactory
{
    Windows::UI::Xaml::Documents::Inline CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Documents::IInlineFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_IInlineFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_IInlineUIContainer
{
    Windows::UI::Xaml::UIElement Child() const noexcept;
    void Child(Windows::UI::Xaml::UIElement const& value) const noexcept;
};
template <> struct consume<Windows::UI::Xaml::Documents::IInlineUIContainer> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_IInlineUIContainer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_IItalic
{
};
template <> struct consume<Windows::UI::Xaml::Documents::IItalic> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_IItalic<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_ILineBreak
{
};
template <> struct consume<Windows::UI::Xaml::Documents::ILineBreak> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_ILineBreak<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_IParagraph
{
    Windows::UI::Xaml::Documents::InlineCollection Inlines() const noexcept;
    double TextIndent() const noexcept;
    void TextIndent(double value) const noexcept;
};
template <> struct consume<Windows::UI::Xaml::Documents::IParagraph> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_IParagraph<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_IParagraphStatics
{
    Windows::UI::Xaml::DependencyProperty TextIndentProperty() const noexcept;
};
template <> struct consume<Windows::UI::Xaml::Documents::IParagraphStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_IParagraphStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_IRun
{
    hstring Text() const noexcept;
    void Text(param::hstring const& value) const noexcept;
    Windows::UI::Xaml::FlowDirection FlowDirection() const noexcept;
    void FlowDirection(Windows::UI::Xaml::FlowDirection const& value) const noexcept;
};
template <> struct consume<Windows::UI::Xaml::Documents::IRun> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_IRun<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_IRunStatics
{
    Windows::UI::Xaml::DependencyProperty FlowDirectionProperty() const noexcept;
};
template <> struct consume<Windows::UI::Xaml::Documents::IRunStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_IRunStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_ISpan
{
    Windows::UI::Xaml::Documents::InlineCollection Inlines() const noexcept;
    void Inlines(Windows::UI::Xaml::Documents::InlineCollection const& value) const noexcept;
};
template <> struct consume<Windows::UI::Xaml::Documents::ISpan> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_ISpan<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_ISpanFactory
{
    Windows::UI::Xaml::Documents::Span CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Documents::ISpanFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_ISpanFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_ITextElement
{
    hstring Name() const noexcept;
    double FontSize() const noexcept;
    void FontSize(double value) const noexcept;
    Windows::UI::Xaml::Media::FontFamily FontFamily() const noexcept;
    void FontFamily(Windows::UI::Xaml::Media::FontFamily const& value) const noexcept;
    Windows::UI::Text::FontWeight FontWeight() const noexcept;
    void FontWeight(Windows::UI::Text::FontWeight const& value) const noexcept;
    Windows::UI::Text::FontStyle FontStyle() const noexcept;
    void FontStyle(Windows::UI::Text::FontStyle const& value) const noexcept;
    Windows::UI::Text::FontStretch FontStretch() const noexcept;
    void FontStretch(Windows::UI::Text::FontStretch const& value) const noexcept;
    int32_t CharacterSpacing() const noexcept;
    void CharacterSpacing(int32_t value) const noexcept;
    Windows::UI::Xaml::Media::Brush Foreground() const noexcept;
    void Foreground(Windows::UI::Xaml::Media::Brush const& value) const noexcept;
    hstring Language() const noexcept;
    void Language(param::hstring const& value) const noexcept;
    Windows::UI::Xaml::Documents::TextPointer ContentStart() const noexcept;
    Windows::UI::Xaml::Documents::TextPointer ContentEnd() const noexcept;
    Windows::UI::Xaml::Documents::TextPointer ElementStart() const noexcept;
    Windows::UI::Xaml::Documents::TextPointer ElementEnd() const noexcept;
    Windows::Foundation::IInspectable FindName(param::hstring const& name) const;
};
template <> struct consume<Windows::UI::Xaml::Documents::ITextElement> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITextElement<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_ITextElement2
{
    bool IsTextScaleFactorEnabled() const noexcept;
    void IsTextScaleFactorEnabled(bool value) const noexcept;
};
template <> struct consume<Windows::UI::Xaml::Documents::ITextElement2> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITextElement2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_ITextElement3
{
    bool AllowFocusOnInteraction() const noexcept;
    void AllowFocusOnInteraction(bool value) const noexcept;
    hstring AccessKey() const noexcept;
    void AccessKey(param::hstring const& value) const noexcept;
    bool ExitDisplayModeOnAccessKeyInvoked() const noexcept;
    void ExitDisplayModeOnAccessKeyInvoked(bool value) const noexcept;
};
template <> struct consume<Windows::UI::Xaml::Documents::ITextElement3> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITextElement3<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_ITextElement4
{
    Windows::UI::Text::TextDecorations TextDecorations() const noexcept;
    void TextDecorations(Windows::UI::Text::TextDecorations const& value) const noexcept;
    bool IsAccessKeyScope() const noexcept;
    void IsAccessKeyScope(bool value) const noexcept;
    Windows::UI::Xaml::DependencyObject AccessKeyScopeOwner() const noexcept;
    void AccessKeyScopeOwner(Windows::UI::Xaml::DependencyObject const& value) const noexcept;
    Windows::UI::Xaml::Input::KeyTipPlacementMode KeyTipPlacementMode() const noexcept;
    void KeyTipPlacementMode(Windows::UI::Xaml::Input::KeyTipPlacementMode const& value) const noexcept;
    double KeyTipHorizontalOffset() const noexcept;
    void KeyTipHorizontalOffset(double value) const noexcept;
    double KeyTipVerticalOffset() const noexcept;
    void KeyTipVerticalOffset(double value) const noexcept;
    event_token AccessKeyDisplayRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs> const& value) const;
    using AccessKeyDisplayRequested_revoker = event_revoker<Windows::UI::Xaml::Documents::ITextElement4>;
    AccessKeyDisplayRequested_revoker AccessKeyDisplayRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs> const& value) const;
    void AccessKeyDisplayRequested(event_token const& token) const;
    event_token AccessKeyDisplayDismissed(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs> const& value) const;
    using AccessKeyDisplayDismissed_revoker = event_revoker<Windows::UI::Xaml::Documents::ITextElement4>;
    AccessKeyDisplayDismissed_revoker AccessKeyDisplayDismissed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs> const& value) const;
    void AccessKeyDisplayDismissed(event_token const& token) const;
    event_token AccessKeyInvoked(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs> const& value) const;
    using AccessKeyInvoked_revoker = event_revoker<Windows::UI::Xaml::Documents::ITextElement4>;
    AccessKeyInvoked_revoker AccessKeyInvoked(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Documents::TextElement, Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs> const& value) const;
    void AccessKeyInvoked(event_token const& token) const;
};
template <> struct consume<Windows::UI::Xaml::Documents::ITextElement4> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITextElement4<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_ITextElementFactory
{
};
template <> struct consume<Windows::UI::Xaml::Documents::ITextElementFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITextElementFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_ITextElementOverrides
{
    void OnDisconnectVisualChildren() const;
};
template <> struct consume<Windows::UI::Xaml::Documents::ITextElementOverrides> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITextElementOverrides<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_ITextElementStatics
{
    Windows::UI::Xaml::DependencyProperty FontSizeProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty FontFamilyProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty FontWeightProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty FontStyleProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty FontStretchProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty CharacterSpacingProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty ForegroundProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty LanguageProperty() const noexcept;
};
template <> struct consume<Windows::UI::Xaml::Documents::ITextElementStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITextElementStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_ITextElementStatics2
{
    Windows::UI::Xaml::DependencyProperty IsTextScaleFactorEnabledProperty() const noexcept;
};
template <> struct consume<Windows::UI::Xaml::Documents::ITextElementStatics2> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITextElementStatics2<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_ITextElementStatics3
{
    Windows::UI::Xaml::DependencyProperty AllowFocusOnInteractionProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty AccessKeyProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty ExitDisplayModeOnAccessKeyInvokedProperty() const noexcept;
};
template <> struct consume<Windows::UI::Xaml::Documents::ITextElementStatics3> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITextElementStatics3<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_ITextElementStatics4
{
    Windows::UI::Xaml::DependencyProperty TextDecorationsProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty IsAccessKeyScopeProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty AccessKeyScopeOwnerProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty KeyTipPlacementModeProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty KeyTipHorizontalOffsetProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty KeyTipVerticalOffsetProperty() const noexcept;
};
template <> struct consume<Windows::UI::Xaml::Documents::ITextElementStatics4> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITextElementStatics4<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_ITextHighlighter
{
    Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Documents::TextRange> Ranges() const noexcept;
    Windows::UI::Xaml::Media::Brush Foreground() const noexcept;
    void Foreground(Windows::UI::Xaml::Media::Brush const& value) const noexcept;
    Windows::UI::Xaml::Media::Brush Background() const noexcept;
    void Background(Windows::UI::Xaml::Media::Brush const& value) const noexcept;
};
template <> struct consume<Windows::UI::Xaml::Documents::ITextHighlighter> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITextHighlighter<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_ITextHighlighterBase
{
};
template <> struct consume<Windows::UI::Xaml::Documents::ITextHighlighterBase> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITextHighlighterBase<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_ITextHighlighterBaseFactory
{
};
template <> struct consume<Windows::UI::Xaml::Documents::ITextHighlighterBaseFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITextHighlighterBaseFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_ITextHighlighterFactory
{
    Windows::UI::Xaml::Documents::TextHighlighter CreateInstance(Windows::Foundation::IInspectable const& outer, Windows::Foundation::IInspectable& inner) const;
};
template <> struct consume<Windows::UI::Xaml::Documents::ITextHighlighterFactory> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITextHighlighterFactory<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_ITextHighlighterStatics
{
    Windows::UI::Xaml::DependencyProperty ForegroundProperty() const noexcept;
    Windows::UI::Xaml::DependencyProperty BackgroundProperty() const noexcept;
};
template <> struct consume<Windows::UI::Xaml::Documents::ITextHighlighterStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITextHighlighterStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_ITextPointer
{
    Windows::UI::Xaml::DependencyObject Parent() const noexcept;
    Windows::UI::Xaml::FrameworkElement VisualParent() const noexcept;
    Windows::UI::Xaml::Documents::LogicalDirection LogicalDirection() const noexcept;
    int32_t Offset() const noexcept;
    Windows::Foundation::Rect GetCharacterRect(Windows::UI::Xaml::Documents::LogicalDirection const& direction) const;
    Windows::UI::Xaml::Documents::TextPointer GetPositionAtOffset(int32_t offset, Windows::UI::Xaml::Documents::LogicalDirection const& direction) const;
};
template <> struct consume<Windows::UI::Xaml::Documents::ITextPointer> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITextPointer<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_ITypography
{
};
template <> struct consume<Windows::UI::Xaml::Documents::ITypography> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITypography<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_ITypographyStatics
{
    Windows::UI::Xaml::DependencyProperty AnnotationAlternatesProperty() const noexcept;
    int32_t GetAnnotationAlternates(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetAnnotationAlternates(Windows::UI::Xaml::DependencyObject const& element, int32_t value) const;
    Windows::UI::Xaml::DependencyProperty EastAsianExpertFormsProperty() const noexcept;
    bool GetEastAsianExpertForms(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetEastAsianExpertForms(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty EastAsianLanguageProperty() const noexcept;
    Windows::UI::Xaml::FontEastAsianLanguage GetEastAsianLanguage(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetEastAsianLanguage(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontEastAsianLanguage const& value) const;
    Windows::UI::Xaml::DependencyProperty EastAsianWidthsProperty() const noexcept;
    Windows::UI::Xaml::FontEastAsianWidths GetEastAsianWidths(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetEastAsianWidths(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontEastAsianWidths const& value) const;
    Windows::UI::Xaml::DependencyProperty StandardLigaturesProperty() const noexcept;
    bool GetStandardLigatures(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetStandardLigatures(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty ContextualLigaturesProperty() const noexcept;
    bool GetContextualLigatures(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetContextualLigatures(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty DiscretionaryLigaturesProperty() const noexcept;
    bool GetDiscretionaryLigatures(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetDiscretionaryLigatures(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty HistoricalLigaturesProperty() const noexcept;
    bool GetHistoricalLigatures(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetHistoricalLigatures(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StandardSwashesProperty() const noexcept;
    int32_t GetStandardSwashes(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetStandardSwashes(Windows::UI::Xaml::DependencyObject const& element, int32_t value) const;
    Windows::UI::Xaml::DependencyProperty ContextualSwashesProperty() const noexcept;
    int32_t GetContextualSwashes(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetContextualSwashes(Windows::UI::Xaml::DependencyObject const& element, int32_t value) const;
    Windows::UI::Xaml::DependencyProperty ContextualAlternatesProperty() const noexcept;
    bool GetContextualAlternates(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetContextualAlternates(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticAlternatesProperty() const noexcept;
    int32_t GetStylisticAlternates(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetStylisticAlternates(Windows::UI::Xaml::DependencyObject const& element, int32_t value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet1Property() const noexcept;
    bool GetStylisticSet1(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetStylisticSet1(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet2Property() const noexcept;
    bool GetStylisticSet2(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetStylisticSet2(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet3Property() const noexcept;
    bool GetStylisticSet3(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetStylisticSet3(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet4Property() const noexcept;
    bool GetStylisticSet4(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetStylisticSet4(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet5Property() const noexcept;
    bool GetStylisticSet5(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetStylisticSet5(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet6Property() const noexcept;
    bool GetStylisticSet6(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetStylisticSet6(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet7Property() const noexcept;
    bool GetStylisticSet7(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetStylisticSet7(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet8Property() const noexcept;
    bool GetStylisticSet8(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetStylisticSet8(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet9Property() const noexcept;
    bool GetStylisticSet9(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetStylisticSet9(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet10Property() const noexcept;
    bool GetStylisticSet10(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetStylisticSet10(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet11Property() const noexcept;
    bool GetStylisticSet11(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetStylisticSet11(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet12Property() const noexcept;
    bool GetStylisticSet12(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetStylisticSet12(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet13Property() const noexcept;
    bool GetStylisticSet13(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetStylisticSet13(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet14Property() const noexcept;
    bool GetStylisticSet14(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetStylisticSet14(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet15Property() const noexcept;
    bool GetStylisticSet15(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetStylisticSet15(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet16Property() const noexcept;
    bool GetStylisticSet16(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetStylisticSet16(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet17Property() const noexcept;
    bool GetStylisticSet17(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetStylisticSet17(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet18Property() const noexcept;
    bool GetStylisticSet18(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetStylisticSet18(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet19Property() const noexcept;
    bool GetStylisticSet19(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetStylisticSet19(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty StylisticSet20Property() const noexcept;
    bool GetStylisticSet20(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetStylisticSet20(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty CapitalsProperty() const noexcept;
    Windows::UI::Xaml::FontCapitals GetCapitals(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetCapitals(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontCapitals const& value) const;
    Windows::UI::Xaml::DependencyProperty CapitalSpacingProperty() const noexcept;
    bool GetCapitalSpacing(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetCapitalSpacing(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty KerningProperty() const noexcept;
    bool GetKerning(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetKerning(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty CaseSensitiveFormsProperty() const noexcept;
    bool GetCaseSensitiveForms(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetCaseSensitiveForms(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty HistoricalFormsProperty() const noexcept;
    bool GetHistoricalForms(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetHistoricalForms(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty FractionProperty() const noexcept;
    Windows::UI::Xaml::FontFraction GetFraction(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetFraction(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontFraction const& value) const;
    Windows::UI::Xaml::DependencyProperty NumeralStyleProperty() const noexcept;
    Windows::UI::Xaml::FontNumeralStyle GetNumeralStyle(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetNumeralStyle(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontNumeralStyle const& value) const;
    Windows::UI::Xaml::DependencyProperty NumeralAlignmentProperty() const noexcept;
    Windows::UI::Xaml::FontNumeralAlignment GetNumeralAlignment(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetNumeralAlignment(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontNumeralAlignment const& value) const;
    Windows::UI::Xaml::DependencyProperty SlashedZeroProperty() const noexcept;
    bool GetSlashedZero(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetSlashedZero(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty MathematicalGreekProperty() const noexcept;
    bool GetMathematicalGreek(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetMathematicalGreek(Windows::UI::Xaml::DependencyObject const& element, bool value) const;
    Windows::UI::Xaml::DependencyProperty VariantsProperty() const noexcept;
    Windows::UI::Xaml::FontVariants GetVariants(Windows::UI::Xaml::DependencyObject const& element) const;
    void SetVariants(Windows::UI::Xaml::DependencyObject const& element, Windows::UI::Xaml::FontVariants const& value) const;
};
template <> struct consume<Windows::UI::Xaml::Documents::ITypographyStatics> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_ITypographyStatics<D>; };

template <typename D>
struct consume_Windows_UI_Xaml_Documents_IUnderline
{
};
template <> struct consume<Windows::UI::Xaml::Documents::IUnderline> { template <typename D> using type = consume_Windows_UI_Xaml_Documents_IUnderline<D>; };

template <> struct abi<Windows::UI::Xaml::Documents::IBlock>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TextAlignment(Windows::UI::Xaml::TextAlignment* value) = 0;
    virtual HRESULT __stdcall put_TextAlignment(Windows::UI::Xaml::TextAlignment value) = 0;
    virtual HRESULT __stdcall get_LineHeight(double* value) = 0;
    virtual HRESULT __stdcall put_LineHeight(double value) = 0;
    virtual HRESULT __stdcall get_LineStackingStrategy(Windows::UI::Xaml::LineStackingStrategy* value) = 0;
    virtual HRESULT __stdcall put_LineStackingStrategy(Windows::UI::Xaml::LineStackingStrategy value) = 0;
    virtual HRESULT __stdcall get_Margin(struct_of<32>* value) = 0;
    virtual HRESULT __stdcall put_Margin(struct_of<32> value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::IBlock2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_HorizontalTextAlignment(Windows::UI::Xaml::TextAlignment* value) = 0;
    virtual HRESULT __stdcall put_HorizontalTextAlignment(Windows::UI::Xaml::TextAlignment value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::IBlockFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::IBlockStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TextAlignmentProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LineHeightProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LineStackingStrategyProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_MarginProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::IBlockStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_HorizontalTextAlignmentProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::IBold>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Documents::IGlyphs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_UnicodeString(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_UnicodeString(HSTRING value) = 0;
    virtual HRESULT __stdcall get_Indices(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Indices(HSTRING value) = 0;
    virtual HRESULT __stdcall get_FontUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_FontUri(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_StyleSimulations(Windows::UI::Xaml::Media::StyleSimulations* value) = 0;
    virtual HRESULT __stdcall put_StyleSimulations(Windows::UI::Xaml::Media::StyleSimulations value) = 0;
    virtual HRESULT __stdcall get_FontRenderingEmSize(double* value) = 0;
    virtual HRESULT __stdcall put_FontRenderingEmSize(double value) = 0;
    virtual HRESULT __stdcall get_OriginX(double* value) = 0;
    virtual HRESULT __stdcall put_OriginX(double value) = 0;
    virtual HRESULT __stdcall get_OriginY(double* value) = 0;
    virtual HRESULT __stdcall put_OriginY(double value) = 0;
    virtual HRESULT __stdcall get_Fill(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Fill(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::IGlyphs2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsColorFontEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsColorFontEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_ColorFontPaletteIndex(int32_t* value) = 0;
    virtual HRESULT __stdcall put_ColorFontPaletteIndex(int32_t value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::IGlyphsStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_UnicodeStringProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IndicesProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FontUriProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_StyleSimulationsProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FontRenderingEmSizeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_OriginXProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_OriginYProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FillProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::IGlyphsStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsColorFontEnabledProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ColorFontPaletteIndexProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::IHyperlink>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_NavigateUri(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_NavigateUri(::IUnknown* value) = 0;
    virtual HRESULT __stdcall add_Click(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_Click(event_token token) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::IHyperlink2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_UnderlineStyle(Windows::UI::Xaml::Documents::UnderlineStyle* value) = 0;
    virtual HRESULT __stdcall put_UnderlineStyle(Windows::UI::Xaml::Documents::UnderlineStyle value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::IHyperlink3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_XYFocusLeft(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_XYFocusLeft(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_XYFocusRight(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_XYFocusRight(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_XYFocusUp(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_XYFocusUp(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_XYFocusDown(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_XYFocusDown(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_ElementSoundMode(Windows::UI::Xaml::ElementSoundMode* value) = 0;
    virtual HRESULT __stdcall put_ElementSoundMode(Windows::UI::Xaml::ElementSoundMode value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::IHyperlink4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FocusState(Windows::UI::Xaml::FocusState* value) = 0;
    virtual HRESULT __stdcall get_XYFocusUpNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy* value) = 0;
    virtual HRESULT __stdcall put_XYFocusUpNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy value) = 0;
    virtual HRESULT __stdcall get_XYFocusDownNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy* value) = 0;
    virtual HRESULT __stdcall put_XYFocusDownNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy value) = 0;
    virtual HRESULT __stdcall get_XYFocusLeftNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy* value) = 0;
    virtual HRESULT __stdcall put_XYFocusLeftNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy value) = 0;
    virtual HRESULT __stdcall get_XYFocusRightNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy* value) = 0;
    virtual HRESULT __stdcall put_XYFocusRightNavigationStrategy(Windows::UI::Xaml::Input::XYFocusNavigationStrategy value) = 0;
    virtual HRESULT __stdcall add_GotFocus(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_GotFocus(event_token token) = 0;
    virtual HRESULT __stdcall add_LostFocus(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_LostFocus(event_token token) = 0;
    virtual HRESULT __stdcall Focus(Windows::UI::Xaml::FocusState value, bool* returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::IHyperlink5>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsTabStop(bool* value) = 0;
    virtual HRESULT __stdcall put_IsTabStop(bool value) = 0;
    virtual HRESULT __stdcall get_TabIndex(int32_t* value) = 0;
    virtual HRESULT __stdcall put_TabIndex(int32_t value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::IHyperlinkClickEventArgs>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Documents::IHyperlinkStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_NavigateUriProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::IHyperlinkStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_UnderlineStyleProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::IHyperlinkStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_XYFocusLeftProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_XYFocusRightProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_XYFocusUpProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_XYFocusDownProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ElementSoundModeProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::IHyperlinkStatics4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FocusStateProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_XYFocusUpNavigationStrategyProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_XYFocusDownNavigationStrategyProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_XYFocusLeftNavigationStrategyProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_XYFocusRightNavigationStrategyProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::IHyperlinkStatics5>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsTabStopProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_TabIndexProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::IInline>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Documents::IInlineFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::IInlineUIContainer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Child(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Child(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::IItalic>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Documents::ILineBreak>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Documents::IParagraph>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Inlines(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_TextIndent(double* value) = 0;
    virtual HRESULT __stdcall put_TextIndent(double value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::IParagraphStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TextIndentProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::IRun>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Text(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Text(HSTRING value) = 0;
    virtual HRESULT __stdcall get_FlowDirection(Windows::UI::Xaml::FlowDirection* value) = 0;
    virtual HRESULT __stdcall put_FlowDirection(Windows::UI::Xaml::FlowDirection value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::IRunStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FlowDirectionProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::ISpan>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Inlines(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Inlines(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::ISpanFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::ITextElement>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Name(HSTRING* value) = 0;
    virtual HRESULT __stdcall get_FontSize(double* value) = 0;
    virtual HRESULT __stdcall put_FontSize(double value) = 0;
    virtual HRESULT __stdcall get_FontFamily(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_FontFamily(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_FontWeight(struct_of<2>* value) = 0;
    virtual HRESULT __stdcall put_FontWeight(struct_of<2> value) = 0;
    virtual HRESULT __stdcall get_FontStyle(Windows::UI::Text::FontStyle* value) = 0;
    virtual HRESULT __stdcall put_FontStyle(Windows::UI::Text::FontStyle value) = 0;
    virtual HRESULT __stdcall get_FontStretch(Windows::UI::Text::FontStretch* value) = 0;
    virtual HRESULT __stdcall put_FontStretch(Windows::UI::Text::FontStretch value) = 0;
    virtual HRESULT __stdcall get_CharacterSpacing(int32_t* value) = 0;
    virtual HRESULT __stdcall put_CharacterSpacing(int32_t value) = 0;
    virtual HRESULT __stdcall get_Foreground(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Foreground(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Language(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_Language(HSTRING value) = 0;
    virtual HRESULT __stdcall get_ContentStart(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ContentEnd(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ElementStart(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ElementEnd(::IUnknown** value) = 0;
    virtual HRESULT __stdcall FindName(HSTRING name, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::ITextElement2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsTextScaleFactorEnabled(bool* value) = 0;
    virtual HRESULT __stdcall put_IsTextScaleFactorEnabled(bool value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::ITextElement3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AllowFocusOnInteraction(bool* value) = 0;
    virtual HRESULT __stdcall put_AllowFocusOnInteraction(bool value) = 0;
    virtual HRESULT __stdcall get_AccessKey(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_AccessKey(HSTRING value) = 0;
    virtual HRESULT __stdcall get_ExitDisplayModeOnAccessKeyInvoked(bool* value) = 0;
    virtual HRESULT __stdcall put_ExitDisplayModeOnAccessKeyInvoked(bool value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::ITextElement4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TextDecorations(Windows::UI::Text::TextDecorations* value) = 0;
    virtual HRESULT __stdcall put_TextDecorations(Windows::UI::Text::TextDecorations value) = 0;
    virtual HRESULT __stdcall get_IsAccessKeyScope(bool* value) = 0;
    virtual HRESULT __stdcall put_IsAccessKeyScope(bool value) = 0;
    virtual HRESULT __stdcall get_AccessKeyScopeOwner(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_AccessKeyScopeOwner(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_KeyTipPlacementMode(Windows::UI::Xaml::Input::KeyTipPlacementMode* value) = 0;
    virtual HRESULT __stdcall put_KeyTipPlacementMode(Windows::UI::Xaml::Input::KeyTipPlacementMode value) = 0;
    virtual HRESULT __stdcall get_KeyTipHorizontalOffset(double* value) = 0;
    virtual HRESULT __stdcall put_KeyTipHorizontalOffset(double value) = 0;
    virtual HRESULT __stdcall get_KeyTipVerticalOffset(double* value) = 0;
    virtual HRESULT __stdcall put_KeyTipVerticalOffset(double value) = 0;
    virtual HRESULT __stdcall add_AccessKeyDisplayRequested(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_AccessKeyDisplayRequested(event_token token) = 0;
    virtual HRESULT __stdcall add_AccessKeyDisplayDismissed(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_AccessKeyDisplayDismissed(event_token token) = 0;
    virtual HRESULT __stdcall add_AccessKeyInvoked(::IUnknown* value, event_token* token) = 0;
    virtual HRESULT __stdcall remove_AccessKeyInvoked(event_token token) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::ITextElementFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Documents::ITextElementOverrides>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall OnDisconnectVisualChildren() = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::ITextElementStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_FontSizeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FontFamilyProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FontWeightProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FontStyleProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_FontStretchProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_CharacterSpacingProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ForegroundProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LanguageProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::ITextElementStatics2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsTextScaleFactorEnabledProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::ITextElementStatics3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AllowFocusOnInteractionProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AccessKeyProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_ExitDisplayModeOnAccessKeyInvokedProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::ITextElementStatics4>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_TextDecorationsProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_IsAccessKeyScopeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_AccessKeyScopeOwnerProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_KeyTipPlacementModeProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_KeyTipHorizontalOffsetProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_KeyTipVerticalOffsetProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::ITextHighlighter>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Ranges(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_Foreground(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Foreground(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_Background(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_Background(::IUnknown* value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::ITextHighlighterBase>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Documents::ITextHighlighterBaseFactory>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Documents::ITextHighlighterFactory>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall CreateInstance(::IUnknown* outer, ::IUnknown** inner, ::IUnknown** instance) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::ITextHighlighterStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ForegroundProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_BackgroundProperty(::IUnknown** value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::ITextPointer>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_Parent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_VisualParent(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_LogicalDirection(Windows::UI::Xaml::Documents::LogicalDirection* value) = 0;
    virtual HRESULT __stdcall get_Offset(int32_t* value) = 0;
    virtual HRESULT __stdcall GetCharacterRect(Windows::UI::Xaml::Documents::LogicalDirection direction, Windows::Foundation::Rect* returnValue) = 0;
    virtual HRESULT __stdcall GetPositionAtOffset(int32_t offset, Windows::UI::Xaml::Documents::LogicalDirection direction, ::IUnknown** returnValue) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::ITypography>{ struct type : ::IInspectable
{
};};

template <> struct abi<Windows::UI::Xaml::Documents::ITypographyStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_AnnotationAlternatesProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetAnnotationAlternates(::IUnknown* element, int32_t* value) = 0;
    virtual HRESULT __stdcall SetAnnotationAlternates(::IUnknown* element, int32_t value) = 0;
    virtual HRESULT __stdcall get_EastAsianExpertFormsProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetEastAsianExpertForms(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetEastAsianExpertForms(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_EastAsianLanguageProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetEastAsianLanguage(::IUnknown* element, Windows::UI::Xaml::FontEastAsianLanguage* value) = 0;
    virtual HRESULT __stdcall SetEastAsianLanguage(::IUnknown* element, Windows::UI::Xaml::FontEastAsianLanguage value) = 0;
    virtual HRESULT __stdcall get_EastAsianWidthsProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetEastAsianWidths(::IUnknown* element, Windows::UI::Xaml::FontEastAsianWidths* value) = 0;
    virtual HRESULT __stdcall SetEastAsianWidths(::IUnknown* element, Windows::UI::Xaml::FontEastAsianWidths value) = 0;
    virtual HRESULT __stdcall get_StandardLigaturesProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetStandardLigatures(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetStandardLigatures(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_ContextualLigaturesProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetContextualLigatures(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetContextualLigatures(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_DiscretionaryLigaturesProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetDiscretionaryLigatures(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetDiscretionaryLigatures(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_HistoricalLigaturesProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetHistoricalLigatures(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetHistoricalLigatures(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_StandardSwashesProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetStandardSwashes(::IUnknown* element, int32_t* value) = 0;
    virtual HRESULT __stdcall SetStandardSwashes(::IUnknown* element, int32_t value) = 0;
    virtual HRESULT __stdcall get_ContextualSwashesProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetContextualSwashes(::IUnknown* element, int32_t* value) = 0;
    virtual HRESULT __stdcall SetContextualSwashes(::IUnknown* element, int32_t value) = 0;
    virtual HRESULT __stdcall get_ContextualAlternatesProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetContextualAlternates(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetContextualAlternates(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticAlternatesProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetStylisticAlternates(::IUnknown* element, int32_t* value) = 0;
    virtual HRESULT __stdcall SetStylisticAlternates(::IUnknown* element, int32_t value) = 0;
    virtual HRESULT __stdcall get_StylisticSet1Property(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetStylisticSet1(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetStylisticSet1(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet2Property(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetStylisticSet2(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetStylisticSet2(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet3Property(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetStylisticSet3(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetStylisticSet3(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet4Property(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetStylisticSet4(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetStylisticSet4(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet5Property(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetStylisticSet5(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetStylisticSet5(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet6Property(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetStylisticSet6(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetStylisticSet6(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet7Property(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetStylisticSet7(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetStylisticSet7(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet8Property(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetStylisticSet8(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetStylisticSet8(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet9Property(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetStylisticSet9(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetStylisticSet9(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet10Property(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetStylisticSet10(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetStylisticSet10(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet11Property(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetStylisticSet11(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetStylisticSet11(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet12Property(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetStylisticSet12(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetStylisticSet12(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet13Property(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetStylisticSet13(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetStylisticSet13(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet14Property(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetStylisticSet14(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetStylisticSet14(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet15Property(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetStylisticSet15(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetStylisticSet15(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet16Property(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetStylisticSet16(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetStylisticSet16(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet17Property(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetStylisticSet17(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetStylisticSet17(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet18Property(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetStylisticSet18(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetStylisticSet18(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet19Property(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetStylisticSet19(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetStylisticSet19(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet20Property(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetStylisticSet20(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetStylisticSet20(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_CapitalsProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetCapitals(::IUnknown* element, Windows::UI::Xaml::FontCapitals* value) = 0;
    virtual HRESULT __stdcall SetCapitals(::IUnknown* element, Windows::UI::Xaml::FontCapitals value) = 0;
    virtual HRESULT __stdcall get_CapitalSpacingProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetCapitalSpacing(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetCapitalSpacing(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_KerningProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetKerning(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetKerning(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_CaseSensitiveFormsProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetCaseSensitiveForms(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetCaseSensitiveForms(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_HistoricalFormsProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetHistoricalForms(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetHistoricalForms(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_FractionProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetFraction(::IUnknown* element, Windows::UI::Xaml::FontFraction* value) = 0;
    virtual HRESULT __stdcall SetFraction(::IUnknown* element, Windows::UI::Xaml::FontFraction value) = 0;
    virtual HRESULT __stdcall get_NumeralStyleProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetNumeralStyle(::IUnknown* element, Windows::UI::Xaml::FontNumeralStyle* value) = 0;
    virtual HRESULT __stdcall SetNumeralStyle(::IUnknown* element, Windows::UI::Xaml::FontNumeralStyle value) = 0;
    virtual HRESULT __stdcall get_NumeralAlignmentProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetNumeralAlignment(::IUnknown* element, Windows::UI::Xaml::FontNumeralAlignment* value) = 0;
    virtual HRESULT __stdcall SetNumeralAlignment(::IUnknown* element, Windows::UI::Xaml::FontNumeralAlignment value) = 0;
    virtual HRESULT __stdcall get_SlashedZeroProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetSlashedZero(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetSlashedZero(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_MathematicalGreekProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetMathematicalGreek(::IUnknown* element, bool* value) = 0;
    virtual HRESULT __stdcall SetMathematicalGreek(::IUnknown* element, bool value) = 0;
    virtual HRESULT __stdcall get_VariantsProperty(::IUnknown** value) = 0;
    virtual HRESULT __stdcall GetVariants(::IUnknown* element, Windows::UI::Xaml::FontVariants* value) = 0;
    virtual HRESULT __stdcall SetVariants(::IUnknown* element, Windows::UI::Xaml::FontVariants value) = 0;
};};

template <> struct abi<Windows::UI::Xaml::Documents::IUnderline>{ struct type : ::IInspectable
{
};};

}
