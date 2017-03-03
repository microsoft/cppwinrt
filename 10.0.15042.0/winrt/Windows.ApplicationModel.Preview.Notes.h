// C++ for the Windows Runtime vv1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

#include "base.h"
WINRT_WARNING_PUSH

#include "internal/Windows.Storage.Streams.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Graphics.Imaging.3.h"
#include "internal/Windows.ApplicationModel.Preview.Notes.3.h"
#include "Windows.ApplicationModel.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::ApplicationModel::Preview::Notes::INotePlacementChangedPreviewEventArgs> : produce_base<D, Windows::ApplicationModel::Preview::Notes::INotePlacementChangedPreviewEventArgs>
{
    HRESULT __stdcall get_ViewId(int32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ViewId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Preview::Notes::INoteVisibilityChangedPreviewEventArgs> : produce_base<D, Windows::ApplicationModel::Preview::Notes::INoteVisibilityChangedPreviewEventArgs>
{
    HRESULT __stdcall get_ViewId(int32_t * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ViewId());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsVisible(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsVisible());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview> : produce_base<D, Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview>
{
    HRESULT __stdcall get_IsScreenLocked(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().IsScreenLocked());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowNote(int32_t noteViewId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowNote(noteViewId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowNoteRelativeTo(int32_t noteViewId, int32_t anchorNoteViewId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowNoteRelativeTo(noteViewId, anchorNoteViewId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowNoteWithPlacement(int32_t noteViewId, impl::abi_arg_in<Windows::Storage::Streams::IBuffer> data) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowNoteWithPlacement(noteViewId, *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&data));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_HideNote(int32_t noteViewId) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HideNote(noteViewId);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetNotePlacement(int32_t noteViewId, impl::abi_arg_out<Windows::Storage::Streams::IBuffer> data) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *data = detach_abi(this->shim().GetNotePlacement(noteViewId));
            return S_OK;
        }
        catch (...)
        {
            *data = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TrySetNoteSize(int32_t noteViewId, impl::abi_arg_in<Windows::Foundation::Size> size, bool * succeeded) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *succeeded = detach_abi(this->shim().TrySetNoteSize(noteViewId, *reinterpret_cast<const Windows::Foundation::Size *>(&size)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetFocusToNextView() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFocusToNextView();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetNotesThumbnailAsync(impl::abi_arg_in<Windows::Storage::Streams::IBuffer> thumbnail, impl::abi_arg_out<Windows::Foundation::IAsyncAction> operation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *operation = detach_abi(this->shim().SetNotesThumbnailAsync(*reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&thumbnail)));
            return S_OK;
        }
        catch (...)
        {
            *operation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_SystemLockStateChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::Foundation::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().SystemLockStateChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::Foundation::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_SystemLockStateChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SystemLockStateChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_NotePlacementChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().NotePlacementChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_NotePlacementChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NotePlacementChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_NoteVisibilityChanged(impl::abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_abi(this->shim().NoteVisibilityChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_NoteVisibilityChanged(event_token token) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().NoteVisibilityChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview2> : produce_base<D, Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview2>
{
    HRESULT __stdcall abi_ShowNoteRelativeToWithOptions(int32_t noteViewId, int32_t anchorNoteViewId, impl::abi_arg_in<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewShowNoteOptions> options) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowNoteRelativeTo(noteViewId, anchorNoteViewId, *reinterpret_cast<const Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreviewShowNoteOptions *>(&options));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ShowNoteWithPlacementWithOptions(int32_t noteViewId, impl::abi_arg_in<Windows::Storage::Streams::IBuffer> data, impl::abi_arg_in<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewShowNoteOptions> options) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowNoteWithPlacement(noteViewId, *reinterpret_cast<const Windows::Storage::Streams::IBuffer *>(&data), *reinterpret_cast<const Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreviewShowNoteOptions *>(&options));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetFocusToPreviousView() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetFocusToPreviousView();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_SetThumbnailImageForTaskSwitcherAsync(impl::abi_arg_in<Windows::Graphics::Imaging::ISoftwareBitmap> bitmap, impl::abi_arg_out<Windows::Foundation::IAsyncAction> action) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *action = detach_abi(this->shim().SetThumbnailImageForTaskSwitcherAsync(*reinterpret_cast<const Windows::Graphics::Imaging::SoftwareBitmap *>(&bitmap)));
            return S_OK;
        }
        catch (...)
        {
            *action = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewShowNoteOptions> : produce_base<D, Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewShowNoteOptions>
{
    HRESULT __stdcall get_ShowWithFocus(bool * value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ShowWithFocus());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ShowWithFocus(bool value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowWithFocus(value);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewStatics> : produce_base<D, Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewStatics>
{
    HRESULT __stdcall abi_GetForCurrentApp(impl::abi_arg_out<Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview> current) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *current = detach_abi(this->shim().GetForCurrentApp());
            return S_OK;
        }
        catch (...)
        {
            *current = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::ApplicationModel::Preview::Notes {

template <typename D> int32_t impl_INotePlacementChangedPreviewEventArgs<D>::ViewId() const
{
    int32_t value {};
    check_hresult(WINRT_SHIM(INotePlacementChangedPreviewEventArgs)->get_ViewId(&value));
    return value;
}

template <typename D> int32_t impl_INoteVisibilityChangedPreviewEventArgs<D>::ViewId() const
{
    int32_t value {};
    check_hresult(WINRT_SHIM(INoteVisibilityChangedPreviewEventArgs)->get_ViewId(&value));
    return value;
}

template <typename D> bool impl_INoteVisibilityChangedPreviewEventArgs<D>::IsVisible() const
{
    bool value {};
    check_hresult(WINRT_SHIM(INoteVisibilityChangedPreviewEventArgs)->get_IsVisible(&value));
    return value;
}

template <typename D> bool impl_INotesWindowManagerPreviewShowNoteOptions<D>::ShowWithFocus() const
{
    bool value {};
    check_hresult(WINRT_SHIM(INotesWindowManagerPreviewShowNoteOptions)->get_ShowWithFocus(&value));
    return value;
}

template <typename D> void impl_INotesWindowManagerPreviewShowNoteOptions<D>::ShowWithFocus(bool value) const
{
    check_hresult(WINRT_SHIM(INotesWindowManagerPreviewShowNoteOptions)->put_ShowWithFocus(value));
}

template <typename D> bool impl_INotesWindowManagerPreview<D>::IsScreenLocked() const
{
    bool value {};
    check_hresult(WINRT_SHIM(INotesWindowManagerPreview)->get_IsScreenLocked(&value));
    return value;
}

template <typename D> void impl_INotesWindowManagerPreview<D>::ShowNote(int32_t noteViewId) const
{
    check_hresult(WINRT_SHIM(INotesWindowManagerPreview)->abi_ShowNote(noteViewId));
}

template <typename D> void impl_INotesWindowManagerPreview<D>::ShowNoteRelativeTo(int32_t noteViewId, int32_t anchorNoteViewId) const
{
    check_hresult(WINRT_SHIM(INotesWindowManagerPreview)->abi_ShowNoteRelativeTo(noteViewId, anchorNoteViewId));
}

template <typename D> void impl_INotesWindowManagerPreview<D>::ShowNoteWithPlacement(int32_t noteViewId, const Windows::Storage::Streams::IBuffer & data) const
{
    check_hresult(WINRT_SHIM(INotesWindowManagerPreview)->abi_ShowNoteWithPlacement(noteViewId, get_abi(data)));
}

template <typename D> void impl_INotesWindowManagerPreview<D>::HideNote(int32_t noteViewId) const
{
    check_hresult(WINRT_SHIM(INotesWindowManagerPreview)->abi_HideNote(noteViewId));
}

template <typename D> Windows::Storage::Streams::IBuffer impl_INotesWindowManagerPreview<D>::GetNotePlacement(int32_t noteViewId) const
{
    Windows::Storage::Streams::IBuffer data;
    check_hresult(WINRT_SHIM(INotesWindowManagerPreview)->abi_GetNotePlacement(noteViewId, put_abi(data)));
    return data;
}

template <typename D> bool impl_INotesWindowManagerPreview<D>::TrySetNoteSize(int32_t noteViewId, const Windows::Foundation::Size & size) const
{
    bool succeeded {};
    check_hresult(WINRT_SHIM(INotesWindowManagerPreview)->abi_TrySetNoteSize(noteViewId, get_abi(size), &succeeded));
    return succeeded;
}

template <typename D> void impl_INotesWindowManagerPreview<D>::SetFocusToNextView() const
{
    check_hresult(WINRT_SHIM(INotesWindowManagerPreview)->abi_SetFocusToNextView());
}

template <typename D> Windows::Foundation::IAsyncAction impl_INotesWindowManagerPreview<D>::SetNotesThumbnailAsync(const Windows::Storage::Streams::IBuffer & thumbnail) const
{
    Windows::Foundation::IAsyncAction operation;
    check_hresult(WINRT_SHIM(INotesWindowManagerPreview)->abi_SetNotesThumbnailAsync(get_abi(thumbnail), put_abi(operation)));
    return operation;
}

template <typename D> event_token impl_INotesWindowManagerPreview<D>::SystemLockStateChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::Foundation::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(INotesWindowManagerPreview)->add_SystemLockStateChanged(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<INotesWindowManagerPreview> impl_INotesWindowManagerPreview<D>::SystemLockStateChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::Foundation::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, INotesWindowManagerPreview>(this, &ABI::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview::remove_SystemLockStateChanged, SystemLockStateChanged(handler));
}

template <typename D> void impl_INotesWindowManagerPreview<D>::SystemLockStateChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(INotesWindowManagerPreview)->remove_SystemLockStateChanged(token));
}

template <typename D> event_token impl_INotesWindowManagerPreview<D>::NotePlacementChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(INotesWindowManagerPreview)->add_NotePlacementChanged(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<INotesWindowManagerPreview> impl_INotesWindowManagerPreview<D>::NotePlacementChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs> & handler) const
{
    return impl::make_event_revoker<D, INotesWindowManagerPreview>(this, &ABI::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview::remove_NotePlacementChanged, NotePlacementChanged(handler));
}

template <typename D> void impl_INotesWindowManagerPreview<D>::NotePlacementChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(INotesWindowManagerPreview)->remove_NotePlacementChanged(token));
}

template <typename D> event_token impl_INotesWindowManagerPreview<D>::NoteVisibilityChanged(const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs> & handler) const
{
    event_token token {};
    check_hresult(WINRT_SHIM(INotesWindowManagerPreview)->add_NoteVisibilityChanged(get_abi(handler), &token));
    return token;
}

template <typename D> event_revoker<INotesWindowManagerPreview> impl_INotesWindowManagerPreview<D>::NoteVisibilityChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview, Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs> & handler) const
{
    return impl::make_event_revoker<D, INotesWindowManagerPreview>(this, &ABI::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview::remove_NoteVisibilityChanged, NoteVisibilityChanged(handler));
}

template <typename D> void impl_INotesWindowManagerPreview<D>::NoteVisibilityChanged(event_token token) const
{
    check_hresult(WINRT_SHIM(INotesWindowManagerPreview)->remove_NoteVisibilityChanged(token));
}

template <typename D> void impl_INotesWindowManagerPreview2<D>::ShowNoteRelativeTo(int32_t noteViewId, int32_t anchorNoteViewId, const Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreviewShowNoteOptions & options) const
{
    check_hresult(WINRT_SHIM(INotesWindowManagerPreview2)->abi_ShowNoteRelativeToWithOptions(noteViewId, anchorNoteViewId, get_abi(options)));
}

template <typename D> void impl_INotesWindowManagerPreview2<D>::ShowNoteWithPlacement(int32_t noteViewId, const Windows::Storage::Streams::IBuffer & data, const Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreviewShowNoteOptions & options) const
{
    check_hresult(WINRT_SHIM(INotesWindowManagerPreview2)->abi_ShowNoteWithPlacementWithOptions(noteViewId, get_abi(data), get_abi(options)));
}

template <typename D> void impl_INotesWindowManagerPreview2<D>::SetFocusToPreviousView() const
{
    check_hresult(WINRT_SHIM(INotesWindowManagerPreview2)->abi_SetFocusToPreviousView());
}

template <typename D> Windows::Foundation::IAsyncAction impl_INotesWindowManagerPreview2<D>::SetThumbnailImageForTaskSwitcherAsync(const Windows::Graphics::Imaging::SoftwareBitmap & bitmap) const
{
    Windows::Foundation::IAsyncAction action;
    check_hresult(WINRT_SHIM(INotesWindowManagerPreview2)->abi_SetThumbnailImageForTaskSwitcherAsync(get_abi(bitmap), put_abi(action)));
    return action;
}

template <typename D> Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview impl_INotesWindowManagerPreviewStatics<D>::GetForCurrentApp() const
{
    Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview current { nullptr };
    check_hresult(WINRT_SHIM(INotesWindowManagerPreviewStatics)->abi_GetForCurrentApp(put_abi(current)));
    return current;
}

inline Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview NotesWindowManagerPreview::GetForCurrentApp()
{
    return get_activation_factory<NotesWindowManagerPreview, INotesWindowManagerPreviewStatics>().GetForCurrentApp();
}

inline NotesWindowManagerPreviewShowNoteOptions::NotesWindowManagerPreviewShowNoteOptions() :
    NotesWindowManagerPreviewShowNoteOptions(activate_instance<NotesWindowManagerPreviewShowNoteOptions>())
{}

}

}

template<>
struct std::hash<winrt::Windows::ApplicationModel::Preview::Notes::INotePlacementChangedPreviewEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Preview::Notes::INotePlacementChangedPreviewEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Preview::Notes::INoteVisibilityChangedPreviewEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Preview::Notes::INoteVisibilityChangedPreviewEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview2>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview2 & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewShowNoteOptions>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewShowNoteOptions & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewStatics>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewStatics & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

template<>
struct std::hash<winrt::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreviewShowNoteOptions>
{
    size_t operator()(const winrt::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreviewShowNoteOptions & value) const noexcept
    {
        return winrt::impl::hash_unknown(value);
    }
};

WINRT_WARNING_POP
