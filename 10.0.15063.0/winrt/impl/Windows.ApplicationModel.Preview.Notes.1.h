// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Windows.Graphics.Imaging.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
#include "winrt/impl/Windows.ApplicationModel.Preview.Notes.0.h"

WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Preview::Notes {

struct WINRT_EBO INotePlacementChangedPreviewEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<INotePlacementChangedPreviewEventArgs>
{
    INotePlacementChangedPreviewEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INoteVisibilityChangedPreviewEventArgs :
    Windows::Foundation::IInspectable,
    impl::consume_t<INoteVisibilityChangedPreviewEventArgs>
{
    INoteVisibilityChangedPreviewEventArgs(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INotesWindowManagerPreview :
    Windows::Foundation::IInspectable,
    impl::consume_t<INotesWindowManagerPreview>
{
    INotesWindowManagerPreview(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INotesWindowManagerPreview2 :
    Windows::Foundation::IInspectable,
    impl::consume_t<INotesWindowManagerPreview2>
{
    INotesWindowManagerPreview2(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INotesWindowManagerPreviewShowNoteOptions :
    Windows::Foundation::IInspectable,
    impl::consume_t<INotesWindowManagerPreviewShowNoteOptions>
{
    INotesWindowManagerPreviewShowNoteOptions(std::nullptr_t = nullptr) noexcept {}
};

struct WINRT_EBO INotesWindowManagerPreviewStatics :
    Windows::Foundation::IInspectable,
    impl::consume_t<INotesWindowManagerPreviewStatics>
{
    INotesWindowManagerPreviewStatics(std::nullptr_t = nullptr) noexcept {}
};

}
