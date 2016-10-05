// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "internal/Windows.Storage.3.h"
#include "internal/Windows.Foundation.Collections.3.h"
#include "internal/Windows.Foundation.3.h"
#include "internal/Windows.Storage.Pickers.Provider.3.h"
#include "Windows.Storage.Pickers.h"

WINRT_EXPORT namespace winrt {

namespace impl {

template <typename D>
struct produce<D, Windows::Storage::Pickers::Provider::IFileOpenPickerUI> : produce_base<D, Windows::Storage::Pickers::Provider::IFileOpenPickerUI>
{
    HRESULT __stdcall abi_AddFile(abi_arg_in<hstring> id, abi_arg_in<Windows::Storage::IStorageFile> file, Windows::Storage::Pickers::Provider::AddFileResult * addResult) noexcept override
    {
        try
        {
            *addResult = detach(this->shim().AddFile(*reinterpret_cast<const hstring *>(&id), *reinterpret_cast<const Windows::Storage::IStorageFile *>(&file)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_RemoveFile(abi_arg_in<hstring> id) noexcept override
    {
        try
        {
            this->shim().RemoveFile(*reinterpret_cast<const hstring *>(&id));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_ContainsFile(abi_arg_in<hstring> id, bool * isContained) noexcept override
    {
        try
        {
            *isContained = detach(this->shim().ContainsFile(*reinterpret_cast<const hstring *>(&id)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_CanAddFile(abi_arg_in<Windows::Storage::IStorageFile> file, bool * canAdd) noexcept override
    {
        try
        {
            *canAdd = detach(this->shim().CanAddFile(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&file)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllowedFileTypes(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AllowedFileTypes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SelectionMode(Windows::Storage::Pickers::Provider::FileSelectionMode * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SelectionMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SettingsIdentifier(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SettingsIdentifier());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Title(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Title(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Title(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_FileRemoved(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::FileRemovedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().FileRemoved(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::FileRemovedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_FileRemoved(event_token token) noexcept override
    {
        try
        {
            this->shim().FileRemoved(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_Closing(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::PickerClosingEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().Closing(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::PickerClosingEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_Closing(event_token token) noexcept override
    {
        try
        {
            this->shim().Closing(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::Provider::IFileRemovedEventArgs> : produce_base<D, Windows::Storage::Pickers::Provider::IFileRemovedEventArgs>
{
    HRESULT __stdcall get_Id(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Id());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::Provider::IFileSavePickerUI> : produce_base<D, Windows::Storage::Pickers::Provider::IFileSavePickerUI>
{
    HRESULT __stdcall get_Title(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Title());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_Title(abi_arg_in<hstring> value) noexcept override
    {
        try
        {
            this->shim().Title(*reinterpret_cast<const hstring *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_AllowedFileTypes(abi_arg_out<Windows::Foundation::Collections::IVectorView<hstring>> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().AllowedFileTypes());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SettingsIdentifier(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().SettingsIdentifier());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FileName(abi_arg_out<hstring> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().FileName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_TrySetFileName(abi_arg_in<hstring> value, Windows::Storage::Pickers::Provider::SetFileNameResult * result) noexcept override
    {
        try
        {
            *result = detach(this->shim().TrySetFileName(*reinterpret_cast<const hstring *>(&value)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_FileNameChanged(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::IInspectable>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().FileNameChanged(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::IInspectable> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_FileNameChanged(event_token token) noexcept override
    {
        try
        {
            this->shim().FileNameChanged(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall add_TargetFileRequested(abi_arg_in<Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::Storage::Pickers::Provider::TargetFileRequestedEventArgs>> handler, event_token * token) noexcept override
    {
        try
        {
            *token = detach(this->shim().TargetFileRequested(*reinterpret_cast<const Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::Storage::Pickers::Provider::TargetFileRequestedEventArgs> *>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall remove_TargetFileRequested(event_token token) noexcept override
    {
        try
        {
            this->shim().TargetFileRequested(token);
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::Provider::IPickerClosingDeferral> : produce_base<D, Windows::Storage::Pickers::Provider::IPickerClosingDeferral>
{
    HRESULT __stdcall abi_Complete() noexcept override
    {
        try
        {
            this->shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::Provider::IPickerClosingEventArgs> : produce_base<D, Windows::Storage::Pickers::Provider::IPickerClosingEventArgs>
{
    HRESULT __stdcall get_ClosingOperation(abi_arg_out<Windows::Storage::Pickers::Provider::IPickerClosingOperation> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().ClosingOperation());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_IsCanceled(bool * value) noexcept override
    {
        try
        {
            *value = detach(this->shim().IsCanceled());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::Provider::IPickerClosingOperation> : produce_base<D, Windows::Storage::Pickers::Provider::IPickerClosingOperation>
{
    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Storage::Pickers::Provider::IPickerClosingDeferral> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_Deadline(abi_arg_out<Windows::Foundation::DateTime> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Deadline());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::Provider::ITargetFileRequest> : produce_base<D, Windows::Storage::Pickers::Provider::ITargetFileRequest>
{
    HRESULT __stdcall get_TargetFile(abi_arg_out<Windows::Storage::IStorageFile> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().TargetFile());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_TargetFile(abi_arg_in<Windows::Storage::IStorageFile> value) noexcept override
    {
        try
        {
            this->shim().TargetFile(*reinterpret_cast<const Windows::Storage::IStorageFile *>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall abi_GetDeferral(abi_arg_out<Windows::Storage::Pickers::Provider::ITargetFileRequestDeferral> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().GetDeferral());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::Provider::ITargetFileRequestDeferral> : produce_base<D, Windows::Storage::Pickers::Provider::ITargetFileRequestDeferral>
{
    HRESULT __stdcall abi_Complete() noexcept override
    {
        try
        {
            this->shim().Complete();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::Provider::ITargetFileRequestedEventArgs> : produce_base<D, Windows::Storage::Pickers::Provider::ITargetFileRequestedEventArgs>
{
    HRESULT __stdcall get_Request(abi_arg_out<Windows::Storage::Pickers::Provider::ITargetFileRequest> value) noexcept override
    {
        try
        {
            *value = detach(this->shim().Request());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }
};

}

namespace Windows::Storage::Pickers::Provider {

template <typename D> hstring impl_IFileRemovedEventArgs<D>::Id() const
{
    hstring value;
    check_hresult(static_cast<const IFileRemovedEventArgs &>(static_cast<const D &>(*this))->get_Id(put(value)));
    return value;
}

template <typename D> Windows::Storage::Pickers::Provider::AddFileResult impl_IFileOpenPickerUI<D>::AddFile(hstring_ref id, const Windows::Storage::IStorageFile & file) const
{
    Windows::Storage::Pickers::Provider::AddFileResult addResult {};
    check_hresult(static_cast<const IFileOpenPickerUI &>(static_cast<const D &>(*this))->abi_AddFile(get(id), get(file), &addResult));
    return addResult;
}

template <typename D> void impl_IFileOpenPickerUI<D>::RemoveFile(hstring_ref id) const
{
    check_hresult(static_cast<const IFileOpenPickerUI &>(static_cast<const D &>(*this))->abi_RemoveFile(get(id)));
}

template <typename D> bool impl_IFileOpenPickerUI<D>::ContainsFile(hstring_ref id) const
{
    bool isContained {};
    check_hresult(static_cast<const IFileOpenPickerUI &>(static_cast<const D &>(*this))->abi_ContainsFile(get(id), &isContained));
    return isContained;
}

template <typename D> bool impl_IFileOpenPickerUI<D>::CanAddFile(const Windows::Storage::IStorageFile & file) const
{
    bool canAdd {};
    check_hresult(static_cast<const IFileOpenPickerUI &>(static_cast<const D &>(*this))->abi_CanAddFile(get(file), &canAdd));
    return canAdd;
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IFileOpenPickerUI<D>::AllowedFileTypes() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(static_cast<const IFileOpenPickerUI &>(static_cast<const D &>(*this))->get_AllowedFileTypes(put(value)));
    return value;
}

template <typename D> Windows::Storage::Pickers::Provider::FileSelectionMode impl_IFileOpenPickerUI<D>::SelectionMode() const
{
    Windows::Storage::Pickers::Provider::FileSelectionMode value {};
    check_hresult(static_cast<const IFileOpenPickerUI &>(static_cast<const D &>(*this))->get_SelectionMode(&value));
    return value;
}

template <typename D> hstring impl_IFileOpenPickerUI<D>::SettingsIdentifier() const
{
    hstring value;
    check_hresult(static_cast<const IFileOpenPickerUI &>(static_cast<const D &>(*this))->get_SettingsIdentifier(put(value)));
    return value;
}

template <typename D> hstring impl_IFileOpenPickerUI<D>::Title() const
{
    hstring value;
    check_hresult(static_cast<const IFileOpenPickerUI &>(static_cast<const D &>(*this))->get_Title(put(value)));
    return value;
}

template <typename D> void impl_IFileOpenPickerUI<D>::Title(hstring_ref value) const
{
    check_hresult(static_cast<const IFileOpenPickerUI &>(static_cast<const D &>(*this))->put_Title(get(value)));
}

template <typename D> event_token impl_IFileOpenPickerUI<D>::FileRemoved(const Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::FileRemovedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IFileOpenPickerUI &>(static_cast<const D &>(*this))->add_FileRemoved(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IFileOpenPickerUI> impl_IFileOpenPickerUI<D>::FileRemoved(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::FileRemovedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IFileOpenPickerUI>(this, &ABI::Windows::Storage::Pickers::Provider::IFileOpenPickerUI::remove_FileRemoved, FileRemoved(handler));
}

template <typename D> void impl_IFileOpenPickerUI<D>::FileRemoved(event_token token) const
{
    check_hresult(static_cast<const IFileOpenPickerUI &>(static_cast<const D &>(*this))->remove_FileRemoved(token));
}

template <typename D> event_token impl_IFileOpenPickerUI<D>::Closing(const Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::PickerClosingEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IFileOpenPickerUI &>(static_cast<const D &>(*this))->add_Closing(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IFileOpenPickerUI> impl_IFileOpenPickerUI<D>::Closing(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileOpenPickerUI, Windows::Storage::Pickers::Provider::PickerClosingEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IFileOpenPickerUI>(this, &ABI::Windows::Storage::Pickers::Provider::IFileOpenPickerUI::remove_Closing, Closing(handler));
}

template <typename D> void impl_IFileOpenPickerUI<D>::Closing(event_token token) const
{
    check_hresult(static_cast<const IFileOpenPickerUI &>(static_cast<const D &>(*this))->remove_Closing(token));
}

template <typename D> Windows::Storage::Pickers::Provider::PickerClosingOperation impl_IPickerClosingEventArgs<D>::ClosingOperation() const
{
    Windows::Storage::Pickers::Provider::PickerClosingOperation value { nullptr };
    check_hresult(static_cast<const IPickerClosingEventArgs &>(static_cast<const D &>(*this))->get_ClosingOperation(put(value)));
    return value;
}

template <typename D> bool impl_IPickerClosingEventArgs<D>::IsCanceled() const
{
    bool value {};
    check_hresult(static_cast<const IPickerClosingEventArgs &>(static_cast<const D &>(*this))->get_IsCanceled(&value));
    return value;
}

template <typename D> Windows::Storage::Pickers::Provider::PickerClosingDeferral impl_IPickerClosingOperation<D>::GetDeferral() const
{
    Windows::Storage::Pickers::Provider::PickerClosingDeferral value { nullptr };
    check_hresult(static_cast<const IPickerClosingOperation &>(static_cast<const D &>(*this))->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> Windows::Foundation::DateTime impl_IPickerClosingOperation<D>::Deadline() const
{
    Windows::Foundation::DateTime value {};
    check_hresult(static_cast<const IPickerClosingOperation &>(static_cast<const D &>(*this))->get_Deadline(put(value)));
    return value;
}

template <typename D> void impl_IPickerClosingDeferral<D>::Complete() const
{
    check_hresult(static_cast<const IPickerClosingDeferral &>(static_cast<const D &>(*this))->abi_Complete());
}

template <typename D> hstring impl_IFileSavePickerUI<D>::Title() const
{
    hstring value;
    check_hresult(static_cast<const IFileSavePickerUI &>(static_cast<const D &>(*this))->get_Title(put(value)));
    return value;
}

template <typename D> void impl_IFileSavePickerUI<D>::Title(hstring_ref value) const
{
    check_hresult(static_cast<const IFileSavePickerUI &>(static_cast<const D &>(*this))->put_Title(get(value)));
}

template <typename D> Windows::Foundation::Collections::IVectorView<hstring> impl_IFileSavePickerUI<D>::AllowedFileTypes() const
{
    Windows::Foundation::Collections::IVectorView<hstring> value;
    check_hresult(static_cast<const IFileSavePickerUI &>(static_cast<const D &>(*this))->get_AllowedFileTypes(put(value)));
    return value;
}

template <typename D> hstring impl_IFileSavePickerUI<D>::SettingsIdentifier() const
{
    hstring value;
    check_hresult(static_cast<const IFileSavePickerUI &>(static_cast<const D &>(*this))->get_SettingsIdentifier(put(value)));
    return value;
}

template <typename D> hstring impl_IFileSavePickerUI<D>::FileName() const
{
    hstring value;
    check_hresult(static_cast<const IFileSavePickerUI &>(static_cast<const D &>(*this))->get_FileName(put(value)));
    return value;
}

template <typename D> Windows::Storage::Pickers::Provider::SetFileNameResult impl_IFileSavePickerUI<D>::TrySetFileName(hstring_ref value) const
{
    Windows::Storage::Pickers::Provider::SetFileNameResult result {};
    check_hresult(static_cast<const IFileSavePickerUI &>(static_cast<const D &>(*this))->abi_TrySetFileName(get(value), &result));
    return result;
}

template <typename D> event_token impl_IFileSavePickerUI<D>::FileNameChanged(const Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::IInspectable> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IFileSavePickerUI &>(static_cast<const D &>(*this))->add_FileNameChanged(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IFileSavePickerUI> impl_IFileSavePickerUI<D>::FileNameChanged(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::IInspectable> & handler) const
{
    return impl::make_event_revoker<D, IFileSavePickerUI>(this, &ABI::Windows::Storage::Pickers::Provider::IFileSavePickerUI::remove_FileNameChanged, FileNameChanged(handler));
}

template <typename D> void impl_IFileSavePickerUI<D>::FileNameChanged(event_token token) const
{
    check_hresult(static_cast<const IFileSavePickerUI &>(static_cast<const D &>(*this))->remove_FileNameChanged(token));
}

template <typename D> event_token impl_IFileSavePickerUI<D>::TargetFileRequested(const Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::Storage::Pickers::Provider::TargetFileRequestedEventArgs> & handler) const
{
    event_token token {};
    check_hresult(static_cast<const IFileSavePickerUI &>(static_cast<const D &>(*this))->add_TargetFileRequested(get(handler), &token));
    return token;
}

template <typename D> event_revoker<IFileSavePickerUI> impl_IFileSavePickerUI<D>::TargetFileRequested(auto_revoke_t, const Windows::Foundation::TypedEventHandler<Windows::Storage::Pickers::Provider::FileSavePickerUI, Windows::Storage::Pickers::Provider::TargetFileRequestedEventArgs> & handler) const
{
    return impl::make_event_revoker<D, IFileSavePickerUI>(this, &ABI::Windows::Storage::Pickers::Provider::IFileSavePickerUI::remove_TargetFileRequested, TargetFileRequested(handler));
}

template <typename D> void impl_IFileSavePickerUI<D>::TargetFileRequested(event_token token) const
{
    check_hresult(static_cast<const IFileSavePickerUI &>(static_cast<const D &>(*this))->remove_TargetFileRequested(token));
}

template <typename D> Windows::Storage::Pickers::Provider::TargetFileRequest impl_ITargetFileRequestedEventArgs<D>::Request() const
{
    Windows::Storage::Pickers::Provider::TargetFileRequest value { nullptr };
    check_hresult(static_cast<const ITargetFileRequestedEventArgs &>(static_cast<const D &>(*this))->get_Request(put(value)));
    return value;
}

template <typename D> Windows::Storage::IStorageFile impl_ITargetFileRequest<D>::TargetFile() const
{
    Windows::Storage::IStorageFile value;
    check_hresult(static_cast<const ITargetFileRequest &>(static_cast<const D &>(*this))->get_TargetFile(put(value)));
    return value;
}

template <typename D> void impl_ITargetFileRequest<D>::TargetFile(const Windows::Storage::IStorageFile & value) const
{
    check_hresult(static_cast<const ITargetFileRequest &>(static_cast<const D &>(*this))->put_TargetFile(get(value)));
}

template <typename D> Windows::Storage::Pickers::Provider::TargetFileRequestDeferral impl_ITargetFileRequest<D>::GetDeferral() const
{
    Windows::Storage::Pickers::Provider::TargetFileRequestDeferral value { nullptr };
    check_hresult(static_cast<const ITargetFileRequest &>(static_cast<const D &>(*this))->abi_GetDeferral(put(value)));
    return value;
}

template <typename D> void impl_ITargetFileRequestDeferral<D>::Complete() const
{
    check_hresult(static_cast<const ITargetFileRequestDeferral &>(static_cast<const D &>(*this))->abi_Complete());
}

}

}
