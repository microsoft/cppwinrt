// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.UI.Text.2.h"
#include "winrt/Windows.UI.h"

namespace winrt::impl {

template <typename D> Windows::UI::Text::FontWeight consume_Windows_UI_Text_IFontWeightsStatics<D>::Black() const
{
    Windows::UI::Text::FontWeight value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::IFontWeightsStatics)->get_Black(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::FontWeight consume_Windows_UI_Text_IFontWeightsStatics<D>::Bold() const
{
    Windows::UI::Text::FontWeight value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::IFontWeightsStatics)->get_Bold(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::FontWeight consume_Windows_UI_Text_IFontWeightsStatics<D>::ExtraBlack() const
{
    Windows::UI::Text::FontWeight value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::IFontWeightsStatics)->get_ExtraBlack(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::FontWeight consume_Windows_UI_Text_IFontWeightsStatics<D>::ExtraBold() const
{
    Windows::UI::Text::FontWeight value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::IFontWeightsStatics)->get_ExtraBold(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::FontWeight consume_Windows_UI_Text_IFontWeightsStatics<D>::ExtraLight() const
{
    Windows::UI::Text::FontWeight value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::IFontWeightsStatics)->get_ExtraLight(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::FontWeight consume_Windows_UI_Text_IFontWeightsStatics<D>::Light() const
{
    Windows::UI::Text::FontWeight value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::IFontWeightsStatics)->get_Light(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::FontWeight consume_Windows_UI_Text_IFontWeightsStatics<D>::Medium() const
{
    Windows::UI::Text::FontWeight value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::IFontWeightsStatics)->get_Medium(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::FontWeight consume_Windows_UI_Text_IFontWeightsStatics<D>::Normal() const
{
    Windows::UI::Text::FontWeight value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::IFontWeightsStatics)->get_Normal(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::FontWeight consume_Windows_UI_Text_IFontWeightsStatics<D>::SemiBold() const
{
    Windows::UI::Text::FontWeight value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::IFontWeightsStatics)->get_SemiBold(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::FontWeight consume_Windows_UI_Text_IFontWeightsStatics<D>::SemiLight() const
{
    Windows::UI::Text::FontWeight value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::IFontWeightsStatics)->get_SemiLight(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::FontWeight consume_Windows_UI_Text_IFontWeightsStatics<D>::Thin() const
{
    Windows::UI::Text::FontWeight value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::IFontWeightsStatics)->get_Thin(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::FormatEffect consume_Windows_UI_Text_ITextCharacterFormat<D>::AllCaps() const
{
    Windows::UI::Text::FormatEffect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_AllCaps(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextCharacterFormat<D>::AllCaps(Windows::UI::Text::FormatEffect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_AllCaps(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_UI_Text_ITextCharacterFormat<D>::BackgroundColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_BackgroundColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextCharacterFormat<D>::BackgroundColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_BackgroundColor(get_abi(value)));
}

template <typename D> Windows::UI::Text::FormatEffect consume_Windows_UI_Text_ITextCharacterFormat<D>::Bold() const
{
    Windows::UI::Text::FormatEffect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_Bold(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextCharacterFormat<D>::Bold(Windows::UI::Text::FormatEffect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_Bold(get_abi(value)));
}

template <typename D> Windows::UI::Text::FontStretch consume_Windows_UI_Text_ITextCharacterFormat<D>::FontStretch() const
{
    Windows::UI::Text::FontStretch value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_FontStretch(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextCharacterFormat<D>::FontStretch(Windows::UI::Text::FontStretch const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_FontStretch(get_abi(value)));
}

template <typename D> Windows::UI::Text::FontStyle consume_Windows_UI_Text_ITextCharacterFormat<D>::FontStyle() const
{
    Windows::UI::Text::FontStyle value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_FontStyle(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextCharacterFormat<D>::FontStyle(Windows::UI::Text::FontStyle const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_FontStyle(get_abi(value)));
}

template <typename D> Windows::UI::Color consume_Windows_UI_Text_ITextCharacterFormat<D>::ForegroundColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_ForegroundColor(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextCharacterFormat<D>::ForegroundColor(Windows::UI::Color const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_ForegroundColor(get_abi(value)));
}

template <typename D> Windows::UI::Text::FormatEffect consume_Windows_UI_Text_ITextCharacterFormat<D>::Hidden() const
{
    Windows::UI::Text::FormatEffect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_Hidden(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextCharacterFormat<D>::Hidden(Windows::UI::Text::FormatEffect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_Hidden(get_abi(value)));
}

template <typename D> Windows::UI::Text::FormatEffect consume_Windows_UI_Text_ITextCharacterFormat<D>::Italic() const
{
    Windows::UI::Text::FormatEffect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_Italic(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextCharacterFormat<D>::Italic(Windows::UI::Text::FormatEffect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_Italic(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Text_ITextCharacterFormat<D>::Kerning() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_Kerning(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextCharacterFormat<D>::Kerning(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_Kerning(value));
}

template <typename D> hstring consume_Windows_UI_Text_ITextCharacterFormat<D>::LanguageTag() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_LanguageTag(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextCharacterFormat<D>::LanguageTag(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_LanguageTag(get_abi(value)));
}

template <typename D> Windows::UI::Text::LinkType consume_Windows_UI_Text_ITextCharacterFormat<D>::LinkType() const
{
    Windows::UI::Text::LinkType value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_LinkType(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_UI_Text_ITextCharacterFormat<D>::Name() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_Name(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextCharacterFormat<D>::Name(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_Name(get_abi(value)));
}

template <typename D> Windows::UI::Text::FormatEffect consume_Windows_UI_Text_ITextCharacterFormat<D>::Outline() const
{
    Windows::UI::Text::FormatEffect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_Outline(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextCharacterFormat<D>::Outline(Windows::UI::Text::FormatEffect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_Outline(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Text_ITextCharacterFormat<D>::Position() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_Position(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextCharacterFormat<D>::Position(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_Position(value));
}

template <typename D> Windows::UI::Text::FormatEffect consume_Windows_UI_Text_ITextCharacterFormat<D>::ProtectedText() const
{
    Windows::UI::Text::FormatEffect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_ProtectedText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextCharacterFormat<D>::ProtectedText(Windows::UI::Text::FormatEffect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_ProtectedText(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Text_ITextCharacterFormat<D>::Size() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_Size(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextCharacterFormat<D>::Size(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_Size(value));
}

template <typename D> Windows::UI::Text::FormatEffect consume_Windows_UI_Text_ITextCharacterFormat<D>::SmallCaps() const
{
    Windows::UI::Text::FormatEffect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_SmallCaps(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextCharacterFormat<D>::SmallCaps(Windows::UI::Text::FormatEffect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_SmallCaps(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Text_ITextCharacterFormat<D>::Spacing() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_Spacing(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextCharacterFormat<D>::Spacing(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_Spacing(value));
}

template <typename D> Windows::UI::Text::FormatEffect consume_Windows_UI_Text_ITextCharacterFormat<D>::Strikethrough() const
{
    Windows::UI::Text::FormatEffect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_Strikethrough(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextCharacterFormat<D>::Strikethrough(Windows::UI::Text::FormatEffect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_Strikethrough(get_abi(value)));
}

template <typename D> Windows::UI::Text::FormatEffect consume_Windows_UI_Text_ITextCharacterFormat<D>::Subscript() const
{
    Windows::UI::Text::FormatEffect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_Subscript(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextCharacterFormat<D>::Subscript(Windows::UI::Text::FormatEffect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_Subscript(get_abi(value)));
}

template <typename D> Windows::UI::Text::FormatEffect consume_Windows_UI_Text_ITextCharacterFormat<D>::Superscript() const
{
    Windows::UI::Text::FormatEffect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_Superscript(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextCharacterFormat<D>::Superscript(Windows::UI::Text::FormatEffect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_Superscript(get_abi(value)));
}

template <typename D> Windows::UI::Text::TextScript consume_Windows_UI_Text_ITextCharacterFormat<D>::TextScript() const
{
    Windows::UI::Text::TextScript value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_TextScript(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextCharacterFormat<D>::TextScript(Windows::UI::Text::TextScript const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_TextScript(get_abi(value)));
}

template <typename D> Windows::UI::Text::UnderlineType consume_Windows_UI_Text_ITextCharacterFormat<D>::Underline() const
{
    Windows::UI::Text::UnderlineType value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_Underline(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextCharacterFormat<D>::Underline(Windows::UI::Text::UnderlineType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_Underline(get_abi(value)));
}

template <typename D> int32_t consume_Windows_UI_Text_ITextCharacterFormat<D>::Weight() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->get_Weight(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextCharacterFormat<D>::Weight(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->put_Weight(value));
}

template <typename D> void consume_Windows_UI_Text_ITextCharacterFormat<D>::SetClone(Windows::UI::Text::ITextCharacterFormat const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->SetClone(get_abi(value)));
}

template <typename D> Windows::UI::Text::ITextCharacterFormat consume_Windows_UI_Text_ITextCharacterFormat<D>::GetClone() const
{
    Windows::UI::Text::ITextCharacterFormat value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->GetClone(put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_UI_Text_ITextCharacterFormat<D>::IsEqual(Windows::UI::Text::ITextCharacterFormat const& format) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextCharacterFormat)->IsEqual(get_abi(format), &value));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_Text_ITextConstantsStatics<D>::AutoColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextConstantsStatics)->get_AutoColor(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Text_ITextConstantsStatics<D>::MinUnitCount() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextConstantsStatics)->get_MinUnitCount(&value));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Text_ITextConstantsStatics<D>::MaxUnitCount() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextConstantsStatics)->get_MaxUnitCount(&value));
    return value;
}

template <typename D> Windows::UI::Color consume_Windows_UI_Text_ITextConstantsStatics<D>::UndefinedColor() const
{
    Windows::UI::Color value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextConstantsStatics)->get_UndefinedColor(put_abi(value)));
    return value;
}

template <typename D> float consume_Windows_UI_Text_ITextConstantsStatics<D>::UndefinedFloatValue() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextConstantsStatics)->get_UndefinedFloatValue(&value));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Text_ITextConstantsStatics<D>::UndefinedInt32Value() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextConstantsStatics)->get_UndefinedInt32Value(&value));
    return value;
}

template <typename D> Windows::UI::Text::FontStretch consume_Windows_UI_Text_ITextConstantsStatics<D>::UndefinedFontStretch() const
{
    Windows::UI::Text::FontStretch value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextConstantsStatics)->get_UndefinedFontStretch(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::FontStyle consume_Windows_UI_Text_ITextConstantsStatics<D>::UndefinedFontStyle() const
{
    Windows::UI::Text::FontStyle value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextConstantsStatics)->get_UndefinedFontStyle(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::CaretType consume_Windows_UI_Text_ITextDocument<D>::CaretType() const
{
    Windows::UI::Text::CaretType value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextDocument)->get_CaretType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextDocument<D>::CaretType(Windows::UI::Text::CaretType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextDocument)->put_CaretType(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Text_ITextDocument<D>::DefaultTabStop() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextDocument)->get_DefaultTabStop(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextDocument<D>::DefaultTabStop(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextDocument)->put_DefaultTabStop(value));
}

template <typename D> Windows::UI::Text::ITextSelection consume_Windows_UI_Text_ITextDocument<D>::Selection() const
{
    Windows::UI::Text::ITextSelection value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextDocument)->get_Selection(put_abi(value)));
    return value;
}

template <typename D> uint32_t consume_Windows_UI_Text_ITextDocument<D>::UndoLimit() const
{
    uint32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextDocument)->get_UndoLimit(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextDocument<D>::UndoLimit(uint32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextDocument)->put_UndoLimit(value));
}

template <typename D> bool consume_Windows_UI_Text_ITextDocument<D>::CanCopy() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextDocument)->CanCopy(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Text_ITextDocument<D>::CanPaste() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextDocument)->CanPaste(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Text_ITextDocument<D>::CanRedo() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextDocument)->CanRedo(&value));
    return value;
}

template <typename D> bool consume_Windows_UI_Text_ITextDocument<D>::CanUndo() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextDocument)->CanUndo(&value));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Text_ITextDocument<D>::ApplyDisplayUpdates() const
{
    int32_t count{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextDocument)->ApplyDisplayUpdates(&count));
    return count;
}

template <typename D> int32_t consume_Windows_UI_Text_ITextDocument<D>::BatchDisplayUpdates() const
{
    int32_t count{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextDocument)->BatchDisplayUpdates(&count));
    return count;
}

template <typename D> void consume_Windows_UI_Text_ITextDocument<D>::BeginUndoGroup() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextDocument)->BeginUndoGroup());
}

template <typename D> void consume_Windows_UI_Text_ITextDocument<D>::EndUndoGroup() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextDocument)->EndUndoGroup());
}

template <typename D> Windows::UI::Text::ITextCharacterFormat consume_Windows_UI_Text_ITextDocument<D>::GetDefaultCharacterFormat() const
{
    Windows::UI::Text::ITextCharacterFormat value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextDocument)->GetDefaultCharacterFormat(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::ITextParagraphFormat consume_Windows_UI_Text_ITextDocument<D>::GetDefaultParagraphFormat() const
{
    Windows::UI::Text::ITextParagraphFormat value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextDocument)->GetDefaultParagraphFormat(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::ITextRange consume_Windows_UI_Text_ITextDocument<D>::GetRange(int32_t startPosition, int32_t endPosition) const
{
    Windows::UI::Text::ITextRange value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextDocument)->GetRange(startPosition, endPosition, put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::ITextRange consume_Windows_UI_Text_ITextDocument<D>::GetRangeFromPoint(Windows::Foundation::Point const& point, Windows::UI::Text::PointOptions const& options) const
{
    Windows::UI::Text::ITextRange value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextDocument)->GetRangeFromPoint(get_abi(point), get_abi(options), put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextDocument<D>::GetText(Windows::UI::Text::TextGetOptions const& options, hstring& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextDocument)->GetText(get_abi(options), put_abi(value)));
}

template <typename D> void consume_Windows_UI_Text_ITextDocument<D>::LoadFromStream(Windows::UI::Text::TextSetOptions const& options, Windows::Storage::Streams::IRandomAccessStream const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextDocument)->LoadFromStream(get_abi(options), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Text_ITextDocument<D>::Redo() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextDocument)->Redo());
}

template <typename D> void consume_Windows_UI_Text_ITextDocument<D>::SaveToStream(Windows::UI::Text::TextGetOptions const& options, Windows::Storage::Streams::IRandomAccessStream const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextDocument)->SaveToStream(get_abi(options), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Text_ITextDocument<D>::SetDefaultCharacterFormat(Windows::UI::Text::ITextCharacterFormat const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextDocument)->SetDefaultCharacterFormat(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Text_ITextDocument<D>::SetDefaultParagraphFormat(Windows::UI::Text::ITextParagraphFormat const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextDocument)->SetDefaultParagraphFormat(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Text_ITextDocument<D>::SetText(Windows::UI::Text::TextSetOptions const& options, param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextDocument)->SetText(get_abi(options), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Text_ITextDocument<D>::Undo() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextDocument)->Undo());
}

template <typename D> bool consume_Windows_UI_Text_ITextDocument2<D>::AlignmentIncludesTrailingWhitespace() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextDocument2)->get_AlignmentIncludesTrailingWhitespace(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextDocument2<D>::AlignmentIncludesTrailingWhitespace(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextDocument2)->put_AlignmentIncludesTrailingWhitespace(value));
}

template <typename D> bool consume_Windows_UI_Text_ITextDocument2<D>::IgnoreTrailingCharacterSpacing() const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextDocument2)->get_IgnoreTrailingCharacterSpacing(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextDocument2<D>::IgnoreTrailingCharacterSpacing(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextDocument2)->put_IgnoreTrailingCharacterSpacing(value));
}

template <typename D> Windows::UI::Text::ParagraphAlignment consume_Windows_UI_Text_ITextParagraphFormat<D>::Alignment() const
{
    Windows::UI::Text::ParagraphAlignment value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_Alignment(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextParagraphFormat<D>::Alignment(Windows::UI::Text::ParagraphAlignment const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_Alignment(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Text_ITextParagraphFormat<D>::FirstLineIndent() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_FirstLineIndent(&value));
    return value;
}

template <typename D> Windows::UI::Text::FormatEffect consume_Windows_UI_Text_ITextParagraphFormat<D>::KeepTogether() const
{
    Windows::UI::Text::FormatEffect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_KeepTogether(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextParagraphFormat<D>::KeepTogether(Windows::UI::Text::FormatEffect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_KeepTogether(get_abi(value)));
}

template <typename D> Windows::UI::Text::FormatEffect consume_Windows_UI_Text_ITextParagraphFormat<D>::KeepWithNext() const
{
    Windows::UI::Text::FormatEffect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_KeepWithNext(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextParagraphFormat<D>::KeepWithNext(Windows::UI::Text::FormatEffect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_KeepWithNext(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Text_ITextParagraphFormat<D>::LeftIndent() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_LeftIndent(&value));
    return value;
}

template <typename D> float consume_Windows_UI_Text_ITextParagraphFormat<D>::LineSpacing() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_LineSpacing(&value));
    return value;
}

template <typename D> Windows::UI::Text::LineSpacingRule consume_Windows_UI_Text_ITextParagraphFormat<D>::LineSpacingRule() const
{
    Windows::UI::Text::LineSpacingRule value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_LineSpacingRule(put_abi(value)));
    return value;
}

template <typename D> Windows::UI::Text::MarkerAlignment consume_Windows_UI_Text_ITextParagraphFormat<D>::ListAlignment() const
{
    Windows::UI::Text::MarkerAlignment value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_ListAlignment(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextParagraphFormat<D>::ListAlignment(Windows::UI::Text::MarkerAlignment const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_ListAlignment(get_abi(value)));
}

template <typename D> int32_t consume_Windows_UI_Text_ITextParagraphFormat<D>::ListLevelIndex() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_ListLevelIndex(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextParagraphFormat<D>::ListLevelIndex(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_ListLevelIndex(value));
}

template <typename D> int32_t consume_Windows_UI_Text_ITextParagraphFormat<D>::ListStart() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_ListStart(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextParagraphFormat<D>::ListStart(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_ListStart(value));
}

template <typename D> Windows::UI::Text::MarkerStyle consume_Windows_UI_Text_ITextParagraphFormat<D>::ListStyle() const
{
    Windows::UI::Text::MarkerStyle value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_ListStyle(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextParagraphFormat<D>::ListStyle(Windows::UI::Text::MarkerStyle const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_ListStyle(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Text_ITextParagraphFormat<D>::ListTab() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_ListTab(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextParagraphFormat<D>::ListTab(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_ListTab(value));
}

template <typename D> Windows::UI::Text::MarkerType consume_Windows_UI_Text_ITextParagraphFormat<D>::ListType() const
{
    Windows::UI::Text::MarkerType value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_ListType(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextParagraphFormat<D>::ListType(Windows::UI::Text::MarkerType const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_ListType(get_abi(value)));
}

template <typename D> Windows::UI::Text::FormatEffect consume_Windows_UI_Text_ITextParagraphFormat<D>::NoLineNumber() const
{
    Windows::UI::Text::FormatEffect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_NoLineNumber(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextParagraphFormat<D>::NoLineNumber(Windows::UI::Text::FormatEffect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_NoLineNumber(get_abi(value)));
}

template <typename D> Windows::UI::Text::FormatEffect consume_Windows_UI_Text_ITextParagraphFormat<D>::PageBreakBefore() const
{
    Windows::UI::Text::FormatEffect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_PageBreakBefore(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextParagraphFormat<D>::PageBreakBefore(Windows::UI::Text::FormatEffect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_PageBreakBefore(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Text_ITextParagraphFormat<D>::RightIndent() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_RightIndent(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextParagraphFormat<D>::RightIndent(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_RightIndent(value));
}

template <typename D> Windows::UI::Text::FormatEffect consume_Windows_UI_Text_ITextParagraphFormat<D>::RightToLeft() const
{
    Windows::UI::Text::FormatEffect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_RightToLeft(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextParagraphFormat<D>::RightToLeft(Windows::UI::Text::FormatEffect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_RightToLeft(get_abi(value)));
}

template <typename D> Windows::UI::Text::ParagraphStyle consume_Windows_UI_Text_ITextParagraphFormat<D>::Style() const
{
    Windows::UI::Text::ParagraphStyle value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_Style(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextParagraphFormat<D>::Style(Windows::UI::Text::ParagraphStyle const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_Style(get_abi(value)));
}

template <typename D> float consume_Windows_UI_Text_ITextParagraphFormat<D>::SpaceAfter() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_SpaceAfter(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextParagraphFormat<D>::SpaceAfter(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_SpaceAfter(value));
}

template <typename D> float consume_Windows_UI_Text_ITextParagraphFormat<D>::SpaceBefore() const
{
    float value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_SpaceBefore(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextParagraphFormat<D>::SpaceBefore(float value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_SpaceBefore(value));
}

template <typename D> Windows::UI::Text::FormatEffect consume_Windows_UI_Text_ITextParagraphFormat<D>::WidowControl() const
{
    Windows::UI::Text::FormatEffect value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_WidowControl(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextParagraphFormat<D>::WidowControl(Windows::UI::Text::FormatEffect const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->put_WidowControl(get_abi(value)));
}

template <typename D> int32_t consume_Windows_UI_Text_ITextParagraphFormat<D>::TabCount() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->get_TabCount(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextParagraphFormat<D>::AddTab(float position, Windows::UI::Text::TabAlignment const& align, Windows::UI::Text::TabLeader const& leader) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->AddTab(position, get_abi(align), get_abi(leader)));
}

template <typename D> void consume_Windows_UI_Text_ITextParagraphFormat<D>::ClearAllTabs() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->ClearAllTabs());
}

template <typename D> void consume_Windows_UI_Text_ITextParagraphFormat<D>::DeleteTab(float position) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->DeleteTab(position));
}

template <typename D> Windows::UI::Text::ITextParagraphFormat consume_Windows_UI_Text_ITextParagraphFormat<D>::GetClone() const
{
    Windows::UI::Text::ITextParagraphFormat value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->GetClone(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextParagraphFormat<D>::GetTab(int32_t index, float& position, Windows::UI::Text::TabAlignment& align, Windows::UI::Text::TabLeader& leader) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->GetTab(index, &position, put_abi(align), put_abi(leader)));
}

template <typename D> bool consume_Windows_UI_Text_ITextParagraphFormat<D>::IsEqual(Windows::UI::Text::ITextParagraphFormat const& format) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->IsEqual(get_abi(format), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextParagraphFormat<D>::SetClone(Windows::UI::Text::ITextParagraphFormat const& format) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->SetClone(get_abi(format)));
}

template <typename D> void consume_Windows_UI_Text_ITextParagraphFormat<D>::SetIndents(float start, float left, float right) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->SetIndents(start, left, right));
}

template <typename D> void consume_Windows_UI_Text_ITextParagraphFormat<D>::SetLineSpacing(Windows::UI::Text::LineSpacingRule const& rule, float spacing) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextParagraphFormat)->SetLineSpacing(get_abi(rule), spacing));
}

template <typename D> char16_t consume_Windows_UI_Text_ITextRange<D>::Character() const
{
    char16_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->get_Character(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextRange<D>::Character(char16_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->put_Character(value));
}

template <typename D> Windows::UI::Text::ITextCharacterFormat consume_Windows_UI_Text_ITextRange<D>::CharacterFormat() const
{
    Windows::UI::Text::ITextCharacterFormat value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->get_CharacterFormat(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextRange<D>::CharacterFormat(Windows::UI::Text::ITextCharacterFormat const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->put_CharacterFormat(get_abi(value)));
}

template <typename D> Windows::UI::Text::ITextRange consume_Windows_UI_Text_ITextRange<D>::FormattedText() const
{
    Windows::UI::Text::ITextRange value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->get_FormattedText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextRange<D>::FormattedText(Windows::UI::Text::ITextRange const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->put_FormattedText(get_abi(value)));
}

template <typename D> int32_t consume_Windows_UI_Text_ITextRange<D>::EndPosition() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->get_EndPosition(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextRange<D>::EndPosition(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->put_EndPosition(value));
}

template <typename D> Windows::UI::Text::RangeGravity consume_Windows_UI_Text_ITextRange<D>::Gravity() const
{
    Windows::UI::Text::RangeGravity value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->get_Gravity(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextRange<D>::Gravity(Windows::UI::Text::RangeGravity const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->put_Gravity(get_abi(value)));
}

template <typename D> int32_t consume_Windows_UI_Text_ITextRange<D>::Length() const
{
    int32_t length{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->get_Length(&length));
    return length;
}

template <typename D> hstring consume_Windows_UI_Text_ITextRange<D>::Link() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->get_Link(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextRange<D>::Link(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->put_Link(get_abi(value)));
}

template <typename D> Windows::UI::Text::ITextParagraphFormat consume_Windows_UI_Text_ITextRange<D>::ParagraphFormat() const
{
    Windows::UI::Text::ITextParagraphFormat value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->get_ParagraphFormat(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextRange<D>::ParagraphFormat(Windows::UI::Text::ITextParagraphFormat const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->put_ParagraphFormat(get_abi(value)));
}

template <typename D> int32_t consume_Windows_UI_Text_ITextRange<D>::StartPosition() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->get_StartPosition(&value));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextRange<D>::StartPosition(int32_t value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->put_StartPosition(value));
}

template <typename D> int32_t consume_Windows_UI_Text_ITextRange<D>::StoryLength() const
{
    int32_t value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->get_StoryLength(&value));
    return value;
}

template <typename D> hstring consume_Windows_UI_Text_ITextRange<D>::Text() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->get_Text(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextRange<D>::Text(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->put_Text(get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Text_ITextRange<D>::CanPaste(int32_t format) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->CanPaste(format, &value));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextRange<D>::ChangeCase(Windows::UI::Text::LetterCase const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->ChangeCase(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Text_ITextRange<D>::Collapse(bool value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->Collapse(value));
}

template <typename D> void consume_Windows_UI_Text_ITextRange<D>::Copy() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->Copy());
}

template <typename D> void consume_Windows_UI_Text_ITextRange<D>::Cut() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->Cut());
}

template <typename D> int32_t consume_Windows_UI_Text_ITextRange<D>::Delete(Windows::UI::Text::TextRangeUnit const& unit, int32_t count) const
{
    int32_t delta{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->Delete(get_abi(unit), count, &delta));
    return delta;
}

template <typename D> int32_t consume_Windows_UI_Text_ITextRange<D>::EndOf(Windows::UI::Text::TextRangeUnit const& unit, bool extend) const
{
    int32_t delta{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->EndOf(get_abi(unit), extend, &delta));
    return delta;
}

template <typename D> int32_t consume_Windows_UI_Text_ITextRange<D>::Expand(Windows::UI::Text::TextRangeUnit const& unit) const
{
    int32_t delta{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->Expand(get_abi(unit), &delta));
    return delta;
}

template <typename D> int32_t consume_Windows_UI_Text_ITextRange<D>::FindText(param::hstring const& value, int32_t scanLength, Windows::UI::Text::FindOptions const& options) const
{
    int32_t length{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->FindText(get_abi(value), scanLength, get_abi(options), &length));
    return length;
}

template <typename D> void consume_Windows_UI_Text_ITextRange<D>::GetCharacterUtf32(uint32_t& value, int32_t offset) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->GetCharacterUtf32(&value, offset));
}

template <typename D> Windows::UI::Text::ITextRange consume_Windows_UI_Text_ITextRange<D>::GetClone() const
{
    Windows::UI::Text::ITextRange value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->GetClone(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Text_ITextRange<D>::GetIndex(Windows::UI::Text::TextRangeUnit const& unit) const
{
    int32_t index{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->GetIndex(get_abi(unit), &index));
    return index;
}

template <typename D> void consume_Windows_UI_Text_ITextRange<D>::GetPoint(Windows::UI::Text::HorizontalCharacterAlignment const& horizontalAlign, Windows::UI::Text::VerticalCharacterAlignment const& verticalAlign, Windows::UI::Text::PointOptions const& options, Windows::Foundation::Point& point) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->GetPoint(get_abi(horizontalAlign), get_abi(verticalAlign), get_abi(options), put_abi(point)));
}

template <typename D> void consume_Windows_UI_Text_ITextRange<D>::GetRect(Windows::UI::Text::PointOptions const& options, Windows::Foundation::Rect& rect, int32_t& hit) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->GetRect(get_abi(options), put_abi(rect), &hit));
}

template <typename D> void consume_Windows_UI_Text_ITextRange<D>::GetText(Windows::UI::Text::TextGetOptions const& options, hstring& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->GetText(get_abi(options), put_abi(value)));
}

template <typename D> void consume_Windows_UI_Text_ITextRange<D>::GetTextViaStream(Windows::UI::Text::TextGetOptions const& options, Windows::Storage::Streams::IRandomAccessStream const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->GetTextViaStream(get_abi(options), get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Text_ITextRange<D>::InRange(Windows::UI::Text::ITextRange const& range) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->InRange(get_abi(range), &value));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextRange<D>::InsertImage(int32_t width, int32_t height, int32_t ascent, Windows::UI::Text::VerticalCharacterAlignment const& verticalAlign, param::hstring const& alternateText, Windows::Storage::Streams::IRandomAccessStream const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->InsertImage(width, height, ascent, get_abi(verticalAlign), get_abi(alternateText), get_abi(value)));
}

template <typename D> bool consume_Windows_UI_Text_ITextRange<D>::InStory(Windows::UI::Text::ITextRange const& range) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->InStory(get_abi(range), &value));
    return value;
}

template <typename D> bool consume_Windows_UI_Text_ITextRange<D>::IsEqual(Windows::UI::Text::ITextRange const& range) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->IsEqual(get_abi(range), &value));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Text_ITextRange<D>::Move(Windows::UI::Text::TextRangeUnit const& unit, int32_t count) const
{
    int32_t delta{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->Move(get_abi(unit), count, &delta));
    return delta;
}

template <typename D> int32_t consume_Windows_UI_Text_ITextRange<D>::MoveEnd(Windows::UI::Text::TextRangeUnit const& unit, int32_t count) const
{
    int32_t delta{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->MoveEnd(get_abi(unit), count, &delta));
    return delta;
}

template <typename D> int32_t consume_Windows_UI_Text_ITextRange<D>::MoveStart(Windows::UI::Text::TextRangeUnit const& unit, int32_t count) const
{
    int32_t delta{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->MoveStart(get_abi(unit), count, &delta));
    return delta;
}

template <typename D> void consume_Windows_UI_Text_ITextRange<D>::Paste(int32_t format) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->Paste(format));
}

template <typename D> void consume_Windows_UI_Text_ITextRange<D>::ScrollIntoView(Windows::UI::Text::PointOptions const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->ScrollIntoView(get_abi(value)));
}

template <typename D> void consume_Windows_UI_Text_ITextRange<D>::MatchSelection() const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->MatchSelection());
}

template <typename D> void consume_Windows_UI_Text_ITextRange<D>::SetIndex(Windows::UI::Text::TextRangeUnit const& unit, int32_t index, bool extend) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->SetIndex(get_abi(unit), index, extend));
}

template <typename D> void consume_Windows_UI_Text_ITextRange<D>::SetPoint(Windows::Foundation::Point const& point, Windows::UI::Text::PointOptions const& options, bool extend) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->SetPoint(get_abi(point), get_abi(options), extend));
}

template <typename D> void consume_Windows_UI_Text_ITextRange<D>::SetRange(int32_t startPosition, int32_t endPosition) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->SetRange(startPosition, endPosition));
}

template <typename D> void consume_Windows_UI_Text_ITextRange<D>::SetText(Windows::UI::Text::TextSetOptions const& options, param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->SetText(get_abi(options), get_abi(value)));
}

template <typename D> void consume_Windows_UI_Text_ITextRange<D>::SetTextViaStream(Windows::UI::Text::TextSetOptions const& options, Windows::Storage::Streams::IRandomAccessStream const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->SetTextViaStream(get_abi(options), get_abi(value)));
}

template <typename D> int32_t consume_Windows_UI_Text_ITextRange<D>::StartOf(Windows::UI::Text::TextRangeUnit const& unit, bool extend) const
{
    int32_t delta{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextRange)->StartOf(get_abi(unit), extend, &delta));
    return delta;
}

template <typename D> Windows::UI::Text::SelectionOptions consume_Windows_UI_Text_ITextSelection<D>::Options() const
{
    Windows::UI::Text::SelectionOptions value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextSelection)->get_Options(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_UI_Text_ITextSelection<D>::Options(Windows::UI::Text::SelectionOptions const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextSelection)->put_Options(get_abi(value)));
}

template <typename D> Windows::UI::Text::SelectionType consume_Windows_UI_Text_ITextSelection<D>::Type() const
{
    Windows::UI::Text::SelectionType value{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextSelection)->get_Type(put_abi(value)));
    return value;
}

template <typename D> int32_t consume_Windows_UI_Text_ITextSelection<D>::EndKey(Windows::UI::Text::TextRangeUnit const& unit, bool extend) const
{
    int32_t delta{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextSelection)->EndKey(get_abi(unit), extend, &delta));
    return delta;
}

template <typename D> int32_t consume_Windows_UI_Text_ITextSelection<D>::HomeKey(Windows::UI::Text::TextRangeUnit const& unit, bool extend) const
{
    int32_t delta{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextSelection)->HomeKey(get_abi(unit), extend, &delta));
    return delta;
}

template <typename D> int32_t consume_Windows_UI_Text_ITextSelection<D>::MoveDown(Windows::UI::Text::TextRangeUnit const& unit, int32_t count, bool extend) const
{
    int32_t delta{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextSelection)->MoveDown(get_abi(unit), count, extend, &delta));
    return delta;
}

template <typename D> int32_t consume_Windows_UI_Text_ITextSelection<D>::MoveLeft(Windows::UI::Text::TextRangeUnit const& unit, int32_t count, bool extend) const
{
    int32_t delta{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextSelection)->MoveLeft(get_abi(unit), count, extend, &delta));
    return delta;
}

template <typename D> int32_t consume_Windows_UI_Text_ITextSelection<D>::MoveRight(Windows::UI::Text::TextRangeUnit const& unit, int32_t count, bool extend) const
{
    int32_t delta{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextSelection)->MoveRight(get_abi(unit), count, extend, &delta));
    return delta;
}

template <typename D> int32_t consume_Windows_UI_Text_ITextSelection<D>::MoveUp(Windows::UI::Text::TextRangeUnit const& unit, int32_t count, bool extend) const
{
    int32_t delta{};
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextSelection)->MoveUp(get_abi(unit), count, extend, &delta));
    return delta;
}

template <typename D> void consume_Windows_UI_Text_ITextSelection<D>::TypeText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::UI::Text::ITextSelection)->TypeText(get_abi(value)));
}

template <typename D>
struct produce<D, Windows::UI::Text::IFontWeights> : produce_base<D, Windows::UI::Text::IFontWeights>
{};

template <typename D>
struct produce<D, Windows::UI::Text::IFontWeightsStatics> : produce_base<D, Windows::UI::Text::IFontWeightsStatics>
{
    HRESULT __stdcall get_Black(abi_t<Windows::UI::Text::FontWeight>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Black());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bold(abi_t<Windows::UI::Text::FontWeight>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Bold());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtraBlack(abi_t<Windows::UI::Text::FontWeight>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtraBlack());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtraBold(abi_t<Windows::UI::Text::FontWeight>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtraBold());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ExtraLight(abi_t<Windows::UI::Text::FontWeight>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ExtraLight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Light(abi_t<Windows::UI::Text::FontWeight>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Light());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Medium(abi_t<Windows::UI::Text::FontWeight>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Medium());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Normal(abi_t<Windows::UI::Text::FontWeight>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Normal());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SemiBold(abi_t<Windows::UI::Text::FontWeight>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SemiBold());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SemiLight(abi_t<Windows::UI::Text::FontWeight>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SemiLight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Thin(abi_t<Windows::UI::Text::FontWeight>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Thin());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Text::ITextCharacterFormat> : produce_base<D, Windows::UI::Text::ITextCharacterFormat>
{
    HRESULT __stdcall get_AllCaps(abi_t<Windows::UI::Text::FormatEffect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AllCaps());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AllCaps(abi_t<Windows::UI::Text::FormatEffect> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllCaps(*reinterpret_cast<Windows::UI::Text::FormatEffect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_BackgroundColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().BackgroundColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_BackgroundColor(abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BackgroundColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Bold(abi_t<Windows::UI::Text::FormatEffect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Bold());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Bold(abi_t<Windows::UI::Text::FormatEffect> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Bold(*reinterpret_cast<Windows::UI::Text::FormatEffect const*>(&value));
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

    HRESULT __stdcall get_ForegroundColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ForegroundColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ForegroundColor(abi_t<Windows::UI::Color> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ForegroundColor(*reinterpret_cast<Windows::UI::Color const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Hidden(abi_t<Windows::UI::Text::FormatEffect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Hidden());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Hidden(abi_t<Windows::UI::Text::FormatEffect> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Hidden(*reinterpret_cast<Windows::UI::Text::FormatEffect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Italic(abi_t<Windows::UI::Text::FormatEffect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Italic());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Italic(abi_t<Windows::UI::Text::FormatEffect> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Italic(*reinterpret_cast<Windows::UI::Text::FormatEffect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Kerning(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Kerning());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Kerning(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Kerning(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LanguageTag(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LanguageTag());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_LanguageTag(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LanguageTag(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LinkType(abi_t<Windows::UI::Text::LinkType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LinkType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall put_Name(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Name(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Outline(abi_t<Windows::UI::Text::FormatEffect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Outline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Outline(abi_t<Windows::UI::Text::FormatEffect> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Outline(*reinterpret_cast<Windows::UI::Text::FormatEffect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Position(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Position());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Position(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Position(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ProtectedText(abi_t<Windows::UI::Text::FormatEffect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ProtectedText());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ProtectedText(abi_t<Windows::UI::Text::FormatEffect> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProtectedText(*reinterpret_cast<Windows::UI::Text::FormatEffect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Size(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Size());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Size(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Size(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SmallCaps(abi_t<Windows::UI::Text::FormatEffect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SmallCaps());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SmallCaps(abi_t<Windows::UI::Text::FormatEffect> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SmallCaps(*reinterpret_cast<Windows::UI::Text::FormatEffect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Spacing(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Spacing());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Spacing(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Spacing(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Strikethrough(abi_t<Windows::UI::Text::FormatEffect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Strikethrough());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Strikethrough(abi_t<Windows::UI::Text::FormatEffect> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Strikethrough(*reinterpret_cast<Windows::UI::Text::FormatEffect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Subscript(abi_t<Windows::UI::Text::FormatEffect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Subscript());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Subscript(abi_t<Windows::UI::Text::FormatEffect> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Subscript(*reinterpret_cast<Windows::UI::Text::FormatEffect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Superscript(abi_t<Windows::UI::Text::FormatEffect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Superscript());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Superscript(abi_t<Windows::UI::Text::FormatEffect> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Superscript(*reinterpret_cast<Windows::UI::Text::FormatEffect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TextScript(abi_t<Windows::UI::Text::TextScript>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TextScript());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TextScript(abi_t<Windows::UI::Text::TextScript> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TextScript(*reinterpret_cast<Windows::UI::Text::TextScript const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Underline(abi_t<Windows::UI::Text::UnderlineType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Underline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Underline(abi_t<Windows::UI::Text::UnderlineType> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Underline(*reinterpret_cast<Windows::UI::Text::UnderlineType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Weight(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Weight());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Weight(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Weight(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetClone(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetClone(*reinterpret_cast<Windows::UI::Text::ITextCharacterFormat const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetClone(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetClone());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsEqual(::IUnknown* format, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsEqual(*reinterpret_cast<Windows::UI::Text::ITextCharacterFormat const*>(&format)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Text::ITextConstantsStatics> : produce_base<D, Windows::UI::Text::ITextConstantsStatics>
{
    HRESULT __stdcall get_AutoColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AutoColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MinUnitCount(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MinUnitCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_MaxUnitCount(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().MaxUnitCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UndefinedColor(abi_t<Windows::UI::Color>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UndefinedColor());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UndefinedFloatValue(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UndefinedFloatValue());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UndefinedInt32Value(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UndefinedInt32Value());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UndefinedFontStretch(abi_t<Windows::UI::Text::FontStretch>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UndefinedFontStretch());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UndefinedFontStyle(abi_t<Windows::UI::Text::FontStyle>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UndefinedFontStyle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Text::ITextDocument> : produce_base<D, Windows::UI::Text::ITextDocument>
{
    HRESULT __stdcall get_CaretType(abi_t<Windows::UI::Text::CaretType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CaretType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CaretType(abi_t<Windows::UI::Text::CaretType> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CaretType(*reinterpret_cast<Windows::UI::Text::CaretType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultTabStop(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DefaultTabStop());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DefaultTabStop(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultTabStop(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Selection(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Selection());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_UndoLimit(uint32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().UndoLimit());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_UndoLimit(uint32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UndoLimit(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CanCopy(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanCopy());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CanPaste(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanPaste());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CanRedo(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanRedo());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall CanUndo(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanUndo());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ApplyDisplayUpdates(int32_t* count) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *count = detach_abi(this->shim().ApplyDisplayUpdates());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall BatchDisplayUpdates(int32_t* count) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *count = detach_abi(this->shim().BatchDisplayUpdates());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall BeginUndoGroup() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BeginUndoGroup();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EndUndoGroup() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EndUndoGroup();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDefaultCharacterFormat(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDefaultCharacterFormat());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetDefaultParagraphFormat(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetDefaultParagraphFormat());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetRange(int32_t startPosition, int32_t endPosition, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetRange(startPosition, endPosition));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetRangeFromPoint(abi_t<Windows::Foundation::Point> point, abi_t<Windows::UI::Text::PointOptions> options, ::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetRangeFromPoint(*reinterpret_cast<Windows::Foundation::Point const*>(&point), *reinterpret_cast<Windows::UI::Text::PointOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetText(abi_t<Windows::UI::Text::TextGetOptions> options, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetText(*reinterpret_cast<Windows::UI::Text::TextGetOptions const*>(&options), *reinterpret_cast<hstring*>(value));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall LoadFromStream(abi_t<Windows::UI::Text::TextSetOptions> options, ::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LoadFromStream(*reinterpret_cast<Windows::UI::Text::TextSetOptions const*>(&options), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Redo() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Redo();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SaveToStream(abi_t<Windows::UI::Text::TextGetOptions> options, ::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SaveToStream(*reinterpret_cast<Windows::UI::Text::TextGetOptions const*>(&options), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetDefaultCharacterFormat(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDefaultCharacterFormat(*reinterpret_cast<Windows::UI::Text::ITextCharacterFormat const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetDefaultParagraphFormat(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetDefaultParagraphFormat(*reinterpret_cast<Windows::UI::Text::ITextParagraphFormat const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetText(abi_t<Windows::UI::Text::TextSetOptions> options, HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetText(*reinterpret_cast<Windows::UI::Text::TextSetOptions const*>(&options), *reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Undo() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Undo();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Text::ITextDocument2> : produce_base<D, Windows::UI::Text::ITextDocument2>
{
    HRESULT __stdcall get_AlignmentIncludesTrailingWhitespace(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().AlignmentIncludesTrailingWhitespace());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_AlignmentIncludesTrailingWhitespace(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlignmentIncludesTrailingWhitespace(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IgnoreTrailingCharacterSpacing(bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IgnoreTrailingCharacterSpacing());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_IgnoreTrailingCharacterSpacing(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IgnoreTrailingCharacterSpacing(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Text::ITextParagraphFormat> : produce_base<D, Windows::UI::Text::ITextParagraphFormat>
{
    HRESULT __stdcall get_Alignment(abi_t<Windows::UI::Text::ParagraphAlignment>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Alignment());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Alignment(abi_t<Windows::UI::Text::ParagraphAlignment> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Alignment(*reinterpret_cast<Windows::UI::Text::ParagraphAlignment const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FirstLineIndent(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FirstLineIndent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeepTogether(abi_t<Windows::UI::Text::FormatEffect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeepTogether());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeepTogether(abi_t<Windows::UI::Text::FormatEffect> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeepTogether(*reinterpret_cast<Windows::UI::Text::FormatEffect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_KeepWithNext(abi_t<Windows::UI::Text::FormatEffect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().KeepWithNext());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_KeepWithNext(abi_t<Windows::UI::Text::FormatEffect> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().KeepWithNext(*reinterpret_cast<Windows::UI::Text::FormatEffect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LeftIndent(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LeftIndent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LineSpacing(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LineSpacing());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_LineSpacingRule(abi_t<Windows::UI::Text::LineSpacingRule>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().LineSpacingRule());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ListAlignment(abi_t<Windows::UI::Text::MarkerAlignment>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ListAlignment());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ListAlignment(abi_t<Windows::UI::Text::MarkerAlignment> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ListAlignment(*reinterpret_cast<Windows::UI::Text::MarkerAlignment const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ListLevelIndex(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ListLevelIndex());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ListLevelIndex(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ListLevelIndex(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ListStart(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ListStart());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ListStart(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ListStart(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ListStyle(abi_t<Windows::UI::Text::MarkerStyle>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ListStyle());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ListStyle(abi_t<Windows::UI::Text::MarkerStyle> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ListStyle(*reinterpret_cast<Windows::UI::Text::MarkerStyle const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ListTab(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ListTab());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ListTab(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ListTab(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ListType(abi_t<Windows::UI::Text::MarkerType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ListType());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ListType(abi_t<Windows::UI::Text::MarkerType> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ListType(*reinterpret_cast<Windows::UI::Text::MarkerType const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_NoLineNumber(abi_t<Windows::UI::Text::FormatEffect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().NoLineNumber());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_NoLineNumber(abi_t<Windows::UI::Text::FormatEffect> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NoLineNumber(*reinterpret_cast<Windows::UI::Text::FormatEffect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_PageBreakBefore(abi_t<Windows::UI::Text::FormatEffect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().PageBreakBefore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_PageBreakBefore(abi_t<Windows::UI::Text::FormatEffect> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PageBreakBefore(*reinterpret_cast<Windows::UI::Text::FormatEffect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RightIndent(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RightIndent());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RightIndent(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RightIndent(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_RightToLeft(abi_t<Windows::UI::Text::FormatEffect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().RightToLeft());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_RightToLeft(abi_t<Windows::UI::Text::FormatEffect> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RightToLeft(*reinterpret_cast<Windows::UI::Text::FormatEffect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Style(abi_t<Windows::UI::Text::ParagraphStyle>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Style());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Style(abi_t<Windows::UI::Text::ParagraphStyle> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Style(*reinterpret_cast<Windows::UI::Text::ParagraphStyle const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpaceAfter(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SpaceAfter());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SpaceAfter(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SpaceAfter(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SpaceBefore(float* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SpaceBefore());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SpaceBefore(float value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SpaceBefore(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_WidowControl(abi_t<Windows::UI::Text::FormatEffect>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().WidowControl());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_WidowControl(abi_t<Windows::UI::Text::FormatEffect> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WidowControl(*reinterpret_cast<Windows::UI::Text::FormatEffect const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_TabCount(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().TabCount());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall AddTab(float position, abi_t<Windows::UI::Text::TabAlignment> align, abi_t<Windows::UI::Text::TabLeader> leader) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddTab(position, *reinterpret_cast<Windows::UI::Text::TabAlignment const*>(&align), *reinterpret_cast<Windows::UI::Text::TabLeader const*>(&leader));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ClearAllTabs() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ClearAllTabs();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall DeleteTab(float position) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DeleteTab(position);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetClone(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetClone());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetTab(int32_t index, float* position, abi_t<Windows::UI::Text::TabAlignment>* align, abi_t<Windows::UI::Text::TabLeader>* leader) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetTab(index, *position, *reinterpret_cast<Windows::UI::Text::TabAlignment*>(align), *reinterpret_cast<Windows::UI::Text::TabLeader*>(leader));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsEqual(::IUnknown* format, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsEqual(*reinterpret_cast<Windows::UI::Text::ITextParagraphFormat const*>(&format)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetClone(::IUnknown* format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetClone(*reinterpret_cast<Windows::UI::Text::ITextParagraphFormat const*>(&format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetIndents(float start, float left, float right) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetIndents(start, left, right);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetLineSpacing(abi_t<Windows::UI::Text::LineSpacingRule> rule, float spacing) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetLineSpacing(*reinterpret_cast<Windows::UI::Text::LineSpacingRule const*>(&rule), spacing);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Text::ITextRange> : produce_base<D, Windows::UI::Text::ITextRange>
{
    HRESULT __stdcall get_Character(char16_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Character());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Character(char16_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Character(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CharacterFormat(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CharacterFormat());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CharacterFormat(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CharacterFormat(*reinterpret_cast<Windows::UI::Text::ITextCharacterFormat const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FormattedText(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FormattedText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_FormattedText(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FormattedText(*reinterpret_cast<Windows::UI::Text::ITextRange const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_EndPosition(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EndPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EndPosition(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EndPosition(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Gravity(abi_t<Windows::UI::Text::RangeGravity>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Gravity());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Gravity(abi_t<Windows::UI::Text::RangeGravity> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Gravity(*reinterpret_cast<Windows::UI::Text::RangeGravity const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Length(int32_t* length) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *length = detach_abi(this->shim().Length());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Link(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Link());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Link(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Link(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_ParagraphFormat(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ParagraphFormat());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ParagraphFormat(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ParagraphFormat(*reinterpret_cast<Windows::UI::Text::ITextParagraphFormat const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StartPosition(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StartPosition());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_StartPosition(int32_t value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartPosition(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_StoryLength(int32_t* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().StoryLength());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

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

    HRESULT __stdcall CanPaste(int32_t format, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CanPaste(format));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ChangeCase(abi_t<Windows::UI::Text::LetterCase> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ChangeCase(*reinterpret_cast<Windows::UI::Text::LetterCase const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Collapse(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Collapse(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Copy() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Copy();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Cut() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Cut();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Delete(abi_t<Windows::UI::Text::TextRangeUnit> unit, int32_t count, int32_t* delta) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *delta = detach_abi(this->shim().Delete(*reinterpret_cast<Windows::UI::Text::TextRangeUnit const*>(&unit), count));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EndOf(abi_t<Windows::UI::Text::TextRangeUnit> unit, bool extend, int32_t* delta) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *delta = detach_abi(this->shim().EndOf(*reinterpret_cast<Windows::UI::Text::TextRangeUnit const*>(&unit), extend));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Expand(abi_t<Windows::UI::Text::TextRangeUnit> unit, int32_t* delta) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *delta = detach_abi(this->shim().Expand(*reinterpret_cast<Windows::UI::Text::TextRangeUnit const*>(&unit)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall FindText(HSTRING value, int32_t scanLength, abi_t<Windows::UI::Text::FindOptions> options, int32_t* length) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *length = detach_abi(this->shim().FindText(*reinterpret_cast<hstring const*>(&value), scanLength, *reinterpret_cast<Windows::UI::Text::FindOptions const*>(&options)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetCharacterUtf32(uint32_t* value, int32_t offset) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetCharacterUtf32(*value, offset);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetClone(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().GetClone());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetIndex(abi_t<Windows::UI::Text::TextRangeUnit> unit, int32_t* index) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *index = detach_abi(this->shim().GetIndex(*reinterpret_cast<Windows::UI::Text::TextRangeUnit const*>(&unit)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetPoint(abi_t<Windows::UI::Text::HorizontalCharacterAlignment> horizontalAlign, abi_t<Windows::UI::Text::VerticalCharacterAlignment> verticalAlign, abi_t<Windows::UI::Text::PointOptions> options, abi_t<Windows::Foundation::Point>* point) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetPoint(*reinterpret_cast<Windows::UI::Text::HorizontalCharacterAlignment const*>(&horizontalAlign), *reinterpret_cast<Windows::UI::Text::VerticalCharacterAlignment const*>(&verticalAlign), *reinterpret_cast<Windows::UI::Text::PointOptions const*>(&options), *reinterpret_cast<Windows::Foundation::Point*>(point));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetRect(abi_t<Windows::UI::Text::PointOptions> options, abi_t<Windows::Foundation::Rect>* rect, int32_t* hit) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetRect(*reinterpret_cast<Windows::UI::Text::PointOptions const*>(&options), *reinterpret_cast<Windows::Foundation::Rect*>(rect), *hit);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetText(abi_t<Windows::UI::Text::TextGetOptions> options, HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetText(*reinterpret_cast<Windows::UI::Text::TextGetOptions const*>(&options), *reinterpret_cast<hstring*>(value));
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall GetTextViaStream(abi_t<Windows::UI::Text::TextGetOptions> options, ::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetTextViaStream(*reinterpret_cast<Windows::UI::Text::TextGetOptions const*>(&options), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InRange(::IUnknown* range, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InRange(*reinterpret_cast<Windows::UI::Text::ITextRange const*>(&range)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InsertImage(int32_t width, int32_t height, int32_t ascent, abi_t<Windows::UI::Text::VerticalCharacterAlignment> verticalAlign, HSTRING alternateText, ::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InsertImage(width, height, ascent, *reinterpret_cast<Windows::UI::Text::VerticalCharacterAlignment const*>(&verticalAlign), *reinterpret_cast<hstring const*>(&alternateText), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall InStory(::IUnknown* range, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().InStory(*reinterpret_cast<Windows::UI::Text::ITextRange const*>(&range)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall IsEqual(::IUnknown* range, bool* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsEqual(*reinterpret_cast<Windows::UI::Text::ITextRange const*>(&range)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Move(abi_t<Windows::UI::Text::TextRangeUnit> unit, int32_t count, int32_t* delta) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *delta = detach_abi(this->shim().Move(*reinterpret_cast<Windows::UI::Text::TextRangeUnit const*>(&unit), count));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MoveEnd(abi_t<Windows::UI::Text::TextRangeUnit> unit, int32_t count, int32_t* delta) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *delta = detach_abi(this->shim().MoveEnd(*reinterpret_cast<Windows::UI::Text::TextRangeUnit const*>(&unit), count));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MoveStart(abi_t<Windows::UI::Text::TextRangeUnit> unit, int32_t count, int32_t* delta) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *delta = detach_abi(this->shim().MoveStart(*reinterpret_cast<Windows::UI::Text::TextRangeUnit const*>(&unit), count));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall Paste(int32_t format) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Paste(format);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall ScrollIntoView(abi_t<Windows::UI::Text::PointOptions> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ScrollIntoView(*reinterpret_cast<Windows::UI::Text::PointOptions const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MatchSelection() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MatchSelection();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetIndex(abi_t<Windows::UI::Text::TextRangeUnit> unit, int32_t index, bool extend) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetIndex(*reinterpret_cast<Windows::UI::Text::TextRangeUnit const*>(&unit), index, extend);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetPoint(abi_t<Windows::Foundation::Point> point, abi_t<Windows::UI::Text::PointOptions> options, bool extend) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetPoint(*reinterpret_cast<Windows::Foundation::Point const*>(&point), *reinterpret_cast<Windows::UI::Text::PointOptions const*>(&options), extend);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetRange(int32_t startPosition, int32_t endPosition) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetRange(startPosition, endPosition);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetText(abi_t<Windows::UI::Text::TextSetOptions> options, HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetText(*reinterpret_cast<Windows::UI::Text::TextSetOptions const*>(&options), *reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall SetTextViaStream(abi_t<Windows::UI::Text::TextSetOptions> options, ::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetTextViaStream(*reinterpret_cast<Windows::UI::Text::TextSetOptions const*>(&options), *reinterpret_cast<Windows::Storage::Streams::IRandomAccessStream const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall StartOf(abi_t<Windows::UI::Text::TextRangeUnit> unit, bool extend, int32_t* delta) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *delta = detach_abi(this->shim().StartOf(*reinterpret_cast<Windows::UI::Text::TextRangeUnit const*>(&unit), extend));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::UI::Text::ITextSelection> : produce_base<D, Windows::UI::Text::ITextSelection>
{
    HRESULT __stdcall get_Options(abi_t<Windows::UI::Text::SelectionOptions>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Options());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Options(abi_t<Windows::UI::Text::SelectionOptions> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Options(*reinterpret_cast<Windows::UI::Text::SelectionOptions const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Type(abi_t<Windows::UI::Text::SelectionType>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall EndKey(abi_t<Windows::UI::Text::TextRangeUnit> unit, bool extend, int32_t* delta) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *delta = detach_abi(this->shim().EndKey(*reinterpret_cast<Windows::UI::Text::TextRangeUnit const*>(&unit), extend));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall HomeKey(abi_t<Windows::UI::Text::TextRangeUnit> unit, bool extend, int32_t* delta) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *delta = detach_abi(this->shim().HomeKey(*reinterpret_cast<Windows::UI::Text::TextRangeUnit const*>(&unit), extend));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MoveDown(abi_t<Windows::UI::Text::TextRangeUnit> unit, int32_t count, bool extend, int32_t* delta) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *delta = detach_abi(this->shim().MoveDown(*reinterpret_cast<Windows::UI::Text::TextRangeUnit const*>(&unit), count, extend));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MoveLeft(abi_t<Windows::UI::Text::TextRangeUnit> unit, int32_t count, bool extend, int32_t* delta) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *delta = detach_abi(this->shim().MoveLeft(*reinterpret_cast<Windows::UI::Text::TextRangeUnit const*>(&unit), count, extend));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MoveRight(abi_t<Windows::UI::Text::TextRangeUnit> unit, int32_t count, bool extend, int32_t* delta) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *delta = detach_abi(this->shim().MoveRight(*reinterpret_cast<Windows::UI::Text::TextRangeUnit const*>(&unit), count, extend));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall MoveUp(abi_t<Windows::UI::Text::TextRangeUnit> unit, int32_t count, bool extend, int32_t* delta) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *delta = detach_abi(this->shim().MoveUp(*reinterpret_cast<Windows::UI::Text::TextRangeUnit const*>(&unit), count, extend));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall TypeText(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TypeText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::UI::Text {

inline Windows::UI::Text::FontWeight FontWeights::Black()
{
    return get_activation_factory<FontWeights, Windows::UI::Text::IFontWeightsStatics>().Black();
}

inline Windows::UI::Text::FontWeight FontWeights::Bold()
{
    return get_activation_factory<FontWeights, Windows::UI::Text::IFontWeightsStatics>().Bold();
}

inline Windows::UI::Text::FontWeight FontWeights::ExtraBlack()
{
    return get_activation_factory<FontWeights, Windows::UI::Text::IFontWeightsStatics>().ExtraBlack();
}

inline Windows::UI::Text::FontWeight FontWeights::ExtraBold()
{
    return get_activation_factory<FontWeights, Windows::UI::Text::IFontWeightsStatics>().ExtraBold();
}

inline Windows::UI::Text::FontWeight FontWeights::ExtraLight()
{
    return get_activation_factory<FontWeights, Windows::UI::Text::IFontWeightsStatics>().ExtraLight();
}

inline Windows::UI::Text::FontWeight FontWeights::Light()
{
    return get_activation_factory<FontWeights, Windows::UI::Text::IFontWeightsStatics>().Light();
}

inline Windows::UI::Text::FontWeight FontWeights::Medium()
{
    return get_activation_factory<FontWeights, Windows::UI::Text::IFontWeightsStatics>().Medium();
}

inline Windows::UI::Text::FontWeight FontWeights::Normal()
{
    return get_activation_factory<FontWeights, Windows::UI::Text::IFontWeightsStatics>().Normal();
}

inline Windows::UI::Text::FontWeight FontWeights::SemiBold()
{
    return get_activation_factory<FontWeights, Windows::UI::Text::IFontWeightsStatics>().SemiBold();
}

inline Windows::UI::Text::FontWeight FontWeights::SemiLight()
{
    return get_activation_factory<FontWeights, Windows::UI::Text::IFontWeightsStatics>().SemiLight();
}

inline Windows::UI::Text::FontWeight FontWeights::Thin()
{
    return get_activation_factory<FontWeights, Windows::UI::Text::IFontWeightsStatics>().Thin();
}

inline Windows::UI::Color TextConstants::AutoColor()
{
    return get_activation_factory<TextConstants, Windows::UI::Text::ITextConstantsStatics>().AutoColor();
}

inline int32_t TextConstants::MinUnitCount()
{
    return get_activation_factory<TextConstants, Windows::UI::Text::ITextConstantsStatics>().MinUnitCount();
}

inline int32_t TextConstants::MaxUnitCount()
{
    return get_activation_factory<TextConstants, Windows::UI::Text::ITextConstantsStatics>().MaxUnitCount();
}

inline Windows::UI::Color TextConstants::UndefinedColor()
{
    return get_activation_factory<TextConstants, Windows::UI::Text::ITextConstantsStatics>().UndefinedColor();
}

inline float TextConstants::UndefinedFloatValue()
{
    return get_activation_factory<TextConstants, Windows::UI::Text::ITextConstantsStatics>().UndefinedFloatValue();
}

inline int32_t TextConstants::UndefinedInt32Value()
{
    return get_activation_factory<TextConstants, Windows::UI::Text::ITextConstantsStatics>().UndefinedInt32Value();
}

inline Windows::UI::Text::FontStretch TextConstants::UndefinedFontStretch()
{
    return get_activation_factory<TextConstants, Windows::UI::Text::ITextConstantsStatics>().UndefinedFontStretch();
}

inline Windows::UI::Text::FontStyle TextConstants::UndefinedFontStyle()
{
    return get_activation_factory<TextConstants, Windows::UI::Text::ITextConstantsStatics>().UndefinedFontStyle();
}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::UI::Text::IFontWeights> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Text::IFontWeights> {};

template<> struct hash<winrt::Windows::UI::Text::IFontWeightsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Text::IFontWeightsStatics> {};

template<> struct hash<winrt::Windows::UI::Text::ITextCharacterFormat> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Text::ITextCharacterFormat> {};

template<> struct hash<winrt::Windows::UI::Text::ITextConstantsStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Text::ITextConstantsStatics> {};

template<> struct hash<winrt::Windows::UI::Text::ITextDocument> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Text::ITextDocument> {};

template<> struct hash<winrt::Windows::UI::Text::ITextDocument2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Text::ITextDocument2> {};

template<> struct hash<winrt::Windows::UI::Text::ITextParagraphFormat> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Text::ITextParagraphFormat> {};

template<> struct hash<winrt::Windows::UI::Text::ITextRange> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Text::ITextRange> {};

template<> struct hash<winrt::Windows::UI::Text::ITextSelection> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Text::ITextSelection> {};

template<> struct hash<winrt::Windows::UI::Text::FontWeights> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Text::FontWeights> {};

template<> struct hash<winrt::Windows::UI::Text::RichEditTextDocument> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Text::RichEditTextDocument> {};

template<> struct hash<winrt::Windows::UI::Text::TextConstants> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::UI::Text::TextConstants> {};

}

WINRT_WARNING_POP
