// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging {

struct SoftwareBitmap;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Streams {

struct IBuffer;

}

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Preview::Notes {

struct INotePlacementChangedPreviewEventArgs;
struct INoteVisibilityChangedPreviewEventArgs;
struct INotesWindowManagerPreview;
struct INotesWindowManagerPreview2;
struct INotesWindowManagerPreviewShowNoteOptions;
struct INotesWindowManagerPreviewStatics;
struct NotePlacementChangedPreviewEventArgs;
struct NoteVisibilityChangedPreviewEventArgs;
struct NotesWindowManagerPreview;
struct NotesWindowManagerPreviewShowNoteOptions;

}

namespace winrt::impl {

template <> struct category<Windows::ApplicationModel::Preview::Notes::INotePlacementChangedPreviewEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Preview::Notes::INoteVisibilityChangedPreviewEventArgs>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview2>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewShowNoteOptions>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewStatics>{ using type = interface_category; };
template <> struct category<Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview>{ using type = class_category; };
template <> struct category<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreviewShowNoteOptions>{ using type = class_category; };
template <> struct name<Windows::ApplicationModel::Preview::Notes::INotePlacementChangedPreviewEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Preview.Notes.INotePlacementChangedPreviewEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Preview::Notes::INoteVisibilityChangedPreviewEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Preview.Notes.INoteVisibilityChangedPreviewEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview>{ static constexpr auto & value{ L"Windows.ApplicationModel.Preview.Notes.INotesWindowManagerPreview" }; };
template <> struct name<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview2>{ static constexpr auto & value{ L"Windows.ApplicationModel.Preview.Notes.INotesWindowManagerPreview2" }; };
template <> struct name<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewShowNoteOptions>{ static constexpr auto & value{ L"Windows.ApplicationModel.Preview.Notes.INotesWindowManagerPreviewShowNoteOptions" }; };
template <> struct name<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewStatics>{ static constexpr auto & value{ L"Windows.ApplicationModel.Preview.Notes.INotesWindowManagerPreviewStatics" }; };
template <> struct name<Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Preview.Notes.NotePlacementChangedPreviewEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs>{ static constexpr auto & value{ L"Windows.ApplicationModel.Preview.Notes.NoteVisibilityChangedPreviewEventArgs" }; };
template <> struct name<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview>{ static constexpr auto & value{ L"Windows.ApplicationModel.Preview.Notes.NotesWindowManagerPreview" }; };
template <> struct name<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreviewShowNoteOptions>{ static constexpr auto & value{ L"Windows.ApplicationModel.Preview.Notes.NotesWindowManagerPreviewShowNoteOptions" }; };
template <> struct guid<Windows::ApplicationModel::Preview::Notes::INotePlacementChangedPreviewEventArgs>{ static constexpr GUID value{ 0x491D57B7,0xF780,0x4E7F,{ 0xA9,0x39,0x9A,0x4C,0xAF,0x96,0x52,0x14 } }; };
template <> struct guid<Windows::ApplicationModel::Preview::Notes::INoteVisibilityChangedPreviewEventArgs>{ static constexpr GUID value{ 0x0E34649E,0x3815,0x4FF6,{ 0x83,0xB3,0xA1,0x4D,0x17,0x12,0x0E,0x24 } }; };
template <> struct guid<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview>{ static constexpr GUID value{ 0xDC2AC23E,0x4850,0x4F13,{ 0x9C,0xC7,0xFF,0x48,0x7E,0xFD,0xFC,0xDE } }; };
template <> struct guid<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview2>{ static constexpr GUID value{ 0xEDFE864A,0x1F54,0x4B09,{ 0x98,0x23,0xFF,0x47,0x7F,0x6F,0xA3,0xBC } }; };
template <> struct guid<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewShowNoteOptions>{ static constexpr GUID value{ 0x886B09D6,0xA6AE,0x4007,{ 0xA5,0x6D,0x1C,0xA7,0x0C,0x84,0xC0,0xD2 } }; };
template <> struct guid<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewStatics>{ static constexpr GUID value{ 0x6668CC88,0x0A8E,0x4127,{ 0xA3,0x8E,0x99,0x54,0x45,0x86,0x8A,0x78 } }; };
template <> struct default_interface<Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs>{ using type = Windows::ApplicationModel::Preview::Notes::INotePlacementChangedPreviewEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs>{ using type = Windows::ApplicationModel::Preview::Notes::INoteVisibilityChangedPreviewEventArgs; };
template <> struct default_interface<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview>{ using type = Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview; };
template <> struct default_interface<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreviewShowNoteOptions>{ using type = Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewShowNoteOptions; };

template <typename D>
struct consume_Windows_ApplicationModel_Preview_Notes_INotePlacementChangedPreviewEventArgs
{
    int32_t ViewId() const;
};
template <> struct consume<Windows::ApplicationModel::Preview::Notes::INotePlacementChangedPreviewEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Preview_Notes_INotePlacementChangedPreviewEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Preview_Notes_INoteVisibilityChangedPreviewEventArgs
{
    int32_t ViewId() const;
    bool IsVisible() const;
};
template <> struct consume<Windows::ApplicationModel::Preview::Notes::INoteVisibilityChangedPreviewEventArgs> { template <typename D> using type = consume_Windows_ApplicationModel_Preview_Notes_INoteVisibilityChangedPreviewEventArgs<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreview
{
    bool IsScreenLocked() const;
    void ShowNote(int32_t noteViewId) const;
    void ShowNoteRelativeTo(int32_t noteViewId, int32_t anchorNoteViewId) const;
    void ShowNoteWithPlacement(int32_t noteViewId, Windows::Storage::Streams::IBuffer const& data) const;
    void HideNote(int32_t noteViewId) const;
    Windows::Storage::Streams::IBuffer GetNotePlacement(int32_t noteViewId) const;
    bool TrySetNoteSize(int32_t noteViewId, Windows::Foundation::Size const& size) const;
    void SetFocusToNextView() const;
    Windows::Foundation::IAsyncAction SetNotesThumbnailAsync(Windows::Storage::Streams::IBuffer const& thumbnail) const;
    event_token SystemLockStateChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::Foundation::IInspectable> const& handler) const;
    using SystemLockStateChanged_revoker = event_revoker<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview>;
    SystemLockStateChanged_revoker SystemLockStateChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::Foundation::IInspectable> const& handler) const;
    void SystemLockStateChanged(event_token const& token) const;
    event_token NotePlacementChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs> const& handler) const;
    using NotePlacementChanged_revoker = event_revoker<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview>;
    NotePlacementChanged_revoker NotePlacementChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs> const& handler) const;
    void NotePlacementChanged(event_token const& token) const;
    event_token NoteVisibilityChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs> const& handler) const;
    using NoteVisibilityChanged_revoker = event_revoker<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview>;
    NoteVisibilityChanged_revoker NoteVisibilityChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs> const& handler) const;
    void NoteVisibilityChanged(event_token const& token) const;
};
template <> struct consume<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview> { template <typename D> using type = consume_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreview<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreview2
{
    void ShowNoteRelativeTo(int32_t noteViewId, int32_t anchorNoteViewId, Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreviewShowNoteOptions const& options) const;
    void ShowNoteWithPlacement(int32_t noteViewId, Windows::Storage::Streams::IBuffer const& data, Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreviewShowNoteOptions const& options) const;
    void SetFocusToPreviousView() const;
    Windows::Foundation::IAsyncAction SetThumbnailImageForTaskSwitcherAsync(Windows::Graphics::Imaging::SoftwareBitmap const& bitmap) const;
};
template <> struct consume<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview2> { template <typename D> using type = consume_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreview2<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreviewShowNoteOptions
{
    bool ShowWithFocus() const;
    void ShowWithFocus(bool value) const;
};
template <> struct consume<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewShowNoteOptions> { template <typename D> using type = consume_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreviewShowNoteOptions<D>; };

template <typename D>
struct consume_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreviewStatics
{
    Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview GetForCurrentApp() const;
};
template <> struct consume<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewStatics> { template <typename D> using type = consume_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreviewStatics<D>; };

template <> struct abi<Windows::ApplicationModel::Preview::Notes::INotePlacementChangedPreviewEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ViewId(int32_t* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Preview::Notes::INoteVisibilityChangedPreviewEventArgs>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ViewId(int32_t* value) = 0;
    virtual HRESULT __stdcall get_IsVisible(bool* value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_IsScreenLocked(bool* value) = 0;
    virtual HRESULT __stdcall ShowNote(int32_t noteViewId) = 0;
    virtual HRESULT __stdcall ShowNoteRelativeTo(int32_t noteViewId, int32_t anchorNoteViewId) = 0;
    virtual HRESULT __stdcall ShowNoteWithPlacement(int32_t noteViewId, ::IUnknown* data) = 0;
    virtual HRESULT __stdcall HideNote(int32_t noteViewId) = 0;
    virtual HRESULT __stdcall GetNotePlacement(int32_t noteViewId, ::IUnknown** data) = 0;
    virtual HRESULT __stdcall TrySetNoteSize(int32_t noteViewId, abi_t<Windows::Foundation::Size> size, bool* succeeded) = 0;
    virtual HRESULT __stdcall SetFocusToNextView() = 0;
    virtual HRESULT __stdcall SetNotesThumbnailAsync(::IUnknown* thumbnail, ::IUnknown** operation) = 0;
    virtual HRESULT __stdcall add_SystemLockStateChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_SystemLockStateChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_NotePlacementChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_NotePlacementChanged(abi_t<event_token> token) = 0;
    virtual HRESULT __stdcall add_NoteVisibilityChanged(::IUnknown* handler, abi_t<event_token>* token) = 0;
    virtual HRESULT __stdcall remove_NoteVisibilityChanged(abi_t<event_token> token) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ShowNoteRelativeToWithOptions(int32_t noteViewId, int32_t anchorNoteViewId, ::IUnknown* options) = 0;
    virtual HRESULT __stdcall ShowNoteWithPlacementWithOptions(int32_t noteViewId, ::IUnknown* data, ::IUnknown* options) = 0;
    virtual HRESULT __stdcall SetFocusToPreviousView() = 0;
    virtual HRESULT __stdcall SetThumbnailImageForTaskSwitcherAsync(::IUnknown* bitmap, ::IUnknown** action) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewShowNoteOptions>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ShowWithFocus(bool* value) = 0;
    virtual HRESULT __stdcall put_ShowWithFocus(bool value) = 0;
};};

template <> struct abi<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall GetForCurrentApp(::IUnknown** current) = 0;
};};

}
