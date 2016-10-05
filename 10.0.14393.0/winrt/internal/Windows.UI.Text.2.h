// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.UI.Text.1.h"

WINRT_EXPORT namespace winrt {

namespace Windows::UI::Text {

template <typename D>
struct WINRT_EBO impl_IFontWeights
{
};

template <typename D>
struct WINRT_EBO impl_IFontWeightsStatics
{
    Windows::UI::Text::FontWeight Black() const;
    Windows::UI::Text::FontWeight Bold() const;
    Windows::UI::Text::FontWeight ExtraBlack() const;
    Windows::UI::Text::FontWeight ExtraBold() const;
    Windows::UI::Text::FontWeight ExtraLight() const;
    Windows::UI::Text::FontWeight Light() const;
    Windows::UI::Text::FontWeight Medium() const;
    Windows::UI::Text::FontWeight Normal() const;
    Windows::UI::Text::FontWeight SemiBold() const;
    Windows::UI::Text::FontWeight SemiLight() const;
    Windows::UI::Text::FontWeight Thin() const;
};

template <typename D>
struct WINRT_EBO impl_ITextCharacterFormat
{
    Windows::UI::Text::FormatEffect AllCaps() const;
    void AllCaps(Windows::UI::Text::FormatEffect value) const;
    Windows::UI::Color BackgroundColor() const;
    void BackgroundColor(const Windows::UI::Color & value) const;
    Windows::UI::Text::FormatEffect Bold() const;
    void Bold(Windows::UI::Text::FormatEffect value) const;
    Windows::UI::Text::FontStretch FontStretch() const;
    void FontStretch(Windows::UI::Text::FontStretch value) const;
    Windows::UI::Text::FontStyle FontStyle() const;
    void FontStyle(Windows::UI::Text::FontStyle value) const;
    Windows::UI::Color ForegroundColor() const;
    void ForegroundColor(const Windows::UI::Color & value) const;
    Windows::UI::Text::FormatEffect Hidden() const;
    void Hidden(Windows::UI::Text::FormatEffect value) const;
    Windows::UI::Text::FormatEffect Italic() const;
    void Italic(Windows::UI::Text::FormatEffect value) const;
    float Kerning() const;
    void Kerning(float value) const;
    hstring LanguageTag() const;
    void LanguageTag(hstring_ref value) const;
    Windows::UI::Text::LinkType LinkType() const;
    hstring Name() const;
    void Name(hstring_ref value) const;
    Windows::UI::Text::FormatEffect Outline() const;
    void Outline(Windows::UI::Text::FormatEffect value) const;
    float Position() const;
    void Position(float value) const;
    Windows::UI::Text::FormatEffect ProtectedText() const;
    void ProtectedText(Windows::UI::Text::FormatEffect value) const;
    float Size() const;
    void Size(float value) const;
    Windows::UI::Text::FormatEffect SmallCaps() const;
    void SmallCaps(Windows::UI::Text::FormatEffect value) const;
    float Spacing() const;
    void Spacing(float value) const;
    Windows::UI::Text::FormatEffect Strikethrough() const;
    void Strikethrough(Windows::UI::Text::FormatEffect value) const;
    Windows::UI::Text::FormatEffect Subscript() const;
    void Subscript(Windows::UI::Text::FormatEffect value) const;
    Windows::UI::Text::FormatEffect Superscript() const;
    void Superscript(Windows::UI::Text::FormatEffect value) const;
    Windows::UI::Text::TextScript TextScript() const;
    void TextScript(Windows::UI::Text::TextScript value) const;
    Windows::UI::Text::UnderlineType Underline() const;
    void Underline(Windows::UI::Text::UnderlineType value) const;
    int32_t Weight() const;
    void Weight(int32_t value) const;
    void SetClone(const Windows::UI::Text::ITextCharacterFormat & value) const;
    Windows::UI::Text::ITextCharacterFormat GetClone() const;
    bool IsEqual(const Windows::UI::Text::ITextCharacterFormat & format) const;
};

template <typename D>
struct WINRT_EBO impl_ITextConstantsStatics
{
    Windows::UI::Color AutoColor() const;
    int32_t MinUnitCount() const;
    int32_t MaxUnitCount() const;
    Windows::UI::Color UndefinedColor() const;
    float UndefinedFloatValue() const;
    int32_t UndefinedInt32Value() const;
    Windows::UI::Text::FontStretch UndefinedFontStretch() const;
    Windows::UI::Text::FontStyle UndefinedFontStyle() const;
};

template <typename D>
struct WINRT_EBO impl_ITextDocument
{
    Windows::UI::Text::CaretType CaretType() const;
    void CaretType(Windows::UI::Text::CaretType value) const;
    float DefaultTabStop() const;
    void DefaultTabStop(float value) const;
    Windows::UI::Text::ITextSelection Selection() const;
    uint32_t UndoLimit() const;
    void UndoLimit(uint32_t value) const;
    bool CanCopy() const;
    bool CanPaste() const;
    bool CanRedo() const;
    bool CanUndo() const;
    int32_t ApplyDisplayUpdates() const;
    int32_t BatchDisplayUpdates() const;
    void BeginUndoGroup() const;
    void EndUndoGroup() const;
    Windows::UI::Text::ITextCharacterFormat GetDefaultCharacterFormat() const;
    Windows::UI::Text::ITextParagraphFormat GetDefaultParagraphFormat() const;
    Windows::UI::Text::ITextRange GetRange(int32_t startPosition, int32_t endPosition) const;
    Windows::UI::Text::ITextRange GetRangeFromPoint(const Windows::Foundation::Point & point, Windows::UI::Text::PointOptions options) const;
    void GetText(Windows::UI::Text::TextGetOptions options, hstring & value) const;
    void LoadFromStream(Windows::UI::Text::TextSetOptions options, const Windows::Storage::Streams::IRandomAccessStream & value) const;
    void Redo() const;
    void SaveToStream(Windows::UI::Text::TextGetOptions options, const Windows::Storage::Streams::IRandomAccessStream & value) const;
    void SetDefaultCharacterFormat(const Windows::UI::Text::ITextCharacterFormat & value) const;
    void SetDefaultParagraphFormat(const Windows::UI::Text::ITextParagraphFormat & value) const;
    void SetText(Windows::UI::Text::TextSetOptions options, hstring_ref value) const;
    void Undo() const;
};

template <typename D>
struct WINRT_EBO impl_ITextParagraphFormat
{
    Windows::UI::Text::ParagraphAlignment Alignment() const;
    void Alignment(Windows::UI::Text::ParagraphAlignment value) const;
    float FirstLineIndent() const;
    Windows::UI::Text::FormatEffect KeepTogether() const;
    void KeepTogether(Windows::UI::Text::FormatEffect value) const;
    Windows::UI::Text::FormatEffect KeepWithNext() const;
    void KeepWithNext(Windows::UI::Text::FormatEffect value) const;
    float LeftIndent() const;
    float LineSpacing() const;
    Windows::UI::Text::LineSpacingRule LineSpacingRule() const;
    Windows::UI::Text::MarkerAlignment ListAlignment() const;
    void ListAlignment(Windows::UI::Text::MarkerAlignment value) const;
    int32_t ListLevelIndex() const;
    void ListLevelIndex(int32_t value) const;
    int32_t ListStart() const;
    void ListStart(int32_t value) const;
    Windows::UI::Text::MarkerStyle ListStyle() const;
    void ListStyle(Windows::UI::Text::MarkerStyle value) const;
    float ListTab() const;
    void ListTab(float value) const;
    Windows::UI::Text::MarkerType ListType() const;
    void ListType(Windows::UI::Text::MarkerType value) const;
    Windows::UI::Text::FormatEffect NoLineNumber() const;
    void NoLineNumber(Windows::UI::Text::FormatEffect value) const;
    Windows::UI::Text::FormatEffect PageBreakBefore() const;
    void PageBreakBefore(Windows::UI::Text::FormatEffect value) const;
    float RightIndent() const;
    void RightIndent(float value) const;
    Windows::UI::Text::FormatEffect RightToLeft() const;
    void RightToLeft(Windows::UI::Text::FormatEffect value) const;
    Windows::UI::Text::ParagraphStyle Style() const;
    void Style(Windows::UI::Text::ParagraphStyle value) const;
    float SpaceAfter() const;
    void SpaceAfter(float value) const;
    float SpaceBefore() const;
    void SpaceBefore(float value) const;
    Windows::UI::Text::FormatEffect WidowControl() const;
    void WidowControl(Windows::UI::Text::FormatEffect value) const;
    int32_t TabCount() const;
    void AddTab(float position, Windows::UI::Text::TabAlignment align, Windows::UI::Text::TabLeader leader) const;
    void ClearAllTabs() const;
    void DeleteTab(float position) const;
    Windows::UI::Text::ITextParagraphFormat GetClone() const;
    void GetTab(int32_t index, float & position, Windows::UI::Text::TabAlignment & align, Windows::UI::Text::TabLeader & leader) const;
    bool IsEqual(const Windows::UI::Text::ITextParagraphFormat & format) const;
    void SetClone(const Windows::UI::Text::ITextParagraphFormat & format) const;
    void SetIndents(float start, float left, float right) const;
    void SetLineSpacing(Windows::UI::Text::LineSpacingRule rule, float spacing) const;
};

template <typename D>
struct WINRT_EBO impl_ITextRange
{
    wchar_t Character() const;
    void Character(wchar_t value) const;
    Windows::UI::Text::ITextCharacterFormat CharacterFormat() const;
    void CharacterFormat(const Windows::UI::Text::ITextCharacterFormat & value) const;
    Windows::UI::Text::ITextRange FormattedText() const;
    void FormattedText(const Windows::UI::Text::ITextRange & value) const;
    int32_t EndPosition() const;
    void EndPosition(int32_t value) const;
    Windows::UI::Text::RangeGravity Gravity() const;
    void Gravity(Windows::UI::Text::RangeGravity value) const;
    int32_t Length() const;
    hstring Link() const;
    void Link(hstring_ref value) const;
    Windows::UI::Text::ITextParagraphFormat ParagraphFormat() const;
    void ParagraphFormat(const Windows::UI::Text::ITextParagraphFormat & value) const;
    int32_t StartPosition() const;
    void StartPosition(int32_t value) const;
    int32_t StoryLength() const;
    hstring Text() const;
    void Text(hstring_ref value) const;
    bool CanPaste(int32_t format) const;
    void ChangeCase(Windows::UI::Text::LetterCase value) const;
    void Collapse(bool value) const;
    void Copy() const;
    void Cut() const;
    int32_t Delete(Windows::UI::Text::TextRangeUnit unit, int32_t count) const;
    int32_t EndOf(Windows::UI::Text::TextRangeUnit unit, bool extend) const;
    int32_t Expand(Windows::UI::Text::TextRangeUnit unit) const;
    int32_t FindText(hstring_ref value, int32_t scanLength, Windows::UI::Text::FindOptions options) const;
    void GetCharacterUtf32(uint32_t & value, int32_t offset) const;
    Windows::UI::Text::ITextRange GetClone() const;
    int32_t GetIndex(Windows::UI::Text::TextRangeUnit unit) const;
    void GetPoint(Windows::UI::Text::HorizontalCharacterAlignment horizontalAlign, Windows::UI::Text::VerticalCharacterAlignment verticalAlign, Windows::UI::Text::PointOptions options, Windows::Foundation::Point & point) const;
    void GetRect(Windows::UI::Text::PointOptions options, Windows::Foundation::Rect & rect, int32_t & hit) const;
    void GetText(Windows::UI::Text::TextGetOptions options, hstring & value) const;
    void GetTextViaStream(Windows::UI::Text::TextGetOptions options, const Windows::Storage::Streams::IRandomAccessStream & value) const;
    bool InRange(const Windows::UI::Text::ITextRange & range) const;
    void InsertImage(int32_t width, int32_t height, int32_t ascent, Windows::UI::Text::VerticalCharacterAlignment verticalAlign, hstring_ref alternateText, const Windows::Storage::Streams::IRandomAccessStream & value) const;
    bool InStory(const Windows::UI::Text::ITextRange & range) const;
    bool IsEqual(const Windows::UI::Text::ITextRange & range) const;
    int32_t Move(Windows::UI::Text::TextRangeUnit unit, int32_t count) const;
    int32_t MoveEnd(Windows::UI::Text::TextRangeUnit unit, int32_t count) const;
    int32_t MoveStart(Windows::UI::Text::TextRangeUnit unit, int32_t count) const;
    void Paste(int32_t format) const;
    void ScrollIntoView(Windows::UI::Text::PointOptions value) const;
    void MatchSelection() const;
    void SetIndex(Windows::UI::Text::TextRangeUnit unit, int32_t index, bool extend) const;
    void SetPoint(const Windows::Foundation::Point & point, Windows::UI::Text::PointOptions options, bool extend) const;
    void SetRange(int32_t startPosition, int32_t endPosition) const;
    void SetText(Windows::UI::Text::TextSetOptions options, hstring_ref value) const;
    void SetTextViaStream(Windows::UI::Text::TextSetOptions options, const Windows::Storage::Streams::IRandomAccessStream & value) const;
    int32_t StartOf(Windows::UI::Text::TextRangeUnit unit, bool extend) const;
};

template <typename D>
struct WINRT_EBO impl_ITextSelection
{
    Windows::UI::Text::SelectionOptions Options() const;
    void Options(Windows::UI::Text::SelectionOptions value) const;
    Windows::UI::Text::SelectionType Type() const;
    int32_t EndKey(Windows::UI::Text::TextRangeUnit unit, bool extend) const;
    int32_t HomeKey(Windows::UI::Text::TextRangeUnit unit, bool extend) const;
    int32_t MoveDown(Windows::UI::Text::TextRangeUnit unit, int32_t count, bool extend) const;
    int32_t MoveLeft(Windows::UI::Text::TextRangeUnit unit, int32_t count, bool extend) const;
    int32_t MoveRight(Windows::UI::Text::TextRangeUnit unit, int32_t count, bool extend) const;
    int32_t MoveUp(Windows::UI::Text::TextRangeUnit unit, int32_t count, bool extend) const;
    void TypeText(hstring_ref value) const;
};

struct IFontWeights :
    Windows::IInspectable,
    impl::consume<IFontWeights>
{
    IFontWeights(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFontWeights>(m_ptr); }
};

struct IFontWeightsStatics :
    Windows::IInspectable,
    impl::consume<IFontWeightsStatics>
{
    IFontWeightsStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<IFontWeightsStatics>(m_ptr); }
};

struct ITextCharacterFormat :
    Windows::IInspectable,
    impl::consume<ITextCharacterFormat>
{
    ITextCharacterFormat(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITextCharacterFormat>(m_ptr); }
};

struct ITextConstantsStatics :
    Windows::IInspectable,
    impl::consume<ITextConstantsStatics>
{
    ITextConstantsStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITextConstantsStatics>(m_ptr); }
};

struct ITextDocument :
    Windows::IInspectable,
    impl::consume<ITextDocument>
{
    ITextDocument(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITextDocument>(m_ptr); }
};

struct ITextParagraphFormat :
    Windows::IInspectable,
    impl::consume<ITextParagraphFormat>
{
    ITextParagraphFormat(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITextParagraphFormat>(m_ptr); }
};

struct ITextRange :
    Windows::IInspectable,
    impl::consume<ITextRange>
{
    ITextRange(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITextRange>(m_ptr); }
};

struct ITextSelection :
    Windows::IInspectable,
    impl::consume<ITextSelection>,
    impl::require<ITextSelection, Windows::UI::Text::ITextRange>
{
    ITextSelection(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<ITextSelection>(m_ptr); }
};

}

}
