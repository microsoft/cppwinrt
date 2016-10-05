// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.Preview.Notes.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Foundation {

#ifndef WINRT_GENERIC_6f2755fb_6c33_543c_9ab4_de486bc7bfe2
#define WINRT_GENERIC_6f2755fb_6c33_543c_9ab4_de486bc7bfe2
template <> struct __declspec(uuid("6f2755fb-6c33-543c-9ab4-de486bc7bfe2")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::IInspectable> : impl_TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::IInspectable> {};
#endif

#ifndef WINRT_GENERIC_a28af2c7_4012_5999_a322_5236b30d995f
#define WINRT_GENERIC_a28af2c7_4012_5999_a322_5236b30d995f
template <> struct __declspec(uuid("a28af2c7-4012-5999-a322-5236b30d995f")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs> {};
#endif

#ifndef WINRT_GENERIC_16d825c8_5271_51c8_a00f_0cfb1b029ab6
#define WINRT_GENERIC_16d825c8_5271_51c8_a00f_0cfb1b029ab6
template <> struct __declspec(uuid("16d825c8-5271-51c8-a00f-0cfb1b029ab6")) __declspec(novtable) TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs> : impl_TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs> {};
#endif


}

namespace Windows::ApplicationModel::Preview::Notes {

template <typename D>
struct WINRT_EBO impl_INotePlacementChangedPreviewEventArgs
{
    int32_t ViewId() const;
};

template <typename D>
struct WINRT_EBO impl_INoteVisibilityChangedPreviewEventArgs
{
    int32_t ViewId() const;
    bool IsVisible() const;
};

template <typename D>
struct WINRT_EBO impl_INotesWindowManagerPreview
{
    bool IsScreenLocked() const;
    void ShowNote(int32_t noteViewId) const;
    void ShowNoteRelativeTo(int32_t noteViewId, int32_t anchorNoteViewId) const;
    void ShowNoteWithPlacement(int32_t noteViewId, const Windows::Storage::Streams::IBuffer & data) const;
    void HideNote(int32_t noteViewId) const;
    Windows::Storage::Streams::IBuffer GetNotePlacement(int32_t noteViewId) const;
    bool TrySetNoteSize(int32_t noteViewId, const Windows::Foundation::Size & size) const;
    void SetFocusToNextView() const;
    Windows::Foundation::IAsyncAction SetNotesThumbnailAsync(const Windows::Storage::Streams::IBuffer & thumbnail) const;
    event_token SystemLockStateChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::IInspectable> & handler) const;
    using SystemLockStateChanged_revoker = event_revoker<INotesWindowManagerPreview>;
    SystemLockStateChanged_revoker SystemLockStateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::IInspectable> & handler) const;
    void SystemLockStateChanged(event_token token) const;
    event_token NotePlacementChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs> & handler) const;
    using NotePlacementChanged_revoker = event_revoker<INotesWindowManagerPreview>;
    NotePlacementChanged_revoker NotePlacementChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs> & handler) const;
    void NotePlacementChanged(event_token token) const;
    event_token NoteVisibilityChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs> & handler) const;
    using NoteVisibilityChanged_revoker = event_revoker<INotesWindowManagerPreview>;
    NoteVisibilityChanged_revoker NoteVisibilityChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs> & handler) const;
    void NoteVisibilityChanged(event_token token) const;
};

template <typename D>
struct WINRT_EBO impl_INotesWindowManagerPreviewStatics
{
    Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview GetForCurrentApp() const;
};

struct INotePlacementChangedPreviewEventArgs :
    Windows::IInspectable,
    impl::consume<INotePlacementChangedPreviewEventArgs>
{
    INotePlacementChangedPreviewEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<INotePlacementChangedPreviewEventArgs>(m_ptr); }
};

struct INoteVisibilityChangedPreviewEventArgs :
    Windows::IInspectable,
    impl::consume<INoteVisibilityChangedPreviewEventArgs>
{
    INoteVisibilityChangedPreviewEventArgs(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<INoteVisibilityChangedPreviewEventArgs>(m_ptr); }
};

struct INotesWindowManagerPreview :
    Windows::IInspectable,
    impl::consume<INotesWindowManagerPreview>
{
    INotesWindowManagerPreview(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<INotesWindowManagerPreview>(m_ptr); }
};

struct INotesWindowManagerPreviewStatics :
    Windows::IInspectable,
    impl::consume<INotesWindowManagerPreviewStatics>
{
    INotesWindowManagerPreviewStatics(std::nullptr_t = nullptr) noexcept {}
    auto operator->() const noexcept { return ptr<INotesWindowManagerPreviewStatics>(m_ptr); }
};

}

}
