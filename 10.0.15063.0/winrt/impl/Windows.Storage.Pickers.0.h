// C++/WinRT v1.0.170825.9
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once

WINRT_EXPORT namespace winrt::Windows::Foundation::Collections {

struct ValueSet;

}

WINRT_EXPORT namespace winrt::Windows::Storage {

struct StorageFile;
struct StorageFolder;

}

WINRT_EXPORT namespace winrt::Windows::Storage::Pickers {

enum class PickerLocationId
{
    DocumentsLibrary = 0,
    ComputerFolder = 1,
    Desktop = 2,
    Downloads = 3,
    HomeGroup = 4,
    MusicLibrary = 5,
    PicturesLibrary = 6,
    VideosLibrary = 7,
    Objects3D = 8,
    Unspecified = 9,
};

enum class PickerViewMode
{
    List = 0,
    Thumbnail = 1,
};

struct IFileOpenPicker;
struct IFileOpenPicker2;
struct IFileOpenPickerStatics;
struct IFileOpenPickerWithOperationId;
struct IFileSavePicker;
struct IFileSavePicker2;
struct IFileSavePicker3;
struct IFolderPicker;
struct IFolderPicker2;
struct FileExtensionVector;
struct FileOpenPicker;
struct FilePickerFileTypesOrderedMap;
struct FilePickerSelectedFilesArray;
struct FileSavePicker;
struct FolderPicker;

}

namespace winrt::impl {

template <> struct category<Windows::Storage::Pickers::IFileOpenPicker>{ using type = interface_category; };
template <> struct category<Windows::Storage::Pickers::IFileOpenPicker2>{ using type = interface_category; };
template <> struct category<Windows::Storage::Pickers::IFileOpenPickerStatics>{ using type = interface_category; };
template <> struct category<Windows::Storage::Pickers::IFileOpenPickerWithOperationId>{ using type = interface_category; };
template <> struct category<Windows::Storage::Pickers::IFileSavePicker>{ using type = interface_category; };
template <> struct category<Windows::Storage::Pickers::IFileSavePicker2>{ using type = interface_category; };
template <> struct category<Windows::Storage::Pickers::IFileSavePicker3>{ using type = interface_category; };
template <> struct category<Windows::Storage::Pickers::IFolderPicker>{ using type = interface_category; };
template <> struct category<Windows::Storage::Pickers::IFolderPicker2>{ using type = interface_category; };
template <> struct category<Windows::Storage::Pickers::FileExtensionVector>{ using type = class_category; };
template <> struct category<Windows::Storage::Pickers::FileOpenPicker>{ using type = class_category; };
template <> struct category<Windows::Storage::Pickers::FilePickerFileTypesOrderedMap>{ using type = class_category; };
template <> struct category<Windows::Storage::Pickers::FilePickerSelectedFilesArray>{ using type = class_category; };
template <> struct category<Windows::Storage::Pickers::FileSavePicker>{ using type = class_category; };
template <> struct category<Windows::Storage::Pickers::FolderPicker>{ using type = class_category; };
template <> struct category<Windows::Storage::Pickers::PickerLocationId>{ using type = enum_category; };
template <> struct category<Windows::Storage::Pickers::PickerViewMode>{ using type = enum_category; };
template <> struct name<Windows::Storage::Pickers::IFileOpenPicker>{ static constexpr auto & value{ L"Windows.Storage.Pickers.IFileOpenPicker" }; };
template <> struct name<Windows::Storage::Pickers::IFileOpenPicker2>{ static constexpr auto & value{ L"Windows.Storage.Pickers.IFileOpenPicker2" }; };
template <> struct name<Windows::Storage::Pickers::IFileOpenPickerStatics>{ static constexpr auto & value{ L"Windows.Storage.Pickers.IFileOpenPickerStatics" }; };
template <> struct name<Windows::Storage::Pickers::IFileOpenPickerWithOperationId>{ static constexpr auto & value{ L"Windows.Storage.Pickers.IFileOpenPickerWithOperationId" }; };
template <> struct name<Windows::Storage::Pickers::IFileSavePicker>{ static constexpr auto & value{ L"Windows.Storage.Pickers.IFileSavePicker" }; };
template <> struct name<Windows::Storage::Pickers::IFileSavePicker2>{ static constexpr auto & value{ L"Windows.Storage.Pickers.IFileSavePicker2" }; };
template <> struct name<Windows::Storage::Pickers::IFileSavePicker3>{ static constexpr auto & value{ L"Windows.Storage.Pickers.IFileSavePicker3" }; };
template <> struct name<Windows::Storage::Pickers::IFolderPicker>{ static constexpr auto & value{ L"Windows.Storage.Pickers.IFolderPicker" }; };
template <> struct name<Windows::Storage::Pickers::IFolderPicker2>{ static constexpr auto & value{ L"Windows.Storage.Pickers.IFolderPicker2" }; };
template <> struct name<Windows::Storage::Pickers::FileExtensionVector>{ static constexpr auto & value{ L"Windows.Storage.Pickers.FileExtensionVector" }; };
template <> struct name<Windows::Storage::Pickers::FileOpenPicker>{ static constexpr auto & value{ L"Windows.Storage.Pickers.FileOpenPicker" }; };
template <> struct name<Windows::Storage::Pickers::FilePickerFileTypesOrderedMap>{ static constexpr auto & value{ L"Windows.Storage.Pickers.FilePickerFileTypesOrderedMap" }; };
template <> struct name<Windows::Storage::Pickers::FilePickerSelectedFilesArray>{ static constexpr auto & value{ L"Windows.Storage.Pickers.FilePickerSelectedFilesArray" }; };
template <> struct name<Windows::Storage::Pickers::FileSavePicker>{ static constexpr auto & value{ L"Windows.Storage.Pickers.FileSavePicker" }; };
template <> struct name<Windows::Storage::Pickers::FolderPicker>{ static constexpr auto & value{ L"Windows.Storage.Pickers.FolderPicker" }; };
template <> struct name<Windows::Storage::Pickers::PickerLocationId>{ static constexpr auto & value{ L"Windows.Storage.Pickers.PickerLocationId" }; };
template <> struct name<Windows::Storage::Pickers::PickerViewMode>{ static constexpr auto & value{ L"Windows.Storage.Pickers.PickerViewMode" }; };
template <> struct guid<Windows::Storage::Pickers::IFileOpenPicker>{ static constexpr GUID value{ 0x2CA8278A,0x12C5,0x4C5F,{ 0x89,0x77,0x94,0x54,0x77,0x93,0xC2,0x41 } }; };
template <> struct guid<Windows::Storage::Pickers::IFileOpenPicker2>{ static constexpr GUID value{ 0x8CEB6CD2,0xB446,0x46F7,{ 0xB2,0x65,0x90,0xF8,0xE5,0x5A,0xD6,0x50 } }; };
template <> struct guid<Windows::Storage::Pickers::IFileOpenPickerStatics>{ static constexpr GUID value{ 0x6821573B,0x2F02,0x4833,{ 0x96,0xD4,0xAB,0xBF,0xAD,0x72,0xB6,0x7B } }; };
template <> struct guid<Windows::Storage::Pickers::IFileOpenPickerWithOperationId>{ static constexpr GUID value{ 0x3F57B569,0x2522,0x4CA5,{ 0xAA,0x73,0xA1,0x55,0x09,0xF1,0xFC,0xBF } }; };
template <> struct guid<Windows::Storage::Pickers::IFileSavePicker>{ static constexpr GUID value{ 0x3286FFCB,0x617F,0x4CC5,{ 0xAF,0x6A,0xB3,0xFD,0xF2,0x9A,0xD1,0x45 } }; };
template <> struct guid<Windows::Storage::Pickers::IFileSavePicker2>{ static constexpr GUID value{ 0x0EC313A2,0xD24B,0x449A,{ 0x81,0x97,0xE8,0x91,0x04,0xFD,0x42,0xCC } }; };
template <> struct guid<Windows::Storage::Pickers::IFileSavePicker3>{ static constexpr GUID value{ 0x698AEC69,0xBA3C,0x4E51,{ 0xBD,0x90,0x4A,0xBC,0xBB,0xF4,0xCF,0xAF } }; };
template <> struct guid<Windows::Storage::Pickers::IFolderPicker>{ static constexpr GUID value{ 0x084F7799,0xF3FB,0x400A,{ 0x99,0xB1,0x7B,0x4A,0x77,0x2F,0xD6,0x0D } }; };
template <> struct guid<Windows::Storage::Pickers::IFolderPicker2>{ static constexpr GUID value{ 0x8EB3BA97,0xDC85,0x4616,{ 0xBE,0x94,0x96,0x60,0x88,0x1F,0x2F,0x5D } }; };
template <> struct default_interface<Windows::Storage::Pickers::FileExtensionVector>{ using type = Windows::Foundation::Collections::IVector<hstring>; };
template <> struct default_interface<Windows::Storage::Pickers::FileOpenPicker>{ using type = Windows::Storage::Pickers::IFileOpenPicker; };
template <> struct default_interface<Windows::Storage::Pickers::FilePickerFileTypesOrderedMap>{ using type = Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::Collections::IVector<hstring>>; };
template <> struct default_interface<Windows::Storage::Pickers::FilePickerSelectedFilesArray>{ using type = Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>; };
template <> struct default_interface<Windows::Storage::Pickers::FileSavePicker>{ using type = Windows::Storage::Pickers::IFileSavePicker; };
template <> struct default_interface<Windows::Storage::Pickers::FolderPicker>{ using type = Windows::Storage::Pickers::IFolderPicker; };

template <typename D>
struct consume_Windows_Storage_Pickers_IFileOpenPicker
{
    Windows::Storage::Pickers::PickerViewMode ViewMode() const;
    void ViewMode(Windows::Storage::Pickers::PickerViewMode const& value) const;
    hstring SettingsIdentifier() const;
    void SettingsIdentifier(param::hstring const& value) const;
    Windows::Storage::Pickers::PickerLocationId SuggestedStartLocation() const;
    void SuggestedStartLocation(Windows::Storage::Pickers::PickerLocationId const& value) const;
    hstring CommitButtonText() const;
    void CommitButtonText(param::hstring const& value) const;
    Windows::Foundation::Collections::IVector<hstring> FileTypeFilter() const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> PickSingleFileAsync() const;
    Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>> PickMultipleFilesAsync() const;
};
template <> struct consume<Windows::Storage::Pickers::IFileOpenPicker> { template <typename D> using type = consume_Windows_Storage_Pickers_IFileOpenPicker<D>; };

template <typename D>
struct consume_Windows_Storage_Pickers_IFileOpenPicker2
{
    [[deprecated("Instead, use PickSingleFileAsync/PickMultipleFilesAsync")]] Windows::Foundation::Collections::ValueSet ContinuationData() const;
    [[deprecated("Instead, use PickSingleFileAsync")]] void PickSingleFileAndContinue() const;
    [[deprecated("Instead, use PickMultipleFilesAsync")]] void PickMultipleFilesAndContinue() const;
};
template <> struct consume<Windows::Storage::Pickers::IFileOpenPicker2> { template <typename D> using type = consume_Windows_Storage_Pickers_IFileOpenPicker2<D>; };

template <typename D>
struct consume_Windows_Storage_Pickers_IFileOpenPickerStatics
{
    [[deprecated("Instead, use PickSingleFileAsync")]] Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> ResumePickSingleFileAsync() const;
};
template <> struct consume<Windows::Storage::Pickers::IFileOpenPickerStatics> { template <typename D> using type = consume_Windows_Storage_Pickers_IFileOpenPickerStatics<D>; };

template <typename D>
struct consume_Windows_Storage_Pickers_IFileOpenPickerWithOperationId
{
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> PickSingleFileAsync(param::hstring const& pickerOperationId) const;
};
template <> struct consume<Windows::Storage::Pickers::IFileOpenPickerWithOperationId> { template <typename D> using type = consume_Windows_Storage_Pickers_IFileOpenPickerWithOperationId<D>; };

template <typename D>
struct consume_Windows_Storage_Pickers_IFileSavePicker
{
    hstring SettingsIdentifier() const;
    void SettingsIdentifier(param::hstring const& value) const;
    Windows::Storage::Pickers::PickerLocationId SuggestedStartLocation() const;
    void SuggestedStartLocation(Windows::Storage::Pickers::PickerLocationId const& value) const;
    hstring CommitButtonText() const;
    void CommitButtonText(param::hstring const& value) const;
    Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::Collections::IVector<hstring>> FileTypeChoices() const;
    hstring DefaultFileExtension() const;
    void DefaultFileExtension(param::hstring const& value) const;
    Windows::Storage::StorageFile SuggestedSaveFile() const;
    void SuggestedSaveFile(Windows::Storage::StorageFile const& value) const;
    hstring SuggestedFileName() const;
    void SuggestedFileName(param::hstring const& value) const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile> PickSaveFileAsync() const;
};
template <> struct consume<Windows::Storage::Pickers::IFileSavePicker> { template <typename D> using type = consume_Windows_Storage_Pickers_IFileSavePicker<D>; };

template <typename D>
struct consume_Windows_Storage_Pickers_IFileSavePicker2
{
    Windows::Foundation::Collections::ValueSet ContinuationData() const;
    [[deprecated("Instead, use PickSaveFileAsync")]] void PickSaveFileAndContinue() const;
};
template <> struct consume<Windows::Storage::Pickers::IFileSavePicker2> { template <typename D> using type = consume_Windows_Storage_Pickers_IFileSavePicker2<D>; };

template <typename D>
struct consume_Windows_Storage_Pickers_IFileSavePicker3
{
    hstring EnterpriseId() const;
    void EnterpriseId(param::hstring const& value) const;
};
template <> struct consume<Windows::Storage::Pickers::IFileSavePicker3> { template <typename D> using type = consume_Windows_Storage_Pickers_IFileSavePicker3<D>; };

template <typename D>
struct consume_Windows_Storage_Pickers_IFolderPicker
{
    Windows::Storage::Pickers::PickerViewMode ViewMode() const;
    void ViewMode(Windows::Storage::Pickers::PickerViewMode const& value) const;
    hstring SettingsIdentifier() const;
    void SettingsIdentifier(param::hstring const& value) const;
    Windows::Storage::Pickers::PickerLocationId SuggestedStartLocation() const;
    void SuggestedStartLocation(Windows::Storage::Pickers::PickerLocationId const& value) const;
    hstring CommitButtonText() const;
    void CommitButtonText(param::hstring const& value) const;
    Windows::Foundation::Collections::IVector<hstring> FileTypeFilter() const;
    Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder> PickSingleFolderAsync() const;
};
template <> struct consume<Windows::Storage::Pickers::IFolderPicker> { template <typename D> using type = consume_Windows_Storage_Pickers_IFolderPicker<D>; };

template <typename D>
struct consume_Windows_Storage_Pickers_IFolderPicker2
{
    Windows::Foundation::Collections::ValueSet ContinuationData() const;
    [[deprecated("Instead, use PickSingleFolderAsync")]] void PickFolderAndContinue() const;
};
template <> struct consume<Windows::Storage::Pickers::IFolderPicker2> { template <typename D> using type = consume_Windows_Storage_Pickers_IFolderPicker2<D>; };

template <> struct abi<Windows::Storage::Pickers::IFileOpenPicker>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ViewMode(abi_t<Windows::Storage::Pickers::PickerViewMode>* value) = 0;
    virtual HRESULT __stdcall put_ViewMode(abi_t<Windows::Storage::Pickers::PickerViewMode> value) = 0;
    virtual HRESULT __stdcall get_SettingsIdentifier(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_SettingsIdentifier(HSTRING value) = 0;
    virtual HRESULT __stdcall get_SuggestedStartLocation(abi_t<Windows::Storage::Pickers::PickerLocationId>* value) = 0;
    virtual HRESULT __stdcall put_SuggestedStartLocation(abi_t<Windows::Storage::Pickers::PickerLocationId> value) = 0;
    virtual HRESULT __stdcall get_CommitButtonText(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_CommitButtonText(HSTRING value) = 0;
    virtual HRESULT __stdcall get_FileTypeFilter(::IUnknown** value) = 0;
    virtual HRESULT __stdcall PickSingleFileAsync(::IUnknown** pickSingleFileOperation) = 0;
    virtual HRESULT __stdcall PickMultipleFilesAsync(::IUnknown** pickMultipleFilesOperation) = 0;
};};

template <> struct abi<Windows::Storage::Pickers::IFileOpenPicker2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ContinuationData(::IUnknown** value) = 0;
    virtual HRESULT __stdcall PickSingleFileAndContinue() = 0;
    virtual HRESULT __stdcall PickMultipleFilesAndContinue() = 0;
};};

template <> struct abi<Windows::Storage::Pickers::IFileOpenPickerStatics>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall ResumePickSingleFileAsync(::IUnknown** pickSingleFileOperation) = 0;
};};

template <> struct abi<Windows::Storage::Pickers::IFileOpenPickerWithOperationId>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall PickSingleFileAsync(HSTRING pickerOperationId, ::IUnknown** pickSingleFileOperation) = 0;
};};

template <> struct abi<Windows::Storage::Pickers::IFileSavePicker>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_SettingsIdentifier(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_SettingsIdentifier(HSTRING value) = 0;
    virtual HRESULT __stdcall get_SuggestedStartLocation(abi_t<Windows::Storage::Pickers::PickerLocationId>* value) = 0;
    virtual HRESULT __stdcall put_SuggestedStartLocation(abi_t<Windows::Storage::Pickers::PickerLocationId> value) = 0;
    virtual HRESULT __stdcall get_CommitButtonText(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_CommitButtonText(HSTRING value) = 0;
    virtual HRESULT __stdcall get_FileTypeChoices(::IUnknown** value) = 0;
    virtual HRESULT __stdcall get_DefaultFileExtension(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_DefaultFileExtension(HSTRING value) = 0;
    virtual HRESULT __stdcall get_SuggestedSaveFile(::IUnknown** value) = 0;
    virtual HRESULT __stdcall put_SuggestedSaveFile(::IUnknown* value) = 0;
    virtual HRESULT __stdcall get_SuggestedFileName(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_SuggestedFileName(HSTRING value) = 0;
    virtual HRESULT __stdcall PickSaveFileAsync(::IUnknown** pickSaveFileOperation) = 0;
};};

template <> struct abi<Windows::Storage::Pickers::IFileSavePicker2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ContinuationData(::IUnknown** value) = 0;
    virtual HRESULT __stdcall PickSaveFileAndContinue() = 0;
};};

template <> struct abi<Windows::Storage::Pickers::IFileSavePicker3>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_EnterpriseId(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_EnterpriseId(HSTRING value) = 0;
};};

template <> struct abi<Windows::Storage::Pickers::IFolderPicker>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ViewMode(abi_t<Windows::Storage::Pickers::PickerViewMode>* value) = 0;
    virtual HRESULT __stdcall put_ViewMode(abi_t<Windows::Storage::Pickers::PickerViewMode> value) = 0;
    virtual HRESULT __stdcall get_SettingsIdentifier(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_SettingsIdentifier(HSTRING value) = 0;
    virtual HRESULT __stdcall get_SuggestedStartLocation(abi_t<Windows::Storage::Pickers::PickerLocationId>* value) = 0;
    virtual HRESULT __stdcall put_SuggestedStartLocation(abi_t<Windows::Storage::Pickers::PickerLocationId> value) = 0;
    virtual HRESULT __stdcall get_CommitButtonText(HSTRING* value) = 0;
    virtual HRESULT __stdcall put_CommitButtonText(HSTRING value) = 0;
    virtual HRESULT __stdcall get_FileTypeFilter(::IUnknown** value) = 0;
    virtual HRESULT __stdcall PickSingleFolderAsync(::IUnknown** pickSingleFolderOperation) = 0;
};};

template <> struct abi<Windows::Storage::Pickers::IFolderPicker2>{ struct type : ::IInspectable
{
    virtual HRESULT __stdcall get_ContinuationData(::IUnknown** value) = 0;
    virtual HRESULT __stdcall PickFolderAndContinue() = 0;
};};

}
