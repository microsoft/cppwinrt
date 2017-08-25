// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/base.h"
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/complex_structs.h"

WINRT_WARNING_PUSH
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Pickers.2.h"
#include "winrt/Windows.Storage.h"

namespace winrt::impl {

template <typename D> Windows::Storage::Pickers::PickerViewMode consume_Windows_Storage_Pickers_IFileOpenPicker<D>::ViewMode() const
{
    Windows::Storage::Pickers::PickerViewMode value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileOpenPicker)->get_ViewMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFileOpenPicker<D>::ViewMode(Windows::Storage::Pickers::PickerViewMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileOpenPicker)->put_ViewMode(get_abi(value)));
}

template <typename D> hstring consume_Windows_Storage_Pickers_IFileOpenPicker<D>::SettingsIdentifier() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileOpenPicker)->get_SettingsIdentifier(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFileOpenPicker<D>::SettingsIdentifier(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileOpenPicker)->put_SettingsIdentifier(get_abi(value)));
}

template <typename D> Windows::Storage::Pickers::PickerLocationId consume_Windows_Storage_Pickers_IFileOpenPicker<D>::SuggestedStartLocation() const
{
    Windows::Storage::Pickers::PickerLocationId value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileOpenPicker)->get_SuggestedStartLocation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFileOpenPicker<D>::SuggestedStartLocation(Windows::Storage::Pickers::PickerLocationId const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileOpenPicker)->put_SuggestedStartLocation(get_abi(value)));
}

template <typename D> hstring consume_Windows_Storage_Pickers_IFileOpenPicker<D>::CommitButtonText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileOpenPicker)->get_CommitButtonText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFileOpenPicker<D>::CommitButtonText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileOpenPicker)->put_CommitButtonText(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Storage_Pickers_IFileOpenPicker<D>::FileTypeFilter() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileOpenPicker)->get_FileTypeFilter(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Storage_Pickers_IFileOpenPicker<D>::PickSingleFileAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> pickSingleFileOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileOpenPicker)->PickSingleFileAsync(put_abi(pickSingleFileOperation)));
    return pickSingleFileOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> consume_Windows_Storage_Pickers_IFileOpenPicker<D>::PickMultipleFilesAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> pickMultipleFilesOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileOpenPicker)->PickMultipleFilesAsync(put_abi(pickMultipleFilesOperation)));
    return pickMultipleFilesOperation;
}

template <typename D> Windows::Foundation::Collections::ValueSet consume_Windows_Storage_Pickers_IFileOpenPicker2<D>::ContinuationData() const
{
    Windows::Foundation::Collections::ValueSet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileOpenPicker2)->get_ContinuationData(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFileOpenPicker2<D>::PickSingleFileAndContinue() const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileOpenPicker2)->PickSingleFileAndContinue());
}

template <typename D> void consume_Windows_Storage_Pickers_IFileOpenPicker2<D>::PickMultipleFilesAndContinue() const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileOpenPicker2)->PickMultipleFilesAndContinue());
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Storage_Pickers_IFileOpenPickerStatics<D>::ResumePickSingleFileAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> pickSingleFileOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileOpenPickerStatics)->ResumePickSingleFileAsync(put_abi(pickSingleFileOperation)));
    return pickSingleFileOperation;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Storage_Pickers_IFileOpenPickerWithOperationId<D>::PickSingleFileAsync(param::hstring const& pickerOperationId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> pickSingleFileOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileOpenPickerWithOperationId)->PickSingleFileAsync(get_abi(pickerOperationId), put_abi(pickSingleFileOperation)));
    return pickSingleFileOperation;
}

template <typename D> hstring consume_Windows_Storage_Pickers_IFileSavePicker<D>::SettingsIdentifier() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker)->get_SettingsIdentifier(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFileSavePicker<D>::SettingsIdentifier(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker)->put_SettingsIdentifier(get_abi(value)));
}

template <typename D> Windows::Storage::Pickers::PickerLocationId consume_Windows_Storage_Pickers_IFileSavePicker<D>::SuggestedStartLocation() const
{
    Windows::Storage::Pickers::PickerLocationId value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker)->get_SuggestedStartLocation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFileSavePicker<D>::SuggestedStartLocation(Windows::Storage::Pickers::PickerLocationId const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker)->put_SuggestedStartLocation(get_abi(value)));
}

template <typename D> hstring consume_Windows_Storage_Pickers_IFileSavePicker<D>::CommitButtonText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker)->get_CommitButtonText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFileSavePicker<D>::CommitButtonText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker)->put_CommitButtonText(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::Collections::IVector<hstring>> consume_Windows_Storage_Pickers_IFileSavePicker<D>::FileTypeChoices() const
{
    Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::Collections::IVector<hstring>> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker)->get_FileTypeChoices(put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Storage_Pickers_IFileSavePicker<D>::DefaultFileExtension() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker)->get_DefaultFileExtension(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFileSavePicker<D>::DefaultFileExtension(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker)->put_DefaultFileExtension(get_abi(value)));
}

template <typename D> Windows::Storage::StorageFile consume_Windows_Storage_Pickers_IFileSavePicker<D>::SuggestedSaveFile() const
{
    Windows::Storage::StorageFile value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker)->get_SuggestedSaveFile(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFileSavePicker<D>::SuggestedSaveFile(Windows::Storage::StorageFile const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker)->put_SuggestedSaveFile(get_abi(value)));
}

template <typename D> hstring consume_Windows_Storage_Pickers_IFileSavePicker<D>::SuggestedFileName() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker)->get_SuggestedFileName(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFileSavePicker<D>::SuggestedFileName(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker)->put_SuggestedFileName(get_abi(value)));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> consume_Windows_Storage_Pickers_IFileSavePicker<D>::PickSaveFileAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> pickSaveFileOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker)->PickSaveFileAsync(put_abi(pickSaveFileOperation)));
    return pickSaveFileOperation;
}

template <typename D> Windows::Foundation::Collections::ValueSet consume_Windows_Storage_Pickers_IFileSavePicker2<D>::ContinuationData() const
{
    Windows::Foundation::Collections::ValueSet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker2)->get_ContinuationData(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFileSavePicker2<D>::PickSaveFileAndContinue() const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker2)->PickSaveFileAndContinue());
}

template <typename D> hstring consume_Windows_Storage_Pickers_IFileSavePicker3<D>::EnterpriseId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker3)->get_EnterpriseId(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFileSavePicker3<D>::EnterpriseId(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFileSavePicker3)->put_EnterpriseId(get_abi(value)));
}

template <typename D> Windows::Storage::Pickers::PickerViewMode consume_Windows_Storage_Pickers_IFolderPicker<D>::ViewMode() const
{
    Windows::Storage::Pickers::PickerViewMode value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFolderPicker)->get_ViewMode(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFolderPicker<D>::ViewMode(Windows::Storage::Pickers::PickerViewMode const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFolderPicker)->put_ViewMode(get_abi(value)));
}

template <typename D> hstring consume_Windows_Storage_Pickers_IFolderPicker<D>::SettingsIdentifier() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFolderPicker)->get_SettingsIdentifier(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFolderPicker<D>::SettingsIdentifier(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFolderPicker)->put_SettingsIdentifier(get_abi(value)));
}

template <typename D> Windows::Storage::Pickers::PickerLocationId consume_Windows_Storage_Pickers_IFolderPicker<D>::SuggestedStartLocation() const
{
    Windows::Storage::Pickers::PickerLocationId value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFolderPicker)->get_SuggestedStartLocation(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFolderPicker<D>::SuggestedStartLocation(Windows::Storage::Pickers::PickerLocationId const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFolderPicker)->put_SuggestedStartLocation(get_abi(value)));
}

template <typename D> hstring consume_Windows_Storage_Pickers_IFolderPicker<D>::CommitButtonText() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFolderPicker)->get_CommitButtonText(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFolderPicker<D>::CommitButtonText(param::hstring const& value) const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFolderPicker)->put_CommitButtonText(get_abi(value)));
}

template <typename D> Windows::Foundation::Collections::IVector<hstring> consume_Windows_Storage_Pickers_IFolderPicker<D>::FileTypeFilter() const
{
    Windows::Foundation::Collections::IVector<hstring> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFolderPicker)->get_FileTypeFilter(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> consume_Windows_Storage_Pickers_IFolderPicker<D>::PickSingleFolderAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> pickSingleFolderOperation{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFolderPicker)->PickSingleFolderAsync(put_abi(pickSingleFolderOperation)));
    return pickSingleFolderOperation;
}

template <typename D> Windows::Foundation::Collections::ValueSet consume_Windows_Storage_Pickers_IFolderPicker2<D>::ContinuationData() const
{
    Windows::Foundation::Collections::ValueSet value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFolderPicker2)->get_ContinuationData(put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Storage_Pickers_IFolderPicker2<D>::PickFolderAndContinue() const
{
    check_hresult(WINRT_SHIM(Windows::Storage::Pickers::IFolderPicker2)->PickFolderAndContinue());
}

template <typename D>
struct produce<D, Windows::Storage::Pickers::IFileOpenPicker> : produce_base<D, Windows::Storage::Pickers::IFileOpenPicker>
{
    HRESULT __stdcall get_ViewMode(abi_t<Windows::Storage::Pickers::PickerViewMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ViewMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ViewMode(abi_t<Windows::Storage::Pickers::PickerViewMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ViewMode(*reinterpret_cast<Windows::Storage::Pickers::PickerViewMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SettingsIdentifier(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SettingsIdentifier());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SettingsIdentifier(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SettingsIdentifier(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SuggestedStartLocation(abi_t<Windows::Storage::Pickers::PickerLocationId>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SuggestedStartLocation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SuggestedStartLocation(abi_t<Windows::Storage::Pickers::PickerLocationId> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SuggestedStartLocation(*reinterpret_cast<Windows::Storage::Pickers::PickerLocationId const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CommitButtonText(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CommitButtonText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CommitButtonText(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CommitButtonText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FileTypeFilter(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FileTypeFilter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PickSingleFileAsync(::IUnknown** pickSingleFileOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pickSingleFileOperation = detach_abi(this->shim().PickSingleFileAsync());
            return S_OK;
        }
        catch (...)
        {
            *pickSingleFileOperation = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PickMultipleFilesAsync(::IUnknown** pickMultipleFilesOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pickMultipleFilesOperation = detach_abi(this->shim().PickMultipleFilesAsync());
            return S_OK;
        }
        catch (...)
        {
            *pickMultipleFilesOperation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::IFileOpenPicker2> : produce_base<D, Windows::Storage::Pickers::IFileOpenPicker2>
{
    HRESULT __stdcall get_ContinuationData(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContinuationData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PickSingleFileAndContinue() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PickSingleFileAndContinue();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PickMultipleFilesAndContinue() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PickMultipleFilesAndContinue();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::IFileOpenPickerStatics> : produce_base<D, Windows::Storage::Pickers::IFileOpenPickerStatics>
{
    HRESULT __stdcall ResumePickSingleFileAsync(::IUnknown** pickSingleFileOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pickSingleFileOperation = detach_abi(this->shim().ResumePickSingleFileAsync());
            return S_OK;
        }
        catch (...)
        {
            *pickSingleFileOperation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::IFileOpenPickerWithOperationId> : produce_base<D, Windows::Storage::Pickers::IFileOpenPickerWithOperationId>
{
    HRESULT __stdcall PickSingleFileAsync(HSTRING pickerOperationId, ::IUnknown** pickSingleFileOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pickSingleFileOperation = detach_abi(this->shim().PickSingleFileAsync(*reinterpret_cast<hstring const*>(&pickerOperationId)));
            return S_OK;
        }
        catch (...)
        {
            *pickSingleFileOperation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::IFileSavePicker> : produce_base<D, Windows::Storage::Pickers::IFileSavePicker>
{
    HRESULT __stdcall get_SettingsIdentifier(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SettingsIdentifier());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SettingsIdentifier(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SettingsIdentifier(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SuggestedStartLocation(abi_t<Windows::Storage::Pickers::PickerLocationId>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SuggestedStartLocation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SuggestedStartLocation(abi_t<Windows::Storage::Pickers::PickerLocationId> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SuggestedStartLocation(*reinterpret_cast<Windows::Storage::Pickers::PickerLocationId const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CommitButtonText(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CommitButtonText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CommitButtonText(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CommitButtonText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FileTypeChoices(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FileTypeChoices());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_DefaultFileExtension(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().DefaultFileExtension());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_DefaultFileExtension(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DefaultFileExtension(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SuggestedSaveFile(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SuggestedSaveFile());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SuggestedSaveFile(::IUnknown* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SuggestedSaveFile(*reinterpret_cast<Windows::Storage::StorageFile const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SuggestedFileName(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SuggestedFileName());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SuggestedFileName(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SuggestedFileName(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PickSaveFileAsync(::IUnknown** pickSaveFileOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pickSaveFileOperation = detach_abi(this->shim().PickSaveFileAsync());
            return S_OK;
        }
        catch (...)
        {
            *pickSaveFileOperation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::IFileSavePicker2> : produce_base<D, Windows::Storage::Pickers::IFileSavePicker2>
{
    HRESULT __stdcall get_ContinuationData(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContinuationData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PickSaveFileAndContinue() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PickSaveFileAndContinue();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::IFileSavePicker3> : produce_base<D, Windows::Storage::Pickers::IFileSavePicker3>
{
    HRESULT __stdcall get_EnterpriseId(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().EnterpriseId());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_EnterpriseId(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EnterpriseId(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::IFolderPicker> : produce_base<D, Windows::Storage::Pickers::IFolderPicker>
{
    HRESULT __stdcall get_ViewMode(abi_t<Windows::Storage::Pickers::PickerViewMode>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ViewMode());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_ViewMode(abi_t<Windows::Storage::Pickers::PickerViewMode> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ViewMode(*reinterpret_cast<Windows::Storage::Pickers::PickerViewMode const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SettingsIdentifier(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SettingsIdentifier());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SettingsIdentifier(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SettingsIdentifier(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_SuggestedStartLocation(abi_t<Windows::Storage::Pickers::PickerLocationId>* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().SuggestedStartLocation());
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_SuggestedStartLocation(abi_t<Windows::Storage::Pickers::PickerLocationId> value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SuggestedStartLocation(*reinterpret_cast<Windows::Storage::Pickers::PickerLocationId const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_CommitButtonText(HSTRING* value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().CommitButtonText());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall put_CommitButtonText(HSTRING value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CommitButtonText(*reinterpret_cast<hstring const*>(&value));
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall get_FileTypeFilter(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().FileTypeFilter());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PickSingleFolderAsync(::IUnknown** pickSingleFolderOperation) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *pickSingleFolderOperation = detach_abi(this->shim().PickSingleFolderAsync());
            return S_OK;
        }
        catch (...)
        {
            *pickSingleFolderOperation = nullptr;
            return impl::to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Storage::Pickers::IFolderPicker2> : produce_base<D, Windows::Storage::Pickers::IFolderPicker2>
{
    HRESULT __stdcall get_ContinuationData(::IUnknown** value) noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_abi(this->shim().ContinuationData());
            return S_OK;
        }
        catch (...)
        {
            *value = nullptr;
            return impl::to_hresult();
        }
    }

    HRESULT __stdcall PickFolderAndContinue() noexcept override
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PickFolderAndContinue();
            return S_OK;
        }
        catch (...)
        {
            return impl::to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Storage::Pickers {

inline FileOpenPicker::FileOpenPicker() :
    FileOpenPicker(activate_instance<FileOpenPicker>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> FileOpenPicker::ResumePickSingleFileAsync()
{
    return get_activation_factory<FileOpenPicker, Windows::Storage::Pickers::IFileOpenPickerStatics>().ResumePickSingleFileAsync();
}

inline FileSavePicker::FileSavePicker() :
    FileSavePicker(activate_instance<FileSavePicker>())
{}

inline FolderPicker::FolderPicker() :
    FolderPicker(activate_instance<FolderPicker>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Storage::Pickers::IFileOpenPicker> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Pickers::IFileOpenPicker> {};

template<> struct hash<winrt::Windows::Storage::Pickers::IFileOpenPicker2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Pickers::IFileOpenPicker2> {};

template<> struct hash<winrt::Windows::Storage::Pickers::IFileOpenPickerStatics> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Pickers::IFileOpenPickerStatics> {};

template<> struct hash<winrt::Windows::Storage::Pickers::IFileOpenPickerWithOperationId> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Pickers::IFileOpenPickerWithOperationId> {};

template<> struct hash<winrt::Windows::Storage::Pickers::IFileSavePicker> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Pickers::IFileSavePicker> {};

template<> struct hash<winrt::Windows::Storage::Pickers::IFileSavePicker2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Pickers::IFileSavePicker2> {};

template<> struct hash<winrt::Windows::Storage::Pickers::IFileSavePicker3> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Pickers::IFileSavePicker3> {};

template<> struct hash<winrt::Windows::Storage::Pickers::IFolderPicker> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Pickers::IFolderPicker> {};

template<> struct hash<winrt::Windows::Storage::Pickers::IFolderPicker2> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Pickers::IFolderPicker2> {};

template<> struct hash<winrt::Windows::Storage::Pickers::FileExtensionVector> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Pickers::FileExtensionVector> {};

template<> struct hash<winrt::Windows::Storage::Pickers::FileOpenPicker> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Pickers::FileOpenPicker> {};

template<> struct hash<winrt::Windows::Storage::Pickers::FilePickerFileTypesOrderedMap> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Pickers::FilePickerFileTypesOrderedMap> {};

template<> struct hash<winrt::Windows::Storage::Pickers::FilePickerSelectedFilesArray> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Pickers::FilePickerSelectedFilesArray> {};

template<> struct hash<winrt::Windows::Storage::Pickers::FileSavePicker> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Pickers::FileSavePicker> {};

template<> struct hash<winrt::Windows::Storage::Pickers::FolderPicker> : 
    winrt::impl::impl_hash_unknown<winrt::Windows::Storage::Pickers::FolderPicker> {};

}

WINRT_WARNING_POP
