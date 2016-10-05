// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once

#include "../base.h"
#include "Windows.Storage.Pickers.0.h"
#include "Windows.Foundation.Collections.0.h"
#include "Windows.Storage.0.h"
#include "Windows.Storage.1.h"
#include "Windows.Foundation.Collections.1.h"
#include "Windows.Foundation.1.h"

WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Storage::Pickers {

struct __declspec(uuid("2ca8278a-12c5-4c5f-8977-94547793c241")) __declspec(novtable) IFileOpenPicker : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ViewMode(winrt::Windows::Storage::Pickers::PickerViewMode * value) = 0;
    virtual HRESULT __stdcall put_ViewMode(winrt::Windows::Storage::Pickers::PickerViewMode value) = 0;
    virtual HRESULT __stdcall get_SettingsIdentifier(hstring * value) = 0;
    virtual HRESULT __stdcall put_SettingsIdentifier(hstring value) = 0;
    virtual HRESULT __stdcall get_SuggestedStartLocation(winrt::Windows::Storage::Pickers::PickerLocationId * value) = 0;
    virtual HRESULT __stdcall put_SuggestedStartLocation(winrt::Windows::Storage::Pickers::PickerLocationId value) = 0;
    virtual HRESULT __stdcall get_CommitButtonText(hstring * value) = 0;
    virtual HRESULT __stdcall put_CommitButtonText(hstring value) = 0;
    virtual HRESULT __stdcall get_FileTypeFilter(Windows::Foundation::Collections::IVector<hstring> ** value) = 0;
    virtual HRESULT __stdcall abi_PickSingleFileAsync(Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> ** pickSingleFileOperation) = 0;
    virtual HRESULT __stdcall abi_PickMultipleFilesAsync(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> ** pickMultipleFilesOperation) = 0;
};

struct __declspec(uuid("8ceb6cd2-b446-46f7-b265-90f8e55ad650")) __declspec(novtable) IFileOpenPicker2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ContinuationData(Windows::Foundation::Collections::IPropertySet ** value) = 0;
    virtual HRESULT __stdcall abi_PickSingleFileAndContinue() = 0;
    virtual HRESULT __stdcall abi_PickMultipleFilesAndContinue() = 0;
};

struct __declspec(uuid("6821573b-2f02-4833-96d4-abbfad72b67b")) __declspec(novtable) IFileOpenPickerStatics : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_ResumePickSingleFileAsync(Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> ** pickSingleFileOperation) = 0;
};

struct __declspec(uuid("3f57b569-2522-4ca5-aa73-a15509f1fcbf")) __declspec(novtable) IFileOpenPickerWithOperationId : Windows::IInspectable
{
    virtual HRESULT __stdcall abi_PickSingleFileAsync(hstring pickerOperationId, Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> ** pickSingleFileOperation) = 0;
};

struct __declspec(uuid("3286ffcb-617f-4cc5-af6a-b3fdf29ad145")) __declspec(novtable) IFileSavePicker : Windows::IInspectable
{
    virtual HRESULT __stdcall get_SettingsIdentifier(hstring * value) = 0;
    virtual HRESULT __stdcall put_SettingsIdentifier(hstring value) = 0;
    virtual HRESULT __stdcall get_SuggestedStartLocation(winrt::Windows::Storage::Pickers::PickerLocationId * value) = 0;
    virtual HRESULT __stdcall put_SuggestedStartLocation(winrt::Windows::Storage::Pickers::PickerLocationId value) = 0;
    virtual HRESULT __stdcall get_CommitButtonText(hstring * value) = 0;
    virtual HRESULT __stdcall put_CommitButtonText(hstring value) = 0;
    virtual HRESULT __stdcall get_FileTypeChoices(Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::Collections::IVector<hstring>> ** value) = 0;
    virtual HRESULT __stdcall get_DefaultFileExtension(hstring * value) = 0;
    virtual HRESULT __stdcall put_DefaultFileExtension(hstring value) = 0;
    virtual HRESULT __stdcall get_SuggestedSaveFile(Windows::Storage::IStorageFile ** value) = 0;
    virtual HRESULT __stdcall put_SuggestedSaveFile(Windows::Storage::IStorageFile * value) = 0;
    virtual HRESULT __stdcall get_SuggestedFileName(hstring * value) = 0;
    virtual HRESULT __stdcall put_SuggestedFileName(hstring value) = 0;
    virtual HRESULT __stdcall abi_PickSaveFileAsync(Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> ** pickSaveFileOperation) = 0;
};

struct __declspec(uuid("0ec313a2-d24b-449a-8197-e89104fd42cc")) __declspec(novtable) IFileSavePicker2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ContinuationData(Windows::Foundation::Collections::IPropertySet ** value) = 0;
    virtual HRESULT __stdcall abi_PickSaveFileAndContinue() = 0;
};

struct __declspec(uuid("698aec69-ba3c-4e51-bd90-4abcbbf4cfaf")) __declspec(novtable) IFileSavePicker3 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_EnterpriseId(hstring * value) = 0;
    virtual HRESULT __stdcall put_EnterpriseId(hstring value) = 0;
};

struct __declspec(uuid("084f7799-f3fb-400a-99b1-7b4a772fd60d")) __declspec(novtable) IFolderPicker : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ViewMode(winrt::Windows::Storage::Pickers::PickerViewMode * value) = 0;
    virtual HRESULT __stdcall put_ViewMode(winrt::Windows::Storage::Pickers::PickerViewMode value) = 0;
    virtual HRESULT __stdcall get_SettingsIdentifier(hstring * value) = 0;
    virtual HRESULT __stdcall put_SettingsIdentifier(hstring value) = 0;
    virtual HRESULT __stdcall get_SuggestedStartLocation(winrt::Windows::Storage::Pickers::PickerLocationId * value) = 0;
    virtual HRESULT __stdcall put_SuggestedStartLocation(winrt::Windows::Storage::Pickers::PickerLocationId value) = 0;
    virtual HRESULT __stdcall get_CommitButtonText(hstring * value) = 0;
    virtual HRESULT __stdcall put_CommitButtonText(hstring value) = 0;
    virtual HRESULT __stdcall get_FileTypeFilter(Windows::Foundation::Collections::IVector<hstring> ** value) = 0;
    virtual HRESULT __stdcall abi_PickSingleFolderAsync(Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> ** pickSingleFolderOperation) = 0;
};

struct __declspec(uuid("8eb3ba97-dc85-4616-be94-9660881f2f5d")) __declspec(novtable) IFolderPicker2 : Windows::IInspectable
{
    virtual HRESULT __stdcall get_ContinuationData(Windows::Foundation::Collections::IPropertySet ** value) = 0;
    virtual HRESULT __stdcall abi_PickFolderAndContinue() = 0;
};

}

namespace ABI {

template <> struct traits<Windows::Storage::Pickers::FileExtensionVector> { using default_interface = Windows::Foundation::Collections::IVector<hstring>; };
template <> struct traits<Windows::Storage::Pickers::FileOpenPicker> { using default_interface = Windows::Storage::Pickers::IFileOpenPicker; };
template <> struct traits<Windows::Storage::Pickers::FilePickerFileTypesOrderedMap> { using default_interface = Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::Collections::IVector<hstring>>; };
template <> struct traits<Windows::Storage::Pickers::FilePickerSelectedFilesArray> { using default_interface = Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>; };
template <> struct traits<Windows::Storage::Pickers::FileSavePicker> { using default_interface = Windows::Storage::Pickers::IFileSavePicker; };
template <> struct traits<Windows::Storage::Pickers::FolderPicker> { using default_interface = Windows::Storage::Pickers::IFolderPicker; };

}

namespace Windows::Storage::Pickers {

template <typename T> struct impl_IFileOpenPicker;
template <typename T> struct impl_IFileOpenPicker2;
template <typename T> struct impl_IFileOpenPickerStatics;
template <typename T> struct impl_IFileOpenPickerWithOperationId;
template <typename T> struct impl_IFileSavePicker;
template <typename T> struct impl_IFileSavePicker2;
template <typename T> struct impl_IFileSavePicker3;
template <typename T> struct impl_IFolderPicker;
template <typename T> struct impl_IFolderPicker2;

}

namespace impl {

template <> struct traits<Windows::Storage::Pickers::IFileOpenPicker>
{
    using abi = ABI::Windows::Storage::Pickers::IFileOpenPicker;
    template <typename D> using consume = Windows::Storage::Pickers::impl_IFileOpenPicker<D>;
};

template <> struct traits<Windows::Storage::Pickers::IFileOpenPicker2>
{
    using abi = ABI::Windows::Storage::Pickers::IFileOpenPicker2;
    template <typename D> using consume = Windows::Storage::Pickers::impl_IFileOpenPicker2<D>;
};

template <> struct traits<Windows::Storage::Pickers::IFileOpenPickerStatics>
{
    using abi = ABI::Windows::Storage::Pickers::IFileOpenPickerStatics;
    template <typename D> using consume = Windows::Storage::Pickers::impl_IFileOpenPickerStatics<D>;
};

template <> struct traits<Windows::Storage::Pickers::IFileOpenPickerWithOperationId>
{
    using abi = ABI::Windows::Storage::Pickers::IFileOpenPickerWithOperationId;
    template <typename D> using consume = Windows::Storage::Pickers::impl_IFileOpenPickerWithOperationId<D>;
};

template <> struct traits<Windows::Storage::Pickers::IFileSavePicker>
{
    using abi = ABI::Windows::Storage::Pickers::IFileSavePicker;
    template <typename D> using consume = Windows::Storage::Pickers::impl_IFileSavePicker<D>;
};

template <> struct traits<Windows::Storage::Pickers::IFileSavePicker2>
{
    using abi = ABI::Windows::Storage::Pickers::IFileSavePicker2;
    template <typename D> using consume = Windows::Storage::Pickers::impl_IFileSavePicker2<D>;
};

template <> struct traits<Windows::Storage::Pickers::IFileSavePicker3>
{
    using abi = ABI::Windows::Storage::Pickers::IFileSavePicker3;
    template <typename D> using consume = Windows::Storage::Pickers::impl_IFileSavePicker3<D>;
};

template <> struct traits<Windows::Storage::Pickers::IFolderPicker>
{
    using abi = ABI::Windows::Storage::Pickers::IFolderPicker;
    template <typename D> using consume = Windows::Storage::Pickers::impl_IFolderPicker<D>;
};

template <> struct traits<Windows::Storage::Pickers::IFolderPicker2>
{
    using abi = ABI::Windows::Storage::Pickers::IFolderPicker2;
    template <typename D> using consume = Windows::Storage::Pickers::impl_IFolderPicker2<D>;
};

template <> struct traits<Windows::Storage::Pickers::FileExtensionVector>
{
    using abi = ABI::Windows::Storage::Pickers::FileExtensionVector;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Pickers.FileExtensionVector"; }
};

template <> struct traits<Windows::Storage::Pickers::FileOpenPicker>
{
    using abi = ABI::Windows::Storage::Pickers::FileOpenPicker;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Pickers.FileOpenPicker"; }
};

template <> struct traits<Windows::Storage::Pickers::FilePickerFileTypesOrderedMap>
{
    using abi = ABI::Windows::Storage::Pickers::FilePickerFileTypesOrderedMap;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Pickers.FilePickerFileTypesOrderedMap"; }
};

template <> struct traits<Windows::Storage::Pickers::FilePickerSelectedFilesArray>
{
    using abi = ABI::Windows::Storage::Pickers::FilePickerSelectedFilesArray;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Pickers.FilePickerSelectedFilesArray"; }
};

template <> struct traits<Windows::Storage::Pickers::FileSavePicker>
{
    using abi = ABI::Windows::Storage::Pickers::FileSavePicker;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Pickers.FileSavePicker"; }
};

template <> struct traits<Windows::Storage::Pickers::FolderPicker>
{
    using abi = ABI::Windows::Storage::Pickers::FolderPicker;
    static constexpr const wchar_t * name() noexcept { return L"Windows.Storage.Pickers.FolderPicker"; }
};

}

}
