// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.UI.Xaml.Documents.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.UI.Text.0.h"
#include "Windows.UI.Xaml.0.h"
#include "Windows.UI.Xaml.Media.0.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Xaml::Documents {

struct __declspec(uuid("4bce0016-dd47-4350-8cb0-e171600ac896")) __declspec(novtable) IBlock : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TextAlignment(winrt::Windows::UI::Xaml::TextAlignment * value) = 0;
    virtual HRESULT __stdcall put_TextAlignment(winrt::Windows::UI::Xaml::TextAlignment value) = 0;
    virtual HRESULT __stdcall get_LineHeight(double * value) = 0;
    virtual HRESULT __stdcall put_LineHeight(double value) = 0;
    virtual HRESULT __stdcall get_LineStackingStrategy(winrt::Windows::UI::Xaml::LineStackingStrategy * value) = 0;
    virtual HRESULT __stdcall put_LineStackingStrategy(winrt::Windows::UI::Xaml::LineStackingStrategy value) = 0;
    virtual HRESULT __stdcall get_Margin(Windows::UI::Xaml::Thickness * value) = 0;
    virtual HRESULT __stdcall put_Margin(Windows::UI::Xaml::Thickness value) = 0;
};

struct __declspec(uuid("07110532-4f59-4f3b-9ce5-25784c430507")) __declspec(novtable) IBlockFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::Documents::IBlock ** instance) = 0;
};

struct __declspec(uuid("f86a8c34-8d18-4c53-aebd-91e610a5e010")) __declspec(novtable) IBlockStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TextAlignmentProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_LineHeightProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_LineStackingStrategyProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_MarginProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("ade73784-1b59-4da4-bb23-0f20e885b4bf")) __declspec(novtable) IBold : Windows::IInspectable
{
};

struct __declspec(uuid("d079498b-f2b1-4281-99a2-e4d05932b2b5")) __declspec(novtable) IGlyphs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_UnicodeString(hstring * value) = 0;
    virtual HRESULT __stdcall put_UnicodeString(hstring value) = 0;
    virtual HRESULT __stdcall get_Indices(hstring * value) = 0;
    virtual HRESULT __stdcall put_Indices(hstring value) = 0;
    virtual HRESULT __stdcall get_FontUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_FontUri(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall get_StyleSimulations(winrt::Windows::UI::Xaml::Media::StyleSimulations * value) = 0;
    virtual HRESULT __stdcall put_StyleSimulations(winrt::Windows::UI::Xaml::Media::StyleSimulations value) = 0;
    virtual HRESULT __stdcall get_FontRenderingEmSize(double * value) = 0;
    virtual HRESULT __stdcall put_FontRenderingEmSize(double value) = 0;
    virtual HRESULT __stdcall get_OriginX(double * value) = 0;
    virtual HRESULT __stdcall put_OriginX(double value) = 0;
    virtual HRESULT __stdcall get_OriginY(double * value) = 0;
    virtual HRESULT __stdcall put_OriginY(double value) = 0;
    virtual HRESULT __stdcall get_Fill(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_Fill(Windows::UI::Xaml::Media::IBrush * value) = 0;
};

struct __declspec(uuid("aa8bfe5c-3754-4bee-bbe1-4403ee9b86f0")) __declspec(novtable) IGlyphs2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsColorFontEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsColorFontEnabled(bool value) = 0;
    virtual HRESULT __stdcall get_ColorFontPaletteIndex(int32_t * value) = 0;
    virtual HRESULT __stdcall put_ColorFontPaletteIndex(int32_t value) = 0;
};

struct __declspec(uuid("225cf4c5-fdf1-43ed-958f-414e86f103f2")) __declspec(novtable) IGlyphsStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_UnicodeStringProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_IndicesProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_FontUriProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_StyleSimulationsProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_FontRenderingEmSizeProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_OriginXProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_OriginYProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_FillProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("10489aa7-1615-4a33-aa02-d7ef2aefc739")) __declspec(novtable) IGlyphsStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsColorFontEnabledProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ColorFontPaletteIndexProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("0fe2363b-14e9-4152-9e58-5aea5b21f08d")) __declspec(novtable) IHyperlink : Windows::IInspectable
{
    virtual HRESULT __stdcall get_NavigateUri(Windows::Foundation::IUriRuntimeClass ** value) = 0;
    virtual HRESULT __stdcall put_NavigateUri(Windows::Foundation::IUriRuntimeClass * value) = 0;
    virtual HRESULT __stdcall add_Click(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Documents::Hyperlink, Windows::UI::Xaml::Documents::HyperlinkClickEventArgs> * value, event_token * token) = 0;
    virtual HRESULT __stdcall remove_Click(event_token token) = 0;
};

struct __declspec(uuid("4ce9da5f-7cff-4291-b78f-dfec72490576")) __declspec(novtable) IHyperlink2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_UnderlineStyle(winrt::Windows::UI::Xaml::Documents::UnderlineStyle * value) = 0;
    virtual HRESULT __stdcall put_UnderlineStyle(winrt::Windows::UI::Xaml::Documents::UnderlineStyle value) = 0;
};

struct __declspec(uuid("c3f157d9-e5d3-4fb7-8702-4f6d85dd9e0a")) __declspec(novtable) IHyperlink3 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_XYFocusLeft(Windows::UI::Xaml::IDependencyObject ** value) = 0;
    virtual HRESULT __stdcall put_XYFocusLeft(Windows::UI::Xaml::IDependencyObject * value) = 0;
    virtual HRESULT __stdcall get_XYFocusRight(Windows::UI::Xaml::IDependencyObject ** value) = 0;
    virtual HRESULT __stdcall put_XYFocusRight(Windows::UI::Xaml::IDependencyObject * value) = 0;
    virtual HRESULT __stdcall get_XYFocusUp(Windows::UI::Xaml::IDependencyObject ** value) = 0;
    virtual HRESULT __stdcall put_XYFocusUp(Windows::UI::Xaml::IDependencyObject * value) = 0;
    virtual HRESULT __stdcall get_XYFocusDown(Windows::UI::Xaml::IDependencyObject ** value) = 0;
    virtual HRESULT __stdcall put_XYFocusDown(Windows::UI::Xaml::IDependencyObject * value) = 0;
    virtual HRESULT __stdcall get_ElementSoundMode(winrt::Windows::UI::Xaml::ElementSoundMode * value) = 0;
    virtual HRESULT __stdcall put_ElementSoundMode(winrt::Windows::UI::Xaml::ElementSoundMode value) = 0;
};

struct __declspec(uuid("c755916b-7bdc-4be7-b373-9240a503d870")) __declspec(novtable) IHyperlinkClickEventArgs : Windows::IInspectable
{
};

struct __declspec(uuid("3a44d3d4-fd41-41db-8c72-3b790acd9fd3")) __declspec(novtable) IHyperlinkStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_NavigateUriProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("5028d8b7-7adf-43ee-a4ae-9c925f755716")) __declspec(novtable) IHyperlinkStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_UnderlineStyleProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("3e15dea0-205e-4947-99a5-74e757e8e1b4")) __declspec(novtable) IHyperlinkStatics3 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_XYFocusLeftProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_XYFocusRightProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_XYFocusUpProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_XYFocusDownProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ElementSoundModeProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("0c92712d-1bc9-4931-8cb1-1aeadf1cc685")) __declspec(novtable) IInline : Windows::IInspectable
{
};

struct __declspec(uuid("4058acd1-2f90-4b8f-99dd-4218ef5f03de")) __declspec(novtable) IInlineFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::Documents::IInline ** instance) = 0;
};

struct __declspec(uuid("1416ce81-28ee-452e-b121-5fc4f60b86a6")) __declspec(novtable) IInlineUIContainer : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Child(Windows::UI::Xaml::IUIElement ** value) = 0;
    virtual HRESULT __stdcall put_Child(Windows::UI::Xaml::IUIElement * value) = 0;
};

struct __declspec(uuid("91f4619c-fcbb-4157-802c-76f63b5fb657")) __declspec(novtable) IItalic : Windows::IInspectable
{
};

struct __declspec(uuid("645589c4-f769-41ed-895b-8a1b2fb31562")) __declspec(novtable) ILineBreak : Windows::IInspectable
{
};

struct __declspec(uuid("f83ef59a-fa61-4bef-ae33-0b0ad756a84d")) __declspec(novtable) IParagraph : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Inlines(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Documents::Inline> ** value) = 0;
    virtual HRESULT __stdcall get_TextIndent(double * value) = 0;
    virtual HRESULT __stdcall put_TextIndent(double value) = 0;
};

struct __declspec(uuid("ef08889a-535b-4e4c-8d84-283b33e98a37")) __declspec(novtable) IParagraphStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_TextIndentProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("59553c83-0e14-49bd-b84b-c526f3034349")) __declspec(novtable) IRun : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Text(hstring * value) = 0;
    virtual HRESULT __stdcall put_Text(hstring value) = 0;
    virtual HRESULT __stdcall get_FlowDirection(winrt::Windows::UI::Xaml::FlowDirection * value) = 0;
    virtual HRESULT __stdcall put_FlowDirection(winrt::Windows::UI::Xaml::FlowDirection value) = 0;
};

struct __declspec(uuid("e9303cef-65a0-4b8d-a7f7-8fdb287b46f3")) __declspec(novtable) IRunStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_FlowDirectionProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("9839d4a9-02af-4811-aa15-6bef3acac97a")) __declspec(novtable) ISpan : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Inlines(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Documents::Inline> ** value) = 0;
    virtual HRESULT __stdcall put_Inlines(Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Documents::Inline> * value) = 0;
};

struct __declspec(uuid("5b916f5c-cd2d-40c0-956a-386448322f79")) __declspec(novtable) ISpanFactory : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_CreateInstance(Windows::IInspectable * outer, Windows::IInspectable ** inner, Windows::UI::Xaml::Documents::ISpan ** instance) = 0;
};

struct __declspec(uuid("e83b0062-d776-4f92-baea-40e77d4791d5")) __declspec(novtable) ITextElement : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall get_FontSize(double * value) = 0;
    virtual HRESULT __stdcall put_FontSize(double value) = 0;
    virtual HRESULT __stdcall get_FontFamily(Windows::UI::Xaml::Media::IFontFamily ** value) = 0;
    virtual HRESULT __stdcall put_FontFamily(Windows::UI::Xaml::Media::IFontFamily * value) = 0;
    virtual HRESULT __stdcall get_FontWeight(Windows::UI::Text::FontWeight * value) = 0;
    virtual HRESULT __stdcall put_FontWeight(Windows::UI::Text::FontWeight value) = 0;
    virtual HRESULT __stdcall get_FontStyle(winrt::Windows::UI::Text::FontStyle * value) = 0;
    virtual HRESULT __stdcall put_FontStyle(winrt::Windows::UI::Text::FontStyle value) = 0;
    virtual HRESULT __stdcall get_FontStretch(winrt::Windows::UI::Text::FontStretch * value) = 0;
    virtual HRESULT __stdcall put_FontStretch(winrt::Windows::UI::Text::FontStretch value) = 0;
    virtual HRESULT __stdcall get_CharacterSpacing(int32_t * value) = 0;
    virtual HRESULT __stdcall put_CharacterSpacing(int32_t value) = 0;
    virtual HRESULT __stdcall get_Foreground(Windows::UI::Xaml::Media::IBrush ** value) = 0;
    virtual HRESULT __stdcall put_Foreground(Windows::UI::Xaml::Media::IBrush * value) = 0;
    virtual HRESULT __stdcall get_Language(hstring * value) = 0;
    virtual HRESULT __stdcall put_Language(hstring value) = 0;
    virtual HRESULT __stdcall get_ContentStart(Windows::UI::Xaml::Documents::ITextPointer ** value) = 0;
    virtual HRESULT __stdcall get_ContentEnd(Windows::UI::Xaml::Documents::ITextPointer ** value) = 0;
    virtual HRESULT __stdcall get_ElementStart(Windows::UI::Xaml::Documents::ITextPointer ** value) = 0;
    virtual HRESULT __stdcall get_ElementEnd(Windows::UI::Xaml::Documents::ITextPointer ** value) = 0;
    virtual HRESULT __stdcall abi_FindName(hstring name, Windows::IInspectable ** returnValue) = 0;
};

struct __declspec(uuid("a8076aa8-f892-49f6-8cd2-89addaf06d2d")) __declspec(novtable) ITextElement2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsTextScaleFactorEnabled(bool * value) = 0;
    virtual HRESULT __stdcall put_IsTextScaleFactorEnabled(bool value) = 0;
};

struct __declspec(uuid("d1db340f-1bc4-4ca8-bcf7-770bff9b27ab")) __declspec(novtable) ITextElement3 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AllowFocusOnInteraction(bool * value) = 0;
    virtual HRESULT __stdcall put_AllowFocusOnInteraction(bool value) = 0;
    virtual HRESULT __stdcall get_AccessKey(hstring * value) = 0;
    virtual HRESULT __stdcall put_AccessKey(hstring value) = 0;
    virtual HRESULT __stdcall get_ExitDisplayModeOnAccessKeyInvoked(bool * value) = 0;
    virtual HRESULT __stdcall put_ExitDisplayModeOnAccessKeyInvoked(bool value) = 0;
};

struct __declspec(uuid("35007285-cf47-4bfe-b1bc-39c93af4ae80")) __declspec(novtable) ITextElementFactory : Windows::IInspectable
{
};

struct __declspec(uuid("0ce21ee7-4f76-4dd9-bf91-163beccf84bc")) __declspec(novtable) ITextElementOverrides : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_OnDisconnectVisualChildren() = 0;
};

struct __declspec(uuid("0a2f9b98-6c03-4470-a79b-3298a10482ce")) __declspec(novtable) ITextElementStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_FontSizeProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_FontFamilyProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_FontWeightProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_FontStyleProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_FontStretchProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_CharacterSpacingProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ForegroundProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_LanguageProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("164297b2-982b-49e1-8c03-ca43bc4d5b6d")) __declspec(novtable) ITextElementStatics2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsTextScaleFactorEnabledProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("cfefcfaf-0fa1-45ec-9a4e-9b33664dc8b1")) __declspec(novtable) ITextElementStatics3 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AllowFocusOnInteractionProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_AccessKeyProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall get_ExitDisplayModeOnAccessKeyInvokedProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
};

struct __declspec(uuid("ac687aa1-6a41-43ff-851e-45348aa2cf7b")) __declspec(novtable) ITextPointer : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Parent(Windows::UI::Xaml::IDependencyObject ** value) = 0;
    virtual HRESULT __stdcall get_VisualParent(Windows::UI::Xaml::IFrameworkElement ** value) = 0;
    virtual HRESULT __stdcall get_LogicalDirection(winrt::Windows::UI::Xaml::Documents::LogicalDirection * value) = 0;
    virtual HRESULT __stdcall get_Offset(int32_t * value) = 0;
    virtual HRESULT __stdcall abi_GetCharacterRect(winrt::Windows::UI::Xaml::Documents::LogicalDirection direction, Windows::Foundation::Rect * returnValue) = 0;
    virtual HRESULT __stdcall abi_GetPositionAtOffset(int32_t offset, winrt::Windows::UI::Xaml::Documents::LogicalDirection direction, Windows::UI::Xaml::Documents::ITextPointer ** returnValue) = 0;
};

struct __declspec(uuid("866f65d5-ea97-42ab-9288-9c01aebc7a97")) __declspec(novtable) ITypography : Windows::IInspectable
{
};

struct __declspec(uuid("67b9ec88-6c57-4ce0-95f1-d4b9ed632fb4")) __declspec(novtable) ITypographyStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AnnotationAlternatesProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetAnnotationAlternates(Windows::UI::Xaml::IDependencyObject * element, int32_t * value) = 0;
    virtual HRESULT __stdcall abi_SetAnnotationAlternates(Windows::UI::Xaml::IDependencyObject * element, int32_t value) = 0;
    virtual HRESULT __stdcall get_EastAsianExpertFormsProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetEastAsianExpertForms(Windows::UI::Xaml::IDependencyObject * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetEastAsianExpertForms(Windows::UI::Xaml::IDependencyObject * element, bool value) = 0;
    virtual HRESULT __stdcall get_EastAsianLanguageProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetEastAsianLanguage(Windows::UI::Xaml::IDependencyObject * element, winrt::Windows::UI::Xaml::FontEastAsianLanguage * value) = 0;
    virtual HRESULT __stdcall abi_SetEastAsianLanguage(Windows::UI::Xaml::IDependencyObject * element, winrt::Windows::UI::Xaml::FontEastAsianLanguage value) = 0;
    virtual HRESULT __stdcall get_EastAsianWidthsProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetEastAsianWidths(Windows::UI::Xaml::IDependencyObject * element, winrt::Windows::UI::Xaml::FontEastAsianWidths * value) = 0;
    virtual HRESULT __stdcall abi_SetEastAsianWidths(Windows::UI::Xaml::IDependencyObject * element, winrt::Windows::UI::Xaml::FontEastAsianWidths value) = 0;
    virtual HRESULT __stdcall get_StandardLigaturesProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetStandardLigatures(Windows::UI::Xaml::IDependencyObject * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetStandardLigatures(Windows::UI::Xaml::IDependencyObject * element, bool value) = 0;
    virtual HRESULT __stdcall get_ContextualLigaturesProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetContextualLigatures(Windows::UI::Xaml::IDependencyObject * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetContextualLigatures(Windows::UI::Xaml::IDependencyObject * element, bool value) = 0;
    virtual HRESULT __stdcall get_DiscretionaryLigaturesProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetDiscretionaryLigatures(Windows::UI::Xaml::IDependencyObject * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetDiscretionaryLigatures(Windows::UI::Xaml::IDependencyObject * element, bool value) = 0;
    virtual HRESULT __stdcall get_HistoricalLigaturesProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetHistoricalLigatures(Windows::UI::Xaml::IDependencyObject * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetHistoricalLigatures(Windows::UI::Xaml::IDependencyObject * element, bool value) = 0;
    virtual HRESULT __stdcall get_StandardSwashesProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetStandardSwashes(Windows::UI::Xaml::IDependencyObject * element, int32_t * value) = 0;
    virtual HRESULT __stdcall abi_SetStandardSwashes(Windows::UI::Xaml::IDependencyObject * element, int32_t value) = 0;
    virtual HRESULT __stdcall get_ContextualSwashesProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetContextualSwashes(Windows::UI::Xaml::IDependencyObject * element, int32_t * value) = 0;
    virtual HRESULT __stdcall abi_SetContextualSwashes(Windows::UI::Xaml::IDependencyObject * element, int32_t value) = 0;
    virtual HRESULT __stdcall get_ContextualAlternatesProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetContextualAlternates(Windows::UI::Xaml::IDependencyObject * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetContextualAlternates(Windows::UI::Xaml::IDependencyObject * element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticAlternatesProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetStylisticAlternates(Windows::UI::Xaml::IDependencyObject * element, int32_t * value) = 0;
    virtual HRESULT __stdcall abi_SetStylisticAlternates(Windows::UI::Xaml::IDependencyObject * element, int32_t value) = 0;
    virtual HRESULT __stdcall get_StylisticSet1Property(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetStylisticSet1(Windows::UI::Xaml::IDependencyObject * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetStylisticSet1(Windows::UI::Xaml::IDependencyObject * element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet2Property(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetStylisticSet2(Windows::UI::Xaml::IDependencyObject * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetStylisticSet2(Windows::UI::Xaml::IDependencyObject * element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet3Property(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetStylisticSet3(Windows::UI::Xaml::IDependencyObject * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetStylisticSet3(Windows::UI::Xaml::IDependencyObject * element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet4Property(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetStylisticSet4(Windows::UI::Xaml::IDependencyObject * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetStylisticSet4(Windows::UI::Xaml::IDependencyObject * element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet5Property(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetStylisticSet5(Windows::UI::Xaml::IDependencyObject * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetStylisticSet5(Windows::UI::Xaml::IDependencyObject * element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet6Property(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetStylisticSet6(Windows::UI::Xaml::IDependencyObject * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetStylisticSet6(Windows::UI::Xaml::IDependencyObject * element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet7Property(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetStylisticSet7(Windows::UI::Xaml::IDependencyObject * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetStylisticSet7(Windows::UI::Xaml::IDependencyObject * element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet8Property(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetStylisticSet8(Windows::UI::Xaml::IDependencyObject * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetStylisticSet8(Windows::UI::Xaml::IDependencyObject * element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet9Property(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetStylisticSet9(Windows::UI::Xaml::IDependencyObject * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetStylisticSet9(Windows::UI::Xaml::IDependencyObject * element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet10Property(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetStylisticSet10(Windows::UI::Xaml::IDependencyObject * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetStylisticSet10(Windows::UI::Xaml::IDependencyObject * element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet11Property(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetStylisticSet11(Windows::UI::Xaml::IDependencyObject * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetStylisticSet11(Windows::UI::Xaml::IDependencyObject * element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet12Property(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetStylisticSet12(Windows::UI::Xaml::IDependencyObject * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetStylisticSet12(Windows::UI::Xaml::IDependencyObject * element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet13Property(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetStylisticSet13(Windows::UI::Xaml::IDependencyObject * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetStylisticSet13(Windows::UI::Xaml::IDependencyObject * element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet14Property(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetStylisticSet14(Windows::UI::Xaml::IDependencyObject * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetStylisticSet14(Windows::UI::Xaml::IDependencyObject * element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet15Property(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetStylisticSet15(Windows::UI::Xaml::IDependencyObject * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetStylisticSet15(Windows::UI::Xaml::IDependencyObject * element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet16Property(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetStylisticSet16(Windows::UI::Xaml::IDependencyObject * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetStylisticSet16(Windows::UI::Xaml::IDependencyObject * element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet17Property(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetStylisticSet17(Windows::UI::Xaml::IDependencyObject * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetStylisticSet17(Windows::UI::Xaml::IDependencyObject * element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet18Property(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetStylisticSet18(Windows::UI::Xaml::IDependencyObject * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetStylisticSet18(Windows::UI::Xaml::IDependencyObject * element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet19Property(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetStylisticSet19(Windows::UI::Xaml::IDependencyObject * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetStylisticSet19(Windows::UI::Xaml::IDependencyObject * element, bool value) = 0;
    virtual HRESULT __stdcall get_StylisticSet20Property(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetStylisticSet20(Windows::UI::Xaml::IDependencyObject * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetStylisticSet20(Windows::UI::Xaml::IDependencyObject * element, bool value) = 0;
    virtual HRESULT __stdcall get_CapitalsProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetCapitals(Windows::UI::Xaml::IDependencyObject * element, winrt::Windows::UI::Xaml::FontCapitals * value) = 0;
    virtual HRESULT __stdcall abi_SetCapitals(Windows::UI::Xaml::IDependencyObject * element, winrt::Windows::UI::Xaml::FontCapitals value) = 0;
    virtual HRESULT __stdcall get_CapitalSpacingProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetCapitalSpacing(Windows::UI::Xaml::IDependencyObject * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetCapitalSpacing(Windows::UI::Xaml::IDependencyObject * element, bool value) = 0;
    virtual HRESULT __stdcall get_KerningProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetKerning(Windows::UI::Xaml::IDependencyObject * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetKerning(Windows::UI::Xaml::IDependencyObject * element, bool value) = 0;
    virtual HRESULT __stdcall get_CaseSensitiveFormsProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetCaseSensitiveForms(Windows::UI::Xaml::IDependencyObject * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetCaseSensitiveForms(Windows::UI::Xaml::IDependencyObject * element, bool value) = 0;
    virtual HRESULT __stdcall get_HistoricalFormsProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetHistoricalForms(Windows::UI::Xaml::IDependencyObject * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetHistoricalForms(Windows::UI::Xaml::IDependencyObject * element, bool value) = 0;
    virtual HRESULT __stdcall get_FractionProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetFraction(Windows::UI::Xaml::IDependencyObject * element, winrt::Windows::UI::Xaml::FontFraction * value) = 0;
    virtual HRESULT __stdcall abi_SetFraction(Windows::UI::Xaml::IDependencyObject * element, winrt::Windows::UI::Xaml::FontFraction value) = 0;
    virtual HRESULT __stdcall get_NumeralStyleProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetNumeralStyle(Windows::UI::Xaml::IDependencyObject * element, winrt::Windows::UI::Xaml::FontNumeralStyle * value) = 0;
    virtual HRESULT __stdcall abi_SetNumeralStyle(Windows::UI::Xaml::IDependencyObject * element, winrt::Windows::UI::Xaml::FontNumeralStyle value) = 0;
    virtual HRESULT __stdcall get_NumeralAlignmentProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetNumeralAlignment(Windows::UI::Xaml::IDependencyObject * element, winrt::Windows::UI::Xaml::FontNumeralAlignment * value) = 0;
    virtual HRESULT __stdcall abi_SetNumeralAlignment(Windows::UI::Xaml::IDependencyObject * element, winrt::Windows::UI::Xaml::FontNumeralAlignment value) = 0;
    virtual HRESULT __stdcall get_SlashedZeroProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetSlashedZero(Windows::UI::Xaml::IDependencyObject * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetSlashedZero(Windows::UI::Xaml::IDependencyObject * element, bool value) = 0;
    virtual HRESULT __stdcall get_MathematicalGreekProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetMathematicalGreek(Windows::UI::Xaml::IDependencyObject * element, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetMathematicalGreek(Windows::UI::Xaml::IDependencyObject * element, bool value) = 0;
    virtual HRESULT __stdcall get_VariantsProperty(Windows::UI::Xaml::IDependencyProperty ** value) = 0;
    virtual HRESULT __stdcall abi_GetVariants(Windows::UI::Xaml::IDependencyObject * element, winrt::Windows::UI::Xaml::FontVariants * value) = 0;
    virtual HRESULT __stdcall abi_SetVariants(Windows::UI::Xaml::IDependencyObject * element, winrt::Windows::UI::Xaml::FontVariants value) = 0;
};

struct __declspec(uuid("a5fa8202-61c0-47d7-93ef-bc0b577c5f26")) __declspec(novtable) IUnderline : Windows::IInspectable
{
};

}

namespace ABI {

template <> struct traits<Windows::UI::Xaml::Documents::Block> { using default_interface = Windows::UI::Xaml::Documents::IBlock; };
template <> struct traits<Windows::UI::Xaml::Documents::BlockCollection> { using default_interface = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Documents::Block>; };
template <> struct traits<Windows::UI::Xaml::Documents::Bold> { using default_interface = Windows::UI::Xaml::Documents::IBold; };
template <> struct traits<Windows::UI::Xaml::Documents::Glyphs> { using default_interface = Windows::UI::Xaml::Documents::IGlyphs; };
template <> struct traits<Windows::UI::Xaml::Documents::Hyperlink> { using default_interface = Windows::UI::Xaml::Documents::IHyperlink; };
template <> struct traits<Windows::UI::Xaml::Documents::HyperlinkClickEventArgs> { using default_interface = Windows::UI::Xaml::Documents::IHyperlinkClickEventArgs; };
template <> struct traits<Windows::UI::Xaml::Documents::Inline> { using default_interface = Windows::UI::Xaml::Documents::IInline; };
template <> struct traits<Windows::UI::Xaml::Documents::InlineCollection> { using default_interface = Windows::Foundation::Collections::IVector<Windows::UI::Xaml::Documents::Inline>; };
template <> struct traits<Windows::UI::Xaml::Documents::InlineUIContainer> { using default_interface = Windows::UI::Xaml::Documents::IInlineUIContainer; };
template <> struct traits<Windows::UI::Xaml::Documents::Italic> { using default_interface = Windows::UI::Xaml::Documents::IItalic; };
template <> struct traits<Windows::UI::Xaml::Documents::LineBreak> { using default_interface = Windows::UI::Xaml::Documents::ILineBreak; };
template <> struct traits<Windows::UI::Xaml::Documents::Paragraph> { using default_interface = Windows::UI::Xaml::Documents::IParagraph; };
template <> struct traits<Windows::UI::Xaml::Documents::Run> { using default_interface = Windows::UI::Xaml::Documents::IRun; };
template <> struct traits<Windows::UI::Xaml::Documents::Span> { using default_interface = Windows::UI::Xaml::Documents::ISpan; };
template <> struct traits<Windows::UI::Xaml::Documents::TextElement> { using default_interface = Windows::UI::Xaml::Documents::ITextElement; };
template <> struct traits<Windows::UI::Xaml::Documents::TextPointer> { using default_interface = Windows::UI::Xaml::Documents::ITextPointer; };
template <> struct traits<Windows::UI::Xaml::Documents::Typography> { using default_interface = Windows::UI::Xaml::Documents::ITypography; };
template <> struct traits<Windows::UI::Xaml::Documents::Underline> { using default_interface = Windows::UI::Xaml::Documents::IUnderline; };

}

namespace Windows::UI::Xaml::Documents {

template <typename T> struct impl_IBlock;
template <typename T> struct impl_IBlockFactory;
template <typename T> struct impl_IBlockStatics;
template <typename T> struct impl_IBold;
template <typename T> struct impl_IGlyphs;
template <typename T> struct impl_IGlyphs2;
template <typename T> struct impl_IGlyphsStatics;
template <typename T> struct impl_IGlyphsStatics2;
template <typename T> struct impl_IHyperlink;
template <typename T> struct impl_IHyperlink2;
template <typename T> struct impl_IHyperlink3;
template <typename T> struct impl_IHyperlinkClickEventArgs;
template <typename T> struct impl_IHyperlinkStatics;
template <typename T> struct impl_IHyperlinkStatics2;
template <typename T> struct impl_IHyperlinkStatics3;
template <typename T> struct impl_IInline;
template <typename T> struct impl_IInlineFactory;
template <typename T> struct impl_IInlineUIContainer;
template <typename T> struct impl_IItalic;
template <typename T> struct impl_ILineBreak;
template <typename T> struct impl_IParagraph;
template <typename T> struct impl_IParagraphStatics;
template <typename T> struct impl_IRun;
template <typename T> struct impl_IRunStatics;
template <typename T> struct impl_ISpan;
template <typename T> struct impl_ISpanFactory;
template <typename T> struct impl_ITextElement;
template <typename T> struct impl_ITextElement2;
template <typename T> struct impl_ITextElement3;
template <typename T> struct impl_ITextElementFactory;
template <typename T> struct impl_ITextElementOverrides;
template <typename T> struct impl_ITextElementStatics;
template <typename T> struct impl_ITextElementStatics2;
template <typename T> struct impl_ITextElementStatics3;
template <typename T> struct impl_ITextPointer;
template <typename T> struct impl_ITypography;
template <typename T> struct impl_ITypographyStatics;
template <typename T> struct impl_IUnderline;

}

namespace impl {

template <> struct traits<Windows::UI::Xaml::Documents::IBlock>
{
    using abi = ABI::Windows::UI::Xaml::Documents::IBlock;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_IBlock<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::IBlockFactory>
{
    using abi = ABI::Windows::UI::Xaml::Documents::IBlockFactory;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_IBlockFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::IBlockStatics>
{
    using abi = ABI::Windows::UI::Xaml::Documents::IBlockStatics;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_IBlockStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::IBold>
{
    using abi = ABI::Windows::UI::Xaml::Documents::IBold;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_IBold<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::IGlyphs>
{
    using abi = ABI::Windows::UI::Xaml::Documents::IGlyphs;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_IGlyphs<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::IGlyphs2>
{
    using abi = ABI::Windows::UI::Xaml::Documents::IGlyphs2;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_IGlyphs2<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::IGlyphsStatics>
{
    using abi = ABI::Windows::UI::Xaml::Documents::IGlyphsStatics;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_IGlyphsStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::IGlyphsStatics2>
{
    using abi = ABI::Windows::UI::Xaml::Documents::IGlyphsStatics2;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_IGlyphsStatics2<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::IHyperlink>
{
    using abi = ABI::Windows::UI::Xaml::Documents::IHyperlink;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_IHyperlink<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::IHyperlink2>
{
    using abi = ABI::Windows::UI::Xaml::Documents::IHyperlink2;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_IHyperlink2<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::IHyperlink3>
{
    using abi = ABI::Windows::UI::Xaml::Documents::IHyperlink3;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_IHyperlink3<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::IHyperlinkClickEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::Documents::IHyperlinkClickEventArgs;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_IHyperlinkClickEventArgs<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::IHyperlinkStatics>
{
    using abi = ABI::Windows::UI::Xaml::Documents::IHyperlinkStatics;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_IHyperlinkStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::IHyperlinkStatics2>
{
    using abi = ABI::Windows::UI::Xaml::Documents::IHyperlinkStatics2;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_IHyperlinkStatics2<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::IHyperlinkStatics3>
{
    using abi = ABI::Windows::UI::Xaml::Documents::IHyperlinkStatics3;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_IHyperlinkStatics3<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::IInline>
{
    using abi = ABI::Windows::UI::Xaml::Documents::IInline;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_IInline<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::IInlineFactory>
{
    using abi = ABI::Windows::UI::Xaml::Documents::IInlineFactory;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_IInlineFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::IInlineUIContainer>
{
    using abi = ABI::Windows::UI::Xaml::Documents::IInlineUIContainer;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_IInlineUIContainer<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::IItalic>
{
    using abi = ABI::Windows::UI::Xaml::Documents::IItalic;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_IItalic<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::ILineBreak>
{
    using abi = ABI::Windows::UI::Xaml::Documents::ILineBreak;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_ILineBreak<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::IParagraph>
{
    using abi = ABI::Windows::UI::Xaml::Documents::IParagraph;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_IParagraph<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::IParagraphStatics>
{
    using abi = ABI::Windows::UI::Xaml::Documents::IParagraphStatics;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_IParagraphStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::IRun>
{
    using abi = ABI::Windows::UI::Xaml::Documents::IRun;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_IRun<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::IRunStatics>
{
    using abi = ABI::Windows::UI::Xaml::Documents::IRunStatics;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_IRunStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::ISpan>
{
    using abi = ABI::Windows::UI::Xaml::Documents::ISpan;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_ISpan<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::ISpanFactory>
{
    using abi = ABI::Windows::UI::Xaml::Documents::ISpanFactory;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_ISpanFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::ITextElement>
{
    using abi = ABI::Windows::UI::Xaml::Documents::ITextElement;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_ITextElement<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::ITextElement2>
{
    using abi = ABI::Windows::UI::Xaml::Documents::ITextElement2;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_ITextElement2<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::ITextElement3>
{
    using abi = ABI::Windows::UI::Xaml::Documents::ITextElement3;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_ITextElement3<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::ITextElementFactory>
{
    using abi = ABI::Windows::UI::Xaml::Documents::ITextElementFactory;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_ITextElementFactory<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::ITextElementOverrides>
{
    using abi = ABI::Windows::UI::Xaml::Documents::ITextElementOverrides;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_ITextElementOverrides<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::ITextElementStatics>
{
    using abi = ABI::Windows::UI::Xaml::Documents::ITextElementStatics;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_ITextElementStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::ITextElementStatics2>
{
    using abi = ABI::Windows::UI::Xaml::Documents::ITextElementStatics2;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_ITextElementStatics2<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::ITextElementStatics3>
{
    using abi = ABI::Windows::UI::Xaml::Documents::ITextElementStatics3;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_ITextElementStatics3<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::ITextPointer>
{
    using abi = ABI::Windows::UI::Xaml::Documents::ITextPointer;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_ITextPointer<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::ITypography>
{
    using abi = ABI::Windows::UI::Xaml::Documents::ITypography;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_ITypography<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::ITypographyStatics>
{
    using abi = ABI::Windows::UI::Xaml::Documents::ITypographyStatics;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_ITypographyStatics<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::IUnderline>
{
    using abi = ABI::Windows::UI::Xaml::Documents::IUnderline;
    template <typename D> using consume = Windows::UI::Xaml::Documents::impl_IUnderline<D>;
};

template <> struct traits<Windows::UI::Xaml::Documents::Block>
{
    using abi = ABI::Windows::UI::Xaml::Documents::Block;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Documents.Block"; }
};

template <> struct traits<Windows::UI::Xaml::Documents::BlockCollection>
{
    using abi = ABI::Windows::UI::Xaml::Documents::BlockCollection;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Documents.BlockCollection"; }
};

template <> struct traits<Windows::UI::Xaml::Documents::Bold>
{
    using abi = ABI::Windows::UI::Xaml::Documents::Bold;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Documents.Bold"; }
};

template <> struct traits<Windows::UI::Xaml::Documents::Glyphs>
{
    using abi = ABI::Windows::UI::Xaml::Documents::Glyphs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Documents.Glyphs"; }
};

template <> struct traits<Windows::UI::Xaml::Documents::Hyperlink>
{
    using abi = ABI::Windows::UI::Xaml::Documents::Hyperlink;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Documents.Hyperlink"; }
};

template <> struct traits<Windows::UI::Xaml::Documents::HyperlinkClickEventArgs>
{
    using abi = ABI::Windows::UI::Xaml::Documents::HyperlinkClickEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Documents.HyperlinkClickEventArgs"; }
};

template <> struct traits<Windows::UI::Xaml::Documents::Inline>
{
    using abi = ABI::Windows::UI::Xaml::Documents::Inline;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Documents.Inline"; }
};

template <> struct traits<Windows::UI::Xaml::Documents::InlineCollection>
{
    using abi = ABI::Windows::UI::Xaml::Documents::InlineCollection;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Documents.InlineCollection"; }
};

template <> struct traits<Windows::UI::Xaml::Documents::InlineUIContainer>
{
    using abi = ABI::Windows::UI::Xaml::Documents::InlineUIContainer;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Documents.InlineUIContainer"; }
};

template <> struct traits<Windows::UI::Xaml::Documents::Italic>
{
    using abi = ABI::Windows::UI::Xaml::Documents::Italic;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Documents.Italic"; }
};

template <> struct traits<Windows::UI::Xaml::Documents::LineBreak>
{
    using abi = ABI::Windows::UI::Xaml::Documents::LineBreak;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Documents.LineBreak"; }
};

template <> struct traits<Windows::UI::Xaml::Documents::Paragraph>
{
    using abi = ABI::Windows::UI::Xaml::Documents::Paragraph;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Documents.Paragraph"; }
};

template <> struct traits<Windows::UI::Xaml::Documents::Run>
{
    using abi = ABI::Windows::UI::Xaml::Documents::Run;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Documents.Run"; }
};

template <> struct traits<Windows::UI::Xaml::Documents::Span>
{
    using abi = ABI::Windows::UI::Xaml::Documents::Span;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Documents.Span"; }
};

template <> struct traits<Windows::UI::Xaml::Documents::TextElement>
{
    using abi = ABI::Windows::UI::Xaml::Documents::TextElement;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Documents.TextElement"; }
};

template <> struct traits<Windows::UI::Xaml::Documents::TextPointer>
{
    using abi = ABI::Windows::UI::Xaml::Documents::TextPointer;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Documents.TextPointer"; }
};

template <> struct traits<Windows::UI::Xaml::Documents::Typography>
{
    using abi = ABI::Windows::UI::Xaml::Documents::Typography;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Documents.Typography"; }
};

template <> struct traits<Windows::UI::Xaml::Documents::Underline>
{
    using abi = ABI::Windows::UI::Xaml::Documents::Underline;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Xaml.Documents.Underline"; }
};

}

}
