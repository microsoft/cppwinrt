// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.ApplicationModel.Preview.Notes.0.h"
#include "Windows.Foundation.0.h"
#include "Windows.Storage.Streams.0.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::ApplicationModel::Preview::Notes {

struct __declspec(uuid("491d57b7-f780-4e7f-a939-9a4caf965214")) __declspec(novtable) INotePlacementChangedPreviewEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ViewId(int32_t * value) = 0;
};

struct __declspec(uuid("0e34649e-3815-4ff6-83b3-a14d17120e24")) __declspec(novtable) INoteVisibilityChangedPreviewEventArgs : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ViewId(int32_t * value) = 0;
    virtual HRESULT __stdcall get_IsVisible(bool * value) = 0;
};

struct __declspec(uuid("dc2ac23e-4850-4f13-9cc7-ff487efdfcde")) __declspec(novtable) INotesWindowManagerPreview : Windows::IInspectable
{
    virtual HRESULT __stdcall get_IsScreenLocked(bool * value) = 0;
    virtual HRESULT __stdcall abi_ShowNote(int32_t noteViewId) = 0;
    virtual HRESULT __stdcall abi_ShowNoteRelativeTo(int32_t noteViewId, int32_t anchorNoteViewId) = 0;
    virtual HRESULT __stdcall abi_ShowNoteWithPlacement(int32_t noteViewId, Windows::Storage::Streams::IBuffer * data) = 0;
    virtual HRESULT __stdcall abi_HideNote(int32_t noteViewId) = 0;
    virtual HRESULT __stdcall abi_GetNotePlacement(int32_t noteViewId, Windows::Storage::Streams::IBuffer ** data) = 0;
    virtual HRESULT __stdcall abi_TrySetNoteSize(int32_t noteViewId, Windows::Foundation::Size size, bool * succeeded) = 0;
    virtual HRESULT __stdcall abi_SetFocusToNextView() = 0;
    virtual HRESULT __stdcall abi_SetNotesThumbnailAsync(Windows::Storage::Streams::IBuffer * thumbnail, Windows::Foundation::IAsyncAction ** operation) = 0;
    virtual HRESULT __stdcall add_SystemLockStateChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::IInspectable> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_SystemLockStateChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_NotePlacementChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_NotePlacementChanged(event_token token) = 0;
    virtual HRESULT __stdcall add_NoteVisibilityChanged(Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs> * handler, event_token * token) = 0;
    virtual HRESULT __stdcall remove_NoteVisibilityChanged(event_token token) = 0;
};

struct __declspec(uuid("6668cc88-0a8e-4127-a38e-995445868a78")) __declspec(novtable) INotesWindowManagerPreviewStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_GetForCurrentApp(Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview ** current) = 0;
};

}

namespace ABI {

template <> struct traits<Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs> { using default_interface = Windows::ApplicationModel::Preview::Notes::INotePlacementChangedPreviewEventArgs; };
template <> struct traits<Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs> { using default_interface = Windows::ApplicationModel::Preview::Notes::INoteVisibilityChangedPreviewEventArgs; };
template <> struct traits<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview> { using default_interface = Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview; };

}

namespace Windows::ApplicationModel::Preview::Notes {

template <typename T> struct impl_INotePlacementChangedPreviewEventArgs;
template <typename T> struct impl_INoteVisibilityChangedPreviewEventArgs;
template <typename T> struct impl_INotesWindowManagerPreview;
template <typename T> struct impl_INotesWindowManagerPreviewStatics;

}

namespace impl {

template <> struct traits<Windows::ApplicationModel::Preview::Notes::INotePlacementChangedPreviewEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::Preview::Notes::INotePlacementChangedPreviewEventArgs;
    template <typename D> using consume = Windows::ApplicationModel::Preview::Notes::impl_INotePlacementChangedPreviewEventArgs<D>;
};

template <> struct traits<Windows::ApplicationModel::Preview::Notes::INoteVisibilityChangedPreviewEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::Preview::Notes::INoteVisibilityChangedPreviewEventArgs;
    template <typename D> using consume = Windows::ApplicationModel::Preview::Notes::impl_INoteVisibilityChangedPreviewEventArgs<D>;
};

template <> struct traits<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview>
{
    using abi = ABI::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview;
    template <typename D> using consume = Windows::ApplicationModel::Preview::Notes::impl_INotesWindowManagerPreview<D>;
};

template <> struct traits<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewStatics>
{
    using abi = ABI::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewStatics;
    template <typename D> using consume = Windows::ApplicationModel::Preview::Notes::impl_INotesWindowManagerPreviewStatics<D>;
};

template <> struct traits<Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Preview.Notes.NotePlacementChangedPreviewEventArgs"; }
};

template <> struct traits<Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs>
{
    using abi = ABI::Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Preview.Notes.NoteVisibilityChangedPreviewEventArgs"; }
};

template <> struct traits<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview>
{
    using abi = ABI::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview;
    static constexpr const wchar_t * name() noexcept { return L"Windows.ApplicationModel.Preview.Notes.NotesWindowManagerPreview"; }
};

}

}
