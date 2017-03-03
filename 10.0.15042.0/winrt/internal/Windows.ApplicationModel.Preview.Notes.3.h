// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "Windows.ApplicationModel.Preview.Notes.2.h"

WINRT_EXPORT namespace winrt {

namespace Windows::ApplicationModel::Preview::Notes {

struct WINRT_EBO NotePlacementChangedPreviewEventArgs :
    Windows::ApplicationModel::Preview::Notes::INotePlacementChangedPreviewEventArgs
{
    NotePlacementChangedPreviewEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO NoteVisibilityChangedPreviewEventArgs :
    Windows::ApplicationModel::Preview::Notes::INoteVisibilityChangedPreviewEventArgs
{
    NoteVisibilityChangedPreviewEventArgs(std::nullptr_t) noexcept {}
};

struct WINRT_EBO NotesWindowManagerPreview :
    Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview,
    impl::require<NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview2>
{
    NotesWindowManagerPreview(std::nullptr_t) noexcept {}
    using impl_INotesWindowManagerPreview::ShowNoteRelativeTo;
    using impl_INotesWindowManagerPreview::ShowNoteWithPlacement;
    using impl_INotesWindowManagerPreview2::ShowNoteRelativeTo;
    using impl_INotesWindowManagerPreview2::ShowNoteWithPlacement;
    static Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview GetForCurrentApp();
};

struct WINRT_EBO NotesWindowManagerPreviewShowNoteOptions :
    Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewShowNoteOptions
{
    NotesWindowManagerPreviewShowNoteOptions(std::nullptr_t) noexcept {}
    NotesWindowManagerPreviewShowNoteOptions();
};

}

}
