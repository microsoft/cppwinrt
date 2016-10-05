// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.UI.Text.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.UI.0.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::UI::Text {

struct FontWeight
{
    uint16_t Weight;
};

}

namespace Windows::UI::Text {

using FontWeight = ABI::Windows::UI::Text::FontWeight;

}

namespace ABI::Windows::UI::Text {

struct __declspec(uuid("7880a444-01ab-4997-8517-df822a0c45f1")) __declspec(novtable) IFontWeights : Windows::IInspectable
{
};

struct __declspec(uuid("b3b579d5-1ba9-48eb-9dad-c095e8c23ba3")) __declspec(novtable) IFontWeightsStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Black(Windows::UI::Text::FontWeight * value) = 0;
    virtual HRESULT __stdcall get_Bold(Windows::UI::Text::FontWeight * value) = 0;
    virtual HRESULT __stdcall get_ExtraBlack(Windows::UI::Text::FontWeight * value) = 0;
    virtual HRESULT __stdcall get_ExtraBold(Windows::UI::Text::FontWeight * value) = 0;
    virtual HRESULT __stdcall get_ExtraLight(Windows::UI::Text::FontWeight * value) = 0;
    virtual HRESULT __stdcall get_Light(Windows::UI::Text::FontWeight * value) = 0;
    virtual HRESULT __stdcall get_Medium(Windows::UI::Text::FontWeight * value) = 0;
    virtual HRESULT __stdcall get_Normal(Windows::UI::Text::FontWeight * value) = 0;
    virtual HRESULT __stdcall get_SemiBold(Windows::UI::Text::FontWeight * value) = 0;
    virtual HRESULT __stdcall get_SemiLight(Windows::UI::Text::FontWeight * value) = 0;
    virtual HRESULT __stdcall get_Thin(Windows::UI::Text::FontWeight * value) = 0;
};

struct __declspec(uuid("5adef3db-05fb-442d-8065-642afea02ced")) __declspec(novtable) ITextCharacterFormat : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AllCaps(winrt::Windows::UI::Text::FormatEffect * value) = 0;
    virtual HRESULT __stdcall put_AllCaps(winrt::Windows::UI::Text::FormatEffect value) = 0;
    virtual HRESULT __stdcall get_BackgroundColor(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall put_BackgroundColor(Windows::UI::Color value) = 0;
    virtual HRESULT __stdcall get_Bold(winrt::Windows::UI::Text::FormatEffect * value) = 0;
    virtual HRESULT __stdcall put_Bold(winrt::Windows::UI::Text::FormatEffect value) = 0;
    virtual HRESULT __stdcall get_FontStretch(winrt::Windows::UI::Text::FontStretch * value) = 0;
    virtual HRESULT __stdcall put_FontStretch(winrt::Windows::UI::Text::FontStretch value) = 0;
    virtual HRESULT __stdcall get_FontStyle(winrt::Windows::UI::Text::FontStyle * value) = 0;
    virtual HRESULT __stdcall put_FontStyle(winrt::Windows::UI::Text::FontStyle value) = 0;
    virtual HRESULT __stdcall get_ForegroundColor(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall put_ForegroundColor(Windows::UI::Color value) = 0;
    virtual HRESULT __stdcall get_Hidden(winrt::Windows::UI::Text::FormatEffect * value) = 0;
    virtual HRESULT __stdcall put_Hidden(winrt::Windows::UI::Text::FormatEffect value) = 0;
    virtual HRESULT __stdcall get_Italic(winrt::Windows::UI::Text::FormatEffect * value) = 0;
    virtual HRESULT __stdcall put_Italic(winrt::Windows::UI::Text::FormatEffect value) = 0;
    virtual HRESULT __stdcall get_Kerning(float * value) = 0;
    virtual HRESULT __stdcall put_Kerning(float value) = 0;
    virtual HRESULT __stdcall get_LanguageTag(hstring * value) = 0;
    virtual HRESULT __stdcall put_LanguageTag(hstring value) = 0;
    virtual HRESULT __stdcall get_LinkType(winrt::Windows::UI::Text::LinkType * value) = 0;
    virtual HRESULT __stdcall get_Name(hstring * value) = 0;
    virtual HRESULT __stdcall put_Name(hstring value) = 0;
    virtual HRESULT __stdcall get_Outline(winrt::Windows::UI::Text::FormatEffect * value) = 0;
    virtual HRESULT __stdcall put_Outline(winrt::Windows::UI::Text::FormatEffect value) = 0;
    virtual HRESULT __stdcall get_Position(float * value) = 0;
    virtual HRESULT __stdcall put_Position(float value) = 0;
    virtual HRESULT __stdcall get_ProtectedText(winrt::Windows::UI::Text::FormatEffect * value) = 0;
    virtual HRESULT __stdcall put_ProtectedText(winrt::Windows::UI::Text::FormatEffect value) = 0;
    virtual HRESULT __stdcall get_Size(float * value) = 0;
    virtual HRESULT __stdcall put_Size(float value) = 0;
    virtual HRESULT __stdcall get_SmallCaps(winrt::Windows::UI::Text::FormatEffect * value) = 0;
    virtual HRESULT __stdcall put_SmallCaps(winrt::Windows::UI::Text::FormatEffect value) = 0;
    virtual HRESULT __stdcall get_Spacing(float * value) = 0;
    virtual HRESULT __stdcall put_Spacing(float value) = 0;
    virtual HRESULT __stdcall get_Strikethrough(winrt::Windows::UI::Text::FormatEffect * value) = 0;
    virtual HRESULT __stdcall put_Strikethrough(winrt::Windows::UI::Text::FormatEffect value) = 0;
    virtual HRESULT __stdcall get_Subscript(winrt::Windows::UI::Text::FormatEffect * value) = 0;
    virtual HRESULT __stdcall put_Subscript(winrt::Windows::UI::Text::FormatEffect value) = 0;
    virtual HRESULT __stdcall get_Superscript(winrt::Windows::UI::Text::FormatEffect * value) = 0;
    virtual HRESULT __stdcall put_Superscript(winrt::Windows::UI::Text::FormatEffect value) = 0;
    virtual HRESULT __stdcall get_TextScript(winrt::Windows::UI::Text::TextScript * value) = 0;
    virtual HRESULT __stdcall put_TextScript(winrt::Windows::UI::Text::TextScript value) = 0;
    virtual HRESULT __stdcall get_Underline(winrt::Windows::UI::Text::UnderlineType * value) = 0;
    virtual HRESULT __stdcall put_Underline(winrt::Windows::UI::Text::UnderlineType value) = 0;
    virtual HRESULT __stdcall get_Weight(int32_t * value) = 0;
    virtual HRESULT __stdcall put_Weight(int32_t value) = 0;
    virtual HRESULT __stdcall abi_SetClone(Windows::UI::Text::ITextCharacterFormat * value) = 0;
    virtual HRESULT __stdcall abi_GetClone(Windows::UI::Text::ITextCharacterFormat ** value) = 0;
    virtual HRESULT __stdcall abi_IsEqual(Windows::UI::Text::ITextCharacterFormat * format, bool * value) = 0;
};

struct __declspec(uuid("779e7c33-189d-4bfa-97c8-10db135d976e")) __declspec(novtable) ITextConstantsStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall get_AutoColor(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_MinUnitCount(int32_t * value) = 0;
    virtual HRESULT __stdcall get_MaxUnitCount(int32_t * value) = 0;
    virtual HRESULT __stdcall get_UndefinedColor(Windows::UI::Color * value) = 0;
    virtual HRESULT __stdcall get_UndefinedFloatValue(float * value) = 0;
    virtual HRESULT __stdcall get_UndefinedInt32Value(int32_t * value) = 0;
    virtual HRESULT __stdcall get_UndefinedFontStretch(winrt::Windows::UI::Text::FontStretch * value) = 0;
    virtual HRESULT __stdcall get_UndefinedFontStyle(winrt::Windows::UI::Text::FontStyle * value) = 0;
};

struct __declspec(uuid("beee4ddb-90b2-408c-a2f6-0a0ac31e33e4")) __declspec(novtable) ITextDocument : Windows::IInspectable
{
    virtual HRESULT __stdcall get_CaretType(winrt::Windows::UI::Text::CaretType * value) = 0;
    virtual HRESULT __stdcall put_CaretType(winrt::Windows::UI::Text::CaretType value) = 0;
    virtual HRESULT __stdcall get_DefaultTabStop(float * value) = 0;
    virtual HRESULT __stdcall put_DefaultTabStop(float value) = 0;
    virtual HRESULT __stdcall get_Selection(Windows::UI::Text::ITextSelection ** value) = 0;
    virtual HRESULT __stdcall get_UndoLimit(uint32_t * value) = 0;
    virtual HRESULT __stdcall put_UndoLimit(uint32_t value) = 0;
    virtual HRESULT __stdcall abi_CanCopy(bool * value) = 0;
    virtual HRESULT __stdcall abi_CanPaste(bool * value) = 0;
    virtual HRESULT __stdcall abi_CanRedo(bool * value) = 0;
    virtual HRESULT __stdcall abi_CanUndo(bool * value) = 0;
    virtual HRESULT __stdcall abi_ApplyDisplayUpdates(int32_t * count) = 0;
    virtual HRESULT __stdcall abi_BatchDisplayUpdates(int32_t * count) = 0;
    virtual HRESULT __stdcall abi_BeginUndoGroup() = 0;
    virtual HRESULT __stdcall abi_EndUndoGroup() = 0;
    virtual HRESULT __stdcall abi_GetDefaultCharacterFormat(Windows::UI::Text::ITextCharacterFormat ** value) = 0;
    virtual HRESULT __stdcall abi_GetDefaultParagraphFormat(Windows::UI::Text::ITextParagraphFormat ** value) = 0;
    virtual HRESULT __stdcall abi_GetRange(int32_t startPosition, int32_t endPosition, Windows::UI::Text::ITextRange ** value) = 0;
    virtual HRESULT __stdcall abi_GetRangeFromPoint(Windows::Foundation::Point point, winrt::Windows::UI::Text::PointOptions options, Windows::UI::Text::ITextRange ** value) = 0;
    virtual HRESULT __stdcall abi_GetText(winrt::Windows::UI::Text::TextGetOptions options, hstring * value) = 0;
    virtual HRESULT __stdcall abi_LoadFromStream(winrt::Windows::UI::Text::TextSetOptions options, Windows::Storage::Streams::IRandomAccessStream * value) = 0;
    virtual HRESULT __stdcall abi_Redo() = 0;
    virtual HRESULT __stdcall abi_SaveToStream(winrt::Windows::UI::Text::TextGetOptions options, Windows::Storage::Streams::IRandomAccessStream * value) = 0;
    virtual HRESULT __stdcall abi_SetDefaultCharacterFormat(Windows::UI::Text::ITextCharacterFormat * value) = 0;
    virtual HRESULT __stdcall abi_SetDefaultParagraphFormat(Windows::UI::Text::ITextParagraphFormat * value) = 0;
    virtual HRESULT __stdcall abi_SetText(winrt::Windows::UI::Text::TextSetOptions options, hstring value) = 0;
    virtual HRESULT __stdcall abi_Undo() = 0;
};

struct __declspec(uuid("2cf8cfa6-4676-498a-93f5-bbdbfc0bd883")) __declspec(novtable) ITextParagraphFormat : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Alignment(winrt::Windows::UI::Text::ParagraphAlignment * value) = 0;
    virtual HRESULT __stdcall put_Alignment(winrt::Windows::UI::Text::ParagraphAlignment value) = 0;
    virtual HRESULT __stdcall get_FirstLineIndent(float * value) = 0;
    virtual HRESULT __stdcall get_KeepTogether(winrt::Windows::UI::Text::FormatEffect * value) = 0;
    virtual HRESULT __stdcall put_KeepTogether(winrt::Windows::UI::Text::FormatEffect value) = 0;
    virtual HRESULT __stdcall get_KeepWithNext(winrt::Windows::UI::Text::FormatEffect * value) = 0;
    virtual HRESULT __stdcall put_KeepWithNext(winrt::Windows::UI::Text::FormatEffect value) = 0;
    virtual HRESULT __stdcall get_LeftIndent(float * value) = 0;
    virtual HRESULT __stdcall get_LineSpacing(float * value) = 0;
    virtual HRESULT __stdcall get_LineSpacingRule(winrt::Windows::UI::Text::LineSpacingRule * value) = 0;
    virtual HRESULT __stdcall get_ListAlignment(winrt::Windows::UI::Text::MarkerAlignment * value) = 0;
    virtual HRESULT __stdcall put_ListAlignment(winrt::Windows::UI::Text::MarkerAlignment value) = 0;
    virtual HRESULT __stdcall get_ListLevelIndex(int32_t * value) = 0;
    virtual HRESULT __stdcall put_ListLevelIndex(int32_t value) = 0;
    virtual HRESULT __stdcall get_ListStart(int32_t * value) = 0;
    virtual HRESULT __stdcall put_ListStart(int32_t value) = 0;
    virtual HRESULT __stdcall get_ListStyle(winrt::Windows::UI::Text::MarkerStyle * value) = 0;
    virtual HRESULT __stdcall put_ListStyle(winrt::Windows::UI::Text::MarkerStyle value) = 0;
    virtual HRESULT __stdcall get_ListTab(float * value) = 0;
    virtual HRESULT __stdcall put_ListTab(float value) = 0;
    virtual HRESULT __stdcall get_ListType(winrt::Windows::UI::Text::MarkerType * value) = 0;
    virtual HRESULT __stdcall put_ListType(winrt::Windows::UI::Text::MarkerType value) = 0;
    virtual HRESULT __stdcall get_NoLineNumber(winrt::Windows::UI::Text::FormatEffect * value) = 0;
    virtual HRESULT __stdcall put_NoLineNumber(winrt::Windows::UI::Text::FormatEffect value) = 0;
    virtual HRESULT __stdcall get_PageBreakBefore(winrt::Windows::UI::Text::FormatEffect * value) = 0;
    virtual HRESULT __stdcall put_PageBreakBefore(winrt::Windows::UI::Text::FormatEffect value) = 0;
    virtual HRESULT __stdcall get_RightIndent(float * value) = 0;
    virtual HRESULT __stdcall put_RightIndent(float value) = 0;
    virtual HRESULT __stdcall get_RightToLeft(winrt::Windows::UI::Text::FormatEffect * value) = 0;
    virtual HRESULT __stdcall put_RightToLeft(winrt::Windows::UI::Text::FormatEffect value) = 0;
    virtual HRESULT __stdcall get_Style(winrt::Windows::UI::Text::ParagraphStyle * value) = 0;
    virtual HRESULT __stdcall put_Style(winrt::Windows::UI::Text::ParagraphStyle value) = 0;
    virtual HRESULT __stdcall get_SpaceAfter(float * value) = 0;
    virtual HRESULT __stdcall put_SpaceAfter(float value) = 0;
    virtual HRESULT __stdcall get_SpaceBefore(float * value) = 0;
    virtual HRESULT __stdcall put_SpaceBefore(float value) = 0;
    virtual HRESULT __stdcall get_WidowControl(winrt::Windows::UI::Text::FormatEffect * value) = 0;
    virtual HRESULT __stdcall put_WidowControl(winrt::Windows::UI::Text::FormatEffect value) = 0;
    virtual HRESULT __stdcall get_TabCount(int32_t * value) = 0;
    virtual HRESULT __stdcall abi_AddTab(float position, winrt::Windows::UI::Text::TabAlignment align, winrt::Windows::UI::Text::TabLeader leader) = 0;
    virtual HRESULT __stdcall abi_ClearAllTabs() = 0;
    virtual HRESULT __stdcall abi_DeleteTab(float position) = 0;
    virtual HRESULT __stdcall abi_GetClone(Windows::UI::Text::ITextParagraphFormat ** value) = 0;
    virtual HRESULT __stdcall abi_GetTab(int32_t index, float * position, winrt::Windows::UI::Text::TabAlignment * align, winrt::Windows::UI::Text::TabLeader * leader) = 0;
    virtual HRESULT __stdcall abi_IsEqual(Windows::UI::Text::ITextParagraphFormat * format, bool * value) = 0;
    virtual HRESULT __stdcall abi_SetClone(Windows::UI::Text::ITextParagraphFormat * format) = 0;
    virtual HRESULT __stdcall abi_SetIndents(float start, float left, float right) = 0;
    virtual HRESULT __stdcall abi_SetLineSpacing(winrt::Windows::UI::Text::LineSpacingRule rule, float spacing) = 0;
};

struct __declspec(uuid("5b9e4e57-c072-42a0-8945-af503ee54768")) __declspec(novtable) ITextRange : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Character(wchar_t * value) = 0;
    virtual HRESULT __stdcall put_Character(wchar_t value) = 0;
    virtual HRESULT __stdcall get_CharacterFormat(Windows::UI::Text::ITextCharacterFormat ** value) = 0;
    virtual HRESULT __stdcall put_CharacterFormat(Windows::UI::Text::ITextCharacterFormat * value) = 0;
    virtual HRESULT __stdcall get_FormattedText(Windows::UI::Text::ITextRange ** value) = 0;
    virtual HRESULT __stdcall put_FormattedText(Windows::UI::Text::ITextRange * value) = 0;
    virtual HRESULT __stdcall get_EndPosition(int32_t * value) = 0;
    virtual HRESULT __stdcall put_EndPosition(int32_t value) = 0;
    virtual HRESULT __stdcall get_Gravity(winrt::Windows::UI::Text::RangeGravity * value) = 0;
    virtual HRESULT __stdcall put_Gravity(winrt::Windows::UI::Text::RangeGravity value) = 0;
    virtual HRESULT __stdcall get_Length(int32_t * length) = 0;
    virtual HRESULT __stdcall get_Link(hstring * value) = 0;
    virtual HRESULT __stdcall put_Link(hstring value) = 0;
    virtual HRESULT __stdcall get_ParagraphFormat(Windows::UI::Text::ITextParagraphFormat ** value) = 0;
    virtual HRESULT __stdcall put_ParagraphFormat(Windows::UI::Text::ITextParagraphFormat * value) = 0;
    virtual HRESULT __stdcall get_StartPosition(int32_t * value) = 0;
    virtual HRESULT __stdcall put_StartPosition(int32_t value) = 0;
    virtual HRESULT __stdcall get_StoryLength(int32_t * value) = 0;
    virtual HRESULT __stdcall get_Text(hstring * value) = 0;
    virtual HRESULT __stdcall put_Text(hstring value) = 0;
    virtual HRESULT __stdcall abi_CanPaste(int32_t format, bool * value) = 0;
    virtual HRESULT __stdcall abi_ChangeCase(winrt::Windows::UI::Text::LetterCase value) = 0;
    virtual HRESULT __stdcall abi_Collapse(bool value) = 0;
    virtual HRESULT __stdcall abi_Copy() = 0;
    virtual HRESULT __stdcall abi_Cut() = 0;
    virtual HRESULT __stdcall abi_Delete(winrt::Windows::UI::Text::TextRangeUnit unit, int32_t count, int32_t * delta) = 0;
    virtual HRESULT __stdcall abi_EndOf(winrt::Windows::UI::Text::TextRangeUnit unit, bool extend, int32_t * delta) = 0;
    virtual HRESULT __stdcall abi_Expand(winrt::Windows::UI::Text::TextRangeUnit unit, int32_t * delta) = 0;
    virtual HRESULT __stdcall abi_FindText(hstring value, int32_t scanLength, winrt::Windows::UI::Text::FindOptions options, int32_t * length) = 0;
    virtual HRESULT __stdcall abi_GetCharacterUtf32(uint32_t * value, int32_t offset) = 0;
    virtual HRESULT __stdcall abi_GetClone(Windows::UI::Text::ITextRange ** value) = 0;
    virtual HRESULT __stdcall abi_GetIndex(winrt::Windows::UI::Text::TextRangeUnit unit, int32_t * index) = 0;
    virtual HRESULT __stdcall abi_GetPoint(winrt::Windows::UI::Text::HorizontalCharacterAlignment horizontalAlign, winrt::Windows::UI::Text::VerticalCharacterAlignment verticalAlign, winrt::Windows::UI::Text::PointOptions options, Windows::Foundation::Point * point) = 0;
    virtual HRESULT __stdcall abi_GetRect(winrt::Windows::UI::Text::PointOptions options, Windows::Foundation::Rect * rect, int32_t * hit) = 0;
    virtual HRESULT __stdcall abi_GetText(winrt::Windows::UI::Text::TextGetOptions options, hstring * value) = 0;
    virtual HRESULT __stdcall abi_GetTextViaStream(winrt::Windows::UI::Text::TextGetOptions options, Windows::Storage::Streams::IRandomAccessStream * value) = 0;
    virtual HRESULT __stdcall abi_InRange(Windows::UI::Text::ITextRange * range, bool * value) = 0;
    virtual HRESULT __stdcall abi_InsertImage(int32_t width, int32_t height, int32_t ascent, winrt::Windows::UI::Text::VerticalCharacterAlignment verticalAlign, hstring alternateText, Windows::Storage::Streams::IRandomAccessStream * value) = 0;
    virtual HRESULT __stdcall abi_InStory(Windows::UI::Text::ITextRange * range, bool * value) = 0;
    virtual HRESULT __stdcall abi_IsEqual(Windows::UI::Text::ITextRange * range, bool * value) = 0;
    virtual HRESULT __stdcall abi_Move(winrt::Windows::UI::Text::TextRangeUnit unit, int32_t count, int32_t * delta) = 0;
    virtual HRESULT __stdcall abi_MoveEnd(winrt::Windows::UI::Text::TextRangeUnit unit, int32_t count, int32_t * delta) = 0;
    virtual HRESULT __stdcall abi_MoveStart(winrt::Windows::UI::Text::TextRangeUnit unit, int32_t count, int32_t * delta) = 0;
    virtual HRESULT __stdcall abi_Paste(int32_t format) = 0;
    virtual HRESULT __stdcall abi_ScrollIntoView(winrt::Windows::UI::Text::PointOptions value) = 0;
    virtual HRESULT __stdcall abi_MatchSelection() = 0;
    virtual HRESULT __stdcall abi_SetIndex(winrt::Windows::UI::Text::TextRangeUnit unit, int32_t index, bool extend) = 0;
    virtual HRESULT __stdcall abi_SetPoint(Windows::Foundation::Point point, winrt::Windows::UI::Text::PointOptions options, bool extend) = 0;
    virtual HRESULT __stdcall abi_SetRange(int32_t startPosition, int32_t endPosition) = 0;
    virtual HRESULT __stdcall abi_SetText(winrt::Windows::UI::Text::TextSetOptions options, hstring value) = 0;
    virtual HRESULT __stdcall abi_SetTextViaStream(winrt::Windows::UI::Text::TextSetOptions options, Windows::Storage::Streams::IRandomAccessStream * value) = 0;
    virtual HRESULT __stdcall abi_StartOf(winrt::Windows::UI::Text::TextRangeUnit unit, bool extend, int32_t * delta) = 0;
};

struct __declspec(uuid("a6d36724-f28f-430a-b2cf-c343671ec0e9")) __declspec(novtable) ITextSelection : Windows::IInspectable
{
    virtual HRESULT __stdcall get_Options(winrt::Windows::UI::Text::SelectionOptions * value) = 0;
    virtual HRESULT __stdcall put_Options(winrt::Windows::UI::Text::SelectionOptions value) = 0;
    virtual HRESULT __stdcall get_Type(winrt::Windows::UI::Text::SelectionType * value) = 0;
    virtual HRESULT __stdcall abi_EndKey(winrt::Windows::UI::Text::TextRangeUnit unit, bool extend, int32_t * delta) = 0;
    virtual HRESULT __stdcall abi_HomeKey(winrt::Windows::UI::Text::TextRangeUnit unit, bool extend, int32_t * delta) = 0;
    virtual HRESULT __stdcall abi_MoveDown(winrt::Windows::UI::Text::TextRangeUnit unit, int32_t count, bool extend, int32_t * delta) = 0;
    virtual HRESULT __stdcall abi_MoveLeft(winrt::Windows::UI::Text::TextRangeUnit unit, int32_t count, bool extend, int32_t * delta) = 0;
    virtual HRESULT __stdcall abi_MoveRight(winrt::Windows::UI::Text::TextRangeUnit unit, int32_t count, bool extend, int32_t * delta) = 0;
    virtual HRESULT __stdcall abi_MoveUp(winrt::Windows::UI::Text::TextRangeUnit unit, int32_t count, bool extend, int32_t * delta) = 0;
    virtual HRESULT __stdcall abi_TypeText(hstring value) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::UI::Text::FontWeights> { using default_interface = Windows::UI::Text::IFontWeights; };

}

namespace Windows::UI::Text {

template <typename T> struct impl_IFontWeights;
template <typename T> struct impl_IFontWeightsStatics;
template <typename T> struct impl_ITextCharacterFormat;
template <typename T> struct impl_ITextConstantsStatics;
template <typename T> struct impl_ITextDocument;
template <typename T> struct impl_ITextParagraphFormat;
template <typename T> struct impl_ITextRange;
template <typename T> struct impl_ITextSelection;

}

namespace impl {

template <> struct traits<Windows::UI::Text::IFontWeights>
{
    using abi = ABI::Windows::UI::Text::IFontWeights;
    template <typename D> using consume = Windows::UI::Text::impl_IFontWeights<D>;
};

template <> struct traits<Windows::UI::Text::IFontWeightsStatics>
{
    using abi = ABI::Windows::UI::Text::IFontWeightsStatics;
    template <typename D> using consume = Windows::UI::Text::impl_IFontWeightsStatics<D>;
};

template <> struct traits<Windows::UI::Text::ITextCharacterFormat>
{
    using abi = ABI::Windows::UI::Text::ITextCharacterFormat;
    template <typename D> using consume = Windows::UI::Text::impl_ITextCharacterFormat<D>;
};

template <> struct traits<Windows::UI::Text::ITextConstantsStatics>
{
    using abi = ABI::Windows::UI::Text::ITextConstantsStatics;
    template <typename D> using consume = Windows::UI::Text::impl_ITextConstantsStatics<D>;
};

template <> struct traits<Windows::UI::Text::ITextDocument>
{
    using abi = ABI::Windows::UI::Text::ITextDocument;
    template <typename D> using consume = Windows::UI::Text::impl_ITextDocument<D>;
};

template <> struct traits<Windows::UI::Text::ITextParagraphFormat>
{
    using abi = ABI::Windows::UI::Text::ITextParagraphFormat;
    template <typename D> using consume = Windows::UI::Text::impl_ITextParagraphFormat<D>;
};

template <> struct traits<Windows::UI::Text::ITextRange>
{
    using abi = ABI::Windows::UI::Text::ITextRange;
    template <typename D> using consume = Windows::UI::Text::impl_ITextRange<D>;
};

template <> struct traits<Windows::UI::Text::ITextSelection>
{
    using abi = ABI::Windows::UI::Text::ITextSelection;
    template <typename D> using consume = Windows::UI::Text::impl_ITextSelection<D>;
};

template <> struct traits<Windows::UI::Text::FontWeights>
{
    using abi = ABI::Windows::UI::Text::FontWeights;
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Text.FontWeights"; }
};

template <> struct traits<Windows::UI::Text::TextConstants>
{
    static constexpr const wchar_t * name() noexcept { return L"Windows.UI.Text.TextConstants"; }
};

}

}
